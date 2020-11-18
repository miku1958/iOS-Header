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
 protocol ChronoKit.ExtensionManaging // 6 requirements
 {
	// getter
	// getter
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
	var _os_unfair_lock_opaque : ó*
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
	case jpeg : Á
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
	var logger : ’ // +0x37 (0x0)

	// Swift methods
	0x4910  func <stripped> // getter 
	0x49c0  func <stripped> // setter 
	0x4ab0  func <stripped> // modifyCoroutine 
	0x4b70  func <stripped> // getter 
	0x4ba0  func <stripped> // setter 
	0x4be0  func <stripped> // modifyCoroutine 
	0x4ca0  func <stripped> // getter 
	0x4cd0  func <stripped> // setter 
	0x4d10  func <stripped> // modifyCoroutine 
	0x4e20  func <stripped> // getter 
	0x4e70  func <stripped> // setter 
	0x4ed0  func <stripped> // modifyCoroutine 
	0x4f10  class func LayerSnapshotter.__allocating_init(options:logger:screenshotManager:) // init 
	0x51b0  func <stripped> // method 
	0x5450  func <stripped> // method 
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
	case file : i
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
	let destination : ©
WARNING: couldn't find address 0x0 (0x0) in binary!
	let protectionLevel : k
	var intermediates : Intermediates

	// Swift methods
	0x110b0  func <stripped> // method 
	0x11300  func <stripped> // method 
	0x11ed0  func <stripped> // method 
	0x12780  func <stripped> // method 
	0x12c10  func <stripped> // method 
 }

 struct ChronoKit.Intermediates {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let temporaryDirectory : ©
WARNING: couldn't find address 0x0 (0x0) in binary!
	let temporaryURL : ©
	let writeHandle : NSFileHandle
	let readHandle : NSFileHandle
WARNING: couldn't find address 0x0 (0x0) in binary!
	let signpost : ª
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
	case scheduled : ì
	case immediate  
 }

 enum ChronoKit.ReloadReason {

	// Properties
	case scheduledRetry : ReloadReason
	case environmentMismatch  
	case environmentChanged  
	case extensionChanged  
	case stale  
	case externalRequest  
	case systemRequest  
	case timelineExhausted  
	case initial  
	case badTimelineData  
	case appAuthChanged  
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
	var archiveValidationOptions : Î // +0x19 (0x0)

	// Swift methods
	0x16c70  func <stripped> // getter 
	0x16ca0  func <stripped> // setter 
	0x16ce0  func <stripped> // modifyCoroutine 
	0x16dd0  func <stripped> // getter 
	0x16e10  func <stripped> // setter 
	0x16e70  func <stripped> // modifyCoroutine 
	0x16f80  func <stripped> // getter 
	0x16fd0  func <stripped> // setter 
	0x17030  func <stripped> // modifyCoroutine 
	0x17070  class func WidgetCacheManager.__allocating_init(descriptorProvider:urlProvider:protectionLevelProvider:fileManager:) // init 
	0x17360  func <stripped> // method 
	0x17430  func <stripped> // method 
	0x174c0  func <stripped> // method 
	0x17760  func <stripped> // method 
	0x17ca0  func <stripped> // method 
	0x17e00  func <stripped> // method 
	0x18140  func <stripped> // method 
	0x185e0  func <stripped> // method 
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
	let defaultView : )
	var placeholderUI : PlaceholderUI
	var widgetEntryKey : WidgetEntryKey
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _entry : Ø
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _backgroundColor : È
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _environmentValues : ø
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentDidChange : É
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
	var currentActionURL : È
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _handleLaunchRequest : 3
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _isHidden : ˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _isSnapshotting : ˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _allowsHitTesting : ˝
	var disableAnimations : Bool

	// Swift methods
	0x20440  func <stripped> // getter 
	0x20480  func <stripped> // getter 
	0x20530  func <stripped> // getter 
	0x20550  func <stripped> // getter 
	0x20570  func <stripped> // getter 
 }

 class ChronoKit.AvocadoLiveViewHostingController {
 struct ChronoKit.AvocadoViewHost {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _viewModel : ˘
	var content : A
 }

 struct ChronoKit.WidgetLaunchModifier {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentURL : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handleLaunchRequest :  empty-list 
 }

 class ChronoKit.DirectoryCacheKeyProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cacheURL : © // +0x5 (0x0)

	// Swift methods
	0x27080  func <stripped> // getter 
	0x270d0  func <stripped> // setter 
	0x27130  func <stripped> // modifyCoroutine 
	0x27180  class func DirectoryCacheKeyProvider.__allocating_init(subsystem:in:fileManager:) // init 
	0x27250  class func DirectoryCacheKeyProvider.__allocating_init(cacheURL:) // init 
	0x27310  func <stripped> // method 
	0x27320  func <stripped> // method 
	0x27410  func <stripped> // method 
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
	0x27b90  class func ConfiguredWidgetMetadataCache.__allocating_init(backingStore:) // init 
	0x28510  func <stripped> // method 
	0x29960  func <stripped> // method 
	0x29f60  func <stripped> // method 
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
	0x2cfe0  func <stripped> // method 
	0x2d040  func <stripped> // method 
	0x2d0a0  func <stripped> // method 
	0x2d100  func <stripped> // method 
	0x2d160  func <stripped> // method 
	0x2d1c0  func <stripped> // method 
	0x2d380  func <stripped> // method 
 }

 class ChronoKit.PowerlogViewEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var identity : PowerlogWidgetViewIdentity
	var _metrics : PowerlogViewMetrics
	var beingViewedStartTime : BSMonotonicReferenceTime?
	var isBeingViewed : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xda7800025c08 (0x27800025c08) in binary!
	0x48000000c  @objc PowerlogViewEntry.(null) <stripped>

	// Swift methods
	0x2e510  func <stripped> // setter 
	0x2e5d0  func <stripped> // getter 
	0x2e780  func <stripped> // method 
	0x2e8c0  func <stripped> // method 
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
	let date : ì
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
	case int : π
	case real : Double
	case text : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case blob : 
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
	var objectWillChange : õ
	var fileManager : NSFileManager

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd26000025be8 (0x26000025be8) in binary!
	0x104c4  @objc WidgetReaper.(null) <stripped>
