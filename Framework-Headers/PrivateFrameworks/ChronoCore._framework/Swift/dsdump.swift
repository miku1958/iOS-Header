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
	var _os_unfair_lock_opaque : S“
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
	var osd_title : a—
 }

 struct __C.LaunchOptionsKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ∆
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ∆
 }

 struct __C.os_state_data_decoder_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var osdd_library : a—
WARNING: couldn't find address 0x0 (0x0) in binary!
	var osdd_type : a—
 }

 struct __C.__Unnamed_union___Anonymous_field1 { }

 struct __C.os_state_data_type_t {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawValue : S“
 }

 class ChronoCore.ActivityScheduler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let targetQueue : OS_dispatch_queue
	let lock : UnfairLock
	let service : ActivityServicing
WARNING: couldn't find address 0x0 (0x0) in binary!
	var activityStore :  empty-list 

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6c14000297e8 (0x414000297e8) in binary!
	0x6c00  @objc ActivityScheduler.(null) <stripped>
WARNING: couldn't find address 0x6bfc00029700 (0x3fc00029700) in binary!
	0x28000000c  @objc ActivityScheduler.(null) <stripped>
WARNING: couldn't find address 0x6bdc00029748 (0x3dc00029748) in binary!
	0x6bd8  @objc ActivityScheduler.(null) <stripped>

	// Swift methods
	0x4740  func <stripped> // method 
	0x48c0  func <stripped> // method 
	0x48e0  func <stripped> // method 
	0x5470  func <stripped> // method 
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
	var subject : Å∆
	var queue : OS_dispatch_queue
	var _queue_iTunesAccount : String?
	var _queue_iCloudAccount : String?
	var _accountStore : AccountStoreInterface
	var _observerToken : NSObject?
	var downstreamCount : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var upstream : ∆

	// Swift methods
	0x77b0  func <stripped> // getter 
	0x7d80  func <stripped> // method 
	0x7f30  func <stripped> // method 
 }

 class ChronoCore.CHDMonotonicTimer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var timer : CHDMonotonicTimer? // +0x0
	let lock : UnfairLock // +0x0
	var invalidated : Bool // +0x9670
	let time : CHDMonotonicTime // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interval : Ÿœ // +0x0

	// Swift methods
 }

 struct ChronoCore.CHDMonotonicTime {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : – // +0x0
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
	var _maxUnlockedProtectionLevel : ¬ // +0x0 (0x0)
	var keybagMonitor : KeybagMonitoring // +0xae000 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var token : ∆ // +0x0 (0x8)

	// Swift methods
	0x18940  func <stripped> // getter 
 }

 class ChronoCore.ProcessMonitor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : OS_dispatch_queue
	let lock : UnfairLock
	var processMonitor : ApplicationProcessMonitoring
	let configurationService : ClientConfigurationModel
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : s√
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
WARNING: couldn't find address 0x6bdc00029748 (0x3dc00029748) in binary!
	0x6bd8  @objc ProcessMonitor.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x6bcfff8ce58  @objc ProcessMonitor.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.Activity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : ˝¬ // +0xae000 (0x0)
	let name : String // +0x5 (0x10)
	let widgetId : String? // +0x17 (0x10)
	let containingAppIdentifier : String? // +0x65745f5f (0x10)
	let schedulingConfiguration : SchedulingConfiguration // +0x0 (0x0)
	let schedulingOptions : SchedulingOptions // +0x45545f5f (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let effectivePowerlogWakeReason : Ÿ« // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let effectivePowerlogWakeCost : Å« // +0x29a0 (0x0)
	let activationHandler : Activity // +0x8e717 (0x10)
	let logDigest : String // +0x29a0 (0x10)

	// Swift methods
	0x1f5f0  func <stripped> // getter 
 }

 enum ChronoCore.SubscriptionStatus {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case subscribed : ıø
	case awaitingSubscription  
	case terminal  
 }

 class ChronoCore.ToolServicesServer : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let timelineService : TimelineToolServicing
	let taskService : TaskHandling
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionService : s√
	let descriptorService : DescriptorServicing
	let stateCaptureService : StateCaptureManaging
	let keybagMonitor : KeybagMonitoring
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list 
	var connectionListener : BSServiceConnectionListener?
	var clientConnections : Set<BSServiceConnection>
	var queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6bbc00029728 (0x3bc00029728) in binary!
	0x6bb8  @objc ToolServicesServer.(null) <stripped>
