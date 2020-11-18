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
	var _os_unfair_lock_opaque : ´
 }

 enum __C.CHSWidgetVisibility { }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ßú
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ßú
 }

 struct __C.audit_token_t {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var val : ˚™
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : ßú
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ßú
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
	var $__lazy_storage_$_dateRange : =ú // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var creationDate : Eú // +0x3 (0x0)
	let protectionLevel : DataProtectionLevel // +0x31 (0x1)
	var viewableEntries : ViewableTimelineEntry // +0x0 (0x8)

	// Swift methods
	0x30d0  class func WidgetViewCollection.__allocating_init(widget:environment:entries:reloadPolicy:) // init 
 }

 struct WidgetKit.WidgetEnvironment {

	// Properties
	var _storage : Storage // +0x0
 }

 class WidgetKit.Storage : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var tuples : CodingKeys

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9e140001d0d0 (0x6140001d0d0) in binary!
	0x9e08  @objc Storage.(null) <stripped>
WARNING: couldn't find address 0x9e040001d250 (0x6040001d250) in binary!
	0x8c34  @objc Storage.(null) <stripped>
WARNING: couldn't find address 0x909c0001d078 (0x9c0001d078) in binary!
	0x18000000c  @objc Storage.(null) <stripped>
WARNING: couldn't find address 0x8c080001d058 (0x4080001d058) in binary!
	0xa8000000c  @objc Storage.(null) <stripped>
