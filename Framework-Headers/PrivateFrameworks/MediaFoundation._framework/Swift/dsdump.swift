 protocol MediaFoundation.SystemActions // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.QueueAssetLoadingDelegate // 1 requirements
 {
	// method
 }
 protocol MediaFoundation.QueueAssetLoading // 10 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// method
	// method
	// method
 }
 protocol MediaFoundation.QueueAssetLoaderControllerDelegate // 0 requirements
 {
 }
 protocol MediaFoundation.QueueAssetLoaderController // 19 requirements
 {
	// getter
	// setter
	// modify coroutine
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
 protocol MediaFoundation.PlayerControllerDelegate // 5 requirements
 {
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
 protocol MediaFoundation.CoordinatorActions // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol MediaFoundation.InternalCoordinatorActions // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol MediaFoundation.UserActions // 12 requirements
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
 }
 protocol MediaFoundation.InternalUserActions // 14 requirements
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
 protocol MediaFoundation.PlaybackInformationProviding // 10 requirements
 {
	// getter
	// getter
	// getter
	// getter
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
 protocol MediaFoundation.InternalPlayerControllerDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol MediaFoundation.Seeker // 2 requirements
 {
	// getter
	// method
 }
 protocol MediaFoundation.InternalPlayerActions // 3 requirements
 {
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
 protocol MediaFoundation.PlaybackStackControllerDelegate // 7 requirements
 {
	// method
	// method
	// method
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

 class MediaFoundation.QueueAssetLoader : _SwiftObject /usr/lib/swift/libswiftCore.dylib, QueueAssetLoading,  ItemLoaderDelegate {

	// Properties
	let stateMachine : QueueAssetLoaderStateMachine

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa0840002a320 (0x840002a320) in binary!
	0x18000000c  @objc QueueAssetLoader.(null) <stripped>

	// Swift methods
	0x3940  class func QueueAssetLoader.__allocating_init(queueController:assetLoader:errorController:reporter:) // init 
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

 enum MediaFoundation.LoadingAction {

	// Properties
	case start  
	case resume  
 }

 class MediaFoundation.QueueAssetLoaderStateMachine : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var state : State
	var controller : QueueAssetLoaderController
	var reporter : EventReporting

	// Swift methods
	0x50f0  class func QueueAssetLoaderStateMachine.__allocating_init() // init 
 }

 enum MediaFoundation.State {

	// Properties
	case idle  
	case loading  
	case resolvingError  
	case stuckOnNonLoadableItem  
	case stuckOnEmptyQueue  
	case stuckOnError  
 }

 enum MediaFoundation.Event {

	// Properties
	case startLoading : Direction
	case resumeLoading : Direction
WARNING: couldn't find address 0x0 (0x0) in binary!
	case loadingCompleted : √“
	case loadingFailedSilently : Failure
	case loadingFailedAndMustStop : Failure
	case loadingFailedAndMustRetry : Failure
	case reset  
 }

 class MediaFoundation.QueueAssetLoaderControllerImplementation : _SwiftObject /usr/lib/swift/libswiftCore.dylib, QueueAssetLoaderController {

	// Properties
	var delegate : QueueAssetLoadingDelegate
	var silentFailureDirection : Direction
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
WARNING: couldn't find address 0xa0540002a2f0 (0x540002a2f0) in binary!
	0x94e0  @objc QueueAssetLoaderControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x86140002a2e0 (0x6140002a2e0) in binary!
	0xf01c  @objc QueueAssetLoaderControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x22cfff7aa50  @objc QueueAssetLoaderControllerImplementation.(null) <stripped>
	0x204fff7c268  @objc QueueAssetLoaderControllerImplementation.LâpHâ√LâhLâÔËè	 <stripped>

	// Swift methods
	0x39b0  class func QueueAssetLoaderControllerImplementation.__allocating_init(queueController:assetLoader:errorController:reporter:) // init 
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
WARNING: couldn't find address 0xa09c0002a338 (0x9c0002a338) in binary!
	0x18000000c  @objc ItemLoader.(null) <stripped>

	// Swift methods
	0xa530  func ItemLoader.loadingItem.getter // getter 
	0xa5c0  func ItemLoader.token.getter // getter 
	0xa650  func ItemLoader.producer.getter // getter 
	0xa680  func ItemLoader.producer.setter // setter 
	0xa6c0  func ItemLoader.producer.modify // modifyCoroutine 
	0xa770  func ItemLoader.delegate.getter // getter 
	0xa7a0  func ItemLoader.delegate.setter // setter 
	0xa7f0  func ItemLoader.delegate.modify // modifyCoroutine 
	0x7140  class func ItemLoader.__allocating_init(assetLoader:itemProducer:reporter:) // init 
	0xa960  func ItemLoader.reset() // method 
	0xa9e0  func ItemLoader.pauseLoading() // method 
	0xabf0  func ItemLoader.resumeLoading(direction:) // method 
	0xaf10  func ItemLoader.reloadItems(from:includeStartItem:direction:token:) // method 
	0xb340  func ItemLoader.load(_:) // method 
	0xced0  func ItemLoader.updateMaximumBufferLength(_:) // method 
	0xcfa0  func ItemLoader.canConsumeItems() // method 
	0xd050  func ItemLoader.processBufferingResult(_:) // method 
 }

 enum MediaFoundation.Failure {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case assetLoading :  first-element-marker 
	case assetLoadingCancelled : (item: MFQueuePlayerItem, token: Int)
	case loadingStuckOnNonPlayable : (item: MFQueuePlayerItem)
	case noMoreAssetsToLoad  
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
WARNING: couldn't find address 0xa06c0002a308 (0x6c0002a308) in binary!
	0x48000000c  @objc ItemBufferProducer.(null) <stripped>

	// Swift methods
	0xe370  func ItemBufferProducer.maximumBufferLength.getter // getter 
	0xe3a0  func ItemBufferProducer.maximumBufferLength.setter // setter 
	0xe3d0  func ItemBufferProducer.maximumBufferLength.modify // modifyCoroutine 
	0xe460  func ItemBufferProducer.hasReachedQueueEnd.getter // getter 
	0xe500  func ItemBufferProducer.consumer.getter // getter 
	0xe530  func ItemBufferProducer.consumer.setter // setter 
	0xe5d0  func ItemBufferProducer.consumer.modify // modifyCoroutine 
	0xe760  func ItemBufferProducer.buffer.getter // getter 
	0x70a0  class func ItemBufferProducer.__allocating_init(dataSource:reporter:) // init 
	0xe820  func ItemBufferProducer.reset() // method 
	0xe8e0  func ItemBufferProducer.reloadItems(from:includeStartItem:direction:completion:) // method 
	0xe9c0  func ItemBufferProducer.resumeProduction(direction:completion:) // method 
	0xebc0  func ItemBufferProducer.dequeueNextItem() // method 
	0xee00  func ItemBufferProducer.fillBuffer(startItem:includeStartItem:direction:completion:) // method 
	0x10170  func ItemBufferProducer.fillBuffer(direction:_:) // method 
 }

 enum MediaFoundation.Failure {

	// Properties
	case nonPlayableItemReached : MFQueuePlayerItem
	case bufferLimitReached : Int
	case dataSourceEndReached  
 }

 struct MediaFoundation.UserEventFactory { }

 class MediaFoundation.PlayerController : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PlayerViewControllerBehaviorDelegate,  AVStackResettable {

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
	var playerSubscription : ì 
	var systemObserver : SystemObserver
WARNING: couldn't find address 0x0 (0x0) in binary!
	var systemSubscription : ì 
	var videoPlayerBehavior : PlayerViewControllerBehavior
	var userEventsMonitor : UserEventsMonitor
	let reporter : EventReporting
	let leaseController : MFLeaseControlling?
	var lastUserEvent : UserEvent
	var previousItemID : ItemID

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x82400002a4e0 (0x2400002a4e0) in binary!
	0x9f80  @objc PlayerController.(null) <stripped>
WARNING: couldn't find address 0x93b40002a1b0 (0x3b40002a1b0) in binary!
	0x9f10  @objc PlayerController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x18cfff855a0  @objc PlayerController.(null) <stripped>
	0x54400029f58  @objc PlayerController. <stripped>

	// Swift methods
	0x16230  class func PlayerController.__allocating_init(queue:reporter:leaseController:) // init 
	0x17e20  class func PlayerController.__allocating_init(queue:fsm:player:) // init 
 }

 enum MediaFoundation.Error {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case userActionFailed : )Œ
	case mediaServicesUnavailable  
 }

 enum MediaFoundation.PlayerState {

	// Properties
	case loading : (playing: Bool)
	case stalled : WaitingReason
	case idle  
	case playing  
	case paused  
	case scanning  
	case seeking  
	case interrupted  
 }

 enum MediaFoundation.SetQueueBehavior {

	// Properties
	case play  
	case pause  
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
WARNING: couldn't find address 0x9fcc0002a250 (0x7cc0002a250) in binary!
	0x82cc  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0xfafc0002a228 (0x2fc0002a228) in binary!
	0xfaf8  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x9f9c0002a200 (0x79c0002a200) in binary!
	0x829c  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x9f840002a1d8 (0x7840002a1d8) in binary!
	0x8284  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0xfab40002a1b0 (0x2b40002a1b0) in binary!
	0xfab0  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x9f540002a188 (0x7540002a188) in binary!
	0x8254  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x4dcfff79728  @objc VideoUserAction.(null) <stripped>
	0x1acfff790b0  @objc VideoUserAction.ˇPLâˇËßÇ	 <stripped>
	0x3940002a190  @objc VideoUserAction.âÔËπÑ	 <stripped>
WARNING: couldn't find address 0x2a18cfff855a0 (0x18cfff855a0) in binary!
	0x18000000c  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0xa54400029f58 (0x54400029f58) in binary!
	0x128000000c  @objc VideoUserAction.(null) <stripped>
WARNING: couldn't find address 0xa50c0002a318 (0x50c0002a318) in binary!
	0x9eb8  @objc VideoUserAction.(null) <stripped>

	// Swift methods
	0x1caa0  func VideoUserAction.identifier.getter // getter 
	0x1cc20  func VideoUserAction.type.getter // getter 
	0x1cd30  func VideoUserAction.timeStamp.getter // getter 
	0x1cea0  func VideoUserAction.options.getter // getter 
	0x1d000  func VideoUserAction.source.getter // getter 
	0x1d130  func VideoUserAction.sourceID.getter // getter 
	0x1d280  class func VideoUserAction.__allocating_init(identifier:type:options:) // init 
 }

 class MediaFoundation.PlayerViewControllerBehavior : AVMusicAppBehavior /System/Library/Frameworks/AVKit.framework/AVKit {

	// Properties
	var delegate : PlayerViewControllerBehaviorDelegate
	var onGoingJumpToTimeInfo : JumpToTimeInfo
	let reporter : EventReporting

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x94b40002a240 (0x4b40002a240) in binary!
	0x94a8  @objc PlayerViewControllerBehavior.(null) <stripped>
WARNING: couldn't find address 0xfb540002a218 (0x3540002a218) in binary!
	0x8304  @objc PlayerViewControllerBehavior.(null) <stripped>
WARNING: couldn't find address 0x9fec0002a278 (0x7ec0002a278) in binary!
	0x9478  @objc PlayerViewControllerBehavior.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x23cfff79a80  @objc PlayerViewControllerBehavior.(null) <stripped>
	0x214fff79c18  @objc PlayerViewControllerBehavior.ΩË˛ˇˇ∫ò <stripped>
	0x1ecfff79d00  @objc PlayerViewControllerBehavior. <stripped>

	// Swift methods
	0x1f300  func <stripped> // method 
	0x1f3b0  func <stripped> // method 
 }

 struct MediaFoundation.JumpToTimeInfo {

	// Properties
	let identifier : String // +0x0
	let startTime : Double? // +0x10
 }

 class MediaFoundation.PlayerFSM : _SwiftObject /usr/lib/swift/libswiftCore.dylib, StateProviding {

	// Properties
	var delegate : StateProvidingDelegate
	var states : State
	let controller : FSMController

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x93940002a190 (0x3940002a190) in binary!
	0x9ef0  @objc PlayerFSM.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff86b50  @objc PlayerFSM.(null) <stripped>

	// Swift methods
	0x23080  class func PlayerFSM.__allocating_init(controller:) // init 
 }

 class MediaFoundation.JumpToTimeState : State {

	// Properties
	var targetTime : Double
	var metadata : UserActionMetadata
	var initialLoadingShouldPlay : Bool?
	var playbackDidStall : Bool
	var jumpToTimeInfo : JumpToTimeInfo
	var suppressed : Bool

	// Swift methods
	0x2bea0  func JumpToTimeState.targetTime.getter // getter 
	0x2c010  func JumpToTimeState.metadata.getter // getter 
	0x2c100  func JumpToTimeState.initialLoadingShouldPlay.getter // getter 
	0x2c130  class func JumpToTimeState.__allocating_init(time:currentTime:suppressed:initialLoadingShouldPlay:metadata:) // init 
 }

 struct MediaFoundation.JumpToTimeInfo {

	// Properties
	let start : Double // +0x0
	let end : Double // +0x8
 }

 struct MediaFoundation.UserActionMetadata {

	// Properties
	let identifier : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let completion :  first-element-marker  // +0x10
	let mode : Mode // +0x20
	let whileIdle : Bool // +0x21
	let shouldTimeout : Bool // +0x22
 }

 enum MediaFoundation.Mode {

	// Properties
	case active  
	case passive  
 }

 enum MediaFoundation.KVOChange {

	// Properties
	case previous : A?
	case current : A?
 }

 enum MediaFoundation.PlayerObserverError {

	// Properties
	case itemFailedToLoadWithMissingAVError  
	case itemFailedToPlayToEndWithMissingAVError  
 }

 struct MediaFoundation.AVPlayerSeekToTimeCompletedUserInfoKey { }

 class MediaFoundation.PlayerObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_eventStream : 5∆ // +0x0
	let player : AVQueuePlayer // +0x0
	let queue : OS_dispatch_queue // +0x0
	let reporter : EventReporting // +0x0
	let configuration : PlayerPeriodicObservationConfiguration // +0x0
	var observations : Observations // +0x0

	// Swift methods
	0x2e4b0  class func PlayerObserver.__allocating_init(player:timeInterval:queue:reporter:) // init 
 }

 struct MediaFoundation.Observations {

	// Properties
	let rawValue : Int // +0x0
 }

 class MediaFoundation.PlayerPeriodicTimeSubscription {
 struct MediaFoundation.PlayerPeriodicObservationConfiguration {

	// Properties
	let timeInterval : Double // +0x0
	let queue : OS_dispatch_queue // +0x8
 }

 struct MediaFoundation.PlayerPeriodicTimePublisher {

	// Properties
	let player : AVPlayer // +0x0
	let configuration : PlayerPeriodicObservationConfiguration // +0x8
 }

 class MediaFoundation.PausedState : TransportableState {

	// Properties
	var metadata : UserActionMetadata
	var playbackDidStopWasProcessed : Bool
	var signalOnEnter : Bool
	let fadeOut : Double
	let suppressed : Bool

	// Swift methods
	0x37fd0  class func PausedState.__allocating_init(fadeOut:suppressed:metadata:) // init 
 }

 class MediaFoundation.SeekingState : State {

	// Properties
	var startTime : Double?
	var metadata : UserActionMetadata

	// Swift methods
	0x39150  func SeekingState.startTime.getter // getter 
	0x392c0  func SeekingState.metadata.getter // getter 
	0x39350  class func SeekingState.__allocating_init(startTime:metadata:) // init 
 }

 class MediaFoundation.ChangingQueueState : State {

	// Properties
	var delayedActionWhenReady : UserEvent
	var initialLoadFailure : Bool
	var initialLoadShouldPlay : Bool

	// Swift methods
	0x3a2a0  class func ChangingQueueState.__allocating_init(delayedActionWhenReady:initialLoadFailure:initialLoadShouldPlay:) // init 
 }

 class MediaFoundation.ResettingQueueState : ChangingQueueState {

	// Properties
	let keepCurrentItem : Bool

	// Swift methods
	0x3b6d0  class func ResettingQueueState.__allocating_init(keepCurrentItem:delayedActionWhenReady:initialLoadFailure:initialLoadShouldPlay:) // init 
 }

 class MediaFoundation.ChangingCurrentItemState : ChangingQueueState {

	// Properties
	let items : [MFQueuePlayerItem]

	// Swift methods
	0x3bb90  class func ChangingCurrentItemState.__allocating_init(items:delayedActionWhenReady:initialLoadFailure:initialLoadShouldPlay:) // init 
 }

 class MediaFoundation.RouteMetadata : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let isAirplay : Bool
	let routeDescription : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x80fe00029fe0 (0xfe00029fe0) in binary!
	0x9dd8  @objc RouteMetadata.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffb8cd8  @objc RouteMetadata.(null) <stripped>

	// Swift methods
	0x3bf70  class func RouteMetadata.__allocating_init(route:) // init 
	0x3c060  class func RouteMetadata.__allocating_init() // init 
 }

 struct MediaFoundation.MediaServicesInterruptionPayload {

	// Properties
	let item : MFQueuePlayerItem // +0x0
	let time : Double // +0x8
 }

 enum MediaFoundation.SystemEvent {

	// Properties
	case beginInterruption : EventTime
	case endResumableInterruption : EventTime
	case endNonResumableInterruption : EventTime
	case routeChanged : RouteMetadata
	case screenRecordingChanged : EventTime
	case beginMediaServicesInterruption : MediaServicesInterruptionPayload
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
	0x41190  class func EndOfQueueState.__allocating_init(reason:) // init 
 }

 class MediaFoundation.TransitionState : State {

	// Properties
	let startItem : MFPlayerItem?
	let steps : Int
	let metadata : UserActionMetadata

	// Swift methods
	0x41860  class func TransitionState.__allocating_init(startItem:steps:metadata:) // init 
 }

 class MediaFoundation.NaturalTransitionState : TransitionState { }

 class MediaFoundation.FailedTransitionState : TransitionState { }

 class MediaFoundation.FailedInitialLoadingTransitionState : FailedTransitionState {

	// Properties
	let play : Bool

	// Swift methods
	0x434d0  class func FailedInitialLoadingTransitionState.__allocating_init(startItem:play:steps:metadata:) // init 
 }

 class MediaFoundation.SkippingTransitionState : TransitionState {

	// Properties
	var deferredUserEvent : UserEvent

	// Swift methods
	0x43fe0  func SkippingTransitionState.deferredUserEvent.getter // getter 
	0x44090  func SkippingTransitionState.deferredUserEvent.setter // setter 
	0x44150  func SkippingTransitionState.deferredUserEvent.modify // modifyCoroutine 
 }

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
	case didEndQueueAssetLoading : ßª
	case queueAssetLoadingInfo : (description: String)
	case itemLoading : (description: String)
	case itemBuffering : (description: String)
	case didStartCompletionMonitoring : UserEvent
	case didEndCompletionMonitoring : UserEvent
	case didUpdateMonitoredEvent : UserEvent
	case playbackStack : (description: String)
	case playerController : (description: String)
	case internalPlayerControllerState : (description: String)
	case internalPlaybackStack : (description: String)
	case error : (description: String)
	case didStartBackgroundTask : (description: String)
	case backgroundTask : (description: String)
	case didEndBackgroundTask : (description: String)
	case avkit : (description: String)
 }

 class MediaFoundation.InternalPlaybackStackController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : PlaybackStackControllerDelegate
	var currentQueueControllerItem : MFQueuePlayerItem?
	var loadedQueueControllerItems : [MFQueuePlayerItem]
	var maximumPlayerQueueLength : Int
	let playerController : PlayerController
	let queueAssetLoader : QueueAssetLoading
	let queueController : MFQueueControlling
	let reporter : EventReporting
	let errorController : MFErrorController
	let externalPlaybackController : MFExternalPlaybackController
	let backgroundTaskController : BackgroundTaskController
	var synchronizingToPlayer : Bool
	var currentQueueRestorationItem : MFQueuePlayerItem?
	var mediaServicesInterruptionData : MediaServicesInterruptionPayload
	var deferredPlaybackRateForNextSetQueue : Float?
	var $__lazy_storage_$_skipAggregator : Aggregator
	var skippingState : SkippingState
	var inFlightSkippingState : SkippingState

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9dc40002a060 (0x5c40002a060) in binary!
	0x28000000c  @objc InternalPlaybackStackController.(null) <stripped>

	// Swift methods
	0x4ae60  func InternalPlaybackStackController.delegate.getter // getter 
	0x4ae90  func InternalPlaybackStackController.delegate.setter // setter 
	0x4aee0  func InternalPlaybackStackController.delegate.modify // modifyCoroutine 
	0x4b010  func InternalPlaybackStackController.currentQueueControllerItem.getter // getter 
	0x4b040  func InternalPlaybackStackController.currentQueueControllerItem.setter // setter 
	0x4b080  func InternalPlaybackStackController.currentQueueControllerItem.modify // modifyCoroutine 
	0x4b0b0  func InternalPlaybackStackController.nextQueueItems.getter // getter 
	0x4b350  func InternalPlaybackStackController.loadedQueueControllerItems.getter // getter 
	0x4b380  func InternalPlaybackStackController.loadedQueueControllerItems.setter // setter 
	0x4b3c0  func InternalPlaybackStackController.loadedQueueControllerItems.modify // modifyCoroutine 
	0x4b440  func InternalPlaybackStackController.maximumPlayerQueueLength.getter // getter 
	0x4b470  func InternalPlaybackStackController.maximumPlayerQueueLength.setter // setter 
	0x4b4d0  func InternalPlaybackStackController.maximumPlayerQueueLength.modify // modifyCoroutine 
	0x4b5d0  func InternalPlaybackStackController.deferredPlaybackRateForNextSetQueue.getter // getter 
	0x4b610  func InternalPlaybackStackController.deferredPlaybackRateForNextSetQueue.setter // setter 
	0x4b660  func InternalPlaybackStackController.deferredPlaybackRateForNextSetQueue.modify // modifyCoroutine 
	0x4b6a0  class func InternalPlaybackStackController.__allocating_init(playerController:assetLoader:queueController:errorController:externalPlaybackController:reporter:backgroundTaskController:) // init 
	0x4b800  func InternalPlaybackStackController.reset() // method 
	0x4d040  func InternalPlaybackStackController.isInRestorationState.getter // getter 
	0x4d060  func InternalPlaybackStackController.canSetQueueFromRestorationState.getter // getter 
	0x4d0a0  func InternalPlaybackStackController.cancelRestoration() // method 
	0x4d0c0  func InternalPlaybackStackController.restoreQueue() // method 
	0x4d430  func InternalPlaybackStackController.setQueueWithInitialItem(_:andPlay:identifier:completion:) // method 
	0x4ec60  func InternalPlaybackStackController.reloadItems(keepingCurrentItem:) // method 
	0x4ec90  func InternalPlaybackStackController.resetQueue(keepingCurrentItem:) // method 
	0x4ef80  func InternalPlaybackStackController.reloadQueue(includingCurrentItem:) // method 
	0x50f80  func InternalPlaybackStackController.skip(direction:identifier:completion:) // method 
	0x51fb0  func InternalPlaybackStackController.skipAggregator.getter // getter 
	0x52340  func InternalPlaybackStackController.performSkip(with:) // method 
	0x53260  func InternalPlaybackStackController.skip(from:distance:identifier:completion:) // method 
	0x544d0  func InternalPlaybackStackController.stateDidChange(from:to:) // method 
	0x54530  func InternalPlaybackStackController.processEvent(_:) // method 
	0x56ce0  func InternalPlaybackStackController.userActionDidBegin(_:) // method 
	0x56d40  func InternalPlaybackStackController.userActionDidEnd(_:error:) // method 
	0x56da0  func InternalPlaybackStackController.resolveItemPlaybackFailureEvent(_:steps:) // method 
 }

 enum MediaFoundation.AssetLoadingContext {

	// Properties
	case skip : (identifier: String)
	case reload  
	case reloadCurrentItem  
	case queueEnd  
	case errorResolution  
 }

 struct MediaFoundation.SkippingState {

	// Properties
	var skipEvents : UserEvent // +0x0
 }

 class MediaFoundation.BackgroundTask : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var identifier : UIBackgroundTaskIdentifier
	let category : Category
	var references : Int

	// Swift methods
	0x5e440  class func BackgroundTask.__allocating_init(category:identifier:) // init 
 }

 enum MediaFoundation.Category {

	// Properties
	case assetLoading  
	case mediaServicesSetup  
 }

 class MediaFoundation.BackgroundTaskController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let provider : BackgroundTaskProvider
	let reporter : EventReporting
	var tasks : BackgroundTask

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9dac0002a048 (0x5ac0002a048) in binary!
	0x9238  @objc BackgroundTaskController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x1cfffd2a50  @objc BackgroundTaskController.(null) <stripped>

	// Swift methods
	0x5ea40  class func BackgroundTaskController.__allocating_init(provider:reporter:) // init 
	0x5eb10  func BackgroundTaskController.beginBackgroundTask(category:) // method 
	0x5ff10  func BackgroundTaskController.endBackgroundTask(category:) // method 
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
	var supressed : Bool

	// Swift methods
	0x616c0  func InitialLoadingState.play.getter // getter 
	0x616f0  func InitialLoadingState.shouldPlay.getter // getter 
	0x61700  class func InitialLoadingState.__allocating_init(with:play:supressed:metadata:) // init 
 }

 class MediaFoundation.InitialPreLoadingState : State {

	// Properties
	var metadata : UserActionMetadata
	var rate : Float
	var item : MFQueuePlayerItem?

	// Swift methods
	0x62ca0  func InitialPreLoadingState.rate.getter // getter 
	0x62d40  func InitialPreLoadingState.item.getter // getter 
	0x62d70  class func InitialPreLoadingState.__allocating_init(with:rate:metadata:) // init 
 }

 class MediaFoundation.InitiatingPlaybackState : State {

	// Properties
	let metadata : UserActionMetadata
	let fromInterruption : Bool

	// Swift methods
	0x63c00  class func InitiatingPlaybackState.__allocating_init(fromInterruption:metadata:) // init 
 }

 enum MediaFoundation.WaitingReason {

	// Properties
	case toMinimizeStalls  
	case evaluatingBufferingRate  
	case noAVItemToPlay  
	case nonSpecifiedAVReason  
	case nonLoadableItemInQueue  
 }

 enum MediaFoundation.RateScannerType {

	// Properties
	case audio : Direction
	case video : Direction
 }

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

 class MediaFoundation.RateScanningSubscription {
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
	0x68fd0  class func MediaServicesInterruptedState.__allocating_init(event:interruptedState:) // init 
 }

 class MediaFoundation.MediaServicesResumingState : PausedState {

	// Properties
	let event : SystemEvent

	// Swift methods
	0x693b0  class func MediaServicesResumingState.__allocating_init(event:) // init 
 }

 class MediaFoundation.StallingState : State { }

 class MediaFoundation.InternalPlayerController : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PlaybackInformationProviding,  PlayerSettable {

	// Properties
	var delegate : InternalPlayerControllerDelegate
	var targetRate : Float
	var targetStartTime : Double?
	var player : Player
	var reporter : EventReporting
	let queue : OS_dispatch_queue
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scanningSubscription :  empty-list 
	var lastFullyDownloadedPlayerItem : MFPlayerItem?
	var reportedResumePlaybackTime : Double?
	var preSetQueueItem : MFQueuePlayerItem?
	var pendingSeek : PendingSeekData

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x92240002a020 (0x2240002a020) in binary!
	0x9d80  @objc InternalPlayerController.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x744fffd9670  @objc InternalPlayerController.(null) <stripped>

	// Swift methods
	0x6b1e0  class func InternalPlayerController.__allocating_init(player:reporter:queue:) // init 
 }

 struct MediaFoundation.PendingSeekData {

	// Properties
	let time : Double // +0x0
	let identifier : String // +0x8
 }

 enum MediaFoundation.PlayerQueueProgress {

	// Properties
	case unlocked  
	case locked  
 }

 enum MediaFoundation.Direction { }

 class MediaFoundation.ScanningState : State {

	// Properties
	let direction : Direction
	let resumeRate : Float
	var metadata : UserActionMetadata

	// Swift methods
	0x78d40  func ScanningState.metadata.getter // getter 
	0x78b60  class func ScanningState.__allocating_init(direction:resumeRate:metadata:) // init 
 }

 class MediaFoundation.TransportableState : State { }

 class MediaFoundation.InterruptedState : PausedState {

	// Properties
	let interruptedState : State
	let interruptionEvent : SystemEvent

	// Swift methods
	0x7abc0  class func InterruptedState.__allocating_init(interruptionEvent:interruptedState:) // init 
 }

 enum MediaFoundation.PlayerState { }

 enum MediaFoundation.UserActionType { }

 enum MediaFoundation.UserActionSource { }

 enum MediaFoundation.BufferState { }

 enum MediaFoundation.ErrorResolution { }

 enum MediaFoundation.ItemRequestReason { }

 enum MediaFoundation.ItemTransition { }

 enum MediaFoundation.PlaybackTimeChangeReason { }

 enum MediaFoundation.ItemChangeSource { }

 class MediaFoundation.Description : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9cac00029f38 (0x4ac00029f38) in binary!
	0x278000000c  @objc Description.(null) <stripped>

	// Swift methods
	0x7c880  class func <stripped> // method 
	0x7c8b0  class func <stripped> // method 
	0x7c990  class func <stripped> // method 
	0x7caa0  class func <stripped> // method 
	0x7cbe0  class func <stripped> // method 
	0x7cdc0  class func <stripped> // method 
	0x7ce30  class func <stripped> // method 
	0x7cf00  class func <stripped> // method 
	0x7d020  class func <stripped> // method 
 }

 class MediaFoundation.AudioSessionConfiguration : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var category : Category
	var mode : Mode
	var routeSharingPolicy : RouteSharingPolicy
	var options : CategoryOptions

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xea2400029e80 (0x22400029e80) in binary!
	0x9cd0  @objc AudioSessionConfiguration.(null) <stripped>
