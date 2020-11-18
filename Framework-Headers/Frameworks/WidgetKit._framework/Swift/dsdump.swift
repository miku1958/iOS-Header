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
	var _os_unfair_lock_opaque : º
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : G«
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : G«
 }

 struct __C.audit_token_t {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var val : ù¹
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : G«
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : G«
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
	var $__lazy_storage_$_dateRange : Ýª // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var creationDate : åª // +0x3 (0x0)
	let protectionLevel : DataProtectionLevel // +0x30 (0x1)
	var viewableEntries : ViewableTimelineEntry // +0x0 (0x8)

	// Swift methods
	0x2ba0  class func WidgetViewCollection.__allocating_init(widget:environment:entries:reloadPolicy:) // init 
 }

 struct WidgetKit.WidgetEnvironment {

	// Properties
	var _storage : Storage // +0x0
 }

 class WidgetKit.Storage : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var tuples : CodingKeys

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9d740001eed0 (0x5740001eed0) in binary!
	0x9d68  @objc Storage.(null) <stripped>
WARNING: couldn't find address 0x9d640001f050 (0x5640001f050) in binary!
	0x8b14  @objc Storage.(null) <stripped>
WARNING: couldn't find address 0x7cc40001ee78 (0x4c40001ee78) in binary!
	0x18000000c  @objc Storage.(null) <stripped>
WARNING: couldn't find address 0x8ae80001ee58 (0x2e80001ee58) in binary!
	0xa8000000c  @objc Storage.(null) <stripped>
WARNING: couldn't find address 0x9d140001ef78 (0x5140001ef78) in binary!
	0x9d08  @objc Storage.(null) <stripped>

	// Swift methods
	0xf600  class func WidgetEnvironment.Storage.__allocating_init(from:) // init 
	0x103a0  class func WidgetEnvironment.Storage.__allocating_init(coder:) // init 
 }

 struct WidgetKit.EnvironmentValuesEnumerator {

	// Properties
	let environment : WidgetEnvironment
WARNING: couldn't find address 0x0 (0x0) in binary!
	let base : õ¯
 }

 struct WidgetKit.Iterator {

	// Properties
	var iterator : Iterator
WARNING: couldn't find address 0x0 (0x0) in binary!
	let base : õ¯
 }

 class WidgetKit.AnyKey : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let storage : StorageBase

	// Swift methods
	0x12840  class func <stripped> // init 
 }

 class WidgetKit.StorageBase : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x12da0  func <stripped> // getter 
	0x12df0  func <stripped> // getter 
	0x12e40  func <stripped> // getter 
	0x12e90  func <stripped> // getter 
	0x12ee0  func <stripped> // method 
	0x12f30  func <stripped> // method 
	0x12f80  func <stripped> // method 
 }

 class WidgetKit.Storage {
 class WidgetKit.AnyValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let storage : StorageBase

	// Swift methods
	0x135c0  class func <stripped> // init 
 }

 class WidgetKit.StorageBase : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x13c60  func <stripped> // getter 
	0x13cb0  func <stripped> // getter 
	0x13d00  func <stripped> // method 
	0x13d50  func <stripped> // method 
	0x13da0  func <stripped> // method 
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
	0x14400  func <stripped> // getter 
	0x14450  func <stripped> // getter 
	0x144a0  func <stripped> // getter 
	0x144f0  func <stripped> // getter 
	0x14540  func <stripped> // method 
	0x14590  func <stripped> // method 
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
	var iterator : %®
	var isEqualProvider : (_:_:)
 }

 struct WidgetKit.DedupedIterator {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var iterator : %®
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
	var platform : º // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sdk : º // +0x4
 }

 struct WidgetKit.BundleStub {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var url : ¥ž
	var identifier : String
	var version : String
 }

 struct WidgetKit.EntryMetadata {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : åª
	var relevance : TimelineEntryRelevance
 }

 struct WidgetKit._WidgetArchivableMetadata {

	// Properties
	var systemVersion : SystemVersion
WARNING: couldn't find address 0x0 (0x0) in binary!
	var creationDate : åª
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
	let date : åª
	let configuration : INIntent?
	var widgetHost : WidgetHost
 }

 struct WidgetKit.WidgetPreviewContext {

	// Properties
	let family : WidgetFamily
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : åª
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
	var date : ©
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
	0x32cb0  func <stripped> // method 
	0x337a0  func <stripped> // method 
	0x33fa0  func <stripped> // method 
	0x34b30  func <stripped> // method 
 }

 struct WidgetKit.UserInfoKey { }

 struct WidgetKit.Private_Timeouts { }

 struct WidgetKit.WidgetURLActionKey { }

 struct WidgetKit.WidgetIsSnapshottingKey { }

 struct WidgetKit.WidgetURLModifier {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _urlAction : mœ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : ¥ž
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
	var $__lazy_storage_$_dateRange : Ýª // +0x0 (0x0)
	var metadata : _WidgetArchivableMetadata // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var archivedStates : )Ÿ // +0x45545f5f (0x0)

	// Swift methods
	0x37d70  func <stripped> // getter 
	0x37df0  func <stripped> // getter 
	0x37e70  func <stripped> // getter 
	0x37f00  func <stripped> // getter 
	0x37fe0  func <stripped> // getter 
	0x380f0  func <stripped> // getter 
	0x38120  func <stripped> // setter 
	0x38150  func <stripped> // modifyCoroutine 
	0x38190  func <stripped> // getter 
	0x382a0  func <stripped> // getter 
	0x382d0  func <stripped> // setter 
	0x38300  func <stripped> // modifyCoroutine 
	0x38400  func <stripped> // getter 
	0x38960  func <stripped> // setter 
	0x38a10  func <stripped> // modifyCoroutine 
	0x38b40  func <stripped> // getter 
	0x38cd0  func <stripped> // method 
	0x39720  func <stripped> // method 
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
WARNING: couldn't find address 0x9d140001ef78 (0x5140001ef78) in binary!
	0x9d08  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x8a680001ef68 (0x2680001ef68) in binary!
	0x7d97  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x8a500001ee00 (0x2500001ee00) in binary!
	0x9ce0  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x8a900001ee08 (0x2900001ee08) in binary!
	0x9cc0  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x9cb40001ee10 (0x4b40001ee10) in binary!
	0x7c28  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffce9a8  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x764fffcee50  @objc WidgetPersonality.(null) <stripped>
	0x45c0001edb8  @objc WidgetPersonality.‰bH‰Jë3H‹E¸H‰L‰`L‰hE1öëH‹MÀL‹eÈL‹mÐH‹E¸L‹u¨H‰L‰`L‰hL‰ðHƒÄ8[A\A]A^A_]Ã„ <stripped>