WARNING: couldn't find address 0x9db40001d178 (0x5b40001d178) in binary!
	0x9da8  @objc Storage.(null) <stripped>

	// Swift methods
	0xfc10  class func WidgetEnvironment.Storage.__allocating_init(from:) // init 
	0x109b0  class func WidgetEnvironment.Storage.__allocating_init(coder:) // init 
 }

 struct WidgetKit.EnvironmentValuesEnumerator {

	// Properties
	let environment : WidgetEnvironment
WARNING: couldn't find address 0x0 (0x0) in binary!
	let base : M°
 }

 struct WidgetKit.Iterator {

	// Properties
	var iterator : Iterator
WARNING: couldn't find address 0x0 (0x0) in binary!
	let base : M°
 }

 class WidgetKit.AnyKey : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let storage : StorageBase

	// Swift methods
	0x12e50  class func <stripped> // init 
 }

 class WidgetKit.StorageBase : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x133b0  func <stripped> // getter 
	0x13400  func <stripped> // getter 
	0x13450  func <stripped> // getter 
	0x134a0  func <stripped> // getter 
	0x134f0  func <stripped> // method 
	0x13540  func <stripped> // method 
	0x13590  func <stripped> // method 
 }

 class WidgetKit.Storage {
 class WidgetKit.AnyValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let storage : StorageBase

	// Swift methods
	0x13bd0  class func <stripped> // init 
 }

 class WidgetKit.StorageBase : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x14270  func <stripped> // getter 
	0x142c0  func <stripped> // getter 
	0x14310  func <stripped> // method 
	0x14360  func <stripped> // method 
	0x143b0  func <stripped> // method 
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
	0x14a10  func <stripped> // getter 
	0x14a60  func <stripped> // getter 
	0x14ab0  func <stripped> // getter 
	0x14b00  func <stripped> // getter 
	0x14b50  func <stripped> // method 
	0x14ba0  func <stripped> // method 
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
	var iterator : /ü
	var isEqualProvider : (_:_:)
 }

 struct WidgetKit.DedupedIterator {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var iterator : /ü
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
	var platform : ´ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sdk : ´ // +0x4
 }

 struct WidgetKit.BundleStub {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var url : ˇè
	var identifier : String
	var version : String
 }

 struct WidgetKit.EntryMetadata {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : Eú
	var relevance : TimelineEntryRelevance
 }

 struct WidgetKit._WidgetArchivableMetadata {

	// Properties
	var systemVersion : SystemVersion
WARNING: couldn't find address 0x0 (0x0) in binary!
	var creationDate : Eú
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
	let date : Eú
	let configuration : INIntent?
	var widgetHost : WidgetHost
 }

 struct WidgetKit.WidgetPreviewContext {

	// Properties
	let family : WidgetFamily
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : Eú
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
	var date : ]ö
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
	0x33440  func <stripped> // method 
	0x33f30  func <stripped> // method 
	0x34730  func <stripped> // method 
	0x352c0  func <stripped> // method 
 }

 struct WidgetKit.UserInfoKey { }

 struct WidgetKit.Private_Timeouts { }

 struct WidgetKit.WidgetURLActionKey { }

 struct WidgetKit.WidgetIsSnapshottingKey { }

 struct WidgetKit.WidgetURLModifier {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _urlAction : Øç
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ˇè
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
	var $__lazy_storage_$_dateRange : =ú // +0x0 (0x0)
	var metadata : _WidgetArchivableMetadata // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var archivedStates : kê // +0x45545f5f (0x0)

	// Swift methods
	0x38540  func <stripped> // getter 
	0x385c0  func <stripped> // getter 
	0x38640  func <stripped> // getter 
	0x386d0  func <stripped> // getter 
	0x387b0  func <stripped> // getter 
	0x388c0  func <stripped> // getter 
	0x388f0  func <stripped> // setter 
	0x38920  func <stripped> // modifyCoroutine 
	0x38960  func <stripped> // getter 
	0x38a70  func <stripped> // getter 
	0x38aa0  func <stripped> // setter 
	0x38ad0  func <stripped> // modifyCoroutine 
	0x38bd0  func <stripped> // getter 
	0x39130  func <stripped> // setter 
	0x391e0  func <stripped> // modifyCoroutine 
	0x39310  func <stripped> // getter 
	0x394a0  func <stripped> // method 
	0x39ef0  func <stripped> // method 
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
WARNING: couldn't find address 0x9db40001d178 (0x5b40001d178) in binary!
	0x9da8  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x8b880001d168 (0x3880001d168) in binary!
	0x7eb7  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x8b700001d000 (0x3700001d000) in binary!
	0x9d80  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x8bb00001d008 (0x3b00001d008) in binary!
	0x9d60  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x9d540001d010 (0x5540001d010) in binary!
	0x9000  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffce398  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x164fffce840  @objc WidgetPersonality.(null) <stripped>
	0x4fc0001cfb8  @objc WidgetPersonality.HâM–uæ <stripped>
WARNING: couldn't find address 0x1d0ecfffd29b0 (0xecfffd29b0) in binary!
	0x2a40001d0d8  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x1d0c4fffd2a58 (0xc4fffd2a58) in binary!
	0x28000000c  @objc WidgetPersonality.(null) <stripped>

	// Swift methods
	0x3b180  class func WidgetPersonality.__allocating_init(extensionBundleIdentifier:kind:) // init 
	0x3b240  class func WidgetPersonality.__allocating_init<A>(_:) // init 
	0x3b2b0  func <stripped> // method 
	0x3b620  class func <stripped> // getter 
	0x3b630  class func WidgetPersonality.__allocating_init(coder:) // init 
	0x3b7e0  func <stripped> // method 
 }

 class WidgetKit.WidgetLocalizations : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identifier : String
	let availableLocalizations : [String]
	let supportsMixedLocalizations : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8b600001cfb8 (0x3600001cfb8) in binary!
	0x9d18  @objc WidgetLocalizations.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0xecfffd29b0  @objc WidgetLocalizations.(null) <stripped>

	// Swift methods
	0x3c3a0  class func WidgetLocalizations.__allocating_init(identifier:availableLocalizations:supportsMixedLocalizations:) // init 
	0x3c7b0  func <stripped> // method 
	0x3c910  class func WidgetLocalizations.__allocating_init(coder:) // init 
	0x3cd40  class func WidgetLocalizations.__allocating_init(from:) // init 
	0x3cfa0  func <stripped> // method 
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
	case bundleLookupFailed : Iò
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
WARNING: couldn't find address 0x9cfc0001cfb8 (0x4fc0001cfb8) in binary!
	0x9cf8  @objc WidgetHostContext.(null) <stripped>
