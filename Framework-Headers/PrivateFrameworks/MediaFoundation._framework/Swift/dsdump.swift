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
WARNING: couldn't find address 0x77f8000235c8 (0x7f8000235c8) in binary!
	0x18000000c  @objc QueueAssetLoader.(null) <stripped>

	// Swift methods
	0x33e0  func <stripped> // method 
	0x3900  func <stripped> // method 
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
WARNING: couldn't find address 0x7810000235e0 (0x10000235e0) in binary!
	0x18000000c  @objc ItemLoader.(null) <stripped>

	// Swift methods
	0x5590  func <stripped> // method 
	0x5830  func <stripped> // method 
	0x5be0  func <stripped> // method 
	0x6120  func <stripped> // method 
	0x7fe0  func <stripped> // method 
	0x8080  func <stripped> // method 
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
WARNING: couldn't find address 0x77e0000235b0 (0x7e0000235b0) in binary!
	0x68000000c  @objc ItemBufferProducer.(null) <stripped>

	// Swift methods
	0x9470  func <stripped> // method 
	0x96c0  func <stripped> // method 
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
	var playerSubscription : {ü
	var systemObserver : SystemObserver
WARNING: couldn't find address 0x0 (0x0) in binary!
	var systemSubscription : {ü
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
WARNING: couldn't find address 0xbcd200023758 (0x4d200023758) in binary!
	0x83d8  @objc PlayerController.(null) <stripped>
WARNING: couldn't find address 0xaaf400023538 (0x2f400023538) in binary!
	0x76bc  @objc PlayerController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x46cfffab3b8  @objc PlayerController.(null) <stripped>
	0x6e2000233b0  @objc PlayerController.m†HâﬂËD{ <stripped>

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
WARNING: couldn't find address 0x777800023528 (0x77800023528) in binary!
	0xbd5e  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x6c0400023500 (0x40400023500) in binary!
	0x6c00  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x7748000234d8 (0x748000234d8) in binary!
	0xbd2e  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x7730000234b0 (0x730000234b0) in binary!
	0xbd16  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x6bbc00023488 (0x3bc00023488) in binary!
	0x6bb8  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x770000023460 (0x70000023460) in binary!
	0xbce6  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x754fffa2520  @objc VideoUserAction.(null) <stripped>
	0x48cfffa1e28  @objc VideoUserAction.ˇˇAˆƒÑã <stripped>
	0x2d400023518  @objc VideoUserAction.ˆLâÍLâ˘MâËw <stripped>
WARNING: couldn't find address 0x2346cfffab3b8 (0x46cfffab3b8) in binary!
	0x28000000c  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0xbee2000233b0 (0x6e2000233b0) in binary!
	0x767c  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc7cd8  @objc VideoUserAction.(null) <stripped>

	// Swift methods
 }

 class MediaFoundation.PlayerViewControllerBehavior : AVMusicAppBehavior /System/Library/Frameworks/AVKit.framework/AVKit {

	// Properties
	var delegate : PlayerViewControllerBehaviorDelegate
	var onGoingJumpToTimeIdentifier : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xabf400023518 (0x3f400023518) in binary!
	0xabe8  @objc PlayerViewControllerBehavior.(null) <stripped>
WARNING: couldn't find address 0x6c5c000234f0 (0x45c000234f0) in binary!
	0xbd96  @objc PlayerViewControllerBehavior.(null) <stripped>
WARNING: couldn't find address 0x779800023650 (0x79800023650) in binary!
	0xabb8  @objc PlayerViewControllerBehavior.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x514fffa2878  @objc PlayerViewControllerBehavior.(null) <stripped>
	0x4ecfffa2900  @objc PlayerViewControllerBehavior.HãXLâˇËè3 <stripped>
	0x4c4fffa2908  @objc PlayerViewControllerBehavior.¬Lâ˘MâËËÄÉ <stripped>

	// Swift methods
	0x13690  func <stripped> // method 
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
	case userActionFailed : ?°
	case mediaServicesUnavailable  
 }

 class MediaFoundation.PlayerFSM : _SwiftObject /usr/lib/swift/libswiftCore.dylib, StateProviding {

	// Properties
	var delegate : StateProvidingDelegate
	var states : State
	let controller : FSMController

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xaad400023518 (0x2d400023518) in binary!
	0x769c  @objc PlayerFSM.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x39cfffb6008  @objc PlayerFSM.(null) <stripped>

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
	var $__lazy_storage_$_eventStream : ]õ // +0x0
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
WARNING: couldn't find address 0xbee2000233b0 (0x6e2000233b0) in binary!
	0x767c  @objc RouteMetadata.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc7cd8  @objc RouteMetadata.(null) <stripped>

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
	case didEndQueueAssetLoading : î
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
WARNING: couldn't find address 0x766800023438 (0x66800023438) in binary!
	0x28000000c  @objc InternalPlaybackStackController.(null) <stripped>

	// Swift methods
	0x2f920  func <stripped> // method 
	0x2f990  func <stripped> // method 
	0x30730  func <stripped> // method 
	0x30af0  func <stripped> // method 
	0x32650  func <stripped> // method 
	0x32db0  func <stripped> // method 
	0x35a10  func <stripped> // method 
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
WARNING: couldn't find address 0x765000023420 (0x65000023420) in binary!
	0xaa70  @objc BackgroundTaskController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x3f4fffdc760  @objc BackgroundTaskController.(null) <stripped>

	// Swift methods
	0x39850  func <stripped> // method 
	0x3aa50  func <stripped> // method 
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
WARNING: couldn't find address 0xaa5c000234a0 (0x25c000234a0) in binary!
	0x7624  @objc InternalPlayerController.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x314fffe1670  @objc InternalPlayerController.(null) <stripped>

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
WARNING: couldn't find address 0x757800023430 (0x57800023430) in binary!
	0x268000000c  @objc Description.(null) <stripped>

	// Swift methods
	0x51490  class func <stripped> // method 
	0x514c0  class func <stripped> // method 
	0x515a0  class func <stripped> // method 
	0x516b0  class func <stripped> // method 
	0x517f0  class func <stripped> // method 
	0x519d0  class func <stripped> // method 
	0x51a40  class func <stripped> // method 
	0x51b10  class func <stripped> // method 
 }

 class MediaFoundation.AudioSessionConfiguration : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var category : Category
	var mode : Mode
	var routeSharingPolicy : RouteSharingPolicy
	var options : CategoryOptions

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbb4c00023280 (0x34c00023280) in binary!
	0x759c  @objc AudioSessionConfiguration.(null) <stripped>
WARNING: couldn't find address 0xa9bc000232c0 (0x1bc000232c0) in binary!
	0x18000000c  @objc AudioSessionConfiguration.(null) <stripped>
WARNING: couldn't find address 0x757800023430 (0x57800023430) in binary!
	0x268000000c  @objc AudioSessionConfiguration.(null) <stripped>

	// Swift methods
	0x51c50  class func AudioSessionConfiguration.__allocating_init(category:mode:routeSharingPolicy:options:) // init 
 }

 enum MediaFoundation.ExternalPlaybackType { }

 class MediaFoundation.MFPlaybackStackControllerImplementation : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var delegate : weak MFPlaybackStackControllerDelegate? // +0x8 (0x8)
	let internalStack : PlaybackStackController // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6a0400023230 (0x20400023230) in binary!
	0x6a00  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x754800023208 (0x54800023208) in binary!
	0xbb2e  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbb34000231e0 (0x334000231e0) in binary!
	0x69c8  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x69bc000231c0 (0x1bc000231c0) in binary!
	0x69b0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x6dd4000234a8 (0x5d4000234a8) in binary!
	0xbb1a  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbb0e00023180 (0x30e00023180) in binary!
	0x74dc  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x74d000023418 (0x4d000023418) in binary!
	0x74c4  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x74b800023138 (0x4b800023138) in binary!
	0xbada  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbada00023110 (0x2da00023110) in binary!
	0xa8c0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xa8b4000232f8 (0xb4000232f8) in binary!
	0xbad0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbae4000230c8 (0x2e4000230c8) in binary!
	0xbaea  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbafc000230a0 (0x2fc000230a0) in binary!
	0xbac0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbb0400023078 (0x30400023078) in binary!
	0xbaba  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbaae00023050 (0x2ae00023050) in binary!
	0xbac0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xba9600023028 (0x29600023028) in binary!
	0xbaa8  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbabc00023000 (0x2bc00023000) in binary!
	0xbac2  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x73e000022fd8 (0x3e000022fd8) in binary!
	0x73d4  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xb9ba00023440 (0x1ba00023440) in binary!
	0x80c0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x73b000023268 (0x3b000023268) in binary!
	0xa7d0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x76cfffe8d90  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
	0xfffe8d98  @objc MFPlaybackStackControllerImplementation.ˇ)Ö‡˝ˇˇLâuêIæ <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x3d4fffef740  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
	0x10cfffee168  @objc MFPlaybackStackControllerImplementation.t1…MÖˇIIœHâH[A]A^A_]√f.Ñ <stripped>
	0x7cc00022ef0  @objc MFPlaybackStackControllerImplementation.HÉΩÿ˛ˇˇ <stripped>
