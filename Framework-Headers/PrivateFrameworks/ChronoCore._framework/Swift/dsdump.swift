 protocol ChronoCore.AccountStoreInterface // 2 requirements
 {
	// method
	// method
 }
 protocol ChronoCore.TelephonyNetworkServicing // 2 requirements
 {
	// getter
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
 protocol ChronoCore.DescriptorServicing // 8 requirements
 {
	// getter
	// getter
	// getter
	// method
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
 protocol ChronoCore.TaskSessionDelegate // 2 requirements
 {
	// method
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
 protocol ChronoCore.LocationSignificantChangeMonitorDelegate // 1 requirements
 {
	// method
 }
 protocol ChronoCore.LocationSignificantChangeMonitor // 2 requirements
 {
	// class method
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
	var _os_unfair_lock_opaque : õŸ
 }

 enum __C.BSSqliteDatabaseConnectionDataProtectionClass { }

 class __C.CFString {
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
	var osd_title : ìÿ
 }

 struct __C.LaunchOptionsKey {

	// Properties
	var _rawValue : NSString
 }

 enum __C.CLAuthorizationStatus { }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : 3Õ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : 3Õ
 }

 struct __C.os_state_data_decoder_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var osdd_library : ìÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var osdd_type : ìÿ
 }

 struct __C.__Unnamed_union___Anonymous_field1 { }

 struct __C.os_state_data_type_t {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawValue : õŸ
 }

 class ChronoCore.ActivityScheduler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let targetQueue : OS_dispatch_queue
	let lock : UnfairLock
	let service : ActivityServicing
WARNING: couldn't find address 0x0 (0x0) in binary!
	var activityStore :  empty-list 

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7a0c000293d8 (0x20c000293d8) in binary!
	0x79f8  @objc ActivityScheduler.(null) <stripped>
WARNING: couldn't find address 0x79f4000292f0 (0x1f4000292f0) in binary!
	0x28000000c  @objc ActivityScheduler.(null) <stripped>
WARNING: couldn't find address 0x79d400029338 (0x1d400029338) in binary!
	0x79d0  @objc ActivityScheduler.(null) <stripped>

	// Swift methods
	0x3f90  func <stripped> // method 
	0x4110  func <stripped> // method 
	0x4130  func <stripped> // method 
	0x4cc0  func <stripped> // method 
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
	var subject : çÕ
	var queue : OS_dispatch_queue
	var _queue_iTunesAccount : String?
	var _queue_iCloudAccount : String?
	var _accountStore : AccountStoreInterface
	var _observerToken : NSObject?
	var downstreamCount : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var upstream : +Õ

	// Swift methods
	0x71d0  func <stripped> // getter 
	0x77a0  func <stripped> // method 
	0x7950  func <stripped> // method 
 }

 class ChronoCore._CTNetworkService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, TelephonyNetworkServicing {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _networkAuthorizationsDidChangePublisher : çÕ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _ctConnection : Î’
	var _lock : UnfairLock

	// Swift methods
	0x93e0  func <stripped> // method 
 }

 class ChronoCore.NetworkAuthorizationMonitor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _queue : OS_dispatch_queue
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _queue_extensionManager : œ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _queue_subscriptions :  empty-list 
	var _queue_telephonyNetworkService : TelephonyNetworkServicing
	var _queue_networkAuthorizationStatusByContainerBundleID : NetworkAuthorizationStatus
	var _queue_initialLoad : Bool
	var _queue_started : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _queue_networkAuthorizationChangedPublisher : ≥Ã

	// Swift methods
	0x97f0  func <stripped> // method 
	0xa0e0  func <stripped> // method 
	0xa690  func <stripped> // method 
	0xacc0  func <stripped> // method 
	0xaeb0  func <stripped> // method 
 }

 class ChronoCore.CHDMonotonicTimer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var timer : CHDMonotonicTimer? // +0x0
	let lock : UnfairLock // +0x0
	var invalidated : Bool // +0xbcd0
	let time : CHDMonotonicTime // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interval : «’ // +0x0

	// Swift methods
 }

 struct ChronoCore.CHDMonotonicTime {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : 	÷ // +0x0
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
	var _maxUnlockedProtectionLevel : π« // +0x0 (0x0)
	var keybagMonitor : KeybagMonitoring // +0xb9000 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var token : +Õ // +0x0 (0x8)

	// Swift methods
	0x1bb30  func <stripped> // getter 
 }

 class ChronoCore.ProcessMonitor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : OS_dispatch_queue
	let lock : UnfairLock
	var processMonitor : ApplicationProcessMonitoring
	let configurationService : ClientConfigurationModel
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : œ
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
WARNING: couldn't find address 0x79d400029338 (0x1d400029338) in binary!
	0x79d0  @objc ProcessMonitor.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x2acfff86c20  @objc ProcessMonitor.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.Activity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : ª» // +0xb9000 (0x0)
	let name : String // +0x5 (0x10)
	let widgetId : String? // +0x17 (0x10)
	let containingAppIdentifier : String? // +0x65745f5f (0x10)
	let schedulingConfiguration : SchedulingConfiguration // +0x0 (0x0)
	let schedulingOptions : SchedulingOptions // +0x45545f5f (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let effectivePowerlogWakeReason : ∑Õ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let effectivePowerlogWakeCost : WÕ // +0x21f0 (0x0)
	let activationHandler : Activity // +0x98237 (0x10)
	let logDigest : String // +0x21f0 (0x10)

	// Swift methods
	0x227b0  func <stripped> // getter 
 }

 enum ChronoCore.SubscriptionStatus {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case subscribed : ª≈
	case awaitingSubscription  
	case terminal  
 }

 class ChronoCore.ToolServicesServer : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let timelineService : TimelineToolServicing
	let taskService : TaskHandling
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionService : œ
	let descriptorService : DescriptorServicing
	let stateCaptureService : StateCaptureManaging
	let keybagMonitor : KeybagMonitoring
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list 
	var connectionListener : BSServiceConnectionListener?
	var clientConnections : Set<BSServiceConnection>
	var queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x79b400029318 (0x1b400029318) in binary!
	0x79b0  @objc ToolServicesServer.(null) <stripped>