WARNING: couldn't find address 0xa2a40001d0d8 (0x2a40001d0d8) in binary!
	0x8c30  @objc WidgetHostContext.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0xf4fffd5c18  @objc WidgetHostContext.(null) <stripped>
	0x75c0001d100  @objc WidgetHostContext.ˇLØHãu»LˆLâÍHãM–Ë≠< <stripped>
 }

 class WidgetKit.ResolvedWidgetHost {
 class WidgetKit.ResolvedWidgetBundleHost : WidgetHost {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let host : ˜ã
	var widgetDescriptors : WidgetDescriptor

	// Swift methods
	0x42320  class func ResolvedWidgetBundleHost.__allocating_init<A>(_:) // init 
 }

 class WidgetKit.OptionalLocalizationsWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let value : WidgetLocalizations // +0x0

	// Swift methods
	0x434d0  func <stripped> // method 
 }

 class WidgetKit.CHSWidgetMetricsCodable : CHSWidgetMetrics /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9ccc0001d118 (0x4cc0001d118) in binary!
	0x8d30  @objc CHSWidgetMetricsCodable.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffdacf8  @objc CHSWidgetMetricsCodable.(null) <stripped>

	// Swift methods
	0x440f0  func <stripped> // method 
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
	let rawValue : ô // +0x0
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
	case bundleStubNotSupported : Iò