WARNING: couldn't find address 0x230ecffffb648 (0xecffffb648) in binary!
	0x118000000c  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xcbac000234e0 (0x3ac000234e0) in binary!
	0x72fc  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x72f000022ec8 (0x2f000022ec8) in binary!
	0x72e4  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xb8ca00023310 (0xca00023310) in binary!
	0x6770  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x676c00023300 (0x76c00023300) in binary!
	0x72b4  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xb89a000234a8 (0x9a000234a8) in binary!
	0xbaf6  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xb8ca000232d8 (0xca000232d8) in binary!
	0xbade  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbad200022e48 (0x2d200022e48) in binary!
	0xbac6  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xbaba000230d8 (0x2ba000230d8) in binary!
	0xb88e  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x724800023010 (0x24800023010) in binary!
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
	0x51f80  func <stripped> // getter 
	0x51fe0  func <stripped> // setter 
	0x52050  func <stripped> // modifyCoroutine 
	0x52110  func <stripped> // getter 
	0x52190  func <stripped> // setter 
	0x52260  func <stripped> // modifyCoroutine 
	0x52330  class func MFPlaybackStackControllerImplementation.__allocating_init(queueController:assetLoader:errorController:externalPlaybackController:leaseController:queue:) // init 
	0x52d30  func <stripped> // getter 
	0x52d70  func <stripped> // method 
	0x52f70  func <stripped> // method 
	0x52fd0  func <stripped> // method 
	0x53020  func <stripped> // method 
	0x53060  func <stripped> // method 
	0x53220  func <stripped> // method 
	0x533c0  func <stripped> // method 
	0x53620  func <stripped> // method 
	0x538a0  func <stripped> // method 
	0x53b20  func <stripped> // method 
	0x53d90  func <stripped> // method 
	0x53ff0  func <stripped> // method 
	0x54250  func <stripped> // method 
	0x544d0  func <stripped> // method 
	0x54730  func <stripped> // method 
	0x549b0  func <stripped> // method 
	0x54c20  func <stripped> // method 
	0x54d30  func <stripped> // getter 
	0x54dd0  func <stripped> // getter 
	0x55290  func <stripped> // method 
	0x552d0  func <stripped> // method 
	0x55430  func <stripped> // method 
 }

 class MediaFoundation.State : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x58aa0  func <stripped> // method 
	0x58810  func <stripped> // method 
	0x58ad0  func <stripped> // method 
	0x58c10  func <stripped> // method 
	0x58d20  func <stripped> // method 
	0x58830  func <stripped> // method 
	0x588e0  func <stripped> // method 
	0x58da0  func <stripped> // getter 
 }

 class MediaFoundation.EventTime : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let time : Double
	let userSecondsSinceReferenceDate : Double
	let hostTime : CMTime
	let type : TimeType

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6c6400022f80 (0x46400022f80) in binary!
	0x6c58  @objc EventTime.(null) <stripped>
WARNING: couldn't find address 0x6c5400022f58 (0x45400022f58) in binary!
	0x48000000c  @objc EventTime.(null) <stripped>
WARNING: couldn't find address 0xb952000233d8 (0x152000233d8) in binary!
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
	0x5c8d0  func <stripped> // method 
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
WARNING: couldn't find address 0xb952000233d8 (0x152000233d8) in binary!
	0x8058  @objc PlaybackStackController.(null) <stripped>
WARNING: couldn't find address 0xa774000231b8 (0x774000231b8) in binary!
	0x733c  @objc PlaybackStackController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0xecffffb648  @objc PlaybackStackController.(null) <stripped>
	0x3ac000234e0  @objc PlaybackStackController. tokenHçˇœ <stripped>

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
	var $__lazy_storage_$_eventStream : ©Ñ // +0x0
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
	var value : W™
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timescale : I™
	var flags : CMTimeFlags
WARNING: couldn't find address 0x0 (0x0) in binary!
	var epoch : W™
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
	let rawValue : •©
 }

 enum __C.Code { }