WARNING: couldn't find address 0xd8000000c (0xd8000000c) in binary!
	0x1f4fff878a0  @objc ToolServicesServer.(null) <stripped>

	// Swift methods
	0x23380  func <stripped> // method 
 }

 class ChronoCore.FixedKeybagStateProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lockState : kƒ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _hasUnlockedSinceBoot : ]ƒ // +0x0 (0x0)

	// Swift methods
	0x275f0  func <stripped> // getter 
	0x27650  func <stripped> // getter 
	0x276b0  func <stripped> // method 
 }

 class ChronoCore.LocalActivityContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startAfter : }¡ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startBefore : }¡ // +0xa3490 (0x0)
	let targetQueue : OS_dispatch_queue // +0x8dbd (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startHandler :  empty-list  // +0xa3490 (0x10)

	// Swift methods
 }

 class ChronoCore.LocalActivityService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x281e0  func <stripped> // method 
 }

 class ChronoCore.MobileTimelineReloadStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var widgetEnvironment : ˇ» // +0x10 (0x10)
	let configurationService : ClientConfigurationModel // +0x20 (0x28)
	let taskService : TaskHandling // +0x48 (0x28)
	let locationService : LocationService // +0x70 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : Y» // +0x78 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheManager : y« // +0xa0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : ¡¡ // +0x0 (0x0)
	let isPreview : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tasks :  empty-list  // +0x0 (0x8)

	// Swift methods
	0x28bc0  func <stripped> // method 
	0x2a850  func <stripped> // method 
	0x2aa50  func <stripped> // method 
 }

 class ChronoCore.KeybagMonitor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let firstUnlockSubject : O¬
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lockStateSubject : '¬
	var keybagStateProvider : KeybagStateProviding
	var queue_currentLockState : KeybagLockState
	var queue_unlockedSinceBoot : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var notifyToken : +Õ
	var queue : OS_dispatch_queue
	var publishQueue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x78ec00029250 (0xec00029250) in binary!
	0x78e8  @objc KeybagMonitor.(null) <stripped>
