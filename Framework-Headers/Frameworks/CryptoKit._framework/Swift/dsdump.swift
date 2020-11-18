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
	var state : ccdigest_ctx.__Unnamed_union_state
 }

 struct __C.ccdigest_info {

	// Properties
	var output_size : Int
	var state_size : Int
	var block_size : Int
	var oid_size : Int
	var oid : UnsafePointer<UInt8>?
	var initial_state : UnsafeRawPointer?
	var compress : @convention(c) (_:_:_:)?
	var final : @convention(c) (_:_:_:)?
 }

 struct __C.ccchacha20poly1305_ctx {

	// Properties
	var chacha20_ctx : ccchacha20_ctx
	var poly1305_ctx : ccpoly1305_ctx
	var aad_nbytes : UInt64
	var text_nbytes : UInt64
	var state : UInt8
 }

 struct __C.ccmode_gcm {

	// Properties
	var size : Int
	var encdec : Int32
	var block_size : Int
	var init : @convention(c) (_:_:_:_:)?
	var set_iv : @convention(c) (_:_:_:)?
	var gmac : @convention(c) (_:_:_:)?
	var gcm : @convention(c) (_:_:_:_:)?
	var finalize : @convention(c) (_:_:_:)?
	var reset : @convention(c) (_:)?
	var custom : UnsafeRawPointer?
 }

 struct __C.ccgcm_ctx {

	// Properties
	var b : (UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8)
 }

 struct __C.ccec_pub_ctx {

	// Properties
	var cp : UnsafePointer<ccec_cp>?
	var pad : (UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8)
 }

 struct __C.ccec_full_ctx {

	// Properties
	var cp : UnsafePointer<ccec_cp>? // +0x0
	var pad : (UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8) // +0x0
 }

 class __C.CFString {
 struct __C.__Unnamed_union_state { }

 struct __C.ccdigest_state {

	// Properties
	var state : ccdigest_state.__Unnamed_union_state
 }

 struct __C.ccpoly1305_ctx {

	// Properties
	var r0 : UInt32
	var r1 : UInt32
	var r2 : UInt32
	var r3 : UInt32
	var r4 : UInt32
	var s1 : UInt32
	var s2 : UInt32
	var s3 : UInt32
	var s4 : UInt32
	var h0 : UInt32
	var h1 : UInt32
	var h2 : UInt32
	var h3 : UInt32
	var h4 : UInt32
	var buf : (UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8)
	var buf_used : Int
	var key : (UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8)
 }

 struct __C.ccchacha20_ctx {

	// Properties
	var state : (UInt32, UInt32, UInt32, UInt32, UInt32, UInt32, UInt32, UInt32, UInt32, UInt32, UInt32, UInt32, UInt32, UInt32, UInt32, UInt32)
	var buffer : (UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8, UInt8)
	var leftover : Int
 }

 struct __C.ccec_cp {

	// Properties
	var n : Int
	var options : UInt64
	var funcs : OpaquePointer?
 }

 struct __C.__Unnamed_union_state { }

 class CryptoKit.Context : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var ctx : UnsafeMutablePointer<ccgcm_ctx> // +0x10 (0x8)
	let mode : UnsafePointer<ccmode_gcm> // +0x18 (0x8)

	// Swift methods
	0x28b0  func CoreCryptoGCMImpl.Context.authenticate<A>(data:) // method 
	0x2e30  func CoreCryptoGCMImpl.Context.processBlock<A>(data:) // method 
	0x3420  func CoreCryptoGCMImpl.Context.isValidTag(tag:) // method 
 }

 struct CryptoKit.CoreCryptoGCMImpl {

	// Properties
	var context : Context // +0x0
 }

 enum CryptoKit.Curve25519 { }

 enum CryptoKit.Signing { }

 struct CryptoKit.PublicKey {

	// Properties
	var impl : CoreCryptoNISTCurvePublicKeyImpl<P256.CurveDetails> // +0x0
 }

 struct CryptoKit.PrivateKey {

	// Properties
	let impl : CoreCryptoNISTCurvePrivateKeyImpl<P256.CurveDetails> // +0x0
 }

 enum CryptoKit.KeyAgreement { }

 struct CryptoKit.PublicKey {

	// Properties
	var impl : CoreCryptoNISTCurvePublicKeyImpl<P256.CurveDetails> // +0x0
 }

 struct CryptoKit.PrivateKey {

	// Properties
	let impl : CoreCryptoNISTCurvePrivateKeyImpl<P256.CurveDetails> // +0x0
 }

 enum CryptoKit.Signing { }

 struct CryptoKit.PublicKey {

	// Properties
	var impl : CoreCryptoNISTCurvePublicKeyImpl<P384.CurveDetails> // +0x0
 }

 struct CryptoKit.PrivateKey {

	// Properties
	let impl : CoreCryptoNISTCurvePrivateKeyImpl<P384.CurveDetails> // +0x0
 }

 enum CryptoKit.KeyAgreement { }

 struct CryptoKit.PublicKey {

	// Properties
	var impl : CoreCryptoNISTCurvePublicKeyImpl<P384.CurveDetails> // +0x0
 }

 struct CryptoKit.PrivateKey {

	// Properties
	let impl : CoreCryptoNISTCurvePrivateKeyImpl<P384.CurveDetails> // +0x0
 }

 enum CryptoKit.Signing { }

 struct CryptoKit.PublicKey {

	// Properties
	var impl : CoreCryptoNISTCurvePublicKeyImpl<P521.CurveDetails> // +0x0
 }

 struct CryptoKit.PrivateKey {

	// Properties
	let impl : CoreCryptoNISTCurvePrivateKeyImpl<P521.CurveDetails> // +0x0
 }

 enum CryptoKit.KeyAgreement { }

 struct CryptoKit.PublicKey {

	// Properties
	var impl : CoreCryptoNISTCurvePublicKeyImpl<P521.CurveDetails> // +0x0
 }

 struct CryptoKit.PrivateKey {

	// Properties
	let impl : CoreCryptoNISTCurvePrivateKeyImpl<P521.CurveDetails> // +0x0
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
	let digest : A.HashFunction.Digest
 }

 class CryptoKit.Backing {
 struct CryptoKit.BackingHeader {

	// Properties
	var count : Int // +0x0
	var capacity : Int // +0x8
 }

 struct CryptoKit.SecureBytes {

	// Properties
	var backing : SecureBytes.Backing? // +0x0
 }

 struct CryptoKit.Index {

	// Properties
	var offset : Int // +0x0
 }

 struct CryptoKit.CoreCryptoNISTCurvePrivateKeyImpl {

	// Properties
	let key : SecureBytes
 }

 struct CryptoKit.CoreCryptoNISTCurvePublicKeyImpl {

	// Properties
	var keyBytes : [UInt8] // +0x0
 }

 struct CryptoKit.CurveDetails: CorecryptoSupportedNISTCurve { }

 struct CryptoKit.CurveDetails: CorecryptoSupportedNISTCurve { }

 struct CryptoKit.CurveDetails: CorecryptoSupportedNISTCurve { }

 enum CryptoKit.P256 { }

 enum CryptoKit.P384 { }

 enum CryptoKit.P521 { }

 struct CryptoKit.SHA256Digest {

	// Properties
	let bytes : (UInt64, UInt64, UInt64, UInt64) // +0x0
 }

 struct CryptoKit.SHA384Digest {

	// Properties
	let bytes : (UInt64, UInt64, UInt64, UInt64, UInt64, UInt64) // +0x0
 }

 struct CryptoKit.SHA512Digest {

	// Properties
	let bytes : (UInt64, UInt64, UInt64, UInt64, UInt64, UInt64, UInt64, UInt64) // +0x0
 }

 struct CryptoKit.SHA1Digest {

	// Properties
	let bytes : (UInt64, UInt64, UInt64) // +0x0
 }

 struct CryptoKit.MD5Digest {

	// Properties
	let bytes : (UInt64, UInt64) // +0x0
 }

 enum CryptoKit.SecureEnclave { }

 enum CryptoKit.P256 { }

 enum CryptoKit.Signing { }

 struct CryptoKit.PrivateKey {

	// Properties
	let publicKey : P256.Signing.PublicKey // +0x0
	let dataRepresentation : Data // +0x8
	let tokenObject : TKClientTokenObject // +0x18
 }

 enum CryptoKit.KeyAgreement { }

 struct CryptoKit.PrivateKey {

	// Properties
	let publicKey : P256.KeyAgreement.PublicKey // +0x0
	let dataRepresentation : Data // +0x8
	let tokenObject : TKClientTokenObject // +0x18
 }

 struct CryptoKit._CMAC {

	// Properties
	var cmacCtx : [UInt8] // +0x0
	let outputSize : Int // +0x8
 }

 struct CryptoKit.MAC {

	// Properties
	let underlyingData : Data // +0x0
 }

 struct CryptoKit.SHA256 {

	// Properties
	var impl : SHA256 // +0x0
 }

 struct CryptoKit.SHA384 {

	// Properties
	var impl : SHA384 // +0x0
 }

 struct CryptoKit.SHA512 {

	// Properties
	var impl : SHA512 // +0x0
 }

 enum CryptoKit.Insecure { }

 enum CryptoKit.ChaChaPoly { }

 struct CryptoKit.SealedBox {

	// Properties
	let combined : Data // +0x0
 }

 class CryptoKit.Context : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let ctx : UnsafeMutablePointer<ccchacha20poly1305_ctx> // +0x10 (0x8)

	// Swift methods
	0x1e6d0  func CoreCryptoChaChaPolyImpl.Context.authenticate<A>(data:) // method 
	0x1ec50  func CoreCryptoChaChaPolyImpl.Context.encryptBlockAndAuthenticate<A>(data:) // method 
	0x1f3b0  func CoreCryptoChaChaPolyImpl.Context.isValidTag(tag:) // method 
 }

 struct CryptoKit.CoreCryptoChaChaPolyImpl {

	// Properties
	var context : Context // +0x0
 }

 struct CryptoKit.Nonce {

	// Properties
	let bytes : Data // +0x0
 }

 struct CryptoKit.Nonce {

	// Properties
	let bytes : Data // +0x0
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
	let combinedRepresentation : Data // +0x0
	let nonceByteCount : Int // +0x10
 }

 struct CryptoKit.ECDSASignature: NISTECDSASignature {

	// Properties
	var rawRepresentation : Data // +0x0
 }

 struct CryptoKit.ECDSASignature: NISTECDSASignature {

	// Properties
	var rawRepresentation : Data // +0x0
 }

 struct CryptoKit.ECDSASignature: NISTECDSASignature {

	// Properties
	var rawRepresentation : Data // +0x0
 }

 struct CryptoKit.SharedSecret {

	// Properties
	var ss : SecureBytes // +0x0
 }

 struct CryptoKit.SHA1 {

	// Properties
	var impl : SHA1 // +0x0
 }

 struct CryptoKit.MD5 {

	// Properties
	var impl : MD5 // +0x0
 }

 class CryptoKit.CoreCryptoDigestBuffer {
 struct CryptoKit.CoreCryptoDigestImpl {

	// Properties
	var digestBuffer : CoreCryptoDigestBuffer
 }

 enum CryptoKit.CryptoKitError {

	// Properties
	case underlyingCoreCryptoError : (error: Int32)
	case incorrectKeySize  
	case incorrectParameterSize  
	case authenticationFailure  
 }

 enum CryptoKit.KeyAgreement { }

 struct CryptoKit.PublicKey {

	// Properties
	var baseKey : KeyAgreement // +0x0
 }

 struct CryptoKit.PrivateKey {

	// Properties
	var baseKey : KeyAgreement // +0x0
 }

 enum CryptoKit.Signing { }

 struct CryptoKit.PrivateKey {

	// Properties
	var baseKey : Signing // +0x0
 }

 struct CryptoKit.PublicKey {

	// Properties
	var baseKey : Signing // +0x0
 }

 struct CryptoKit.CoreCryptoCurve25519PublicKeyImpl {

	// Properties
	var keyBytes : [UInt8] // +0x0
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
	var keyBytes : [UInt8] // +0x0
 }
