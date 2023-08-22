#import "RTNPassportSpec.h"
#import "RTNPassport.h"
#import <DeviceCheck/DeviceCheck.h>

@implementation RTNPassport

RCT_EXPORT_MODULE()

- (void)getIdentity:(nullable NSString *)nonce resolve:(RCTPromiseResolveBlock)resolve reject:(RCTPromiseRejectBlock)reject {
    if (@available(iOS 11.0, *)) {
        if (TARGET_IPHONE_SIMULATOR) {
            reject(@"NOT_AVAILABLE", @"Device check is only available for physical devices", nil);
            return;
        }

        DCDevice *device = [DCDevice currentDevice];

        if ([device isSupported]) {
            [DCDevice.currentDevice generateTokenWithCompletionHandler:^(NSData * _Nullable token, NSError * _Nullable error) {
                if (error) {
                    reject(@"ERROR_GENERATING_TOKEN", error.localizedDescription, error);
                    return;
                }

                resolve([token base64EncodedStringWithOptions:NSDataBase64EncodingEndLineWithLineFeed]);
            }];
        } else {
            reject(@"NOT_SUPPORTED", @"Device check is not supported by this device", nil);
            return;
        }
    } else {
        reject(@"NOT_AVAILABLE", @"Device check is only available for iOS > 11", nil);
        return;
    }
}

- (std::shared_ptr<facebook::react::TurboModule>)getTurboModule:
    (const facebook::react::ObjCTurboModule::InitParams &)params
{
    return std::make_shared<facebook::react::NativePassportSpecJSI>(params);
}

@end
