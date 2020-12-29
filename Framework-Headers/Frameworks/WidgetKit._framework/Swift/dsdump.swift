 protocol WidgetKit._WidgetEnvironmentKey // 11 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class getter
	// class method
	// class method
	// class getter
	// class method
	// class method
 }
 protocol WidgetKit.TimelineEntry // 2 requirements
 {
	// getter
	// getter
 }
 protocol WidgetKit.TimelineProvider // 5 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// method
	// method
	// method
 }
 protocol WidgetKit.IntentTimelineProvider // 6 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// method
	// method
	// method
 }
 protocol WidgetKit.WidgetExtensionSessionAssertionInvalidatable // 1 requirements
 {
	// method
 }
 protocol WidgetKit.WidgetExtensionSessionSuspensionObserving // 1 requirements
 {
	// method
 }
 protocol WidgetKit.RunningBoardInterface // 2 requirements
 {
	// method
	// method
 }
 protocol WidgetKit.EntryProviding // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol WidgetKit.LockProtocol // 6 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol WidgetKit.TimelineViewCollection // 11 requirements
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
	// method
	// method
 }
 protocol WidgetKit.ArchivableTimelineViewCollection // 2 requirements
 {
	// class base protocol
	// method
 }

 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : ßØ
 }

 enum __C.CHSWidgetVisibility { }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ø†
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ø†
 }

 struct __C.audit_token_t {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var val : õØ
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : ø†
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ø†
 }

 struct __C.CHSWidgetFamilyMask {

	// Properties
	let rawValue : UInt
 }

 enum __C.CHSWidgetFamily { }

 class __C.CFString {
 class WidgetKit.WidgetViewCollection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let environment : WidgetEnvironment // +0x10 (0x8)
	let widget : CHSWidget // +0x18 (0x8)
	let reloadPolicy : TimelineReloadPolicy // +0xfeedfacf (0x0)
	let requiresReload : Bool // +0x6100085 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_dateRange : M† // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var creationDate : U† // +0x3 (0x0)
	let protectionLevel : DataProtectionLevel // +0x31 (0x1)
	var viewableEntries : ViewableTimelineEntry // +0x0 (0x8)

	// Swift methods
	0x2f30  class func WidgetViewCollection.__allocating_init(widget:environment:entries:reloadPolicy:) // init 
 }

 struct WidgetKit.WidgetEnvironment {

	// Properties
	var _storage : Storage // +0x0
 }

 class WidgetKit.Storage : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var tuples : CodingKeys

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa0240001e760 (0x240001e760) in binary!
	0xa018  @objc Storage.(null) <stripped>
WARNING: couldn't find address 0xa0140001e908 (0x140001e908) in binary!
	0x8df4  @objc Storage.(null) <stripped>
WARNING: couldn't find address 0x7fa40001e708 (0x7a40001e708) in binary!
	0x18000000c  @objc Storage.(null) <stripped>
WARNING: couldn't find address 0x8dc80001e6e8 (0x5c80001e6e8) in binary!
	0xa8000000c  @objc Storage.(null) <stripped>
