 protocol MediaFoundation.SystemActions // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.QueueAssetLoadingDelegate // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.QueueAssetLoading // 9 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// method
	// method
	// method
 }
 protocol MediaFoundation.ItemLoaderDelegate // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol MediaFoundation.ItemBufferConsumer // 4 requirements
 {
	// getter
	// setter
	// modify coroutine
	// method
 }
 protocol MediaFoundation.PlayerControllerDelegate // 9 requirements
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
 }
 protocol MediaFoundation.AVStackResettable // 2 requirements
 {
	// method
	// method
 }
 protocol MediaFoundation.PlayerViewControllerBehaviorDelegate // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol MediaFoundation.FSMController // 7 requirements
 {
	// class base protocol
	// class base protocol
	// class base protocol
	// class base protocol
	// class base protocol
	// class base protocol
	// class base protocol
 }
 protocol MediaFoundation.StateProviding // 5 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
 }
 protocol MediaFoundation.StateProvidingDelegate // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.CoordinatorActions // 6 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol MediaFoundation.InternalCoordinatorActions // 6 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol MediaFoundation.UserActions // 11 requirements
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
 }
 protocol MediaFoundation.InternalUserActions // 13 requirements
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
 protocol MediaFoundation.SystemEventHandling // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.SystemEventStateHandling // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.PlayerEventHandling // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.PlayerEventStateHandling // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.EventHandling // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.Reporting // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.BackgroundTaskProvider // 2 requirements
 {
	// method
	// method
 }
 protocol MediaFoundation.PlayerSettable // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.PlaybackInformationProviding // 6 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
 }
 protocol MediaFoundation.QueuePlayerManaging // 2 requirements
 {
	// method
	// method
 }
 protocol MediaFoundation.InternalPlayerControllerDelegate // 6 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol MediaFoundation.InternalPlayerActions // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol MediaFoundation.UserEventHandling // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.UserEventStateHandling // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.UserEventCompletionHandling // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.EventReporting // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.PlaybackStackControllerDelegate // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol MediaFoundation.QueueManagement // 4 requirements
 {
	// getter
	// method
	// method
	// method
 }
 protocol MediaFoundation.Player // 32 requirements
 {
	// getter
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
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
	// method
	// method
 }
 protocol MediaFoundation.CoordinatorEventHandling // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.CoordinatorEventStateHandling // 1 requirements
 {
	// method
 }

 class MediaFoundation.QueueAssetLoader : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ItemLoaderDelegate,  QueueAssetLoading {

	// Properties
	var delegate : QueueAssetLoadingDelegate
	var token : Int
	var wrapAround : Bool
	let queueController : MFQueueControlling
	var itemLoader : ItemLoader
	var itemBuffer : ItemBufferProducer
WARNING: couldn't find address 0x0 (0x0) in binary!
	var loadingCompletions :  empty-list 
	let reporter : EventReporting
	let errorController : MFErrorController

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x77f8000228b8 (0x7f8000228b8) in binary!
	0x18000000c  @objc QueueAssetLoader.(null) <stripped>

	// Swift methods
	0x2f30  func <stripped> // method 
	0x3450  func <stripped> // method 
 }

 class MediaFoundation.ItemLoader : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ItemBufferConsumer {

	// Properties
	var loadingItem : MFQueuePlayerItem?
	var loadingEnabled : Bool
	var token : Int
	let assetLoader : MFAssetLoading
	let reporter : EventReporting
	let queue : OS_dispatch_queue
	var producer : ItemBufferProducer
	var delegate : ItemLoaderDelegate

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7810000228d0 (0x10000228d0) in binary!
	0x18000000c  @objc ItemLoader.(null) <stripped>

	// Swift methods
	0x50e0  func <stripped> // method 
	0x5380  func <stripped> // method 
	0x5730  func <stripped> // method 
	0x5c70  func <stripped> // method 
	0x7b30  func <stripped> // method 
	0x7bd0  func <stripped> // method 
 }

 class MediaFoundation.ItemBufferProducer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var maximumBufferLength : Int
	var hasReachedQueueEnd : Bool
	var consumer : ItemBufferConsumer
	var buffer : [MFQueuePlayerItem]
	var dataSource : MFQueueControlling
	var reporter : EventReporting
	var cursor : MFQueuePlayerItem?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x77e0000228a0 (0x7e0000228a0) in binary!
	0x68000000c  @objc ItemBufferProducer.(null) <stripped>

	// Swift methods
	0x8fc0  func <stripped> // method 
	0x9210  func <stripped> // method 
 }

 enum MediaFoundation.Failure {

	// Properties
	case assetLoadingBusy : ErrorResolution
	case assetLoadingCancelled : ErrorResolution
WARNING: couldn't find address 0x0 (0x0) in binary!
	case assetLoadingFailed :  first-element-marker 
	case assetLoadingReachedNonPlayableItem : ErrorResolution
	case noMoreAssetsToLoad : ErrorResolution
 }

 enum MediaFoundation.Failure {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case assetLoading :  first-element-marker 
	case assetLoadingCancelled : (item: MFQueuePlayerItem, token: Int)
	case loadingStuckOnNonPlayable : (item: MFQueuePlayerItem)
	case noMoreAssetsToLoad  
 }

 enum MediaFoundation.LoadingAction {

	// Properties
	case start  
	case resume  
 }

 class MediaFoundation.PlayerController : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AVStackResettable,  PlayerViewControllerBehaviorDelegate {

	// Properties
	var delegate : PlayerControllerDelegate
	var setQueueBehavior : SetQueueBehavior
	var currentItemTransition : ItemTransition
	var player : Player
	var audioSession : AVAudioSession?
	var audioSessionConfiguration : AudioSessionConfiguration
	var videoPlayerViewController : AVPlayerViewController?
	let queue : OS_dispatch_queue
	var fsm : EventHandling
	var playerObserver : PlayerObserver
WARNING: couldn't find address 0x0 (0x0) in binary!
	var playerSubscription : k¢
	var systemObserver : SystemObserver
WARNING: couldn't find address 0x0 (0x0) in binary!
	var systemSubscription : k¢
	var videoPlayerBehavior : PlayerViewControllerBehavior
	var userEventsMonitor : UserEventsMonitor
	let reporter : EventReporting
	let leaseController : MFLeaseControlling?
	var lastUserEvent : UserEvent
	var previousItemID : ItemID
	var seekToTimeCompletedEvent : PlayerEvent
	var itemAtDeath : MFPlayerItem?
	var timeAtDeath : Double?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbcd200022a48 (0x4d200022a48) in binary!
	0x83d8  @objc PlayerController.(null) <stripped>
WARNING: couldn't find address 0xaaf400022828 (0x2f400022828) in binary!
	0x76bc  @objc PlayerController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x75cfffab2b8  @objc PlayerController.(null) <stripped>
	0x6e2000226a0  @objc PlayerController.ËÔu <stripped>

	// Swift methods
 }

 class MediaFoundation.VideoUserAction : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var identifier : String
	var type : UserActionType
	var timeStamp : MFTimeStamp
	var options : [String : Swift.AnyObject]
	var source : UserActionSource
	var sourceID : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x777800022818 (0x77800022818) in binary!
	0xbd5e  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x6c04000227f0 (0x404000227f0) in binary!
	0x6c00  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x7748000227c8 (0x748000227c8) in binary!
	0xbd2e  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x7730000227a0 (0x730000227a0) in binary!
	0xbd16  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x6bbc00022778 (0x3bc00022778) in binary!
	0x6bb8  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x770000022750 (0x70000022750) in binary!
	0xbce6  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x244fffa23c0  @objc VideoUserAction.(null) <stripped>
	0x77cfffa1cc8  @objc VideoUserAction.ã(HçΩ ˇˇˇË A <stripped>
	0x2d400022808  @objc VideoUserAction. <stripped>
WARNING: couldn't find address 0x2275cfffab2b8 (0x75cfffab2b8) in binary!
	0x28000000c  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0xbee2000226a0 (0x6e2000226a0) in binary!
	0x767c  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc7c58  @objc VideoUserAction.(null) <stripped>

	// Swift methods
 }

 class MediaFoundation.PlayerViewControllerBehavior : AVMusicAppBehavior /System/Library/Frameworks/AVKit.framework/AVKit {

	// Properties
	var delegate : PlayerViewControllerBehaviorDelegate
	var onGoingJumpToTimeIdentifier : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xabf400022808 (0x3f400022808) in binary!
	0xabe8  @objc PlayerViewControllerBehavior.(null) <stripped>
WARNING: couldn't find address 0x6c5c000227e0 (0x45c000227e0) in binary!
	0xbd96  @objc PlayerViewControllerBehavior.(null) <stripped>
WARNING: couldn't find address 0x779800022940 (0x79800022940) in binary!
	0xabb8  @objc PlayerViewControllerBehavior.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x4fffa2718  @objc PlayerViewControllerBehavior.(null) <stripped>
	0x7dcfffa27a0  @objc PlayerViewControllerBehavior.ˇˇˇ <stripped>
	0x7b4fffa27a8  @objc PlayerViewControllerBehavior.ﬁËöA <stripped>

	// Swift methods
	0x13240  func <stripped> // method 
 }

 enum MediaFoundation.SetQueueBehavior {

	// Properties
	case play  
	case pause  
 }

 enum MediaFoundation.PlayerState {

	// Properties
	case stalled : WaitingReason
	case idle  
	case loading  
	case playing  
	case paused  
	case scanning  
	case seeking  
	case interrupted  
 }

 enum MediaFoundation.Error {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case userActionFailed : /§
	case mediaServicesUnavailable  
 }

 class MediaFoundation.PlayerFSM : _SwiftObject /usr/lib/swift/libswiftCore.dylib, StateProviding {

	// Properties
	var delegate : StateProvidingDelegate
	var states : State
	let controller : FSMController

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xaad400022808 (0x2d400022808) in binary!
	0x769c  @objc PlayerFSM.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x68cfffb5f88  @objc PlayerFSM.(null) <stripped>

	// Swift methods
 }

 class MediaFoundation.JumpToTimeState : State {

	// Properties
	var time : Double
	var metadata : UserActionMetadata

	// Swift methods
 }

 struct MediaFoundation.UserActionMetadata {

	// Properties
	let identifier : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let completion :  first-element-marker  // +0x10
	let mode : Mode // +0x20
	let shouldTimeout : Bool // +0x21
 }

 enum MediaFoundation.Mode {

	// Properties
	case active  
	case passive  
 }

 class MediaFoundation.PlayerPeriodicTimeSubscription {
 struct MediaFoundation.PlayerPeriodicObservationConfiguration {

	// Properties
	let timeInterval : Double // +0x0
	let queue : OS_dispatch_queue // +0x8
 }

 struct MediaFoundation.PlayerObserver {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_eventStream : Mû // +0x0
	let player : AVQueuePlayer // +0x8
	let queue : OS_dispatch_queue // +0x10
	let configuration : PlayerPeriodicObservationConfiguration // +0x18
 }

 struct MediaFoundation.PlayerPeriodicTimePublisher {

	// Properties
	let player : AVPlayer // +0x0
	let configuration : PlayerPeriodicObservationConfiguration // +0x8
 }

 enum MediaFoundation.PlayerObserverError {

	// Properties
	case itemFailedToLoadWithMissingAVError  
	case itemFailedToPlayToEndWithMissingAVError  
 }

 class MediaFoundation.PausedState : TransportableState {

	// Properties
	var metadata : UserActionMetadata
	var playbackDidStopWasProcessed : Bool
	var signalOnEnter : Bool
	let fadeOut : Double

	// Swift methods
 }

 class MediaFoundation.SeekingState : State {

	// Properties
	var startTime : Double?
	var metadata : UserActionMetadata

	// Swift methods
 }

 class MediaFoundation.ChangingQueueState : State { }

 class MediaFoundation.ResettingQueueState : ChangingQueueState {

	// Properties
	let keepCurrentItem : Bool

	// Swift methods
 }

 class MediaFoundation.ChangingCurrentItemState : ChangingQueueState {

	// Properties
	let item : MFQueuePlayerItem?

	// Swift methods
 }

 class MediaFoundation.RouteMetadata : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let isAirplay : Bool
	let routeDescription : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbee2000226a0 (0x6e2000226a0) in binary!
	0x767c  @objc RouteMetadata.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc7c58  @objc RouteMetadata.(null) <stripped>

	// Swift methods
 }

 enum MediaFoundation.SystemEvent {

	// Properties
	case beginInterruption : EventTime
	case endResumableInterruption : EventTime
	case endNonResumableInterruption : EventTime
	case routeChanged : RouteMetadata
	case screenRecordingChanged : EventTime
	case beginMediaServicesInterruption : EventTime
	case endMediaServicesInterruption : EventTime
 }

 enum MediaFoundation.PlayerEvent {

	// Properties
	case itemIsReadyToPlay : EventTime
WARNING: couldn't find address 0x0 (0x0) in binary!
	case itemDidFailToPlayToEnd :  first-element-marker 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case itemDidFailToLoad :  first-element-marker 
	case itemDidPlayToEnd : EventTime
	case itemDidBecomeCurrent : EventTime
	case itemDidResignCurrent : EventTime
	case itemDurationDidChange : EventTime
	case itemLoadedDurationDidChange : EventTime
	case itemDidFinishDownloading : EventTime
	case playbackWaitingToPlay : EventTime
	case playbackDidStart : EventTime
	case playbackDidStop : EventTime
	case playbackDidReachQueueEnd : EventTime
	case playbackTimeDidChange : PlaybackTimeChangeReason
	case playbackRateDidChange : EventTime
	case playbackIsLikelyToKeepUp : EventTime
	case playbackBufferStateDidChange : BufferState
	case seekToTimeCompleted : EventTime
	case currentItemWillChange : EventTime
 }

 class MediaFoundation.EndOfQueueState : PausedState {

	// Properties
	let reason : String

	// Swift methods
 }

 class MediaFoundation.TransitionState : State {

	// Properties
	let startItem : MFPlayerItem?
	let steps : Int
	let metadata : UserActionMetadata

	// Swift methods
 }

 class MediaFoundation.NaturalTransitionState : TransitionState { }

 class MediaFoundation.FailedTransitionState : TransitionState { }

 class MediaFoundation.FailedInitialLoadingTransitionState : FailedTransitionState {

	// Properties
	let play : Bool

	// Swift methods
 }

 class MediaFoundation.SkippingTransitionState : TransitionState { }

 class MediaFoundation.WaitingForItemTransitionState : TransitionState { }

 enum MediaFoundation.Event {

	// Properties
	case userEvent : UserEvent
	case playerEvent : PlayerEvent
	case coordinatorEvent : CoordinatorEvent
	case systemEvent : SystemEvent
 }

 enum MediaFoundation.ReportingEvent {

	// Properties
	case didReceiveUserEvent : State
	case didReceivePlayerEvent : State
	case didReceiveCoordinatorEvent : State
	case didReceiveSystemEvent : State
	case didProcessUserEvent : State
	case didProcessPlayerEvent : State
	case didProcessCoordinatorEvent : State
	case didProcessSystemEvent : State
	case didIgnoreUserEvent : State
	case didIgnorePlayerEvent : State
	case didIgnoreCoordinatorEvent : State
	case didIgnoreSystemEvent : State
	case didEnterState : State
	case didExitState : State
	case didPushState : State
	case didPopState : State
	case didSetState : State
	case didStartQueueAssetLoading : LoadingAction
WARNING: couldn't find address 0x0 (0x0) in binary!
	case didEndQueueAssetLoading : ˚ñ
	case queueAssetLoadingInfo : (description: String)
	case itemLoading : (description: String)
	case itemBuffering : (description: String)
	case didStartCompletionMonitoring : UserEvent
	case didEndCompletionMonitoring : UserEvent
	case playbackStack : (description: String)
	case playerController : (description: String)
	case internalPlayerControllerState : (description: String)
	case internalPlaybackStack : (description: String)
	case error : (description: String)
	case didStartBackgroundTask : (description: String)
	case backgroundTask : (description: String)
	case didEndBackgroundTask : (description: String)
 }

 class MediaFoundation.InternalPlaybackStackController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : PlaybackStackControllerDelegate
	var currentQueueControllerItem : MFQueuePlayerItem?
	var maximumPlayerQueueLength : Int
	let playerController : PlayerController
	let queueAssetLoader : QueueAssetLoading
	let queueController : MFQueueControlling
	let reporter : EventReporting
	let errorController : MFErrorController
	let externalPlaybackController : MFExternalPlaybackController
	let backgroundTaskController : BackgroundTaskController

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x766800022728 (0x66800022728) in binary!
	0x28000000c  @objc InternalPlaybackStackController.(null) <stripped>

	// Swift methods
	0x2f5b0  func <stripped> // method 
	0x2f620  func <stripped> // method 
	0x303c0  func <stripped> // method 
	0x30780  func <stripped> // method 
	0x322e0  func <stripped> // method 
	0x32a40  func <stripped> // method 
	0x356a0  func <stripped> // method 
 }

 class MediaFoundation.BackgroundTask : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var identifier : UIBackgroundTaskIdentifier // +0x10 (0x8)
	let category : Category // +0x18 (0x1)
	var references : Int // +0x20 (0x8)

	// Swift methods
 }

 class MediaFoundation.BackgroundTaskController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let provider : BackgroundTaskProvider
	let reporter : EventReporting
	var tasks : BackgroundTask

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x765000022710 (0x65000022710) in binary!
	0xaa70  @objc BackgroundTaskController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x6e4fffdc710  @objc BackgroundTaskController.(null) <stripped>

	// Swift methods
	0x39500  func <stripped> // method 
	0x3a700  func <stripped> // method 
 }

 enum MediaFoundation.Category {

	// Properties
	case assetLoading  
	case mediaServicesSetup  
 }

 enum MediaFoundation.Error {

	// Properties
	case backgroundTaskNotStarted : Category
 }

 class MediaFoundation.InitialLoadingState : State {

	// Properties
	var metadata : UserActionMetadata
	var item : MFQueuePlayerItem?
	var play : Bool

	// Swift methods
 }

 class MediaFoundation.InitiatingPlaybackState : State {

	// Properties
	let metadata : UserActionMetadata
	let fromInterruption : Bool

	// Swift methods
 }

 enum MediaFoundation.WaitingReason {

	// Properties
	case toMinimizeStalls  
	case evaluatingBufferingRate  
	case noAVItemToPlay  
	case nonSpecifiedAVReason  
	case nonLoadableItemInQueue  
 }

 class MediaFoundation.RateScanningSubscription {
 struct MediaFoundation.RateScannerConfiguration {

	// Properties
	let rateScanning : RateScannerType // +0x0
	let queue : OS_dispatch_queue // +0x10
	let speedup : Bool // +0x18
 }

 struct MediaFoundation.RateScanner {

	// Properties
	let configuration : RateScannerConfiguration // +0x0
 }

 enum MediaFoundation.RateScannerType {

	// Properties
	case audio : Direction
	case video : Direction
 }

 class MediaFoundation.PlayingState : TransportableState {

	// Properties
	var resumeOnEnter : Bool

	// Swift methods
 }

 class MediaFoundation.MediaServicesInterruptedState : PausedState {

	// Properties
	let event : SystemEvent
	let interruptedState : State

	// Swift methods
 }

 class MediaFoundation.MediaServicesResumingState : PausedState {

	// Properties
	let event : SystemEvent
	var jumpToTimeTarget : Double?
	var jumpToTimeMetadata : UserActionMetadata

	// Swift methods
 }

 class MediaFoundation.InternalPlayerController : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PlayerSettable,  PlaybackInformationProviding {

	// Properties
	var delegate : InternalPlayerControllerDelegate
	var currentRate : Float
	var targetRate : Float
	var targetStartTime : Double?
	var currentItem : MFPlayerItem?
	var player : Player
	var reporter : EventReporting
	let queue : OS_dispatch_queue
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scanningSubscription :  empty-list 
	var lastFullyDownloadedPlayerItem : MFPlayerItem?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xaa5c00022790 (0x25c00022790) in binary!
	0x7624  @objc InternalPlayerController.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x604fffe1630  @objc InternalPlayerController.(null) <stripped>

	// Swift methods
 }

 enum MediaFoundation.Direction { }

 class MediaFoundation.ScanningState : State {

	// Properties
	let direction : Direction
	let resumeRate : Float
	var metadata : UserActionMetadata

	// Swift methods
 }

 class MediaFoundation.TransportableState : State { }

 class MediaFoundation.InterruptedState : PausedState {

	// Properties
	let interruptedState : State
	let interruptionEvent : SystemEvent

	// Swift methods
 }

 enum MediaFoundation.PlayerState { }

 enum MediaFoundation.UserActionType { }

 enum MediaFoundation.UserActionSource { }

 enum MediaFoundation.BufferState { }

 enum MediaFoundation.ErrorResolution { }

 enum MediaFoundation.ItemRequestReason { }

 enum MediaFoundation.ItemTransition { }

 enum MediaFoundation.PlaybackTimeChangeReason { }

 class MediaFoundation.Description : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x757800022720 (0x57800022720) in binary!
	0x268000000c  @objc Description.(null) <stripped>

	// Swift methods
	0x51160  class func <stripped> // method 
	0x51190  class func <stripped> // method 
	0x51270  class func <stripped> // method 
	0x51380  class func <stripped> // method 
	0x514c0  class func <stripped> // method 
	0x516a0  class func <stripped> // method 
	0x51710  class func <stripped> // method 
	0x517e0  class func <stripped> // method 
 }

 class MediaFoundation.AudioSessionConfiguration : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var category : Category
	var mode : Mode
	var routeSharingPolicy : RouteSharingPolicy
	var options : CategoryOptions

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbb4c00022570 (0x34c00022570) in binary!
	0x759c  @objc AudioSessionConfiguration.(null) <stripped>