WARNING: couldn't find address 0x78dc000291d8 (0xdc000291d8) in binary!
	0x38000000c  @objc KeybagMonitor.(null) <stripped>
WARNING: couldn't find address 0x78c400029290 (0xc400029290) in binary!
	0x78b0  @objc KeybagMonitor.(null) <stripped>

	// Swift methods
	0x2ca00  func <stripped> // getter 
	0x2cb80  func <stripped> // getter 
	0x2d100  func <stripped> // method 
	0x2d6c0  func <stripped> // method 
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
	0x304d0  func <stripped> // method 
 }

 struct ChronoCore.MigrationState {

	// Properties
	var systemVersion : String? // +0x0
	var systemLocale : String // +0x10
	var displaySize : CGSize // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	var displayScale : 3Õ // +0x30
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
	let timelineService : µ¬
	let taskService : TaskHandling
	var descriptorService : DescriptorServicing
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionService : œ
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
	var initialExtensionDiscoveryCompleteSubscription : +Õ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x78c400029290 (0xc400029290) in binary!
	0x78b0  @objc ChronoServicesServer.(null) <stripped>
WARNING: couldn't find address 0x78ac000291a8 (0xac000291a8) in binary!
	0x98000000c  @objc ChronoServicesServer.(null) <stripped>
WARNING: couldn't find address 0x789400029098 (0x9400029098) in binary!
	0x7888  @objc ChronoServicesServer.(null) <stripped>

	// Swift methods
	0x325d0  func <stripped> // method 
 }

 struct ChronoCore.NetworkAuthorizationChangeInfo {

	// Properties
	let initial : Bool // +0x0
	let containerBundleID : String // +0x8
	let fromStatus : NetworkAuthorizationStatus // +0x18
	let toStatus : NetworkAuthorizationStatus // +0x19
 }

 enum ChronoCore.NetworkAuthorizationStatus {

	// Properties
	case unknown  
	case allowed  
	case denied  
 }

 class ChronoCore.AvocadoController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var avocadoListener : NSXPCListener
	var widgetListener : NSXPCListener
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timelineService : µ¬

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x781400029178 (0x1400029178) in binary!
	0x7810  @objc AvocadoController.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x7acfff9c3f0  @objc AvocadoController.(null) <stripped>

	// Swift methods
	0x38dd0  func <stripped> // method 
 }

 class ChronoCore.StateCaptureInvalidator : NSObject /usr/lib/libobjc.A.dylib, StateCaptureInvalidatable {

	// Properties
	var invalidated : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handle : 	÷

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x772400029088 (0x72400029088) in binary!
	0x28000000c  @objc StateCaptureInvalidator.(null) <stripped>

	// Swift methods
	0x3aa90  func <stripped> // method 
 }

 class ChronoCore.StateCaptureEntry : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var title : String
	var queue : OS_dispatch_queue
	var captureHandler : ()

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7764000290c8 (0x764000290c8) in binary!
	0x7760  @objc StateCaptureEntry.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x3cfff9f1f0  @objc StateCaptureEntry.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.StateCaptureItem : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String
	let identifier : String
	var captureHandler : ()
	let invalidatable : StateCaptureInvalidatable

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x779c00029168 (0x79c00029168) in binary!
	0x7788  @objc StateCaptureItem.(null) <stripped>
WARNING: couldn't find address 0x778400029080 (0x78400029080) in binary!
	0x28000000c  @objc StateCaptureItem.(null) <stripped>