WARNING: couldn't find address 0xd8000000c (0xd8000000c) in binary!
	0x60cfff8dad8  @objc ToolServicesServer.(null) <stripped>

	// Swift methods
	0x201a0  func <stripped> // method 
 }

 class ChronoCore.FixedKeybagStateProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lockState : •æ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _hasUnlockedSinceBoot : óæ // +0x0 (0x0)

	// Swift methods
	0x243f0  func <stripped> // getter 
	0x24450  func <stripped> // getter 
	0x244b0  func <stripped> // method 
 }

 class ChronoCore.LocalActivityContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startAfter : πª // +0x73635f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startBefore : πª // +0x67 (0x0)
	let targetQueue : OS_dispatch_queue // +0x45545f5f (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startHandler :  empty-list  // +0x0 (0x10)

	// Swift methods
 }

 class ChronoCore.LocalActivityService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x25020  func <stripped> // method 
 }

 class ChronoCore.MobileTimelineReloadStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var widgetEnvironment : √ // +0x10 (0x10)
	let configurationService : ClientConfigurationModel // +0x20 (0x28)
	let taskService : TaskHandling // +0x48 (0x28)
	let locationService : LocationService // +0x70 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : e¬ // +0x78 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheManager : Ö¡ // +0xa0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : Ìª // +0x0 (0x0)
	let isPreview : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tasks :  empty-list  // +0x0 (0x8)

	// Swift methods
	0x25a00  func <stripped> // method 
	0x27690  func <stripped> // method 
	0x27850  func <stripped> // method 
 }

 class ChronoCore.KeybagMonitor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let firstUnlockSubject : {º
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lockStateSubject : Sº
	var keybagStateProvider : KeybagStateProviding
	var queue_currentLockState : KeybagLockState
	var queue_unlockedSinceBoot : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var notifyToken : ∆
	var queue : OS_dispatch_queue
	var publishQueue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6af400029660 (0x2f400029660) in binary!
	0x6af0  @objc KeybagMonitor.(null) <stripped>
WARNING: couldn't find address 0x6ae4000295e8 (0x2e4000295e8) in binary!
	0x38000000c  @objc KeybagMonitor.(null) <stripped>
WARNING: couldn't find address 0x6acc000296a0 (0x2cc000296a0) in binary!
	0x6ab8  @objc KeybagMonitor.(null) <stripped>

	// Swift methods
	0x297f0  func <stripped> // getter 
	0x29970  func <stripped> // getter 
	0x29ef0  func <stripped> // method 
	0x2a4c0  func <stripped> // method 
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
	0x2d2c0  func <stripped> // method 
 }

 struct ChronoCore.MigrationState {

	// Properties
	var systemVersion : String? // +0x0
	var systemLocale : String // +0x10
	var displaySize : CGSize // +0x20
WARNING: couldn't find address 0x0 (0x0) in binary!
	var displayScale : ∆ // +0x30
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
	let timelineService : Ÿº
	let taskService : TaskHandling
	var descriptorService : DescriptorServicing
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionService : s√
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
	var initialExtensionDiscoveryCompleteSubscription : ∆

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6acc000296a0 (0x2cc000296a0) in binary!
	0x6ab8  @objc ChronoServicesServer.(null) <stripped>
WARNING: couldn't find address 0x6ab4000295b8 (0x2b4000295b8) in binary!
	0x98000000c  @objc ChronoServicesServer.(null) <stripped>
	0x6a90  _block_copy_helper

	// Swift methods
	0x2f3c0  func <stripped> // method 
 }

 class ChronoCore.AvocadoController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var avocadoListener : NSXPCListener
	var widgetListener : NSXPCListener
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timelineService : Ÿº

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6a1c00029588 (0x21c00029588) in binary!
	0x6a18  @objc AvocadoController.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x3c4fffa2018  @objc AvocadoController.(null) <stripped>

	// Swift methods
	0x355e0  func <stripped> // method 
 }

 class ChronoCore.StateCaptureInvalidator : NSObject /usr/lib/libobjc.A.dylib, StateCaptureInvalidatable {

	// Properties
	var invalidated : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handle : –

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x692c00029498 (0x12c00029498) in binary!
	0x28000000c  @objc StateCaptureInvalidator.(null) <stripped>

	// Swift methods
	0x372a0  func <stripped> // method 
 }

 class ChronoCore.StateCaptureEntry : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var title : String
	var queue : OS_dispatch_queue
	var captureHandler : ()

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x696c000294d8 (0x16c000294d8) in binary!
	0x6968  @objc StateCaptureEntry.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x44cfffa4e18  @objc StateCaptureEntry.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.StateCaptureItem : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String
	let identifier : String
	var captureHandler : ()
	let invalidatable : StateCaptureInvalidatable

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x69a400029578 (0x1a400029578) in binary!
	0x6990  @objc StateCaptureItem.(null) <stripped>
