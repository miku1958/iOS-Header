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

 struct CryptoKitPrivate.SecureBytes {

	// Properties
	var backing : Backing // +0x0
 }

 struct CryptoKitPrivate.Index {

	// Properties
	var offset : Int // +0x0
 }

 struct CryptoKitPrivate.BackingHeader {

	// Properties
	var count : Int // +0x0
	var capacity : Int // +0x8
 }

 class CryptoKitPrivate.Backing {
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
	0x7fb0  @objc Scrypt.init <stripped>
 }

 enum CryptoKitPrivate.CryptoKitError {

	// Properties
	case underlyingCoreCryptoError : (error: Int32)
	case incorrectKeySize  
	case incorrectParameterSize  
	case authenticationFailure  
 }
