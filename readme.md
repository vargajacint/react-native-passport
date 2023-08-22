# React Native Passport

## Useful commands

Run [CodeGen](https://reactnative.dev/docs/the-new-architecture/pillars-codegen) generation

```bash
node example/node_modules/react-native/scripts/generate-codegen-artifacts.js \
  --path example/ \
  --outputPath react-native-passport/generated/
```

Install pods with new arch

```bash
RCT_NEW_ARCH_ENABLED=1 bundle exec pod install
```
