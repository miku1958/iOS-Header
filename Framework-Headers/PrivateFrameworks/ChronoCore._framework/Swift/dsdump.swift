 protocol ChronoCore.AccountStoreInterface // 2 requirements
 {
	// method
	// method
 }
 protocol ChronoCore.TaskHandling // 1 requirements
 {
	// method
 }
 protocol ChronoCore.TaskContextProvider // 5 requirements
 {
	// class associated type access function
	// method
	// method
	// method
	// method
 }
 protocol ChronoCore.ApplicationProcessMonitoring // 2 requirements
 {
	// method
	// method
 }
 protocol ChronoCore.ActivityScheduling // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol ChronoCore.KeybagStateProviding // 3 requirements
 {
	// getter
	// getter
	// method
 }
 protocol ChronoCore.PlaceholderStoring // 1 requirements
 {
	// method
 }
 protocol ChronoCore.ActivityContext // 2 requirements
 {
	// getter
	// getter
 }
 protocol ChronoCore.ActivityContextProviding // 2 requirements
 {
	// method
	// method
 }
 protocol ChronoCore.ActivityServicing // 4 requirements
 {
	// class base protocol
	// method
	// method
	// method
 }
 protocol ChronoCore.KeybagMonitoring // 4 requirements
 {
	// getter
	// getter
	// getter
	// getter
 }
 protocol ChronoCore.TimelineToolServicing // 2 requirements
 {
	// method
	// method
 }
 protocol ChronoCore.DescriptorServicing // 7 requirements
 {
	// getter
	// getter
	// getter
	// method
	// method
	// method
	// method
 }
 protocol ChronoCore.StateCaptureManaging // 5 requirements
 {
	// getter
	// method
	// method
	// method
	// method
 }
 protocol ChronoCore.StateCapturing // 2 requirements
 {
	// getter
	// method
 }
 protocol ChronoCore.StateHierarchyCapturing // 2 requirements
 {
	// class base protocol
	// method
 }
 protocol ChronoCore.StateCaptureInvalidatable // 1 requirements
 {
	// method
 }
 protocol ChronoCore.WidgetConfiguratonManaging // 2 requirements
 {
	// class base protocol
	// class init
 }
 protocol ChronoCore.ClientConfigurationModel // 9 requirements
 {
	// class base protocol
	// getter
	// getter
	// getter
	// getter
	// method
	// method
	// method
	// method
 }
 protocol ChronoCore.XPCServiceProviding // 1 requirements
 {
	// method
 }
 protocol ChronoCore.ProcessMonitoring // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol ChronoCore.PlaceholderServicing // 2 requirements
 {
	// class base protocol
	// method
 }
 protocol ChronoCore.LocationGraceRegistryStore // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol ChronoCore.LocationInUseAssertion // 2 requirements
 {
	// class method
	// method
 }
 protocol ChronoCore.LocationAuthorizationMonitorDelegate // 1 requirements
 {
	// method
 }
 protocol ChronoCore.LocationAuthorizationMonitor // 3 requirements
 {
	// class method
	// getter
	// method
 }
 protocol ChronoCore.DuetWidgetViewProviderInterface // 2 requirements
 {
	// method
	// method
 }
 protocol ChronoCore.DuetWidgetViewRecording // 1 requirements
 {
	// method
 }
 protocol ChronoCore.LockProtocol // 6 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
 }

 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : Î÷
 }

 enum __C.BSSqliteDatabaseConnectionDataProtectionClass { }

 struct __C.FileAttributeKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.RBSProcessStateValues {

	// Properties
	let rawValue : UInt
 }

 struct __C.os_state_data_s {

	// Properties
	var osd_type : os_state_data_type_t
	var __Anonymous_field1 : __Unnamed_union___Anonymous_field1
	var osd_decoder : os_state_data_decoder_s
WARNING: couldn't find address 0x0 (0x0) in binary!
	var osd_title : ˘’
 }

 struct __C.LaunchOptionsKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ´ 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ´ 
 }

 struct __C.os_state_data_decoder_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var osdd_library : ˘’
WARNING: couldn't find address 0x0 (0x0) in binary!
	var osdd_type : ˘’
 }

 struct __C.__Unnamed_union___Anonymous_field1 { }

 struct __C.os_state_data_type_t {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawValue : Î÷
 }

 class ChronoCore.ActivityScheduler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let targetQueue : OS_dispatch_queue
	let lock : UnfairLock
	let service : ActivityServicing
