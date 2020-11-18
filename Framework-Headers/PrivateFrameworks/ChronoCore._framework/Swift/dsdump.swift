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
	var _os_unfair_lock_opaque : ã⁄
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
	var osd_title : ÉŸ
 }

 struct __C.LaunchOptionsKey {

	// Properties
	var _rawValue : NSString
 }

 enum __C.CLAuthorizationStatus { }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : Œ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : Œ
 }

 struct __C.os_state_data_decoder_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var osdd_library : ÉŸ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var osdd_type : ÉŸ
 }

 struct __C.__Unnamed_union___Anonymous_field1 { }

 struct __C.os_state_data_type_t {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawValue : ã⁄
 }

 class ChronoCore.ActivityScheduler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let targetQueue : OS_dispatch_queue
	let lock : UnfairLock
	let service : ActivityServicing
WARNING: couldn't find address 0x0 (0x0) in binary!
	var activityStore :  empty-list 

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x79ec000293c8 (0x1ec000293c8) in binary!
	0x79d8  @objc ActivityScheduler.(null) <stripped>
WARNING: couldn't find address 0x79d4000292e0 (0x1d4000292e0) in binary!
	0x28000000c  @objc ActivityScheduler.(null) <stripped>
WARNING: couldn't find address 0x79b400029328 (0x1b400029328) in binary!
	0x79b0  @objc ActivityScheduler.(null) <stripped>

	// Swift methods
	0x3e20  func <stripped> // method 
	0x3fa0  func <stripped> // method 
	0x3fc0  func <stripped> // method 
	0x4b50  func <stripped> // method 
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
	var subject : ]Œ
	var queue : OS_dispatch_queue
	var _queue_iTunesAccount : String?
	var _queue_iCloudAccount : String?
	var _accountStore : AccountStoreInterface
	var _observerToken : NSObject?
	var downstreamCount : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var upstream : ˚Õ

	// Swift methods
	0x7060  func <stripped> // getter 
	0x7630  func <stripped> // method 
	0x77e0  func <stripped> // method 
 }

 class ChronoCore._CTNetworkService : _SwiftObject /usr/lib/swift/libswiftCore.dylib, TelephonyNetworkServicing {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _networkAuthorizationsDidChangePublisher : ]Œ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _ctConnection : €÷
	var _lock : UnfairLock

	// Swift methods
	0x9270  func <stripped> // method 
 }

 class ChronoCore.NetworkAuthorizationMonitor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _queue : OS_dispatch_queue
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _queue_extensionManager : ›œ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _queue_subscriptions :  empty-list 
	var _queue_telephonyNetworkService : TelephonyNetworkServicing
	var _queue_networkAuthorizationStatusByContainerBundleID : NetworkAuthorizationStatus
	var _queue_initialLoad : Bool
	var _queue_started : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _queue_networkAuthorizationChangedPublisher : ÉÕ

	// Swift methods
	0x9680  func <stripped> // method 
	0x9f70  func <stripped> // method 
	0xa520  func <stripped> // method 
	0xab50  func <stripped> // method 
	0xad40  func <stripped> // method 
 }

 class ChronoCore.CHDMonotonicTimer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var timer : CHDMonotonicTimer? // +0x0
	let lock : UnfairLock // +0x0
	var invalidated : Bool // +0xbb60
	let time : CHDMonotonicTime // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interval : ∑÷ // +0x0

	// Swift methods
 }

 struct ChronoCore.CHDMonotonicTime {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : ˘÷ // +0x0
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
	var _maxUnlockedProtectionLevel : ±» // +0x0 (0x0)
	var keybagMonitor : KeybagMonitoring // +0xb8000 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var token : ˚Õ // +0x0 (0x8)

	// Swift methods
	0x1b9a0  func <stripped> // getter 
 }

 class ChronoCore.ProcessMonitor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : OS_dispatch_queue
	let lock : UnfairLock
	var processMonitor : ApplicationProcessMonitoring
	let configurationService : ClientConfigurationModel
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : ›œ
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
WARNING: couldn't find address 0x79b400029328 (0x1b400029328) in binary!
	0x79b0  @objc ProcessMonitor.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x29cfff87a80  @objc ProcessMonitor.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.Activity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : ã… // +0xb8000 (0x0)
	let name : String // +0x5 (0x10)
	let widgetId : String? // +0x17 (0x10)
	let containingAppIdentifier : String? // +0x65745f5f (0x10)
	let schedulingConfiguration : SchedulingConfiguration // +0x0 (0x0)
	let schedulingOptions : SchedulingOptions // +0x45545f5f (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let effectivePowerlogWakeReason : áŒ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let effectivePowerlogWakeCost : 'Œ // +0x2080 (0x0)
	let activationHandler : Activity // +0x973b7 (0x10)
	let logDigest : String // +0x2080 (0x10)

	// Swift methods
	0x22620  func <stripped> // getter 
 }

 enum ChronoCore.SubscriptionStatus {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case subscribed : ≥∆
	case awaitingSubscription  
	case terminal  
 }

 class ChronoCore.ToolServicesServer : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let timelineService : TimelineToolServicing
	let taskService : TaskHandling
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionService : ›œ
	let descriptorService : DescriptorServicing
	let stateCaptureService : StateCaptureManaging
	let keybagMonitor : KeybagMonitoring
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list 
	var connectionListener : BSServiceConnectionListener?
	var clientConnections : Set<BSServiceConnection>
	var queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x799400029308 (0x19400029308) in binary!
	0x7990  @objc ToolServicesServer.(null) <stripped>
