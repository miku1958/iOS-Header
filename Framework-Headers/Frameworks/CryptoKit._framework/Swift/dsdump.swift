 protocol CryptoKit.DigestValidator // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol CryptoKit.DataValidator // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol CryptoKit.Zeroization // 1 requirements
 {
	// method
 }
 protocol CryptoKit.CorecryptoSupportedNISTCurve // 1 requirements
 {
	// class getter
 }
 protocol CryptoKit.ECPublicKey // 2 requirements
 {
	// class init
	// getter
 }
 protocol CryptoKit.ECPrivateKey // 2 requirements
 {
	// class associated type access function
	// getter
 }
 protocol CryptoKit.NISTECPublicKey // 5 requirements
 {
	// class base protocol
	// class init
	// class init
	// getter
	// getter
 }
 protocol CryptoKit.NISTECPrivateKey // 4 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class init
	// getter
 }
 protocol CryptoKit.Digest // 5 requirements
 {
	// class base protocol
	// class base protocol
	// class base protocol
	// class base protocol
	// class getter
 }
 protocol CryptoKit.DigestPrivate // 2 requirements
 {
	// class base protocol
	// class init
 }
 protocol CryptoKit.AEADSealedBox // 6 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// getter
	// getter
	// getter
	// class init
 }
 protocol CryptoKit.Cipher // 7 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class method
	// class method
 }
 protocol CryptoKit.MACAlgorithm // 6 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class init
	// method
	// method
 }
 protocol CryptoKit.PRF // 3 requirements
 {
	// class getter
	// class init
	// method
 }
 protocol CryptoKit.SignatureVerification // 1 requirements
 {
	// method
 }
 protocol CryptoKit.DigestSigner // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol CryptoKit.Signer // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol CryptoKit.HashFunction // 6 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class getter
	// class init
	// method
	// method
 }
 protocol CryptoKit.NISTECDSASignature // 4 requirements
 {
	// class init
	// class init
	// getter
	// getter
 }
 protocol CryptoKit.NISTSigning // 9 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
 }
 protocol CryptoKit.DiffieHellmanKeyAgreement // 3 requirements
 {
	// class associated type access function
	// getter
	// method
 }
 protocol CryptoKit.CoreCryptoHashFunction // 1 requirements
 {
	// class getter
 }
 protocol CryptoKit.HashFunctionImplementationDetails // 6 requirements
 {
	// class base protocol
	// class base protocol
	// class associated conformance access function
	// getter
	// setter
	// modify coroutine
 }
 protocol CryptoKit.MessageAuthenticationCode // 5 requirements
 {
	// class base protocol
	// class base protocol
	// class base protocol
	// class base protocol
	// getter
 }

 struct __C.ccdigest_ctx {

	// Properties
	var state : __Unnamed_union_state
 }

 struct __C.ccdigest_info {

	// Properties
	var output_size : Int
	var state_size : Int
	var block_size : Int
	var oid_size : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var oid :  empty-list 
	var initial_state : UnsafeRawPointer?
	var compress : ccdigest_state
	var final : ccdigest_info
 }

 struct __C.ccchacha20poly1305_ctx {

	// Properties
	var chacha20_ctx : ccchacha20_ctx
	var poly1305_ctx : ccpoly1305_ctx
WARNING: couldn't find address 0x0 (0x0) in binary!
	var aad_nbytes : =W
WARNING: couldn't find address 0x0 (0x0) in binary!
	var text_nbytes : =W
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : W
 }

 struct __C.ccmode_gcm {

	// Properties
	var size : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var encdec : èW
	var block_size : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var init : âW
WARNING: couldn't find address 0x0 (0x0) in binary!
	var set_iv : aW
WARNING: couldn't find address 0x0 (0x0) in binary!
	var gmac : aW
WARNING: couldn't find address 0x0 (0x0) in binary!
	var gcm : CW
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finalize : !W
WARNING: couldn't find address 0x0 (0x0) in binary!
	var reset : W
	var custom : UnsafeRawPointer?
 }

 struct __C.ccgcm_ctx {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var b : ıW
 }

 struct __C.ccec_pub_ctx {

	// Properties
	var cp : ccec_cp
WARNING: couldn't find address 0x0 (0x0) in binary!
	var pad : uV
 }

 struct __C.ccec_full_ctx {

	// Properties
	var cp : ccec_cp
WARNING: couldn't find address 0x0 (0x0) in binary!
	var pad : uV
 }

 class __C.CFString {
 struct __C._ConditionalAllocationBuffer {

	// Properties
	var memory : UnsafeMutableRawPointer // +0x0
	var capacity : Int // +0x0
	var onStack : Bool // +0x0
 }

 struct __C.__Unnamed_union_state { }

 struct __C.ccdigest_state {

	// Properties
	var state : __Unnamed_union_state
 }

 struct __C.ccpoly1305_ctx {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var r0 : ©V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var r1 : ©V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var r2 : ©V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var r3 : ©V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var r4 : ©V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var s1 : ©V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var s2 : ©V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var s3 : ©V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var s4 : ©V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var h0 : ©V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var h1 : ©V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var h2 : ©V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var h3 : ©V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var h4 : ©V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var buf : ıW
	var buf_used : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var key : ıW
 }

 struct __C.ccchacha20_ctx {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : ¡V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var buffer : •V
	var leftover : Int
 }

 struct __C.ccec_cp {

	// Properties
	var n : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var options : =W
WARNING: couldn't find address 0x0 (0x0) in binary!
	var funcs : _U
 }

 struct __C.__Unnamed_union_state { }

 class CryptoKit.Context : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var ctx : ccgcm_ctx // +0x10 (0x8)
	let mode : ccmode_gcm // +0x18 (0x8)

	// Swift methods
	0x2ae0  func CoreCryptoGCMImpl.Context.authenticate<A>(data:) // method 
	0x2f20  func CoreCryptoGCMImpl.Context.processBlock<A>(data:) // method 
	0x34d0  func CoreCryptoGCMImpl.Context.isValidTag(tag:) // method 
 }

 struct CryptoKit.CoreCryptoGCMImpl {

	// Properties
	var context : Context // +0x0
 }

 enum CryptoKit.Curve25519 { }

 enum CryptoKit.Signing { }

 struct CryptoKit.PublicKey {

	// Properties
	var impl : CoreCryptoNISTCurvePublicKeyImpl // +0x0
 }

 struct CryptoKit.PrivateKey {

	// Properties
	let impl : CoreCryptoNISTCurvePrivateKeyImpl // +0x0
 }

 enum CryptoKit.KeyAgreement { }

 struct CryptoKit.PublicKey {

	// Properties
	var impl : CoreCryptoNISTCurvePublicKeyImpl // +0x0
 }

 struct CryptoKit.PrivateKey {

	// Properties
	let impl : CoreCryptoNISTCurvePrivateKeyImpl // +0x0
 }

 enum CryptoKit.Signing { }

 struct CryptoKit.PublicKey {

	// Properties
	var impl : CoreCryptoNISTCurvePublicKeyImpl // +0x0
 }

 struct CryptoKit.PrivateKey {

	// Properties
	let impl : CoreCryptoNISTCurvePrivateKeyImpl // +0x0
 }

 enum CryptoKit.KeyAgreement { }

 struct CryptoKit.PublicKey {

	// Properties
	var impl : CoreCryptoNISTCurvePublicKeyImpl // +0x0
 }

 struct CryptoKit.PrivateKey {

	// Properties
	let impl : CoreCryptoNISTCurvePrivateKeyImpl // +0x0
 }

 enum CryptoKit.Signing { }

 struct CryptoKit.PublicKey {

	// Properties
	var impl : CoreCryptoNISTCurvePublicKeyImpl // +0x0
 }

 struct CryptoKit.PrivateKey {

	// Properties
	let impl : CoreCryptoNISTCurvePrivateKeyImpl // +0x0
 }

 enum CryptoKit.KeyAgreement { }

 struct CryptoKit.PublicKey {

	// Properties
	var impl : CoreCryptoNISTCurvePublicKeyImpl // +0x0
 }

 struct CryptoKit.PrivateKey {

	// Properties
	let impl : CoreCryptoNISTCurvePrivateKeyImpl // +0x0
 }

 enum CryptoKit.CryptoTokenKitError {

	// Properties
	case underlyingCTKError : (error: Int)
	case noSEP  
	case incorrectToken  
	case tokenObjectError  
	case failedKeyGeneration  
 }

 struct CryptoKit.HMAC {

	// Properties
	var outerHasher : A
	var innerHasher : A
 }

 struct CryptoKit.HashedAuthenticationCode {

	// Properties
	let digest : HashFunction
 }

 class CryptoKit.Backing {
 struct CryptoKit.BackingHeader {

	// Properties
	var count : Int // +0x0
	var capacity : Int // +0x8
 }

 struct CryptoKit.SecureBytes {

	// Properties
	var backing : Backing // +0x0
 }

 struct CryptoKit.Index {

	// Properties
	var offset : Int // +0x0
 }

 struct CryptoKit.CoreCryptoNISTCurvePrivateKeyImpl {

	// Properties
	let key : SecureBytes // +0x0
 }

 struct CryptoKit.CoreCryptoNISTCurvePublicKeyImpl {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var keyBytes :  empty-list  // +0x0
 }

 struct CryptoKit.CurveDetails: CorecryptoSupportedNISTCurve { }

 struct CryptoKit.CurveDetails: CorecryptoSupportedNISTCurve { }

 struct CryptoKit.CurveDetails: CorecryptoSupportedNISTCurve { }

 enum CryptoKit.P256 { }

 enum CryptoKit.P384 { }

 enum CryptoKit.P521 { }

 struct CryptoKit.SHA256Digest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes : Q // +0x0
 }

 struct CryptoKit.SHA384Digest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes : 	Q // +0x0
 }

 struct CryptoKit.SHA512Digest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes : ˝P // +0x0
 }

 struct CryptoKit.SHA1Digest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes : ÒP // +0x0
 }

 struct CryptoKit.MD5Digest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes : ÂP // +0x0
 }

 enum CryptoKit.SecureEnclave { }

 enum CryptoKit.P256 { }

 enum CryptoKit.Signing { }

 struct CryptoKit.PrivateKey {

	// Properties
	let publicKey : PublicKey // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dataRepresentation : ∑N // +0x8
	let tokenObject : TKClientTokenObject // +0x18
 }

 enum CryptoKit.KeyAgreement { }

 struct CryptoKit.PrivateKey {

	// Properties
	let publicKey : PublicKey // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dataRepresentation : ∑N // +0x8
	let tokenObject : TKClientTokenObject // +0x18
 }

 struct CryptoKit._CMAC {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cmacCtx :  empty-list  // +0x0
	let outputSize : Int // +0x8
 }

 struct CryptoKit.MAC {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let underlyingData : ∑N // +0x0
 }

 struct CryptoKit.SHA256 {

	// Properties
	var impl : CoreCryptoDigestImpl // +0x0
 }

 struct CryptoKit.SHA384 {

	// Properties
	var impl : CoreCryptoDigestImpl // +0x0
 }

 struct CryptoKit.SHA512 {

	// Properties
	var impl : CoreCryptoDigestImpl // +0x0
 }

 enum CryptoKit.Insecure { }

 enum CryptoKit.ChaChaPoly { }

 struct CryptoKit.SealedBox {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let combined : ∑N // +0x0
 }

 class CryptoKit.Context : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let ctx : ccchacha20poly1305_ctx // +0x10 (0x8)

	// Swift methods
	0x1bce0  func CoreCryptoChaChaPolyImpl.Context.authenticate<A>(data:) // method 
	0x1c160  func CoreCryptoChaChaPolyImpl.Context.encryptBlockAndAuthenticate<A>(data:) // method 
	0x1c6e0  func CoreCryptoChaChaPolyImpl.Context.isValidTag(tag:) // method 
 }

 struct CryptoKit.CoreCryptoChaChaPolyImpl {

	// Properties
	var context : Context // +0x0
 }

 struct CryptoKit.Nonce {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes : ∑N // +0x0
 }

 struct CryptoKit.Nonce {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes : ∑N // +0x0
 }

 enum CryptoKit.AES { }

 struct CryptoKit.SymmetricKeySize {

	// Properties
	let bitCount : Int // +0x0
 }

 struct CryptoKit.SymmetricKey {

	// Properties
	let sb : SecureBytes // +0x0
 }

 enum CryptoKit.GCM { }

 struct CryptoKit.SealedBox {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let combinedRepresentation : ∑N // +0x0
	let nonceByteCount : Int // +0x10
 }

 struct CryptoKit.ECDSASignature: NISTECDSASignature {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawRepresentation : ∑N // +0x0
 }

 struct CryptoKit.ECDSASignature: NISTECDSASignature {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawRepresentation : ∑N // +0x0
 }

 struct CryptoKit.ECDSASignature: NISTECDSASignature {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawRepresentation : ∑N // +0x0
 }

 struct CryptoKit.SharedSecret {

	// Properties
	var ss : SecureBytes // +0x0
 }

 struct CryptoKit.SHA1 {

	// Properties
	var impl : CoreCryptoDigestImpl // +0x0
 }

 struct CryptoKit.MD5 {

	// Properties
	var impl : CoreCryptoDigestImpl // +0x0
 }

 class CryptoKit.CoreCryptoDigestBuffer {
 struct CryptoKit.CoreCryptoDigestImpl {

	// Properties
	var digestBuffer : CoreCryptoDigestBuffer
 }

 enum CryptoKit.CryptoKitError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case underlyingCoreCryptoError : K
	case incorrectKeySize  
	case incorrectParameterSize  
	case authenticationFailure  
 }

 enum CryptoKit.KeyAgreement { }

 struct CryptoKit.PublicKey {

	// Properties
	var baseKey : CoreCryptoCurve25519PublicKeyImpl // +0x0
 }

 struct CryptoKit.PrivateKey {

	// Properties
	var baseKey : CoreCryptoCurve25519PrivateKeyImpl // +0x0
 }

 enum CryptoKit.Signing { }

 struct CryptoKit.PrivateKey {

	// Properties
	var baseKey : CoreCryptoCurve25519PrivateKeyImpl // +0x0
 }

 struct CryptoKit.PublicKey {

	// Properties
	var baseKey : CoreCryptoCurve25519PublicKeyImpl // +0x0
 }

 struct CryptoKit.CoreCryptoCurve25519PublicKeyImpl {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var keyBytes :  empty-list  // +0x0
 }

 struct CryptoKit.CoreCryptoCurve25519PrivateKeyImpl {

	// Properties
	var key : SecureBytes // +0x0
 }

 struct CryptoKit.CoreCryptoCurve25519PrivateKeyImpl {

	// Properties
	var key : SecureBytes // +0x0
 }

 struct CryptoKit.CoreCryptoCurve25519PublicKeyImpl {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var keyBytes :  empty-list  // +0x0
 }