WARNING: couldn't find address 0x0 (0x0) in binary!
	var activityStore :  empty-list 

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6d9c0002a020 (0x59c0002a020) in binary!
	0x6d88  @objc ActivityScheduler.(null) <stripped>
WARNING: couldn't find address 0x6d8400029f38 (0x58400029f38) in binary!
	0x28000000c  @objc ActivityScheduler.(null) <stripped>
WARNING: couldn't find address 0x6d6400029f80 (0x56400029f80) in binary!
	0x6d60  @objc ActivityScheduler.(null) <stripped>

	// Swift methods
	0x3f20  func <stripped> // method 
	0x40a0  func <stripped> // method 
	0x40c0  func <stripped> // method 
	0x4c50  func <stripped> // method 
 }

 class ChronoCore.ActivityMetadata : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var state : State
	let activity : Activity
	let context : ActivityContext

	// Swift methods
 }

 enum ChronoCore.State {

	// Properties
	case undefined  
	case start  
	case scheduled  
	case executing  
 }

 class ChronoCore.AccountsChangedNotification : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subject : À
	var queue : OS_dispatch_queue
	var _queue_iTunesAccount : String?
	var _queue_iCloudAccount : String?
	var _accountStore : AccountStoreInterface
	var _observerToken : NSObject?
	var downstreamCount : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var upstream : Ø 

	// Swift methods
	0x6f90  func <stripped> // getter 
	0x7560  func <stripped> // method 
	0x7710  func <stripped> // method 
 }

 class ChronoCore.CHDMonotonicTimer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var timer : CHDMonotonicTimer? // +0x0
	let lock : UnfairLock // +0x0
	var invalidated : Bool // +0x8e50
	let time : CHDMonotonicTime // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interval : q‘ // +0x0

	// Swift methods
 }

 struct ChronoCore.CHDMonotonicTime {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : ≥‘ // +0x0
 }

 class ChronoCore.TaskService {
 struct ChronoCore.TaskCancellable {

	// Properties
	let identifier : String // +0x0
	let cancelAction : () // +0x10
 }

 enum ChronoCore.TaskError {

	// Properties
	case cancelled  
	case nowWorkItemConfigured  
 }

 class ChronoCore.DataProtectionMonitor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _maxUnlockedProtectionLevel : √∆ // +0x0 (0x0)
	var keybagMonitor : KeybagMonitoring // +0xb0000 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var token : Ø  // +0x0 (0x8)

	// Swift methods
	0x18120  func <stripped> // getter 
 }

 class ChronoCore.ProcessMonitor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : OS_dispatch_queue
	let lock : UnfairLock
	var processMonitor : ApplicationProcessMonitoring
	let configurationService : ClientConfigurationModel
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : 1»
	var knownExtensionBundleIdentifiers : Set<String>
	var knownApplicationBundleIdentifiers : Set<String>
WARNING: couldn't find address 0x0 (0x0) in binary!
	var runningBundleIdentifiersToPIDs : String
	var runningBundleIdentifiersWithVisibleScenes : Set<String>
	var runningBundleIdentifiersWithExemptions : Set<String>
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bundleIdentifiersToSuspensionObservers :  empty-list 

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6d6400029f80 (0x56400029f80) in binary!
	0x6d60  @objc ProcessMonitor.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x6f4fff8ae70  @objc ProcessMonitor.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.Activity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : ç« // +0xb0000 (0x0)
	let name : String // +0x5 (0x10)
	let widgetId : String? // +0x17 (0x10)
	let containingAppIdentifier : String? // +0x65745f5f (0x10)
	let schedulingConfiguration : SchedulingConfiguration // +0x0 (0x0)
	let schedulingOptions : SchedulingOptions // +0x45545f5f (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let effectivePowerlogWakeReason : iÃ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let effectivePowerlogWakeCost : Ã // +0x2180 (0x0)
	let activationHandler : Activity // +0x906d7 (0x10)
	let logDigest : String // +0x2180 (0x10)

	// Swift methods
	0x1edd0  func <stripped> // getter 
 }

 enum ChronoCore.SubscriptionStatus {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case subscribed : ≥ƒ
	case awaitingSubscription  
	case terminal  
 }

 class ChronoCore.ToolServicesServer : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let timelineService : TimelineToolServicing
	let taskService : TaskHandling
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionService : 1»
	let descriptorService : DescriptorServicing
	let stateCaptureService : StateCaptureManaging
	let keybagMonitor : KeybagMonitoring
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list 
	var connectionListener : BSServiceConnectionListener?
	var clientConnections : Set<BSServiceConnection>
	var queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6d4400029f60 (0x54400029f60) in binary!
	0x6d40  @objc ToolServicesServer.(null) <stripped>