WARNING: couldn't find address 0x7764000290c8 (0x764000290c8) in binary!
	0x7760  @objc StateCaptureItem.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.StateCaptureService : NSObject /usr/lib/libobjc.A.dylib, StateCaptureManaging {

	// Properties
	var itemsByIdentifier : StateCaptureItem
	var subitemsByIdentifier : [String : [String]]
	let queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7744000290a8 (0x744000290a8) in binary!
	0x7740  @objc StateCaptureService.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff9da60  @objc StateCaptureService.(null) <stripped>

	// Swift methods
	0x3b9e0  func <stripped> // method 
	0x3bcc0  func <stripped> // method 
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
	let networkAuthorizationMonitor : NetworkAuthorizationMonitor
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : œ
	let processMonitor : ProcessMonitoring
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	let changedExtensionIdentifiersPublisher : %º
WARNING: couldn't find address 0x0 (0x0) in binary!
	let changedExtensionIdentifiers : õª

	// Swift methods
	0x3e8d0  func <stripped> // method 
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
WARNING: couldn't find address 0x770c00029070 (0x70c00029070) in binary!
	0x7708  @objc TaskSessionPool.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa5578  @objc TaskSessionPool.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.WidgetWindow : UIWindow /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xc92000029500 (0x12000029500) in binary!
	0xa868  @objc WidgetWindow.(null) <stripped>
WARNING: couldn't find address 0xc90800029560 (0x10800029560) in binary!
	0xa850  @objc WidgetWindow.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x784fffa7368  @objc WidgetWindow.(null) <stripped>
	0x75cfffa74a0  @objc WidgetWindow.∆ˇˇˇˇËÃ/	 <stripped>
 }

 class ChronoCore.WidgetSceneDelegate : UIResponder /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var timelineService : MobileTimelineService
	var connection : Connection
	var foreground : Bool
	var isEffectivelyVisible : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timelineReloadedNotificationCancellable : +Õ
	var evaluateStaleTimelineContentTimer : BSTimer?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var extensionSubscriptions :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var snapshotSubscription : +Õ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x76a400029070 (0x6a400029070) in binary!
	0x8340  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0xbf5a00028f70 (0x75a00028f70) in binary!
	0xbf4e  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0xbf4200028f48 (0x74200028f48) in binary!
	0xbf36  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0xbf2a00028f20 (0x72a00028f20) in binary!
	0x7648  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x764400028f40 (0x64400028f40) in binary!
	0x38000000c  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x6ce400028ee8 (0x4e400028ee8) in binary!
	0x7618  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x761400028f10 (0x61400028f10) in binary!
	0x38000000c  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x75f400029158 (0x5f400029158) in binary!
	0x75e8  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x75e400028ee0 (0x5e400028ee0) in binary!
	0x48000000c  @objc WidgetSceneDelegate.(null) <stripped>

	// Swift methods
	0x44660  func <stripped> // method 
	0x446d0  func <stripped> // method 
	0x44a50  func <stripped> // method 
	0x453d0  func <stripped> // method 
	0x45850  func <stripped> // method 
	0x45be0  func <stripped> // method 
	0x46190  func <stripped> // method 
	0x472a0  func <stripped> // method 
	0x48980  func <stripped> // method 
	0x48cb0  func <stripped> // method 
	0x49cb0  func <stripped> // method 
 }

 class ChronoCore.Connection : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let logIdentifier : String
	var sceneDelegate : WidgetSceneDelegate
	let scene : CHUISAvocadoWindowScene
	let sceneSettingsDiffInspector : CHUISAvocadoSceneSettingsDiffInspector
	var _contentViewController : WidgetSceneViewController
	var transaction : OS_os_transaction?
	let window : UIWindow

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6ce400028ee8 (0x4e400028ee8) in binary!
	0x7618  @objc Connection.(null) <stripped>
WARNING: couldn't find address 0x761400028f10 (0x61400028f10) in binary!
	0x38000000c  @objc Connection.(null) <stripped>
WARNING: couldn't find address 0x75f400029158 (0x5f400029158) in binary!
	0x75e8  @objc Connection.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.WidgetVisibilityAssertion : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let logIdentifier : String
	let widget : CHSWidget
	let locationService : LocationService
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lifetimeAssertion : }ø
	let lock : UnfairLock