WARNING: couldn't find address 0x1eeecfffd2fa0 (0x6ecfffd2fa0) in binary!
	0x2040001eed8  @objc WidgetPersonality.(null) <stripped>
WARNING: couldn't find address 0x1eec4fffd3048 (0x6c4fffd3048) in binary!
	0x28000000c  @objc WidgetPersonality.(null) <stripped>

	// Swift methods
	0x3a990  class func WidgetPersonality.__allocating_init(extensionBundleIdentifier:kind:) // init 
	0x3aa50  class func WidgetPersonality.__allocating_init<A>(_:) // init 
	0x3aac0  func <stripped> // method 
	0x3ae30  class func <stripped> // getter 
	0x3ae40  class func WidgetPersonality.__allocating_init(coder:) // init 
	0x3aff0  func <stripped> // method 
 }

 class WidgetKit.WidgetLocalizations : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let identifier : String
	let availableLocalizations : [String]
	let supportsMixedLocalizations : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8a400001edb8 (0x2400001edb8) in binary!
	0x9c78  @objc WidgetLocalizations.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x6ecfffd2fa0  @objc WidgetLocalizations.(null) <stripped>

	// Swift methods
	0x3bbb0  class func WidgetLocalizations.__allocating_init(identifier:availableLocalizations:supportsMixedLocalizations:) // init 
	0x3bfc0  func <stripped> // method 
	0x3c120  class func WidgetLocalizations.__allocating_init(coder:) // init 
	0x3c550  class func WidgetLocalizations.__allocating_init(from:) // init 
	0x3c7b0  func <stripped> // method 
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
	case bundleLookupFailed : ?§
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
WARNING: couldn't find address 0x9c5c0001edb8 (0x45c0001edb8) in binary!
	0x9c58  @objc WidgetHostContext.(null) <stripped>
