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
 protocol CryptoKit.ASN1IntegerRepresentable // 7 requirements
 {
	// class base protocol
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// class getter
	// class init
	// method
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
 protocol CryptoKit.ASN1Parseable // 1 requirements
 {
	// class init
 }
 protocol CryptoKit.ASN1Serializable // 1 requirements
 {
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
	var aad_nbytes : m
WARNING: couldn't find address 0x0 (0x0) in binary!
	var text_nbytes : m
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : �l
 }

 struct __C.ccmode_gcm {

	// Properties
	var size : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var encdec : Mm
	var block_size : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var init : Gm
WARNING: couldn't find address 0x0 (0x0) in binary!
	var set_iv : m
WARNING: couldn't find address 0x0 (0x0) in binary!
	var gmac : m
WARNING: couldn't find address 0x0 (0x0) in binary!
	var gcm : m
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finalize : �l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var reset : �l
	var custom : UnsafeRawPointer?
 }

 struct __C.ccgcm_ctx {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var b : �m
 }

 struct __C.ccec_pub_ctx {

	// Properties
	var cp : ccec_cp // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var pad : ;l // +0x0
 }

 struct __C.ccec_full_ctx {

	// Properties
	var cp : ccec_cp // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var pad : ;l // +0x0
 }

 class __C.CFString {
 struct __C.__Unnamed_union_state { }

 struct __C.ccdigest_state {

	// Properties
	var state : __Unnamed_union_state
 }

 struct __C.ccpoly1305_ctx {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var r0 : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var r1 : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var r2 : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var r3 : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var r4 : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var s1 : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var s2 : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var s3 : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var s4 : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var h0 : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var h1 : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var h2 : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var h3 : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var h4 : l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var buf : �m
	var buf_used : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var key : �m
 }

 struct __C.ccchacha20_ctx {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : �l
WARNING: couldn't find address 0x0 (0x0) in binary!
	var buffer : kl
	var leftover : Int
 }

 struct __C.ccec_cp {

	// Properties
	var n : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bitlen : m
WARNING: couldn't find address 0x0 (0x0) in binary!
	var funcs : �j
 }

 struct __C.__Unnamed_union_state { }

 class CryptoKit.Context : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var ctx : ccgcm_ctx
	let mode : ccmode_gcm

	// Swift methods
	0x2310  func CoreCryptoGCMImpl.Context.authenticate<A>(data:) // method 
	0x2460  func CoreCryptoGCMImpl.Context.processBlock<A>(data:) // method 
	0x2700  func CoreCryptoGCMImpl.Context.isValidTag(tag:) // method 
 }

 struct CryptoKit.CoreCryptoGCMImpl {

	// Properties
	var context : Context // +0x0
 }

 enum CryptoKit.RFC5480AlgorithmIdentifier {

	// Properties
	case ecdsaP256  
	case ecdsaP384  
	case ecdsaP521  
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

 struct CryptoKit.ASN1BitString {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bytes : �e // +0x0
 }

 enum CryptoKit.P256 { }

 enum CryptoKit.P384 { }

 enum CryptoKit.P521 { }

 struct CryptoKit.SHA256Digest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes : �f // +0x0
 }

 struct CryptoKit.SHA384Digest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes : �f // +0x0
 }

 struct CryptoKit.SHA512Digest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes : �f // +0x0
 }

 struct CryptoKit.SHA1Digest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes : �f // +0x0
 }

 struct CryptoKit.MD5Digest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes : �f // +0x0
 }

 struct CryptoKit.IntegerBytesCollection {

	// Properties
	var integer : A
 }

 struct CryptoKit.Index {

	// Properties
	var byteNumber : Int
 }

 enum CryptoKit.SecureEnclave { }

 enum CryptoKit.P256 { }

 enum CryptoKit.Signing { }

 struct CryptoKit.PrivateKey {

	// Properties
	let publicKey : PublicKey // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dataRepresentation : uc // +0x8
	let tokenObject : TKClientTokenObject // +0x18
 }

 enum CryptoKit.KeyAgreement { }

 struct CryptoKit.PrivateKey {

	// Properties
	let publicKey : PublicKey // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dataRepresentation : uc // +0x8
	let tokenObject : TKClientTokenObject // +0x18
 }

 struct CryptoKit.HKDF { }

 struct CryptoKit._CMAC {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cmacCtx :  empty-list  // +0x0
	let outputSize : Int // +0x8
 }

 struct CryptoKit.MAC {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let underlyingData : uc // +0x0
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

 enum CryptoKit.Content {

	// Properties
	case constructed : ASN1NodeCollection
WARNING: couldn't find address 0x0 (0x0) in binary!
	case primitive : �e
 }

 struct CryptoKit.ASN1ParserNode {

	// Properties
	var identifier : ASN1Identifier // +0x0
	var depth : Int // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var dataBytes : �_ // +0x10
 }

 struct CryptoKit.ASN1ParseResult {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var nodes : �_ // +0x0
 }

 struct CryptoKit.Iterator {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var nodes : �_ // +0x0
	var depth : Int // +0x20
 }

 struct CryptoKit.ASN1NodeCollection {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var nodes : �_ // +0x0
	var depth : Int // +0x20
 }

 struct CryptoKit.ASN1Node {

	// Properties
	var identifier : ASN1Identifier // +0x0
	var content : Content // +0x8
 }

 enum CryptoKit.ASN1 { }

 struct CryptoKit.ASN1ObjectIdentifier {

	// Properties
	var oidComponents : [UInt] // +0x0
 }

 enum CryptoKit.ChaChaPoly { }

 struct CryptoKit.SealedBox {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let combined : uc // +0x0
 }

 class CryptoKit.Context : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let ctx : ccchacha20poly1305_ctx

	// Swift methods
	0x27fb0  func CoreCryptoChaChaPolyImpl.Context.authenticate<A>(data:) // method 
	0x28130  func CoreCryptoChaChaPolyImpl.Context.encryptBlockAndAuthenticate<A>(data:) // method 
	0x283b0  func CoreCryptoChaChaPolyImpl.Context.isValidTag(tag:) // method 
 }

 struct CryptoKit.CoreCryptoChaChaPolyImpl {

	// Properties
	var context : Context // +0x0
 }

 struct CryptoKit.Nonce {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes : uc // +0x0
 }

 struct CryptoKit.Nonce {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes : uc // +0x0
 }

 enum CryptoKit.AES { }

 struct CryptoKit.ASN1Identifier {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var baseTag : �l // +0x0
 }

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
	let combinedRepresentation : uc // +0x0
	let nonceByteCount : Int // +0x10
 }

 struct CryptoKit.ECDSASignature: NISTECDSASignature {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawRepresentation : uc // +0x0
 }

 struct CryptoKit.ECDSASignature: NISTECDSASignature {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawRepresentation : uc // +0x0
 }

 struct CryptoKit.ECDSASignature: NISTECDSASignature {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawRepresentation : uc // +0x0
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
	case underlyingCoreCryptoError : Q]
	case incorrectKeySize  
	case incorrectParameterSize  
	case authenticationFailure  
 }

 enum CryptoKit.CryptoKitASN1Error {

	// Properties
	case invalidFieldIdentifier  
	case unexpectedFieldType  
	case invalidObjectIdentifier  
	case invalidASN1Object  
	case invalidASN1IntegerEncoding  
	case truncatedASN1Field  
	case unsupportedFieldLength  
	case invalidPEMDocument  
 }

 struct CryptoKit.ASN1OctetString {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bytes : �e // +0x0
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