WARNING: couldn't find address 0x9fc40001e808 (0x7c40001e808) in binary!
	0x9fb8  @objc Storage.(null) <stripped>

	// Swift methods
	0xfa80  class func WidgetEnvironment.Storage.__allocating_init(from:) // init 
	0x10820  class func WidgetEnvironment.Storage.__allocating_init(coder:) // init 
 }

 struct WidgetKit.EnvironmentValuesEnumerator {

	// Properties
	let environment : WidgetEnvironment
WARNING: couldn't find address 0x0 (0x0) in binary!
	let base : ’•
 }

 struct WidgetKit.Iterator {

	// Properties
	var iterator : Iterator
WARNING: couldn't find address 0x0 (0x0) in binary!
	let base : ’•
 }

 class WidgetKit.AnyKey : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let storage : StorageBase

	// Swift methods
	0x12cc0  class func <stripped> // init 
 }

 class WidgetKit.StorageBase : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x13220  func <stripped> // getter 
	0x13270  func <stripped> // getter 
	0x132c0  func <stripped> // getter 
	0x13310  func <stripped> // getter 
	0x13360  func <stripped> // method 
	0x133b0  func <stripped> // method 
	0x13400  func <stripped> // method 
 }

 class WidgetKit.Storage {
 class WidgetKit.AnyValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let storage : StorageBase

	// Swift methods
	0x13a40  class func <stripped> // init 
 }

 class WidgetKit.StorageBase : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x140e0  func <stripped> // getter 
	0x14130  func <stripped> // getter 
	0x14180  func <stripped> // method 
	0x141d0  func <stripped> // method 
	0x14220  func <stripped> // method 
 }

 class WidgetKit.Storage {
 class WidgetKit.AnyKeyValueTuple : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let storage : StorageBase // +0x10 (0x8)
	let value : AnyValue // +0x18 (0x8)

	// Swift methods
 }

 class WidgetKit.StorageBase : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x14880  func <stripped> // getter 
	0x148d0  func <stripped> // getter 
	0x14920  func <stripped> // getter 
	0x14970  func <stripped> // getter 
	0x149c0  func <stripped> // method 
	0x14a10  func <stripped> // method 
 }

 class WidgetKit.Storage {
 struct WidgetKit.CartesianProductEnumerator {

	// Properties
	let environment : WidgetEnvironment // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let ignoring :  empty-list  // +0x8
 }

 struct WidgetKit.Iterator {

	// Properties
	var sortedValues : AnyKeyValueTuple // +0x0
	var slice : AnyKeyValueTuple // +0x8
	var indices : [Int] // +0x10
 }

 struct WidgetKit.CodingKeys {

	// Properties
	let key : AnyKey // +0x0
	let stringValue : String // +0x8
 }

 struct WidgetKit.TupleValue {

	// Properties
	let tuple : AnyKeyValueTuple // +0x0
 }

 struct WidgetKit.AccessibilityDifferentiateWithoutColorKey: _WidgetEnvironmentKey { }

 struct WidgetKit.AccessibilityInvertColorsKey: _WidgetEnvironmentKey { }

 struct WidgetKit.AccessibilityReduceMotionKey: _WidgetEnvironmentKey { }

 struct WidgetKit.AccessibilityReduceTransparencyKey: _WidgetEnvironmentKey { }

 struct WidgetKit.ColorSchemeKey: _WidgetEnvironmentKey { }

 struct WidgetKit.ColorSchemeContrastKey: _WidgetEnvironmentKey { }

 struct WidgetKit.ContentSizeCategoryKey: _WidgetEnvironmentKey { }

 struct WidgetKit.DisplayScaleKey: _WidgetEnvironmentKey { }

 struct WidgetKit.LegibilityWeightKey: _WidgetEnvironmentKey { }

 enum WidgetKit.CodingKeys { }

 enum WidgetKit.CodingKeys {

	// Properties
	case rawValue  
 }

 struct WidgetKit.CodableBool {

	// Properties
	let rawValue : Bool // +0x0
 }

 enum WidgetKit.CodableColorScheme {

	// Properties
	case light  
	case dark  
 }

 enum WidgetKit.CodableColorSchemeContrast {

	// Properties
	case increased  
	case standard  
 }

 enum WidgetKit.CodableContentSizeCategory {

	// Properties
	case extraSmall  
	case small  
	case medium  
	case large  
	case extraLarge  
	case extraExtraLarge  
	case extraExtraExtraLarge  
	case accessibilityMedium  
	case accessibilityLarge  
	case accessibilityExtraLarge  
	case accessibilityExtraExtraLarge  
	case accessibilityExtraExtraExtraLarge  
 }

 enum WidgetKit.CodableLegibilityWeight {

	// Properties
	case regular  
	case bold  
 }

 struct WidgetKit.WidgetInfo {

	// Properties
	let configuration : INIntent? // +0x0
	let family : WidgetFamily // +0x8
	let kind : String // +0x10
	let internalFamily : InternalWidgetFamily // +0x20
 }

 struct WidgetKit.DedupedSequence {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var iterator : ü£
	var isEqualProvider : (_:_:)
 }

 struct WidgetKit.DedupedIterator {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var iterator : ü£
	var isEqualProvider : (_:_:)
	var lastValue : A?
 }

 struct WidgetKit.StaticConfiguration {

	// Properties
	var provider : BaseEntryProviderBox
	var configuration : ResolvedWidgetConfiguration
 }

 class WidgetKit.TimelineEntryProvider {
 struct WidgetKit.SystemVersion {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var platform : ßØ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sdk : ßØ // +0x4
 }

 struct WidgetKit.BundleStub {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var url : Áì
	var identifier : String
	var version : String
 }

 struct WidgetKit.EntryMetadata {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : U†
	var relevance : TimelineEntryRelevance
 }

 struct WidgetKit._WidgetArchivableMetadata {

	// Properties
	var systemVersion : SystemVersion
WARNING: couldn't find address 0x0 (0x0) in binary!
	var creationDate : U†
	var extensionBundle : BundleStub
	var environment : WidgetEnvironment
	var widget : CHSWidget
	var entryMetadata : EntryMetadata
	var reloadPolicy : TimelineReloadPolicy
 }

 enum WidgetKit.CodingKeys {

	// Properties
	case date  
 }

 enum WidgetKit.CodingKeys {

	// Properties
	case url  
	case identifier  
	case version  
 }

 enum WidgetKit.CodingKeys {

	// Properties
	case platform  
	case sdk  
 }

 enum WidgetKit.CodingKeys {

	// Properties
	case creationDate  
	case environment  
	case widget  
	case entryMetadata  
	case reloadPolicy  
	case archiveVersion  
	case extensionBundle  
	case systemVersion  
 }

 enum WidgetKit.CodingKeys {

	// Properties
	case date  
	case relevance  
 }

 class WidgetKit.Dates : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct WidgetKit.ResolvedWidgetConfiguration {

	// Properties
	var kind : String // +0x0
	var intentType : String? // +0x10
 }

 struct WidgetKit.WidgetPreviewContextKey {

	// Properties
	let family : WidgetFamily
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : U†
	let configuration : INIntent?
	var widgetHost : WidgetHost
 }

 struct WidgetKit.WidgetPreviewContext {

	// Properties
	let family : WidgetFamily
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : U†
	let configuration : INIntent?
	var widgetHost : WidgetHost
 }

 struct WidgetKit.TimelineProviderContext {

	// Properties
	let environmentVariants : EnvironmentVariants // +0x0
	let family : WidgetFamily // +0x20
	let internalFamily : InternalWidgetFamily // +0x21
	let isPreview : Bool // +0x22
	let displaySize : CGSize // +0x28
 }

 struct WidgetKit.EnvironmentVariants {

	// Properties
	let environment : WidgetEnvironment // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _locale :  empty-list  // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _calendar :  empty-list  // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _layoutDirection :  empty-list  // +0x18
 }

 struct WidgetKit.TimelineEntryRelevance {

	// Properties
	var score : Float // +0x0
	var duration : Double // +0x8
 }

 struct WidgetKit.TimelineReloadPolicy {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : _û
 }

 struct WidgetKit.Timeline {

	// Properties
	let entries : [A]
	let policy : TimelineReloadPolicy
 }

 enum WidgetKit.CodingKeys {

	// Properties
	case score  
	case duration  
 }

 class WidgetKit.WidgetCenter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let connection : NSXPCConnection

	// Swift methods
	0x32290  func <stripped> // method 
	0x32d80  func <stripped> // method 
	0x33580  func <stripped> // method 
	0x34110  func <stripped> // method 
 }

 struct WidgetKit.UserInfoKey { }

 struct WidgetKit.Private_Timeouts { }

 struct WidgetKit.WidgetURLActionKey { }

 struct WidgetKit.WidgetIsSnapshottingKey { }

 struct WidgetKit.WidgetURLModifier {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _urlAction : í
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : Áì
 }

 enum WidgetKit.CodableKeys {

	// Properties
	case url  
 }

 enum WidgetKit.CKCErrorCode {

	// Properties
	case watchdog  
	case invalidSizeConfiguration  
	case timelineReloadFailed  
	case timelineReloadTimeout  
	case widgetNotFound  
	case noEntries  
	case widgetCenterFailure  
	case extensionNotFound  
	case environmentNotFound  
 }

 class WidgetKit._TimelineArchivedViewCollection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var requiresReload : Bool // +0x10 (0x1)
	var protectionLevel : DataProtectionLevel // +0x11 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_dateRange : M† // +0x0 (0x0)
	var metadata : _WidgetArchivableMetadata // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var archivedStates : Àî // +0x45545f5f (0x0)

	// Swift methods
	0x37390  func <stripped> // getter 
	0x37410  func <stripped> // getter 
	0x37490  func <stripped> // getter 
	0x37520  func <stripped> // getter 
	0x37600  func <stripped> // getter 
	0x37710  func <stripped> // getter 
	0x37740  func <stripped> // setter 
	0x37770  func <stripped> // modifyCoroutine 
	0x377b0  func <stripped> // getter 
	0x378c0  func <stripped> // getter 
	0x378f0  func <stripped> // setter 
	0x37920  func <stripped> // modifyCoroutine 
	0x37a20  func <stripped> // getter 
	0x37f80  func <stripped> // setter 
	0x38030  func <stripped> // modifyCoroutine 
	0x38160  func <stripped> // getter 
	0x382f0  func <stripped> // method 
	0x38d40  func <stripped> // method 
 }

 class WidgetKit.WGAutoreleasePool : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var pool : UnsafeMutableRawPointer?

	// Swift methods
 }

 class WidgetKit.WidgetPersonality : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let extensionBundleIdentifier : String
	let kind : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9fc40001e808 (0x7c40001e808) in binary!
	0x9fb8  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x8d480001e7f8 (0x5480001e7f8) in binary!
	0x8077  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x8d300001e690 (0x5300001e690) in binary!
	0x9f90  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x8d700001e698 (0x5700001e698) in binary!
	0x9f70  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x9f640001e6a0 (0x7640001e6a0) in binary!
	0x7f08  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc7878  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x1cfffc7d20  @objc WidgetPersonality.(null) <stripped>
	0x70c0001e648  @objc WidgetPersonality.HãµhˇˇˇËºw <stripped>
