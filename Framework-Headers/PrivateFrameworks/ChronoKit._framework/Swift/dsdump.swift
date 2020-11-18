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
	var _os_unfair_lock_opaque : ,
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
	case jpeg : «
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
	var logger : µ // +0x37 (0x0)

	// Swift methods
	0x4a80  func <stripped> // getter 
	0x4b30  func <stripped> // setter 
	0x4c20  func <stripped> // modifyCoroutine 
	0x4ce0  func <stripped> // getter 
	0x4d10  func <stripped> // setter 
	0x4d50  func <stripped> // modifyCoroutine 
	0x4e10  func <stripped> // getter 
	0x4e40  func <stripped> // setter 
	0x4e80  func <stripped> // modifyCoroutine 
	0x4f90  func <stripped> // getter 
	0x4fe0  func <stripped> // setter 
	0x5040  func <stripped> // modifyCoroutine 
	0x5080  class func LayerSnapshotter.__allocating_init(options:logger:screenshotManager:) // init 
	0x5320  func <stripped> // method 
	0x55c0  func <stripped> // method 
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
	case file : I
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
	let destination : â
WARNING: couldn't find address 0x0 (0x0) in binary!
	let protectionLevel : K
	var intermediates : Intermediates

	// Swift methods
	0x11220  func <stripped> // method 
	0x11470  func <stripped> // method 
	0x12040  func <stripped> // method 
	0x128f0  func <stripped> // method 
	0x12d80  func <stripped> // method 
 }

 struct ChronoKit.Intermediates {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let temporaryDirectory : â
WARNING: couldn't find address 0x0 (0x0) in binary!
	let temporaryURL : â
	let writeHandle : NSFileHandle
	let readHandle : NSFileHandle
WARNING: couldn't find address 0x0 (0x0) in binary!
	let signpost : õ
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
	case scheduled : s
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
	var archiveValidationOptions : À // +0x19 (0x0)

	// Swift methods
	0x16de0  func <stripped> // getter 
	0x16e10  func <stripped> // setter 
	0x16e50  func <stripped> // modifyCoroutine 
	0x16f40  func <stripped> // getter 
	0x16f80  func <stripped> // setter 
	0x16fe0  func <stripped> // modifyCoroutine 
	0x170f0  func <stripped> // getter 
	0x17140  func <stripped> // setter 
	0x171a0  func <stripped> // modifyCoroutine 
	0x171e0  class func WidgetCacheManager.__allocating_init(descriptorProvider:urlProvider:protectionLevelProvider:fileManager:) // init 
	0x174d0  func <stripped> // method 
	0x175a0  func <stripped> // method 
	0x17630  func <stripped> // method 
	0x178d0  func <stripped> // method 
	0x17e10  func <stripped> // method 
	0x17f70  func <stripped> // method 
	0x182b0  func <stripped> // method 
	0x18750  func <stripped> // method 
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
	let defaultView : 	
	var placeholderUI : PlaceholderUI
	var widgetEntryKey : WidgetEntryKey
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _entry : è
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _backgroundColor : …
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _environmentValues : ü
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentDidChange : c
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
	var currentActionURL : …
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _handleLaunchRequest : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _isHidden : ›
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _isSnapshotting : ›
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _allowsHitTesting : ›
	var disableAnimations : Bool

	// Swift methods
	0x205b0  func <stripped> // getter 
	0x205f0  func <stripped> // getter 
	0x206a0  func <stripped> // getter 
	0x206c0  func <stripped> // getter 
	0x206e0  func <stripped> // getter 
 }

 class ChronoKit.AvocadoLiveViewHostingController {
 struct ChronoKit.AvocadoViewHost {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _viewModel : Ÿ
	var content : A
 }

 struct ChronoKit.WidgetLaunchModifier {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentURL : ˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handleLaunchRequest :  empty-list 
 }

 class ChronoKit.SignificantTimeChangeNotification : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subject : '
WARNING: couldn't find address 0x0 (0x0) in binary!
	var significantTimeChangeSubscription : 

	// Swift methods
	0x27150  class func SignificantTimeChangeNotification.__allocating_init() // init 
 }

 class ChronoKit.DirectoryCacheKeyProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cacheURL : â // +0x5 (0x0)

	// Swift methods
	0x27df0  func <stripped> // getter 
	0x27e40  func <stripped> // setter 
	0x27ea0  func <stripped> // modifyCoroutine 
	0x27ef0  class func DirectoryCacheKeyProvider.__allocating_init(subsystem:in:fileManager:) // init 
	0x27fc0  class func DirectoryCacheKeyProvider.__allocating_init(cacheURL:) // init 
	0x28080  func <stripped> // method 
	0x28090  func <stripped> // method 
	0x28180  func <stripped> // method 
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
	0x28900  class func ConfiguredWidgetMetadataCache.__allocating_init(backingStore:) // init 
	0x29280  func <stripped> // method 
	0x2a6d0  func <stripped> // method 
	0x2acd0  func <stripped> // method 
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
	0x2dd50  func <stripped> // method 
	0x2ddb0  func <stripped> // method 
	0x2de10  func <stripped> // method 
	0x2de70  func <stripped> // method 
	0x2ded0  func <stripped> // method 
	0x2df30  func <stripped> // method 
	0x2e0f0  func <stripped> // method 
 }

 class ChronoKit.PowerlogViewEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var identity : PowerlogWidgetViewIdentity
	var _metrics : PowerlogViewMetrics
	var beingViewedStartTime : BSMonotonicReferenceTime?
	var isBeingViewed : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdc2800025e88 (0x42800025e88) in binary!
	0x48000000c  @objc PowerlogViewEntry.(null) <stripped>

	// Swift methods
	0x2f280  func <stripped> // setter 
	0x2f340  func <stripped> // getter 
	0x2f4f0  func <stripped> // method 
	0x2f630  func <stripped> // method 
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
	let date : s
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
	case int : m
	case real : Double
	case text : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case blob : ø	
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
	var objectWillChange : {
	var fileManager : NSFileManager

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd41000025e68 (0x41000025e68) in binary!
	0x10674  @objc WidgetReaper.(null) <stripped>
WARNING: couldn't find address 0xd3f800025eb0 (0x3f800025eb0) in binary!
	0xd058  @objc WidgetReaper.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x60cfff940e0  @objc WidgetReaper.(null) <stripped>
	0x5fcfff996d8  @objc WidgetReaper.ÊIã]MãmHâ}‡Ë¬±	 <stripped>

	// Swift methods
	0x3a6f0  func <stripped> // getter 
	0x3a790  func <stripped> // setter 
	0x3a890  func <stripped> // modifyCoroutine 
	0x3a910  func <stripped> // getter 
	0x3a930  func <stripped> // setter 
	0x3a950  func <stripped> // modifyCoroutine 
	0x3aa70  func <stripped> // getter 
	0x3aad0  func <stripped> // setter 
	0x3ab30  func <stripped> // modifyCoroutine 
	0x3ac30  func <stripped> // getter 
	0x3ac70  func <stripped> // setter 
	0x3acc0  func <stripped> // modifyCoroutine 
	0x3a380  class func WidgetReaper.__allocating_init<A, B>(candidateURLsToRemove:urlsToProtect:fileManager:) // init 
	0x3b6e0  func <stripped> // method 
	0x3b8e0  func <stripped> // method 
 }

 class ChronoKit._WidgetExtensionFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ExtensionFactory {
	// Swift methods
 }

 class ChronoKit._SystemNSExtensionDiscoverer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SystemNSExtensionDiscoverer {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _publisher : 	
	var extensionMatchingToken : Any?

	// Swift methods
 }

 class ChronoKit.ExtensionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _extensionsPublisher : '
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _addedPublisher : 	
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _updatedPublisher : 	
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _removedPublisher : 	
	var extensionsByIdentifier : Extension
