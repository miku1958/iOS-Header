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

 struct __C.ccss_shamir_parameters {

	// Properties
	var field : cczp
WARNING: couldn't find address 0x0 (0x0) in binary!
	var threshold : «-
 }

 struct __C.ccspake_ctx {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scp : »,
WARNING: couldn't find address 0x0 (0x0) in binary!
	var mac : »,
	var rng : ccrng_state
	var is_prover : Bool
	var aad_len : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var aad :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : ?-
 }

 struct __C.ccss_shamir_generator {

	// Properties
	var field : cczp
WARNING: couldn't find address 0x0 (0x0) in binary!
	var degree : «-
 }

 struct __C.ccss_shamir_share {

	// Properties
	var field : cczp
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : «-
 }

 struct __C.ccss_shamir_share_bag {

	// Properties
	var field : cczp
WARNING: couldn't find address 0x0 (0x0) in binary!
	var threshold : «-
WARNING: couldn't find address 0x0 (0x0) in binary!
	var share_count : «-
 }

 struct __C.cczp {

	// Properties
	var n : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bitlen : ©-
WARNING: couldn't find address 0x0 (0x0) in binary!
	var funcs : »,
 }

 struct __C.ccrng_state {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var generate : Û,
 }

 enum CryptoKitPrivate.SSParameterSelection {

	// Properties
	case CKSS1_HKDF_P25793_AESGCM256KEY128TAG  
 }

 struct CryptoKitPrivate.suiteParams {

	// Properties
	let thresholdMin : Int // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let thresholdMax : k- // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let maxNumOfShares : k- // +0xc
	let gcmKeyByteCount : Int // +0x10
	let shareRandomnessByteCount : Int // +0x18
	let gcmIVByteCount : Int // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let prime :  empty-list  // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let gcmKeyLabel : [* // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	let gcmIVLabel : [* // +0x40
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

 struct CryptoKitPrivate.SecretSharingError {

	// Properties
	let type : SecretSharingErrorType // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var corecryptoError : ©* // +0x4
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
	var z0_self : Ç%
WARNING: couldn't find address 0x0 (0x0) in binary!
	var z1_self : Ç%

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x269400005c68 (0x69400005c68) in binary!
	0x269c  @objc AlishaSPAKE2Prover.(null) <stripped>
WARNING: couldn't find address 0x269800005c40 (0x69800005c40) in binary!
	0x2684  @objc AlishaSPAKE2Prover.(null) <stripped>
WARNING: couldn't find address 0x268e00005c20 (0x68e00005c20) in binary!
	0xa8000000c  @objc AlishaSPAKE2Prover.(null) <stripped>
WARNING: couldn't find address 0x266000005c00 (0x66000005c00) in binary!
	0x2654  @objc AlishaSPAKE2Prover.(null) <stripped>
WARNING: couldn't find address 0x264800005bd8 (0x64800005bd8) in binary!
	0x263c  @objc AlishaSPAKE2Prover.(null) <stripped>

	// Swift methods
	0x4f00  func <stripped> // getter 
	0x4f80  func <stripped> // setter 
	0x4fe0  func <stripped> // modifyCoroutine 
	0x5130  func <stripped> // getter 
	0x51a0  func <stripped> // setter 
	0x5210  func <stripped> // modifyCoroutine 
	0x5250  class func AlishaSPAKE2Prover.__allocating_init(password:salt:authenticatedData:keyDerivationCost:) // init 
	0x5fe0  func <stripped> // method 
	0x6070  func <stripped> // method 
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
WARNING: couldn't find address 0x266000005c00 (0x66000005c00) in binary!
	0x2654  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x264800005bd8 (0x64800005bd8) in binary!
	0x263c  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x263000005bb0 (0x63000005bb0) in binary!
	0x2624  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x261800005b88 (0x61800005b88) in binary!
	0x260c  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x260000005bf0 (0x60000005bf0) in binary!
	0x260a  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff5778  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff5870  @objc AlishaSPAKE2ProverConfirmed.(null) <stripped>
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
WARNING: couldn't find address 0x25c800005bb8 (0x5c800005bb8) in binary!
	0x0  @objc Scrypt.(null) <stripped>
 }

 enum CryptoKitPrivate.CryptoKitError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case underlyingCoreCryptoError : K*
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
	let shareNumber : «- // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let threshold : u* // +0xc
WARNING: couldn't find address 0x0 (0x0) in binary!
	let shamirSecretShare : Ç% // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let iv : Ç% // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let ciphertext : Ç% // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tag : Ç% // +0x48
WARNING: couldn't find address 0x0 (0x0) in binary!
	let associatedData : U% // +0x58
 }

 struct CryptoKitPrivate.SymmetricKeySize {

	// Properties
	let bitCount : Int // +0x0
 }

 struct CryptoKitPrivate.SymmetricKey {

	// Properties
	let sb : SecureBytes // +0x0
 }