WARNING: couldn't find address 0x698c00029490 (0x18c00029490) in binary!
	0x28000000c  @objc StateCaptureItem.(null) <stripped>
WARNING: couldn't find address 0x696c000294d8 (0x16c000294d8) in binary!
	0x6968  @objc StateCaptureItem.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.StateCaptureService : NSObject /usr/lib/libobjc.A.dylib, StateCaptureManaging {

	// Properties
	var itemsByIdentifier : StateCaptureItem
	var subitemsByIdentifier : [String : [String]]
	let queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x694c000294b8 (0x14c000294b8) in binary!
	0x6948  @objc StateCaptureService.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa3688  @objc StateCaptureService.(null) <stripped>

	// Swift methods
	0x381f0  func <stripped> // method 
	0x384d0  func <stripped> // method 
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
	let extensionManager : s√
	let processMonitor : ProcessMonitoring
WARNING: couldn't find address 0x0 (0x0) in binary!
	let changedExtensionIdentifiersPublisher : ü∂
WARNING: couldn't find address 0x0 (0x0) in binary!
	let changedExtensionIdentifiers : ∂

	// Swift methods
	0x3ae20  func <stripped> // method 
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
	0x6910  ___swift_destroy_boxed_opaque_existential_1
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffaacc0  @objc TaskSessionPool.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.WidgetWindow : UIWindow /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb9e800029908 (0x1e800029908) in binary!
	0x9a00  @objc WidgetWindow.(null) <stripped>
WARNING: couldn't find address 0xb9d000029968 (0x1d000029968) in binary!
	0x99e8  @objc WidgetWindow.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x394fffaca80  @objc WidgetWindow.(null) <stripped>
	0x36cfffacbb8  @objc WidgetWindow.ˇË™ <stripped>
 }

 class ChronoCore.WidgetSceneDelegate : UIResponder /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var timelineService : MobileTimelineService
	var connection : Connection
	var foreground : Bool
	var isEffectivelyVisible : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timelineReloadedNotificationCancellable : ∆
	var evaluateStaleTimelineContentTimer : BSTimer?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var extensionSubscriptions :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var snapshotSubscription : ∆

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x68ac00029480 (0xac00029480) in binary!
	0x7548  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0xb02200029380 (0x2200029380) in binary!
	0xb016  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0xb00a00029358 (0xa00029358) in binary!
	0xaffe  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0xaff200029330 (0x7f200029330) in binary!
	0x6850  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x684c00029350 (0x4c00029350) in binary!
	0x38000000c  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x639c000292f8 (0x39c000292f8) in binary!
	0x6820  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x681c00029320 (0x1c00029320) in binary!
	0x38000000c  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x67fc00029560 (0x7fc00029560) in binary!
	0x67f0  @objc WidgetSceneDelegate.(null) <stripped>
WARNING: couldn't find address 0x67ec000292f0 (0x7ec000292f0) in binary!
	0x48000000c  @objc WidgetSceneDelegate.(null) <stripped>

	// Swift methods
	0x40960  func <stripped> // method 
	0x409d0  func <stripped> // method 
	0x40d50  func <stripped> // method 
	0x416d0  func <stripped> // method 
	0x41b50  func <stripped> // method 
	0x41ee0  func <stripped> // method 
	0x42490  func <stripped> // method 
	0x43530  func <stripped> // method 
	0x44c10  func <stripped> // method 
	0x44f40  func <stripped> // method 
	0x45f40  func <stripped> // method 
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
WARNING: couldn't find address 0x639c000292f8 (0x39c000292f8) in binary!
	0x6820  @objc Connection.(null) <stripped>
WARNING: couldn't find address 0x681c00029320 (0x1c00029320) in binary!
	0x38000000c  @objc Connection.(null) <stripped>
WARNING: couldn't find address 0x67fc00029560 (0x7fc00029560) in binary!
	0x67f0  @objc Connection.(null) <stripped>

	// Swift methods
 }

 class ChronoCore.WidgetVisibilityAssertion : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let logIdentifier : String
	let widget : CHSWidget
	let locationService : LocationService
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lifetimeAssertion : ’π
	let lock : UnfairLock
