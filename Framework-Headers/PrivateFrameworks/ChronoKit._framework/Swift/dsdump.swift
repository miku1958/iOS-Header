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
	var _os_unfair_lock_opaque : √"
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
	case jpeg : 
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
	var logger :  // +0x37 (0x0)

	// Swift methods
	0x5760  func <stripped> // getter 
	0x5810  func <stripped> // setter 
	0x5900  func <stripped> // modifyCoroutine 
	0x59c0  func <stripped> // getter 
	0x59f0  func <stripped> // setter 
	0x5a30  func <stripped> // modifyCoroutine 
	0x5af0  func <stripped> // getter 
	0x5b20  func <stripped> // setter 
	0x5b60  func <stripped> // modifyCoroutine 
	0x5c70  func <stripped> // getter 
	0x5cc0  func <stripped> // setter 
	0x5d20  func <stripped> // modifyCoroutine 
	0x5d60  class func LayerSnapshotter.__allocating_init(options:logger:screenshotManager:) // init 
	0x6000  func <stripped> // method 
	0x62a0  func <stripped> // method 
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
	case file : ô
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
	let destination : Ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let protectionLevel : ´
	var intermediates : Intermediates

	// Swift methods
	0x11f60  func <stripped> // method 
	0x121b0  func <stripped> // method 
	0x12d80  func <stripped> // method 
	0x13630  func <stripped> // method 
	0x13ac0  func <stripped> // method 
 }

 struct ChronoKit.Intermediates {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let temporaryDirectory : Ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let temporaryURL : Ÿ
	let writeHandle : NSFileHandle
	let readHandle : NSFileHandle
WARNING: couldn't find address 0x0 (0x0) in binary!
	let signpost : Î
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
	case scheduled : √

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
	var archiveValidationOptions : + // +0x19 (0x0)

	// Swift methods
	0x17c70  func <stripped> // getter 
	0x17ca0  func <stripped> // setter 
	0x17ce0  func <stripped> // modifyCoroutine 
	0x17dd0  func <stripped> // getter 
	0x17e10  func <stripped> // setter 
	0x17e70  func <stripped> // modifyCoroutine 
	0x17f80  func <stripped> // getter 
	0x17fd0  func <stripped> // setter 
	0x18030  func <stripped> // modifyCoroutine 
	0x18070  class func WidgetCacheManager.__allocating_init(descriptorProvider:urlProvider:protectionLevelProvider:fileManager:) // init 
	0x18360  func <stripped> // method 
	0x18430  func <stripped> // method 
	0x184c0  func <stripped> // method 
	0x18760  func <stripped> // method 
	0x18ca0  func <stripped> // method 
	0x18e00  func <stripped> // method 
	0x19140  func <stripped> // method 
	0x195e0  func <stripped> // method 
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
	let defaultView : Y
	var placeholderUI : PlaceholderUI
	var widgetEntryKey : WidgetEntryKey
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _entry : ﬂ

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _backgroundColor : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _environmentValues : Ô
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentDidChange : ≥	
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
	var currentActionURL : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _handleLaunchRequest : c	
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _isHidden : -	
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _isSnapshotting : -	
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _allowsHitTesting : -	
	var disableAnimations : Bool

	// Swift methods
	0x208e0  func <stripped> // getter 
	0x20920  func <stripped> // getter 
	0x209d0  func <stripped> // getter 
	0x209f0  func <stripped> // getter 
	0x20a10  func <stripped> // getter 
 }

 class ChronoKit.AvocadoLiveViewHostingController {
 struct ChronoKit.AvocadoViewHost {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _viewModel : =	
	var content : A
 }

 struct ChronoKit.WidgetLaunchModifier {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentURL : a
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handleLaunchRequest :  empty-list 
 }

 class ChronoKit.DirectoryCacheKeyProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cacheURL : Ÿ // +0x5 (0x0)

	// Swift methods
	0x274a0  func <stripped> // getter 
	0x274f0  func <stripped> // setter 
	0x27550  func <stripped> // modifyCoroutine 
	0x275a0  class func DirectoryCacheKeyProvider.__allocating_init(subsystem:in:fileManager:) // init 
	0x27650  class func DirectoryCacheKeyProvider.__allocating_init(cacheURL:) // init 
	0x27710  func <stripped> // method 
	0x27720  func <stripped> // method 
	0x27810  func <stripped> // method 
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
	0x27fa0  class func ConfiguredWidgetMetadataCache.__allocating_init(backingStore:) // init 
	0x28920  func <stripped> // method 
	0x29d70  func <stripped> // method 
	0x2a370  func <stripped> // method 
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
	0x2d420  func <stripped> // method 
	0x2d480  func <stripped> // method 
	0x2d4e0  func <stripped> // method 
	0x2d540  func <stripped> // method 
	0x2d5a0  func <stripped> // method 
	0x2d600  func <stripped> // method 
	0x2d7c0  func <stripped> // method 
 }

 class ChronoKit.PowerlogViewEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var identity : PowerlogWidgetViewIdentity
	var _metrics : PowerlogViewMetrics
	var beingViewedStartTime : BSMonotonicReferenceTime?
	var isBeingViewed : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdb48000244f8 (0x348000244f8) in binary!
	0x48000000c  @objc PowerlogViewEntry.(null) <stripped>

	// Swift methods
	0x2e970  func <stripped> // setter 
	0x2ea30  func <stripped> // getter 
	0x2ebe0  func <stripped> // method 
	0x2ed20  func <stripped> // method 
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
	let date : √

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
	case int : ˝
	case real : Double
	case text : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case blob : W
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
	var objectWillChange : À
	var fileManager : NSFileManager

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd330000244d8 (0x330000244d8) in binary!
	0x105c4  @objc WidgetReaper.(null) <stripped>
