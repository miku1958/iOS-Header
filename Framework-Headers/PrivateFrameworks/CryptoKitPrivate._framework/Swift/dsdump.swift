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

 struct __C._ConditionalAllocationBuffer {

	// Properties
	var memory : UnsafeMutableRawPointer
	var capacity : Int
	var onStack : Bool
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
	var options : ‡-
WARNING: couldn't find address 0x0 (0x0) in binary!
	var funcs : ‘,
 }

 enum CryptoKitPrivate.SSParameterSelection {

	// Properties
	case CKSS1_HKDF_P25793_AESGCM256KEY128TAG  
 }

 struct CryptoKitPrivate.suiteParams {

	// Properties
	let thresholdMin : Int // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let thresholdMax : «- // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let maxNumOfShares : «- // +0xc
	let gcmKeyByteCount : Int // +0x10
	let shareRandomnessByteCount : Int // +0x18
	let gcmIVByteCount : Int // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let prime :  empty-list  // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let gcmKeyLabel : #* // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	let gcmIVLabel : #* // +0x40
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

 struct CryptoKitPrivate.SymmetricKeySize {

	// Properties
	let bitCount : Int // +0x0
 }

 struct CryptoKitPrivate.SymmetricKey {

	// Properties
	let sb : SecureBytes // +0x0
 }

 struct CryptoKitPrivate.SecretSharingError {

	// Properties
	let type : SecretSharingErrorType // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var corecryptoError : ¥* // +0x4
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
	var z0_self : S%
WARNING: couldn't find address 0x0 (0x0) in binary!
	var z1_self : S%

	// ObjC -> Swift bridged methods
	0x6560  @objc AlishaSPAKE2Prover.initWithPassword:salt:authenticatedData:keyDerivationCost: <stripped>
	0x6600  @objc AlishaSPAKE2Prover.getX <stripped>
	0x6b90  @objc AlishaSPAKE2Prover.processResponseWithY:M1: <stripped>
	0x6cf0  @objc AlishaSPAKE2Prover.init <stripped>
	0x6c30  @objc AlishaSPAKE2Prover..cxx_destruct <stripped>

	// Swift methods
	0x5770  func <stripped> // getter 
	0x5790  func <stripped> // setter 
	0x57b0  func <stripped> // modifyCoroutine 
	0x5900  func <stripped> // getter 
	0x5970  func <stripped> // setter 
	0x59e0  func <stripped> // modifyCoroutine 
	0x5a20  class func AlishaSPAKE2Prover.__allocating_init(password:salt:authenticatedData:keyDerivationCost:) // init 
	0x65c0  func <stripped> // method 
	0x6650  func <stripped> // method 
 }

 class CryptoKitPrivate.AlishaSPAKE2ProverConfirmed : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let alishaKey : NSData
	let KEnc : NSData
	let KMac : NSData
	let KRMac : NSData
	let SymmetricLTS : NSData
	let M2 : NSData

	// ObjC -> Swift bridged methods
	0x6d20  @objc AlishaSPAKE2ProverConfirmed.alishaKey <stripped>
	0x6d60  @objc AlishaSPAKE2ProverConfirmed.KEnc <stripped>
	0x6da0  @objc AlishaSPAKE2ProverConfirmed.KMac <stripped>
	0x6de0  @objc AlishaSPAKE2ProverConfirmed.KRMac <stripped>
	0x6e20  @objc AlishaSPAKE2ProverConfirmed.SymmetricLTS <stripped>
	0x6e60  @objc AlishaSPAKE2ProverConfirmed.M2 <stripped>
	0x77e0  @objc AlishaSPAKE2ProverConfirmed.init <stripped>
	0x7740  @objc AlishaSPAKE2ProverConfirmed..cxx_destruct <stripped>

	// Swift methods
 }

 class CryptoKitPrivate.Scrypt : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x82f0  @objc Scrypt.init <stripped>
 }

 enum CryptoKitPrivate.CryptoKitError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case underlyingCoreCryptoError : =*
	case incorrectKeySize  
	case incorrectParameterSize  
	case authenticationFailure  
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
	let threshold : o* // +0xc
WARNING: couldn't find address 0x0 (0x0) in binary!
	let shamirSecretShare : S% // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let iv : S% // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let ciphertext : S% // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tag : S% // +0x48
WARNING: couldn't find address 0x0 (0x0) in binary!
	let associatedData : ß$ // +0x58
 }