WARNING: couldn't find address 0xd8000000c (0xd8000000c) in binary!
	0x1e4fff88700  @objc ToolServicesServer.(null) <stripped>

	// Swift methods
	0x231f0  func <stripped> // method 
 }

 class ChronoCore.FixedKeybagStateProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lockState : c≈ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _hasUnlockedSinceBoot : U≈ // +0x0 (0x0)

	// Swift methods
	0x27460  func <stripped> // getter 
	0x274c0  func <stripped> // getter 
	0x27520  func <stripped> // method 
 }

 class ChronoCore.LocalActivityContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startAfter : u¬ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startBefore : u¬ // +0xa2480 (0x0)
	let targetQueue : OS_dispatch_queue // +0x8cfd (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startHandler :  empty-list  // +0xa2480 (0x10)

	// Swift methods
 }

 class ChronoCore.LocalActivityService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x28050  func <stripped> // method 
 }

 class ChronoCore.MobileTimelineReloadStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var widgetEnvironment : ˜… // +0x10 (0x10)
	let configurationService : ClientConfigurationModel // +0x20 (0x28)
	let taskService : TaskHandling // +0x48 (0x28)
	let locationService : LocationService // +0x70 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : Q… // +0x78 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheManager : q» // +0xa0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : π¬ // +0x0 (0x0)
	let isPreview : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tasks :  empty-list  // +0x0 (0x8)

	// Swift methods
	0x28a30  func <stripped> // method 
	0x2a6c0  func <stripped> // method 
	0x2a8c0  func <stripped> // method 
 }

 class ChronoCore.KeybagMonitor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let firstUnlockSubject : G√
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lockStateSubject : √
	var keybagStateProvider : KeybagStateProviding
	var queue_currentLockState : KeybagLockState
	var queue_unlockedSinceBoot : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var notifyToken : ˚Õ
	var queue : OS_dispatch_queue
	var publishQueue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x78cc00029240 (0xcc00029240) in binary!
	0x78c8  @objc KeybagMonitor.(null) <stripped>
WARNING: couldn't find address 0x78bc000291c8 (0xbc000291c8) in binary!
	0x38000000c  @objc KeybagMonitor.(null) <stripped>
