 protocol ChronoKit.TimelineFileCachingReloadStrategy // 4 requirements
 {
	// class base protocol
	// getter
	// method
	// method
 }
 protocol ChronoKit.FilePromise // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol ChronoKit.EnvironmentProvidingFactory // 2 requirements
 {
	// getter
	// method
 }
 protocol ChronoKit.TimelineCacheManaged // 1 requirements
 {
	// getter
 }
 protocol ChronoKit.TimelineCacheManaging // 7 requirements
 {
	// getter
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol ChronoKit.LockProtocol // 6 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol ChronoKit.ExtendedFileManaging // 11 requirements
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
 protocol ChronoKit.ExtensionManaging // 7 requirements
 {
	// getter
	// getter
	// method
	// method
	// getter
	// getter
	// getter
 }
 protocol ChronoKit.SQLPrimitive // 0 requirements
 {
 }
 protocol ChronoKit.TimelineServicing // 12 requirements
 {
	// class base protocol
	// class base protocol
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// getter
 }
 protocol ChronoKit.CacheURLProviding // 1 requirements
 {
	// method
 }
 protocol ChronoKit.CacheKeyProviding // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol ChronoKit.PowerlogViewServicing // 6 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol ChronoKit.WidgetUpdateTiming // 2 requirements
 {
	// getter
	// method
 }
 protocol ChronoKit.ExtensionFactory // 1 requirements
 {
	// method
 }
 protocol ChronoKit.SystemApplicationWorkspace // 1 requirements
 {
	// method
 }
 protocol ChronoKit.SystemNSExtensionDiscoverer // 3 requirements
 {
	// getter
	// method
	// method
 }
 protocol ChronoKit.DataProtectionMonitoring // 2 requirements
 {
	// getter
	// getter
 }
 protocol ChronoKit.StatefulStoringUI // 7 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol ChronoKit.WidgetAssertionProviding // 1 requirements
 {
	// method
 }
 protocol ChronoKit.AssertedLiveViewProviding // 2 requirements
 {
	// class base protocol
	// class base protocol
 }
 protocol ChronoKit.PowerlogProvider // 3 requirements
 {
	// getter
	// method
	// method
 }
 protocol ChronoKit.ContentEntry // 5 requirements
 {
	// class associated type access function
	// getter
	// setter
	// modify coroutine
	// getter
 }
 protocol ChronoKit.StatefulStoring // 18 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class init
	// getter
	// getter
	// getter
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol ChronoKit.ReloadingStrategy // 5 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol ChronoKit.Assertion // 1 requirements
 {
	// method
 }
 protocol ChronoKit.LiveViewProviding // 2 requirements
 {
	// method
	// method
 }
 protocol ChronoKit.PowerlogUpdateServicing // 2 requirements
 {
	// method
	// method
 }
 protocol ChronoKit.EnvironmentProviding // 2 requirements
 {
	// getter
	// getter
 }
 protocol ChronoKit.Extension // 21 requirements
 {
	// class base protocol
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
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// method
	// method
	// method
	// method
 }
 protocol ChronoKit.WidgetDescriptorProvider // 2 requirements
 {
	// method
	// method
 }
 protocol ChronoKit.WidgetDescriptorCaching // 8 requirements
 {
	// getter
	// getter
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol ChronoKit.WidgetLiveViewTimelineUI // 3 requirements
 {
	// getter
	// method
	// method
 }
 protocol ChronoKit.DataProtectionLevelProviding // 1 requirements
 {
	// method
 }

 enum __C.BSSqliteDatabaseConnectionDataProtectionClass { }

 enum __C.RBColorMode { }

 enum __C.CGImagePreferredColorConversionMode { }

 enum __C.ASTCBlockSize { }

 struct __C.RBDrawableStatisticsKey {

	// Properties
	var _rawValue : NSString
 }

 enum __C.CHSAppearanceColorScheme { }

 class __C.CFString {
 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : ›!
 }

 class __C.CGImage {
 struct __C.RBLayerCopyImageKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.RBDrawableStatisticsMask {

	// Properties
	let rawValue : UInt
 }

 struct __C.URLResourceKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.FileProtectionType {

	// Properties
	var _rawValue : NSString
 }

 struct __C.FileAttributeKey {

	// Properties
	var _rawValue : NSString
 }

 class ChronoKit.TimelineStore {
 enum ChronoKit.SnapshotFormat {

	// Properties
	case astc : ASTCOptions
WARNING: couldn't find address 0x0 (0x0) in binary!
	case jpeg : ÷
	case png  
 }

 struct ChronoKit.ASTCOptions {

	// Properties
	var reason : String? // +0x0
	var blockSize : ASTCBlockSize // +0x10
	var usesCompression : Bool? // +0x14
	var skipCIF10SRGBCheck : Bool? // +0x15
	var preferredColorConversionMode : CGImagePreferredColorConversionMode // +0x18
 }

 struct ChronoKit.SnapshotOptions {

	// Properties
	var colorMode : RBColorMode // +0x0
	var scale : Float? // +0x8
	var contentIdentifierAttributeName : String // +0x10
	var format : SnapshotFormat // +0x20
 }

 class ChronoKit.LayerSnapshotter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var options : SnapshotOptions // +0x10 (0x3d)
	var screenshotManager : CHSScreenshotManager // +0x50 (0x8)
	var _lock_workingSet : Set<CHSWidgetKey> // +0x58 (0x8)
	let setLock : UnfairLock // +0x60 (0x8)
	var osLog : OS_os_log // +0x68 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : å // +0x37 (0x0)

	// Swift methods
	0x4b40  func <stripped> // getter 
	0x4bf0  func <stripped> // setter 
	0x4ce0  func <stripped> // modifyCoroutine 
	0x4da0  func <stripped> // getter 
	0x4dd0  func <stripped> // setter 
	0x4e10  func <stripped> // modifyCoroutine 
	0x4ed0  func <stripped> // getter 
	0x4f00  func <stripped> // setter 
	0x4f40  func <stripped> // modifyCoroutine 
	0x5050  func <stripped> // getter 
	0x50a0  func <stripped> // setter 
	0x5100  func <stripped> // modifyCoroutine 
	0x5140  class func LayerSnapshotter.__allocating_init(options:logger:screenshotManager:) // init 
	0x53e0  func <stripped> // method 
	0x5680  func <stripped> // method 
 }

 enum ChronoKit.SnapshotterError {

	// Properties
	case transcodingFailed : (reason: String)
	case snapshottingLayerFailed  
	case savingFailed  
 }

 class ChronoKit.AssertedStatefulStore {
 class ChronoKit.SQLDatabase : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let defaultCacheSize : Int
	let lock : UnfairLock
	let database : BSSqliteDatabaseConnection
	var locked_transactionStack : [String]
	var locked_largeCacheAssertionCount : UInt

	// Swift methods
 }

 enum ChronoKit.Storage {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case file : y

	case memory  
 }

 enum ChronoKit.SQLiteError {

	// Properties
	case Success  
	case Failure  
	case OpenFailed  
	case InvalidSyntax  
	case ResultMismatch  
 }

 class ChronoKit.ArchiveFilePromise : _SwiftObject /usr/lib/swift/libswiftCore.dylib, FilePromise {

	// Properties
	let fileManager : ExtendedFileManaging
WARNING: couldn't find address 0x0 (0x0) in binary!
	let destination : ¹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let protectionLevel : ƒ
	var intermediates : Intermediates

	// Swift methods
	0x11340  func <stripped> // method 
	0x11590  func <stripped> // method 
	0x12160  func <stripped> // method 
	0x12a10  func <stripped> // method 
	0x12ea0  func <stripped> // method 
 }

 struct ChronoKit.Intermediates {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let temporaryDirectory : ¹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let temporaryURL : ¹
	let writeHandle : NSFileHandle
	let readHandle : NSFileHandle
WARNING: couldn't find address 0x0 (0x0) in binary!
	let signpost : Ë
 }

 struct ChronoKit.ReloadConfiguration {

	// Properties
	let type : ReloadType
	let cost : ReloadCost
	let reason : ReloadReason
	let retryAttempts : Int
 }

 enum ChronoKit.ReloadCost {

	// Properties
	case budgeted  
	case free  
 }

 enum ChronoKit.ReloadType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case scheduled : £	
	case immediate  
 }

 enum ChronoKit.ReloadReason {

	// Properties
	case systemRequest : String
	case scheduledRetry : ReloadReason
	case environmentMismatch  
	case environmentChanged  
	case extensionChanged  
	case stale  
	case externalRequest  
	case timelineExhausted  
	case initial  
	case badTimelineData  
	case appAuthChanged  
	case significantLocationChange  
 }

 enum ChronoKit.PowerlogOwner {

	// Properties
	case chronod  
	case notificationCenter  
 }

 class ChronoKit.WidgetCacheManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib, TimelineCacheManaging {

	// Properties
	var fileManager : NSFileManager // +0x10 (0x8)
	var urlProvider : CacheURLProviding // +0x18 (0x28)
	var descriptorProvider : CacheKeyProviding // +0x40 (0x28)
	var protectionLevelProvider : DataProtectionLevelProviding // +0x68 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var archiveValidationOptions :  // +0x19 (0x0)

	// Swift methods
	0x17050  func <stripped> // getter 
	0x17080  func <stripped> // setter 
	0x170c0  func <stripped> // modifyCoroutine 
	0x171b0  func <stripped> // getter 
	0x171f0  func <stripped> // setter 
	0x17250  func <stripped> // modifyCoroutine 
	0x17360  func <stripped> // getter 
	0x173b0  func <stripped> // setter 
	0x17410  func <stripped> // modifyCoroutine 
	0x17450  class func WidgetCacheManager.__allocating_init(descriptorProvider:urlProvider:protectionLevelProvider:fileManager:) // init 
	0x17740  func <stripped> // method 
	0x17810  func <stripped> // method 
	0x178a0  func <stripped> // method 
	0x17b40  func <stripped> // method 
	0x18080  func <stripped> // method 
	0x181e0  func <stripped> // method 
	0x18520  func <stripped> // method 
	0x189c0  func <stripped> // method 
 }

 enum ChronoKit.CacheManagementError {

	// Properties
	case extensionNotFound : (bundleID: String)
	case unsupportedEntryKey : WidgetEntryKey
	case fileDoesNotExist  
	case reloadDataHasPassed  
 }

 class ChronoKit.PlaceholderUI {
 struct ChronoKit._PlaceholderLiveView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultView : 9
	var placeholderUI : PlaceholderUI
	var widgetEntryKey : WidgetEntryKey
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _entry : ¿	
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _backgroundColor : ù
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _environmentValues : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentDidChange : “
 }

 struct ChronoKit.HostingControllerRenderStatistics {

	// Properties
	let totalRenderTime : Double // +0x0
	let totalSubmitTime : Double // +0x8
	let totalFramesRendered : Int // +0x10
	let totalFramesSubmitted : Int // +0x18
 }

 class ChronoKit.WidgetHostingController {
 class ChronoKit.AvocadoViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var currentActionURL : ù
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _handleLaunchRequest : C
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _isHidden : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _isSnapshotting : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _allowsHitTesting : 
	var disableAnimations : Bool

	// Swift methods
	0x1fcc0  func <stripped> // getter 
	0x1fd00  func <stripped> // getter 
	0x1fdb0  func <stripped> // getter 
	0x1fdd0  func <stripped> // getter 
	0x1fdf0  func <stripped> // getter 
 }

 class ChronoKit.AvocadoLiveViewHostingController {
 struct ChronoKit.AvocadoViewHost {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _viewModel : 
	var content : A
 }

 struct ChronoKit.WidgetLaunchModifier {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentURL : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handleLaunchRequest :  empty-list 
 }

 class ChronoKit.DirectoryCacheKeyProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cacheURL : ¹ // +0x5 (0x0)

	// Swift methods
	0x26880  func <stripped> // getter 
	0x268d0  func <stripped> // setter 
	0x26930  func <stripped> // modifyCoroutine 
	0x26980  class func DirectoryCacheKeyProvider.__allocating_init(subsystem:in:fileManager:) // init 
	0x26a30  class func DirectoryCacheKeyProvider.__allocating_init(cacheURL:) // init 
	0x26af0  func <stripped> // method 
	0x26b00  func <stripped> // method 
	0x26bf0  func <stripped> // method 
 }

 class ChronoKit.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LockProtocol {

	// Properties
	var _lock : os_unfair_lock_s

	// Swift methods
 }

 class ChronoKit.ConfiguredWidgetMetadataCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let lock : UnfairLock
	let backingStore : ChronoMetadataStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startDatesForWidgetIDs : String

	// Swift methods
	0x27380  class func ConfiguredWidgetMetadataCache.__allocating_init(backingStore:) // init 
	0x27d00  func <stripped> // method 
	0x29150  func <stripped> // method 
	0x29750  func <stripped> // method 
 }

 enum ChronoKit.PowerlogWidgetLocation {

	// Properties
	case homescreen : Int
	case unknown  
	case todayView  
	case notificationCenter  
 }

 struct ChronoKit.PowerlogWidgetViewIdentity {

	// Properties
	let widget : CHSWidget // +0x0
	let identifier : String // +0x8
	let inStack : Bool // +0x18
	let location : PowerlogWidgetLocation // +0x20
 }

 class ChronoKit.PowerlogViewService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var provider : PowerlogProvider
	var entries : PowerlogWidgetViewIdentity

	// Swift methods
	0x2c800  func <stripped> // method 
	0x2c860  func <stripped> // method 
	0x2c8c0  func <stripped> // method 
	0x2c920  func <stripped> // method 
	0x2c980  func <stripped> // method 
	0x2c9e0  func <stripped> // method 
	0x2cba0  func <stripped> // method 
 }

 class ChronoKit.PowerlogViewEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var identity : PowerlogWidgetViewIdentity
	var _metrics : PowerlogViewMetrics
	var beingViewedStartTime : BSMonotonicReferenceTime?
	var isBeingViewed : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdad800024368 (0x2d800024368) in binary!
	0x48000000c  @objc PowerlogViewEntry.(null) <stripped>

	// Swift methods
	0x2dd50  func <stripped> // setter 
	0x2de10  func <stripped> // getter 
	0x2dfc0  func <stripped> // method 
	0x2e100  func <stripped> // method 
 }

 struct ChronoKit.PowerlogViewMetrics {

	// Properties
	var totalFrameRenderTime : Double // +0x0
	var totalFrameSubmitTime : Double // +0x8
	var totalFramesRendered : Int // +0x10
	var totalFramesSubmitted : Int // +0x18
	var totalTimeViewed : Double // +0x20
 }

 class ChronoKit.SnapshotStore {
 struct ChronoKit.WidgetEntryKey {

	// Properties
	let widget : CHSWidget // +0x0
	let metrics : CHSWidgetMetrics // +0x8
 }

 class ChronoKit.ExpiringStatefulStore {
 struct ChronoKit.TimestampedAssertion {

	// Properties
	let assertion : Assertion
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : £	
 }

 enum ChronoKit.ReloadState {

	// Properties
	case reload  
	case clean  
	case failed  
	case blocked  
 }

 enum ChronoKit.SimpleError {

	// Properties
	case message : String
 }

 class ChronoKit.Dates : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum ChronoKit.Utilities { }

 enum ChronoKit.SQLValue {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case int : Õ
	case real : Double
	case text : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case blob : 7ÿ
	case null  
 }

 class ChronoKit.WidgetReaper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var progress : NSProgress
WARNING: couldn't find address 0x0 (0x0) in binary!
	var candidateURLsToRemove :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var candidateURLsToRemoveWithProtectedChildren :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var urlsToProtect :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var objectWillChange : «
	var fileManager : NSFileManager

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd2c000024348 (0x2c000024348) in binary!
	0x10554  @objc WidgetReaper.(null) <stripped>
WARNING: couldn't find address 0xd2a800024390 (0x2a800024390) in binary!
	0xcf08  @objc WidgetReaper.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x2ecfff93660  @objc WidgetReaper.(null) <stripped>
	0x2dcfff98c18  @objc WidgetReaper. <stripped>

	// Swift methods
	0x39800  func <stripped> // getter 
	0x398a0  func <stripped> // setter 
	0x399a0  func <stripped> // modifyCoroutine 
	0x39a20  func <stripped> // getter 
	0x39a40  func <stripped> // setter 
	0x39a60  func <stripped> // modifyCoroutine 
	0x39b80  func <stripped> // getter 
	0x39be0  func <stripped> // setter 
	0x39c40  func <stripped> // modifyCoroutine 
	0x39d40  func <stripped> // getter 
	0x39d80  func <stripped> // setter 
	0x39dd0  func <stripped> // modifyCoroutine 
	0x39490  class func WidgetReaper.__allocating_init<A, B>(candidateURLsToRemove:urlsToProtect:fileManager:) // init 
	0x3a7f0  func <stripped> // method 
	0x3a9f0  func <stripped> // method 
 }

 class ChronoKit._WidgetExtensionFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ExtensionFactory {
	// Swift methods
 }

 class ChronoKit._SystemNSExtensionDiscoverer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SystemNSExtensionDiscoverer {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _publisher : kþ
	var extensionMatchingToken : Any?

	// Swift methods
 }

 class ChronoKit.ExtensionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _extensionsPublisher : {þ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _addedPublisher : kþ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _updatedPublisher : kþ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _removedPublisher : kþ
	var extensionsByIdentifier : Extension
WARNING: couldn't find address 0x0 (0x0) in binary!
	var removedPluginUUIDsByIdentifier : String
	var queue : OS_dispatch_queue
	let lookupLock : UnfairLock
	let lock : UnfairLock
WARNING: couldn't find address 0x0 (0x0) in binary!
	var nsExtensionDiscovererSubscription : ç
	var nsExtensionDiscoverer : SystemNSExtensionDiscoverer
	var applicationWorkspace : SystemApplicationWorkspace
	var extensionFactory : ExtensionFactory

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xcef4000243f8 (0x6f4000243f8) in binary!
	0x1051c  @objc ExtensionManager.(null) <stripped>
WARNING: couldn't find address 0xd27000024358 (0x27000024358) in binary!
	0xced0  @objc ExtensionManager.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x2a4fff9bc78  @objc ExtensionManager.(null) <stripped>
	0xfff9bd90  @objc ExtensionManager.Ø <stripped>

	// Swift methods
 }

 class ChronoKit.WidgetPreviewHostingViewController {
 class ChronoKit.TimelineDelegate : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd81c000242b8 (0x1c000242b8) in binary!
	0x104e4  @objc TimelineDelegate.(null) <stripped>
WARNING: couldn't find address 0xd23800024320 (0x23800024320) in binary!
	0x18000000c  @objc TimelineDelegate.(null) <stripped>
WARNING: couldn't find address 0xda20000242b0 (0x220000242b0) in binary!
	0x18000000c  @objc TimelineDelegate.(null) <stripped>

	// Swift methods
 }

 struct ChronoKit._AutoupdatingPreviewView {

	// Properties
	var timeline : TLTimeline // +0x0
	var proxy : TimelineDelegate // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentEntry : K // +0x10
 }

 class ChronoKit.PowerlogUpdateEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let wakeIdentifier : String
	let identity : PowerlogUpdateIdentity
	let cost : PowerlogUpdateCost
	let reason : PowerlogWakeReason
	let remainingBudget : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xda20000242b0 (0x220000242b0) in binary!
	0x18000000c  @objc PowerlogUpdateEntry.(null) <stripped>

	// Swift methods
	0x49c00  func <stripped> // getter 
	0x49e80  func <stripped> // method 
	0x49fa0  func <stripped> // method 
 }

 class ChronoKit.WidgetPreviewInfo : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var metricsSpecification : CHSWidgetMetricsSpecification // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environment : y // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x104b400024540 (0x4b400024540) in binary!
	0xcfa8  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0xc4cc00024340 (0x4cc00024340) in binary!
	0x1046c  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0xd1c0000242a8 (0x1c0000242a8) in binary!
	0xce20  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe62a8  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x1bcfffe5cf0  @objc WidgetPreviewInfo.(null) <stripped>
	0x194fffe5dd8  @objc WidgetPreviewInfo.AÿÕƒøuvH‹=õ <stripped>

	// Swift methods
	0x4ac20  class func <stripped> // getter 
	0x4ac30  class func WidgetPreviewInfo.__allocating_init(coder:) // init 
	0x4aeb0  func <stripped> // method 
 }

 class ChronoKit.IOSEnvironmentProvidingFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let extensionManager : ExtensionManaging
	var _lock_mapValidBundleProviders : EnvironmentProviding
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list 
	let lock : UnfairLock
	var system : EnvironmentProviding

	// Swift methods
	0x4b2e0  class func IOSEnvironmentProvidingFactory.__allocating_init(extensionManager:) // init 
	0x4b8c0  func <stripped> // getter 
	0x4b900  func <stripped> // setter 
	0x4b960  func <stripped> // modifyCoroutine 
	0x4b9a0  func <stripped> // method 
 }

 struct ChronoKit.DebugOverlay {

	// Properties
	let areDebugLabelsEnabled : Bool
	var text : String
	var content : A
 }

 class ChronoKit.StatefulStore {
 class ChronoKit.ReloadTask {
 class ChronoKit.ReloadTaskPair {
 struct ChronoKit.HistoricReload {

	// Properties
	let reason : ReloadReason
WARNING: couldn't find address 0x0 (0x0) in binary!
	let created : Ù
 }

 struct ChronoKit.ExtensionMetadata {

	// Properties
	var bundleID : String // +0x0
	var version : String // +0x10
	var descriptors : [CHSAvocadoDescriptor] // +0x20
 }

 class ChronoKit.IOSSystemEnvironmentProvider : EnvironmentProvider {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var notificationSubscriptions :  empty-list  // +0x0 (0x8)
	var colorSchemeObserver : Swift.AnyObject? // +0x80000400 (0x8)

	// Swift methods
 }

 class ChronoKit.PlaceholderReloadStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var widgetEnvironment : ×ý // +0x10 (0x10)
	var statefulStore : StatefulStore // +0x20 (0x8)
	let cacheManager : TimelineCacheManaging // +0x28 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : å // +0x0 (0x0)

	// Swift methods
	0x61b60  func <stripped> // getter 
	0x61bc0  func <stripped> // setter 
	0x61c30  func <stripped> // modifyCoroutine 
	0x61cf0  func <stripped> // getter 
	0x61d20  func <stripped> // setter 
	0x61d70  func <stripped> // modifyCoroutine 
	0x61f10  func <stripped> // getter 
	0x61f60  func <stripped> // setter 
	0x61fc0  func <stripped> // modifyCoroutine 
	0x62000  class func PlaceholderReloadStrategy.__allocating_init(cacheManager:logger:) // init 
	0x62180  func <stripped> // method 
	0x62830  func <stripped> // method 
	0x62880  func <stripped> // method 
	0x64e60  func <stripped> // method 
	0x64e70  func <stripped> // method 
	0x658e0  func <stripped> // method 
 }

 class ChronoKit.PowerlogUpdateService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var provider : PowerlogProvider
	var _entries : PowerlogUpdateEntry
	var lock : UnfairLock

	// Swift methods
	0x6d130  func <stripped> // method 
	0x6d6f0  func <stripped> // method 
 }

 enum ChronoKit.ExtendedAttributeError {

	// Properties
	case attributeNameNotFound : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case posixFailure : returnCode
 }

 struct ChronoKit.SQLStatement {

	// Properties
	let bindings : SQLValue // +0x0
	let parameterizedStatement : String // +0x8
 }

 struct ChronoKit.StringInterpolation {

	// Properties
	var value : String // +0x0
	var bindings : SQLValue // +0x10
 }

 class ChronoKit.DefaultPowerlogProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, PowerlogProvider {

	// Properties
	var owner : PowerlogOwner

	// Swift methods
 }

 struct ChronoKit.PrimitiveBox {

	// Properties
	var wrapped : A
 }

 enum ChronoKit.CodingKeys {

	// Properties
	case wrapped  
 }

 class ChronoKit.IOSBundleEnvironmentProvider : EnvironmentProvider {

	// Properties
	let extensionManager : ExtensionManaging // +0x0 (0x28)
	let identifier : String // +0x74735f5f (0x10)
	let systemProvider : EnvironmentProviding // +0x0 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list  // +0x45545f5f (0x8)

	// Swift methods
	0x724b0  func <stripped> // method 
	0x72670  func <stripped> // method 
 }

 struct ChronoKit.SQLResultError {

	// Properties
	let code : Code // +0x0
	let localizedDescription : String // +0x0
 }

 struct ChronoKit.SQLResult {

	// Properties
	let resultArray : SQLValue // +0x0
 }

 enum ChronoKit.Code {

	// Properties
	case TypeMismatch  
 }

 class ChronoKit.WidgetCacheURLProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var subdirectory : String?
	var fileExtension : String

	// Swift methods
	0x754d0  func <stripped> // getter 
	0x75510  func <stripped> // setter 
	0x75550  func <stripped> // modifyCoroutine 
	0x75630  func <stripped> // getter 
	0x75670  func <stripped> // setter 
	0x756b0  func <stripped> // modifyCoroutine 
	0x753a0  class func WidgetCacheURLProvider.__allocating_init(subdirectory:fileExtension:) // init 
	0x75750  func <stripped> // method 
 }

 class ChronoKit.ReloadTaskCancellable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cancellable : Yñ
	let _description : String?

	// Swift methods
	0x76730  class func ReloadTaskCancellable.__allocating_init(_:description:) // init 
 }

 class ChronoKit.AnyReloadingStrategy {
 class ChronoKit._AnyReloadingStrategyBase {
 class ChronoKit._AnyReloadingStrategyBox {
 class ChronoKit.ChronoMetadataStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let db : SQLDatabase
	let extensionStore : ExtensionStore
	let configuredWidgetStore : ConfiguredWidgetStore

	// Swift methods
	0x78fb0  class func ChronoMetadataStore.__allocating_init(storage:) // init 
 }

 class ChronoKit.MutableStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let extensionStore : MutableExtensionStore
	let configuredWidgetStore : MutableConfiguredWidgetStore

	// Swift methods
	0x7a470  func <stripped> // method 
 }

 class ChronoKit.DatabaseAccessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _db : SQLDatabase

	// Swift methods
 }

 class ChronoKit.ExtensionStore : ChronoMetadataStore.DatabaseAccessor {
	// Swift methods
	0x7a620  func <stripped> // method 
	0x7b2b0  func <stripped> // method 
	0x7b700  func <stripped> // method 
 }

 class ChronoKit.MutableExtensionStore : ChronoMetadataStore.ExtensionStore {
	// Swift methods
	0x7c650  func <stripped> // method 
	0x7c6f0  func <stripped> // method 
	0x7dc40  func <stripped> // method 
 }

 class ChronoKit.ConfiguredWidgetStore : ChronoMetadataStore.DatabaseAccessor {
	// Swift methods
	0x7dda0  func <stripped> // method 
 }

 class ChronoKit.MutableConfiguredWidgetStore : ChronoMetadataStore.ConfiguredWidgetStore {
	// Swift methods
	0x7e750  func <stripped> // method 
	0x7ed50  func <stripped> // method 
	0x7f010  func <stripped> // method 
 }

 class ChronoKit.BlockAssertion : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Assertion {

	// Properties
	let lock : UnfairLock
	var block : ()?

	// Swift methods
	0x891b0  class func BlockAssertion.__allocating_init(_:) // init 
 }

 class ChronoKit.WidgetEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var protectionType : ¡
	let lock : UnfairLock
	let key : WidgetEntryKey
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _cachedViewableEntry : “
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _configuredDate : £	
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentEntry : ãö
	let environmentProvider : EnvironmentProviding
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _content : —
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : Õî

	// Swift methods
	0x8a100  func <stripped> // getter 
	0x8a150  func <stripped> // setter 
	0x8a1b0  func <stripped> // modifyCoroutine 
	0x8a240  func <stripped> // getter 
	0x8a470  func <stripped> // getter 
	0x8a510  func <stripped> // setter 
	0x8a710  func <stripped> // getter 
	0x8a760  func <stripped> // setter 
	0x8a9b0  func <stripped> // modifyCoroutine 
	0x8ac20  func <stripped> // method 
	0x8ac80  func <stripped> // method 
	0x8b130  func <stripped> // getter 
	0x8b2e0  class func WidgetEntry.__allocating_init(key:protectionType:environmentProvider:) // init 
	0x8b600  func <stripped> // method 
 }

 enum ChronoKit.WidgetEntryError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case viewDecodingFailed : eö