WARNING: couldn't find address 0xa9bc000225b0 (0x1bc000225b0) in binary!
	0x18000000c  @objc AudioSessionConfiguration.(null) <stripped>
WARNING: couldn't find address 0x757800022720 (0x57800022720) in binary!
	0x268000000c  @objc AudioSessionConfiguration.(null) <stripped>

	// Swift methods
	0x51920  class func AudioSessionConfiguration.__allocating_init(category:mode:routeSharingPolicy:options:) // init 
 }

 enum MediaFoundation.ExternalPlaybackType { }

 class MediaFoundation.MFPlaybackStackControllerImplementation : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var delegate : weak MFPlaybackStackControllerDelegate? // +0x8 (0x8)
	let internalStack : PlaybackStackController // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6a0400022520 (0x20400022520) in binary!
	0x6a00  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x7548000224f8 (0x548000224f8) in binary!
	0xbb2e  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbb34000224d0 (0x334000224d0) in binary!
	0x69c8  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x69bc000224b0 (0x1bc000224b0) in binary!
	0x69b0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x6dd400022798 (0x5d400022798) in binary!
	0xbb1a  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbb0e00022470 (0x30e00022470) in binary!
	0x74dc  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x74d000022708 (0x4d000022708) in binary!
	0x74c4  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x74b800022428 (0x4b800022428) in binary!
	0xbada  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbada00022400 (0x2da00022400) in binary!
	0xa8c0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xa8b4000225e8 (0xb4000225e8) in binary!
	0xbad0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbae4000223b8 (0x2e4000223b8) in binary!
	0xbaea  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbafc00022390 (0x2fc00022390) in binary!
	0xbac0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbb0400022368 (0x30400022368) in binary!
	0xbaba  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbaae00022340 (0x2ae00022340) in binary!
	0xbac0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xba9600022318 (0x29600022318) in binary!
	0xbaa8  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbabc000222f0 (0x2bc000222f0) in binary!
	0xbac2  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x73e0000222c8 (0x3e0000222c8) in binary!
	0x73d4  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xb9ba00022730 (0x1ba00022730) in binary!
	0x80c0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x73b000022558 (0x3b000022558) in binary!
	0xa7d0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x25cfffe8d60  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
	0xfffe8d68  @objc MFPlaybackStackControllerImplementation. <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x6c4fffef710  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
	0x3fcfffee138  @objc MFPlaybackStackControllerImplementation.ˇHâù(ˇˇˇH«Ö0ˇˇˇ <stripped>
	0x7cc000221e0  @objc MFPlaybackStackControllerImplementation.≠‡˛ˇˇHãµ∞˛ˇˇË—x <stripped>
WARNING: couldn't find address 0x223dcffffb648 (0x3dcffffb648) in binary!
	0x118000000c  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xcbac000227d0 (0x3ac000227d0) in binary!
	0x72fc  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x72f0000221b8 (0x2f0000221b8) in binary!
	0x72e4  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xb8ca00022600 (0xca00022600) in binary!
	0x6770  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x676c000225f0 (0x76c000225f0) in binary!
	0x72b4  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xb89a00022798 (0x9a00022798) in binary!
	0xbaf6  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xb8ca000225c8 (0xca000225c8) in binary!
	0xbade  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbad200022138 (0x2d200022138) in binary!
	0xbac6  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbaba000223c8 (0x2ba000223c8) in binary!
	0xb88e  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x724800022300 (0x24800022300) in binary!
	0x25029232840  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x6964654d3a4d4152 (0x54d3a4d4152) in binary!
	0x20206e6f69  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x64654d3a5443454a (0x53a5443454a) in binary!
	0x12d6e6f6974  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x3ff0000000000000 (0x0) in binary!
	0x7697461646e  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x17463416d65  @objc MFPlaybackStackControllerImplementation.(null) <stripped>

	// Swift methods
	0x51c50  func <stripped> // getter 
	0x51cb0  func <stripped> // setter 
	0x51d20  func <stripped> // modifyCoroutine 
	0x51de0  func <stripped> // getter 
	0x51e60  func <stripped> // setter 
	0x51f30  func <stripped> // modifyCoroutine 
	0x52000  class func MFPlaybackStackControllerImplementation.__allocating_init(queueController:assetLoader:errorController:externalPlaybackController:leaseController:queue:) // init 
	0x52a00  func <stripped> // getter 
	0x52a40  func <stripped> // method 
	0x52c40  func <stripped> // method 
	0x52ca0  func <stripped> // method 
	0x52cf0  func <stripped> // method 
	0x52d30  func <stripped> // method 
	0x52ef0  func <stripped> // method 
	0x53090  func <stripped> // method 
	0x532f0  func <stripped> // method 
	0x53570  func <stripped> // method 
	0x537f0  func <stripped> // method 
	0x53a60  func <stripped> // method 
	0x53cc0  func <stripped> // method 
	0x53f20  func <stripped> // method 
	0x541a0  func <stripped> // method 
	0x54400  func <stripped> // method 
	0x54680  func <stripped> // method 
	0x548f0  func <stripped> // method 
	0x54a00  func <stripped> // getter 
	0x54aa0  func <stripped> // getter 
	0x54f60  func <stripped> // method 
	0x54fa0  func <stripped> // method 
	0x55100  func <stripped> // method 
 }

 class MediaFoundation.State : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x58780  func <stripped> // method 
	0x584e0  func <stripped> // method 
	0x587b0  func <stripped> // method 
	0x588f0  func <stripped> // method 
	0x58a00  func <stripped> // method 
	0x58500  func <stripped> // method 
	0x585b0  func <stripped> // method 
	0x58a80  func <stripped> // getter 
 }

 class MediaFoundation.EventTime : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let time : Double
	let userSecondsSinceReferenceDate : Double
	let hostTime : CMTime
	let type : TimeType

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6c6400022270 (0x46400022270) in binary!
	0x6c58  @objc EventTime.(null) <stripped>