WARNING: couldn't find address 0x78a400029280 (0xa400029280) in binary!
	0x7890  @objc KeybagMonitor.(null) <stripped>

	// Swift methods
	0x2c870  func <stripped> // getter 
	0x2c9f0  func <stripped> // getter 
	0x2cf70  func <stripped> // method 
	0x2d530  func <stripped> // method 
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
	0x30340  func <stripped> // method 
 }

 struct ChronoCore.MigrationState {

	// Properties
	var systemVersion : String? // +0x0
	var systemLocale : String // +0x10
	var displaySize : CGSize // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	var displayScale : Œ // +0x30
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
	let timelineService : ≠√
	let taskService : TaskHandling
	var descriptorService : DescriptorServicing
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionService : ›œ
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
	var initialExtensionDiscoveryCompleteSubscription : ˚Õ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x78a400029280 (0xa400029280) in binary!
	0x7890  @objc ChronoServicesServer.(null) <stripped>
WARNING: couldn't find address 0x788c00029198 (0x8c00029198) in binary!
	0x98000000c  @objc ChronoServicesServer.(null) <stripped>
WARNING: couldn't find address 0x787400029088 (0x7400029088) in binary!
	0x7868  @objc ChronoServicesServer.(null) <stripped>

	// Swift methods
	0x32440  func <stripped> // method 
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
	var timelineService : ≠√

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x77f400029168 (0x7f400029168) in binary!
	0x77f0  @objc AvocadoController.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x79cfff9d250  @objc AvocadoController.(null) <stripped>

	// Swift methods
	0x38c40  func <stripped> // method 
 }

 class ChronoCore.StateCaptureInvalidator : NSObject /usr/lib/libobjc.A.dylib, StateCaptureInvalidatable {

	// Properties
	var invalidated : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handle : ˘÷

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x770400029078 (0x70400029078) in binary!
	0x28000000c  @objc StateCaptureInvalidator.(null) <stripped>

	// Swift methods
	0x3a900  func <stripped> // method 
 }

 class ChronoCore.StateCaptureEntry : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var title : String
	var queue : OS_dispatch_queue
	var captureHandler : ()

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7744000290b8 (0x744000290b8) in binary!
	0x7740  @objc StateCaptureEntry.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x2cfffa0050  @objc StateCaptureEntry.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.StateCaptureItem : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String
	let identifier : String
	var captureHandler : ()
	let invalidatable : StateCaptureInvalidatable

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x777c00029158 (0x77c00029158) in binary!
	0x7768  @objc StateCaptureItem.(null) <stripped>
WARNING: couldn't find address 0x776400029070 (0x76400029070) in binary!
	0x28000000c  @objc StateCaptureItem.(null) <stripped>
WARNING: couldn't find address 0x7744000290b8 (0x744000290b8) in binary!
	0x7740  @objc StateCaptureItem.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.StateCaptureService : NSObject /usr/lib/libobjc.A.dylib, StateCaptureManaging {

	// Properties
	var itemsByIdentifier : StateCaptureItem
	var subitemsByIdentifier : [String : [String]]
	let queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x772400029098 (0x72400029098) in binary!
	0x7720  @objc StateCaptureService.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff9e8c0  @objc StateCaptureService.(null) <stripped>

	// Swift methods
	0x3b850  func <stripped> // method 
	0x3bb30  func <stripped> // method 
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
	let extensionManager : ›œ
	let processMonitor : ProcessMonitoring
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	let changedExtensionIdentifiersPublisher : Ω
WARNING: couldn't find address 0x0 (0x0) in binary!
	let changedExtensionIdentifiers : ìº

	// Swift methods
	0x3e740  func <stripped> // method 
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
WARNING: couldn't find address 0x76ec00029060 (0x6ec00029060) in binary!
	0x76e8  @objc TaskSessionPool.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa63d8  @objc TaskSessionPool.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.WidgetWindow : UIWindow /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xc900000294f0 (0x100000294f0) in binary!
	0xa848  @objc WidgetWindow.(null) <stripped>
WARNING: couldn't find address 0xc8e800029550 (0xe800029550) in binary!
	0xa830  @objc WidgetWindow.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x774fffa81c8  @objc WidgetWindow.(null) <stripped>
	0x74cfffa8300  @objc WidgetWindow.Hç=· <stripped>
 }

 class ChronoCore.WidgetSceneDelegate : UIResponder /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var timelineService : MobileTimelineService
	var connection : Connection
	var foreground : Bool
	var isEffectivelyVisible : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timelineReloadedNotificationCancellable : ˚Õ
	var evaluateStaleTimelineContentTimer : BSTimer?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var extensionSubscriptions :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var snapshotSubscription : ˚Õ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x768400029060 (0x68400029060) in binary!
	0x8320  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0xbf3a00028f60 (0x73a00028f60) in binary!
	0xbf2e  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0xbf2200028f38 (0x72200028f38) in binary!
	0xbf16  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0xbf0a00028f10 (0x70a00028f10) in binary!
	0x7628  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x762400028f30 (0x62400028f30) in binary!
	0x38000000c  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x6cc400028ed8 (0x4c400028ed8) in binary!
	0x75f8  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x75f400028f00 (0x5f400028f00) in binary!
	0x38000000c  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x75d400029148 (0x5d400029148) in binary!
	0x75c8  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x75c400028ed0 (0x5c400028ed0) in binary!
	0x48000000c  @objc WidgetSceneDelegate.(null) <stripped>

	// Swift methods
	0x444d0  func <stripped> // method 
	0x44540  func <stripped> // method 
	0x448c0  func <stripped> // method 
	0x45240  func <stripped> // method 
	0x456c0  func <stripped> // method 
	0x45a50  func <stripped> // method 
	0x46000  func <stripped> // method 
	0x47110  func <stripped> // method 
	0x487f0  func <stripped> // method 
	0x48b20  func <stripped> // method 
	0x49b20  func <stripped> // method 
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
WARNING: couldn't find address 0x6cc400028ed8 (0x4c400028ed8) in binary!
	0x75f8  @objc Connection.(null) <stripped>