WARNING: couldn't find address 0xd24800025c30 (0x24800025c30) in binary!
	0xcea8  @objc WidgetReaper.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x38cfff940f0  @objc WidgetReaper.(null) <stripped>
	0x37cfff996e8  @objc WidgetReaper. <stripped>

	// Swift methods
	0x39980  func <stripped> // getter 
	0x39a20  func <stripped> // setter 
	0x39b20  func <stripped> // modifyCoroutine 
	0x39ba0  func <stripped> // getter 
	0x39bc0  func <stripped> // setter 
	0x39be0  func <stripped> // modifyCoroutine 
	0x39d00  func <stripped> // getter 
	0x39d60  func <stripped> // setter 
	0x39dc0  func <stripped> // modifyCoroutine 
	0x39ec0  func <stripped> // getter 
	0x39f00  func <stripped> // setter 
	0x39f50  func <stripped> // modifyCoroutine 
	0x39610  class func WidgetReaper.__allocating_init<A, B>(candidateURLsToRemove:urlsToProtect:fileManager:) // init 
	0x3a970  func <stripped> // method 
	0x3ab70  func <stripped> // method 
 }

 class ChronoKit._WidgetExtensionFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ExtensionFactory {
	// Swift methods
 }

 class ChronoKit._SystemNSExtensionDiscoverer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SystemNSExtensionDiscoverer {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _publisher : G
	var extensionMatchingToken : Any?

	// Swift methods
 }

 class ChronoKit.ExtensionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _extensionsPublisher : W
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _addedPublisher : G
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _updatedPublisher : G
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _removedPublisher : G
	var extensionsByIdentifier : Extension
WARNING: couldn't find address 0x0 (0x0) in binary!
	var removedPluginUUIDsByIdentifier : String
	var queue : OS_dispatch_queue
	let lookupLock : UnfairLock
	let lock : UnfairLock
