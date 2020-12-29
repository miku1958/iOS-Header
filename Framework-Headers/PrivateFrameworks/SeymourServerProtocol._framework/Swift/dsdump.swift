 struct SeymourServerProtocol.FetchSyncChangesetRequestProtobuf {

	// Properties
	var zoneRequests : ZoneChangesetRequestProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.ZoneChangesetRequestProtobuf {

	// Properties
	var zone : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var changeWindow : 3/
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.FetchSyncChangesetResponseProtobuf {

	// Properties
	var zoneChangesets : ZoneChangesetProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.ZoneChangesetProtobuf {

	// Properties
	var zone : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var changeWindow : 3/
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
	var _recordChangeset : SyncRecordChangesetProtobuf
 }

 struct SeymourServerProtocol.FetchScoresResponseProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _communityScores : S/
 }

 struct SeymourServerProtocol.ServerErrorProtobuf {

	// Properties
	var type : ErrorType
	var zone : String
	var zones : [String]
	var argumentName : String
	var errorDescription : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 enum SeymourServerProtocol.ErrorType {

	// Properties
	case UNRECOGNIZED : Int
	case bootstrapRequired  
	case mismatchedZones  
	case invalidZone  
	case invalidPayload  
	case invalidArgument  
	case transportFailed  
	case serverFailed  
	case fetchRequired  
	case cacheFailed  
	case zoneCreationRequired  
	case zoneDeletionRequired  
	case noEncryptionKey  
	case resetRequired  
 }

 struct SeymourServerProtocol.ScoreEstimationMarkerProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var position : !1
	var height : Float
	var increment : Float
	var desiredPosition : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 class SeymourServerProtocol.RuntimeLinker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum SeymourServerProtocol.SyncRecordType { }

 struct SeymourServerProtocol.ScoreCacheProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lowerScores :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lowerMiddleScores :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var upperMiddleScores :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var upperScores :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.SubmitScoresRequestProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scores :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.SubmitScoresResponseProtobuf {

	// Properties
	var accepted : [String]
	var rejected : SessionScoresRejectionProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.SessionScoresRejectionProtobuf {

	// Properties
	var reason : String
	var score : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 enum SeymourServerProtocol.ServerError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case bootstrapRequired :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case zoneCreationRequired :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case zoneDeletionRequired :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case noEncryptionKey :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case resetRequired :  empty-list 
	case invalidZone : (zone: String)
	case invalidArgument : (name: String)
	case transportFailed : (description: String)
	case serverFailed : (description: String)
	case cacheFailed : (description: String)
	case fetchRequired  
	case mismatchedZones  
	case invalidPayload  
 }

 struct SeymourServerProtocol.SyncRecordChangesetProtobuf {

	// Properties
	var timestamp : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var inserted :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var deleted :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.EncryptionKeyProofProtobuf {

	// Properties
	var identifier : String
	var etag : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.SubmitSyncChangesetRequestProtobuf {

	// Properties
	var zoneChangesets : ZoneChangesetProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.ZoneChangesetProtobuf {

	// Properties
	var zone : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
	var _key : EncryptionKeyProofProtobuf
	var _recordChangeset : SyncRecordChangesetProtobuf
 }

 struct SeymourServerProtocol.SubmitSyncChangesetResponseProtobuf {

	// Properties
	var zoneChangesets : ZoneChangesetProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.ZoneChangesetProtobuf {

	// Properties
	var zone : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
	var _recordChangeset : SyncRecordChangesetProtobuf
 }

 struct SeymourServerProtocol.PingProtobuf {

	// Properties
	var ping : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.PongProtobuf {

	// Properties
	var pong : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.ValidateEncryptionKeyRequestProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var encryptionKeys :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.ValidateEncryptionKeyResponseProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var encryptionKeys :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 enum SeymourServerProtocol.RecordField {

	// Properties
	case encryptedBytes  
	case unencryptedBytes  
	case identifier  
 }

 struct SeymourServerProtocol.ScoreEstimationProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var seconds : !1
	var markers : ScoreEstimationMarkerProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sampleCount : .
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.ExecuteTasksRequestProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }

 struct SeymourServerProtocol.ExecuteTasksResponseProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var executedTasksCount : !1
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : ƒ0
 }