WARNING: couldn't find address 0x75f400028f00 (0x5f400028f00) in binary!
	0x38000000c  @objc Connection.(null) <stripped>
WARNING: couldn't find address 0x75d400029148 (0x5d400029148) in binary!
	0x75c8  @objc Connection.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.WidgetVisibilityAssertion : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let logIdentifier : String
	let widget : CHSWidget
	let locationService : LocationService
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lifetimeAssertion : M¿
	let lock : UnfairLock
WARNING: couldn't find address 0x0 (0x0) in binary!
	var locationAssertion : …
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
	let cacheManager : q» // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : Q… // +0x38 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : ›œ // +0x60 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStore : £º // +0x88 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStoreUI : ≠π // +0x90 (0x8)
	let descriptorService : DescriptorServicing // +0x98 (0x28)
	let configurationService : ClientConfigurationModel // +0xc0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var persistentSubscriptions :  empty-list  // +0xe8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environmentSubscriptions : String // +0xf0 (0x8)
	var descriptors : Set<CHSAvocadoDescriptor>? // +0xf8 (0x8)
	var reloadFailedTimer : CHDMonotonicTimer // +0x100 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : π¬ // +0x0 (0x0)
	var hasDescriptors : Bool // +0x0 (0x1)
	var hasMetrics : Bool // +0x0 (0x1)
	var lock : UnfairLock // +0x0 (0x8)

	// Swift methods
	0x4e340  func <stripped> // method 
	0x4e960  func <stripped> // method 
	0x4f230  func <stripped> // method 
	0x51380  func <stripped> // method 
	0x514a0  func <stripped> // method 
 }

 class ChronoCore.Task : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let schedulingConfiguration : SchedulingConfiguration // +0x44 (0x0)
	let schedulingOptions : SchedulingOptions // +0xab180 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var powerlogUpdateIdentities :  empty-list  // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var powerlogWakeReason : áŒ // +0x0 (0x0)
	let target : Target // +0x0 (0x10)
	let cost : Cost // +0x736f5f5f (0x9)
	let identifier : Identifier // +0x6e697274 (0x11)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let taskIdentifier : ã… // +0x45545f5f (0x0)
	let logDigest : String // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var syncWorkItem : Å¿ // +0xab1d0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var asyncWorkItem :  empty-list  // +0x179 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var completion :  empty-list  // +0xab1d0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x75d400029148 (0x5d400029148) in binary!
	0x75c8  @objc Task.(null) <stripped>
WARNING: couldn't find address 0x75c400028ed0 (0x5c400028ed0) in binary!
	0x48000000c  @objc Task.(null) <stripped>