WARNING: couldn't find address 0x0 (0x0) in binary!
	var locationAssertion : ¬
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
	let cacheManager : Ö¡ // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : e¬ // +0x38 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : s√ // +0x60 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStore : +∂ // +0x88 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStoreUI : M≥ // +0x90 (0x8)
	let descriptorService : DescriptorServicing // +0x98 (0x28)
	let configurationService : ClientConfigurationModel // +0xc0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var persistentSubscriptions :  empty-list  // +0xe8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environmentSubscriptions : String // +0xf0 (0x8)
	var descriptors : Set<CHSAvocadoDescriptor>? // +0xf8 (0x8)
	var reloadFailedTimer : CHDMonotonicTimer // +0x100 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : Ìª // +0x0 (0x0)
	var hasDescriptors : Bool // +0x0 (0x1)
	var hasMetrics : Bool // +0x0 (0x1)
	var lock : UnfairLock // +0x0 (0x8)

	// Swift methods
	0x4a6e0  func <stripped> // method 
	0x4ad00  func <stripped> // method 
	0x4b5d0  func <stripped> // method 
	0x4d6b0  func <stripped> // method 
	0x4d7d0  func <stripped> // method 
 }

 class ChronoCore.Task : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let schedulingConfiguration : SchedulingConfiguration // +0x45545f5f (0x0)
	let schedulingOptions : SchedulingOptions // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var powerlogUpdateIdentities :  empty-list  // +0xa1954 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var powerlogWakeReason : Ÿ« // +0x44 (0x0)
	let target : Target // +0xa1954 (0x10)
	let cost : Cost // +0x0 (0x9)
	let identifier : Identifier // +0x0 (0x11)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let taskIdentifier : ˝¬ // +0x0 (0x0)
	let logDigest : String // +0x736f5f5f (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var syncWorkItem : âπ // +0x6e697274 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var asyncWorkItem :  empty-list  // +0x45545f5f (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var completion :  empty-list  // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x67fc00029560 (0x7fc00029560) in binary!
	0x67f0  @objc Task.(null) <stripped>
WARNING: couldn't find address 0x67ec000292f0 (0x7ec000292f0) in binary!
	0x48000000c  @objc Task.(null) <stripped>
WARNING: couldn't find address 0x67cc00029338 (0x7cc00029338) in binary!
	0x8b24  @objc Task.(null) <stripped>

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
	case scheduled : ∆
	case immediate  
 }

 class ChronoCore.ApplicationDelegate : UIResponder /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : e¬
	let avocadoController : AvocadoController
	let servicesServer : ChronoServicesServer
	let toolServicesServer : ToolServicesServer
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : Ì∞
	let placeholderService : MobilePlaceholderService
	let timelineService : MobileTimelineService
	let snapshotService : MobileSnapshotService
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheByExtensionProvider : Î∞
	let taskService : TaskHandling
	let descriptorService : DescriptorServicing
	let configurationService : ClientConfigurationModel
	let stateCaptureService : StateCaptureService
	let dataProtectionMonitor : DataProtectionMonitor
WARNING: couldn't find address 0x0 (0x0) in binary!
	let powerlogViewService : G∑
WARNING: couldn't find address 0x0 (0x0) in binary!
	let powerlogUpdateService : Å…
	let locationService : LocationService
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finishLaunchingToken : ∆
	let enableGarbageCollection : Bool
	let appAuthorizationMonitor : AppAuthorizationMonitor

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x67cc00029338 (0x7cc00029338) in binary!
	0x8b24  @objc ApplicationDelegate.(null) <stripped>
WARNING: couldn't find address 0xaa8400029270 (0x28400029270) in binary!
	0x67b0  @objc ApplicationDelegate.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffd29c0  @objc ApplicationDelegate.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x21cfffd2718  @objc ApplicationDelegate.(null) <stripped>

	// Swift methods
	0x54c80  func <stripped> // method 
	0x55500  func <stripped> // method 
	0x55c00  func <stripped> // method 
	0x560c0  func <stripped> // method 
 }

 class ChronoCore.WidgetSceneViewController {
 class ChronoCore.LocationGraceRegistry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var timeoutByIdentifier : CHDMonotonicTime

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8e8400029230 (0x68400029230) in binary!
	0xbb0c  @objc LocationGraceRegistry.(null) <stripped>
WARNING: couldn't find address 0xbb0c00029208 (0x30c00029208) in binary!
	0xbb0b  @objc LocationGraceRegistry.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x1c4fffd7130  @objc LocationGraceRegistry.(null) <stripped>
	0x22cfffd7648  @objc LocationGraceRegistry.Ësp <stripped>

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
	var monitorAssertion : ¬
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ext : ∑ƒ

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
WARNING: couldn't find address 0x674c00029320 (0x74c00029320) in binary!
	0xaece  @objc AuthorizationMonitor.(null) <stripped>
WARNING: couldn't find address 0x672c00029298 (0x72c00029298) in binary!
	0x6728  @objc AuthorizationMonitor.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x26cfffe2958  @objc AuthorizationMonitor.(null) <stripped>
	0xfffe29c0  @objc AuthorizationMonitor.ˇˇËc∏ <stripped>

	// Swift methods
 }

 class ChronoCore.LocationService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extManager : s√ // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var extManagerSubscription : ∆ // +0x38 (0x8)
	let graceStore : LocationGraceRegistryStore // +0x40 (0x28)
	let inUseAssertionType : LocationInUseAssertion // +0x68 (0x10)
	let authMonitorType : LocationAuthorizationMonitor // +0x78 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let graceStoreFlushInterval : ≈© // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inUseNanosecondsOfGrace : – // +0x0 (0x8)
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
	var authChangedExtensionIdentifiersPublisher : ü∂ // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let authChangedExtensionIdentifiers : ∂ // +0x0 (0x8)

	// Swift methods
 }

 class ChronoCore.DescriptorService : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _descriptorPublisher : wπ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var descriptorProvider : o¨ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : s√ // +0x79050