WARNING: couldn't find address 0x0 (0x0) in binary!
	var nsExtensionDiscovererSubscription : ◊
	var nsExtensionDiscoverer : SystemNSExtensionDiscoverer
	var applicationWorkspace : SystemApplicationWorkspace
	var extensionFactory : ExtensionFactory

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xce9400025c98 (0x69400025c98) in binary!
	0x1048c  @objc ExtensionManager.(null) <stripped>
WARNING: couldn't find address 0xd21000025bf8 (0x21000025bf8) in binary!
	0xce70  @objc ExtensionManager.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x344fff9c268  @objc ExtensionManager.(null) <stripped>
	0xfff9c380  @objc ExtensionManager. <stripped>

	// Swift methods
 }

 class ChronoKit.WidgetPreviewHostingViewController {
 class ChronoKit.TimelineDelegate : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd7bc00025b58 (0x7bc00025b58) in binary!
	0x10454  @objc TimelineDelegate.(null) <stripped>
WARNING: couldn't find address 0xd1d800025bc0 (0x1d800025bc0) in binary!
	0x18000000c  @objc TimelineDelegate.(null) <stripped>
WARNING: couldn't find address 0xd9c000025b50 (0x1c000025b50) in binary!
	0x18000000c  @objc TimelineDelegate.(null) <stripped>

	// Swift methods
 }

 struct ChronoKit._AutoupdatingPreviewView {

	// Properties
	var timeline : TLTimeline // +0x0
	var proxy : TimelineDelegate // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentEntry : =	 // +0x10
 }

 class ChronoKit.PowerlogUpdateEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let wakeIdentifier : String
	let identity : PowerlogUpdateIdentity
	let cost : PowerlogUpdateCost
	let reason : PowerlogWakeReason
	let remainingBudget : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd9c000025b50 (0x1c000025b50) in binary!
	0x18000000c  @objc PowerlogUpdateEntry.(null) <stripped>

	// Swift methods
	0x498f0  func <stripped> // getter 
	0x49b70  func <stripped> // method 
	0x49c90  func <stripped> // method 
 }

 class ChronoKit.WidgetPreviewInfo : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var metricsSpecification : CHSWidgetMetricsSpecification // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environment : c // +0x1950 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1042400025de0 (0x42400025de0) in binary!
	0xcf48  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0xc41c00025be0 (0x41c00025be0) in binary!
	0x103dc  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0xd16000025b48 (0x16000025b48) in binary!
	0xcdc0  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe6618  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x25cfffe6060  @objc WidgetPreviewInfo.(null) <stripped>
	0x234fffe6148  @objc WidgetPreviewInfo.ãH¯HâﬂHâ∆ˇQHâÿ[√ <stripped>

	// Swift methods
	0x4a900  class func <stripped> // getter 
	0x4a910  class func WidgetPreviewInfo.__allocating_init(coder:) // init 
	0x4ab90  func <stripped> // method 
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
	0x4afb0  class func IOSEnvironmentProvidingFactory.__allocating_init(extensionManager:) // init 
	0x4b590  func <stripped> // getter 
	0x4b5d0  func <stripped> // setter 
	0x4b630  func <stripped> // modifyCoroutine 
	0x4b670  func <stripped> // method 
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
	let created : ”
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
	var notificationSubscriptions :  empty-list  // +0x80000400 (0x8)
	var colorSchemeObserver : Swift.AnyObject? // +0x0 (0x8)

	// Swift methods
 }

 class ChronoKit.PlaceholderReloadStrategy : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var widgetEnvironment : ¡ // +0x10 (0x10)
	var statefulStore : StatefulStore // +0x20 (0x8)
	let cacheManager : TimelineCacheManaging // +0x28 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : ’ // +0x74735f5f (0x0)

	// Swift methods
	0x616d0  func <stripped> // getter 
	0x61730  func <stripped> // setter 
	0x617a0  func <stripped> // modifyCoroutine 
	0x61860  func <stripped> // getter 
	0x61890  func <stripped> // setter 
	0x618e0  func <stripped> // modifyCoroutine 
	0x61a80  func <stripped> // getter 
	0x61ad0  func <stripped> // setter 
	0x61b30  func <stripped> // modifyCoroutine 
	0x61b70  class func PlaceholderReloadStrategy.__allocating_init(cacheManager:logger:) // init 
	0x61cf0  func <stripped> // method 
	0x623a0  func <stripped> // method 
	0x623f0  func <stripped> // method 
	0x649d0  func <stripped> // method 
	0x649e0  func <stripped> // method 
	0x65450  func <stripped> // method 
 }

 class ChronoKit.PowerlogUpdateService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var provider : PowerlogProvider
	var _entries : PowerlogUpdateEntry
	var lock : UnfairLock

	// Swift methods
	0x6cc90  func <stripped> // method 
	0x6d240  func <stripped> // method 
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
	let identifier : String // +0x0 (0x10)
	let systemProvider : EnvironmentProviding // +0x45545f5f (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list  // +0x0 (0x8)

	// Swift methods
	0x71ff0  func <stripped> // method 
	0x721b0  func <stripped> // method 
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
	0x75000  func <stripped> // getter 
	0x75040  func <stripped> // setter 
	0x75080  func <stripped> // modifyCoroutine 
	0x75160  func <stripped> // getter 
	0x751a0  func <stripped> // setter 
	0x751e0  func <stripped> // modifyCoroutine 
	0x74ed0  class func WidgetCacheURLProvider.__allocating_init(subdirectory:fileExtension:) // init 
	0x75280  func <stripped> // method 
 }

 class ChronoKit.ReloadTaskCancellable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cancellable : K˙
	let _description : String?

	// Swift methods
	0x76260  class func ReloadTaskCancellable.__allocating_init(_:description:) // init 
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
	0x78ad0  class func ChronoMetadataStore.__allocating_init(storage:) // init 
 }

 class ChronoKit.MutableStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let extensionStore : MutableExtensionStore
	let configuredWidgetStore : MutableConfiguredWidgetStore

	// Swift methods
	0x79f90  func <stripped> // method 
 }

 class ChronoKit.DatabaseAccessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _db : SQLDatabase

	// Swift methods
 }

 class ChronoKit.ExtensionStore : ChronoMetadataStore.DatabaseAccessor {
	// Swift methods
	0x7a140  func <stripped> // method 
	0x7add0  func <stripped> // method 
	0x7b220  func <stripped> // method 
 }

 class ChronoKit.MutableExtensionStore : ChronoMetadataStore.ExtensionStore {
	// Swift methods
	0x7c170  func <stripped> // method 
	0x7c210  func <stripped> // method 
	0x7d760  func <stripped> // method 
 }

 class ChronoKit.ConfiguredWidgetStore : ChronoMetadataStore.DatabaseAccessor {
	// Swift methods
	0x7d8c0  func <stripped> // method 
 }

 class ChronoKit.MutableConfiguredWidgetStore : ChronoMetadataStore.ConfiguredWidgetStore {
	// Swift methods
	0x7e270  func <stripped> // method 
	0x7e870  func <stripped> // method 
	0x7eb30  func <stripped> // method 
 }

 class ChronoKit.BlockAssertion : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Assertion {

	// Properties
	let lock : UnfairLock
	var block : ()?

	// Swift methods
	0x88cd0  class func BlockAssertion.__allocating_init(_:) // init 
 }

 class ChronoKit.WidgetEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var protectionType : ã

	let lock : UnfairLock
	let key : WidgetEntryKey
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _cachedViewableEntry : {
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _configuredDate : ì
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentEntry : Õˇ
	let environmentProvider : EnvironmentProviding
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _content : $
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : «˜

	// Swift methods
	0x89c20  func <stripped> // getter 
	0x89c70  func <stripped> // setter 
	0x89cd0  func <stripped> // modifyCoroutine 
	0x89d60  func <stripped> // getter 
	0x89f90  func <stripped> // getter 
	0x8a030  func <stripped> // setter 
	0x8a230  func <stripped> // getter 
	0x8a280  func <stripped> // setter 
	0x8a4d0  func <stripped> // modifyCoroutine 
	0x8a740  func <stripped> // method 
	0x8a7a0  func <stripped> // method 
	0x8ac50  func <stripped> // getter 
	0x8ae00  class func WidgetEntry.__allocating_init(key:protectionType:environmentProvider:) // init 
	0x8b120  func <stripped> // method 
 }

 enum ChronoKit.WidgetEntryError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case viewDecodingFailed : Oˇ
