 protocol DistributedEvaluation.Quantizable // 2 requirements
 {
	// class base protocol
	// method
 }
 protocol DistributedEvaluation.SecureAggregationAPIAsync // 13 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }

 enum __C.Scope { }

 struct DistributedEvaluation.Quantized {

	// Properties
	let quantizationParams : QuantizationParams
	let quantizedValue : B
	let originalValue : A
 }

 struct DistributedEvaluation.QuantizationParams {

	// Properties
	let inputBound : A
	let outputBound : B
	let numValuesSummableWithoutOverflow : Int
 }

 enum DistributedEvaluation.SecureAggregationArrayError {

	// Properties
	case dataNotExpressableAsArrayOfIntegers : (bitWidth: Int, byteCount: Int)
 }

 struct DistributedEvaluation.RegisterRequest {

	// Properties
	var taskUuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publicCommunicationKey : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publicMaskingKey : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var verificationKey : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var signature : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.RegisterResponse {

	// Properties
	var clientUuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.Action {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.Wait {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
	var _storage : _StorageClass
 }

 struct DistributedEvaluation.CallbackWindow {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
	var _storage : _StorageClass
 }

 struct DistributedEvaluation.SubmitEncryptedMaskingShares {

	// Properties
	var cohort : CohortMember
WARNING: couldn't find address 0x0 (0x0) in binary!
	var clientIndex : ƒÁ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cohortThreshold : ƒÁ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.CohortMember {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var index : ƒÁ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publicCommunicationKey : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publicMaskingKey : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var verificationKey : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var signature : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.SubmitMaskedData {

	// Properties
	var encryptedSharesFromPeers : EncryptedShares
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.SubmitConsistencyCheck {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var clientsThatSubmittedData :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.SubmitDecryptedUnmaskingShares {

	// Properties
	var consistencySignatures : ConsistencySignature
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.ConsistencySignature {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var clientIndex : ƒÁ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var signature : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.Complete {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.Abort {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
	var _storage : _StorageClass
 }

 struct DistributedEvaluation.CheckInRequest {

	// Properties
	var clientUuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.CheckInResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
	var _storage : _StorageClass
 }

 enum DistributedEvaluation.OneOf_Action {

	// Properties
	case wait : Wait
	case submitEncryptedMaskingShares : SubmitEncryptedMaskingShares
	case submitMaskedData : SubmitMaskedData
	case submitConsistencyCheck : SubmitConsistencyCheck
	case submitDecryptedUnmaskingShares : SubmitDecryptedUnmaskingShares
	case complete : Complete
	case abort : Abort
 }

 struct DistributedEvaluation.SecretShare {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ciphertext : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var initializationVector : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var authenticatedData : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var authenticationTag : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var threshold : ƒÁ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var shareNumber : ƒÁ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var share : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.EncryptedShares {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var clientIndex : ƒÁ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var peerIndex : ƒÁ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var encryptedSharesForPeer : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.Plaintext {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
	var _storage : _StorageClass
 }

 struct DistributedEvaluation.SubmitEncryptedMaskingSharesRequest {

	// Properties
	var clientUuid : String
	var encryptedSharesForPeers : EncryptedShares
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.SubmitEncryptedMaskingSharesResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
	var _storage : _StorageClass
 }

 enum DistributedEvaluation.OneOf_Action {

	// Properties
	case wait : Wait
	case abort : Abort
 }

 struct DistributedEvaluation.SubmitMaskedDataRequest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
	var _storage : _StorageClass
 }

 enum DistributedEvaluation.OneOf_DataTransport {

	// Properties
	case inline : DataFormat
WARNING: couldn't find address 0x0 (0x0) in binary!
	case assetRecord : O¼
 }

 struct DistributedEvaluation.DataFormat {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var repeatedSint32 :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.SubmitMaskedDataResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
	var _storage : _StorageClass
 }

 enum DistributedEvaluation.OneOf_Action {

	// Properties
	case wait : Wait
	case abort : Abort
 }

 struct DistributedEvaluation.SubmitConsistencyCheckRequest {

	// Properties
	var clientUuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var signature : ½
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.SubmitConsistencyCheckResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
	var _storage : _StorageClass
 }

 enum DistributedEvaluation.OneOf_Action {

	// Properties
	case wait : Wait
	case abort : Abort
 }

 struct DistributedEvaluation.SubmitDecryptedUnmaskingSharesRequest {

	// Properties
	var clientUuid : String
	var decryptedUnmaskingShares : UnmaskingShare
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.UnmaskingShare {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
	var _storage : _StorageClass
 }

 struct DistributedEvaluation.SubmitDecryptedUnmaskingSharesResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
	var _storage : _StorageClass
 }

 enum DistributedEvaluation.OneOf_Action {

	// Properties
	case complete : Complete
	case abort : Abort
 }

 struct DistributedEvaluation.AbortReason {

	// Properties
	var abortReason : OneOf_AbortReason
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 enum DistributedEvaluation.OneOf_AbortReason {

	// Properties
	case serverAbortReason : ServerAbortReason
	case clientAbortReason : ClientAbortReason
 }

 enum DistributedEvaluation.ClientAbortReason {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case dropoutThresholdExceeded  
	case duplicateKeyPairDetected  
	case signatureVerificationFailed  
	case keyAgreementFailed  
	case prgFailed  
	case consistencyCheckFailed  
	case decryptionFailed  
 }

 enum DistributedEvaluation.ServerAbortReason {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case taskRetired  
 }

 struct DistributedEvaluation.AbortRequest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
	var _storage : _StorageClass
 }

 struct DistributedEvaluation.AbortResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.DropOutRequest {

	// Properties
	var clientUuid : String
	var reason : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.DropOutResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.PostTaskRequest {

	// Properties
	var taskUuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var numTargetDevices : ƒÁ
	var samplingRate : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cohortSize : ƒÁ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var secretSharingThreshold : ƒÁ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.PostTaskResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.RetireTaskRequest {

	// Properties
	var taskUuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.RetireTaskResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.DeleteTaskRequest {

	// Properties
	var taskUuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.DeleteTaskResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.SubmitTelemetryRequest {

	// Properties
	var samples : Sample
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.Metric {

	// Properties
	var name : String
	var description_p : String
	var type : TypeEnum
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 enum DistributedEvaluation.TypeEnum {

	// Properties
	case UNRECOGNIZED : Int
	case metrictypeUnknown  
	case metrictypeCount  
	case metrictypeGauge  
	case metrictypeTime  
 }

 struct DistributedEvaluation.Sample {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
	var _storage : _StorageClass
 }

 struct DistributedEvaluation.SubmitTelemetryResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.DebugRequest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
	var _storage : _StorageClass
 }

 enum DistributedEvaluation.OneOf_DebugRequestType {

	// Properties
	case dumpTasksDebugRequest : DumpTasksDebugRequest
	case dumpTaskDebugRequest : DumpTaskDebugRequest
	case dumpCohortDebugRequest : DumpCohortDebugRequest
	case dumpClientDebugRequest : DumpClientDebugRequest
 }

 struct DistributedEvaluation.DumpTasksDebugRequest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.DumpTaskDebugRequest {

	// Properties
	var taskUuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.DumpCohortDebugRequest {

	// Properties
	var taskUuid : String
	var cohortUuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.DumpClientDebugRequest {

	// Properties
	var taskUuid : String
	var cohortUuid : String
	var clientUuid : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 struct DistributedEvaluation.DebugResponse {

	// Properties
	var payload : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ½
 }

 class DistributedEvaluation.SecureAggregationAPIAsyncClient : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SecureAggregationAPIAsync {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let invocable : %» // +0x10 (0x28)

	// Swift methods
	0x39a50  class func SecureAggregationAPIAsyncClient.__allocating_init(invocable:) // init 
	0x39ab0  func SecureAggregationAPIAsyncClient.postTask(_:completion:) // method 
	0x39b80  func SecureAggregationAPIAsyncClient.retireTask(_:completion:) // method 
	0x39c50  func SecureAggregationAPIAsyncClient.deleteTask(_:completion:) // method 
	0x39d20  func SecureAggregationAPIAsyncClient.register(_:completion:) // method 
	0x39df0  func SecureAggregationAPIAsyncClient.checkIn(_:completion:) // method 
	0x39ec0  func SecureAggregationAPIAsyncClient.submitEncryptedMaskingShares(_:completion:) // method 
	0x39fa0  func SecureAggregationAPIAsyncClient.submitMaskedData(_:completion:) // method 
	0x3a080  func SecureAggregationAPIAsyncClient.submitConsistencyCheck(_:completion:) // method 
	0x3a160  func SecureAggregationAPIAsyncClient.submitDecryptedUnmaskingShares(_:completion:) // method 
	0x3a240  func SecureAggregationAPIAsyncClient.abort(_:completion:) // method 
	0x3a310  func SecureAggregationAPIAsyncClient.dropOut(_:completion:) // method 
	0x3a3e0  func SecureAggregationAPIAsyncClient.submitTelemetry(_:completion:) // method 
	0x3a4b0  func SecureAggregationAPIAsyncClient.debug(_:completion:) // method 
 }

 class DistributedEvaluation._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _callbackWindow : CallbackWindow

	// Swift methods
 }

 class DistributedEvaluation._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _start : »
	var _duration : Double

	// Swift methods
 }

 class DistributedEvaluation._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _reason : AbortReason

	// Swift methods
 }

 class DistributedEvaluation._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _action : OneOf_Action

	// Swift methods
 }

 class DistributedEvaluation._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _clientIndex : ƒÁ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _peerIndex : ƒÁ
	var _privateKeyShare : SecretShare
	var _privateSeedShare : SecretShare

	// Swift methods
 }

 class DistributedEvaluation._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _action : OneOf_Action

	// Swift methods
 }

 class DistributedEvaluation._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _clientUuid : String
	var _dataTransport : OneOf_DataTransport

	// Swift methods
 }

 class DistributedEvaluation._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _action : OneOf_Action

	// Swift methods
 }

 class DistributedEvaluation._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _action : OneOf_Action

	// Swift methods
 }

 class DistributedEvaluation._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _peerIndex : ƒÁ
	var _share : SecretShare

	// Swift methods
 }

 class DistributedEvaluation._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _action : OneOf_Action

	// Swift methods
 }

 class DistributedEvaluation._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _clientUuid : String
	var _reason : AbortReason

	// Swift methods
 }

 class DistributedEvaluation._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _metric : Metric
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _timestamp : »
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _value : û¾

	// Swift methods
 }

 class DistributedEvaluation._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _debugRequestType : OneOf_DebugRequestType

	// Swift methods
 }

 class DistributedEvaluation.DESSecureAggregationConfiguration : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var data : [Float] // +0x8 (0x8)
	var metrics : [Float] // +0x10 (0x8)
	var metricCount : Int // +0x18 (0x8)
	var xpcActivity : OS_xpc_object? // +0x20 (0x8)
	var minimumCohortSize : Int // +0x28 (0x8)
	var maximumCohortSize : Int // +0x30 (0x8)
	var inputBound : Float // +0x38 (0x4)
	var outputBitCount : Int // +0x40 (0x8)
	var L2NormClippingBound : Float // +0x48 (0x4)
	var secretSharingThreshold : Int // +0x50 (0x8)
	var numValuesSummableWithoutOverflow : Int // +0x58 (0x8)
	var centralDifferentialPrivacyVariance : Float // +0x60 (0x4)

	// ObjC -> Swift bridged methods
	0x70fb0  @objc DESSecureAggregationConfiguration.setData:count: <stripped>
	0x71170  @objc DESSecureAggregationConfiguration.metricCount <stripped>
	0x711b0  @objc DESSecureAggregationConfiguration.setMetricCount: <stripped>
	0x71240  @objc DESSecureAggregationConfiguration.xpcActivity <stripped>
	0x712b0  @objc DESSecureAggregationConfiguration.setXpcActivity: <stripped>
	0x72080  @objc DESSecureAggregationConfiguration.initWithTaskInfo:error: <stripped>
	0x72130  @objc DESSecureAggregationConfiguration.minimumCohortSize <stripped>
	0x72170  @objc DESSecureAggregationConfiguration.setMinimumCohortSize: <stripped>
	0x721f0  @objc DESSecureAggregationConfiguration.maximumCohortSize <stripped>
	0x72230  @objc DESSecureAggregationConfiguration.setMaximumCohortSize: <stripped>
	0x722b0  @objc DESSecureAggregationConfiguration.inputBound <stripped>
	0x722f0  @objc DESSecureAggregationConfiguration.setInputBound: <stripped>
	0x72370  @objc DESSecureAggregationConfiguration.outputBitCount <stripped>
	0x723b0  @objc DESSecureAggregationConfiguration.setOutputBitCount: <stripped>
	0x72430  @objc DESSecureAggregationConfiguration.L2NormClippingBound <stripped>
	0x72470  @objc DESSecureAggregationConfiguration.setL2NormClippingBound: <stripped>
	0x724f0  @objc DESSecureAggregationConfiguration.secretSharingThreshold <stripped>
	0x72530  @objc DESSecureAggregationConfiguration.setSecretSharingThreshold: <stripped>
	0x725b0  @objc DESSecureAggregationConfiguration.numValuesSummableWithoutOverflow <stripped>
	0x72650  @objc DESSecureAggregationConfiguration.setNumValuesSummableWithoutOverflow: <stripped>
	0x72750  @objc DESSecureAggregationConfiguration.centralDifferentialPrivacyVariance <stripped>
	0x727f0  @objc DESSecureAggregationConfiguration.setCentralDifferentialPrivacyVariance: <stripped>
	0x73020  @objc DESSecureAggregationConfiguration.init <stripped>
	0x72fb0  @objc DESSecureAggregationConfiguration..cxx_destruct <stripped>

	// Swift methods
	0x70ec0  func DESSecureAggregationConfiguration.data.getter // getter 
	0x70ee0  func DESSecureAggregationConfiguration.data.setter // setter 
	0x70f00  func DESSecureAggregationConfiguration.data.modify // modifyCoroutine 
	0x70f40  func DESSecureAggregationConfiguration.setData(_:count:) // method 
	0x71060  func DESSecureAggregationConfiguration.metrics.getter // getter 
	0x710c0  func DESSecureAggregationConfiguration.metrics.setter // setter 
	0x71120  func DESSecureAggregationConfiguration.metrics.modify // modifyCoroutine 
	0x71190  func DESSecureAggregationConfiguration.metricCount.getter // getter 
	0x711d0  func DESSecureAggregationConfiguration.metricCount.setter // setter 
	0x711f0  func DESSecureAggregationConfiguration.metricCount.modify // modifyCoroutine 
	0x71290  func DESSecureAggregationConfiguration.xpcActivity.getter // getter 
	0x71310  func DESSecureAggregationConfiguration.xpcActivity.setter // setter 
	0x71330  func DESSecureAggregationConfiguration.xpcActivity.modify // modifyCoroutine 
	0x71370  class func DESSecureAggregationConfiguration.__allocating_init(taskInfo:) // init 
	0x72150  func DESSecureAggregationConfiguration.minimumCohortSize.getter // getter 
	0x72190  func DESSecureAggregationConfiguration.minimumCohortSize.setter // setter 
	0x721b0  func DESSecureAggregationConfiguration.minimumCohortSize.modify // modifyCoroutine 
	0x72210  func DESSecureAggregationConfiguration.maximumCohortSize.getter // getter 
	0x72250  func DESSecureAggregationConfiguration.maximumCohortSize.setter // setter 
	0x72270  func DESSecureAggregationConfiguration.maximumCohortSize.modify // modifyCoroutine 
	0x722d0  func DESSecureAggregationConfiguration.inputBound.getter // getter 
	0x72310  func DESSecureAggregationConfiguration.inputBound.setter // setter 
	0x72330  func DESSecureAggregationConfiguration.inputBound.modify // modifyCoroutine 
	0x72390  func DESSecureAggregationConfiguration.outputBitCount.getter // getter 
	0x723d0  func DESSecureAggregationConfiguration.outputBitCount.setter // setter 
	0x723f0  func DESSecureAggregationConfiguration.outputBitCount.modify // modifyCoroutine 
	0x72450  func DESSecureAggregationConfiguration.L2NormClippingBound.getter // getter 
	0x72490  func DESSecureAggregationConfiguration.L2NormClippingBound.setter // setter 
	0x724b0  func DESSecureAggregationConfiguration.L2NormClippingBound.modify // modifyCoroutine 
	0x72510  func DESSecureAggregationConfiguration.secretSharingThreshold.getter // getter 
	0x72550  func DESSecureAggregationConfiguration.secretSharingThreshold.setter // setter 
	0x72570  func DESSecureAggregationConfiguration.secretSharingThreshold.modify // modifyCoroutine 
	0x72600  func DESSecureAggregationConfiguration.numValuesSummableWithoutOverflow.getter // getter 
	0x726b0  func DESSecureAggregationConfiguration.numValuesSummableWithoutOverflow.setter // setter 
	0x72710  func DESSecureAggregationConfiguration.numValuesSummableWithoutOverflow.modify // modifyCoroutine 
	0x727a0  func DESSecureAggregationConfiguration.centralDifferentialPrivacyVariance.getter // getter 
	0x72850  func DESSecureAggregationConfiguration.centralDifferentialPrivacyVariance.setter // setter 
	0x728b0  func DESSecureAggregationConfiguration.centralDifferentialPrivacyVariance.modify // modifyCoroutine 
	0x728f0  func DESSecureAggregationConfiguration.noisedQuantizedData.getter // getter 
 }

 enum DistributedEvaluation.TaskError {

	// Properties
	case UnsupportedProtocolName : String
	case UnsupportedProtocolVersion : Int
	case MissingProtocolName  
	case MissingProtocolVersion  
 }

 class DistributedEvaluation.AnonymousInvocable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serviceName : String
	let container : CKContainer
	let databaseScope : Scope
	let local : Bool
	let activity : OS_xpc_object?

	// Swift methods
	0x73050  func <stripped> // method 
 }

 class DistributedEvaluation.DESSecureAggregationSession : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x8 (0x8)
	let service : SecureAggregationAPIAsync // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publicCommunicationKey : {» // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publicMaskingKey : {» // +0x626f5f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let verificationKey : }» // +0x74687465 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let signature : » // +0x45545f5f (0x0)
	let configuration : DESSecureAggregationConfiguration // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let secretData :  empty-list  // +0xa14ed (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var clientsThatSubmittedData :  empty-list  // +0xb0e (0x8)
	var encryptedSharesFromPeers : EncryptedShares // +0xa14ed (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let b_uData : ½ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var b_uSharesByIndex :  empty-list  // +0x2 (0x8)
	var clientUuid : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var clientIndex : y½ // +0x19 (0x5)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cohortThreshold : y½ // +0x41445f5f (0x5)
	var cohort : CohortMember // +0x54534e4f (0x8)
	var checkinTimer : OS_dispatch_source_timer? // +0xa2000 (0x8)

	// ObjC -> Swift bridged methods
	0x739a0  @objc DESSecureAggregationSession.initWithDatabase:toService:local:configuration: <stripped>
	0x73ab0  @objc DESSecureAggregationSession.clientUuid <stripped>
	0x73b70  @objc DESSecureAggregationSession.setClientUuid: <stripped>
	0x744d0  @objc DESSecureAggregationSession.postTaskWithTaskUuid:numTargetDevices:samplingRate:cohortSize:secretSharingThreshold:completion: <stripped>
	0x75060  @objc DESSecureAggregationSession.registerTaskWithTaskUuid:completion: <stripped>
	0x757a0  @objc DESSecureAggregationSession.checkinWithCompletion: <stripped>
	0x7d3b0  @objc DESSecureAggregationSession.init <stripped>
	0x7d210  @objc DESSecureAggregationSession..cxx_destruct <stripped>

	// Swift methods
	0x73740  func <stripped> // getter 
	0x73760  func <stripped> // setter 
	0x73780  func <stripped> // modifyCoroutine 
	0x737d0  func <stripped> // getter 
	0x737f0  func <stripped> // setter 
	0x73810  func <stripped> // modifyCoroutine 
	0x73860  func <stripped> // getter 
	0x73880  func <stripped> // setter 
	0x738a0  func <stripped> // modifyCoroutine 
	0x73a30  class func <stripped> // init 
	0x73b20  func DESSecureAggregationSession.clientUuid.getter // getter 
	0x73be0  func DESSecureAggregationSession.clientUuid.setter // setter 
	0x73c40  func DESSecureAggregationSession.clientUuid.modify // modifyCoroutine 
	0x73c90  func <stripped> // getter 
	0x73cb0  func <stripped> // setter 
	0x73cd0  func <stripped> // modifyCoroutine 
	0x73d10  func <stripped> // getter 
	0x73d70  func <stripped> // setter 
	0x73de0  func <stripped> // modifyCoroutine 
	0x73e20  func <stripped> // getter 
	0x73e40  func <stripped> // setter 
	0x73e60  func <stripped> // modifyCoroutine 
	0x73ea0  func <stripped> // getter 
	0x73f00  func <stripped> // setter 
	0x73f70  func <stripped> // modifyCoroutine 
	0x73fb0  func DESSecureAggregationSession.postTask(taskUuid:numTargetDevices:samplingRate:cohortSize:secretSharingThreshold:completion:) // method 
	0x74640  func DESSecureAggregationSession.registerTask(taskUuid:completion:) // method 
	0x75110  func DESSecureAggregationSession.checkin(completion:) // method 
	0x75810  func <stripped> // method 
	0x75cb0  func <stripped> // method 
	0x76470  func <stripped> // method 
	0x778b0  func <stripped> // method 
	0x780b0  func <stripped> // method 
	0x7ad80  func <stripped> // method 
	0x7ada0  func <stripped> // method 
	0x7aef0  func <stripped> // method 
 }

 enum DistributedEvaluation.ProtocolError {

	// Properties
	case UnexpectedCheckinResponse : String
	case MaskingSharesRequestRepeat  
	case CohortSignatureInvalid  
	case NoClientUUID  
	case NoVerificationKeyForPeer  
	case SharesForWrongClient  
	case SharesBelowSecretSharingThreshold  
	case SecretShareDeserialzationFailure  
	case CorruptedEncryptedShares  
	case UnexpectedSubmitConsistencyCheckResponse  
	case SubmitMaskedDataWithoutCohort  
	case SubmitDecryptedUnmaskingSharesWithoutCohort  
	case SubmitDecryptedUnmaskingSharesWithoutShares  
	case SubmitDecryptedUnmaskingSharesWithoutConsistencyCheck  
	case SubmitEncryptedMaskingSharesSealingFailed  
	case SubmitEncryptedMaskingSharesWithoutCohort  
 }