WARNING: couldn't find address 0x0 (0x0) in binary!
	var locationAssertion : »
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
	let cacheManager : y« // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : Y» // +0x38 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : œ // +0x60 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStore : ”ª // +0x88 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStoreUI : ›∏ // +0x90 (0x8)
	let descriptorService : DescriptorServicing // +0x98 (0x28)
	let configurationService : ClientConfigurationModel // +0xc0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var persistentSubscriptions :  empty-list  // +0xe8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environmentSubscriptions : String // +0xf0 (0x8)
	var descriptors : Set<CHSAvocadoDescriptor>? // +0xf8 (0x8)
	var reloadFailedTimer : CHDMonotonicTimer // +0x100 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : ¡¡ // +0x0 (0x0)
	var hasDescriptors : Bool // +0x0 (0x1)
	var hasMetrics : Bool // +0x0 (0x1)
	var lock : UnfairLock // +0x0 (0x8)

	// Swift methods
	0x4e4d0  func <stripped> // method 
	0x4eaf0  func <stripped> // method 
	0x4f3c0  func <stripped> // method 
	0x51510  func <stripped> // method 
	0x51630  func <stripped> // method 
 }

 class ChronoCore.Task : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let schedulingConfiguration : SchedulingConfiguration // +0x44 (0x0)
	let schedulingOptions : SchedulingOptions // +0xac250 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var powerlogUpdateIdentities :  empty-list  // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var powerlogWakeReason : ∑Õ // +0x0 (0x0)
	let target : Target // +0x0 (0x10)
	let cost : Cost // +0x736f5f5f (0x9)
	let identifier : Identifier // +0x6e697274 (0x11)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let taskIdentifier : ª» // +0x45545f5f (0x0)
	let logDigest : String // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var syncWorkItem : ëø // +0xac2a0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var asyncWorkItem :  empty-list  // +0x179 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var completion :  empty-list  // +0xac2a0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x75f400029158 (0x5f400029158) in binary!
	0x75e8  @objc Task.(null) <stripped>
WARNING: couldn't find address 0x75e400028ee0 (0x5e400028ee0) in binary!
	0x48000000c  @objc Task.(null) <stripped>
WARNING: couldn't find address 0x75c400028f28 (0x5c400028f28) in binary!
	0x990c  @objc Task.(null) <stripped>

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
	case scheduled : -Õ
	case immediate  
 }

 class ChronoCore.ApplicationDelegate : UIResponder /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : Y»
	let avocadoController : AvocadoController
	let servicesServer : ChronoServicesServer
	let toolServicesServer : ToolServicesServer
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : ¡∂
	let placeholderService : MobilePlaceholderService
	let timelineService : MobileTimelineService
	let snapshotService : MobileSnapshotService
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheByExtensionProvider : ø∂
	let taskService : TaskHandling
	let descriptorService : DescriptorServicing
	let configurationService : ClientConfigurationModel
	let stateCaptureService : StateCaptureService
	let dataProtectionMonitor : DataProtectionMonitor
WARNING: couldn't find address 0x0 (0x0) in binary!
	let powerlogViewService : Ôº
WARNING: couldn't find address 0x0 (0x0) in binary!
	let powerlogUpdateService : oœ
	let locationService : LocationService
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list 
	var servicesBootstrapExtension : BSInvalidatable?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finishLaunchingToken : +Õ
	let enableGarbageCollection : Bool
	let appAuthorizationMonitor : AppAuthorizationMonitor
	let reaperNotificationQueue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x75c400028f28 (0x5c400028f28) in binary!
	0x990c  @objc ApplicationDelegate.(null) <stripped>