WARNING: couldn't find address 0x915c00029ec8 (0x15c00029ec8) in binary!
	0x18000000c  @objc AudioSessionConfiguration.(null) <stripped>
WARNING: couldn't find address 0x9cac00029f38 (0x4ac00029f38) in binary!
	0x278000000c  @objc AudioSessionConfiguration.(null) <stripped>

	// Swift methods
	0x7d190  func <stripped> // getter 
	0x7d1b0  func <stripped> // setter 
	0x7d1d0  func <stripped> // modifyCoroutine 
	0x7d280  func <stripped> // getter 
	0x7d2d0  func <stripped> // setter 
	0x7d330  func <stripped> // modifyCoroutine 
	0x7d3d0  func <stripped> // getter 
	0x7d3f0  func <stripped> // setter 
	0x7d410  func <stripped> // modifyCoroutine 
	0x7d4c0  func <stripped> // getter 
	0x7d510  func <stripped> // setter 
	0x7d570  func <stripped> // modifyCoroutine 
	0x7d5b0  class func AudioSessionConfiguration.__allocating_init(category:mode:routeSharingPolicy:options:) // init 
 }

 enum MediaFoundation.PlaybackStackErrorCode { }

 enum MediaFoundation.ExternalPlaybackType { }

 class MediaFoundation.MFPlaybackStackControllerImplementation : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var delegate : weak MFPlaybackStackControllerDelegate? // +0x8 (0x8)
	let internalStack : PlaybackStackController // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xf7dc00029e30 (0x7dc00029e30) in binary!
	0xf7d8  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x9c7c00029e08 (0x47c00029e08) in binary!
	0x7f7c  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xea0c00029de0 (0x20c00029de0) in binary!
	0xf7a0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xf79400029dc0 (0x79400029dc0) in binary!
	0xf788  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xa29c00029fc8 (0x29c00029fc8) in binary!
	0xe9f2  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xe9e600029d80 (0x1e600029d80) in binary!
	0xe9da  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x9c0400029d58 (0x40400029d58) in binary!
	0x9bf8  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x9bec00029d38 (0x3ec00029d38) in binary!
	0x9be0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xe9a600029d10 (0x1a600029d10) in binary!
	0x7eea  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x905400029ce8 (0x5400029ce8) in binary!
	0x9048  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xe98c00029cc8 (0x18c00029cc8) in binary!
	0xe9a0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xe9a600029ca0 (0x1a600029ca0) in binary!
	0xe9b8  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
	0xe9c0  ItemBufferProducer.resumeProduction(direction:completion:)