WARNING: couldn't find address 0x0 (0x0) in binary!
	var descriptorCache : •ø // +0x0
	let configurationService : ClientConfigurationModel // +0x79080
	let taskService : TaskHandling // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var persistentSubscriptions :  empty-list  // +0x79090
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tasks :  empty-list  // +0x0
	let queue : OS_dispatch_queue // +0x790d0
	var extensionEvents : ExtensionEvent // +0x0
	var readyDataSources : DataSources // +0x79100

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6714000292e8 (0x714000292e8) in binary!
	0x6700  @objc DescriptorService.(null) <stripped>
WARNING: couldn't find address 0x66fc00029200 (0x6fc00029200) in binary!
	0x0  @objc DescriptorService.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x5726f436f6e  @objc DescriptorService.(null) <stripped>

	// Swift methods
	0x76ff0  func <stripped> // method 
	0x77400  func <stripped> // method 
	0x781f0  func <stripped> // method 
 }

 struct ChronoCore.DataSources {

	// Properties
	let rawValue : Int // +0x0
 }

 struct ChronoCore.ExtensionEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extension : e» // +0x0
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
	let cacheManager : Ö¡ // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : e¬ // +0x38 (0x28)
	let configurationService : ClientConfigurationModel // +0x60 (0x28)
	let locationService : LocationService // +0x88 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var persistentSubscriptions :  empty-list  // +0x90 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environmentSubscriptions :  empty-list  // +0x98 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : s√ // +0xa0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStore : Ø™ // +0xc8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStoreUI : √≠ // +0xd0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : Ìª // +0x0 (0x0)

	// Swift methods
 }

 class ChronoCore._ChronodStartupHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class ChronoCore.ClientConfigurationModelService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _metricsSpecification : CHSWidgetMetricsSpecification? // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _metricsSpecificationPublisher : Å∆ // +0x18 (0x8)
	var _configuredWidgetContainerDescriptors : [CHSConfiguredWidgetContainerDescriptor]? // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _configuredWidgetContainerDescriptorsPublisher : Å∆ // +0x28 (0x8)
	var widgetConfigurationManager : DuetWidgetConfigurationManager // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var configuredWidgetMetadataCache : Ô™ // +0x38 (0x8)
	let lock : UnfairLock // +0x40 (0x8)

	// Swift methods
	0x80e80  func <stripped> // method 
	0x811e0  func <stripped> // method 
	0x81810  func <stripped> // method 
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
	let cacheManager : Ö¡ // +0x10 (0x28)
	let configurationService : ClientConfigurationModel // +0x38 (0x28)
	let locationService : LocationService // +0x60 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let extensionManager : s√ // +0x68 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentProvidingFactory : e¬ // +0x90 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStore : K¶ // +0xb8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let statefulStoreUI : c≠ // +0xc0 (0x8)
	let lock : UnfairLock // +0xc8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : Ìª // +0x0 (0x0)
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
	let startViewDate : πª // +0x2 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let staleContentDate : πª // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var endViewDate : ß± // +0x6c645f5f (0x0)

	// Swift methods
	0x8f250  func <stripped> // method 
	0x8f5c0  func <stripped> // method 
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
	0x8f9b0  func <stripped> // method 
	0x8fe00  func <stripped> // method 
	0x90080  func <stripped> // method 
 }

 class ChronoCore.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LockProtocol {

	// Properties
	var _lock : os_unfair_lock_s

	// Swift methods
 }
