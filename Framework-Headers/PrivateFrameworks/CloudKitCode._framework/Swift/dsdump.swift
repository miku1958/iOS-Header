 protocol CloudKitCode.Invocable // 2 requirements
 {
	// method
	// method
 }

 struct CloudKitCode.ExtractingVisitor {

	// Properties
	var acc : (_:)
 }

 class CloudKitCode.CodeConnection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serviceName : String // +0x10 (0x10)
	let container : CKContainer // +0x20 (0x8)
	let databaseScope : CKDatabaseScope // +0x28 (0x8)
	let local : Bool // +0x30 (0x1)

	// Swift methods
	0x42f0  func CodeConnection.invoke<A, B>(function:request:completion:) // method 
 }

 struct CloudKitCode.Ckcode_RecordTransport {

	// Properties
	var contents : OneOf_Contents // +0x0
	var unknownFields : UnknownStorage // +0x10
 }

 enum CloudKitCode.OneOf_Contents {

	// Properties
	case localSerialization : Data
	case wireSerialization : Data
 }

 class CloudKitCode.CodeOperation {
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

 struct __C_Synthesized.CKError {

	// Properties
	let _nsError : NSError
 }

 enum __C.Scope { }

 enum __C.Code { }