WARNING: couldn't find address 0xe97600029c50 (0x17600029c50) in binary!
	0xe96a  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xe97c00029c28 (0x17c00029c28) in binary!
	0xe952  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xe96400029c00 (0x16400029c00) in binary!
	0xe978  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xe97e00029bd8 (0x17e00029bd8) in binary!
	0x9b08  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x9afc00029d98 (0x2fc00029d98) in binary!
	0x7dfc  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x9b3c0002a098 (0x33c0002a098) in binary!
	0x9ad8  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x8f6400029cd0 (0x76400029cd0) in binary!
	0x58000000c  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xa11c00029ff0 (0x11c00029ff0) in binary!
	0xeeb8  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xa10400029b40 (0x10400029b40) in binary!
	0xa0f8  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x81ec00029b18 (0x1ec00029b18) in binary!
	0x48000000c  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x7d780002a018 (0x5780002a018) in binary!
	0x9ab8  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x8eec00029ce8 (0x6ec00029ce8) in binary!
	0x9a48  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x4bcffff3558  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
	0x55c00029aa0  @objc MFPlaybackStackControllerImplementation. <stripped>
WARNING: couldn't find address 0x29ca4ffffc708 (0x4a4ffffc708) in binary!
	0x0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x46e756f4661  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x4f525020206e6f69 (0x20206e6f69) in binary!
	0x6756f466169  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xa312d6e6f6974 (0x12d6e6f6974) in binary!
	0x0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x3f800000 (0x3f800000) in binary!
	0x7697461646e  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x17463416d65  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x1004300000073 (0x4300000073) in binary!
	0x100000000  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x1100000000 (0x1100000000) in binary!
	0x0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0xfffffff4 (0xfffffff4) in binary!
	0x66f6974704f  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x6f6964754156414e (0x4754156414e) in binary!
	0x26f67657461  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find offset 0xffffffc8 in binary!