WARNING: couldn't find address 0xd8000000c (0xd8000000c) in binary!
	0x644fff8baf0  @objc ToolServicesServer.(null) <stripped>

	// Swift methods
	0x1f980  func <stripped> // method 
 }

 class ChronoCore.FixedKeybagStateProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lockState : c√ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _hasUnlockedSinceBoot : U√ // +0x0 (0x0)

	// Swift methods
	0x23bd0  func <stripped> // getter 
	0x23c30  func <stripped> // getter 
	0x23c90  func <stripped> // method 
 }

 class ChronoCore.LocalActivityContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startAfter : w¿ // +0x73635f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startBefore : w¿ // +0x67 (0x0)
	let targetQueue : OS_dispatch_queue // +0x45545f5f (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startHandler :  empty-list  // +0x0 (0x10)

	// Swift methods
 }

 class ChronoCore.LocalActivityService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x24800  func <stripped> // method 
 }

 class ChronoCore.MobileTimelineReloadStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var widgetEnvironment : …« // +0x10 (0x10)
	let configurationService : ClientConfigurationModel // +0x20 (0x28)
	let taskService : TaskHandling // +0x48 (0x28)
	let locationService : LocationService // +0x70 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : #« // +0x78 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheManager : C∆ // +0xa0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : ´¿ // +0x0 (0x0)
	let isPreview : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tasks :  empty-list  // +0x0 (0x8)

	// Swift methods
	0x251e0  func <stripped> // method 
	0x26e70  func <stripped> // method 
	0x27030  func <stripped> // method 
 }

 class ChronoCore.KeybagMonitor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let firstUnlockSubject : 9¡
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lockStateSubject : ¡
	var keybagStateProvider : KeybagStateProviding
	var queue_currentLockState : KeybagLockState
	var queue_unlockedSinceBoot : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var notifyToken : Ø 
	var queue : OS_dispatch_queue
	var publishQueue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6c7c00029e98 (0x47c00029e98) in binary!
	0x6c78  @objc KeybagMonitor.(null) <stripped>
WARNING: couldn't find address 0x6c6c00029e20 (0x46c00029e20) in binary!
	0x38000000c  @objc KeybagMonitor.(null) <stripped>
WARNING: couldn't find address 0x6c5400029ed8 (0x45400029ed8) in binary!
	0x6c40  @objc KeybagMonitor.(null) <stripped>

	// Swift methods
	0x28fe0  func <stripped> // getter 
	0x29160  func <stripped> // getter 
	0x296e0  func <stripped> // method 
	0x29cb0  func <stripped> // method 
 }

 class ChronoCore.MobilePlaceholderReloadStrategy {
 enum ChronoCore.KeybagLockState {

	// Properties
	case invalid  
	case unlocked  
	case locked  
	case locking  
	case disabled  
 }

 class ChronoCore.MigrationService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var defaults : NSUserDefaults
	var state : MigrationState
	var priorState : MigrationState

	// Swift methods
	0x2cab0  func <stripped> // method 
 }

 struct ChronoCore.MigrationState {

	// Properties
	var systemVersion : String? // +0x0
	var systemLocale : String // +0x10
	var displaySize : CGSize // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	var displayScale : ´  // +0x30
 }

 enum ChronoCore.CodingKeys {

	// Properties
	case systemVersion  
	case systemLocale  
	case displaySize  
	case displayScale  
 }

 class ChronoCore.ChronoServicesServer : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timelineService : ó¡
	let taskService : TaskHandling
	var descriptorService : DescriptorServicing
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionService : 1»
	let configurationService : ClientConfigurationModelService
	let keybagMonitor : KeybagMonitoring
	var connectionListener : BSServiceConnectionListener?
	var clientConnections : Set<BSServiceConnection>
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tasks :  empty-list 
	var queue : OS_dispatch_queue