WARNING: couldn't find address 0x0 (0x0) in binary!
	var removedPluginUUIDsByIdentifier : String
	var queue : OS_dispatch_queue
	let lookupLock : UnfairLock
	let lock : UnfairLock
WARNING: couldn't find address 0x0 (0x0) in binary!
	var nsExtensionDiscovererSubscription : ∑
	var nsExtensionDiscoverer : SystemNSExtensionDiscoverer
	var applicationWorkspace : SystemApplicationWorkspace
	var extensionFactory : ExtensionFactory

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd04400025f18 (0x4400025f18) in binary!
	0x1063c  @objc ExtensionManager.(null) <stripped>
WARNING: couldn't find address 0xd3c000025e78 (0x3c000025e78) in binary!
	0xd020  @objc ExtensionManager.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x5c4fff9c218  @objc ExtensionManager.(null) <stripped>
	0xfff9c330  @objc ExtensionManager.ÔB <stripped>

	// Swift methods
 }

 class ChronoKit.WidgetPreviewHostingViewController {
 class ChronoKit.TimelineDelegate : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd96c00025dd8 (0x16c00025dd8) in binary!
	0x10604  @objc TimelineDelegate.(null) <stripped>
WARNING: couldn't find address 0xd38800025e40 (0x38800025e40) in binary!
	0x18000000c  @objc TimelineDelegate.(null) <stripped>
WARNING: couldn't find address 0xdb7000025dd0 (0x37000025dd0) in binary!
	0x18000000c  @objc TimelineDelegate.(null) <stripped>

	// Swift methods
 }

 struct ChronoKit._AutoupdatingPreviewView {

	// Properties
	var timeline : TLTimeline // +0x0
	var proxy : TimelineDelegate // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentEntry : ˘
 // +0x10
 }

 class ChronoKit.PowerlogUpdateEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let wakeIdentifier : String
	let identity : PowerlogUpdateIdentity
	let cost : PowerlogUpdateCost
	let reason : PowerlogWakeReason
	let remainingBudget : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdb7000025dd0 (0x37000025dd0) in binary!
	0x18000000c  @objc PowerlogUpdateEntry.(null) <stripped>

	// Swift methods
	0x4a620  func <stripped> // getter 
	0x4a8a0  func <stripped> // method 
	0x4a9c0  func <stripped> // method 
 }

 class ChronoKit.WidgetPreviewInfo : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var metricsSpecification : CHSWidgetMetricsSpecification // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environment :  // +0x1ac0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x105d400026060 (0x5d400026060) in binary!
	0xd0f8  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0xc4fc00025e60 (0x4fc00025e60) in binary!
	0x1058c  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0xd31000025dc8 (0x31000025dc8) in binary!
	0xcf70  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe65c8  @objc WidgetPreviewInfo.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x4dcfffe6010  @objc WidgetPreviewInfo.(null) <stripped>
	0x4b4fffe60f8  @objc WidgetPreviewInfo.@ <stripped>

	// Swift methods
	0x4b630  class func <stripped> // getter 
	0x4b640  class func WidgetPreviewInfo.__allocating_init(coder:) // init 
	0x4b8c0  func <stripped> // method 
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
	0x4bce0  class func IOSEnvironmentProvidingFactory.__allocating_init(extensionManager:) // init 
	0x4c2c0  func <stripped> // getter 
	0x4c300  func <stripped> // setter 
	0x4c360  func <stripped> // modifyCoroutine 
	0x4c3a0  func <stripped> // method 
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
	let created : ó
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
	var widgetEnvironment : } // +0x10 (0x10)
	var statefulStore : StatefulStore // +0x20 (0x8)
	let cacheManager : TimelineCacheManaging // +0x28 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var logger : µ // +0x74735f5f (0x0)

	// Swift methods
	0x62400  func <stripped> // getter 
	0x62460  func <stripped> // setter 
	0x624d0  func <stripped> // modifyCoroutine 
	0x62590  func <stripped> // getter 
	0x625c0  func <stripped> // setter 
	0x62610  func <stripped> // modifyCoroutine 
	0x627b0  func <stripped> // getter 
	0x62800  func <stripped> // setter 
	0x62860  func <stripped> // modifyCoroutine 
	0x628a0  class func PlaceholderReloadStrategy.__allocating_init(cacheManager:logger:) // init 
	0x62a20  func <stripped> // method 
	0x630d0  func <stripped> // method 
	0x63120  func <stripped> // method 
	0x65700  func <stripped> // method 
	0x65710  func <stripped> // method 
	0x66180  func <stripped> // method 
 }

 class ChronoKit.PowerlogUpdateService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var provider : PowerlogProvider
	var _entries : PowerlogUpdateEntry
	var lock : UnfairLock

	// Swift methods
	0x6d9c0  func <stripped> // method 
	0x6df70  func <stripped> // method 
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
	0x72d20  func <stripped> // method 
	0x72ee0  func <stripped> // method 
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
	0x75d30  func <stripped> // getter 
	0x75d70  func <stripped> // setter 
	0x75db0  func <stripped> // modifyCoroutine 
	0x75e90  func <stripped> // getter 
	0x75ed0  func <stripped> // setter 
	0x75f10  func <stripped> // modifyCoroutine 
	0x75c00  class func WidgetCacheURLProvider.__allocating_init(subdirectory:fileExtension:) // init 
	0x75fb0  func <stripped> // method 
 }

 class ChronoKit.ReloadTaskCancellable : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cancellable : ¸
	let _description : String?

	// Swift methods
	0x76f90  class func ReloadTaskCancellable.__allocating_init(_:description:) // init 
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
	0x79800  class func ChronoMetadataStore.__allocating_init(storage:) // init 
 }

 class ChronoKit.MutableStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let extensionStore : MutableExtensionStore
	let configuredWidgetStore : MutableConfiguredWidgetStore

	// Swift methods
	0x7acc0  func <stripped> // method 
 }

 class ChronoKit.DatabaseAccessor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _db : SQLDatabase

	// Swift methods
 }

 class ChronoKit.ExtensionStore : ChronoMetadataStore.DatabaseAccessor {
	// Swift methods
	0x7ae70  func <stripped> // method 
	0x7bb00  func <stripped> // method 
	0x7bf50  func <stripped> // method 
 }

 class ChronoKit.MutableExtensionStore : ChronoMetadataStore.ExtensionStore {
	// Swift methods
	0x7cea0  func <stripped> // method 
	0x7cf40  func <stripped> // method 
	0x7e490  func <stripped> // method 
 }

 class ChronoKit.ConfiguredWidgetStore : ChronoMetadataStore.DatabaseAccessor {
	// Swift methods
	0x7e5f0  func <stripped> // method 
 }

 class ChronoKit.MutableConfiguredWidgetStore : ChronoMetadataStore.ConfiguredWidgetStore {
	// Swift methods
	0x7efa0  func <stripped> // method 
	0x7f5a0  func <stripped> // method 
	0x7f860  func <stripped> // method 
 }

 class ChronoKit.BlockAssertion : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Assertion {

	// Properties
	let lock : UnfairLock
	var block : ()?

	// Swift methods
	0x89a00  class func BlockAssertion.__allocating_init(_:) // init 
 }

 class ChronoKit.WidgetEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var protectionType : G
	let lock : UnfairLock
	let key : WidgetEntryKey
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _cachedViewableEntry : [
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _configuredDate : s
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentEntry : â
	let environmentProvider : EnvironmentProviding
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _content : _&
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : É˘

	// Swift methods
	0x8a950  func <stripped> // getter 
	0x8a9a0  func <stripped> // setter 
	0x8aa00  func <stripped> // modifyCoroutine 
	0x8aa90  func <stripped> // getter 
	0x8acc0  func <stripped> // getter 
	0x8ad60  func <stripped> // setter 
	0x8af60  func <stripped> // getter 
	0x8afb0  func <stripped> // setter 
	0x8b200  func <stripped> // modifyCoroutine 
	0x8b470  func <stripped> // method 
	0x8b4d0  func <stripped> // method 
	0x8b980  func <stripped> // getter 
	0x8bb30  class func WidgetEntry.__allocating_init(key:protectionType:environmentProvider:) // init 
	0x8be50  func <stripped> // method 
 }

 enum ChronoKit.WidgetEntryError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case viewDecodingFailed : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case entryNotFound : ©˜