WARNING: couldn't find offset 0xffffffc8 in binary!
WARNING: couldn't find address 0x736e6f697470 (0x36e6f697470) in binary!
	0x0  @objc MFPlaybackStackControllerImplementation.(null) <stripped>
WARNING: couldn't find address 0x1000126a0 (0x1000126a0) in binary!
	0x36574756f52  @objc MFPlaybackStackControllerImplementation.(null) <stripped>

	// Swift methods
	0x7dba0  func <stripped> // getter 
	0x7dc20  func <stripped> // setter 
	0x7dcb0  func <stripped> // modifyCoroutine 
	0x7dd60  func <stripped> // getter 
	0x7dde0  func <stripped> // setter 
	0x7dea0  func <stripped> // modifyCoroutine 
	0x7df70  class func MFPlaybackStackControllerImplementation.__allocating_init(queueController:assetLoader:errorController:externalPlaybackController:leaseController:queue:) // init 
	0x7e770  func <stripped> // getter 
	0x7e7a0  func <stripped> // method 
	0x7e860  func <stripped> // method 
	0x7e8c0  func <stripped> // method 
	0x7ea20  func <stripped> // method 
	0x7ea60  func <stripped> // method 
	0x7ec20  func <stripped> // method 
	0x7ed50  func <stripped> // method 
	0x7ee20  func <stripped> // method 
	0x7f0a0  func <stripped> // method 
	0x7f270  func <stripped> // method 
	0x7f4f0  func <stripped> // method 
	0x7f760  func <stripped> // method 
	0x7f9d0  func <stripped> // method 
	0x7fc50  func <stripped> // method 
	0x7fec0  func <stripped> // method 
	0x80070  func <stripped> // method 
	0x80240  func <stripped> // method 
	0x80310  func <stripped> // getter 
	0x803b0  func <stripped> // getter 
	0x80840  func <stripped> // method 
	0x80880  func <stripped> // method 
	0x809e0  func <stripped> // getter 
	0x80a10  func <stripped> // method 
	0x80a40  func <stripped> // method 
 }

 class MediaFoundation.State : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x844f0  func State.willCallCompletion(for:) // method 
	0x84530  func State.callCompletionIfNeeded(for:) // method 
	0x83f30  func State.enter(stateMachine:) // method 
	0x84560  func State.exit(stateMachine:) // method 
	0x83fc0  func State.handle(_:stateMachine:) // method 
	0x845f0  func State.handle(_:stateMachine:) // method 
	0x84230  func State.handle(_:stateMachine:) // method 
	0x842e0  func State.handle(_:stateMachine:) // method 
	0x84670  func State.description.getter // getter 
	0x84690  class func State.__allocating_init() // init 
 }

 class MediaFoundation.EventTime : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var time : Double
	let avTime : Double
	let userSecondsSinceReferenceDate : Double
	let hostTime : CMTime
	let type : TimeType

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa11c00029ff0 (0x11c00029ff0) in binary!
	0xeeb8  @objc EventTime.(null) <stripped>