WARNING: couldn't find address 0x1e77cfffcbe90 (0x77cfffcbe90) in binary!
	0x5240001e768  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x1e754fffcbf38 (0x754fffcbf38) in binary!
	0x38000000c  @objc WidgetPersonality.(null) <stripped>

	// Swift methods
	0x39fd0  class func WidgetPersonality.__allocating_init(extensionBundleIdentifier:kind:) // init 
	0x3a090  class func WidgetPersonality.__allocating_init<A>(_:) // init 
	0x3a100  func <stripped> // method 
	0x3a470  class func <stripped> // getter 
	0x3a480  class func WidgetPersonality.__allocating_init(coder:) // init 
	0x3a630  func <stripped> // method 
 }

 class WidgetKit.WidgetLocalizations : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identifier : String
	let availableLocalizations : [String]
	let supportsMixedLocalizations : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8d200001e648 (0x5200001e648) in binary!
	0x9f28  @objc WidgetLocalizations.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x77cfffcbe90  @objc WidgetLocalizations.(null) <stripped>

	// Swift methods
	0x3b1f0  class func WidgetLocalizations.__allocating_init(identifier:availableLocalizations:supportsMixedLocalizations:) // init 
	0x3b600  func <stripped> // method 
	0x3b760  class func WidgetLocalizations.__allocating_init(coder:) // init 
	0x3bb90  class func WidgetLocalizations.__allocating_init(from:) // init 
	0x3bdf0  func <stripped> // method 
 }

 enum WidgetKit.CodingKeys {

	// Properties
	case identifier  
	case availableLocalizations  
	case supportsMixedLocalizations  
 }

 class WidgetKit.WidgetArchiver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum WidgetKit.ArchivingError {

	// Properties
	case failedToEncode : (types: [Any.Type])
WARNING: couldn't find address 0x0 (0x0) in binary!
	case bundleLookupFailed : πú
	case imageTooLarge : CGSize
	case missingNecessaryWidgetMetrics  
 }

 struct WidgetKit.ArchivingDelegate {

	// Properties
	var maximumImagePixelSize : CGSize // +0x0
	var systemVersionProvider : SystemVersion // +0x18
	var bundleForWidget : BundleStub // +0x28
	var failIfAnyTypeFailedToEncode : Bool // +0x38
	var unencodeableTypes : [Any.Type] // +0x40
 }

 class WidgetKit.WidgetHostContext : _AvocadoExtensionBaseContext {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9f0c0001e648 (0x70c0001e648) in binary!
	0x9f08  @objc WidgetHostContext.(null) <stripped>
WARNING: couldn't find address 0xa5240001e768 (0x5240001e768) in binary!
	0x8df0  @objc WidgetHostContext.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x604fffd0638  @objc WidgetHostContext.(null) <stripped>
	0xfffd0680  @objc WidgetHostContext.âˆHâ⁄Aˇ◊Lã}¿L9}∞t?Le®LâËLãm–ËFÉ <stripped>
 }

 class WidgetKit.ResolvedWidgetHost {
 class WidgetKit.ResolvedWidgetBundleHost : WidgetHost {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let host : Wê
	var widgetDescriptors : WidgetDescriptor

	// Swift methods
	0x40f90  class func ResolvedWidgetBundleHost.__allocating_init<A>(_:) // init 
 }

 class WidgetKit.Link : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var framesPerSecond : Int
	var link : CADisplayLink?
	let lock : UnfairLock
WARNING: couldn't find address 0x0 (0x0) in binary!
	var demand :  empty-list 
	var connections : ConduitList

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7e840001e788 (0x6840001e788) in binary!
	0x9ec8  @objc Link.(null) <stripped>
WARNING: couldn't find address 0x7e6c0001e5d0 (0x66c0001e5d0) in binary!
	0x28000000c  @objc Link.(null) <stripped>
WARNING: couldn't find address 0x9eac0001e7a0 (0x6ac0001e7a0) in binary!
	0x8f10  @objc Link.(null) <stripped>
 }

 struct WidgetKit.DisplayLink {

	// Properties
	let link : Link // +0x0
 }

 enum WidgetKit.ConduitList {

	// Properties
	case one : Conduit // +0x0
	case many : Conduit // +0x0
	case none   // +0x4b650
 }

 struct WidgetKit.Conduit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let combineIdentifier : Åç