WARNING: couldn't find address 0x0 (0x0) in binary!
	case environmentNotFound : ”
	case missingContent  
 }

 class ChronoKit.WidgetUpdateTimer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subject : â // +0x10 (0x8)
	let quantum : Double // +0x18 (0x8)
	let queue : OS_dispatch_queue // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scheduledDate : s // +0x0 (0x0)
	var _timer : OS_dispatch_source_timer? // +0x0 (0x8)

	// Swift methods
	0x8d200  class func WidgetUpdateTimer.__allocating_init(quantum:queue:) // init 
 }

 class ChronoKit.WidgetExtension : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identifier : String // +0x10 (0x10)
	let version : String // +0x20 (0x10)
	let isInternal : Bool // +0x30 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let pluginUUID : I˜ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cacheGUID : I˜ // +0xad3a0 (0x0)
	let sequenceNumber : Int // +0x8058 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lastModifiedDate : s // +0xad3a0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bundleURL : â // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let containerBundleURL : â // +0x0 (0x0)
	let containerBundleVersion : String // +0x0 (0x10)
	let containerBundleIdentifier : String // +0x77735f5f (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dataContainerURL : â // +0x7079745f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let systemDataContainerURL : â // +0x45545f5f (0x0)
	let descriptorDiscoveryIsRestricted : Bool // +0x0 (0x1)
	let wantsLocation : Bool // +0xb53f8 (0x1)
	let availableLocalizations : [String] // +0x2a94 (0x8)
	let allowsMixedLocalizations : Bool // +0xb53f8 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let requestedDataProtection : K // +0x0 (0x0)
	let nsExtension : NSExtension // +0x0 (0x8)

	// Swift methods
	0x8f700  func <stripped> // method 
	0x8f800  func <stripped> // method 
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
	var baseURL : â
	var widget : CHSWidget?
	var metrics : CHSWidgetMetrics?
 }

 class ChronoKit.WidgetPreviewTimelineEntry : TLTimelineBlobEntry /System/Library/PrivateFrameworks/Timeline.framework/Timeline {

	// Properties
	var tl_errors : [TLPreviewTimelineError]
	var tl_selectableRegions : [TLPreviewTimelineSelectableRegion]
	var backgroundColor : UIColor?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd2d800025cf0 (0x2d800025cf0) in binary!
	0x1053c  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0xd2c000025cc8 (0x2c000025cc8) in binary!
	0x10524  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x1051800026128 (0x51800026128) in binary!
	0xc470  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x1051600026118 (0x51600026118) in binary!
	0x10518  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0xd03c00025ca0 (0x3c00025ca0) in binary!
	0xced8  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x74694b6f6e  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x433a5443454a4f52 (0x443454a4f52) in binary!
	0xa312e382e  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x4058f33333333333 (0x33333333333) in binary!
	0x0  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find address 0x656e696c656d6954 (0x16c656d6954) in binary!
	0x5a440010050  @objc WidgetPreviewTimelineEntry.(null) <stripped>
WARNING: couldn't find offset 0xffffffe8 in binary!
WARNING: couldn't find offset 0xffffffe8 in binary!
WARNING: couldn't find address 0xfff55b7cffffffe8 (0x0) in binary!
	0x7e00000002  @objc WidgetPreviewTimelineEntry.(null) <stripped>

	// Swift methods
	0x93360  func <stripped> // getter 
	0x933a0  func <stripped> // setter 
	0x93400  func <stripped> // modifyCoroutine 
	0x934e0  func <stripped> // getter 
	0x935d0  func <stripped> // setter 
	0x93710  func <stripped> // modifyCoroutine 
	0x93800  func <stripped> // getter 
	0x93840  func <stripped> // setter 
	0x93890  func <stripped> // modifyCoroutine 
	0x94800  func <stripped> // getter 
 }

 class ChronoKit.PlaceholderEntry : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var protectionType : G // +0x0 (0x0)
	var states : WidgetEntryKey // +0x0 (0x8)
	var reloadHistory : WidgetEntryKey // +0x0 (0x8)
	let lock : UnfairLock // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let logger : µ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : ' // +0x0 (0x8)
	var _viewCollections : WidgetEntryKey // +0x0 (0x8)
	let key : String // +0x0 (0x10)
	let environmentProvider : EnvironmentProviding // +0x77735f5f (0x28)

	// Swift methods
	0x95f90  func <stripped> // getter 
	0x95fe0  func <stripped> // setter 
	0x96040  func <stripped> // modifyCoroutine 
	0x96190  func <stripped> // getter 
	0x96210  func <stripped> // setter 
	0x96250  func <stripped> // modifyCoroutine 
	0x96430  func <stripped> // getter 
	0x964d0  func <stripped> // getter 
	0x965a0  func <stripped> // method 
	0x966f0  func <stripped> // method 
	0x96780  func <stripped> // method 
	0x96c10  func <stripped> // method 
	0x96c80  func <stripped> // method 
	0x96ef0  func <stripped> // method 
	0x97510  func <stripped> // method 
	0x97940  func <stripped> // method 
	0x97cb0  func <stripped> // method 
	0x97de0  func <stripped> // method 
	0x97fb0  func <stripped> // method 
	0x981e0  func <stripped> // getter 
	0x95e40  class func PlaceholderEntry.__allocating_init(key:protectionType:environmentProvider:logger:) // init 
 }

 struct ChronoKit.HistoricReload {

	// Properties
	let reason : ReloadReason // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let created : ó // +0x8
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
	var __environmentValues : + // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var environmentDidChangePublisher : ' // +0x0 (0x8)
	let lock : UnfairLock // +0x7061635f (0x8)

	// Swift methods
	0x9cbc0  func <stripped> // getter 
 }

 class ChronoKit.WidgetDescriptorCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib, WidgetDescriptorCaching {

	// Properties
	let lock : UnfairLock
	var provider : WidgetDescriptorProvider
	let backingStore : ChronoMetadataStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _descriptorUpdatePublisher : '
	var extensionCache : ExtensionMetadata
	var outstandingFetches : Set<String>

	// Swift methods
	0x9d7b0  class func WidgetDescriptorCache.__allocating_init(backingStore:) // init 
 }

 class ChronoKit.ExtensionSystemDataCacheKeyProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var subsystemIdentifier : String
	var extensionManager : ExtensionManaging
	var fileManager : NSFileManager

	// Swift methods
	0xa37c0  class func ExtensionSystemDataCacheKeyProvider.__allocating_init(subsystemIdentifier:extensionManager:fileManager:) // init 
	0xa3870  func <stripped> // method 
	0xa3a70  func <stripped> // method 
	0xa3b40  func <stripped> // method 
 }

 struct ChronoKit.WidgetLiveView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultView : 	
	var timelineUI : WidgetLiveViewTimelineUI
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _entry : ı
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _backgroundColor : …
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _environmentValues : ü
WARNING: couldn't find address 0x0 (0x0) in binary!
	let environmentDidChange : c
 }

 class ChronoKit.TimelineUI {
 class ChronoKit.PlaceholderStatefulStore {
 struct ChronoKit.FixedDataProtectionProvider: DataProtectionLevelProviding {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var protectionType : G
 }

 struct ChronoKit.ExtensionDataProtectionLevelProvider: DataProtectionLevelProviding {

	// Properties
	var extensionManager : ExtensionManaging
WARNING: couldn't find address 0x0 (0x0) in binary!
	var default : G
 }