WARNING: couldn't find address 0x0 (0x0) in binary!
	case entryNotFound : ûì
WARNING: couldn't find address 0x0 (0x0) in binary!
	case environmentNotFound : -ö
	case missingContent  
 }

 class ChronoKit.WidgetUpdateTimer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subject :  // +0x10 (0x8)
	let quantum : Double // +0x18 (0x8)
	let queue : OS_dispatch_queue // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scheduledDate : £	 // +0x0 (0x0)
	var _timer : OS_dispatch_source_timer? // +0x0 (0x8)

	// Swift methods
	0x8c9d0  class func WidgetUpdateTimer.__allocating_init(quantum:queue:) // init 
 }

 class ChronoKit.WidgetExtension : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identifier : String // +0x10 (0x10)
	let version : String // +0x20 (0x10)
	let isInternal : Bool // +0x30 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pluginUUID : ›ì // +0x45545f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheGUID : ›ì // +0x0 (0x0)
	let sequenceNumber : Int // +0xacec0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lastModifiedDate : £	 // +0x8008 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bundleURL : ¹ // +0xacec0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let containerBundleURL : ¹ // +0x0 (0x0)
	let containerBundleVersion : String // +0x0 (0x10)
	let containerBundleIdentifier : String // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dataContainerURL : ¹ // +0x77735f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let systemDataContainerURL : ¹ // +0x7079745f (0x0)
	let descriptorDiscoveryIsRestricted : Bool // +0x45545f5f (0x1)
	let wantsLocation : Bool // +0x0 (0x1)
	let availableLocalizations : [String] // +0xb4ec8 (0x8)
	let allowsMixedLocalizations : Bool // +0x2a72 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let requestedDataProtection : ƒ // +0xb4ec8 (0x0)
	let nsExtension : NSExtension // +0x0 (0x8)

	// Swift methods
	0x8eed0  func <stripped> // method 
	0x8efd0  func <stripped> // method 
 }

 enum ChronoKit.WidgetExtensionError {

	// Properties
	case noProxy  
	case noBundleURL  
	case noDataContainerURL  
	case noContainingBundle  
	case noContainingBundleURL  
 }

 enum ChronoKit.PowerlogUpdateCost {

	// Properties
	case budgeted  
	case free  
 }

 enum ChronoKit.PowerlogWakeReason {

	// Properties
	case default  
	case stale  
	case appForeground  
	case appSession  
	case environmentChange  
	case sigLocationChange  
	case externalRequest  
	case systemRequest  
	case snapshot  
	case debug  
	case other  
 }

 struct ChronoKit.PowerlogUpdateIdentity {

	// Properties
	let widget : CHSWidget // +0x0
	let identifier : String // +0x8
 }

 struct ChronoKit.WidgetCacheKey {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var baseURL : ¹
	var widget : CHSWidget?
	var metrics : CHSWidgetMetrics?
 }

 class ChronoKit.WidgetPreviewTimelineEntry : TLTimelineBlobEntry /System/Library/PrivateFrameworks/Timeline.framework/Timeline {

	// Properties
	var tl_errors : [TLPreviewTimelineError]
	var tl_selectableRegions : [TLPreviewTimelineSelectableRegion]
	var backgroundColor : UIColor?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd188000241d0 (0x188000241d0) in binary!
	0x1041c  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0xd170000241a8 (0x170000241a8) in binary!
	0x10404  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x103f800024608 (0x3f800024608) in binary!
	0xc440  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x103f6000245f8 (0x3f6000245f8) in binary!
	0x103f8  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0xceec00024180 (0x6ec00024180) in binary!
	0xcd88  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x74694b6f6e  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x433a5443454a4f52 (0x443454a4f52) in binary!
	0x2332e342e34  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x405a19999999999a (0x1999999999a) in binary!
	0x0  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x656e696c656d6954 (0x16c656d6954) in binary!
	0x5a440010050  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find offset 0xffffffe8 in binary!
WARNING: couldn't find offset 0xffffffe8 in binary!
WARNING: couldn't find address 0xfff5611cffffffe8 (0x0) in binary!
	0x7e00000002  @objc WidgetPreviewTimelineEntry.(null) <stripped>

	// Swift methods
	0x92b60  func <stripped> // getter 
	0x92ba0  func <stripped> // setter 
	0x92c00  func <stripped> // modifyCoroutine 
	0x92ce0  func <stripped> // getter 
	0x92dd0  func <stripped> // setter 
	0x92f10  func <stripped> // modifyCoroutine 
	0x93000  func <stripped> // getter 
	0x93040  func <stripped> // setter 
	0x93090  func <stripped> // modifyCoroutine 
	0x94000  func <stripped> // getter 
	0x94510  func <stripped> // getter 
	0x945b0  func <stripped> // getter 
 }

 class ChronoKit.PlaceholderEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var protectionType : ¡ // +0x0 (0x0)
	var states : WidgetEntryKey // +0x0 (0x8)
	var reloadHistory : WidgetEntryKey // +0x0 (0x8)
	let lock : UnfairLock // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let logger : å // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : {þ // +0x0 (0x8)
	var _viewCollections : WidgetEntryKey // +0x0 (0x8)
	let key : String // +0x0 (0x10)
	let environmentProvider : EnvironmentProviding // +0x0 (0x28)

	// Swift methods
	0x95940  func <stripped> // getter 
	0x95990  func <stripped> // setter 
	0x959f0  func <stripped> // modifyCoroutine 
	0x95b40  func <stripped> // getter 
	0x95bc0  func <stripped> // setter 
	0x95c00  func <stripped> // modifyCoroutine 
	0x95de0  func <stripped> // getter 
	0x95e80  func <stripped> // getter 
	0x95f50  func <stripped> // method 
	0x960a0  func <stripped> // method 
	0x96130  func <stripped> // method 
	0x965c0  func <stripped> // method 
	0x96630  func <stripped> // method 
	0x968a0  func <stripped> // method 
	0x96ed0  func <stripped> // method 
	0x97300  func <stripped> // method 
	0x97670  func <stripped> // method 
	0x977a0  func <stripped> // method 
	0x97970  func <stripped> // method 
	0x97ba0  func <stripped> // getter 
	0x957f0  class func PlaceholderEntry.__allocating_init(key:protectionType:environmentProvider:logger:) // init 
 }

 struct ChronoKit.HistoricReload {

	// Properties
	let reason : ReloadReason // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let created : Ù // +0x8
 }

 enum ChronoKit.SingleWidgetReloadState {

	// Properties
	case reload  
	case reloading  
	case clean  
	case failed  
 }

 class ChronoKit.EnvironmentProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var __environmentValues : }÷ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environmentDidChangePublisher : {þ // +0x0 (0x8)
	let lock : UnfairLock // +0x77735f5f (0x8)

	// Swift methods
	0x9c540  func <stripped> // getter 
 }

 class ChronoKit.WidgetDescriptorCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib, WidgetDescriptorCaching {

	// Properties
	let lock : UnfairLock
	var provider : WidgetDescriptorProvider
	let backingStore : ChronoMetadataStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _descriptorUpdatePublisher : {þ
	var extensionCache : ExtensionMetadata
	var outstandingFetches : Set<String>

	// Swift methods
	0x9d130  class func WidgetDescriptorCache.__allocating_init(backingStore:) // init 
 }

 class ChronoKit.ExtensionSystemDataCacheKeyProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var subsystemIdentifier : String
	var extensionManager : ExtensionManaging
	var fileManager : NSFileManager

	// Swift methods
	0xa3150  class func ExtensionSystemDataCacheKeyProvider.__allocating_init(subsystemIdentifier:extensionManager:fileManager:) // init 
	0xa3200  func <stripped> // method 
	0xa3400  func <stripped> // method 
	0xa34d0  func <stripped> // method 
 }

 struct ChronoKit.WidgetLiveView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultView : 9
	var timelineUI : WidgetLiveViewTimelineUI
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _entry : Uê
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _backgroundColor : ù
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _environmentValues : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentDidChange : “
 }

 class ChronoKit.TimelineUI {
 class ChronoKit.PlaceholderStatefulStore {
 struct ChronoKit.FixedDataProtectionProvider: DataProtectionLevelProviding {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var protectionType : ¡
 }

 struct ChronoKit.ExtensionDataProtectionLevelProvider: DataProtectionLevelProviding {

	// Properties
	var extensionManager : ExtensionManaging
WARNING: couldn't find address 0x0 (0x0) in binary!
	var default : ¡
 }