WARNING: couldn't find address 0x0 (0x0) in binary!
	var initialExtensionDiscoveryCompleteSubscription : Ø 

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6c5400029ed8 (0x45400029ed8) in binary!
	0x6c40  @objc ChronoServicesServer.(null) <stripped>
WARNING: couldn't find address 0x6c3c00029df0 (0x43c00029df0) in binary!
	0x98000000c  @objc ChronoServicesServer.(null) <stripped>
WARNING: couldn't find address 0x6c2400029ce8 (0x42400029ce8) in binary!
	0x6c18  @objc ChronoServicesServer.(null) <stripped>

	// Swift methods
	0x2ebb0  func <stripped> // method 
 }

 class ChronoCore.AvocadoController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var avocadoListener : NSXPCListener
	var widgetListener : NSXPCListener
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timelineService : ó¡

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6ba400029dc0 (0x3a400029dc0) in binary!
	0x6ba0  @objc AvocadoController.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x3fcfffa0040  @objc AvocadoController.(null) <stripped>

	// Swift methods
	0x34dd0  func <stripped> // method 
 }

 class ChronoCore.StateCaptureInvalidator : NSObject /usr/lib/libobjc.A.dylib, StateCaptureInvalidatable {

	// Properties
	var invalidated : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handle : ≥‘

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6ab400029cd0 (0x2b400029cd0) in binary!
	0x28000000c  @objc StateCaptureInvalidator.(null) <stripped>

	// Swift methods
	0x36a90  func <stripped> // method 
 }

 class ChronoCore.StateCaptureEntry : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var title : String
	var queue : OS_dispatch_queue
	var captureHandler : ()

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6af400029d10 (0x2f400029d10) in binary!
	0x6af0  @objc StateCaptureEntry.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x484fffa2e40  @objc StateCaptureEntry.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.StateCaptureItem : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String
	let identifier : String
	var captureHandler : ()
	let invalidatable : StateCaptureInvalidatable

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6b2c00029db0 (0x32c00029db0) in binary!
	0x6b18  @objc StateCaptureItem.(null) <stripped>
WARNING: couldn't find address 0x6b1400029cc8 (0x31400029cc8) in binary!
	0x28000000c  @objc StateCaptureItem.(null) <stripped>
WARNING: couldn't find address 0x6af400029d10 (0x2f400029d10) in binary!
	0x6af0  @objc StateCaptureItem.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.StateCaptureService : NSObject /usr/lib/libobjc.A.dylib, StateCaptureManaging {

	// Properties
	var itemsByIdentifier : StateCaptureItem
	var subitemsByIdentifier : [String : [String]]
	let queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6ad400029cf0 (0x2d400029cf0) in binary!
	0x6ad0  @objc StateCaptureService.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa16b0  @objc StateCaptureService.(null) <stripped>

	// Swift methods
	0x379e0  func <stripped> // method 
	0x37cc0  func <stripped> // method 
 }

 struct ChronoCore.DuetWidgetIdentity {

	// Properties
	let configuration : CHSConfiguredWidgetDescriptor // +0x0
 }

 class ChronoCore.Dates : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class ChronoCore.DuetWidgetConfigurationManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let manager : WidgetConfiguratonManaging
	let defaults : NSUserDefaults

	// Swift methods
 }

 class ChronoCore.Simulator : _SwiftObject /usr/lib/swift/libswiftCore.dylib, WidgetConfiguratonManaging {
	// Swift methods
 }

 class ChronoCore.AppAuthorizationMonitor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : 1»
	let processMonitor : ProcessMonitoring
WARNING: couldn't find address 0x0 (0x0) in binary!
	let changedExtensionIdentifiersPublisher : ]ª
WARNING: couldn't find address 0x0 (0x0) in binary!
	let changedExtensionIdentifiers : Ÿ∫

	// Swift methods
	0x3a610  func <stripped> // method 
 }

 enum ChronoCore.ChronoCoreError {

	// Properties
	case unknownExtensionProcess  
	case clientProcessNotAuthorized  
	case noXPCConnection  
	case invalidSizeConfiguration  
	case remoteContextUnavailable  
	case unknownStateCaptureIdentifier  
	case toolServicesUnavailable  
	case invalidXPCConnection  
	case chronoServicesUnavailable  
 }

 enum ChronoCore.URLSessionError {

	// Properties
	case malformedURLSessionInfoDictionary : String
	case failedToFindExtension  
 }

 class ChronoCore.TaskSessionPool : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let lock : UnfairLock
	var queuePool : [OS_dispatch_queue]
	let defaults : NSUserDefaults

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6a9c00029cb8 (0x29c00029cb8) in binary!
	0x6a98  @objc TaskSessionPool.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa8ce8  @objc TaskSessionPool.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.WidgetWindow : UIWindow /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbb700002a140 (0x3700002a140) in binary!
	0x9b88  @objc WidgetWindow.(null) <stripped>
