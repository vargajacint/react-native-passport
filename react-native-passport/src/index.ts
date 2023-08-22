import NativePassport from "./NativePassport";

export function getIdentity(nonce?: string) {
  return NativePassport.getIdentity(nonce ?? undefined);
}
