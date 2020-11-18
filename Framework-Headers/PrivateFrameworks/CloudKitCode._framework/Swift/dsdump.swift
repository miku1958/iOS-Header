 protocol CloudKitCode.Invocable // 2 requirements
 {
	// method
	// method
 }

 struct __C_Synthesized.CKError {

	// Properties
	let _nsError : NSError
 }

 enum __C.Scope { }

 enum __C.Code { }

 struct CloudKitCode.Ckcode_Proto2Any {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : K
	var _typeURL : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _value : ¡J
 }

 struct CloudKitCode.Ckcode_Proto2ProtectedEnvelope {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : K
	var _storage : _StorageClass
 }

 enum CloudKitCode.OneOf_Contents {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case encrypted : ‡J
	case value : Ckcode_Proto2Any
 }

 class CloudKitCode._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _contents : OneOf_Contents

	// Swift methods
 }

 struct CloudKitCode.ExtractingVisitor {

	// Properties
	var acc : (_:)
 }

 struct CloudKitCode.RemoteMeasurement {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let data : ‡J // +0x0
 }

 struct CloudKitCode.Ckcode_ProtectedEnvelope {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : K
	var _storage : _StorageClass
 }

 enum CloudKitCode.OneOf_Contents {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case encrypted : ‡J
WARNING: couldn't find address 0x0 (0x0) in binary!
	case value : «H
 }

 class CloudKitCode._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _contents : OneOf_Contents

	// Swift methods
 }

 class CloudKitCode.CodeConnection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serviceName : String
	let container : CKContainer
	let databaseScope : Scope
	let local : Bool

	// Swift methods
	0xd3f0  func <stripped> // method 
 }

 class CloudKitCode.CodeOperation {
 enum CloudKitCode.DestinationServer {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case url : G
	case default  
	case local  
 }

 class CloudKitCode.CallbackRelay {
 struct CloudKitCode.AssetInfo {

	// Properties
	var assetInfos : [CKRecordID : [String : [Int : CKOperationInMemoryAssetInfo]]]
 }

 struct CloudKitCode.Ckcode_RecordTransport {

	// Properties
	var contents : OneOf_Contents
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : K
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _encryptedMasterKey : ¡J
 }

 enum CloudKitCode.OneOf_Contents {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case localSerialization : ‡J
WARNING: couldn't find address 0x0 (0x0) in binary!
	case wireSerialization : ‡J
 }

 class CloudKitCode.CKCodeOperation {
 class CloudKitCode.CallbackRelay {
 struct CloudKitCode.AssetInfo {

	// Properties
	var assetInfos : [CKRecordID : [String : [Int : CKOperationInMemoryAssetInfo]]]
 }

 enum CloudKitCode.OneFieldDecoderError {

	// Properties
	case unableToDecodeFromStoredValue : (Any.Type, Any?)
	case unableToDecodeOptionalFromStoredValue : (Any.Type, Any?)
	case unableToDecodeArrayFromStoredValue : (Any.Type, Any?)
 }

 struct CloudKitCode.OneFieldDecoder {

	// Properties
	var fieldNumber : Int? // +0x0
	var value : Any? // +0x10
 }

 enum CloudKitCode.SubstitutingVisitorError {

	// Properties
	case fewerSubstitutionsProvidedThanMessagesEncountered  
	case moreSubstitutionsProvidedThanMessagesEncountered  
 }

 struct CloudKitCode.SubstitutingVisitor {

	// Properties
	var output : A
	var next : ()
 }
