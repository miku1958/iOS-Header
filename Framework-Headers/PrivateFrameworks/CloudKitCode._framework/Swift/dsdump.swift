 protocol CloudKitCode.Invocable // 2 requirements
 {
	// method
	// method
 }

 struct CloudKitCode.ExtractingVisitor {

	// Properties
	var acc : (_:)
 }

 struct CloudKitCode.RemoteMeasurement {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let data : ÁM // +0x0
 }

 struct CloudKitCode.Ckcode_ProtectedEnvelope {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : πM
	var _storage : _StorageClass
 }

 enum CloudKitCode.OneOf_Contents {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case encrypted : ÁM
WARNING: couldn't find address 0x0 (0x0) in binary!
	case value : èM
 }

 class CloudKitCode._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _contents : OneOf_Contents

	// Swift methods
 }

 class CloudKitCode.CodeConnection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serviceName : String // +0x10 (0x10)
	let container : CKContainer // +0x20 (0x8)
	let databaseScope : Scope // +0x28 (0x8)
	let local : Bool // +0x30 (0x1)

	// Swift methods
	0x8720  func <stripped> // method 
 }

 struct CloudKitCode.Ckcode_RecordTransport {

	// Properties
	var contents : OneOf_Contents
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : πM
 }

 enum CloudKitCode.OneOf_Contents {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case localSerialization : ÁM
WARNING: couldn't find address 0x0 (0x0) in binary!
	case wireSerialization : ÁM
 }

 class CloudKitCode.CodeOperation {
 enum CloudKitCode.DestinationServer {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case url : ìK
	case default  
	case local  
 }

 struct CloudKitCode.AssetInfo {

	// Properties
	var assetInfos : [CKRecordID : [String : [Int : CKFetchRecordsAssetInfo]]]
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

 struct __C_Synthesized.CKError {

	// Properties
	let _nsError : NSError
 }

 enum __C.Scope { }

 enum __C.Code { }
