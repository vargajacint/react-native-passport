#import "RTNPassportSpec.h"
#import "RTNPassport.h"

@implementation RTNPassport

RCT_EXPORT_MODULE()

- (NSString *)getIdentity {
    NSString *result = @"Hello from the other side";

    return result;
}

- (std::shared_ptr<facebook::react::TurboModule>)getTurboModule:
    (const facebook::react::ObjCTurboModule::InitParams &)params
{
    return std::make_shared<facebook::react::NativePassportSpecJSI>(params);
}

@end