WARNING: couldn't find address 0x75a400028f18 (0x5a400028f18) in binary!
	0x98ec  @objc Task.(null) <stripped>

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
	case scheduled : ˝Õ
	case immediate  
 }

 class ChronoCore.ApplicationDelegate : UIResponder /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : Q…
	let avocadoController : AvocadoController
	let servicesServer : ChronoServicesServer
	let toolServicesServer : ToolServicesServer
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : ë∑
	let placeholderService : MobilePlaceholderService
	let timelineService : MobileTimelineService
	let snapshotService : MobileSnapshotService
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheByExtensionProvider : è∑
	let taskService : TaskHandling
	let descriptorService : DescriptorServicing
	let configurationService : ClientConfigurationModel
	let stateCaptureService : StateCaptureService
	let dataProtectionMonitor : DataProtectionMonitor
WARNING: couldn't find address 0x0 (0x0) in binary!
	let powerlogViewService : øΩ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let powerlogUpdateService : ?–
	let locationService : LocationService
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list 
	var servicesBootstrapExtension : BSInvalidatable?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finishLaunchingToken : ˚Õ
	let enableGarbageCollection : Bool
	let appAuthorizationMonitor : AppAuthorizationMonitor
	let reaperNotificationQueue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x75a400028f18 (0x5a400028f18) in binary!
	0x98ec  @objc ApplicationDelegate.(null) <stripped>
WARNING: couldn't find address 0xb8fc00028e50 (0xfc00028e50) in binary!
	0x7588  @objc ApplicationDelegate.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffcfa08  @objc ApplicationDelegate.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x5fcfffcf760  @objc ApplicationDelegate.(null) <stripped>

	// Swift methods
	0x58b90  func <stripped> // method 
	0x59410  func <stripped> // method 
	0x59b10  func <stripped> // method 
	0x59fd0  func <stripped> // method 
 }

 class ChronoCore.WidgetSceneViewController {
 class ChronoCore.SignificantTimeChangeNotification : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subject : ]Œ
	var previousTimes : Times
	var screenOn : Bool
	var lock : UnfairLock
WARNING: couldn't find address 0x0 (0x0) in binary!
	var significantTimeChangeSubscription : ëŸ

	// Swift methods
	0x6a590  class func SignificantTimeChangeNotification.__allocating_init() // init 
 }

 struct ChronoCore.Times {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let world : u¬
	let system : CHDMonotonicTime
 }

 class ChronoCore.LocationGraceRegistry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var timeoutByIdentifier : CHDMonotonicTime

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9c4c00028e10 (0x44c00028e10) in binary!
	0xcb34  @objc LocationGraceRegistry.(null) <stripped>
WARNING: couldn't find address 0xcb3400028de8 (0x33400028de8) in binary!
	0xcb33  @objc LocationGraceRegistry.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x5a4fffd4d88  @objc LocationGraceRegistry.(null) <stripped>
	0x60cfffd5cd0  @objc LocationGraceRegistry.‰HÉ¿HÉ‡I)ƒLâ‰Hã=,õ <stripped>

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
	var monitorAssertion : …
	var reloadForSignificantLocationChange : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ext : ïÀ

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
WARNING: couldn't find address 0x752400028f00 (0x52400028f00) in binary!
	0xbde6  @objc AuthorizationMonitor.(null) <stripped>
WARNING: couldn't find address 0x750400028e78 (0x50400028e78) in binary!
	0x7500  @objc AuthorizationMonitor.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x564fffd5f30  @objc AuthorizationMonitor.(null) <stripped>
	0x5d4fffd62e8  @objc AuthorizationMonitor. <stripped>

	// Swift methods
 }

 class ChronoCore.SignificantChangeMonitor : NSObject /usr/lib/libobjc.A.dylib, LocationSignificantChangeMonitorDelegate {

	// Properties
	var service : LocationService
	var manager : LocationSignificantChangeMonitor
	let lock : UnfairLock

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x74ec00028ec8 (0x4ec00028ec8) in binary!
	0xb15a  @objc SignificantChangeMonitor.(null) <stripped>
WARNING: couldn't find address 0x74cc00028e40 (0x4cc00028e40) in binary!
	0x74c8  @objc SignificantChangeMonitor.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x614fffe27c8  @objc SignificantChangeMonitor.(null) <stripped>
	0xfffe2830  @objc SignificantChangeMonitor.â¡MâÂËå!	 <stripped>

	// Swift methods
 }

 class ChronoCore.LocationService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extManager : ›œ // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var extManagerSubscription : ˚Õ // +0x38 (0x8)
	let graceStore : LocationGraceRegistryStore // +0x40 (0x28)
	let inUseAssertionType : LocationInUseAssertion // +0x68 (0x10)
	let authMonitorType : LocationAuthorizationMonitor // +0x78 (0x10)
	let significantChangeMonitorType : LocationSignificantChangeMonitor // +0x88 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let graceStoreFlushInterval : mØ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inUseNanosecondsOfGrace : ˘÷ // +0x0 (0x8)
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
	var changedExtensionIdentifiersPublisher : Ω // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let changedExtensionIdentifiers : ìº // +0x6c645f5f (0x8)

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
	let _descriptorPublisher : 	¿ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var descriptorProvider : )≤ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : ›œ // +0x81320