WARNING: couldn't find address 0xbb580002a1a0 (0x3580002a1a0) in binary!
	0x9b70  @objc WidgetWindow.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x3ccfffaaaa8  @objc WidgetWindow.(null) <stripped>
	0x3a4fffaabe0  @objc WidgetWindow.HãE¿ˇPLâÁLâˆHãE®ˇPHâﬂË<Ω <stripped>
 }

 class ChronoCore.WidgetSceneDelegate : UIResponder /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var timelineService : MobileTimelineService
	var connection : Connection
	var foreground : Bool
	var isEffectivelyVisible : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timelineReloadedNotificationCancellable : Ø 
	var evaluateStaleTimelineContentTimer : BSTimer?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var extensionSubscriptions :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var snapshotSubscription : Ø 

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6a3400029cb8 (0x23400029cb8) in binary!
	0x76d0  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0xb1aa00029bb8 (0x1aa00029bb8) in binary!
	0xb19e  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0xb19200029b90 (0x19200029b90) in binary!
	0xb186  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0xb17a00029b68 (0x17a00029b68) in binary!
	0x69d8  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x69d400029b88 (0x1d400029b88) in binary!
	0x38000000c  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x653400029b30 (0x53400029b30) in binary!
	0x69a8  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x69a400029b58 (0x1a400029b58) in binary!
	0x38000000c  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x698400029d98 (0x18400029d98) in binary!
	0x6978  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x697400029b28 (0x17400029b28) in binary!
	0x48000000c  @objc WidgetSceneDelegate.(null) <stripped>

	// Swift methods
	0x40150  func <stripped> // method 
	0x401c0  func <stripped> // method 
	0x40540  func <stripped> // method 
	0x40ec0  func <stripped> // method 
	0x41340  func <stripped> // method 
	0x416d0  func <stripped> // method 
	0x41c80  func <stripped> // method 
	0x42d20  func <stripped> // method 
	0x44400  func <stripped> // method 
	0x44730  func <stripped> // method 
	0x45730  func <stripped> // method 
 }

 class ChronoCore.Connection : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let logIdentifier : String
	var sceneDelegate : WidgetSceneDelegate
	let scene : CHUISAvocadoWindowScene
	let sceneSettingsDiffInspector : CHUISAvocadoSceneSettingsDiffInspector
	var contentViewController : WidgetSceneViewController
	var transaction : OS_os_transaction?
	let window : UIWindow

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x653400029b30 (0x53400029b30) in binary!
	0x69a8  @objc Connection.(null) <stripped>
WARNING: couldn't find address 0x69a400029b58 (0x1a400029b58) in binary!
	0x38000000c  @objc Connection.(null) <stripped>
WARNING: couldn't find address 0x698400029d98 (0x18400029d98) in binary!
	0x6978  @objc Connection.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.WidgetVisibilityAssertion : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let logIdentifier : String
	let widget : CHSWidget
	let locationService : LocationService
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lifetimeAssertion : ìæ
	let lock : UnfairLock
