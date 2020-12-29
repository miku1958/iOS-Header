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

 struct __C.ccec_cp {

	// Properties
	var n : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bitlen : 71
WARNING: couldn't find address 0x0 (0x0) in binary!
	var funcs : I0
 }

 struct __C.ccss_shamir_parameters {

	// Properties
	var field : cczp
WARNING: couldn't find address 0x0 (0x0) in binary!
	var threshold : +1
 }

 struct __C.ccec_pub_ctx {

	// Properties
	var cp : ccec_cp
WARNING: couldn't find address 0x0 (0x0) in binary!
	var pad : ¡0
 }

 struct __C.ccspake_ctx {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scp : I0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var mac : I0
	var rng : ccrng_state
	var is_prover : Bool
	var aad_len : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var aad :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : ¹0
 }

 struct __C.ccss_shamir_generator {

	// Properties
	var field : cczp
WARNING: couldn't find address 0x0 (0x0) in binary!
	var degree : +1
 }

 struct __C.ccss_shamir_share {

	// Properties
	var field : cczp
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : +1
 }

 struct __C.ccss_shamir_share_bag {

	// Properties
	var field : cczp
WARNING: couldn't find address 0x0 (0x0) in binary!
	var threshold : +1
WARNING: couldn't find address 0x0 (0x0) in binary!
	var share_count : +1
 }

 struct __C.cczp {

	// Properties
	var n : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bitlen : 71
WARNING: couldn't find address 0x0 (0x0) in binary!
	var funcs : I0
 }

 struct __C.ccrng_state {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var generate : 70
 }

 enum CryptoKitPrivate.SSParameterSelection {

	// Properties
	case CKSS1_HKDF_P25793_AESGCM256KEY128TAG  
 }

 struct CryptoKitPrivate.suiteParams {

	// Properties
	let thresholdMin : Int // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let thresholdMax : ë0 // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let maxNumOfShares : ë0 // +0xc
	let gcmKeyByteCount : Int // +0x10
	let shareRandomnessByteCount : Int // +0x18
	let gcmIVByteCount : Int // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let prime :  empty-list  // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let gcmKeyLabel : ³- // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	let gcmIVLabel : ³- // +0x40
 }

 class CryptoKitPrivate.Backing {
 struct CryptoKitPrivate.SecureBytes {

	// Properties
	var backing : Backing // +0x0
 }

 struct CryptoKitPrivate.BackingHeader {

	// Properties
	var count : Int // +0x0
	var capacity : Int // +0x8
 }

 struct CryptoKitPrivate.Index {

	// Properties
	var offset : Int // +0x0
 }

 enum CryptoKitPrivate.APSIC { }

 enum CryptoKitPrivate.SupportedCurves {

	// Properties
	case p256  
	case p384  
	case p521  
 }

 struct CryptoKitPrivate.Client {

	// Properties
	let curveParams : ccec_cp // +0x0
	let pointSizeBytes : Int // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publicKeyBytes :  empty-list  // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let apsicStateBytes :  empty-list  // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	var apsicCastPtr : I0 // +0x20
 }

 struct CryptoKitPrivate.SecretSharingError {

	// Properties
	let type : SecretSharingErrorType // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var corecryptoError : ­- // +0x4
	var cryptoKitError : CryptoKitError // +0xc
	let line : Int // +0x18
	let function : String // +0x20
	let file : String // +0x30
	let description : String // +0x40
 }

 enum CryptoKitPrivate.SecretSharingErrorType {

	// Properties
	case genericSecretSharingError  
	case incorrectParameterSize  
	case authenticationFailure  
	case underlyingCoreCryptoError  
	case incorrectThresholdSize  
	case fewerSharesThanThreshold  
	case tooManySharesRequested  
	case underlyingSecurityError  
	case notEnoughSharesForReconstruction  
	case sharesAreInconsistent  
	case invalidShares  
	case issueInSecretReconstruction  
	case underlyingCryptoKitError  
	case shareADandProvidedADareInconsistent  
	case underlyingProtobufError  
	case unsupportedShareVersionNumber  
 }

 class CryptoKitPrivate.AlishaSPAKE2Prover : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var spakeCtxData :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var aad :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var X :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var z0_self : ›(
WARNING: couldn't find address 0x0 (0x0) in binary!
	var z1_self : ›(

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x2a1400006158 (0x21400006158) in binary!
	0x2a1c  @objc AlishaSPAKE2Prover.(null) <stripped>
WARNING: couldn't find address 0x2a1800006130 (0x21800006130) in binary!
	0x2a04  @objc AlishaSPAKE2Prover.(null) <stripped>
WARNING: couldn't find address 0x2a0e00006110 (0x20e00006110) in binary!
	0xa8000000c  @objc AlishaSPAKE2Prover.(null) <stripped>
WARNING: couldn't find address 0x29e0000060f0 (0x1e0000060f0) in binary!
	0x29d4  @objc AlishaSPAKE2Prover.(null) <stripped>
WARNING: couldn't find address 0x29c8000060c8 (0x1c8000060c8) in binary!
	0x29bc  @objc AlishaSPAKE2Prover.(null) <stripped>

	// Swift methods
	0x7ba0  func <stripped> // getter 
	0x7bc0  func <stripped> // setter 
	0x7be0  func <stripped> // modifyCoroutine 
	0x7d30  func <stripped> // getter 
	0x7da0  func <stripped> // setter 
	0x7e10  func <stripped> // modifyCoroutine 
	0x7e50  class func AlishaSPAKE2Prover.__allocating_init(password:salt:authenticatedData:keyDerivationCost:) // init 
	0x8b30  func <stripped> // method 
	0x8bc0  func <stripped> // method 
 }

 class CryptoKitPrivate.AlishaSPAKE2ProverConfirmed : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let alishaKey : NSData // +0x8 (0x8)
	let KEnc : NSData // +0x10 (0x8)
	let KMac : NSData // +0x18 (0x8)
	let KRMac : NSData // +0x20 (0x8)
	let SymmetricLTS : NSData // +0x28 (0x8)
	let Kble_intro : NSData // +0x30 (0x8)
	let Kble_oob_master : NSData // +0x38 (0x8)
	let M2 : NSData // +0x40 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x29e0000060f0 (0x1e0000060f0) in binary!
	0x29d4  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x29c8000060c8 (0x1c8000060c8) in binary!
	0x29bc  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x29b0000060a0 (0x1b0000060a0) in binary!
	0x29a4  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x299800006078 (0x19800006078) in binary!
	0x298c  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x2980000060e0 (0x180000060e0) in binary!
	0x298a  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff56d8  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff57d0  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x2433a4d4152  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x69725074694b6f74 (0x74694b6f74) in binary!
	0x25443454a4f  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x2d74694b6f747079 (0x14b6f747079) in binary!
	0x0  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>

	// Swift methods
 }

 class CryptoKitPrivate.Scrypt : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x2948000060a8 (0x148000060a8) in binary!
	0x0  @objc Scrypt.(null) <stripped>
 }

 enum CryptoKitPrivate.CryptoKitError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case underlyingCoreCryptoError : O-
	case incorrectKeySize  
	case incorrectParameterSize  
	case authenticationFailure  
 }

 enum CryptoKitPrivate.CryptoKitASN1Error {

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

 enum CryptoKitPrivate.CKSecretSharing { }

 struct CryptoKitPrivate.ShareParameters {

	// Properties
	var includeADInShares : Bool // +0x0
	var includeAccessStructureInShare : Bool // +0x1
	var highEntropySecrets : Bool // +0x2
	let cipherSuite : SSParameterSelection // +0x0
	let csuiteParams : suiteParams // +0x8
 }

 struct CryptoKitPrivate.SecretShare {

	// Properties
	let version : Int // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let shareNumber : +1 // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let threshold : y- // +0xc
WARNING: couldn't find address 0x0 (0x0) in binary!
	let shamirSecretShare : ›( // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let iv : ›( // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let ciphertext : ›( // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tag : ›( // +0x48
WARNING: couldn't find address 0x0 (0x0) in binary!
	let associatedData : )( // +0x58
 }

 struct CryptoKitPrivate.SymmetricKeySize {

	// Properties
	let bitCount : Int // +0x0
 }

 struct CryptoKitPrivate.SymmetricKey {

	// Properties
	let sb : SecureBytes // +0x0
 }