WARNING: couldn't find address 0x6c5400022248 (0x45400022248) in binary!
	0x48000000c  @objc EventTime.(null) <stripped>
WARNING: couldn't find address 0xb952000226c8 (0x152000226c8) in binary!
	0x8058  @objc EventTime.(null) <stripped>

	// Swift methods
 }

 enum MediaFoundation.TimeType {

	// Properties
	case approximate  
	case accurate  
	case universal  
 }

 enum MediaFoundation.UserEvent {

	// Properties
	case setQueueWithItem : UserActionMetadata
	case play : UserActionMetadata
	case pause : UserActionMetadata
	case setRate : UserActionMetadata
	case beginScanning : Direction
	case endScanning : UserActionMetadata
	case beginSeeking : UserActionMetadata
	case seekTo : UserActionMetadata
	case endSeeking : UserActionMetadata
	case jumpTo : UserActionMetadata
	case skip : Direction
 }

 class MediaFoundation.IdleState : State { }

 class MediaFoundation.EventReporter : _SwiftObject /usr/lib/swift/libswiftCore.dylib, EventReporting {

	// Properties
	var activeSubsystems : Subsystem
	var queue : OS_dispatch_queue

	// Swift methods
	0x5c5b0  func <stripped> // method 
 }

 struct MediaFoundation.Subsystem {

	// Properties
	let rawValue : Int // +0x0
	let logCategory : OS_os_log // +0x8
 }

 class MediaFoundation.PlaybackStackController : _SwiftObject /usr/lib/swift/libswiftCore.dylib, QueueManagement {

	// Properties
	var queueController : MFQueueControlling
	let queueAssetLoader : QueueAssetLoading
	let playerController : PlayerController
	let reporter : EventReporting
	let internalController : InternalPlaybackStackController
	let errorController : MFErrorController
	let backgroundTaskController : BackgroundTaskController
	var currentQueueRestorationItem : MFQueuePlayerItem?
	var currentSetQueueIdentifier : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb952000226c8 (0x152000226c8) in binary!
	0x8058  @objc PlaybackStackController.(null) <stripped>
WARNING: couldn't find address 0xa774000224a8 (0x774000224a8) in binary!
	0x733c  @objc PlaybackStackController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x3dcffffb648  @objc PlaybackStackController.(null) <stripped>
	0x3ac000227d0  @objc PlaybackStackController.˜Lâ˘Mâ‡Ë∏w <stripped>

	// Swift methods
 }

 enum MediaFoundation.Failure {

	// Properties
	case setQueueFailedToLoadAnyAsset : (identifier: String)
	case setQueueCancelled : (identifier: String)
	case userEventTimeout : (identifier: String)
	case userEventCancelled : (identifier: String)
	case restoreQueueFailedToRetrieveStartItem  
 }

 class MediaFoundation.ErrorResolutionState : State {

	// Properties
	let playerEvent : PlayerEvent
	let playerItem : MFPlayerItem
	let initialLoadFailure : Bool
	let initialLoadShouldPlay : Bool
	let steps : Int

	// Swift methods
 }

 struct MediaFoundation.SystemObserver {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_eventStream : ôá // +0x0
	let audioSession : AVAudioSession // +0x8
	let queue : OS_dispatch_queue // +0x10
 }

 struct MediaFoundation.ItemID {

	// Properties
	let contentItemID : String // +0x0
	let repeatIndex : Int // +0x10
 }

 class MediaFoundation.UserEventsMonitor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var timeout : Double
	var monitors : UserEventCompletionMonitor
	let reporter : EventReporting

	// Swift methods
 }

 class MediaFoundation.UserEventCompletionMonitor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let monitoredUserEvent : UserEvent
	var timer : OS_dispatch_source_timer?
	let timeout : Double
	var reporter : EventReporting

	// Swift methods
 }

 enum MediaFoundation.Error {

	// Properties
	case setQueueCancelled : (identifier: String, item: MFPlayerItem)
	case setQueueFailed : (identifier: String, item: MFPlayerItem, reason: String)
	case seekToTimeCancelled : (identifier: String, time: Double)
	case seekToTimeFailed : (identifier: String, time: Double)
	case timeout : (identifier: String)
	case canceled : (identifier: String)
 }

 enum MediaFoundation.CoordinatorEvent {

	// Properties
	case setCurrentItem : (item: MFQueuePlayerItem?)
	case enqueueItem : (item: MFQueuePlayerItem)
	case resetQueue : (keepCurrentItem: Bool)
	case reloadQueue : (includeCurrentItem: Bool)
	case queueEndReached : (reason: String)
	case queueWaitingForPlayableItem  
 }

 struct __C_Synthesized.AVError {

	// Properties
	let _nsError : NSError
 }

 struct __C.CategoryOptions {

	// Properties
	let rawValue : UInt
 }

 enum __C.RouteSharingPolicy { }

 struct __C.Mode {

	// Properties
	var _rawValue : NSString
 }

 struct __C.Category {

	// Properties
	var _rawValue : NSString
 }

 struct __C.UIBackgroundTaskIdentifier {

	// Properties
	let rawValue : Int
 }

 class __C.CMTimebase {
 enum __C.TimeControlStatus { }

 enum __C.Status { }

 enum __C.ActionAtItemEnd { }

 struct __C.CMTime {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : G≠
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timescale : 9≠
	var flags : CMTimeFlags
WARNING: couldn't find address 0x0 (0x0) in binary!
	var epoch : G≠
 }

 enum __C.AVPlayerExternalPlaybackType { }

 struct __C.AVAudioSessionSilenceOutputOptions {

	// Properties
	let rawValue : UInt
 }

 enum __C.Status { }

 class __C.CMClock {
 struct __C.CMTimeRange {

	// Properties
	var start : CMTime
	var duration : CMTime
 }

 struct __C.CMTimeFlags {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : ï¨
 }

 enum __C.Code { }