WARNING: couldn't find address 0xd31800024520 (0x31800024520) in binary!
	0xcf78  @objc WidgetReaper.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x47cfff91f70  @objc WidgetReaper.(null) <stripped>
	0x46cfff97528  @objc WidgetReaper. <stripped>

	// Swift methods
	0x39f80  func <stripped> // getter 
	0x3a020  func <stripped> // setter 
	0x3a120  func <stripped> // modifyCoroutine 
	0x3a1a0  func <stripped> // getter 
	0x3a1c0  func <stripped> // setter 
	0x3a1e0  func <stripped> // modifyCoroutine 
	0x3a300  func <stripped> // getter 
	0x3a360  func <stripped> // setter 
	0x3a3c0  func <stripped> // modifyCoroutine 
	0x3a4c0  func <stripped> // getter 
	0x3a500  func <stripped> // setter 
	0x3a550  func <stripped> // modifyCoroutine 
	0x39c10  class func WidgetReaper.__allocating_init<A, B>(candidateURLsToRemove:urlsToProtect:fileManager:) // init 
	0x3af70  func <stripped> // method 
	0x3b170  func <stripped> // method 
 }

 class ChronoKit._WidgetExtensionFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ExtensionFactory {
	// Swift methods
 }

 class ChronoKit._SystemNSExtensionDiscoverer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SystemNSExtensionDiscoverer {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _publisher : ãˇ
	var extensionMatchingToken : Any?

	// Swift methods
 }

 class ChronoKit.ExtensionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _extensionsPublisher : õˇ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _addedPublisher : ãˇ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _updatedPublisher : ãˇ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _removedPublisher : ãˇ
	var extensionsByIdentifier : Extension
WARNING: couldn't find address 0x0 (0x0) in binary!
	var removedPluginUUIDsByIdentifier : String
	var queue : OS_dispatch_queue
	let lookupLock : UnfairLock
	let lock : UnfairLock
