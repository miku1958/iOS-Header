 protocol CryptoKitPrivate.AEADSealedBox // 6 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// getter
	// getter
	// getter
	// class init
 }
 protocol CryptoKitPrivate.Cipher // 7 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class method
	// class method
 }

 struct CryptoKitPrivate.SymmetricKeySize {

	// Properties
	let bitCount : Int // +0x0
 }

 struct CryptoKitPrivate.SymmetricKey {

	// Properties
	let sb : SecureBytes // +0x0
 }

 class CryptoKitPrivate.Scrypt : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x21a0  @objc Scrypt.init <stripped>
 }

 struct CryptoKitPrivate.SecureBytes {

	// Properties
	var underlyingData : Data // +0x0
 }

 enum CryptoKitPrivate.CryptoKitError {

	// Properties
	case underlyingCoreCryptoError : (error: Int32)
	case incorrectKeySize  
	case incorrectParameterSize  
	case authenticationFailure  
 }