WARNING: couldn't find address 0x0 (0x0) in binary!
	let receiveInput : ªç
WARNING: couldn't find address 0x0 (0x0) in binary!
	let receiveCompletion :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	let demand :  empty-list 
	let remove : Conduit
 }

 class WidgetKit.OptionalLocalizationsWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let value : WidgetLocalizations // +0x0

	// Swift methods
	0x4c7e0  func <stripped> // method 
 }

 class WidgetKit.CHSWidgetMetricsCodable : CHSWidgetMetrics /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9eac0001e7a0 (0x6ac0001e7a0) in binary!
	0x8f10  @objc CHSWidgetMetricsCodable.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x4fffe19b8  @objc CHSWidgetMetricsCodable.(null) <stripped>

	// Swift methods
	0x4d400  func <stripped> // method 
 }

 struct WidgetKit.LocalizationTokenKey { }

 struct WidgetKit.LocalizationsKey { }

 struct WidgetKit.WidgetFamilyKey { }

 struct WidgetKit.WidgetMetricsKey { }

 enum WidgetKit.CodingKeys {

	// Properties
	case size  
	case cornerRadius  
	case textSizeAdjustment  
 }

 enum WidgetKit.CodingKeys {

	// Properties
	case value  
 }

 enum WidgetKit.CodingKeys {

	// Properties
	case rawValue  
 }

 struct WidgetKit.ComparableData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : !ù // +0x0
 }

 enum WidgetKit.WidgetFamily {

	// Properties
	case systemSmall  
	case systemMedium  
	case systemLarge  
 }

 enum WidgetKit.InternalWidgetFamily {

	// Properties
	case systemSmall  
	case systemMedium  
	case systemLarge  
	case systemExtraLarge  
 }

 enum WidgetKit.ValidationError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case bundleStubNotSupported : πú