WARNING: couldn't find address 0xb91c00028e60 (0x11c00028e60) in binary!
	0x75a8  @objc ApplicationDelegate.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffcece8  @objc ApplicationDelegate.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x60cfffcea40  @objc ApplicationDelegate.(null) <stripped>

	// Swift methods
	0x58cf0  func <stripped> // method 
	0x59570  func <stripped> // method 
	0x59c70  func <stripped> // method 
	0x5a130  func <stripped> // method 
 }

 class ChronoCore.WidgetSceneViewController {
 class ChronoCore.SignificantTimeChangeNotification : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subject : çÕ
	var previousTimes : Times
	var screenOn : Bool
	var lock : UnfairLock
WARNING: couldn't find address 0x0 (0x0) in binary!
	var significantTimeChangeSubscription : °ÿ

	// Swift methods
	0x6a860  class func SignificantTimeChangeNotification.__allocating_init() // init 
 }

 struct ChronoCore.Times {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let world : }¡
	let system : CHDMonotonicTime
 }

 class ChronoCore.LocationGraceRegistry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var timeoutByIdentifier : CHDMonotonicTime

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9c6c00028e20 (0x46c00028e20) in binary!
	0xcb54  @objc LocationGraceRegistry.(null) <stripped>
WARNING: couldn't find address 0xcb5400028df8 (0x35400028df8) in binary!
	0xcb53  @objc LocationGraceRegistry.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x5b4fffd4068  @objc LocationGraceRegistry.(null) <stripped>
	0x61cfffd4fb0  @objc LocationGraceRegistry.ËÂcˇˇIâ∆ÎHÉ=†Ê <stripped>

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
	var monitorAssertion : »
	var reloadForSignificantLocationChange : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ext : ù 

	// Swift methods
 }

 class ChronoCore.AuthorizationMonitor : NSObject /usr/lib/libobjc.A.dylib, LocationAuthorizationMonitorDelegate {

	// Properties
	let containerIdentifier : String
	var service : LocationService
	var manager : LocationAuthorizationMonitor
	let lock : UnfairLock
	var assertionCount : UInt
	var status : LocationAuthorizationMonitorStatus

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x754400028f10 (0x54400028f10) in binary!
	0xbe06  @objc AuthorizationMonitor.(null) <stripped>
WARNING: couldn't find address 0x752400028e88 (0x52400028e88) in binary!
	0x7520  @objc AuthorizationMonitor.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x574fffd5210  @objc AuthorizationMonitor.(null) <stripped>
	0x5e4fffd55c8  @objc AuthorizationMonitor.HçUàLâˆËºÛ <stripped>

	// Swift methods
 }

 class ChronoCore.SignificantChangeMonitor : NSObject /usr/lib/libobjc.A.dylib, LocationSignificantChangeMonitorDelegate {

	// Properties
	var service : LocationService
	var manager : LocationSignificantChangeMonitor
	let lock : UnfairLock

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x750c00028ed8 (0x50c00028ed8) in binary!
	0xb17a  @objc SignificantChangeMonitor.(null) <stripped>
WARNING: couldn't find address 0x74ec00028e50 (0x4ec00028e50) in binary!
	0x74e8  @objc SignificantChangeMonitor.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x624fffe14a8  @objc SignificantChangeMonitor.(null) <stripped>
	0xfffe1510  @objc SignificantChangeMonitor.xIâˇ1ˇËù1	 <stripped>

	// Swift methods
 }

 class ChronoCore.LocationService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extManager : œ // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var extManagerSubscription : +Õ // +0x38 (0x8)
	let graceStore : LocationGraceRegistryStore // +0x40 (0x28)
	let inUseAssertionType : LocationInUseAssertion // +0x68 (0x10)
	let authMonitorType : LocationAuthorizationMonitor // +0x78 (0x10)
	let significantChangeMonitorType : LocationSignificantChangeMonitor // +0x88 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let graceStoreFlushInterval : ùÆ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inUseNanosecondsOfGrace : 	÷ // +0x0 (0x8)
	let serialProcessingQueue : OS_dispatch_queue // +0x0 (0x8)
	let lock : UnfairLock // +0x0 (0x8)
	var invalidated : Bool // +0x0 (0x1)
	var extInfoByIdentifier : ExtensionInfo // +0x0 (0x8)
	var graceStoreFlushPending : Bool // +0x0 (0x1)
	var graceState : LocationGraceRegistry // +0x0 (0x8)
	var graceTimer : CHDMonotonicTimer // +0x0 (0x8)
	var authMonitorByIdentifier : AuthorizationMonitor // +0x0 (0x8)
	let publisherLock : UnfairLock // +0x0 (0x8)
	var significantChangeMonitor : SignificantChangeMonitor // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var changedExtensionIdentifiersPublisher : %º // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let changedExtensionIdentifiers : õª // +0x6c645f5f (0x8)

	// Swift methods
 }

 struct ChronoCore.LocationAuthorizationMonitorStatus {

	// Properties
	let authorizedForWidgetUpdates : Bool // +0x0
	let authorizationStatus : CLAuthorizationStatus // +0x4
 }

 class ChronoCore.DescriptorService : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _descriptorPublisher : ø // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var descriptorProvider : Y± // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : œ // +0x818b0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var descriptorCache : ô≈ // +0x0
	let configurationService : ClientConfigurationModel // +0x818e0
	let taskService : TaskHandling // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var persistentSubscriptions :  empty-list  // +0x818f0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tasks :  empty-list  // +0x0
	let queue : OS_dispatch_queue // +0x81930
	var extensionEvents : ExtensionEvent // +0x0
	var readyDataSources : DataSources // +0x81960

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x74d400028ea0 (0x4d400028ea0) in binary!
	0x74c0  @objc DescriptorService.(null) <stripped>