WARNING: couldn't find address 0xa2040001eed8 (0x2040001eed8) in binary!
	0x8b10  @objc WidgetHostContext.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x6f4fffd6188  @objc WidgetHostContext.(null) <stripped>
	0x2040001ef98  @objc WidgetHostContext.H‰øH‹H‹VH‰WH‰Ãf.„ <stripped>
 }

 class WidgetKit.ResolvedWidgetHost {
 class WidgetKit.ResolvedWidgetBundleHost : WidgetHost {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let host : ¥š
	var widgetDescriptors : WidgetDescriptor

	// Swift methods
	0x41aa0  class func ResolvedWidgetBundleHost.__allocating_init<A>(_:) // init 
 }

 class WidgetKit.OptionalLocalizationsWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let value : WidgetLocalizations // +0x0

	// Swift methods
	0x42c40  func <stripped> // method 
 }

 class WidgetKit.CHSWidgetMetricsCodable : CHSWidgetMetrics /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices {
	// ObjC -> Swift bridged methods
	0x8c10  ___swift_memcpy16_8
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x784fffdf208  @objc CHSWidgetMetricsCodable.(null) <stripped>

	// Swift methods
	0x43860  func <stripped> // method 
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
	let rawValue : Å§ // +0x0
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
	case bundleStubNotSupported : ?§
WARNING: couldn't find address 0x0 (0x0) in binary!
	case systemVersionNotSupported : ?§
 }

 struct WidgetKit.ValidationOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var isSystemVersionSupported : o¤ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var isBundleSupported : W¤ // +0x10
 }

 enum WidgetKit.SimpleError {

	// Properties
	case message : String
 }

 struct WidgetKit._ClockHandRotationEffect {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _widgetIsSnapshotting : ”
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _controller : “”
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anchor : ™
	let period : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timeZone : ’
 }

 enum WidgetKit.Period {

	// Properties
	case custom : Double
	case hourHand  
	case minuteHand  
	case secondHand  
 }

 class WidgetKit.ClockHandController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var animationSeed : º // +0x10 (0x4)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : åª // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publisher : ý’ // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subject : 3“ // +0x0 (0x8)
	let clockSetNotification : DarwinNotification // +0x0 (0x4)
	let timezoneChangeNotification : DarwinNotification // +0x0 (0x4)
	var didResynchronize : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var resyncTimer : í’ // +0x0 (0x8)

	// Swift methods
 }

 struct WidgetKit.DarwinNotification {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let token : c  // +0x0
 }

 struct WidgetKit.AnimationID {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rawValue : º // +0x0
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
	let sessionUUID : © // +0x80000408 (0x0)
	let hostContext : WidgetHostContext // +0x6 (0x8)
	let loggingIdentifier : String // +0x74735f5f (0x10)
	let lock : UnfairLock // +0x65706c65 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscriptions :  empty-list  // +0x45545f5f (0x8)
	let watchdogTimeoutQueue : OS_dispatch_queue // +0x0 (0x8)
	let watchdogTimeoutProvider : WidgetExtensionSessionOperation // +0x6bd3c (0x10)
	let rbsInterface : RunningBoardInterface // +0x141a (0x28)
	let suspensionObserver : WidgetExtensionSessionSuspensionObserving // +0x6bd3c (0x28)
	var widgetExtensionAssertion : Swift.AnyObject? // +0x0 (0x8)
	var lock_invalidated : Bool // +0x0 (0x1)
	let connection : NSXPCConnection // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8a040001ef98 (0x2040001ef98) in binary!
	0x79a0  @objc _WidgetExtensionSession.(null) <stripped>
WARNING: couldn't find address 0x8a060001ef70 (0x2060001ef70) in binary!
	0x7988  @objc _WidgetExtensionSession.(null) <stripped>
WARNING: couldn't find address 0x7b3c0001ef48 (0x33c0001ef48) in binary!
	0x7b48  @objc _WidgetExtensionSession.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x70cffff0208  @objc _WidgetExtensionSession.(null) <stripped>
	0x714ffff02d0  @objc _WidgetExtensionSession.L‰ïè„@ <stripped>
	0x6ecffff1df8  @objc _WidgetExtensionSession. <stripped>

	// Swift methods
	0x4cfc0  func <stripped> // method 
	0x4d670  func <stripped> // method 
	0x4da80  func <stripped> // method 
	0x4f310  func <stripped> // method 
	0x4f7a0  func <stripped> // method 
 }

 class WidgetKit.WidgetPreviewAgent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class WidgetKit.Cartesian2ProductCollection {
 class WidgetKit.BaseEntryProviderBox : _SwiftObject /usr/lib/swift/libswiftCore.dylib, EntryProviding {
	// Swift methods
	0x564c0  func <stripped> // getter 
	0x56650  class func BaseEntryProviderBox.__allocating_init() // init 
	0x56670  func <stripped> // method 
	0x56680  func <stripped> // method 
	0x59ca0  func <stripped> // method 
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
 }

 struct WidgetKit.WidgetDescriptorKey { }

 class WidgetKit.WidgetHost : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x59e30  func <stripped> // getter 
	0x59e70  func <stripped> // getter 
	0x59eb0  func <stripped> // method 
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
	0x5cbe0  func <stripped> // method 
 }

 class WidgetKit.WidgetExtensionContext : _AvocadoExtensionBaseContext {

	// Properties
	var previewAgent : WidgetPreviewAgent
	var urlHandlers : WidgetURLHandler

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7b340001ecc8 (0x3340001ecc8) in binary!
	0x7b28  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x899c0001ef30 (0x19c0001ef30) in binary!
	0x89aa  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x792c0001ef10 (0x12c0001ef10) in binary!
	0x7ae0  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x79140001eee8 (0x1140001eee8) in binary!
	0x9b60  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x9b5c0001edf0 (0x35c0001edf0) in binary!
	0xa108  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x8a140001edc8 (0x2140001edc8) in binary!
	0x7ab0  @objc WidgetExtensionContext.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x414ffffd830  @objc WidgetExtensionContext.(null) <stripped>
	0xffffd888  @objc WidgetExtensionContext.L <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x57cffffd880  @objc WidgetExtensionContext.(null) <stripped>
	0x554ffffd928  @objc WidgetExtensionContext.H‰óH‰}¸H‰MÀH‰Ïÿ\— <stripped>
	0xffffdb00  @objc WidgetExtensionContext.[Ãf.„ <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x1573a4d4152  @objc WidgetExtensionContext.(null) <stripped>

	// Swift methods
	0x5d6b0  func <stripped> // method 
 }

 class WidgetKit.TightLeadingFontDefinition : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x61240  class func <stripped> // method 
	0x616d0  class func <stripped> // method 
	0x61840  class func <stripped> // method 
 }

 class WidgetKit.ContentSizeCategoryDecrementingFontDefinition : TightLeadingFontDefinition { }

 class WidgetKit.ContentSizeCategoryIncrementingFontDefinition : TightLeadingFontDefinition { }

 struct WidgetKit.ViewableTimelineEntry {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : åª
WARNING: couldn't find address 0x0 (0x0) in binary!
	let view : å
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
WARNING: couldn't find address 0x9aec0001ec48 (0x2ec0001ec48) in binary!
	0x9ae8  @objc _AvocadoExtensionBaseContext.(null) <stripped>
WARNING: couldn't find address 0xa0940001ed68 (0x940001ed68) in binary!
	0x89a0  @objc _AvocadoExtensionBaseContext.(null) <stripped>
WARNING: couldn't find address 0x7a3c0001ebf0 (0x23c0001ebf0) in binary!
	0x0  @objc _AvocadoExtensionBaseContext.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x74694b7465  @objc _AvocadoExtensionBaseContext.(null) <stripped>
WARNING: couldn't find address 0x433a5443454a4f52 (0x443454a4f52) in binary!
	0xa312e382e  @objc _AvocadoExtensionBaseContext.(null) <stripped>

	// Swift methods
 }
