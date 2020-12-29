 protocol SeymourMedia.WheelchairStatus // 2 requirements
 {
	// method
	// method
 }
 protocol SeymourMedia.MusicLibraryProtocol // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol SeymourMedia.SessionTrackMetadataCaching // 0 requirements
 {
 }
 protocol SeymourMedia.RemoteCommandProtocol // 4 requirements
 {
	// getter
	// setter
	// modify coroutine
	// method
 }
 protocol SeymourMedia.ArtworkDecorating // 2 requirements
 {
	// getter
	// method
 }
 protocol SeymourMedia.SessionTimelineEvent // 8 requirements
 {
	// class base protocol
	// getter
	// getter
	// getter
	// method
	// method
	// method
	// method
 }
 protocol SeymourMedia.ArtworkImageLoading // 6 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol SeymourMedia.ArtworkImageCaching // 2 requirements
 {
	// method
	// method
 }
 protocol SeymourMedia.NowPlayingInfoCenterProtocol // 6 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
 }
 protocol SeymourMedia.NowPlayingUpdating // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol SeymourMedia.ArtworkFlavorMatching // 2 requirements
 {
	// getter
	// method
 }
 protocol SeymourMedia.KeyProvisioning // 1 requirements
 {
	// getter
 }
 protocol SeymourMedia.ServiceSubscriptionCaching // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol SeymourMedia.MediaPlaying // 12 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// setter
	// modify coroutine
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol SeymourMedia.SiriUserActivityHandling // 2 requirements
 {
	// method
	// method
 }
 protocol SeymourMedia.RemoteCommandCenterProtocol // 6 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
 }
 protocol SeymourMedia.MediaTagStringBuilding // 2 requirements
 {
	// method
	// method
 }
 protocol SeymourMedia.StorefrontLocalizing // 9 requirements
 {
	// getter
	// getter
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }

 enum SeymourMedia.ArtworkScaleSizeDimension {

	// Properties
	case fixed : CGSize
	case requestedSize  
 }

 struct SeymourMedia.ArtworkScaleDecorator {

	// Properties
	let sizeDimension : ArtworkScaleSizeDimension // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cornerRadius : ó // +0x18
	let contentMode : ContentMode // +0x20
 }

 class SeymourMedia.MusicLibrary : _SwiftObject /usr/lib/swift/libswiftCore.dylib, MusicLibraryProtocol {

	// Properties
	let queue : OS_dispatch_queue

	// Swift methods
	0x5520  class func MusicLibrary.__allocating_init(queue:) // init 
 }

 struct SeymourMedia.MediaPlayerFinished {

	// Properties
	let duration : Double // +0x0
 }

 struct SeymourMedia.MetricBackNavigationOccurred { }

 enum SeymourMedia.SiriError {

	// Properties
	case personalizationDataNotAvailable  
 }

 class SeymourMedia.SessionTrackMetadataCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SessionTrackMetadataCaching {
	// Swift methods
 }

 enum SeymourMedia.LibraryQueryError {

	// Properties
	case unableToCreatePredicate  
	case subscriptionStatusUnavailable  
	case invalidPlaylistIdentifier  
	case invalidTrackIdentifier  
 }

 struct SeymourMedia.SiriPauseSessionRequested { }

 class SeymourMedia.ServiceSubscriptionCacheStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionClient : {î
	var state : State

	// Swift methods
	0xae30  func <stripped> // method 
	0xb6f0  func <stripped> // method 
	0xc0d0  func <stripped> // method 
 }

 enum SeymourMedia.State {

	// Properties
	case activating : (dispatchGroup: OS_dispatch_group)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case active : Ûê
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : Uô
	case inactive  
 }

 struct SeymourMedia.MediaPlayerStatusUpdated {

	// Properties
	let status : TimeControlStatus // +0x0
	let elapsedTime : Double // +0x8
 }

 enum SeymourMedia.PlaylistLibraryStatus {

	// Properties
	case addable  
	case added  
 }

 struct SeymourMedia.MetricPageChangeOccurred {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let page : ç
 }

 struct SeymourMedia.SiriConstants { }

 struct SeymourMedia.ServiceSubscriptionPurchased { }

 struct SeymourMedia.MetricPlayStreamOccurred {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let metricPlayStream : ›é
 }

 class SeymourMedia.SessionTimeline : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventHub : iì // +0x10 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionToken : ±ì // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let commentaryEvents :  empty-list  // +0x28 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaMoments :  empty-list  // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let musicTracks :  empty-list  // +0x38 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let trainerEvents :  empty-list  // +0x40 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastPlaybackSnapshot : £ñ // +0xfeedfacf (0x0)
	var state : State // +0x6100085 (0x1)
	var queuedEventTimers : EventTimerKey // +0x3 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playbackTimerProvider : •ì // +0x36 (0x28)

	// Swift methods
	0xea90  class func SessionTimeline.__allocating_init(dependencies:workout:queue:) // init 
	0xebd0  func <stripped> // method 
	0x161b0  func <stripped> // method 
 }

 struct SeymourMedia.EventTimerKey {

	// Properties
	let type : EventTimerType // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let event : añ // +0x8
 }

 enum SeymourMedia.State {

	// Properties
	case inactive  
	case active  
 }

 enum SeymourMedia.EventTimerType {

	// Properties
	case start  
	case end  
 }

 struct SeymourMedia.WheelchairStatusUpdated { }

 struct SeymourMedia.DefaultWheelchairStatus { }

 struct SeymourMedia.MetricClickStreamOccurred {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let metricClickStream : yç
 }

 class SeymourMedia.IntentDispatcher : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sessionClient : eë

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x54e00001a760 (0x4e00001a760) in binary!
	0x6a98  @objc IntentDispatcher.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffbd1b0  @objc IntentDispatcher.(null) <stripped>
 }

 class SeymourMedia.MetricPlaybackTracker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let catalogWorkout : â
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventHub : iì
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionToken : ±ì
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mediaType : yâ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let networkEvaluator : £é
WARNING: couldn't find address 0x0 (0x0) in binary!
	let assetClient : çé