WARNING: couldn't find address 0x0 (0x0) in binary!
	var nsExtensionDiscovererSubscription : 

	var nsExtensionDiscoverer : SystemNSExtensionDiscoverer
	var applicationWorkspace : SystemApplicationWorkspace
	var extensionFactory : ExtensionFactory

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xcf6400024588 (0x76400024588) in binary!
	0x1058c  @objc ExtensionManager.(null) <stripped>
WARNING: couldn't find address 0xd2e0000244e8 (0x2e0000244e8) in binary!
	0xcf40  @objc ExtensionManager.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x434fff9a588  @objc ExtensionManager.(null) <stripped>
	0xfff9a6a0  @objc ExtensionManager. <stripped>

	// Swift methods
 }

 class ChronoKit.WidgetPreviewHostingViewController {
 class ChronoKit.TimelineDelegate : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd88c00024448 (0x8c00024448) in binary!
	0x10554  @objc TimelineDelegate.(null) <stripped>
WARNING: couldn't find address 0xd2a8000244b0 (0x2a8000244b0) in binary!
	0x18000000c  @objc TimelineDelegate.(null) <stripped>
WARNING: couldn't find address 0xda9000024440 (0x29000024440) in binary!
	0x18000000c  @objc TimelineDelegate.(null) <stripped>

	// Swift methods
 }

 struct ChronoKit._AutoupdatingPreviewView {

	// Properties
	var timeline : TLTimeline // +0x0
	var proxy : TimelineDelegate // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentEntry : k // +0x10
 }

 class ChronoKit.PowerlogUpdateEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let wakeIdentifier : String
	let identity : PowerlogUpdateIdentity
	let cost : PowerlogUpdateCost
	let reason : PowerlogWakeReason
	let remainingBudget : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xda9000024440 (0x29000024440) in binary!
	0x18000000c  @objc PowerlogUpdateEntry.(null) <stripped>

	// Swift methods
	0x4a380  func <stripped> // getter 
	0x4a600  func <stripped> // method 
	0x4a720  func <stripped> // method 
 }

 class ChronoKit.WidgetPreviewInfo : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var metricsSpecification : CHSWidgetMetricsSpecification // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environment : ° // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x10524000246d8 (0x524000246d8) in binary!
	0xd018  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0xc53c000244d0 (0x53c000244d0) in binary!
	0x104dc  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0xd23000024438 (0x23000024438) in binary!
	0xce90  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe3ce8  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x34cfffe3730  @objc WidgetPreviewInfo.(null) <stripped>
	0x324fffe3818  @objc WidgetPreviewInfo. <stripped>

	// Swift methods
	0x4b3a0  class func <stripped> // getter 
	0x4b3b0  class func WidgetPreviewInfo.__allocating_init(coder:) // init 
	0x4b630  func <stripped> // method 
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
	0x4ba60  class func IOSEnvironmentProvidingFactory.__allocating_init(extensionManager:) // init 
	0x4c040  func <stripped> // getter 
	0x4c080  func <stripped> // setter 
	0x4c0e0  func <stripped> // modifyCoroutine 
	0x4c120  func <stripped> // method 
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
	let created : 	
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
	var widgetEnvironment : ˇ˛ // +0x10 (0x10)
	var statefulStore : StatefulStore // +0x20 (0x8)
	let cacheManager : TimelineCacheManaging // +0x28 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger :  // +0x0 (0x0)

	// Swift methods
	0x622c0  func <stripped> // getter 
	0x62320  func <stripped> // setter 
	0x62390  func <stripped> // modifyCoroutine 
	0x62450  func <stripped> // getter 
	0x62480  func <stripped> // setter 
	0x624d0  func <stripped> // modifyCoroutine 
	0x62670  func <stripped> // getter 
	0x626c0  func <stripped> // setter 
	0x62720  func <stripped> // modifyCoroutine 
	0x62760  class func PlaceholderReloadStrategy.__allocating_init(cacheManager:logger:) // init 
	0x628e0  func <stripped> // method 
	0x62f90  func <stripped> // method 
	0x62fe0  func <stripped> // method 
	0x655c0  func <stripped> // method 
	0x655d0  func <stripped> // method 
	0x66040  func <stripped> // method 
 }

 class ChronoKit.PowerlogUpdateService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var provider : PowerlogProvider
	var _entries : PowerlogUpdateEntry
	var lock : UnfairLock

	// Swift methods
	0x6d890  func <stripped> // method 
	0x6de50  func <stripped> // method 
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
	0x72c10  func <stripped> // method 
	0x72dd0  func <stripped> // method 
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
	0x74d80  func <stripped> // getter 
	0x74dc0  func <stripped> // setter 
	0x74e00  func <stripped> // modifyCoroutine 
	0x74ee0  func <stripped> // getter 
	0x74f20  func <stripped> // setter 
	0x74f60  func <stripped> // modifyCoroutine 
	0x74c50  class func WidgetCacheURLProvider.__allocating_init(subdirectory:fileExtension:) // init 
	0x75000  func <stripped> // method 
 }

 class ChronoKit.ReloadTaskCancellable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cancellable : ãÚ
	let _description : String?

	// Swift methods
	0x75fe0  class func ReloadTaskCancellable.__allocating_init(_:description:) // init 
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
	0x78860  class func ChronoMetadataStore.__allocating_init(storage:) // init 
 }

 class ChronoKit.MutableStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let extensionStore : MutableExtensionStore
	let configuredWidgetStore : MutableConfiguredWidgetStore

	// Swift methods
	0x79d20  func <stripped> // method 
 }

 class ChronoKit.DatabaseAccessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _db : SQLDatabase

	// Swift methods
 }

 class ChronoKit.ExtensionStore : ChronoMetadataStore.DatabaseAccessor {
	// Swift methods
	0x79ed0  func <stripped> // method 
	0x7ab60  func <stripped> // method 
	0x7afb0  func <stripped> // method 
 }

 class ChronoKit.MutableExtensionStore : ChronoMetadataStore.ExtensionStore {
	// Swift methods
	0x7bf00  func <stripped> // method 
	0x7bfa0  func <stripped> // method 
	0x7d4f0  func <stripped> // method 
 }

 class ChronoKit.ConfiguredWidgetStore : ChronoMetadataStore.DatabaseAccessor {
	// Swift methods
	0x7d650  func <stripped> // method 
 }

 class ChronoKit.MutableConfiguredWidgetStore : ChronoMetadataStore.ConfiguredWidgetStore {
	// Swift methods
	0x7e000  func <stripped> // method 
	0x7e600  func <stripped> // method 
	0x7e8c0  func <stripped> // method 
 }

 class ChronoKit.BlockAssertion : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Assertion {

	// Properties
	let lock : UnfairLock
	var block : ()?

	// Swift methods
	0x88a60  class func BlockAssertion.__allocating_init(_:) // init 
 }

 class ChronoKit.WidgetEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var protectionType : …
	let lock : UnfairLock
	let key : WidgetEntryKey
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _cachedViewableEntry : ª
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _configuredDate : √

WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentEntry : ¯
	let environmentProvider : EnvironmentProviding
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _content : ø
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : 

	// Swift methods
	0x899b0  func <stripped> // getter 
	0x89a00  func <stripped> // setter 
	0x89a60  func <stripped> // modifyCoroutine 
	0x89af0  func <stripped> // getter 
	0x89d20  func <stripped> // getter 
	0x89dc0  func <stripped> // setter 
	0x89fc0  func <stripped> // getter 
	0x8a010  func <stripped> // setter 
	0x8a260  func <stripped> // modifyCoroutine 
	0x8a4d0  func <stripped> // method 
	0x8a530  func <stripped> // method 
	0x8a9e0  func <stripped> // getter 
	0x8ab90  class func WidgetEntry.__allocating_init(key:protectionType:environmentProvider:) // init 
	0x8aeb0  func <stripped> // method 
 }

 enum ChronoKit.WidgetEntryError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case viewDecodingFailed : ü˜
WARNING: couldn't find address 0x0 (0x0) in binary!
	case entryNotFound : -Ó
WARNING: couldn't find address 0x0 (0x0) in binary!
	case environmentNotFound : g˜
	case missingContent  
 }

 class ChronoKit.WidgetUpdateTimer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subject : ! // +0x10 (0x8)
	let quantum : Double // +0x18 (0x8)
	let queue : OS_dispatch_queue // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scheduledDate : √
 // +0x0 (0x0)
	var _timer : OS_dispatch_source_timer? // +0x0 (0x8)

	// Swift methods
	0x8c280  class func WidgetUpdateTimer.__allocating_init(quantum:queue:) // init 
 }

 class ChronoKit.WidgetExtension : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identifier : String // +0x10 (0x10)
	let version : String // +0x20 (0x10)
	let isInternal : Bool // +0x30 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pluginUUID : ÕÌ // +0x45545f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheGUID : ÕÌ // +0x0 (0x0)
	let sequenceNumber : Int // +0xaed30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lastModifiedDate : √
 // +0x8078 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bundleURL : Ÿ // +0xaed30 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let containerBundleURL : Ÿ // +0x0 (0x0)
	let containerBundleVersion : String // +0x0 (0x10)
	let containerBundleIdentifier : String // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dataContainerURL : Ÿ // +0x77735f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let systemDataContainerURL : Ÿ // +0x7079745f (0x0)
	let descriptorDiscoveryIsRestricted : Bool // +0x45545f5f (0x1)
	let wantsLocation : Bool // +0x0 (0x1)
	let availableLocalizations : [String] // +0xb6da8 (0x8)
	let allowsMixedLocalizations : Bool // +0x2a82 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let requestedDataProtection : ´ // +0xb6da8 (0x0)
	let nsExtension : NSExtension // +0x0 (0x8)

	// Swift methods
	0x8e780  func <stripped> // method 
	0x8e880  func <stripped> // method 
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
	var baseURL : Ÿ
	var widget : CHSWidget?
	var metrics : CHSWidgetMetrics?
 }

 class ChronoKit.WidgetPreviewTimelineEntry : TLTimelineBlobEntry /System/Library/PrivateFrameworks/Timeline.framework/Timeline {

	// Properties
	var tl_errors : [TLPreviewTimelineError]
	var tl_selectableRegions : [TLPreviewTimelineSelectableRegion]
	var backgroundColor : UIColor?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd1f800024360 (0x1f800024360) in binary!
	0x1048c  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0xd1e000024338 (0x1e000024338) in binary!
	0x10474  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x1046800024798 (0x46800024798) in binary!
	0xc4b0  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x1046600024788 (0x46600024788) in binary!
	0x10468  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0xcf5c00024310 (0x75c00024310) in binary!
	0xcdf8  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x74694b6f6e  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x433a5443454a4f52 (0x443454a4f52) in binary!
	0x2352e392e34  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x405a39999999999a (0x1999999999a) in binary!
	0x0  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x656e696c656d6954 (0x16c656d6954) in binary!
	0x5a440010050  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find offset 0xffffffe8 in binary!
WARNING: couldn't find offset 0xffffffe8 in binary!
WARNING: couldn't find address 0xfff54eccffffffe8 (0x0) in binary!
	0x7e00000002  @objc WidgetPreviewTimelineEntry.(null) <stripped>

	// Swift methods
	0x92410  func <stripped> // getter 
	0x92450  func <stripped> // setter 
	0x924b0  func <stripped> // modifyCoroutine 
	0x92590  func <stripped> // getter 
	0x92680  func <stripped> // setter 
	0x927c0  func <stripped> // modifyCoroutine 
	0x928b0  func <stripped> // getter 
	0x928f0  func <stripped> // setter 
	0x92940  func <stripped> // modifyCoroutine 
	0x938b0  func <stripped> // getter 
	0x93dc0  func <stripped> // getter 
	0x93e60  func <stripped> // getter 
 }

 class ChronoKit.PlaceholderEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var protectionType : … // +0x0 (0x0)
	var states : WidgetEntryKey // +0x0 (0x8)
	var reloadHistory : WidgetEntryKey // +0x0 (0x8)
	let lock : UnfairLock // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let logger :  // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : õˇ // +0x0 (0x8)
	var _viewCollections : WidgetEntryKey // +0x0 (0x8)
	let key : String // +0x0 (0x10)
	let environmentProvider : EnvironmentProviding // +0x0 (0x28)

	// Swift methods
	0x951f0  func <stripped> // getter 
	0x95240  func <stripped> // setter 
	0x952a0  func <stripped> // modifyCoroutine 
	0x953f0  func <stripped> // getter 
	0x95470  func <stripped> // setter 
	0x954b0  func <stripped> // modifyCoroutine 
	0x95690  func <stripped> // getter 
	0x95730  func <stripped> // getter 
	0x95800  func <stripped> // method 
	0x95950  func <stripped> // method 
	0x959e0  func <stripped> // method 
	0x95e70  func <stripped> // method 
	0x95ee0  func <stripped> // method 
	0x96150  func <stripped> // method 
	0x96780  func <stripped> // method 
	0x96bb0  func <stripped> // method 
	0x96f20  func <stripped> // method 
	0x97050  func <stripped> // method 
	0x97220  func <stripped> // method 
	0x97450  func <stripped> // getter 
	0x950a0  class func PlaceholderEntry.__allocating_init(key:protectionType:environmentProvider:logger:) // init 
 }

 struct ChronoKit.HistoricReload {

	// Properties
	let reason : ReloadReason // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let created : 	 // +0x8
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
	var __environmentValues : ù¯ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environmentDidChangePublisher : õˇ // +0x0 (0x8)
	let lock : UnfairLock // +0x77735f5f (0x8)

	// Swift methods
	0x9bdf0  func <stripped> // getter 
 }

 class ChronoKit.LocaleChangeCoordinator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class ChronoKit.WidgetDescriptorCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib, WidgetDescriptorCaching {

	// Properties
	let lock : UnfairLock
	var provider : WidgetDescriptorProvider
	let backingStore : ChronoMetadataStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _descriptorUpdatePublisher : õˇ
	var extensionCache : ExtensionMetadata
	var outstandingFetches : Set<String>

	// Swift methods
	0x9d2f0  class func WidgetDescriptorCache.__allocating_init(backingStore:) // init 
 }

 class ChronoKit.ExtensionSystemDataCacheKeyProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var subsystemIdentifier : String
	var extensionManager : ExtensionManaging
	var fileManager : NSFileManager

	// Swift methods
	0xa4fb0  class func ExtensionSystemDataCacheKeyProvider.__allocating_init(subsystemIdentifier:extensionManager:fileManager:) // init 
	0xa5060  func <stripped> // method 
	0xa5260  func <stripped> // method 
	0xa5330  func <stripped> // method 
 }

 struct ChronoKit.WidgetLiveView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultView : Y
	var timelineUI : WidgetLiveViewTimelineUI
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _entry : eÎ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _backgroundColor : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _environmentValues : Ô
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentDidChange : ≥	
 }

 class ChronoKit.TimelineUI {
 class ChronoKit.PlaceholderStatefulStore {
 struct ChronoKit.FixedDataProtectionProvider: DataProtectionLevelProviding {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var protectionType : …
 }

 struct ChronoKit.ExtensionDataProtectionLevelProvider: DataProtectionLevelProviding {

	// Properties
	var extensionManager : ExtensionManaging
WARNING: couldn't find address 0x0 (0x0) in binary!
	var default : …
 }