WARNING: couldn't find address 0x0 (0x0) in binary!
	var locationAssertion : Ÿ∆
	var lock_visiblySettled : Bool

	// Swift methods
 }

 enum ChronoCore.BudgetExemptReason {

	// Properties
	case foreground  
	case session  
	case debugging  
 }

 class ChronoCore.MobilePlaceholderService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PlaceholderServicing {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheManager : C∆ // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : #« // +0x38 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : 1» // +0x60 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStore : È∫ // +0x88 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStoreUI : ∏ // +0x90 (0x8)
	let descriptorService : DescriptorServicing // +0x98 (0x28)
	let configurationService : ClientConfigurationModel // +0xc0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var persistentSubscriptions :  empty-list  // +0xe8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environmentSubscriptions : String // +0xf0 (0x8)
	var descriptors : Set<CHSAvocadoDescriptor>? // +0xf8 (0x8)
	var reloadFailedTimer : CHDMonotonicTimer // +0x100 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : ´¿ // +0x0 (0x0)
	var hasDescriptors : Bool // +0x0 (0x1)
	var hasMetrics : Bool // +0x0 (0x1)
	var lock : UnfairLock // +0x0 (0x8)

	// Swift methods
	0x49ed0  func <stripped> // method 
	0x4a4f0  func <stripped> // method 
	0x4adc0  func <stripped> // method 
	0x4cea0  func <stripped> // method 
	0x4cfc0  func <stripped> // method 
 }

 class ChronoCore.Task : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let schedulingConfiguration : SchedulingConfiguration // +0x45545f5f (0x0)
	let schedulingOptions : SchedulingOptions // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var powerlogUpdateIdentities :  empty-list  // +0xa34c4 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var powerlogWakeReason : iÃ // +0x44 (0x0)
	let target : Target // +0xa34c4 (0x10)
	let cost : Cost // +0x0 (0x9)
	let identifier : Identifier // +0x0 (0x11)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let taskIdentifier : ç« // +0x0 (0x0)
	let logDigest : String // +0x736f5f5f (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var syncWorkItem : Oæ // +0x6e697274 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var asyncWorkItem :  empty-list  // +0x45545f5f (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var completion :  empty-list  // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x698400029d98 (0x18400029d98) in binary!
	0x6978  @objc Task.(null) <stripped>
WARNING: couldn't find address 0x697400029b28 (0x17400029b28) in binary!
	0x48000000c  @objc Task.(null) <stripped>
WARNING: couldn't find address 0x695400029b70 (0x15400029b70) in binary!
	0x8cac  @objc Task.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.TaskSession {
 enum ChronoCore.Identifier {

	// Properties
	case descriptor : String
	case placeholder : String
	case urlsession : String
	case snapshot : (CHSWidget, CHSWidgetMetrics)
	case timeline : (CHSWidget, CHSWidgetMetrics)
 }

 enum ChronoCore.Cost {

	// Properties
	case budgeted : Int
	case free  
 }

 enum ChronoCore.Target {

	// Properties
	case bundleIdentifier : String
	case local  
 }

 struct ChronoCore.SchedulingOptions {

	// Properties
	let rawValue : Int // +0x0
 }

 enum ChronoCore.SchedulingConfiguration {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case scheduled : • 
	case immediate  
 }

 class ChronoCore.ApplicationDelegate : UIResponder /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : #«
	let avocadoController : AvocadoController
	let servicesServer : ChronoServicesServer
	let toolServicesServer : ToolServicesServer
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : ´µ
	let placeholderService : MobilePlaceholderService
	let timelineService : MobileTimelineService
	let snapshotService : MobileSnapshotService
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheByExtensionProvider : ©µ
	let taskService : TaskHandling
	let descriptorService : DescriptorServicing
	let configurationService : ClientConfigurationModel
	let stateCaptureService : StateCaptureService
	let dataProtectionMonitor : DataProtectionMonitor
WARNING: couldn't find address 0x0 (0x0) in binary!
	let powerlogViewService : º
WARNING: couldn't find address 0x0 (0x0) in binary!
	let powerlogUpdateService : Œ
	let locationService : LocationService
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finishLaunchingToken : Ø 
	let enableGarbageCollection : Bool
	let appAuthorizationMonitor : AppAuthorizationMonitor

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x695400029b70 (0x15400029b70) in binary!
	0x8cac  @objc ApplicationDelegate.(null) <stripped>
WARNING: couldn't find address 0xac0c00029aa8 (0x40c00029aa8) in binary!
	0x6938  @objc ApplicationDelegate.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffd2998  @objc ApplicationDelegate.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x254fffd26f0  @objc ApplicationDelegate.(null) <stripped>

	// Swift methods
	0x544f0  func <stripped> // method 
	0x54d70  func <stripped> // method 
	0x55470  func <stripped> // method 
	0x55930  func <stripped> // method 
 }

 class ChronoCore.WidgetSceneViewController {
 class ChronoCore.SignificantTimeChangeNotification : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subject : À
	var previousTimes : Times
	var brightnessClient : BrightnessSystemClient
	var screenOn : Bool
	var notifyWhenScreenOn : Bool
	var lock : UnfairLock
WARNING: couldn't find address 0x0 (0x0) in binary!
	var significantTimeChangeSubscription : k∏

	// Swift methods
	0x65a60  class func SignificantTimeChangeNotification.__allocating_init() // init 
 }

 struct ChronoCore.Times {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let world : w¿
	let system : CHDMonotonicTime
 }

 enum ChronoCore.NotificationAction {

	// Properties
	case notify  
	case delay  
	case ignore  
 }

 class ChronoCore.LocationGraceRegistry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var timeoutByIdentifier : CHDMonotonicTime

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x900c00029a68 (0xc00029a68) in binary!
	0xbeb4  @objc LocationGraceRegistry.(null) <stripped>