WARNING: couldn't find address 0x0 (0x0) in binary!
	case systemVersionNotSupported : πú
 }

 struct WidgetKit.ValidationOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var isSystemVersionSupported : ïò // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var isBundleSupported : }ò // +0x10
 }

 enum WidgetKit.SimpleError {

	// Properties
	case message : String
 }

 class WidgetKit.DateTicker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _date : ìâ

	// Swift methods
	0x51fe0  func <stripped> // getter 
 }

 struct WidgetKit._ClockHandRotationEffect {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _ticker : ä
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _widgetIsSnapshotting : iâ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anchor : _é
	let period : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timeZone : 9á
 }

 enum WidgetKit.Period {

	// Properties
	case custom : Double
	case hourHand  
	case minuteHand  
	case secondHand  
 }

 enum WidgetKit.CodableKeys {

	// Properties
	case anchor  
	case period  
	case timeZone  
 }

 enum WidgetKit.WidgetExtensionSessionOperation {

	// Properties
	case getDescriptors  
	case getPlaceholders  
	case handleURLSessionEvents  
	case attachPreviewAgent  
	case getTimeline  
 }

 class WidgetKit.WidgetExtensionSessionFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class WidgetKit._RunningBoardInterface : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RunningBoardInterface {
	// Swift methods
 }

 class WidgetKit._WidgetExtensionSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let theExtension : NSExtension // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sessionUUID : «Ö // +0x74735f5f (0x0)
	let hostContext : WidgetHostContext // +0x65706c65 (0x8)
	let loggingIdentifier : String // +0x45545f5f (0x10)
	let lock : UnfairLock // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list  // +0x7245c (0x8)
	let watchdogTimeoutQueue : OS_dispatch_queue // +0x146a (0x8)
	let watchdogTimeoutProvider : WidgetExtensionSessionOperation // +0x7245c (0x10)
	let rbsInterface : RunningBoardInterface // +0x0 (0x28)
	let suspensionObserver : WidgetExtensionSessionSuspensionObserving // +0x80000400 (0x28)
	var widgetExtensionAssertion : Swift.AnyObject? // +0x0 (0x8)
	var lock_invalidated : Bool // +0x0 (0x1)
	let connection : NSXPCConnection // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8cb40001e818 (0x4b40001e818) in binary!
	0x7c50  @objc _WidgetExtensionSession.(null) <stripped>