WARNING: couldn't find address 0x74bc00028db8 (0x4bc00028db8) in binary!
	0x0  @objc DescriptorService.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x5726f436f6e  @objc DescriptorService.(null) <stripped>

	// Swift methods
	0x7f130  func <stripped> // method 
	0x7f540  func <stripped> // method 
	0x7f7c0  func <stripped> // method 
	0x805b0  func <stripped> // method 
	0x81110  func <stripped> // method 
	0x81400  func <stripped> // method 
 }

 struct ChronoCore.DataSources {

	// Properties
	let rawValue : Int // +0x0
 }

 struct ChronoCore.ExtensionEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extension : '“ // +0x0
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
	let cacheManager : y« // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : Y» // +0x38 (0x28)
	let configurationService : ClientConfigurationModel // +0x60 (0x28)
	let locationService : LocationService // +0x88 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var persistentSubscriptions :  empty-list  // +0x90 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environmentSubscriptions :  empty-list  // +0x98 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : œ // +0xa0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStore : ôØ // +0xc8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStoreUI : ©≥ // +0xd0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : ¡¡ // +0x0 (0x0)

	// Swift methods
 }

 class ChronoCore._ChronodStartupHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class ChronoCore.ClientConfigurationModelService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _metricsSpecification : CHSWidgetMetricsSpecification? // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _metricsSpecificationPublisher : çÕ // +0x18 (0x8)
	var _configuredWidgetContainerDescriptors : [CHSConfiguredWidgetContainerDescriptor]? // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _configuredWidgetContainerDescriptorsPublisher : çÕ // +0x28 (0x8)
	var widgetConfigurationManager : DuetWidgetConfigurationManager // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var configuredWidgetMetadataCache : ŸØ // +0x38 (0x8)
	let lock : UnfairLock // +0x40 (0x8)

	// Swift methods
	0x8a180  func <stripped> // method 
	0x8a4e0  func <stripped> // method 
	0x8ab10  func <stripped> // method 
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
	let cacheManager : y« // +0x10 (0x28)
	let configurationService : ClientConfigurationModel // +0x38 (0x28)
	let locationService : LocationService // +0x60 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : œ // +0x68 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : Y» // +0x90 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStore : #´ // +0xb8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStoreUI : C≥ // +0xc0 (0x8)
	let lock : UnfairLock // +0xc8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : ¡¡ // +0x0 (0x0)
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
	let startViewDate : }¡ // +0x7473635f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let staleContentDate : }¡ // +0x45545f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var endViewDate : ∑ // +0x0 (0x0)

	// Swift methods
	0x985b0  func <stripped> // method 
	0x98920  func <stripped> // method 
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
	0x98d10  func <stripped> // method 
	0x99160  func <stripped> // method 
	0x993e0  func <stripped> // method 
 }

 class ChronoCore.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LockProtocol {

	// Properties
	var _lock : os_unfair_lock_s

	// Swift methods
 }