WARNING: couldn't find address 0xbeb400029a40 (0x6b400029a40) in binary!
	0xbeb3  @objc LocationGraceRegistry.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x1fcfffd7108  @objc LocationGraceRegistry.(null) <stripped>
	0x264fffd7620  @objc LocationGraceRegistry.AVAUATSHÅÏò <stripped>

	// Swift methods
 }

 class ChronoCore.LocationGraceRegistrySharedMemoryStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LocationGraceRegistryStore {

	// Properties
	let store : LocationGraceRegistry

	// Swift methods
 }

 class ChronoCore.ExtensionInfo : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identifier : String
	var service : LocationService
	var mutated : Bool?
	var visibleAssertionCount : UInt
	var graceResetAssertionCount : UInt
	var grace : CHDMonotonicTime
	var activeAssertionCount : UInt
	var monitorAssertionCount : UInt
	var allowLocationForVisibility : LocationInUseAssertion
	var allowLocationForActivity : LocationInUseAssertion
WARNING: couldn't find address 0x0 (0x0) in binary!
	var monitorAssertion : Ÿ∆
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ext : u…

	// Swift methods
 }

 class ChronoCore.AuthorizationMonitor : NSObject /usr/lib/libobjc.A.dylib, LocationAuthorizationMonitorDelegate {

	// Properties
	let containerIdentifier : String
	var service : LocationService
	var manager : LocationAuthorizationMonitor
	let lock : UnfairLock
	var assertionCount : UInt
	var authorizedForWidgetUpdates : Bool?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x68d400029b58 (0xd400029b58) in binary!
	0xb056  @objc AuthorizationMonitor.(null) <stripped>
WARNING: couldn't find address 0x68b400029ad0 (0xb400029ad0) in binary!
	0x68b0  @objc AuthorizationMonitor.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x2a4fffe2930  @objc AuthorizationMonitor.(null) <stripped>
	0xfffe2998  @objc AuthorizationMonitor.çu–Ë» <stripped>

	// Swift methods
 }

 class ChronoCore.LocationService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extManager : 1» // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var extManagerSubscription : Ø  // +0x38 (0x8)
	let graceStore : LocationGraceRegistryStore // +0x40 (0x28)
	let inUseAssertionType : LocationInUseAssertion // +0x68 (0x10)
	let authMonitorType : LocationAuthorizationMonitor // +0x78 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let graceStoreFlushInterval : Æ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inUseNanosecondsOfGrace : ≥‘ // +0x0 (0x8)
	let serialProcessingQueue : OS_dispatch_queue // +0x0 (0x8)
	let lock : UnfairLock // +0x0 (0x8)
	var invalidated : Bool // +0x0 (0x1)
	var extInfoByIdentifier : ExtensionInfo // +0x0 (0x8)
	var graceStoreFlushPending : Bool // +0x0 (0x1)
	var graceState : LocationGraceRegistry // +0x0 (0x8)
	var graceTimer : CHDMonotonicTimer // +0x0 (0x8)
	var authMonitorByIdentifier : AuthorizationMonitor // +0x0 (0x8)
	let publisherLock : UnfairLock // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var authChangedExtensionIdentifiersPublisher : ]ª // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let authChangedExtensionIdentifiers : Ÿ∫ // +0x0 (0x8)

	// Swift methods
 }

 class ChronoCore.DescriptorService : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _descriptorPublisher : 5æ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var descriptorProvider : Ø∞ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : 1» // +0x7a7f0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var descriptorCache : cƒ // +0x0
	let configurationService : ClientConfigurationModel // +0x7a820
	let taskService : TaskHandling // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var persistentSubscriptions :  empty-list  // +0x7a830
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tasks :  empty-list  // +0x0
	let queue : OS_dispatch_queue // +0x7a870
	var extensionEvents : ExtensionEvent // +0x0
	var readyDataSources : DataSources // +0x7a8a0

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x689c00029b20 (0x9c00029b20) in binary!
	0x6888  @objc DescriptorService.(null) <stripped>