WARNING: couldn't find address 0x8cb60001e7f0 (0x4b60001e7f0) in binary!
	0x7c38  @objc _WidgetExtensionSession.(null) <stripped>
WARNING: couldn't find address 0x7dec0001e7c8 (0x5ec0001e7c8) in binary!
	0x7df8  @objc _WidgetExtensionSession.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x78cffff3578  @objc _WidgetExtensionSession.(null) <stripped>
	0x794ffff3640  @objc _WidgetExtensionSession.HãE∞IâEHãE®HcxLâm®LÔLãm∏HãùXˇˇˇLãs HâΩPˇˇˇHãu¿LâÍAˇ÷Lâˇˇx <stripped>
	0x76cffff5168  @objc _WidgetExtensionSession.õ˛ˇˇHã√ <stripped>

	// Swift methods
	0x55f10  func <stripped> // method 
	0x565c0  func <stripped> // method 
	0x569d0  func <stripped> // method 
	0x58260  func <stripped> // method 
	0x586f0  func <stripped> // method 
 }

 class WidgetKit.WidgetPreviewAgent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class WidgetKit.Cartesian2ProductCollection {
 class WidgetKit.BaseEntryProviderBox : _SwiftObject /usr/lib/swift/libswiftCore.dylib, EntryProviding {
	// Swift methods
	0x5faf0  func <stripped> // getter 
	0x5fb90  class func BaseEntryProviderBox.__allocating_init() // init 
	0x5fbb0  func <stripped> // method 
	0x5fbc0  func <stripped> // method 
	0x637a0  func <stripped> // method 
 }

 struct WidgetKit.EntryDescriptor {

	// Properties
	var entryProvider : BaseEntryProviderBox // +0x0
 }

 struct WidgetKit.WidgetURLSessionEventConfiguration {

	// Properties
	let sessionIdentifierPredicate : (_:) // +0x0
	let sessionEventsHandler : (_:_:) // +0x10
 }

 struct WidgetKit.WidgetDescriptor {

	// Properties
	var displayName : String? // +0x0
	var kind : String? // +0x10
	var widgetDescription : String? // +0x20
	var supportedFamilies : InternalWidgetFamily // +0x30
	var intentType : String? // +0x38
	var onURLSessionEventsConfigurations : WidgetURLSessionEventConfiguration // +0x48
	var entryDescriptor : EntryDescriptor // +0x50
	var widgetVisibility : CHSWidgetVisibility // +0x60
 }

 struct WidgetKit.WidgetDescriptorKey { }

 class WidgetKit.WidgetHost : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x63920  func <stripped> // getter 
	0x63960  func <stripped> // getter 
	0x639a0  func <stripped> // method 
 }

 class WidgetKit.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LockProtocol {

	// Properties
	var _lock : os_unfair_lock_s

	// Swift methods
 }

 struct WidgetKit.IntentConfiguration {

	// Properties
	var provider : BaseEntryProviderBox
	var configuration : ResolvedWidgetConfiguration
 }

 class WidgetKit.IntentTimelineEntryProvider {
 class WidgetKit.WidgetURLHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let sessionIdentifier : String
	let descriptors : WidgetDescriptor
	var completion : ()?
	let id : NSUUID

	// Swift methods
	0x666f0  func <stripped> // method 
 }

 class WidgetKit.WidgetExtensionContext : _AvocadoExtensionBaseContext {

	// Properties
	var previewAgent : WidgetPreviewAgent
	var urlHandlers : WidgetURLHandler

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7de40001e528 (0x5e40001e528) in binary!
	0x7dd8  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x8c4c0001e7b0 (0x44c0001e7b0) in binary!
	0x8c5a  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x7bdc0001e790 (0x3dc0001e790) in binary!
	0x7d90  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x7bc40001e768 (0x3c40001e768) in binary!
	0x9de0  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x9ddc0001e650 (0x5dc0001e650) in binary!
	0xa3f8  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x8cc40001e628 (0x4c40001e628) in binary!
	0x7d60  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x474ffffd780  @objc WidgetExtensionContext.(null) <stripped>
	0xffffd7d8  @objc WidgetExtensionContext.ˇLâÔË;Ö <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x5dcffffd7d0  @objc WidgetExtensionContext.(null) <stripped>
	0x5b4ffffd878  @objc WidgetExtensionContext.Û <stripped>
	0xffffda50  @objc WidgetExtensionContext.Lã}»MÖÌÖõ˛ˇˇHã√ <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x1573a4d4152  @objc WidgetExtensionContext.(null) <stripped>

	// Swift methods
	0x671c0  func <stripped> // method 
 }

 class WidgetKit.TightLeadingFontDefinition : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x6ad40  class func <stripped> // method 
	0x6b1d0  class func <stripped> // method 
	0x6b340  class func <stripped> // method 
 }

 class WidgetKit.ContentSizeCategoryDecrementingFontDefinition : TightLeadingFontDefinition { }

 class WidgetKit.ContentSizeCategoryIncrementingFontDefinition : TightLeadingFontDefinition { }

 struct WidgetKit.ViewableTimelineEntry {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : U†
WARNING: couldn't find address 0x0 (0x0) in binary!
	let view : OÑ
	let relevance : TimelineEntryRelevance
 }

 enum WidgetKit.DataProtectionLevel {

	// Properties
	case classA  
	case classB  
	case classC  
	case classD  
 }

 class WidgetKit._AvocadoExtensionBaseContext : NSExtensionContext /System/Library/Frameworks/Foundation.framework/Foundation {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9d6c0001e4a8 (0x56c0001e4a8) in binary!
	0x9d68  @objc _AvocadoExtensionBaseContext.(null) <stripped>
WARNING: couldn't find address 0xa3840001e5c8 (0x3840001e5c8) in binary!
	0x8c50  @objc _AvocadoExtensionBaseContext.(null) <stripped>
WARNING: couldn't find address 0x7cec0001e450 (0x4ec0001e450) in binary!
	0x0  @objc _AvocadoExtensionBaseContext.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x74694b7465  @objc _AvocadoExtensionBaseContext.(null) <stripped>
WARNING: couldn't find address 0x433a5443454a4f52 (0x443454a4f52) in binary!
	0x2352e392e34  @objc _AvocadoExtensionBaseContext.(null) <stripped>

	// Swift methods
 }
