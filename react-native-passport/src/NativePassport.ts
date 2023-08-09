import type { TurboModule } from "react-native/Libraries/TurboModule/RCTExport";
import { TurboModuleRegistry } from "react-native";

export interface Spec extends TurboModule {
  getIdentity(): string;
}

export default TurboModuleRegistry.getEnforcing<Spec>(
  "RTNPassport"
) as Spec | null;