WARNING: couldn't find address 0x0 (0x0) in binary!
	case systemVersionNotSupported : Iò
 }

 struct WidgetKit.ValidationOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var isSystemVersionSupported : qï // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var isBundleSupported : Yï // +0x10
 }

 enum WidgetKit.SimpleError {

	// Properties
	case message : String
 }

 class WidgetKit.DisplayLink : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : Eú
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : ØÖ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subject : ÂÖ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8f5c0001d100 (0x75c0001d100) in binary!
	0x68000000c  @objc DisplayLink.(null) <stripped>

	// Swift methods
 }

 class WidgetKit.MobileDisplayLink : DisplayLink {

	// Properties
	var link : CADisplayLink? // +0x0 (0x8)

	// Swift methods
 }

 struct WidgetKit._ClockHandRotationEffect {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _displayLink : —Ü
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _widgetIsSnapshotting : +Ü
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anchor : !ã
	let period : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timeZone : kÑ
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
	let sessionUUID : ”Ç // +0x80000408 (0x0)
	let hostContext : WidgetHostContext // +0x6 (0x8)
	let loggingIdentifier : String // +0x74735f5f (0x10)
	let lock : UnfairLock // +0x65706c65 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list  // +0x45545f5f (0x8)
	let watchdogTimeoutQueue : OS_dispatch_queue // +0x0 (0x8)
	let watchdogTimeoutProvider : WidgetExtensionSessionOperation // +0x6cb94 (0x10)
	let rbsInterface : RunningBoardInterface // +0x13c0 (0x28)
	let suspensionObserver : WidgetExtensionSessionSuspensionObserving // +0x6cb94 (0x28)
	var widgetExtensionAssertion : Swift.AnyObject? // +0x0 (0x8)
	var lock_invalidated : Bool // +0x0 (0x1)
	let connection : NSXPCConnection // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8b0c0001d1a8 (0x30c0001d1a8) in binary!
	0x7aa8  @objc _WidgetExtensionSession.(null) <stripped>
WARNING: couldn't find address 0x8b0e0001d180 (0x30e0001d180) in binary!
	0x7a90  @objc _WidgetExtensionSession.(null) <stripped>
WARNING: couldn't find address 0x7c440001d158 (0x4440001d158) in binary!
	0x8f08  @objc _WidgetExtensionSession.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x11cffff0200  @objc _WidgetExtensionSession.(null) <stripped>
	0x124ffff02c8  @objc _WidgetExtensionSession.HcH˛øˇ <stripped>
	0xfcffff1df0  @objc _WidgetExtensionSession.HâﬂLâÊHãU¿HãE»ˇP Hã}–Hâ}êËJ? <stripped>

	// Swift methods
	0x4ccc0  func <stripped> // method 
	0x4d370  func <stripped> // method 
	0x4d780  func <stripped> // method 
	0x4f010  func <stripped> // method 
	0x4f4a0  func <stripped> // method 
 }

 class WidgetKit.WidgetPreviewAgent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class WidgetKit.Cartesian2ProductCollection {
 class WidgetKit.BaseEntryProviderBox : _SwiftObject /usr/lib/swift/libswiftCore.dylib, EntryProviding {
	// Swift methods
	0x56c40  func <stripped> // getter 
	0x56dd0  class func BaseEntryProviderBox.__allocating_init() // init 
	0x56df0  func <stripped> // method 
	0x56e00  func <stripped> // method 
	0x5aaa0  func <stripped> // method 
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
	var displayName : CHSLocalizableString? // +0x0
	var kind : String? // +0x8
	var widgetDescription : CHSLocalizableString? // +0x18
	var supportedFamilies : InternalWidgetFamily // +0x20
	var intentType : String? // +0x28
	var onURLSessionEventsConfigurations : WidgetURLSessionEventConfiguration // +0x38
	var entryDescriptor : EntryDescriptor // +0x40
	var widgetVisibility : CHSWidgetVisibility // +0x50
 }

 struct WidgetKit.WidgetDescriptorKey { }

 class WidgetKit.WidgetHost : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x5ac30  func <stripped> // getter 
	0x5ac70  func <stripped> // getter 
	0x5acb0  func <stripped> // method 
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
	0x5d9f0  func <stripped> // method 
 }

 class WidgetKit.WidgetExtensionContext : _AvocadoExtensionBaseContext {

	// Properties
	var previewAgent : WidgetPreviewAgent
	var urlHandlers : WidgetURLHandler

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8ef40001ceb0 (0x6f40001ceb0) in binary!
	0x8ee8  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x8aa40001d140 (0x2a40001d140) in binary!
	0x8ab2  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x7a340001d120 (0x2340001d120) in binary!
	0x7be8  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x7a1c0001d0f8 (0x21c0001d0f8) in binary!
	0x9be8  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x9be40001cfd8 (0x3e40001cfd8) in binary!
	0xa190  @objc WidgetExtensionContext.(null) <stripped>
	0x8e70  ___swift_project_boxed_opaque_existential_1
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x5fcffffd8a8  @objc WidgetExtensionContext.(null) <stripped>
	0xffffd900  @objc WidgetExtensionContext.ˇˇHãM∏LãU®LãM†LãE»LãmÿÈ”˛ˇˇf.Ñ <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x764ffffd8f8  @objc WidgetExtensionContext.(null) <stripped>
	0x73cffffd9a0  @objc WidgetExtensionContext.ÿË∏ˇˇLãmÿÈ„˛ˇˇø <stripped>
	0xffffdb78  @objc WidgetExtensionContext.Hâﬂ1…ËV? <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x74694b7465  @objc WidgetExtensionContext.(null) <stripped>

	// Swift methods
	0x5e4c0  func <stripped> // method 
 }

 class WidgetKit.TightLeadingFontDefinition : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x62040  class func <stripped> // method 
	0x624d0  class func <stripped> // method 
	0x62640  class func <stripped> // method 
 }

 class WidgetKit.ContentSizeCategoryDecrementingFontDefinition : TightLeadingFontDefinition { }

 class WidgetKit.ContentSizeCategoryIncrementingFontDefinition : TightLeadingFontDefinition { }

 struct WidgetKit.ViewableTimelineEntry {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : Eú
WARNING: couldn't find address 0x0 (0x0) in binary!
	let view : ìÄ
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
WARNING: couldn't find address 0x9b740001ce30 (0x3740001ce30) in binary!
	0x9b70  @objc _AvocadoExtensionBaseContext.(null) <stripped>
WARNING: couldn't find address 0xa11c0001cf50 (0x11c0001cf50) in binary!
	0x8aa8  @objc _AvocadoExtensionBaseContext.(null) <stripped>
WARNING: couldn't find address 0x8dfc0001cdd8 (0x5fc0001cdd8) in binary!
	0x25029232840  @objc _AvocadoExtensionBaseContext.(null) <stripped>
WARNING: couldn't find address 0x676469573a4d4152 (0x1573a4d4152) in binary!
	0x443454a4f52  @objc _AvocadoExtensionBaseContext.(null) <stripped>
WARNING: couldn't find address 0x30312d6f6e6f7268 (0x56f6e6f7268) in binary!
	0x1999999999a  @objc _AvocadoExtensionBaseContext.(null) <stripped>

	// Swift methods
 }