WARNING: couldn't find address 0x0 (0x0) in binary!
	let platform : Sè
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastWorkoutPlaybackState : }à
	var pauseForClosePlayerState : PauseForClosePlayerState
	var delegatedPlayback : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var downloadState : [ã
	var lastWorkoutPlaybackPosition : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastWorkoutPlaybackStartReason : ã
	var lastWorkoutPlaybackTimestamp : Double?
	var musicIDStartPlaybackInfoMap : MusicStartPlaybackInfo
	var seeking : Bool
	var seekBeganOverallPosition : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var seekBeganMusicTrack : kå
	var seekBeganMusicTrackPosition : Double
	var seekBeganTimestamp : Double
	var onInvalidTransition : ()?

	// Swift methods
	0x20110  class func MetricPlaybackTracker.__allocating_init(catalogWorkout:eventHub:networkEvaluator:assetClient:platform:) // init 
	0x206f0  func <stripped> // method 
	0x20d50  func <stripped> // method 
	0x21e50  func <stripped> // method 
	0x220a0  func <stripped> // method 
	0x22be0  func <stripped> // method 
	0x22fd0  func <stripped> // method 
	0x234e0  func <stripped> // method 
	0x23a50  func <stripped> // method 
	0x23fe0  func <stripped> // method 
	0x24b90  func <stripped> // method 
	0x25270  func <stripped> // method 
	0x25cc0  func <stripped> // method 
 }

 struct SeymourMedia.MusicStartPlaybackInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let playback : …à
	let timeStamp : Double
 }

 enum SeymourMedia.PauseForClosePlayerState {

	// Properties
	case willPause  
	case paused  
	case none  
 }

 enum SeymourMedia.SiriUserActivityType {

	// Properties
	case beginSession  
	case endSession  
	case pauseSession  
	case resumeSession  
 }

 struct SeymourMedia.AttributedMediaTag {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tag : uä
	let attributes : Key
 }

 class SeymourMedia.WheelchairStatusObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let status : WheelchairStatus
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventHub : iì

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x50fa0001a550 (0xfa0001a550) in binary!
	0x28000000c  @objc WheelchairStatusObserver.(null) <stripped>

	// Swift methods
	0x2a490  class func WheelchairStatusObserver.__allocating_init(eventHub:status:) // init 
 }

 class SeymourMedia.AudioSessionConfiguration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct SeymourMedia.SessionDismissalConfirmationRequested { }

 struct SeymourMedia.QualityReportingOptions { }

 struct SeymourMedia.ArtworkLoadRequest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let artwork : %â
	let size : CGSize
	let cropCode : String
	let fileType : String
	let decorators : ArtworkDecorating
 }

 struct SeymourMedia.RenewalRecord {

	// Properties
	let keyRequest : AVContentKeyRequest // +0x0
	let renewalTimer : OS_dispatch_source_timer // +0x8
 }

 struct SeymourMedia.SiriBeginSessionCriteria {

	// Properties
	let healthKitActivityType : UInt? // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let candidates :  empty-list  // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let personalizationMethod : ká // +0x18
 }

 class SeymourMedia.EndWorkoutIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sessionClient : eë

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x54900001a710 (0x4900001a710) in binary!
	0x6a48  @objc EndWorkoutIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffd2df0  @objc EndWorkoutIntentHandler.(null) <stripped>

	// Swift methods
 }

 struct SeymourMedia.SiriResumeSessionRequested { }

 enum SeymourMedia.QualityReportingEntity {

	// Properties
	case trailer  
	case workout  
 }

 class SeymourMedia.ArtworkImageLoader : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ArtworkImageLoading {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let assetClient : çé
	let artworkImageCache : ArtworkImageCaching
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lock : AÖ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var loadCompletions :  empty-list 

	// Swift methods
	0x38e30  class func ArtworkImageLoader.__allocating_init(artworkImageCache:assetClient:) // init 
 }

 enum SeymourMedia.RemoteCommand {

	// Properties
	case play  
	case pause  
	case nextTrack  
	case previousTrack  
 }

 struct SeymourMedia.SiriBeginSessionRequested {

	// Properties
	let criteria : SiriBeginSessionCriteria // +0x0
 }

 class SeymourMedia.ArtworkImageCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ArtworkImageCaching {

	// Properties
	var cache : NSCache<NSString, UIImage>

	// Swift methods
	0x3c570  class func ArtworkImageCache.__allocating_init() // init 
 }

 class SeymourMedia.PauseWorkoutIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sessionClient : eë

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x54580001a6d8 (0x4580001a6d8) in binary!
	0x6a10  @objc PauseWorkoutIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffdd248  @objc PauseWorkoutIntentHandler.(null) <stripped>

	// Swift methods
 }

 class SeymourMedia.MetricRouter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let metricClient : mé
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventHub : iì
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionToken : ±ì

	// Swift methods
	0x3d590  class func MetricRouter.__allocating_init(metricClient:eventHub:) // init 
	0x3d610  func <stripped> // method 
	0x3db20  func <stripped> // method 
 }

 struct SeymourMedia.MediaPlayerPlaybackFailed {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let error : Áö // +0x0
 }

 class SeymourMedia.NowPlayingUpdater : _SwiftObject /usr/lib/swift/libswiftCore.dylib, NowPlayingUpdating {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventHub : iì
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionToken : ±ì
	let nowPlayingInfoCenter : NowPlayingInfoCenterProtocol
	let remoteCommandCenter : RemoteCommandCenterProtocol

	// Swift methods
	0x3f030  class func NowPlayingUpdater.__allocating_init(dependencies:nowPlayingInfoCenter:remoteCommandCenter:) // init 
	0x3f5a0  func <stripped> // method 
	0x3f820  func <stripped> // method 
	0x3faa0  func <stripped> // method 
 }

 struct SeymourMedia.PixelGeometry { }

 struct SeymourMedia.RemoteCommandTriggered {

	// Properties
	let remoteCommand : RemoteCommand // +0x0
 }

 class SeymourMedia.StartWorkoutIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sessionClient : eë

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x54200001a6a0 (0x4200001a6a0) in binary!
	0x69d8  @objc StartWorkoutIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe4090  @objc StartWorkoutIntentHandler.(null) <stripped>

	// Swift methods
 }

 class SeymourMedia.StreamingKeyProvisioner : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let workoutIdentifier : String
	let asset : AVURLAsset