WARNING: couldn't find address 0x0 (0x0) in binary!
	case entryNotFound : Ìı
WARNING: couldn't find address 0x0 (0x0) in binary!
	case environmentNotFound : ˇ
	case missingContent  
 }

 class ChronoKit.WidgetUpdateTimer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subject : ›
 // +0x10 (0x8)
	let quantum : Double // +0x18 (0x8)
	let queue : OS_dispatch_queue // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scheduledDate : ì // +0x0 (0x0)
	var _timer : OS_dispatch_source_timer? // +0x0 (0x8)

	// Swift methods
	0x8c4d0  class func WidgetUpdateTimer.__allocating_init(quantum:queue:) // init 
 }

 class ChronoKit.WidgetExtension : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identifier : String // +0x10 (0x10)
	let version : String // +0x20 (0x10)
	let isInternal : Bool // +0x30 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pluginUUID : çı // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheGUID : çı // +0xac620 (0x0)
	let sequenceNumber : Int // +0x7fb8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lastModifiedDate : ì // +0xac620 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bundleURL : © // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let containerBundleURL : © // +0x0 (0x0)
	let containerBundleVersion : String // +0x0 (0x10)
	let containerBundleIdentifier : String // +0x77735f5f (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dataContainerURL : © // +0x7079745f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let systemDataContainerURL : © // +0x45545f5f (0x0)
	let descriptorDiscoveryIsRestricted : Bool // +0x0 (0x1)
	let wantsLocation : Bool // +0xb45d8 (0x1)
	let availableLocalizations : [String] // +0x2a70 (0x8)
	let allowsMixedLocalizations : Bool // +0xb45d8 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let requestedDataProtection : k // +0x0 (0x0)
	let nsExtension : NSExtension // +0x0 (0x8)

	// Swift methods
	0x8e9d0  func <stripped> // method 
	0x8ead0  func <stripped> // method 
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
	var baseURL : ©
	var widget : CHSWidget?
	var metrics : CHSWidgetMetrics?
 }

 class ChronoKit.WidgetPreviewTimelineEntry : TLTimelineBlobEntry /System/Library/PrivateFrameworks/Timeline.framework/Timeline {

	// Properties
	var tl_errors : [TLPreviewTimelineError]
	var tl_selectableRegions : [TLPreviewTimelineSelectableRegion]
	var backgroundColor : UIColor?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd12800025a70 (0x12800025a70) in binary!
	0x1038c  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0xd11000025a48 (0x11000025a48) in binary!
	0x10374  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x1036800025ea8 (0x36800025ea8) in binary!
	0xc390  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x1036600025e98 (0x36600025e98) in binary!
	0x10368  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0xce8c00025a20 (0x68c00025a20) in binary!
	0xcd28  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x74694b6f6e  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x433a5443454a4f52 (0x443454a4f52) in binary!
	0xa322e382e  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x4058f33333333333 (0x33333333333) in binary!
	0x0  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x656e696c656d6954 (0x16c656d6954) in binary!
	0x5a440010050  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find offset 0xffffffe8 in binary!
WARNING: couldn't find offset 0xffffffe8 in binary!
WARNING: couldn't find address 0xfff5678cffffffe8 (0x0) in binary!
	0x7e00000002  @objc WidgetPreviewTimelineEntry.(null) <stripped>

	// Swift methods
	0x92630  func <stripped> // getter 
	0x92670  func <stripped> // setter 
	0x926d0  func <stripped> // modifyCoroutine 
	0x927b0  func <stripped> // getter 
	0x928a0  func <stripped> // setter 
	0x929e0  func <stripped> // modifyCoroutine 
	0x92ad0  func <stripped> // getter 
	0x92b10  func <stripped> // setter 
	0x92b60  func <stripped> // modifyCoroutine 
	0x93ad0  func <stripped> // getter 
 }

 class ChronoKit.PlaceholderEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var protectionType : ã
 // +0x0 (0x0)
	var states : WidgetEntryKey // +0x0 (0x8)
	var reloadHistory : WidgetEntryKey // +0x0 (0x8)
	let lock : UnfairLock // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let logger : ’ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : W // +0x0 (0x8)
	var _viewCollections : WidgetEntryKey // +0x0 (0x8)
	let key : String // +0x0 (0x10)
	let environmentProvider : EnvironmentProviding // +0x77735f5f (0x28)

	// Swift methods
	0x95260  func <stripped> // getter 
	0x952b0  func <stripped> // setter 
	0x95310  func <stripped> // modifyCoroutine 
	0x95460  func <stripped> // getter 
	0x954e0  func <stripped> // setter 
	0x95520  func <stripped> // modifyCoroutine 
	0x95700  func <stripped> // getter 
	0x957a0  func <stripped> // getter 
	0x95870  func <stripped> // method 
	0x959c0  func <stripped> // method 
	0x95a50  func <stripped> // method 
	0x95ee0  func <stripped> // method 
	0x95f50  func <stripped> // method 
	0x961c0  func <stripped> // method 
	0x967e0  func <stripped> // method 
	0x96c10  func <stripped> // method 
	0x96f80  func <stripped> // method 
	0x970b0  func <stripped> // method 
	0x97280  func <stripped> // method 
	0x974b0  func <stripped> // getter 
	0x95110  class func PlaceholderEntry.__allocating_init(key:protectionType:environmentProvider:logger:) // init 
 }

 struct ChronoKit.HistoricReload {

	// Properties
	let reason : ReloadReason // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let created : ” // +0x8
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
	var __environmentValues : o // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environmentDidChangePublisher : W // +0x0 (0x8)
	let lock : UnfairLock // +0x7061635f (0x8)

	// Swift methods
	0x9be90  func <stripped> // getter 
 }

 class ChronoKit.WidgetDescriptorCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib, WidgetDescriptorCaching {

	// Properties
	let lock : UnfairLock
	var provider : WidgetDescriptorProvider
	let backingStore : ChronoMetadataStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _descriptorUpdatePublisher : W
	var extensionCache : ExtensionMetadata
	var outstandingFetches : Set<String>

	// Swift methods
	0x9ca80  class func WidgetDescriptorCache.__allocating_init(backingStore:) // init 
 }

 class ChronoKit.ExtensionSystemDataCacheKeyProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var subsystemIdentifier : String
	var extensionManager : ExtensionManaging
	var fileManager : NSFileManager

	// Swift methods
	0xa2a90  class func ExtensionSystemDataCacheKeyProvider.__allocating_init(subsystemIdentifier:extensionManager:fileManager:) // init 
	0xa2b40  func <stripped> // method 
	0xa2d40  func <stripped> // method 
	0xa2e10  func <stripped> // method 
 }

 struct ChronoKit.WidgetLiveView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultView : )
	var timelineUI : WidgetLiveViewTimelineUI
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _entry : GÛ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _backgroundColor : È
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _environmentValues : ø
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentDidChange : É
 }

 class ChronoKit.TimelineUI {
 class ChronoKit.PlaceholderStatefulStore {
 struct ChronoKit.FixedDataProtectionProvider: DataProtectionLevelProviding {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var protectionType : ã

 }

 struct ChronoKit.ExtensionDataProtectionLevelProvider: DataProtectionLevelProviding {

	// Properties
	var extensionManager : ExtensionManaging
WARNING: couldn't find address 0x0 (0x0) in binary!
	var default : ã

 }