WARNING: couldn't find address 0x688400029a38 (0x8400029a38) in binary!
	0x25029232840  @objc DescriptorService.(null) <stripped>
WARNING: couldn't find address 0x6f7268433a4d4152 (0x433a4d4152) in binary!
	0x3454a4f5250  @objc DescriptorService.(null) <stripped>

	// Swift methods
	0x78790  func <stripped> // method 
	0x78ba0  func <stripped> // method 
	0x79990  func <stripped> // method 
 }

 struct ChronoCore.DataSources {

	// Properties
	let rawValue : Int // +0x0
 }

 struct ChronoCore.ExtensionEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extension : #Õ // +0x0
	let eventType : ExtensionEventType // +0x28
 }

 enum ChronoCore.ExtensionEventType {

	// Properties
	case add  
	case remove  
 }

 class ChronoCore.MobileSnapshotService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheManager : C∆ // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : #« // +0x38 (0x28)
	let configurationService : ClientConfigurationModel // +0x60 (0x28)
	let locationService : LocationService // +0x88 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var persistentSubscriptions :  empty-list  // +0x90 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environmentSubscriptions :  empty-list  // +0x98 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : 1» // +0xa0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStore : ÔÆ // +0xc8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStoreUI : Å≤ // +0xd0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : ´¿ // +0x0 (0x0)

	// Swift methods
 }

 class ChronoCore._ChronodStartupHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class ChronoCore.ClientConfigurationModelService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _metricsSpecification : CHSWidgetMetricsSpecification? // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _metricsSpecificationPublisher : À // +0x18 (0x8)
	var _configuredWidgetContainerDescriptors : [CHSConfiguredWidgetContainerDescriptor]? // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _configuredWidgetContainerDescriptorsPublisher : À // +0x28 (0x8)
	var widgetConfigurationManager : DuetWidgetConfigurationManager // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var configuredWidgetMetadataCache : /Ø // +0x38 (0x8)
	let lock : UnfairLock // +0x40 (0x8)

	// Swift methods
	0x82620  func <stripped> // method 
	0x82980  func <stripped> // method 
	0x82fb0  func <stripped> // method 
 }

 struct ChronoCore.WithExtendedLifetime {

	// Properties
	let upstream : A
	let extended : B
 }

 class ChronoCore.Inner {
 class ChronoCore.MobileTimelineService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheManager : C∆ // +0x10 (0x28)
	let configurationService : ClientConfigurationModel // +0x38 (0x28)
	let locationService : LocationService // +0x60 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : 1» // +0x68 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : #« // +0x90 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStore : ã™ // +0xb8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStoreUI : !≤ // +0xc0 (0x8)
	let lock : UnfairLock // +0xc8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : ´¿ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var persistentSubscriptions :  empty-list  // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environmentSubscriptions :  empty-list  // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var configurationLifetimeAssertions :  empty-list  // +0x0 (0x8)
	let processMonitor : ProcessMonitoring // +0x0 (0x28)

	// Swift methods
 }

 class ChronoCore.DuetWidgetViewEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identity : DuetWidgetIdentity // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startViewDate : w¿ // +0x2 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let staleContentDate : w¿ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var endViewDate : e∂ // +0x6c645f5f (0x0)

	// Swift methods
	0x909f0  func <stripped> // method 
	0x90d60  func <stripped> // method 
 }

 class ChronoCore._DuetWidgetViewProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, DuetWidgetViewProviderInterface {
	// Swift methods
 }

 class ChronoCore.DuetWidgetViewRecorder : _SwiftObject /usr/lib/swift/libswiftCore.dylib, DuetWidgetViewRecording {

	// Properties
	var maxTimeElapsedBeforeFlush : Double // +0x10 (0x8)
	let viewProvider : DuetWidgetViewProviderInterface // +0x18 (0x28)
	var entries : DuetWidgetViewEntry // +0x40 (0x8)
	var timer : BSTimer? // +0x48 (0x8)

	// Swift methods
	0x91150  func <stripped> // method 
	0x915a0  func <stripped> // method 
	0x91820  func <stripped> // method 
 }

 class ChronoCore.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LockProtocol {

	// Properties
	var _lock : os_unfair_lock_s

	// Swift methods
 }