WARNING: couldn't find address 0x0 (0x0) in binary!
	var descriptorCache : ë∆ // +0x0
	let configurationService : ClientConfigurationModel // +0x81350
	let taskService : TaskHandling // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var persistentSubscriptions :  empty-list  // +0x81360
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tasks :  empty-list  // +0x0
	let queue : OS_dispatch_queue // +0x813a0
	var extensionEvents : ExtensionEvent // +0x0
	var readyDataSources : DataSources // +0x813d0

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x74b400028e90 (0x4b400028e90) in binary!
	0x74a0  @objc DescriptorService.(null) <stripped>
WARNING: couldn't find address 0x749c00028da8 (0x49c00028da8) in binary!
	0x0  @objc DescriptorService.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x5726f436f6e  @objc DescriptorService.(null) <stripped>

	// Swift methods
	0x7f2c0  func <stripped> // method 
	0x7f6d0  func <stripped> // method 
	0x804c0  func <stripped> // method 
 }

 struct ChronoCore.DataSources {

	// Properties
	let rawValue : Int // +0x0
 }

 struct ChronoCore.ExtensionEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extension : ˜“ // +0x0
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
	let cacheManager : q» // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : Q… // +0x38 (0x28)
	let configurationService : ClientConfigurationModel // +0x60 (0x28)
	let locationService : LocationService // +0x88 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var persistentSubscriptions :  empty-list  // +0x90 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environmentSubscriptions :  empty-list  // +0x98 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : ›œ // +0xa0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStore : i∞ // +0xc8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStoreUI : y¥ // +0xd0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : π¬ // +0x0 (0x0)

	// Swift methods
 }

 class ChronoCore._ChronodStartupHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class ChronoCore.ClientConfigurationModelService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _metricsSpecification : CHSWidgetMetricsSpecification? // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _metricsSpecificationPublisher : ]Œ // +0x18 (0x8)
	var _configuredWidgetContainerDescriptors : [CHSConfiguredWidgetContainerDescriptor]? // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _configuredWidgetContainerDescriptorsPublisher : ]Œ // +0x28 (0x8)
	var widgetConfigurationManager : DuetWidgetConfigurationManager // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var configuredWidgetMetadataCache : ©∞ // +0x38 (0x8)
	let lock : UnfairLock // +0x40 (0x8)

	// Swift methods
	0x89190  func <stripped> // method 
	0x894f0  func <stripped> // method 
	0x89b20  func <stripped> // method 
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
	let cacheManager : q» // +0x10 (0x28)
	let configurationService : ClientConfigurationModel // +0x38 (0x28)
	let locationService : LocationService // +0x60 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : ›œ // +0x68 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : Q… // +0x90 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStore : Û´ // +0xb8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStoreUI : ¥ // +0xc0 (0x8)
	let lock : UnfairLock // +0xc8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : π¬ // +0x0 (0x0)
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
	let startViewDate : u¬ // +0x7473635f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let staleContentDate : u¬ // +0x45545f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var endViewDate : Ô∑ // +0x0 (0x0)

	// Swift methods
	0x975c0  func <stripped> // method 
	0x97930  func <stripped> // method 
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
	0x97d20  func <stripped> // method 
	0x98170  func <stripped> // method 
	0x983f0  func <stripped> // method 
 }

 class ChronoCore.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LockProtocol {

	// Properties
	var _lock : os_unfair_lock_s

	// Swift methods
 }
