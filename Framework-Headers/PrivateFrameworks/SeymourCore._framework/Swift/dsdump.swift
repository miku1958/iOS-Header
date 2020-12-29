 protocol SeymourCore.TransportProtobufSerializable // 7 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// method
	// class init
	// method
	// class init
 }
 protocol SeymourCore.DependencyDescriptor // 2 requirements
 {
	// getter
	// getter
 }
 protocol SeymourCore.Random // 1 requirements
 {
	// class method
 }
 protocol SeymourCore.TransportJsonSerializable // 2 requirements
 {
	// method
	// class init
 }
 protocol SeymourCore.RepresentativeSample // 1 requirements
 {
	// class method
 }
 protocol SeymourCore.TransportDictionarySerializable // 1 requirements
 {
	// method
 }
 protocol SeymourCore.TransportDataSerializable // 2 requirements
 {
	// method
	// class init
 }
 protocol SeymourCore.IdentifierTransformable // 1 requirements
 {
	// getter
 }
 protocol SeymourCore.Canonical // 1 requirements
 {
	// class method
 }

 struct SeymourCore.EngagementBannerRuleInfo {

	// Properties
	let rulesDictionary : [String : Any] // +0x0
 }

 struct SeymourCore.TrainerProtobuf {

	// Properties
	var identifier : String
	var name : String
	var artwork : ArtworkProtobuf
	var sharingURL : String
	var socialMediaHandles : SocialMediaHandleProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _bio : OptionalStringProtobuf
	var _preview : CatalogPreviewProtobuf
 }

 enum SeymourCore.ShelfTileContent {

	// Properties
	case chart : ChartShelfTileGroup
	case deviceDriven : DeviceDrivenShelfMarker
	case editorial : ShelfLazyTile
	case marketingDriven : MarketingDrivenShelfMarker
 }

 struct SeymourCore.AssetBundleProtobuf {

	// Properties
	var identifier : String
	var workoutIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var reason : Qy
	var requestingDeviceIdentifier : String
	var downloadingDeviceIdentifier : String
	var dateRequested : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var loadStatus : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.CatalogModalityFeature {

	// Properties
	case filter  
	case recommend  
 }

 struct SeymourCore.Recommendation {

	// Properties
	let index : Int // +0x0
	let reason : String // +0x8
	let referenceIdentifier : String // +0x18
	let referenceType : PortableEnum // +0x28
	let shelfMarker : PortableEnum // +0x40
	let source : PortableEnum // +0x58
 }

 struct SeymourCore.ShelfTileDescriptorProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _backgroundDisplayStyle : String
	var _content : ShelfTileContentProtobuf
	var _galleryDestination : String
	var _galleryDisplayStyle : String
	var _galleryNameTags : MediaTagProtobuf
	var _identifier : String
	var _displayStyle : String
	var _titleTags : MediaTagProtobuf
	var _subtitleTags : MediaTagProtobuf

	// Swift methods
 }

 struct SeymourCore.HealthKitStandaloneWorkoutJobProtobuf {

	// Properties
	var sessionIdentifier : String
	var catalogWorkoutIdentifier : String
	var healthKitWorkoutIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var workoutActivityType : πx
	var startDate : Double
	var duration : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CatalogWorkoutMetadata {

	// Properties
	let accessibilityFeatures : PortableEnum
	let artwork : Artwork
	let bodyFocuses : PortableEnum
	let commentaryEvents : CommentaryEvent
	let contributors : Contributor
	let identifier : String
	let location : String?
	let mediaMoments : MediaMoment
	let musicPlaylistIdentifier : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let musicPlaylistURL : ìg
	let musicTracks : MusicTrack
	let preview : CatalogPreview
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sharingURL : ìe
	let skillLevel : PortableEnum
	let streamingProgramIdentifier : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let streamingURL : ìe
	let summary : String?
	let title : String
	let trainerEvents : TrainerEvent
 }

 enum SeymourCore.AssetPurgeError {

	// Properties
	case registerHandlerFailed  
 }

 struct SeymourCore.CatalogWorkoutDetailAnnotationRequest {

	// Properties
	let completedCount : Int
	let workout : CatalogWorkout
 }

 struct SeymourCore.CatalogWorkoutDetailAnnotationProtobuf {

	// Properties
	var detailTags : MediaTagProtobuf
	var subtitleTags : MediaTagProtobuf
	var summaryTags : MediaTagProtobuf
	var titleTags : MediaTagProtobuf
	var cropCode : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _headerArtwork : ArtworkProtobuf
 }

 struct SeymourCore.CatalogGalleryTileRequestProtobuf {

	// Properties
	var identifier : String
	var displayStyle : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.AssetBundleLoadFailureProtobuf {

	// Properties
	var bundleIdentifier : String
	var reason : String
	var date : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.MetricClickElement {

	// Properties
	case banner  
	case brick  
	case button  
	case card  
	case cta  
	case flowcase  
	case grouping  
	case link  
	case lockup  
	case menuItem  
	case shelf  
	case showAll  
	case showcase  
	case swoosh  
	case unknown  
	case upsell  
 }

 struct SeymourCore.CatalogProgramMetadataProtobuf {

	// Properties
	var identifier : String
	var title : String
	var summary : String
	var artwork : ArtworkProtobuf
	var contributors : ContributorProtobuf
	var sharingURL : String
	var accessibilityFeatures : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _location : OptionalStringProtobuf
	var _preview : CatalogPreviewProtobuf
 }

 struct SeymourCore.SiriStartWorkoutRequestProtobuf {

	// Properties
	var allowedContentRatings : [String]
	var candidates : SiriStartWorkoutCandidateProtobuf
	var completedWorkoutRecords : SiriCompletedWorkoutRecordProtobuf
	var personalizationMethod : String
	var recommendations : RecommendationProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _healthKitActivityType : OptionalIntegerProtobuf
 }

 enum SeymourCore.CatalogFilterProperty {

	// Properties
	case modality : (identifier: String)
	case musicGenre : (identifier: String)
	case mediaDuration : MediaDuration
	case trainer : (identifier: String)
 }

 struct SeymourCore.AssetRequestKeyMetadataProtobuf {

	// Properties
	var identifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var version : Qy
	var canFreeDeviceSlot : Bool
	var userIdentifier : String
	var workoutIdentifier : String
	var masterPlaylist : String
	var slotIdentifier : String
	var renewDate : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CollectionProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var items :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.DemoAssetBundleRequestProtobuf {

	// Properties
	var workoutIdentifier : String
	var localMediaURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.ProgressDisplayPreferenceProtobuf {

	// Properties
	var behavior : String
	var modalityConstraint : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.ServiceSubscriptionRequestProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var authenticationBehavior : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cacheBehavior : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.MetricRemoteIdentifierProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _clientIdentifier : OptionalStringProtobuf
	var _userIdentifier : OptionalStringProtobuf
	var _noticePrivacyPreference : NoticePrivacyPreferenceProtobuf
	var _optInPrivacyPreference : OptInPrivacyPreferenceProtobuf
	var _serviceSubscription : ServiceSubscriptionProtobuf
 }

 struct SeymourCore.RemoteMetricsPreferenceUpdateRequestProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _preference : MetricsDisplayPreferenceProtobuf
	var _remoteParticipant : RemoteParticipantProtobuf
 }

 enum SeymourCore.WorkoutMetric {

	// Properties
	case distance  
	case elapsedTime  
	case energy  
	case heartRate  
 }

 struct SeymourCore.CountdownIntent {

	// Properties
	let machTimestamp : Double // +0x0
 }

 struct SeymourCore.CommunityScores {

	// Properties
	let workoutIdentifier : String // +0x0
	let activityType : UInt // +0x10
	let type : ScoreType // +0x18
	let lowerScores : Score // +0x28
	let lowerMiddleScores : Score // +0x30
	let upperMiddleScores : Score // +0x38
	let upperScores : Score // +0x40
 }

 enum SeymourCore.ScoreType {

	// Properties
	case rolling : (window: Int)
	case cumulative  
 }

 struct SeymourCore.NoticePrivacyPreference {

	// Properties
	let version : PortableEnum // +0x0
	let state : PortableEnum // +0x18
 }

 enum SeymourCore.Version {

	// Properties
	case versionOne  
 }

 enum SeymourCore.State {

	// Properties
	case needsAcknowledgment  
	case acknowledged  
 }

 struct SeymourCore.CatalogProgramDetailProtobuf {

	// Properties
	var cropCode : String
	var titleTags : MediaTagProtobuf
	var detailTags : MediaTagProtobuf
	var subtitleTags : MediaTagProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _program : CatalogProgramProtobuf
	var _headerArtwork : ArtworkProtobuf
 }

 struct SeymourCore.PairedSyncResponseProtobuf {

	// Properties
	var completed : PairedSyncAcknowledgementProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CatalogProgramDetailTags {

	// Properties
	let detailTags : MediaTag // +0x0
	let subtitleTags : MediaTag // +0x8
	let titleTags : MediaTag // +0x10
 }

 struct SeymourCore.Bookmark {

	// Properties
	let referenceIdentifier : String
	let referenceType : PortableEnum
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateBookmarked : ·^
 }

 enum SeymourCore.ServiceSubscriptionDialogObserverError {

	// Properties
	case unsupportedDaemonOperation  
 }

 struct SeymourCore.AssetContentTypeProtobuf {

	// Properties
	var type : ProtobufType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _keyMetadata : AssetRequestKeyMetadataProtobuf
	var _mediaStreamMetadata : AssetRequestMediaStreamMetadataProtobuf
 }

 enum SeymourCore.ProtobufType {

	// Properties
	case UNRECOGNIZED : Int
	case image  
	case mediaStream  
	case key  
 }

 struct SeymourCore.MusicTrackProtobuf {

	// Properties
	var identifier : String
	var title : String
	var artist : String
	var album : String
	var startTime : Double
	var duration : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _artwork : ArtworkProtobuf
 }

 struct SeymourCore.CatalogWorkout {

	// Properties
	let accessibilityFeatures : PortableEnum
	let artwork : Artwork
	let bodyFocuses : PortableEnum
	let commentaryEvents : CommentaryEvent
	let contentRating : PortableEnum
	let contributors : Contributor
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateReleased : A]
	let duration : Double
	let episode : UInt
	let equipment : Equipment
	let identifier : String
	let location : String?
	let mediaType : PortableEnum
	let mediaMoments : MediaMoment
	let modality : CatalogModality
	let musicGenres : MusicGenre
	let musicPlaylistIdentifier : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let musicPlaylistURL : ìg
	let musicTracks : MusicTrack
	let preview : CatalogPreview
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sharingURL : ìe
	let skillLevel : PortableEnum
	let streamingProgramIdentifier : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let streamingURL : ìe
	let summary : String?
	let title : String
	let trainerEvents : TrainerEvent
	let trainers : Trainer
 }

 struct SeymourCore.CachedCatalogWorkoutTileRequest {

	// Properties
	let displayStyle : ShelfDisplayStyle // +0x0
	let workouts : CatalogWorkout // +0x8
 }

 struct SeymourCore.CatalogWorkoutMetadataRefreshResult {

	// Properties
	let failedIdentifiers : [String] // +0x0
	let skippedIdentifiers : [String] // +0x8
	let successfulIdentifiers : [String] // +0x10
 }

 struct SeymourCore.CatalogTileProtobuf {

	// Properties
	var referenceType : String
	var identifier : String
	var titleTags : MediaTagProtobuf
	var subtitleTags : MediaTagProtobuf
	var detailTags : MediaTagProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var healthKitActivityTypes :  empty-list 
	var contentRating : String
	var cropCode : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _artwork : ArtworkProtobuf
	var _recencyTag : OptionalStringProtobuf
	var _mediaType : OptionalStringProtobuf
 }

 struct SeymourCore.CatalogProgramDetailAnnotation {

	// Properties
	let cropCode : String // +0x0
	let detailTags : MediaTag // +0x10
	let headerArtwork : Artwork // +0x18
	let subtitleTags : MediaTag // +0x70
	let titleTags : MediaTag // +0x78
 }

 struct SeymourCore.ShelfLazyTileProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 enum SeymourCore.ProtobufType {

	// Properties
	case UNRECOGNIZED : Int
	case placeholder  
	case tile  
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _type : ProtobufType
	var _placeholderProtobuf : CatalogLockupPlaceholderProtobuf
	var _tileProtobuf : CatalogTileProtobuf

	// Swift methods
 }

 enum SeymourCore.ShelfLazyLockup {

	// Properties
	case placeholder : CatalogLockupPlaceholder
	case lockup : CatalogLockup
 }

 struct SeymourCore.HealthKitWorkoutThreshold {

	// Properties
	let maximumAgeInDays : Int // +0x0
	let minimumDuration : Double // +0x8
 }

 struct SeymourCore.Point {

	// Properties
	let x : A
	let y : B
 }

 struct SeymourCore.CatalogModalityDetail {

	// Properties
	let cropCode : String
	let headerArtwork : Artwork
	let modality : CatalogModality
 }

 enum SeymourCore.DeviceDrivenShelfMarker {

	// Properties
	case bookmarks  
	case downloads  
	case moreOfWhatYouDo  
	case showcase  
	case trySomethingNew  
	case upNext  
 }

 struct SeymourCore.RemoteParticipantHandshakeResponseProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var minimumRequiredVersion : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var version : Qy
	var machTimestampIn : Double
	var machTimestampOut : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.MediaTag {

	// Properties
	case completedCount : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	case date : A]
	case duration : Double
	case localizedString : (key: String, values: [Double])
	case separator : MediaTagSeparator
	case systemImage : (named: String)
	case text : String
	case wheelchairText : (text: String, wheelchairAlternative: String)
	case closedCaptioningIcon  
	case completedIcon  
	case explicitIcon  
	case subtitleIcon  
 }

 struct SeymourCore.SiriStartWorkoutCandidate {

	// Properties
	let identifier : String // +0x0
	let contentRating : ContentRating // +0x10
 }

 struct SeymourCore.CatalogLockupProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _referenceType : String
	var _identifier : String
	var _titleTags : MediaTagProtobuf
	var _subtitleTags : MediaTagProtobuf
	var _detailTags : MediaTagProtobuf
	var _artwork : ArtworkProtobuf
	var _recencyTag : OptionalStringProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _completedCount : Qy
	var _dateBookmarked : OptionalDoubleProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _healthKitActivityTypes :  empty-list 
	var _mediaType : OptionalStringProtobuf
	var _bundleLoadStatus : OptionalIntegerProtobuf
	var _bundleDateRequested : OptionalDoubleProtobuf
	var _contentRating : String
	var _cropCode : String
	var _bundleReason : OptionalIntegerProtobuf
	var _bundleProgress : AssetBundleProgressProtobuf

	// Swift methods
 }

 struct SeymourCore.MetricClick {

	// Properties
	let actionContext : MetricClickActionContext
	let actionType : MetricClickAction
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionURL : ìg
WARNING: couldn't find address 0x0 (0x0) in binary!
	let impressionsData :  empty-list 
	let locations : MetricLocation
	let offerType : String?
	let targetIdentifier : String?
	let targetIdentifierType : MetricClickDestination
	let targetType : MetricClickElement
	let marketingFields : MetricClickMarketingFields
 }

 enum SeymourCore.ServiceSubscriptionAuthenticationBehavior {

	// Properties
	case promptIfNeeded  
	case silent  
 }

 struct SeymourCore.Promise {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let operation :  empty-list 
 }

 enum SeymourCore.SkillLevel {

	// Properties
	case low  
	case high  
 }

 struct SeymourCore.EngagementEventProtobuf {

	// Properties
	var jsonPayload : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.MetricNavigationDirection {

	// Properties
	case backward  
	case forward  
	case none  
 }

 struct SeymourCore.RemoteParticipantDeviceOwnerProtobuf {

	// Properties
	var type : ProtobufType
	var accountIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.ProtobufType {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case me  
	case family  
	case guest  
 }

 struct SeymourCore.DistributedSessionRequestProtobuf {

	// Properties
	var handshakeTimestampOffset : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _session : SessionProtobuf
 }

 struct SeymourCore.ScoreProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var elapsedSeconds : Qy
	var value : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.SocialMediaHandleProtobuf {

	// Properties
	var platform : String
	var url : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.GalleryDestination {

	// Properties
	case bookmark  
	case download  
	case editorial  
	case guidedWalk  
	case none  
	case popular  
 }

 struct SeymourCore.OptionalDataProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : ÔT
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.CatalogError {

	// Properties
	case artworkNotFound  
	case catalogWorkoutNotFound  
	case missingSessionParameters  
	case metadataRefreshNotSupported  
	case periodicSyncNotSupported  
	case syncNotRequired  
 }

 enum SeymourCore.AssetContentType {

	// Properties
	case mediaStream : AssetRequestMediaStreamMetadata
	case key : AssetRequestKeyMetadata
	case image  
 }

 struct SeymourCore.UserBodyMassMetric {

	// Properties
	let massInKg : Double // +0x0
	let machTimestamp : Double // +0x8
 }

 struct SeymourCore.PlaybackIntent {

	// Properties
	let state : PortableEnum // +0x0
	let machTimestamp : Double // +0x8
 }

 enum SeymourCore.State {

	// Properties
	case play  
	case pause  
	case end  
 }

 struct SeymourCore.ShelfLockupDescriptorProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _backgroundDisplayStyle : String
	var _content : ShelfLockupContentProtobuf
	var _galleryDestination : String
	var _galleryDisplayStyle : String
	var _galleryNameTags : MediaTagProtobuf
	var _identifier : String
	var _displayStyle : String
	var _titleTags : MediaTagProtobuf
	var _subtitleTags : MediaTagProtobuf

	// Swift methods
 }

 struct SeymourCore.ArtworkProtobuf {

	// Properties
	var backgroundColor : String
	var textColor : String
	var template : String
	var flavor : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CatalogTileRequestProtobuf {

	// Properties
	var placeholders : CatalogLockupPlaceholderProtobuf
	var displayStyle : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.DependencyFunctionBuilder { }

 struct SeymourCore.CatalogModalityProtobuf {

	// Properties
	var identifier : String
	var name : String
	var summary : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var healthKitActivityTypes :  empty-list 
	var artwork : ArtworkProtobuf
	var sharingURL : String
	var abridgedSummary : String
	var features : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _preview : CatalogPreviewProtobuf
 }

 struct SeymourCore.OptionalStringProtobuf {

	// Properties
	var value : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.ProgressDisplayPreference {

	// Properties
	let behavior : PortableEnum // +0x0
	let modalityConstraint : DisplayPreferenceModalityConstraint // +0x18
 }

 enum SeymourCore.Behavior {

	// Properties
	case elapsed  
	case hidden  
	case remaining  
 }

 struct SeymourCore.TrainerReference {

	// Properties
	let artwork : Artwork // +0x0
	let identifier : String // +0x8
	let name : String // +0x18
 }

 struct SeymourCore.RemoteNoticePreferenceUpdateRequestProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _preference : NoticePrivacyPreferenceProtobuf
	var _remoteParticipant : RemoteParticipantProtobuf
 }

 struct SeymourCore.MetricClickProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _actionContext : OptionalStringProtobuf
	var _actionType : String
	var _actionURL : OptionalStringProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _impressionsData :  empty-list 
	var _locations : MetricLocationProtobuf
	var _offerType : OptionalStringProtobuf
	var _targetIdentifier : OptionalStringProtobuf
	var _targetIdentifierType : OptionalStringProtobuf
	var _targetType : String
	var _marketingFields : OptionalMetricClickMarketingFieldsProtobuf

	// Swift methods
 }

 struct SeymourCore.MediaDuration {

	// Properties
	let identifier : String // +0x0
	let duration : Double // +0x10
	let lowerBuffer : Double // +0x18
	let upperBuffer : Double // +0x20
 }

 struct SeymourCore.CatalogChangesetProtobuf {

	// Properties
	var workoutReferences : CatalogWorkoutReferenceProtobuf
	var programReferences : CatalogProgramReferenceProtobuf
	var trainerReferences : TrainerReferenceProtobuf
	var removedWorkoutIdentifiers : [String]
	var removedProgramIdentifiers : [String]
	var removedTrainerIdentifiers : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.HealthKitSessionReference {

	// Properties
	let workoutIdentifier : String // +0x0
	let sessionIdentifier : String // +0x10
 }

 enum SeymourCore.EngagementBannerAction {

	// Properties
	case link : EngagementBannerLinkAction
	case video : EngagementBannerVideoAction
 }

 enum SeymourCore.ContentAvailability {

	// Properties
	case unavailableStoreFront  
	case unavailableConfiguration  
	case available  
 }

 enum SeymourCore.CatalogPeriodicSyncReason {

	// Properties
	case boundaryTimeCrossed  
	case noSyncAnchor  
	case syncIntervalExpired  
	case syncNotRequired  
	case previousSyncFailed  
	case previousSyncRequestedReset  
 }

 struct SeymourCore.AssetStandardImageMatchesRequest {

	// Properties
	let template : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let imageWidth : Qy // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let imageHeight : Qy // +0x14
WARNING: couldn't find address 0x0 (0x0) in binary!
	let screenWidth : Qy // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	let screenHeight : Qy // +0x1c
 }

 struct SeymourCore.RemoteParticipantHandshakeRequestProtobuf {

	// Properties
	var deviceIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var version : Qy
	var nonce : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var minimumRequiredVersion : Qy
	var machTimestamp : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _identityResolvingKey : OptionalDataProtobuf
 }

 struct SeymourCore.RemotePrivacyAcknowledgementRequestProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _acknowledgement : PrivacyAcknowledgementProtobuf
	var _remoteParticipant : RemoteParticipantProtobuf
 }

 struct SeymourCore.MetricsDisplayPreference {

	// Properties
	let behavior : PortableEnum // +0x0
	let modalityConstraint : DisplayPreferenceModalityConstraint // +0x18
 }

 enum SeymourCore.Behavior {

	// Properties
	case hidden  
	case visible  
 }

 struct SeymourCore.MetricPlayStreamProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _playback : MetricPlaybackProtobuf
	var _identifier : MetricIdentifierProtobuf
	var _environment : MetricEnvironmentProtobuf
 }

 struct SeymourCore.HealthKitStandaloneWorkoutJob {

	// Properties
	let sessionIdentifier : String
	let catalogWorkoutIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let healthKitWorkoutIdentifier : ïP
	let workoutActivityType : UInt
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ·^
	let duration : Double
 }

 enum SeymourCore.ArtworkFlavor {

	// Properties
	case banner  
	case flex  
	case regular  
	case short  
	case tall  
	case wide  
 }

 struct SeymourCore.CatalogLockupPlaceholderProtobuf {

	// Properties
	var identifier : String
	var referenceType : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.MetricPlaybackEntitlement {

	// Properties
	case free  
	case paid  
 }

 struct SeymourCore.CatalogModalityReferenceProtobuf {

	// Properties
	var identifier : String
	var name : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var healthKitActivityTypes :  empty-list 
	var features : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.RecommendationProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var index : Qy
	var shelfMarker : String
	var referenceIdentifier : String
	var referenceType : String
	var reason : String
	var source : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.MediaDurationProtobuf {

	// Properties
	var identifier : String
	var duration : Double
	var lowerBuffer : Double
	var upperBuffer : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.ShelfTileContentProtobuf {

	// Properties
	var type : ProtobufType
	var tileGroups : ChartShelfTileGroupProtobuf
	var deviceDrivenShelfMarker : String
	var tiles : ShelfLazyTileProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _marketingDrivenShelfMarker : MarketingDrivenShelfMarkerProtobuf
 }

 enum SeymourCore.ProtobufType {

	// Properties
	case UNRECOGNIZED : Int
	case chart  
	case deviceDriven  
	case editorial  
	case marketingDriven  
 }

 struct SeymourCore.SessionScores {

	// Properties
	let sessionIdentifier : String // +0x0
	let workoutIdentifier : String // +0x10
	let workoutDuration : Int // +0x20
	let scores : Score // +0x28
	let activityType : UInt // +0x30
 }

 enum SeymourCore.MetricPlaybackRecordingType {

	// Properties
	case music  
	case workout  
 }

 struct SeymourCore.AssetProgress {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytesExpected : W[ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytesReceived : W[ // +0x8
 }

 struct SeymourCore.CatalogMetadataJournal {

	// Properties
	let identifier : String // +0x0
	let timestamp : Double // +0x10
 }

 struct SeymourCore.AssetResponseProtobuf {

	// Properties
	var remoteURL : String
	var localURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.RemoteBrowsingAppleAccountProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _primaryEmail : OptionalStringProtobuf
	var _identifier : OptionalStringProtobuf
	var _identifierAliases : [String]
	var _personIdentifier : OptionalStringProtobuf
	var _alternateDirectoryServicesIdentifier : OptionalStringProtobuf
	var _firstName : OptionalStringProtobuf
	var _middleName : OptionalStringProtobuf
	var _lastName : OptionalStringProtobuf
	var _regionInfo : [String : String]
	var _accountClass : String
	var _isUsingCloudDocuments : Bool
	var _isPrimaryEmailVerified : Bool
	var _isManagedAppleID : Bool
	var _isNotesMigrated : Bool
	var _isRemindersMigrated : Bool
	var _isSandboxAccount : Bool
	var _isFamilyEligible : Bool
	var _hasOptionalTerms_p : Bool
	var _needsToVerifyTerms : Bool
	var _underlyingSuspensionInfo : [String : Bool]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _underlyingRepairState : πx
	var _cellularDisabledDataClasses : [String]

	// Swift methods
 }

 struct SeymourCore.GymKitConnection {

	// Properties
	let state : PortableEnum // +0x0
	let machTimestamp : Double // +0x8
 }

 enum SeymourCore.State {

	// Properties
	case pairing  
	case disconnected  
	case waitingForStart  
	case running  
	case paused  
	case stopped  
 }

 struct SeymourCore.SiriCompletedWorkoutRecord {

	// Properties
	let workoutIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mostRecentCompletedDate : ·^
 }

 struct SeymourCore.RemoteBrowsingGuestEnvironment {

	// Properties
	let participant : RemoteParticipant
	let environment : RemoteBrowsingEnvironment
 }

 struct SeymourCore.MetricClickStream {

	// Properties
	let type : MetricClickStreamType
	let page : MetricPage
	let identifier : MetricIdentifier
	let environment : MetricEnvironment
 }

 struct SeymourCore.RemoteParticipantConnectionRejectionProtobuf {

	// Properties
	var rejectionReason : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _participant : RemoteParticipantProtobuf
 }

 struct SeymourCore.EngagementBannerVideoAction {

	// Properties
	let identifier : String
	let reportableVideoWatchedEvent : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ìe
	let videoWatchedThreshold : Double
 }

 struct SeymourCore.EngagementConstants { }

 struct SeymourCore.PrivacyAcknowledgementProtobuf {

	// Properties
	var feature : String
	var state : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.ContributorProtobuf {

	// Properties
	var identifier : String
	var name : String
	var role : String
	var socialMediaHandles : SocialMediaHandleProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _bio : OptionalStringProtobuf
 }

 struct SeymourCore.CatalogSyncAnchorProtobuf {

	// Properties
	var build : String
	var date : Double
	var status : String
	var token : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.RemoteDisplayConnectionState {

	// Properties
	case detached  
	case attached  
 }

 struct SeymourCore.Countdown {

	// Properties
	let delay : Double // +0x0
	let duration : Double // +0x8
	let machTimestamp : Double // +0x10
 }

 struct SeymourCore.MetricPage {

	// Properties
	let pageIdentifier : String
	let pageType : MetricPageCategory
	let pageContext : MetricPageContext
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pageUrl : ìg
	let pageName : String?
 }

 struct SeymourCore.CatalogWorkoutDetailAnnotation {

	// Properties
	let cropCode : String // +0x0
	let detailTags : MediaTag // +0x10
	let headerArtwork : Artwork // +0x18
	let subtitleTags : MediaTag // +0x70
	let summaryTags : MediaTag // +0x78
	let titleTags : MediaTag // +0x80
 }

 struct SeymourCore.ArchivedSession {

	// Properties
	let workoutIdentifier : String
	let sessionIdentifier : String
	let percentageCompleted : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ·^
	let duration : Double
	let scoreSummary : ScoreSummary
 }

 struct SeymourCore.RemoteParticipantPasswordChallengeProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var passwordLength : Qy
	var throttleInterval : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.AssetRequestMediaStreamMetadata {

	// Properties
	let identifier : String
	let title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let thumbnailURL : ìg
 }

 struct SeymourCore.CatalogWorkoutDetailAnnotationRequestProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var completedCount : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _workout : CatalogWorkoutProtobuf
 }

 struct SeymourCore.Credentials {

	// Properties
	let username : String // +0x0
	let password : String // +0x10
 }

 struct SeymourCore.AssetResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let remoteURL : ìe
WARNING: couldn't find address 0x0 (0x0) in binary!
	let localURL : ìe
 }

 struct SeymourCore.MarketingDrivenShelfMarkerProtobuf {

	// Properties
	var type : ProtobufType
	var headerUpsellPlacement : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _headerBannerContent : MarketingBannerContentProtobuf
 }

 enum SeymourCore.ProtobufType {

	// Properties
	case UNRECOGNIZED : Int
	case headerBanner  
	case headerUpsell  
 }

 struct SeymourCore.MarketingBannerContentProtobuf {

	// Properties
	var purpose : String
	var streamingURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _artwork : ArtworkProtobuf
 }

 struct SeymourCore.DisplayPreferencesProtobuf {

	// Properties
	var machTimestamp : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _burnBar : BurnBarDisplayPreferenceProtobuf
	var _metrics : MetricsDisplayPreferenceProtobuf
	var _progress : ProgressDisplayPreferenceProtobuf
 }

 struct SeymourCore.CatalogFilterOptionsProtobuf {

	// Properties
	var trainers : TrainerReferenceProtobuf
	var durations : MediaDurationProtobuf
	var modalities : CatalogModalityReferenceProtobuf
	var musicGenres : MusicGenreProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.ServerDataAccessType {

	// Properties
	case publicData  
	case privateData  
 }

 struct SeymourCore.CatalogPeriodicSyncEvaluationRequest {

	// Properties
	let anchor : CatalogSyncAnchor
	let priority : CatalogPeriodicSyncEvaluationPriority
 }

 enum SeymourCore.ShelfBackgroundDisplayStyle {

	// Properties
	case none  
	case solid  
	case gradient  
 }

 enum SeymourCore.MetricError {

	// Properties
	case brokerInactive  
	case errorNotFound  
	case incompleteIdentifierBundle  
	case invalidIdentifierService  
	case invalidStateChange  
	case missingIdentifier  
	case unsupportedClickStreamType  
	case unsupportedPlatform  
 }

 struct SeymourCore.MusicGenreProtobuf {

	// Properties
	var identifier : String
	var name : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.TrainerReferenceProtobuf {

	// Properties
	var identifier : String
	var name : String
	var artwork : ArtworkProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CatalogChangeset {

	// Properties
	let workoutReferences : CatalogWorkoutReference // +0x0
	let programReferences : CatalogProgramReference // +0x8
	let trainerReferences : TrainerReference // +0x10
	let removedWorkoutIdentifiers : Set<String> // +0x18
	let removedProgramIdentifiers : Set<String> // +0x20
	let removedTrainerIdentifiers : Set<String> // +0x28
 }

 enum SeymourCore.RecommendationEvaluationSource {

	// Properties
	case complementaryWorkout  
	case healthKitWorkout  
	case matchingLastWorkout  
	case nextInProgram  
	case suggestedWorkout  
 }

 struct SeymourCore.AssetRequestProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _identifier : String
	var _type : AssetContentTypeProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _priority : Qy
	var _remoteURL : String
	var _requestTime : Double
	var _expirationTime : Double
	var _bundleIdentifier : OptionalStringProtobuf
	var _keyMetadata : AssetRequestKeyMetadataProtobuf

	// Swift methods
 }

 struct SeymourCore.CatalogFilterPropertyProtobuf {

	// Properties
	var property : OneOf_Property
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.OneOf_Property {

	// Properties
	case trainer : String
	case modality : String
	case musicGenre : String
	case duration : MediaDurationProtobuf
 }

 struct SeymourCore.MetricClickMarketingFieldsProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _upsellType : OptionalStringProtobuf
	var _eligibilityType : OptionalStringProtobuf
	var _placement : OptionalStringProtobuf
	var _placementType : OptionalStringProtobuf
	var _offerType : OptionalStringProtobuf
	var _offerTrialPeriod : OptionalStringProtobuf
	var _marketingItemID : OptionalStringProtobuf
	var _offerDecisionID : OptionalStringProtobuf
 }

 struct SeymourCore.OptionalMetricClickMarketingFieldsProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _value : MetricClickMarketingFieldsProtobuf
 }

 struct SeymourCore.AssetStandardImageURLRequest {

	// Properties
	let workout : CatalogWorkout
WARNING: couldn't find address 0x0 (0x0) in binary!
	let screenWidth : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	let screenHeight : Qy
 }

 struct SeymourCore.TrainerDetailProtobuf {

	// Properties
	var cropCode : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _headerArtwork : ArtworkProtobuf
	var _trainer : TrainerProtobuf
 }

 enum SeymourCore.ServiceSubscriptionError {

	// Properties
	case brokerInactive  
	case expiredCache  
	case fetchFailed  
	case interactiveActionNeeded  
	case noSubscription  
 }

 struct SeymourCore.EngagementBannerRuleInfoProtobuf {

	// Properties
	var jsonPayload : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.HealthKitWorkoutThresholdProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var maximumAgeInDays : Qy
	var minimumDuration : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.ChartShelfTileGroup {

	// Properties
	let header : String // +0x0
	let tiles : ShelfLazyTile // +0x10
 }

 struct SeymourCore.EngagementEvent {

	// Properties
	let jsonPayload : String // +0x0
 }

 struct SeymourCore.UnitPreferencesProtobuf {

	// Properties
	var machTimestamp : Double
	var activeEnergyUnitIdentifier : String
	var basalEnergyUnitIdentifier : String
	var cyclingDistanceUnitIdentifier : String
	var walkRunDistanceUnitIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.RemoteParticipant {

	// Properties
	let identifier : String // +0x0
	let role : PortableEnum // +0x10
	let deviceOwner : RemoteParticipantDeviceOwner // +0x20
	let idsIdentifier : String? // +0x30
	let name : String? // +0x40
	let discoveryInterface : RemoteParticipantDiscoveryInterface // +0x50
 }

 struct SeymourCore.RemotePrivacyAcknowledgementRequest {

	// Properties
	let acknowledgement : PrivacyAcknowledgement // +0x0
	let remoteParticipant : RemoteParticipant // +0x30
 }

 enum SeymourCore.MetricEnterReason {

	// Properties
	case launch  
	case link  
	case tabSwitch  
	case taskSwitch  
 }

 struct SeymourCore.CatalogSyncAnchor {

	// Properties
	let build : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : ·^
	let status : Status
	let token : String
 }

 enum SeymourCore.Status {

	// Properties
	case success  
	case failure  
	case reset  
 }

 struct SeymourCore.SiriStartWorkoutRequest {

	// Properties
	let allowedContentRatings : PortableEnum // +0x0
	let candidates : SiriStartWorkoutCandidate // +0x8
	let completedWorkoutRecords : SiriCompletedWorkoutRecord // +0x10
	let healthKitActivityType : UInt? // +0x18
	let personalizationMethod : PortableEnum // +0x28
	let recommendations : Recommendation // +0x40
 }

 struct SeymourCore.PairedSyncOperation {

	// Properties
	let action : Action // +0x0
	let zone : ZoneName // +0x10
	let identifier : String // +0x18
 }

 enum SeymourCore.Action {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case insert : [=
	case delete  
 }

 struct SeymourCore.CatalogModalityDetailAnnotationProtobuf {

	// Properties
	var cropCode : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _headerArtwork : ArtworkProtobuf
 }

 struct SeymourCore.RemoteBrowsingEnvironment {

	// Properties
	let allowedContentRatings : PortableEnum
	let burnBarPreference : BurnBarDisplayPreference
	let capabilities : RemoteBrowsingCapabilities
	let completedCounts : RemoteBrowsingCompletedCount
	let metricIdentifiers : MetricTopicIdentifiers
	let metricsPreference : MetricsDisplayPreference
	let noticePreference : NoticePrivacyPreference
	let optInPreference : OptInPrivacyPreference
	let privacyAcknowledgements : PrivacyAcknowledgement
	let programProgression : RemoteBrowsingProgramProgress
	let progressPreference : ProgressDisplayPreference
	let recommendations : Recommendation
	let serviceSubscription : ServiceSubscription
	let user : RemoteBrowsingUser
 }

 struct SeymourCore.PaceMetric {

	// Properties
	let averagePaceInMetersPerSecond : Double // +0x0
	let machTimestamp : Double // +0x8
 }

 struct SeymourCore.MetricEnvironmentProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _appBundleIdentifier : OptionalStringProtobuf
	var _appVersion : OptionalStringProtobuf
	var _buildVariant : OptionalStringProtobuf
	var _pixelRatio : OptionalIntegerProtobuf
	var _screenHeight : OptionalIntegerProtobuf
	var _screenWidth : OptionalIntegerProtobuf
	var _storefront : OptionalStringProtobuf
 }

 enum SeymourCore.ShelfLockupContent {

	// Properties
	case chart : ChartShelfLockupGroup
	case deviceDriven : DeviceDrivenShelfMarker
	case editorial : ShelfLazyLockup
	case marketingDriven : MarketingDrivenShelfMarker
 }

 struct SeymourCore.Workout {

	// Properties
	let elapsedTime : Double // +0x0
	let state : PortableEnum // +0x8
	let machTimestamp : Double // +0x10
 }

 enum SeymourCore.State {

	// Properties
	case active  
	case paused  
	case ending  
	case ended  
	case discarded  
 }

 struct SeymourCore.MusicTrack {

	// Properties
	let identifier : String // +0x0
	let title : String // +0x10
	let artist : String // +0x20
	let album : String // +0x30
	let artwork : Artwork // +0x40
	let startTime : Double // +0x98
	let duration : Double // +0xa0
 }

 class SeymourCore.Dependencies : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let dependencyMap : [ObjectIdentifier : Any]

	// Swift methods
	0x1e7ec0  class func Dependencies.__allocating_init(_:) // init 
	0x1e7fa0  func <stripped> // method 
	0x1e8070  func <stripped> // method 
	0x1e8150  func <stripped> // method 
 }

 struct SeymourCore.RemoteBrowsingCompletedCount {

	// Properties
	let workoutIdentifier : String
	let completedCount : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mostRecentCompletedDate : ·^
 }

 enum SeymourCore.PortableEnum {

	// Properties
	case unknown : A.RawRepresentable.RawValue
	case known : A
 }

 struct SeymourCore.SocialMediaHandle {

	// Properties
	let platform : PortableEnum
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ìe
 }

 struct SeymourCore.MetricEnvironment {

	// Properties
	let appBundleIdentifier : String? // +0x0
	let appVersion : String? // +0x10
	let buildVariant : String? // +0x20
	let pixelRatio : Int? // +0x30
	let screenHeight : Int? // +0x40
	let screenWidth : Int? // +0x50
	let storefront : String? // +0x60
 }

 struct SeymourCore.MetricsDisplayPreferenceProtobuf {

	// Properties
	var behavior : String
	var modalityConstraint : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CatalogWorkoutReferenceProtobuf {

	// Properties
	var identifier : String
	var dateReleased : String
	var duration : Double
	var mediaType : String
	var modalityIdentifier : String
	var musicGenreIdentifiers : [String]
	var equipmentIdentifiers : [String]
	var trainerIdentifiers : [String]
	var contributorIdentifiers : [String]
	var contentRating : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var episode : πx
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CatalogFilterProtobuf {

	// Properties
	var exclusions : CatalogFilterPropertyProtobuf
	var inclusions : CatalogFilterPropertyProtobuf
	var sortMode : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.PairedSyncAcknowledgement {

	// Properties
	let zone : ZoneName // +0x0
	let identifier : String // +0x8
 }

 enum SeymourCore.CatalogPeriodicSyncEvaluationPriority {

	// Properties
	case background  
	case userInitiated  
 }

 enum SeymourCore.AssetError {

	// Properties
	case activePairedDeviceUnknown  
	case bundleNotFound  
	case chargerPowerSourceRequired  
	case catalogReferenceNotFound  
	case completedEntryNotFound  
	case deviceRegistryNotActivated  
	case downloadCancelled  
	case downloadPaused  
	case downloadFailed  
	case downloadTaskCreationFailed  
	case duplicateLoaderForContentType  
	case inconsistentData  
	case invalidBundle  
	case invalidDate  
	case invalidDownloadTaskState  
	case invalidDownloadURL  
	case invalidDownloadingDevice  
	case invalidLocalURL  
	case invalidLoadStatus  
	case invalidRequest  
	case invalidKeyCertificateContext  
	case invalidKeyMetadata  
	case invalidKeyIdentifier  
	case invalidKeyStopURL  
	case invalidSize  
	case loaderNotFound  
	case mediaSelectionError  
	case encryptedStreamMissingKeys  
	case promiseRequirementUnfulfilled  
	case subscriptionRequired  
	case unableToDecodeBytes  
	case unknownUserIdentifier  
	case unknown  
	case unsupported  
 }

 enum SeymourCore.SyncDomain {

	// Properties
	case server  
	case local  
 }

 struct SeymourCore.RemoteBrowsingConstants { }

 struct SeymourCore.Trainer {

	// Properties
	let artwork : Artwork
	let bio : String?
	let identifier : String
	let name : String
	let preview : CatalogPreview
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sharingURL : ìe
	let socialMediaHandles : SocialMediaHandle
 }

 struct SeymourCore.DistributedSessionRequest {

	// Properties
	let session : Session
	let handshakeTimestampOffset : Double
 }

 struct SeymourCore.CatalogWorkoutProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _identifier : String
	var _dateReleased : String
	var _duration : Double
	var _mediaType : String
	var _title : String
	var _summary : OptionalStringProtobuf
	var _streamingURL : String
	var _location : OptionalStringProtobuf
	var _musicPlaylistURL : OptionalStringProtobuf
	var _musicPlaylistIdentifier : OptionalStringProtobuf
	var _modality : CatalogModalityProtobuf
	var _contributors : ContributorProtobuf
	var _musicGenres : MusicGenreProtobuf
	var _equipment : EquipmentProtobuf
	var _trainerEvents : TrainerEventProtobuf
	var _musicTracks : MusicTrackProtobuf
	var _mediaMoments : MediaMomentProtobuf
	var _artwork : ArtworkProtobuf
	var _trainers : TrainerProtobuf
	var _sharingURL : String
	var _contentRating : String
	var _skillLevel : OptionalStringProtobuf
	var _bodyFocuses : [String]
	var _commentaryEvents : CommentaryEventProtobuf
	var _preview : CatalogPreviewProtobuf
	var _streamingProgramIdentifier : OptionalStringProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _episode : πx
	var _accessibilityFeatures : [String]

	// Swift methods
 }

 struct SeymourCore.SiriCompletedWorkoutRecordProtobuf {

	// Properties
	var workoutIdentifier : String
	var mostRecentCompletedDate : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.RemoteParticipantRole {

	// Properties
	case advertisingTV  
	case authenticated  
	case authenticatedWatch  
	case display  
	case pairedCompanion  
	case sameAccountWatch  
 }

 struct SeymourCore.CachedCatalogWorkoutLockupRequest {

	// Properties
	let displayStyle : ShelfDisplayStyle // +0x0
	let inclusion : Inclusion // +0x8
	let sortMode : CatalogSortMode // +0x11
 }

 enum SeymourCore.Inclusion {

	// Properties
	case identifiers : [String]
	case mediaType : CatalogMediaType
 }

 struct SeymourCore.MetricClickStreamProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _type : MetricClickStreamTypeProtobuf
	var _page : MetricPageProtobuf
	var _identifier : MetricIdentifierProtobuf
	var _environment : MetricEnvironmentProtobuf

	// Swift methods
 }

 struct SeymourCore.Contributor {

	// Properties
	let bio : String? // +0x0
	let identifier : String // +0x10
	let name : String // +0x20
	let role : PortableEnum // +0x30
	let socialMediaHandles : SocialMediaHandle // +0x48
 }

 struct SeymourCore.PaceMetricProtobuf {

	// Properties
	var machTimestamp : Double
	var averagePaceInMetersPerSecond : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.CatalogMediaType {

	// Properties
	case guidedWalk  
	case video  
 }

 struct SeymourCore.AssetBundleLoadFailure {

	// Properties
	let bundleIdentifier : String
	let reason : PortableEnum
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : ·^
 }

 enum SeymourCore.Reason {

	// Properties
	case networkError  
	case systemError  
	case unknown  
 }

 struct SeymourCore.AssetStandardImageBestMatchRequestProtobuf {

	// Properties
	var template : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var imageWidth : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var imageHeight : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.PairedSyncResponse {

	// Properties
	let completed : PairedSyncAcknowledgement // +0x0
 }

 enum SeymourCore.WatchConnectionRejectionReason {

	// Properties
	case deviceLocked  
	case deviceOffWrist  
	case incompatibleWatchVersion  
 }

 struct SeymourCore.WatchConnectionRejection {

	// Properties
	let reason : PortableEnum // +0x0
	let machTimestamp : Double // +0x18
 }

 struct SeymourCore.HeartRateMetricProtobuf {

	// Properties
	var machTimestamp : Double
	var instantaneous : Double
	var average : Double
	var minimum : Double
	var maximum : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.MetricRemoteIdentifier {

	// Properties
	let clientIdentifier : String?
	let userIdentifier : String?
	let noticePrivacyPreference : NoticePrivacyPreference
	let optInPrivacyPreference : OptInPrivacyPreference
	let serviceSubscription : ServiceSubscription
 }

 struct SeymourCore.ArchivedSessionProtobuf {

	// Properties
	var workoutIdentifier : String
	var sessionIdentifier : String
	var percentageCompleted : Double
	var startDate : Double
	var duration : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _scoreSummary : ScoreSummaryProtobuf
 }

 struct SeymourCore.CatalogFilterOptions {

	// Properties
	let durations : MediaDuration // +0x0
	let modalities : CatalogModalityReference // +0x8
	let musicGenres : MusicGenre // +0x10
	let trainers : TrainerReference // +0x18
 }

 struct SeymourCore.Playback {

	// Properties
	let elapsedTime : Double // +0x0
	let state : PortableEnum // +0x8
	let machTimestamp : Double // +0x10
 }

 enum SeymourCore.State {

	// Properties
	case playing  
	case paused  
	case buffering  
	case ended  
 }

 struct SeymourCore.CatalogProgramReference {

	// Properties
	let contentRating : PortableEnum
	let contributorIdentifiers : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateReleased : A]
	let equipmentIdentifiers : [String]
	let identifier : String
	let modalityIdentifiers : [String]
	let musicGenreIdentifiers : [String]
	let trainerIdentifiers : [String]
	let workoutIdentifiers : [String]
 }

 struct SeymourCore.CatalogModalityMetadataProtobuf {

	// Properties
	var identifier : String
	var summary : String
	var artwork : ArtworkProtobuf
	var sharingURL : String
	var abridgedSummary : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _preview : CatalogPreviewProtobuf
 }

 struct SeymourCore.Dependency {

	// Properties
	let typedInstance : A
 }

 struct SeymourCore.RemoteBrowsingAppleAccount {

	// Properties
	let primaryEmail : String? // +0x0
	let identifier : String? // +0x10
	let identifierAliases : [String] // +0x20
	let personIdentifier : String? // +0x28
	let alternateDirectoryServicesIdentifier : String? // +0x38
	let firstName : String? // +0x48
	let middleName : String? // +0x58
	let lastName : String? // +0x68
	let regionInfo : [String : String] // +0x78
	let accountClass : String // +0x80
	let isUsingCloudDocuments : Bool // +0x90
	let isPrimaryEmailVerified : Bool // +0x91
	let isManagedAppleID : Bool // +0x92
	let isNotesMigrated : Bool // +0x93
	let isRemindersMigrated : Bool // +0x94
	let isSandboxAccount : Bool // +0x95
	let isFamilyEligible : Bool // +0x96
	let hasOptionalTerms : Bool // +0x97
	let needsToVerifyTerms : Bool // +0x98
	let underlyingSuspensionInfo : [String : Bool] // +0xa0
	let underlyingRepairState : UInt // +0xa8
	let cellularDisabledDataClasses : [String] // +0xb0
 }

 enum SeymourCore.WatchConnectionState {

	// Properties
	case discovering  
	case ongoingWorkoutDetected  
	case continueOnWatch  
	case paired  
	case standalone  
 }

 struct SeymourCore.ActivityRings {

	// Properties
	let move : ActivityMoveRing // +0x0
	let exercise : ActivityRing // +0x28
	let stand : ActivityRing // +0x38
	let machTimestamp : Double // +0x48
 }

 struct SeymourCore.BurnBarDisplayPreference {

	// Properties
	let behavior : PortableEnum // +0x0
	let modalityConstraint : DisplayPreferenceModalityConstraint // +0x18
 }

 enum SeymourCore.Behavior {

	// Properties
	case disabled  
	case enabled  
 }

 struct SeymourCore.PairedSyncOperationProtobuf {

	// Properties
	var action : Action
	var zone : String
	var identifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var payload : ÔT
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.Action {

	// Properties
	case UNRECOGNIZED : Int
	case insert  
	case delete  
 }

 struct SeymourCore.SiriStartWorkoutResponse {

	// Properties
	let workoutIdentifier : String // +0x0
	let healthKitActivityType : UInt? // +0x10
 }

 struct SeymourCore.DemoAssetBundleRequest {

	// Properties
	let workoutIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let localMediaURL : ìe
 }

 struct SeymourCore.TerminationProtobuf {

	// Properties
	var machTimestamp : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var reason : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CatalogLockupPlaceholder {

	// Properties
	let identifier : String // +0x0
	let referenceType : PortableEnum // +0x10
 }

 enum SeymourCore.PromiseError {

	// Properties
	case emptyRequiredValue  
 }

 struct SeymourCore.CatalogProgramMetadata {

	// Properties
	let accessibilityFeatures : PortableEnum
	let artwork : Artwork
	let contributors : Contributor
	let identifier : String
	let location : String?
	let preview : CatalogPreview
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sharingURL : ìe
	let summary : String
	let title : String
 }

 struct SeymourCore.SessionScoresProtobuf {

	// Properties
	var workoutIdentifier : String
	var scores : ScoreProtobuf
	var sessionIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var workoutDuration : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var activityType : πx
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.DistanceMetricProtobuf {

	// Properties
	var machTimestamp : Double
	var meters : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.ActivityMoveRingProtobuf {

	// Properties
	var moveMode : String
	var ringGoal : Double
	var ringValue : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.AssetLoadStatus {

	// Properties
	case pendingLoad  
	case loading  
	case pendingPause  
	case pausing  
	case paused  
	case completed  
	case failed  
	case pendingCancellation  
	case cancelling  
 }

 struct SeymourCore.EnergyMetric {

	// Properties
	let activeCalories : Double // +0x0
	let basalCalories : Double // +0x8
	let machTimestamp : Double // +0x10
 }

 struct SeymourCore.CatalogProgramDetailAnnotationProtobuf {

	// Properties
	var cropCode : String
	var titleTags : MediaTagProtobuf
	var detailTags : MediaTagProtobuf
	var subtitleTags : MediaTagProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _headerArtwork : ArtworkProtobuf
 }

 struct SeymourCore.SiriStartWorkoutCandidateProtobuf {

	// Properties
	var identifier : String
	var contentRating : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CatalogWorkoutMetadataRefreshResultProtobuf {

	// Properties
	var failedIdentifiers : [String]
	var successfulIdentifiers : [String]
	var skippedIdentifiers : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.MetricMediaType {

	// Properties
	case video  
	case audio  
 }

 enum SeymourCore.MetricClickAction {

	// Properties
	case actionSheet  
	case add  
	case addToWatch  
	case buy  
	case cancel  
	case close  
	case copy  
	case download  
	case filter  
	case less  
	case love  
	case more  
	case navigate  
	case open  
	case play  
	case remove  
	case removeDownload  
	case removeFromWatch  
	case select  
	case share  
	case signOut  
	case sort  
	case unknown  
	case update  
 }

 enum SeymourCore.MetricPlaybackDownloadState {

	// Properties
	case streaming  
	case downloading  
	case downloaded  
 }

 struct SeymourCore.CatalogPreview {

	// Properties
	let contentRating : PortableEnum
	let streamingProgramIdentifier : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let streamingURL : ìe
 }

 struct SeymourCore.MediaMoment {

	// Properties
	let startTime : Double // +0x0
	let duration : Double // +0x8
	let artwork : Artwork // +0x10
 }

 struct SeymourCore.AssetStandardImageURLRequestProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var screenWidth : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var screenHeight : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _workout : CatalogWorkoutProtobuf
 }

 enum SeymourCore.ServiceSubscriptionCacheBehavior {

	// Properties
	case ignoreCache  
	case preferCache  
 }

 struct SeymourCore.RemoteBrowsingAppleMediaServicesAccountProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 struct SeymourCore.Cookie {

	// Properties
	var properties : [String : String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _underlyingAccountFlags : [String : Bool]
	var _underlyingActiveMediaTypes : [String]
	var _alternateDirectoryServicesIdentifier : OptionalStringProtobuf
	var _automaticDownloadKindsKey : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _biometricsState : Qy
	var _cookies : Cookie
	var _credits : OptionalStringProtobuf
	var _demoAccountRawPassword : OptionalStringProtobuf
	var _didAgreeToTerms : Bool
	var _directoryServicesIdentifier : OptionalStringProtobuf
	var _firstName : OptionalStringProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _underlyingFreePasswordPromptSetting : πx
	var _iCloudFamily : Bool
	var _inGoodStanding : Bool
	var _isDemoAccount : Bool
	var _isManagedAppleID : Bool
	var _isPrivateListeningEnabledForHomeUsers : [String : Bool]
	var _isValidPayment : Bool
	var _lastName : OptionalStringProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _underlyingLastAuthenticationCredentialSource : πx
	var _mergedPrivacyAcknowledgement : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _underlyingPaidPasswordPromptSetting : πx
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _privacyAcknowledgement : String
	var _pushRegistrationThrottleMap : [String : Double]
	var _storefront : OptionalStringProtobuf

	// Swift methods
 }

 struct SeymourCore.TimeConstants { }

 struct SeymourCore.AssetLoadFailure {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let remoteURL : ìe
	let bundleIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : ·^
 }

 struct SeymourCore.ServiceSubscriptionRequest {

	// Properties
	let authenticationBehavior : ServiceSubscriptionAuthenticationBehavior // +0x0
	let cacheBehavior : ServiceSubscriptionCacheBehavior // +0x1
 }

 struct SeymourCore.Termination {

	// Properties
	let reason : PortableEnum // +0x0
	let machTimestamp : Double // +0x8
 }

 enum SeymourCore.Reason {

	// Properties
	case sessionComplete  
	case appExit  
	case heartbeatTimeOut  
	case sessionIdle  
	case dismissedPreSession  
 }

 struct SeymourCore.RemoteBrowsingCompletedCountProtobuf {

	// Properties
	var workoutIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var completedCount : Qy
	var mostRecentCompletedDate : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.DistanceMetric {

	// Properties
	let meters : Double // +0x0
	let machTimestamp : Double // +0x8
 }

 struct SeymourCore.CatalogProgramProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _identifier : String
	var _dateReleased : String
	var _title : String
	var _summary : String
	var _contributors : ContributorProtobuf
	var _workoutIdentifiers : [String]
	var _musicGenres : MusicGenreProtobuf
	var _equipment : EquipmentProtobuf
	var _modalities : CatalogModalityProtobuf
	var _artwork : ArtworkProtobuf
	var _previewStreamingURL : OptionalStringProtobuf
	var _trainers : TrainerProtobuf
	var _sharingURL : String
	var _contentRating : String
	var _location : OptionalStringProtobuf
	var _preview : CatalogPreviewProtobuf
	var _accessibilityFeatures : [String]

	// Swift methods
 }

 struct SeymourCore.UserBodyMassMetricProtobuf {

	// Properties
	var machTimestamp : Double
	var massInKg : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.KeyContextProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var blob : ÔT
	var renewAfter : Double
	var canFreeDeviceSlot : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.ShelfLazyTile {

	// Properties
	case placeholder : CatalogLockupPlaceholder
	case tile : CatalogTile
 }

 enum SeymourCore.MetricPlaybackStopReason {

	// Properties
	case background  
	case buffering  
	case closePlayer  
	case complete  
	case error  
	case exit  
	case failure  
	case inactivity  
	case interrupted  
	case next  
	case pause  
	case playOther  
	case seek  
	case seekStop  
	case transition  
	case unknown  
 }

 struct SeymourCore.RemoteBrowsingProgramProgress {

	// Properties
	let programIdentifier : String // +0x0
	let nextWorkouts : CatalogLockupPlaceholder // +0x10
 }

 struct SeymourCore.EngagementBannerMessage {

	// Properties
	let action : EngagementBannerAction
	let bannerIdentifier : String
	let identifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let imageURL : ìe
	let subtitle : String
	let targetIdentifier : String
	let title : String
 }

 struct SeymourCore.CountdownProtobuf {

	// Properties
	var machTimestamp : Double
	var delay : Double
	var duration : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.WorkoutActivityTypeBehaviorProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var activityType : πx
	var isEligibleForScoreEvaluation : Bool
	var isEligibleForCooldownSuggestion : Bool
	var supportedMetrics : [String]
	var isEligibleForGymKitSession : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.AssetBundleProgressProtobuf {

	// Properties
	var workoutIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bytesExpected : W[
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bytesReceived : W[
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.DisplayPreferences {

	// Properties
	let burnBar : BurnBarDisplayPreference // +0x0
	let metrics : MetricsDisplayPreference // +0x28
	let progress : ProgressDisplayPreference // +0x50
	let machTimestamp : Double // +0x78
 }

 enum SeymourCore.RemoteBrowsingError {

	// Properties
	case accountPropertiesSerializationFailed  
	case incompleteEnvironment  
	case invalidPortableCopy  
	case mismatchedLocalAcount  
	case noActiveParticipant  
	case noConnectionRecord  
	case noPendingConfirmation  
	case unrecognizedAccountType  
	case userRejectedRequest  
 }

 struct SeymourCore.CatalogModalityDetailAnnotation {

	// Properties
	let cropCode : String // +0x0
	let headerArtwork : Artwork // +0x10
 }

 struct SeymourCore.TrainerEventProtobuf {

	// Properties
	var type : String
	var startTime : Double
	var duration : Double
	var text : String
	var leadDuration : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.FileType { }

 struct SeymourCore.CountdownIntentProtobuf {

	// Properties
	var machTimestamp : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.MetricPlaybackStartReason {

	// Properties
	case buffering  
	case focus  
	case foreground  
	case interruption  
	case manualNextPrevious  
	case next  
	case play  
	case playOther  
	case seek  
	case transition  
	case unpause  
	case unknown  
 }

 struct SeymourCore.RemoteProgressPreferenceUpdateRequestProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _preference : ProgressDisplayPreferenceProtobuf
	var _remoteParticipant : RemoteParticipantProtobuf
 }

 struct SeymourCore.SessionProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _identifier : String
	var _catalogWorkout : CatalogWorkoutProtobuf
	var _activityRings : ActivityRingsProtobuf
	var _countdownIntent : CountdownIntentProtobuf
	var _countdown : CountdownProtobuf
	var _energyMetric : EnergyMetricProtobuf
	var _heartRateMetric : HeartRateMetricProtobuf
	var _playbackIntent : PlaybackIntentProtobuf
	var _playback : PlaybackProtobuf
	var _termination : TerminationProtobuf
	var _workout : WorkoutProtobuf
	var _scoreMetrics : ScoreMetricProtobuf
	var _userMassMetric : UserBodyMassMetricProtobuf
	var _distanceMetric : DistanceMetricProtobuf
	var _watchConnection : WatchConnectionProtobuf
	var _gymKitConnection : GymKitConnectionProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _workoutActivityType : πx
	var _hostAppBundleIdentifier : String
	var _displayPreferences : DisplayPreferencesProtobuf
	var _unitPreferences : UnitPreferencesProtobuf
	var _supportedMetrics : [String]
	var _watchConnectionRejection : WatchConnectionRejectionProtobuf
	var _remoteDisplayConnection : RemoteDisplayConnectionProtobuf
	var _paceMetric : PaceMetricProtobuf

	// Swift methods
 }

 struct SeymourCore.WatchConnectionRejectionProtobuf {

	// Properties
	var reason : String
	var machTimestamp : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.SessionUpdate {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let updateIdentifier : πx // +0x0
	let sessionIdentifier : String // +0x8
	let machTimestamp : Double // +0x18
	let activityRings : ActivityRings // +0x20
	let countdownIntent : CountdownIntent // +0x70
	let countdown : Countdown // +0x80
	let displayPreferences : DisplayPreferences // +0xa0
	let distanceMetric : DistanceMetric // +0x120
	let gymKitConnection : GymKitConnection // +0x138
	let energyMetric : EnergyMetric // +0x148
	let heartRateMetric : HeartRateMetric // +0x168
	let paceMetric : PaceMetric // +0x198
	let playbackIntent : PlaybackIntent // +0x1b0
	let playback : Playback // +0x1c0
	let remoteDisplayConnection : RemoteDisplayConnection // +0x1d8
	let scoreMetric : ScoreMetric // +0x1f8
	let termination : Termination // +0x230
	let unitPreferences : UnitPreferences // +0x240
	let userMassMetric : UserBodyMassMetric // +0x288
	let watchConnection : WatchConnection // +0x2a0
	let watchConnectionRejection : WatchConnectionRejection // +0x2c0
	let workout : Workout // +0x2e0
 }

 struct SeymourCore.MetricPageCategoryProtobuf {

	// Properties
	var type : ProtobufType
	var medium : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var completedCount : W[
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _catalogFilter : CatalogFilterProtobuf
 }

 enum SeymourCore.ProtobufType {

	// Properties
	case UNRECOGNIZED : Int
	case account  
	case all  
	case filter  
	case gallery  
	case home  
	case loading  
	case modality  
	case offline  
	case picker  
	case postSession  
	case preview  
	case program  
	case prompt  
	case signin  
	case setup  
	case trainer  
	case unknown  
	case upsell  
	case workout  
 }

 struct SeymourCore.WorkoutActivityTypeBehavior {

	// Properties
	let activityType : UInt // +0x0
	let isEligibleForScoreEvaluation : Bool // +0x8
	let isEligibleForCooldownSuggestion : Bool // +0x9
	let supportedMetrics : WorkoutMetric // +0x10
	let isEligibleForGymKitSession : Bool // +0x18
 }

 struct SeymourCore.ArchivedSessionThreshold {

	// Properties
	let maximumAgeInDays : Int // +0x0
	let minimumPercentComplete : Double // +0x8
 }

 struct SeymourCore.TrainerMetadata {

	// Properties
	let bio : String?
	let identifier : String
	let preview : CatalogPreview
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sharingURL : ìe
	let socialMediaHandles : SocialMediaHandle
 }

 struct SeymourCore.MetricIdentifierProtobuf {

	// Properties
	var type : ProtobufType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _remoteIdentifier : MetricRemoteIdentifierProtobuf
 }

 enum SeymourCore.ProtobufType {

	// Properties
	case UNRECOGNIZED : Int
	case local  
	case remote  
 }

 struct SeymourCore.RemoteParticipantConnectionRejection {

	// Properties
	let participant : RemoteParticipant // +0x0
	let rejectionReason : PortableEnum // +0x58
 }

 struct SeymourCore.KeyContext {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let blob : ÔT // +0x0
	let renewAfter : Double // +0x10
	let canFreeDeviceSlot : Bool // +0x18
 }

 struct SeymourCore.FetchScoresRequestProtobuf {

	// Properties
	var identifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var activityType : πx
WARNING: couldn't find address 0x0 (0x0) in binary!
	var duration : Qy
	var type : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.EquipmentProtobuf {

	// Properties
	var identifier : String
	var name : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CommentaryEvent {

	// Properties
	let duration : Double // +0x0
	let startTime : Double // +0x8
	let topic : PortableEnum // +0x10
	let topicIdentifier : String // +0x28
 }

 enum SeymourCore.SessionError {

	// Properties
	case handshakeFailed  
	case invalidDistributedSession  
	case invalidLaunchURL  
	case invalidParticipantRole  
	case missingTimestamp  
	case noActiveSession  
	case noDisplayConnection  
	case noMatchingSession  
	case sessionAlreadyActive  
	case tokenAlreadyUsed  
	case tokenInactive  
	case unsupportedPlatform  
	case noActiveParticipant  
 }

 enum SeymourCore.CatalogAccessibilityFeature {

	// Properties
	case cc  
	case sdh  
 }

 enum SeymourCore.TransportResult {

	// Properties
	case success : TransportDataSerializable
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failure : ák
 }

 struct SeymourCore.ShelfLazyLockupProtobuf {

	// Properties
	var type : ProtobufType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _placeholderProtobuf : CatalogLockupPlaceholderProtobuf
	var _lockupProtobuf : CatalogLockupProtobuf
 }

 enum SeymourCore.ProtobufType {

	// Properties
	case UNRECOGNIZED : Int
	case placeholder  
	case lockup  
 }

 struct SeymourCore.SyncOperation {

	// Properties
	let action : Action // +0x0
	let domain : SyncDomain // +0x1
	let syncIdentifier : String // +0x8
	let timestamp : Double // +0x18
	let zone : ZoneName // +0x20
 }

 enum SeymourCore.Action {

	// Properties
	case insert  
	case delete  
 }

 struct SeymourCore.RemoteBrowsingCapabilities {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : W[ // +0x0
 }

 struct SeymourCore.CatalogGalleryTileRequest {

	// Properties
	let displayStyle : ShelfDisplayStyle // +0x0
	let identifier : String // +0x8
 }

 enum SeymourCore.ContributorRole {

	// Properties
	case celebrity  
	case guestTrainer  
	case interviewee  
	case interviewer  
	case narrator  
	case trainer  
 }

 struct SeymourCore.MetricPurchaseResultProtobuf {

	// Properties
	var resultType : String
	var itemIdentifiers : [String]
	var productTypes : [String]
	var sapTypes : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.DisplayPreferenceModalityConstraint {

	// Properties
	case modality : (identifier: String)
	case global  
 }

 struct SeymourCore.HealthKitWorkout {

	// Properties
	let duration : Double
	let identifier : String
	let isIndoorWorkout : Bool
	let sessionReference : HealthKitSessionReference
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ·^
	let workoutActivityType : UInt
 }

 enum SeymourCore.MediaTagSeparator {

	// Properties
	case comma  
	case dot  
	case newLine  
	case singleSpace  
 }

 enum SeymourCore.MetricPageContext {

	// Properties
	case default  
	case setup  
	case sheet  
	case tab  
 }

 struct SeymourCore.RemoteBrowsingAccountProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _type : RemoteBrowsingAccountTypeProtobuf
	var _identifier : OptionalStringProtobuf
	var _username : OptionalStringProtobuf
	var _firstName : OptionalStringProtobuf
	var _middleName : OptionalStringProtobuf
	var _lastName : OptionalStringProtobuf
	var _nickname : OptionalStringProtobuf
	var _personalIdentifier : OptionalStringProtobuf
	var _identityEmailAddress : OptionalStringProtobuf
	var _hostname : OptionalStringProtobuf
	var _childCardDavaccountIdentifier : OptionalStringProtobuf
	var _dataAccessAccountHost : OptionalStringProtobuf
	var _dataAccessAccountEmail : OptionalStringProtobuf
	var _managingOwnerIdentifier : OptionalStringProtobuf
	var _managingSourceName : OptionalStringProtobuf

	// Swift methods
 }

 struct SeymourCore.AssetRequest {

	// Properties
	let identifier : String
	let type : AssetContentType
WARNING: couldn't find address 0x0 (0x0) in binary!
	let remoteURL : ìe
	let priority : QualityOfService
	let requestTime : Double
	let expirationTime : Double
	let bundleIdentifier : String?
 }

 enum SeymourCore.ExpirationPolicy {

	// Properties
	case exact : (days: UInt)
	case never  
	case standard  
 }

 struct SeymourCore.AssetLoadFailureProtobuf {

	// Properties
	var remoteURL : String
	var bundleIdentifier : String
	var date : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.ServiceSubscription {

	// Properties
	let beginTimestamp : Double?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bundleIdentifier : W[
WARNING: couldn't find address 0x0 (0x0) in binary!
	let expiration : w_
	let fromCache : Bool
	let gracePeriod : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : W[
	let initialPurchaseTimestamp : Double?
	let offerPeriod : Bool
	let poolType : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let promoScenarioIdentifier : ©8
	let purchaser : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let renewDate : w_
WARNING: couldn't find address 0x0 (0x0) in binary!
	let setIdentifier : ©8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let specialAccessTypeIdentifier : ©8
	let trialPeriod : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let trialPeriodIdentifier : ©8
	let vendorOfferIdentifier : String?
 }

 struct SeymourCore.RemoteOptInPreferenceUpdateRequest {

	// Properties
	let preference : OptInPrivacyPreference // +0x0
	let remoteParticipant : RemoteParticipant // +0x28
 }

 struct SeymourCore.WatchConnectionProtobuf {

	// Properties
	var state : String
	var machTimestamp : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.MetricPurchaseResult {

	// Properties
	let resultType : MetricPurchaseResultType // +0x0
	let itemIdentifiers : [String] // +0x8
	let productTypes : [String] // +0x10
	let sapTypes : [String] // +0x18
 }

 struct SeymourCore.AssetResumableLoadProtobuf {

	// Properties
	var remoteURL : String
	var localURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var downloadToken : a8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.RemoteBrowsingProgramProgressProtobuf {

	// Properties
	var programIdentifier : String
	var nextWorkouts : CatalogLockupPlaceholderProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.MetricPurchaseResultType {

	// Properties
	case success  
	case failure  
 }

 enum SeymourCore.ActivityMoveMode {

	// Properties
	case activeEnergy  
	case moveMinutes  
 }

 struct SeymourCore.ActivityMoveRing {

	// Properties
	let moveMode : PortableEnum // +0x0
	let ring : ActivityRing // +0x18
 }

 struct SeymourCore.TrainerMetadataProtobuf {

	// Properties
	var identifier : String
	var sharingURL : String
	var socialMediaHandles : SocialMediaHandleProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _bio : OptionalStringProtobuf
	var _artwork : ArtworkProtobuf
	var _preview : CatalogPreviewProtobuf
 }

 struct SeymourCore.CatalogWorkoutDetailTags {

	// Properties
	let detailTags : MediaTag // +0x0
	let subtitleTags : MediaTag // +0x8
	let summaryTags : MediaTag // +0x10
	let titleTags : MediaTag // +0x18
 }

 struct SeymourCore.ChartShelfLockupGroup {

	// Properties
	let header : String // +0x0
	let lockups : ShelfLazyLockup // +0x10
 }

 struct SeymourCore.EnergyMetricProtobuf {

	// Properties
	var machTimestamp : Double
	var activeCalories : Double
	var basalCalories : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CatalogMetadataJournalProtobuf {

	// Properties
	var identifier : String
	var timestamp : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.ServerPlaybackContextProtobuf {

	// Properties
	var content : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var blob : ÔT
WARNING: couldn't find address 0x0 (0x0) in binary!
	var remoteContextIdentifier : πx
	var workoutIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.MetricLocation {

	// Properties
	let identifier : String // +0x0
	let identifierType : String // +0x10
	let index : Int // +0x20
	let name : String? // +0x28
	let elementType : MetricClickElement // +0x38
 }

 enum SeymourCore.BodyFocus {

	// Properties
	case cardio  
	case core  
	case lowerBody  
	case totalBody  
	case upperBody  
 }

 enum SeymourCore.RemoteParticipantDiscoveryInterface {

	// Properties
	case awdl  
	case bluetooth  
	case btPipe  
	case unknown  
	case wifi  
 }

 struct SeymourCore.Artwork {

	// Properties
	let backgroundColor : String // +0x0
	let flavor : PortableEnum // +0x10
	let height : Int // +0x28
	let template : String // +0x30
	let textColor : String // +0x40
	let width : Int // +0x50
 }

 struct SeymourCore.RemoteBrowsingGuestEnvironmentProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _participant : RemoteParticipantProtobuf
	var _environment : RemoteBrowsingEnvironmentProtobuf
 }

 struct SeymourCore.ArchivedSessionThresholdProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var maximumAgeInDays : Qy
	var minimumPercentComplete : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CommentaryEventProtobuf {

	// Properties
	var topic : String
	var topicIdentifier : String
	var startTime : Double
	var duration : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.MetricClickStreamType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case account : ´G
	case click : MetricClick
	case enter : MetricEnterReason
	case exit : MetricExitReason
WARNING: couldn't find address 0x0 (0x0) in binary!
	case impression :  empty-list 
	case media : (identifier: String)
	case page : MetricNavigationDirection
	case purchase : MetricPurchaseResult
	case dialog  
 }

 struct SeymourCore.PairedSyncRequest {

	// Properties
	let operations : PairedSyncOperation // +0x0
 }

 struct SeymourCore.BookmarkProtobuf {

	// Properties
	var referenceIdentifier : String
	var referenceType : String
	var dateBookmarked : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CachedCatalogWorkoutLockupRequestProtobuf {

	// Properties
	var type : InclusionProtobufType
	var displayStyle : String
	var sortMode : String
	var workoutIdentifierInclusions : [String]
	var mediaTypeInclusion : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.InclusionProtobufType {

	// Properties
	case UNRECOGNIZED : Int
	case identifiers  
	case mediaType  
 }

 struct SeymourCore.Session {

	// Properties
	let identifier : String
	let catalogWorkout : CatalogWorkout
	let hostAppBundleIdentifier : String
	let supportedMetrics : PortableEnum
	let workoutActivityType : UInt
	let activityRings : ActivityRings
	let countdownIntent : CountdownIntent
	let countdown : Countdown
	let displayPreferences : DisplayPreferences
	let distanceMetric : DistanceMetric
	let energyMetric : EnergyMetric
	let gymKitConnection : GymKitConnection
	let heartRateMetric : HeartRateMetric
	let paceMetric : PaceMetric
	let playbackIntent : PlaybackIntent
	let playback : Playback
	let remoteDisplayConnection : RemoteDisplayConnection
	let scoreMetrics : ScoreMetric
	let termination : Termination
	let unitPreferences : UnitPreferences
	let userMassMetric : UserBodyMassMetric
	let watchConnection : WatchConnection
	let watchConnectionRejection : WatchConnectionRejection
	let workout : Workout
 }

 struct SeymourCore.HealthKitWorkoutProtobuf {

	// Properties
	var duration : Double
	var startDate : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var workoutActivityType : πx
	var isIndoorWorkout : Bool
	var identifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _sessionReference : HealthKitSessionReferenceProtobuf
 }

 enum SeymourCore.MetricPageCategory {

	// Properties
	case modality : CatalogFilter
	case trainer : CatalogFilter
	case workout : MetricMediaType
	case account  
	case all  
	case filter  
	case gallery  
	case home  
	case loading  
	case offline  
	case picker  
	case postSession  
	case preview  
	case program  
	case prompt  
	case signin  
	case setup  
	case unknown  
	case upsell  
 }

 struct SeymourCore.AssetStandardImageMatchesRequestProtobuf {

	// Properties
	var template : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var imageWidth : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var imageHeight : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var screenWidth : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var screenHeight : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.AssetStandardImageBestMatchRequest {

	// Properties
	let template : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let imageWidth : Qy // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let imageHeight : Qy // +0x14
 }

 struct SeymourCore.RemoteBrowsingAccount {

	// Properties
	let type : RemoteBrowsingAccountType // +0x0
	let identifier : String? // +0xf0
	let username : String? // +0x100
	let firstName : String? // +0x110
	let middleName : String? // +0x120
	let lastName : String? // +0x130
	let nickname : String? // +0x140
	let personalIdentifier : String? // +0x150
	let identityEmailAddress : String? // +0x160
	let hostname : String? // +0x170
	let childCardDAVAccountIdentifier : String? // +0x180
	let dataAccessAccountHost : String? // +0x190
	let dataAccessAccountEmail : String? // +0x1a0
	let managingOwnerIdentifier : String? // +0x1b0
	let managingSourceName : String? // +0x1c0
 }

 struct SeymourCore.UnitPreferences {

	// Properties
	let activeEnergyUnitIdentifier : String // +0x0
	let basalEnergyUnitIdentifier : String // +0x10
	let cyclingDistanceUnitIdentifier : String // +0x20
	let walkRunDistanceUnitIdentifier : String // +0x30
	let machTimestamp : Double // +0x40
 }

 struct SeymourCore.CatalogModalityDetailProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _modality : CatalogModalityProtobuf
	var _cropCode : String
	var _headerArtwork : ArtworkProtobuf

	// Swift methods
 }

 struct SeymourCore.RemoteDisplayConnection {

	// Properties
	let state : PortableEnum // +0x0
	let machTimestamp : Double // +0x18
 }

 struct SeymourCore.CatalogProgramReferenceProtobuf {

	// Properties
	var identifier : String
	var dateReleased : String
	var workoutIdentifiers : [String]
	var musicGenreIdentifiers : [String]
	var equipmentIdentifiers : [String]
	var modalityIdentifiers : [String]
	var trainerIdentifiers : [String]
	var contributorIdentifiers : [String]
	var contentRating : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CachedCatalogWorkoutTileRequestProtobuf {

	// Properties
	var displayStyle : String
	var workouts : CatalogWorkoutProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.MarketingBannerContent {

	// Properties
	let artwork : Artwork
	let purpose : MarketingBannerPurpose
WARNING: couldn't find address 0x0 (0x0) in binary!
	let streamingURL : ìe
 }

 struct SeymourCore.KeyCertificateContext {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let blob : ÔT // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let remoteContextData : eg // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let remoteContextIdentifier : πx // +0x20
 }

 struct SeymourCore.Configuration {

	// Properties
	let cachedCatalogResourceMaximumAgeInSeconds : Double // +0x0
	let cachedPrivacyPreferenceMaximumAgeInSeconds : Double // +0x8
	let catalogLockupSessionMinimumPercentComplete : Double // +0x10
	let catalogWorkoutDetailSessionMinimumPercentComplete : Double // +0x18
	let engagementEventArchivedSessionThreshold : ArchivedSessionThreshold // +0x20
	let filterDurations : MediaDuration // +0x30
	let persistedHealthKitWorkoutThreshold : HealthKitWorkoutThreshold // +0x38
	let workoutActivityTypeBehaviors : WorkoutActivityTypeBehavior // +0x48
 }

 struct SeymourCore.RemoteBurnBarPreferenceUpdateRequest {

	// Properties
	let preference : BurnBarDisplayPreference // +0x0
	let remoteParticipant : RemoteParticipant // +0x28
 }

 enum SeymourCore.CatalogReferenceType {

	// Properties
	case modality  
	case program  
	case trainer  
	case workout  
 }

 struct SeymourCore.ChartShelfLockupGroupProtobuf {

	// Properties
	var header : String
	var lockups : ShelfLazyLockupProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CatalogFilterResultProtobuf {

	// Properties
	var trainerIdentifiers : [String]
	var durationIdentifiers : [String]
	var equipmentIdentifiers : [String]
	var modalityIdentifiers : [String]
	var musicGenreIdentifiers : [String]
	var placeholders : CatalogLockupPlaceholderProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.RemoteBurnBarPreferenceUpdateRequestProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _preference : BurnBarDisplayPreferenceProtobuf
	var _remoteParticipant : RemoteParticipantProtobuf
 }

 enum SeymourCore.MetricExitReason {

	// Properties
	case quit  
	case tabSwitch  
	case taskSwitch  
 }

 struct SeymourCore.RemoteMetricsPreferenceUpdateRequest {

	// Properties
	let preference : MetricsDisplayPreference // +0x0
	let remoteParticipant : RemoteParticipant // +0x28
 }

 struct SeymourCore.PrivacyAcknowledgement {

	// Properties
	let feature : PortableEnum // +0x0
	let state : PortableEnum // +0x18
 }

 enum SeymourCore.State {

	// Properties
	case needsAcknowledgement  
	case acknowledged  
 }

 enum SeymourCore.Feature {

	// Properties
	case burnBar  
 }

 struct SeymourCore.CatalogModalityMetadata {

	// Properties
	let abridgedSummary : String
	let artwork : Artwork
	let identifier : String
	let preview : CatalogPreview
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sharingURL : ìe
	let summary : String
 }

 struct SeymourCore.TrainerDetailAnnotationProtobuf {

	// Properties
	var cropCode : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _headerArtwork : ArtworkProtobuf
 }

 struct SeymourCore.CatalogModality {

	// Properties
	let abridgedSummary : String
	let artwork : Artwork
	let features : PortableEnum
	let healthKitActivityTypes : [UInt]
	let identifier : String
	let name : String
	let preview : CatalogPreview
	let summary : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sharingURL : ìe
 }

 struct SeymourCore.OptInPrivacyPreferenceProtobuf {

	// Properties
	var version : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.PairedSyncAcknowledgementProtobuf {

	// Properties
	var zone : String
	var identifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.RemoteParticipantConnectionRejectionReason {

	// Properties
	case preSeymourDeviceVersion  
	case incompatibleDeviceVersion  
	case deviceLocked  
	case deviceOffWrist  
 }

 struct SeymourCore.AssetResumableLoad {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let remoteURL : ìe
WARNING: couldn't find address 0x0 (0x0) in binary!
	let localURL : ìe
WARNING: couldn't find address 0x0 (0x0) in binary!
	let downloadToken : a8
 }

 struct SeymourCore.RemoteParticipantHandshakeRequest {

	// Properties
	let deviceIdentifier : String // +0x0
	let minimumRequiredVersion : Int // +0x10
	let version : Int // +0x18
	let nonce : String // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identityResolvingKey : eg // +0x30
	let machTimestamp : Double // +0x40
 }

 struct SeymourCore.CatalogLockup {

	// Properties
	let artwork : Artwork
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bundleDateRequested : w_
	let bundleLoadStatus : PortableEnum
	let bundleProgress : AssetBundleProgress
	let bundleReason : PortableEnum
	let completedCount : Int
	let contentRating : PortableEnum
	let cropCode : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateBookmarked : w_
	let detailTags : MediaTag
	let healthKitActivityTypes : [UInt]
	let identifier : String
	let mediaType : PortableEnum
	let recencyTag : String?
	let referenceType : PortableEnum
	let subtitleTags : MediaTag
	let titleTags : MediaTag
 }

 struct SeymourCore.RemoteParticipantProtobuf {

	// Properties
	var identifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var role : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var discoveryInterface : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _deviceOwner : RemoteParticipantDeviceOwnerProtobuf
	var _name : OptionalStringProtobuf
	var _idsIdentifier : OptionalStringProtobuf
 }

 struct SeymourCore.ScoreSummaryProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var elapsedSeconds : Qy
	var personalScore : Float
	var communityLowerScore : Float
	var communityLowerMiddleScore : Float
	var communityUpperMiddleScore : Float
	var communityUpperScore : Float
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.AssetEntry {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let localURL : ìg
WARNING: couldn't find address 0x0 (0x0) in binary!
	let remoteURL : ìe
	let loadStatus : AssetLoadStatus
WARNING: couldn't find address 0x0 (0x0) in binary!
	let size : W[
 }

 enum SeymourCore.MarketingBannerPurpose {

	// Properties
	case serviceHighlight  
 }

 enum SeymourCore.ResultParseError {

	// Properties
	case emptyResult  
 }

 struct SeymourCore.Equipment {

	// Properties
	let identifier : String // +0x0
	let name : String // +0x10
 }

 enum SeymourCore.ZoneName {

	// Properties
	case PrivacyAcknowledgements  
	case archivedSessions  
	case assetBundles  
	case bookmarks  
	case burnBarDisplayPreferences  
	case metricsDisplayPreferences  
	case progressDisplayPreferences  
	case healthKitStandaloneWorkoutJobs  
	case healthKitWorkouts  
	case scores  
 }

 struct SeymourCore.RemoteProgressPreferenceUpdateRequest {

	// Properties
	let preference : ProgressDisplayPreference // +0x0
	let remoteParticipant : RemoteParticipant // +0x28
 }

 struct SeymourCore.TrainerEvent {

	// Properties
	let duration : Double // +0x0
	let leadDuration : Double // +0x8
	let startTime : Double // +0x10
	let type : PortableEnum // +0x18
 }

 struct SeymourCore.RemoteParticipantHandshakeResponse {

	// Properties
	let minimumRequiredVersion : Int // +0x0
	let machTimestampIn : Double // +0x8
	let machTimestampOut : Double // +0x10
	let version : Int // +0x18
 }

 struct SeymourCore.CatalogWorkoutMetadataProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _identifier : String
	var _title : String
	var _summary : OptionalStringProtobuf
	var _streamingURL : String
	var _previewStreamingURL : OptionalStringProtobuf
	var _location : OptionalStringProtobuf
	var _musicPlaylistURL : OptionalStringProtobuf
	var _musicPlaylistIdentifier : OptionalStringProtobuf
	var _trainerEvents : TrainerEventProtobuf
	var _musicTracks : MusicTrackProtobuf
	var _mediaMoments : MediaMomentProtobuf
	var _artwork : ArtworkProtobuf
	var _contributors : ContributorProtobuf
	var _sharingURL : String
	var _skillLevel : OptionalStringProtobuf
	var _bodyFocuses : [String]
	var _commentaryEvents : CommentaryEventProtobuf
	var _preview : CatalogPreviewProtobuf
	var _streamingProgramIdentifier : OptionalStringProtobuf
	var _accessibilityFeatures : [String]

	// Swift methods
 }

 struct SeymourCore.EngagementBadgeProtobuf {

	// Properties
	var identifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CatalogWorkoutDetail {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bundleDateRequested : w_
	let bundleLoadStatus : PortableEnum
	let bundleProgress : AssetBundleProgress
	let bundleReason : PortableEnum
	let completedCount : Int
	let cropCode : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateBookmarked : w_
	let detailTags : MediaTag
	let headerArtwork : Artwork
	let subtitleTags : MediaTag
	let summaryTags : MediaTag
	let titleTags : MediaTag
	let workout : CatalogWorkout
 }

 struct SeymourCore.MusicGenre {

	// Properties
	let identifier : String // +0x0
	let name : String // +0x10
 }

 struct SeymourCore.CropCode { }

 enum SeymourCore.SocialMediaPlatform {

	// Properties
	case instagram  
	case twitter  
 }

 struct SeymourCore.ScoreSummary {

	// Properties
	let elapsedSeconds : Int // +0x0
	let personalScore : Float // +0x8
	let communityLowerScore : Float // +0xc
	let communityLowerMiddleScore : Float // +0x10
	let communityUpperMiddleScore : Float // +0x14
	let communityUpperScore : Float // +0x18
 }

 struct SeymourCore.MetricTopicIdentifiersProtobuf {

	// Properties
	var topic : String
	var userIdentifier : String
	var clientIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.PrivacyPreferenceError {

	// Properties
	case exceededMaximumAge  
	case missingCachedPreference  
	case missingOnboardingIdentifier  
	case updateFailed  
	case readFailed  
 }

 struct SeymourCore.HeartRateMetric {

	// Properties
	let instantaneous : Double // +0x0
	let average : Double // +0x8
	let minimum : Double // +0x10
	let maximum : Double // +0x18
	let state : PortableEnum // +0x20
	let machTimestamp : Double // +0x28
 }

 enum SeymourCore.State {

	// Properties
	case current  
	case stale  
 }

 struct SeymourCore.CatalogTileRequest {

	// Properties
	let displayStyle : ShelfDisplayStyle // +0x0
	let placeholders : CatalogLockupPlaceholder // +0x8
 }

 struct SeymourCore.CatalogFilter {

	// Properties
	let exclusions : CatalogFilterProperty // +0x0
	let inclusions : CatalogFilterProperty // +0x8
	let sortMode : CatalogSortMode // +0x10
 }

 enum SeymourCore.ShelfDisplayStyle {

	// Properties
	case actionBrick  
	case actionBrickRow  
	case chartBrick  
	case circle  
	case circleRow  
	case gridBrick  
	case guidedWalkBrick  
	case guidedWalkBrickRow  
	case highlightBrick  
	case indexedBrick  
	case marketing  
	case modalityBrick  
	case offlineBrick  
	case programBrick  
	case programBrickRow  
	case showcase  
	case standardBrick  
	case standardBrickRow  
	case watchLargePlatter  
	case watchSmallPlatter  
 }

 struct SeymourCore.KeyCertificateContextProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var blob : ÔT
WARNING: couldn't find address 0x0 (0x0) in binary!
	var remoteContextData : ÔT
WARNING: couldn't find address 0x0 (0x0) in binary!
	var remoteContextIdentifier : πx
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.RemoteDisplayConnectionProtobuf {

	// Properties
	var state : String
	var machTimestamp : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CatalogPreviewProtobuf {

	// Properties
	var contentRating : String
	var streamingURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _streamingProgramIdentifier : OptionalStringProtobuf
 }

 struct SeymourCore.RemoteBrowsingUser {

	// Properties
	let firstName : String? // +0x0
	let appleAccount : RemoteBrowsingAccount // +0x10
	let subscriberAccount : RemoteBrowsingAccount // +0x1e0
 }

 struct SeymourCore.ScoreMetric {

	// Properties
	let machTimestamp : Double // +0x0
	let elapsedSeconds : Int // +0x8
	let scoreType : ScoreType // +0x10
	let personalScore : Float // +0x1c
	let communityLowerScore : Float // +0x20
	let communityLowerMiddleScore : Float // +0x24
	let communityUpperMiddleScore : Float // +0x28
	let communityUpperScore : Float // +0x2c
 }

 struct SeymourCore.MetricClickMarketingFields {

	// Properties
	let upsellType : String? // +0x0
	let eligibilityType : String? // +0x10
	let placement : String? // +0x20
	let placementType : String? // +0x30
	let offerType : String? // +0x40
	let offerTrialPeriod : String? // +0x50
	let marketingItemID : String? // +0x60
	let offerDecisionID : String? // +0x70
 }

 enum SeymourCore.EngagementRequestType {

	// Properties
	case network  
	case offline  
	case unknown  
 }

 enum SeymourCore.MetricIdentifier {

	// Properties
	case remote : MetricRemoteIdentifier
	case local  
 }

 struct SeymourCore.ScoreMetricProtobuf {

	// Properties
	var machTimestamp : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var elapsedSeconds : Qy
	var personalScore : Float
	var communityLowerScore : Float
	var communityLowerMiddleScore : Float
	var communityUpperMiddleScore : Float
	var communityUpperScore : Float
	var scoreType : ScoreType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rollingWindow : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.ScoreType {

	// Properties
	case UNRECOGNIZED : Int
	case cumulative  
	case rolling  
 }

 struct SeymourCore.CatalogProgram {

	// Properties
	let accessibilityFeatures : PortableEnum
	let artwork : Artwork
	let contentRating : PortableEnum
	let contributors : Contributor
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateReleased : A]
	let equipment : Equipment
	let identifier : String
	let location : String?
	let modalities : CatalogModality
	let musicGenres : MusicGenre
	let preview : CatalogPreview
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sharingURL : ìe
	let summary : String
	let title : String
	let trainers : Trainer
	let workoutIdentifiers : [String]
 }

 struct SeymourCore.RemoteBrowsingAccountTypeProtobuf {

	// Properties
	var type : AccountType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _appleAccount : RemoteBrowsingAppleAccountProtobuf
	var _appleMediaServicesAccount : RemoteBrowsingAppleMediaServicesAccountProtobuf
 }

 enum SeymourCore.AccountType {

	// Properties
	case UNRECOGNIZED : Int
	case iTunesStore  
	case apple  
 }

 enum SeymourCore.MetricPlaybackAction {

	// Properties
	case seek  
	case start  
	case stop  
 }

 struct SeymourCore.ShelfLockupDescriptor {

	// Properties
	let backgroundDisplayStyle : ShelfBackgroundDisplayStyle
	let content : ShelfLockupContent
	let displayStyle : ShelfDisplayStyle
	let galleryDestination : GalleryDestination
	let galleryDisplayStyle : ShelfDisplayStyle
	let galleryNameTags : MediaTag
	let identifier : String
	let subtitleTags : MediaTag
	let titleTags : MediaTag
 }

 struct SeymourCore.MetricTopicIdentifiers {

	// Properties
	let topic : String // +0x0
	let userIdentifier : String // +0x10
	let clientIdentifier : String // +0x20
 }

 struct SeymourCore.CatalogWorkoutReference {

	// Properties
	let contentRating : PortableEnum
	let contributorIdentifiers : [String]
	let episode : UInt
	let equipmentIdentifiers : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateReleased : A]
	let duration : Double
	let identifier : String
	let mediaType : PortableEnum
	let modalityIdentifier : String
	let musicGenreIdentifiers : [String]
	let trainerIdentifiers : [String]
 }

 struct SeymourCore.RemoteBrowsingConnectionRecordProtobuf {

	// Properties
	var participantIdentifier : String
	var timestamp : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.RemoteBrowsingAppleMediaServicesAccount {

	// Properties
	let underlyingAccountFlags : [String : Bool]? // +0x0
	let underlyingActiveMediaTypes : [String] // +0x8
	let alternateDirectoryServicesIdentifier : String? // +0x10
	let automaticDownloadKindsKey : [String] // +0x20
	let biometricsState : Int // +0x28
	let cookies : [NSHTTPCookie]? // +0x30
	let credits : String? // +0x38
	let demoAccountRawPassword : String? // +0x48
	let didAgreeToTerms : Bool // +0x58
	let directoryServicesIdentifier : String? // +0x60
	let firstName : String? // +0x70
	let underlyingFreePasswordPromptSetting : UInt // +0x80
	let iCloudFamily : Bool // +0x88
	let inGoodStanding : Bool // +0x89
	let isDemoAccount : Bool // +0x8a
	let isManagedAppleID : Bool // +0x8b
	let isPrivateListeningEnabledForHomeUsers : [String : Bool] // +0x90
	let isValidPayment : Bool // +0x98
	let lastName : String? // +0xa0
	let underlyingLastAuthenticationCredentialSource : UInt // +0xb0
	let mergedPrivacyAcknowledgement : Bool // +0xb8
	let underlyingPaidPasswordPromptSetting : UInt // +0xc0
	let privacyAcknowledgement : [String : UInt] // +0xc8
	let pushRegistrationThrottleMap : [String : Double] // +0xd0
	let storefront : String? // +0xd8
 }

 struct SeymourCore.ShelfTileDescriptor {

	// Properties
	let backgroundDisplayStyle : ShelfBackgroundDisplayStyle
	let content : ShelfTileContent
	let displayStyle : ShelfDisplayStyle
	let galleryDestination : GalleryDestination
	let galleryDisplayStyle : ShelfDisplayStyle
	let galleryNameTags : MediaTag
	let identifier : String
	let subtitleTags : MediaTag
	let titleTags : MediaTag
 }

 struct SeymourCore.ChartShelfTileGroupProtobuf {

	// Properties
	var header : String
	var tiles : ShelfLazyTileProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.AssetRequestReference {

	// Properties
	let identifier : String
	let type : ReferenceType
WARNING: couldn't find address 0x0 (0x0) in binary!
	let remoteURL : ìe
	let priority : QualityOfService
	let requestTime : Double
	let expirationTime : Double
	let bundleIdentifier : String?
 }

 enum SeymourCore.ReferenceType {

	// Properties
	case image  
	case mediaStream  
	case key  
 }

 enum SeymourCore.MetricClickActionContext {

	// Properties
	case actionSheet  
 }

 enum SeymourCore.KeyDeliveryError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case spcCreationFailed : -)
	case bagKeyLoadFailed  
	case certificateDataMalformed  
	case contentFetchFailed  
	case contextDataMalformedCKC  
	case contextDataMalformedCKCData  
	case contextDataMalformedJSON  
	case contextDataMalformedNonceData  
	case contextDataMalformedNonceResponse  
	case contextDataMalformedStatus  
	case contextDataMalformedStreamingKeys  
	case contextDataServerError  
	case contextDataValidationError  
	case contextRequestBodySerializationFailed  
	case invalidConnection  
	case invalidSource  
	case invalidState  
	case requestEncodingFailed  
	case savedCertificateNotFound  
	case spcCaptureFailed  
	case spcContentMalformedHost  
	case spcContentMalformedScheme  
	case spcContentMalformedString  
	case spcContentMalformedURL  
 }

 enum SeymourCore.CommentaryTopic {

	// Properties
	case musicTrack  
	case narrative  
 }

 struct SeymourCore.RemoteBrowsingUserProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _firtName : OptionalStringProtobuf
	var _appleAccount : RemoteBrowsingAccountProtobuf
	var _subscriberAccount : RemoteBrowsingAccountProtobuf
 }

 enum SeymourCore.MetricClickDestination {

	// Properties
	case duration  
	case editorial  
	case engagementVideo  
	case genre  
	case grouping  
	case less  
	case modality  
	case more  
	case none  
	case playlist  
	case showAll  
	case trainer  
	case workout  
	case unknown  
 }

 enum SeymourCore.CatalogSortMode {

	// Properties
	case bundleDateRequested  
	case dateReleased  
	case duration  
	case modalityName  
	case musicGenreName  
	case trainerName  
	case featuredGuidedWalk  
 }

 struct SeymourCore.MetricClickStreamTypeProtobuf {

	// Properties
	var type : ProtobufType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var impressions :  empty-list 
	var navigation : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _metricClick : MetricClickProtobuf
	var _enterURL : OptionalStringProtobuf
	var _sourceApplication : OptionalStringProtobuf
	var _purchaseResult : MetricPurchaseResultProtobuf
	var _identifier : OptionalStringProtobuf
	var _enterReason : OptionalStringProtobuf
	var _exitReason : OptionalStringProtobuf
	var _accountURL : OptionalStringProtobuf
	var _referrerURLHost : OptionalStringProtobuf
 }

 enum SeymourCore.ProtobufType {

	// Properties
	case UNRECOGNIZED : Int
	case account  
	case click  
	case dialog  
	case enter  
	case exit  
	case impression  
	case media  
	case page  
	case purchase  
 }

 enum SeymourCore.ContentRating {

	// Properties
	case clean  
	case explicit  
	case unspecified  
 }

 struct SeymourCore.MetricConstants { }

 struct SeymourCore.TrainerDetail {

	// Properties
	let cropCode : String
	let headerArtwork : Artwork
	let trainer : Trainer
 }

 struct SeymourCore.CatalogFilterResult {

	// Properties
	let durationIdentifiers : Set<String> // +0x0
	let modalityIdentifiers : Set<String> // +0x8
	let musicGenreIdentifiers : Set<String> // +0x10
	let placeholders : CatalogLockupPlaceholder // +0x18
	let trainerIdentifiers : Set<String> // +0x20
 }

 struct SeymourCore.RemoteOptInPreferenceUpdateRequestProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _preference : OptInPrivacyPreferenceProtobuf
	var _remoteParticipant : RemoteParticipantProtobuf
 }

 struct SeymourCore.PlaybackProtobuf {

	// Properties
	var machTimestamp : Double
	var elapsedTime : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.MetricPlayback {

	// Properties
	let action : MetricPlaybackAction // +0x0
	let delegatedPlayback : Bool // +0x1
	let downloadState : MetricPlaybackDownloadState // +0x2
	let entitlementRequired : MetricPlaybackEntitlement // +0x3
	let entitlementUser : MetricPlaybackEntitlement // +0x4
	let featureAssetID : String? // +0x8
	let identifier : String // +0x18
	let isOffline : Bool // +0x28
	let mediaType : MetricMediaType // +0x29
	let overallLength : Double // +0x30
	let overallPosition : Double // +0x38
	let position : Double // +0x40
	let recordingType : MetricPlaybackRecordingType // +0x48
	let startAssetID : String? // +0x50
	let startOverallPosition : Double? // +0x60
	let startPosition : Double? // +0x70
	let startReason : MetricPlaybackStartReason // +0x79
	let startTimestamp : Double? // +0x80
	let stopReason : MetricPlaybackStopReason // +0x89
 }

 struct SeymourCore.WorkoutProtobuf {

	// Properties
	var machTimestamp : Double
	var elapsedTime : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CatalogModalityReference {

	// Properties
	let features : PortableEnum // +0x0
	let healthKitActivityTypes : [UInt] // +0x8
	let identifier : String // +0x10
	let name : String // +0x20
 }

 struct SeymourCore.TrainerDetailAnnotation {

	// Properties
	let cropCode : String // +0x0
	let headerArtwork : Artwork // +0x10
 }

 enum SeymourCore.RemoteBrowsingAccountType {

	// Properties
	case iTunesStore : RemoteBrowsingAppleMediaServicesAccount
	case apple : RemoteBrowsingAppleAccount
 }

 enum SeymourCore.HealthDataError {

	// Properties
	case invalidDate  
	case workoutNotFound  
	case healthStoreSaveFailed  
 }

 struct SeymourCore.AssetBundle {

	// Properties
	let identifier : String
	let workoutIdentifier : String
	let reason : PortableEnum
	let requestingDeviceIdentifier : String
	let downloadingDeviceIdentifier : String
	let loadStatus : PortableEnum
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateRequested : ·^
 }

 enum SeymourCore.Reason {

	// Properties
	case systemPrefetch  
	case userSelected  
 }

 enum SeymourCore.RemoteParticipantError {

	// Properties
	case alreadyActive  
	case alreadyIdle  
	case connectionIntentNoLongerValid  
	case deviceLocked  
	case deviceOffWrist  
	case failedHandshake  
	case incompatibleDeviceVersion  
	case invalidConnectionTransition  
	case invalidDiscoveryTransition  
	case invalidMultiplexMode  
	case invalidPairingTransition  
	case invalidState  
	case mismatchedNonce  
	case noConnectionInProgress  
	case notFound  
	case timedOut  
	case unknown  
	case unknownParticipantRole  
	case pairingRestricted  
	case preSeymourDeviceVersion  
	case newConnectionAttempt  
 }

 struct SeymourCore.AssetBundleProgress {

	// Properties
	let workoutIdentifier : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytesExpected : W[ // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytesReceived : W[ // +0x18
 }

 struct SeymourCore.AssetRequestKeyMetadata {

	// Properties
	let identifier : String
	let version : Int
	let canFreeDeviceSlot : Bool
	let userIdentifier : String
	let workoutIdentifier : String
	let slotIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let renewDate : ·^
WARNING: couldn't find address 0x0 (0x0) in binary!
	let masterPlaylist : ìe
 }

 struct SeymourCore.MetricPlaybackProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _mediaType : String
	var _isOffline : Bool
	var _overallLength : Double
	var _position : Double
	var _startPosition : OptionalDoubleProtobuf
	var _action : String
	var _startTimestamp : OptionalDoubleProtobuf
	var _startReason : String
	var _stopReason : OptionalStringProtobuf
	var _identifier : String
	var _recordingType : String
	var _overallPosition : Double
	var _startOverallPosition : OptionalDoubleProtobuf
	var _featureAssetID : OptionalStringProtobuf
	var _startAssetID : OptionalStringProtobuf
	var _entitlementRequired : String
	var _entitlementUser : String
	var _delegatedPlayback : Bool
	var _downloadState : String

	// Swift methods
 }

 struct SeymourCore.PlaybackIntentProtobuf {

	// Properties
	var machTimestamp : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.MarketingDrivenShelfMarker {

	// Properties
	case headerBanner : MarketingBannerContent
	case headerUpsell : MarketingUpsellPlacement
 }

 struct SeymourCore.ShelfLockupContentProtobuf {

	// Properties
	var type : ProtobufType
	var lockupGroups : ChartShelfLockupGroupProtobuf
	var deviceDrivenShelfMarker : String
	var lockups : ShelfLazyLockupProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _marketingDrivenShelfMarker : MarketingDrivenShelfMarkerProtobuf
 }

 enum SeymourCore.ProtobufType {

	// Properties
	case UNRECOGNIZED : Int
	case chart  
	case deviceDriven  
	case editorial  
	case marketingDriven  
 }

 struct SeymourCore.RemoteBrowsingEnvironmentProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _allowedContentRatings : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _capabilities : W[
	var _completedCounts : RemoteBrowsingCompletedCountProtobuf
	var _metricIdentifiers : MetricTopicIdentifiersProtobuf
	var _programProgression : RemoteBrowsingProgramProgressProtobuf
	var _recommendations : RecommendationProtobuf
	var _serviceSubscription : ServiceSubscriptionProtobuf
	var _burnBarPreference : BurnBarDisplayPreferenceProtobuf
	var _metricsPreference : MetricsDisplayPreferenceProtobuf
	var _progressPreference : ProgressDisplayPreferenceProtobuf
	var _user : RemoteBrowsingUserProtobuf
	var _noticePreference : NoticePrivacyPreferenceProtobuf
	var _optInPreference : OptInPrivacyPreferenceProtobuf
	var _privacyAcknowledgements : PrivacyAcknowledgementProtobuf

	// Swift methods
 }

 struct SeymourCore.MediaMomentProtobuf {

	// Properties
	var startTime : Double
	var duration : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _artwork : ArtworkProtobuf
 }

 struct SeymourCore.CatalogPeriodicSyncEvaluationRequestProtobuf {

	// Properties
	var priority : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _anchor : CatalogSyncAnchorProtobuf
 }

 enum SeymourCore.MarketingUpsellPlacement {

	// Properties
	case addToWatch  
	case appLaunch  
	case manageSubsDetail  
	case preBuyFlow  
	case previewVideo  
	case seeOtherPlans  
	case tabHeader  
	case topshelf  
	case topshelfClickThrough  
	case workoutPlayback  
 }

 struct SeymourCore.Score {

	// Properties
	let elapsedSeconds : Int // +0x0
	let value : Float // +0x8
 }

 enum SeymourCore.SiriPersonalizationMethod {

	// Properties
	case last  
	case next  
	case none  
 }

 struct SeymourCore.MediaTagProtobuf {

	// Properties
	var type : TagType
WARNING: couldn't find address 0x0 (0x0) in binary!
	var completedCount : Qy
	var date : String
	var duration : Double
	var separator : String
	var text : String
	var wheelchairAlternative : String
	var localizedStringKey : String
	var localizedStringValues : [Double]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.TagType {

	// Properties
	case UNRECOGNIZED : Int
	case completedCountTag  
	case completedIconTag  
	case dateTag  
	case durationTag  
	case explicitIconTag  
	case separatorTag  
	case textTag  
	case systemImageTag  
	case wheelchairTextTag  
	case closedCaptioningIconTag  
	case subtitleIconTag  
	case localizedStringTag  
 }

 struct SeymourCore.CatalogProgramDetail {

	// Properties
	let cropCode : String
	let detailTags : MediaTag
	let headerArtwork : Artwork
	let program : CatalogProgram
	let subtitleTags : MediaTag
	let titleTags : MediaTag
 }

 struct SeymourCore.RemoteParticipantPasswordChallenge {

	// Properties
	let passwordLength : Int // +0x0
	let throttleInterval : Double // +0x8
 }

 struct SeymourCore.AssetRequestMediaStreamMetadataProtobuf {

	// Properties
	var identifier : String
	var title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _thumbnailURL : OptionalStringProtobuf
 }

 struct SeymourCore.OptionalIntegerProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.OptionalInteger64Protobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : W[
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.OptionalDoubleProtobuf {

	// Properties
	var value : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.ActivityRingsProtobuf {

	// Properties
	var machTimestamp : Double
	var activeHours : Double
	var activeHoursGoal : Double
	var briskMinutes : Double
	var briskMinutesGoal : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _moveRing : ActivityMoveRingProtobuf
 }

 struct SeymourCore.PairedSyncRequestProtobuf {

	// Properties
	var operations : PairedSyncOperationProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.CatalogWorkoutDetailProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _workout : CatalogWorkoutProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _completedCount : Qy
	var _dateBookmarked : OptionalDoubleProtobuf
	var _bundleLoadStatus : OptionalIntegerProtobuf
	var _bundleDateRequested : OptionalDoubleProtobuf
	var _detailTags : MediaTagProtobuf
	var _subtitleTags : MediaTagProtobuf
	var _summaryTags : MediaTagProtobuf
	var _titleTags : MediaTagProtobuf
	var _cropCode : String
	var _headerArtwork : ArtworkProtobuf
	var _bundleReason : OptionalIntegerProtobuf
	var _bundleProgress : AssetBundleProgressProtobuf

	// Swift methods
 }

 enum SeymourCore.TransportError {

	// Properties
	case noDispatchHandlerRegistered  
	case emptyPayload  
	case invalidPayload  
	case invalidRequestIdentifier  
	case invalidEventIdentifier  
	case invalidConnectionIdentifier  
	case serverUnavailable  
	case unsupportedOperation  
	case unserializable  
 }

 struct SeymourCore.BurnBarDisplayPreferenceProtobuf {

	// Properties
	var behavior : String
	var modalityConstraint : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.EngagementBannerLinkAction {

	// Properties
	let identifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ìe
 }

 struct SeymourCore.CatalogTile {

	// Properties
	let artwork : Artwork // +0x0
	let contentRating : PortableEnum // +0x58
	let cropCode : String // +0x70
	let detailTags : MediaTag // +0x80
	let healthKitActivityTypes : [UInt] // +0x88
	let identifier : String // +0x90
	let mediaType : PortableEnum // +0xa0
	let recencyTag : String? // +0xb8
	let referenceType : PortableEnum // +0xc8
	let subtitleTags : MediaTag // +0xe0
	let titleTags : MediaTag // +0xe8
 }

 struct SeymourCore.SiriStartWorkoutResponseProtobuf {

	// Properties
	var workoutIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _healthKitActivityType : OptionalIntegerProtobuf
 }

 struct SeymourCore.HealthKitSessionReferenceProtobuf {

	// Properties
	var workoutIdentifier : String
	var sessionIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.OptionalBoolProtobuf {

	// Properties
	var value : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.AssetEntryProtobuf {

	// Properties
	var localURL : String
	var remoteURL : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var loadStatus : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var size : W[
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.GymKitConnectionProtobuf {

	// Properties
	var machTimestamp : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.TrainerEventType {

	// Properties
	case workoutSegment  
	case timer  
	case calorieHighlight  
	case heartRateHighlight  
	case ringsHighlight  
	case halfwayPoint  
	case textPopup  
 }

 struct SeymourCore.OptInPrivacyPreference {

	// Properties
	let version : PortableEnum // +0x0
	let state : PortableEnum // +0x18
 }

 enum SeymourCore.Version {

	// Properties
	case versionOne  
 }

 enum SeymourCore.State {

	// Properties
	case needsAcknowledgment  
	case optedIn  
	case optedOut  
 }

 struct SeymourCore.NoticePrivacyPreferenceProtobuf {

	// Properties
	var version : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.WatchConnection {

	// Properties
	let state : PortableEnum // +0x0
	let machTimestamp : Double // +0x18
 }

 struct SeymourCore.MetricLocationProtobuf {

	// Properties
	var identifier : String
	var identifierType : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var index : Qy
	var elementType : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _name : OptionalStringProtobuf
 }

 enum SeymourCore.EngagementError {

	// Properties
	case alreadySubscribed  
	case appNotInstalled  
	case dataUnavailable  
	case invalidCleanURL  
	case invalidCommand  
	case invalidJSON  
	case invalidRedirectURL  
	case invalidRequestDictionary  
	case invalidRequestObject  
	case missingEngagementBanner  
	case missingQueryParameters  
	case journeysDisabled  
	case requestTooLarge  
	case subscriptionUnknown  
 }

 struct SeymourCore.EngagementBadge {

	// Properties
	let identifier : String // +0x0
 }

 struct SeymourCore.RemoteBrowsingConnectionRecord {

	// Properties
	let participantIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : ·^
 }

 struct SeymourCore.RemoteNoticePreferenceUpdateRequest {

	// Properties
	let preference : NoticePrivacyPreference // +0x0
	let remoteParticipant : RemoteParticipant // +0x28
 }

 struct SeymourCore.SessionUpdateProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _updateIdentifier : πx
	var _sessionIdentifier : String
	var _activityRings : ActivityRingsProtobuf
	var _countdownIntent : CountdownIntentProtobuf
	var _countdown : CountdownProtobuf
	var _energyMetric : EnergyMetricProtobuf
	var _heartRateMetric : HeartRateMetricProtobuf
	var _playbackIntent : PlaybackIntentProtobuf
	var _playback : PlaybackProtobuf
	var _termination : TerminationProtobuf
	var _workout : WorkoutProtobuf
	var _scoreMetric : ScoreMetricProtobuf
	var _userMassMetric : UserBodyMassMetricProtobuf
	var _distanceMetric : DistanceMetricProtobuf
	var _watchConnection : WatchConnectionProtobuf
	var _gymKitConnection : GymKitConnectionProtobuf
	var _displayPreferences : DisplayPreferencesProtobuf
	var _unitPreferences : UnitPreferencesProtobuf
	var _watchConnectionRejection : WatchConnectionRejectionProtobuf
	var _remoteDisplayConnection : RemoteDisplayConnectionProtobuf
	var _paceMetric : PaceMetricProtobuf
	var _machTimestamp : Double

	// Swift methods
 }

 struct SeymourCore.CredentialsProtobuf {

	// Properties
	var username : String
	var password : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 struct SeymourCore.ServerPlaybackContext {

	// Properties
	let workoutIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let content : ìe
WARNING: couldn't find address 0x0 (0x0) in binary!
	let blob : ÔT
WARNING: couldn't find address 0x0 (0x0) in binary!
	let remoteContextIdentifier : πx
 }

 struct SeymourCore.FetchScoresRequest {

	// Properties
	var identifier : String // +0x0
	var activityType : UInt // +0x10
	var duration : Int // +0x18
	var type : ScoreType // +0x20
 }

 enum SeymourCore.ScoreType {

	// Properties
	case cumulative  
	case rolling  
 }

 struct SeymourCore.MetricPageProtobuf {

	// Properties
	var pageIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _pageType : MetricPageCategoryProtobuf
	var _pageContext : OptionalStringProtobuf
	var _pageURL : OptionalStringProtobuf
	var _pageName : OptionalStringProtobuf
 }

 struct SeymourCore.ConfigurationProtobuf {

	// Properties
	var filterDurations : MediaDurationProtobuf
	var workoutActivityTypeBehaviors : WorkoutActivityTypeBehaviorProtobuf
	var cachedCatalogResourceMaximumAgeInSeconds : Double
	var cachedPrivacyPreferenceMaximumAgeInSeconds : Double
	var catalogLockupSessionMinimumPercentComplete : Double
	var catalogWorkoutDetailSessionMinimumPercentComplete : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _persistedHealthKitWorkoutThreshold : HealthKitWorkoutThresholdProtobuf
	var _engagementEventArchivedSessionThreshold : ArchivedSessionThresholdProtobuf
 }

 struct SeymourCore.ActivityRing {

	// Properties
	let value : Double // +0x0
	let goal : Double // +0x8
 }

 enum SeymourCore.RemoteParticipantDeviceOwner {

	// Properties
	case family : (accountIdentifier: String)
	case unknown  
	case me  
	case guest  
 }

 struct SeymourCore.MetricPlayStream {

	// Properties
	let playback : MetricPlayback
	let identifier : MetricIdentifier
	let environment : MetricEnvironment
 }

 struct SeymourCore.CommunityScoresProtobuf {

	// Properties
	var workoutIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var activityType : πx
	var type : ScoreType
	var lowerScores : ScoreProtobuf
	var lowerMiddleScores : ScoreProtobuf
	var upperMiddleScores : ScoreProtobuf
	var upperScores : ScoreProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rollingWindow : Qy
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
 }

 enum SeymourCore.ScoreType {

	// Properties
	case UNRECOGNIZED : Int
	case cumulative  
	case rolling  
 }

 struct SeymourCore.ServiceSubscriptionProtobuf {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownFields : gu
	var _storage : _StorageClass
 }

 class SeymourCore._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _beginTimestamp : OptionalDoubleProtobuf
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _bundleIdentifier : W[
	var _expiration : OptionalDoubleProtobuf
	var _fromCache : Bool
	var _gracePeriod : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _identifier : W[
	var _initialPurchaseTimestamp : OptionalDoubleProtobuf
	var _offerPeriod : Bool
	var _poolType : OptionalStringProtobuf
	var _promoScenarioIdentifier : OptionalInteger64Protobuf
	var _purchaser : Bool
	var _renewDate : OptionalDoubleProtobuf
	var _setIdentifier : OptionalInteger64Protobuf
	var _specialAccessTypeIdentifier : OptionalInteger64Protobuf
	var _trialPeriod : Bool
	var _trialPeriodIdentifier : OptionalInteger64Protobuf
	var _vendorOfferIdentifier : OptionalStringProtobuf

	// Swift methods
 }

 enum __C.QualityOfService { }

 struct __C.HTTPCookiePropertyKey {

	// Properties
	var _rawValue : NSString
 }