WARNING: couldn't find address 0xa10400029b40 (0x10400029b40) in binary!
	0xa0f8  @objc EventTime.(null) <stripped>
WARNING: couldn't find address 0x81ec00029b18 (0x1ec00029b18) in binary!
	0x48000000c  @objc EventTime.(null) <stripped>
WARNING: couldn't find address 0x7d780002a018 (0x5780002a018) in binary!
	0x9ab8  @objc EventTime.(null) <stripped>
WARNING: couldn't find address 0x8eec00029ce8 (0x6ec00029ce8) in binary!
	0x9a48  @objc EventTime.(null) <stripped>

	// Swift methods
	0x84870  func EventTime.time.getter // getter 
	0x847d0  class func EventTime.__allocating_init(timebase:time:avTime:) // init 
	0x849f0  func EventTime.setTime(_:) // method 
 }

 enum MediaFoundation.TimeType {

	// Properties
	case approximate  
	case accurate  
	case universal  
 }

 enum MediaFoundation.UserEvent {

	// Properties
	case prepareForSetQueue : UserActionMetadata
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
	case skip : UserActionMetadata
	case avKitSkip : Direction
 }

 class MediaFoundation.IdleState : State { }

 class MediaFoundation.EventReporter : _SwiftObject /usr/lib/swift/libswiftCore.dylib, EventReporting {

	// Properties
	var activeSubsystems : Subsystem
	var queue : OS_dispatch_queue

	// Swift methods
	0x89700  func EventReporter.setupReporting(subsystems:) // method 
	0x89790  func EventReporter.activeSubsystems.getter // getter 
	0x897d0  func EventReporter.activeSubsystems.setter // setter 
	0x89810  func EventReporter.activeSubsystems.modify // modifyCoroutine 
	0x88220  class func EventReporter.__allocating_init(queue:) // init 
	0x898f0  func EventReporter.report(event:) // method 
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
	let reporter : EventReporter
	let internalController : InternalPlaybackStackController
	let errorController : MFErrorController
	let backgroundTaskController : BackgroundTaskController
	var currentSetQueueIdentifier : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7d780002a018 (0x5780002a018) in binary!
	0x9ab8  @objc PlaybackStackController.(null) <stripped>
WARNING: couldn't find address 0x8eec00029ce8 (0x6ec00029ce8) in binary!
	0x9a48  @objc PlaybackStackController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x4bcffff3558  @objc PlaybackStackController.(null) <stripped>
	0x55c00029aa0  @objc PlaybackStackController. <stripped>

	// Swift methods
	0x8a090  class func PlaybackStackController.__allocating_init(queueController:assetLoader:errorController:externalPlaybackController:leaseController:queue:) // init 
	0x8b880  func PlaybackStackController.delegate.getter // getter 
	0x8b840  func PlaybackStackController.delegate.setter // setter 
	0x8b8a0  func PlaybackStackController.delegate.modify // modifyCoroutine 
	0x8b970  func PlaybackStackController.maximumPlayerQueueLength.getter // getter 
	0x8b990  func PlaybackStackController.maximumPlayerQueueLength.setter // setter 
	0x8b9b0  func PlaybackStackController.maximumPlayerQueueLength.modify // modifyCoroutine 
	0x8ba10  func PlaybackStackController.currentTime.getter // getter 
	0x8ba90  func PlaybackStackController.currentRate.getter // getter 
	0x8bb10  func PlaybackStackController.effectiveRate.getter // getter 
	0x8bb90  func PlaybackStackController.targetRate.getter // getter 
	0x8bc10  func PlaybackStackController.targetStartTime.getter // getter 
	0x8bc90  func PlaybackStackController.currentItem.getter // getter 
	0x8bcb0  func PlaybackStackController.nextItems.getter // getter 
	0x8bcd0  func PlaybackStackController.state.getter // getter 
	0x8bcf0  func PlaybackStackController.interruptedState.getter // getter 
	0x8bd10  func PlaybackStackController.currentItemTransition.getter // getter 
	0x8bd40  func PlaybackStackController.videoPlayerViewController.getter // getter 
	0x8bd80  func PlaybackStackController.shouldSkipJumpToItemStart(_:) // method 
	0x8be10  func PlaybackStackController.audioSession.getter // getter 
	0x8be50  func PlaybackStackController.setupReporting(subsystems:) // method 
	0x8be70  func PlaybackStackController.queueItem(for:) // method 
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
	let triggerEvent : PlayerEvent
	let playerItem : MFPlayerItem
	let initialLoadFailure : Bool
	let initialLoadShouldPlay : Bool
	let steps : Int

	// Swift methods
	0x8e8a0  class func ErrorResolutionState.__allocating_init(event:initialLoadFailure:initialLoadShouldPlay:steps:) // init 
 }

 struct MediaFoundation.SystemObserver {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_eventStream : ˇ™ // +0x0
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

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9a3400029cd0 (0x23400029cd0) in binary!
	0x8ec0  @objc UserEventsMonitor.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x4a4ffffc708  @objc UserEventsMonitor.(null) <stripped>

	// Swift methods
	0x920c0  class func UserEventsMonitor.__allocating_init(timeout:reporter:) // init 
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

 class MediaFoundation.UserEventCompletionMonitor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monitoredUserEvent : UserEvent
	var monitoredUserEventOverride : UserEvent
	var timer : OS_dispatch_source_timer?
	let timeout : Double
	var reporter : EventReporting

	// Swift methods
 }

 class MediaFoundation.Aggregator {
 enum MediaFoundation.CoordinatorEvent {

	// Properties
	case synchronizeQueueItemsToPlayer : (items: [MFQueuePlayerItem])
	case resetQueue : (keepCurrentItem: Bool)
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

 class __C.CMTimebase {
 enum __C.TimeControlStatus { }

 enum __C.Status { }

 enum __C.ActionAtItemEnd { }

 struct __C.CMTime {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : €ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timescale : Õÿ
	var flags : CMTimeFlags
WARNING: couldn't find address 0x0 (0x0) in binary!
	var epoch : €ÿ
 }

 enum __C.AVPlayerExternalPlaybackType { }

 struct __C.AVAudioSessionSilenceOutputOptions {

	// Properties
	let rawValue : UInt
 }

 class __C.CMClock {
 struct __C.UIBackgroundTaskIdentifier {

	// Properties
	let rawValue : Int
 }

 enum __C.Status { }

 struct __C.CMTimeRange {

	// Properties
	var start : CMTime
	var duration : CMTime
 }

 enum __C.AVMusicAppBehaviorContextUserAction { }

 struct __C.CMTimeFlags {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : ÿ
 }

 enum __C.Code { }