WARNING: couldn't find address 0x0 (0x0) in binary!
	let assetClient : çé
	var renewalTimers : RenewalRecord
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timerProvider : •ì
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lock : AÖ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let keyDeliveryClient : [
	let contentKeySession : AVContentKeySession
	var state : State

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x69ac0001a670 (0x1ac0001a670) in binary!
	0x53dc  @objc StreamingKeyProvisioner.(null) <stripped>
WARNING: couldn't find address 0x69940001a480 (0x1940001a480) in binary!
	0x68000000c  @objc StreamingKeyProvisioner.(null) <stripped>
WARNING: couldn't find address 0x63940001a438 (0x3940001a438) in binary!
	0x6388  @objc StreamingKeyProvisioner.(null) <stripped>

	// Swift methods
	0x47f80  class func StreamingKeyProvisioner.__allocating_init(keyDeliveryClient:asset:assetClient:workoutIdentifier:) // init 
 }

 enum SeymourMedia.State {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case awaiting : ≈|
WARNING: couldn't find address 0x0 (0x0) in binary!
	case captured : •|
	case initialized  
 }

 class SeymourMedia.ServiceSubscriptionCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ServiceSubscriptionCaching {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventHub : iì
	let store : ServiceSubscriptionCacheStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionClient : {î
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subscriptionToken : ±ì

	// Swift methods
	0x4d810  class func ServiceSubscriptionCache.__allocating_init(eventHub:subscriptionClient:) // init 
	0x4d980  func <stripped> // method 
 }

 struct SeymourMedia.MediaPlayerSeekFinished {

	// Properties
	let elapsedTime : Double // +0x0
 }

 class SeymourMedia.MediaPlayer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, MediaPlaying {

	// Properties
	let metricPlaybackTracker : MetricPlaybackTracker // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let assetClient : çé // +0x18 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventHub : iì // +0x40 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let workout : â // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sessionOrigin : g // +0x0 (0x0)
	var state : State // +0x0 (0x69)
	var readyToPlay : Bool // +0x0 (0x1)
	var onReadyToPlay : ()? // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x692c0001a7f0 (0x12c0001a7f0) in binary!
	0x28000000c  @objc MediaPlayer.(null) <stripped>

	// Swift methods
	0x4f030  func <stripped> // getter 
	0x4f0a0  func <stripped> // setter 
	0x4f100  func <stripped> // modifyCoroutine 
	0x4f150  class func MediaPlayer.__allocating_init(dependencies:workout:sessionOrigin:) // init 
	0x4f1e0  func <stripped> // method 
	0x50380  func <stripped> // method 
	0x50a20  func <stripped> // method 
 }

 enum SeymourMedia.State {

	// Properties
	case activating : OS_dispatch_group
	case active : KeyProvisioning
	case inactive  
 }

 enum SeymourMedia.PlayerError {

	// Properties
	case inactive  
	case alreadyActive  
 }

 struct SeymourMedia.MediaPlayerSeekBegan {

	// Properties
	let elapsedTime : Double // +0x0
 }

 class SeymourMedia.MediaTagStringBuilder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let storefrontLocalizer : StorefrontLocalizing
	let wheelchairStatus : WheelchairStatus

	// Swift methods
	0x53960  class func MediaTagStringBuilder.__allocating_init(storefrontLocalizer:wheelchairStatus:) // init 
 }

 struct SeymourMedia.QualityReportingService { }

 class SeymourMedia.SiriUserActivityHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SiriUserActivityHandling {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventHub : iì

	// Swift methods
	0x55b10  class func SiriUserActivityHandler.__allocating_init(eventHub:) // init 
 }

 class SeymourMedia.ResumeWorkoutIntentHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sessionClient : eë

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x53500001a5d0 (0x3500001a5d0) in binary!
	0x6908  @objc ResumeWorkoutIntentHandler.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff9f40  @objc ResumeWorkoutIntentHandler.(null) <stripped>

	// Swift methods
 }

 struct SeymourMedia.SiriEndSessionRequested { }

 enum SeymourMedia.ServiceSubscriptionCacheError {

	// Properties
	case inactive  
 }

 class SeymourMedia.StorefrontLocalizer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, StorefrontLocalizing {

	// Properties
	let bundle : NSBundle
	let dateFormatter : NSDateFormatter
	let dateComponentsFormatter : NSDateComponentsFormatter
	let numberFormatter : NSNumberFormatter
WARNING: couldn't find address 0x0 (0x0) in binary!
	let storefrontCache : |
	let table : String
	var state : State

	// Swift methods
	0x5ae90  class func StorefrontLocalizer.__allocating_init(bundle:storefrontCache:table:) // init 
	0x5af20  func <stripped> // method 
 }

 enum SeymourMedia.State {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case active :  first-element-marker 
	case inactive  
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 enum __C.TimeControlStatus { }

 enum __C.ContentMode { }

 enum __C.Status { }

 enum __C.QualityOfService { }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ó
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ó
 }

 struct __C.MusicSubscriptionCapabilities {

	// Properties
	let rawValue : Int
 }

 class __C.CGImage {
 class __C.CGContext {
 enum __C.CGBlendMode { }

 struct __C.RetryReason {

	// Properties
	var _rawValue : NSString
 }

 struct __C.CMTime {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : Aù
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timescale : +ù
	var flags : CMTimeFlags
WARNING: couldn't find address 0x0 (0x0) in binary!
	var epoch : Aù
 }

 struct __C.CMTimeFlags {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : Où
 }
