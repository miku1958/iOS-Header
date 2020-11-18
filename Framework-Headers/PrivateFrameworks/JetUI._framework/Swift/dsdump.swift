 protocol JetUI.EstimatedMeasurable // 2 requirements
 {
	// class base protocol
	// class method
 }
 protocol JetUI._AnyCollectionContentReloadTriggerPublisher // 1 requirements
 {
	// method
 }
 protocol JetUI.CollectionContentReloadTriggerPublisher // 6 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// getter
 }
 protocol JetUI.LayoutView // 9 requirements
 {
	// class base protocol
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
 }
 protocol JetUI.Recycler // 4 requirements
 {
	// class associated type access function
	// method
	// method
	// method
 }
 protocol JetUI.ApplicationStatePresenterDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol JetUI.FlowActionFactory // 4 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// method
 }
 protocol JetUI.Layout // 1 requirements
 {
	// method
 }
 protocol JetUI.MetricsConfigurable // 2 requirements
 {
	// class associated type access function
	// getter
 }
 protocol JetUI.AnyDimension // 2 requirements
 {
	// method
	// method
 }
 protocol JetUI.ExistentialOptimized // 0 requirements
 {
 }
 protocol JetUI.LayoutTextView // 13 requirements
 {
	// class base protocol
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
	// getter
 }
 protocol JetUI.Measurable // 1 requirements
 {
	// method
 }
 protocol JetUI.CollectionContentReloadableCell // 1 requirements
 {
	// getter
 }
 protocol JetUI.DiffableDataPresenter // 5 requirements
 {
	// class base protocol
	// class associated type access function
	// class associated type access function
	// getter
	// method
 }

 struct __C.Weight {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : yw
 }

 struct __C.SymbolicTraits {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : }
 }

 struct __C.TextStyle {

	// Properties
	var _rawValue : NSString
 }

 enum __C.NSLineBreakMode { }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 enum __C.NSTextAlignment { }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : yw
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : yw
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : yw
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : yw
 }

 struct __C.UIContentSizeCategory {

	// Properties
	var _rawValue : NSString
 }

 struct __C.Measurements {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : yw
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : yw
WARNING: couldn't find address 0x0 (0x0) in binary!
	var firstBaseline : yw
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastBaseline : yw
 }

 struct __C.UIEdgeInsets {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var top : yw
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : yw
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : yw
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : yw
 }

 struct __C._NSRange {

	// Properties
	var location : Int
	var length : Int
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.AttributeName {

	// Properties
	var _rawValue : NSString
 }

 struct __C.TraitKey {

	// Properties
	var _rawValue : NSString
 }

 class JetUI.CacheKey : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let useCase : FontUseCase
	let traitCollection : UITraitCollection

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3f7400012268 (0x77400012268) in binary!
	0x3f70  @objc CacheKey.(null) <stripped>
WARNING: couldn't find address 0x44cc00012270 (0x4cc00012270) in binary!
	0x436e  @objc CacheKey.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x30cfffced50  @objc CacheKey.(null) <stripped>
	0xfffb6d28  @objc CacheKey.Hã}®Ë"ù <stripped>

	// Swift methods
 }

 struct JetUI.TextMeasurable {

	// Properties
	let attributedText : NSAttributedString // +0x0
	let numberOfLines : Int // +0x8
	let isLanguageAware : Bool // +0x10
 }

 struct JetUI.VerticalSpaceMeasurable {

	// Properties
	let verticalSpaceStorage : Indirect // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let multiplier : yw // +0x8
 }

 struct JetUI.AspectRatio {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var horizontal : yw // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var vertical : yw // +0x8
 }

 struct JetUI.Baselines {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var first : yw // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var last : yw // +0x8
 }

 struct JetUI.LayoutRect {

	// Properties
	var origin : CGPoint // +0x0
	var size : CGSize // +0x10
	var baselines : Baselines // +0x20
 }

 struct JetUI.HorizontalPairLayout {

	// Properties
	var storage : Indirect // +0x0
 }

 enum JetUI.Edge {

	// Properties
	case leading  
	case trailing  
 }

 struct JetUI.Storage {

	// Properties
	var leadingView : LayoutView // +0x0
	var trailingView : LayoutView // +0x28
	var priorityView : Edge // +0x50
	var alignmentSpace : AnyDimension // +0x58
	var interViewSpacing : AnyDimension // +0x80
 }

 struct JetUI.ReusePool {

	// Properties
	var recycledElements : Recycler
	let recycler : A
	var limit : Int
 }

 class JetUI.ImmutableBox {
 class JetUI.MutableBox {
 class JetUI.ApplicationStatePresenter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var isEnabled : Bool
	var delegate : ApplicationStatePresenterDelegate
WARNING: couldn't find address 0x0 (0x0) in binary!
	let onActiveDidChange : Õu

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x42fa00012300 (0x2fa00012300) in binary!
	0x42ee  @objc ApplicationStatePresenter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x18cfffc4f60  @objc ApplicationStatePresenter.(null) <stripped>

	// Swift methods
	0xb820  class func ApplicationStatePresenter.__allocating_init(isEnabled:) // init 
 }

 class JetUI.LayoutAttributedTextViewPlaceholder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var attributedText : NSAttributedString
	var textAlignment : NSTextAlignment
	var lineSpacing : Int
	var frame : CGRect
	var isHidden : Bool
	var numberOfLines : Int
	var lineBreakMode : NSLineBreakMode
	var font : UIFont?

	// Swift methods
	0xbf60  class func LayoutAttributedTextViewPlaceholder.__allocating_init(attributedText:font:textAlignment:lineBreakMode:lineSpacing:numberOfLines:) // init 
 }

 struct JetUI.VerticalStackLayout {

	// Properties
	var alignment : Alignment // +0x0
	var spacingStorage : Indirect // +0x8
	var children : Child // +0x10
 }

 enum JetUI.Alignment {

	// Properties
	case top  
	case center  
	case bottom  
	case fitted  
	case firstBaseline  
	case lastBaseline  
 }

 struct JetUI.ExclusionCondition {

	// Properties
	let rawValue : UInt // +0x0
 }

 struct JetUI.Child {

	// Properties
	let view : LayoutView // +0x0
	let space : AnyDimension // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spaceMultiplier : yw // +0x50
	let excludeWhen : ExclusionCondition // +0x58
	let alignment : Alignment // +0x60
 }

 enum JetUI.Alignment {

	// Properties
	case left  
	case center  
	case right  
 }

 struct JetUI.StackMeasurable {

	// Properties
	var axis : Axis // +0x0
	var children : Measurable // +0x8
	var skipEmptyChildren : Bool // +0x10
 }

 enum JetUI.Axis {

	// Properties
	case horizontal  
	case vertical  
 }

 struct JetUI.ViewRecycler { }

 class JetUI.TraitEnvironmentPlaceholder : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let traitCollection : UITraitCollection

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x442c00012260 (0x42c00012260) in binary!
	0x4428  @objc TraitEnvironmentPlaceholder.(null) <stripped>
WARNING: couldn't find address 0x4414000121b8 (0x414000121b8) in binary!
	0x42b6  @objc TraitEnvironmentPlaceholder.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffcee78  @objc TraitEnvironmentPlaceholder.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x3bcffff6220  @objc TraitEnvironmentPlaceholder.(null) <stripped>

	// Swift methods
	0x13c80  class func TraitEnvironmentPlaceholder.__allocating_init(traitCollection:) // init 
 }

 struct JetUI.VerticalMarginsMeasurable {

	// Properties
	let storage : Indirect // +0x0
 }

 struct JetUI.Storage {

	// Properties
	let child : Measurable // +0x0
	let topMargin : AnyDimension // +0x28
	let bottomMargin : AnyDimension // +0x50
	let skipIfEmpty : Bool // +0x78
	let shouldMeasureToBaseline : Bool // +0x79
 }

 enum JetUI.FontSource {

	// Properties
	case textStyle : TextStyle
	case useCase : FontUseCase
 }

 class JetUI.CollectionContent {
 enum JetUI.SupplementaryViewProvider {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case section : UICollectionReusableView
	case generic : CollectionContent
 }

 struct JetUI.ZeroDimension { }

 class JetUI.LayoutViewPlaceholder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let measureLogic : Measurements
	var hasContent : Bool
	var frame : CGRect
	var isHidden : Bool

	// Swift methods
	0x17d20  class func LayoutViewPlaceholder.__allocating_init(measureWith:) // init 
	0x17e60  class func LayoutViewPlaceholder.__allocating_init(measurements:) // init 
	0x18100  class func LayoutViewPlaceholder.__allocating_init(representing:) // init 
 }

 enum JetUI.AppStore { }

 struct JetUI.CenteredThreeLineTextLayout {

	// Properties
	var storage : Indirect // +0x0
 }

 struct JetUI.Storage {

	// Properties
	var primaryText : LayoutTextView // +0x0
	var secondaryText : LayoutTextView // +0x28
	var secondarySpace : AnyDimension // +0x50
	var numberOfLines : Int // +0x78
 }

 struct JetUI.FlankedVerticalLayout {

	// Properties
	let topViewAlignment : Alignment // +0x0
	let bottomViewAlignment : Alignment // +0x1
	var sublayout : Layout // +0x8
	var topView : LayoutView // +0x30
	var topMargin : AnyDimension // +0x58
	var bottomView : LayoutView // +0x80
	var bottomMargin : AnyDimension // +0xa8
 }

 enum JetUI.Alignment {

	// Properties
	case left  
	case center  
	case right  
 }

 struct JetUI.VerticalSplitLayout {

	// Properties
	var prioritySublayout : Layout // +0x0
	var otherSublayout : Layout // +0x30
	var priorityPosition : Position // +0x60
	var spacing : AnyDimension // +0x68
	var useLastBaseline : Bool // +0x90
 }

 enum JetUI.Position {

	// Properties
	case top  
	case bottom  
 }

 enum JetUI.DiffableData { }

 struct JetUI.StaticMeasurable {

	// Properties
	let measurementsStorage : Indirect // +0x0
 }

 class JetUI.DiffableDataStatePresenter {
 struct JetUI.Dimensions { }

 class JetUI.InsetLayoutView : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let internalLayoutView : LayoutView
	let insets : UIEdgeInsets

	// Swift methods
 }

 struct JetUI.HorizontalSpaceMeasurable {

	// Properties
	let horizontalSpaceStorage : Indirect // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let multiplier : yw // +0x8
 }

 struct JetUI.Indirect {

	// Properties
	var interior : MutableBox
 }

 struct JetUI.TallLocaleMeasurable {

	// Properties
	let dimensionStorage : Indirect // +0x0
 }

 struct JetUI.AspectFitMeasurable {

	// Properties
	var aspectRatio : AspectRatio // +0x0
 }

 enum JetUI.PlatformUI { }

 struct JetUI.LineHeightDimension {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let multiplier : yw // +0x0
	let sourceStorage : Indirect // +0x8
 }

 class JetUI.ShelvesPresenter {
 enum JetUI.InsertionPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case before : ID
WARNING: couldn't find address 0x0 (0x0) in binary!
	case after : ID
	case start  
	case end  
 }

 enum JetUI.ReplaceSolution {

	// Properties
	case insert : InsertionPoint
	case discard  
 }

 enum JetUI.MergeProblem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case missingShelf : ID
WARNING: couldn't find address 0x0 (0x0) in binary!
	case mergeFailure : óp
 }

 enum JetUI.MergeSolution {

	// Properties
	case insert : InsertionPoint
	case rollbackAndAbort  
	case discard  
 }

 struct JetUI.FourLineTextLayout {

	// Properties
	var storage : Indirect // +0x0
 }

 struct JetUI.Storage {

	// Properties
	var primaryText : LayoutTextView // +0x0
	var middleStationaryText : LayoutTextView // +0x28
	var secondaryText : LayoutTextView // +0x50
	var primaryFirstLineSpace : AnyDimension // +0x78
	var primarySecondLineSpace : AnyDimension // +0xa0
	var middleStationaryLineSpace : AnyDimension // +0xc8
	var secondaryFirstLineSpace : AnyDimension // +0xf0
	var secondarySecondLineSpace : AnyDimension // +0x118
	var numberOfLines : Int // +0x140
 }

 struct JetUI.ThreeLineTextLayout {

	// Properties
	var storage : Indirect // +0x0
 }

 struct JetUI.Storage {

	// Properties
	var primaryText : LayoutTextView // +0x0
	var secondaryText : LayoutTextView // +0x28
	var primaryRegularSpace : AnyDimension // +0x50
	var primaryCompressedSpace : AnyDimension // +0x78
	var secondarySpace : AnyDimension // +0xa0
	var numberOfLines : Int // +0xc8
 }

 class JetUI.PartialLayoutView : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let measurable : Measurable
	let layoutView : LayoutView

	// Swift methods
 }

 struct JetUI.PartialMeasurableLayout {

	// Properties
	var storage : Indirect // +0x0
 }

 struct JetUI.Storage {

	// Properties
	let measurable : Measurable // +0x0
	let layout : Layout // +0x28
 }

 struct JetUI.PresenterMultiplexer {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var presenters :  empty-list  // +0x0
 }

 struct JetUI.FrameLayout {

	// Properties
	var storage : Indirect // +0x0
 }

 struct JetUI.Storage {

	// Properties
	var view : LayoutView // +0x0
	var skipLayoutMeasurements : Bool // +0x28
	var layoutMargins : UIEdgeInsets // +0x30
 }

 struct JetUI.UIViewAffineTransformAdapter {

	// Properties
	let adaptedView : UIView // +0x0
 }

 struct JetUI.AspectFitLayout {

	// Properties
	var storage : Indirect // +0x0
 }

 struct JetUI.Storage {

	// Properties
	var view : LayoutView // +0x0
	var explicitAspectRatio : AspectRatio // +0x28
	var anchorPoint : CGPoint // +0x40
 }

 struct JetUI.FlankedHorizontalLayout {

	// Properties
	var sublayout : Layout // +0x0
	var leadingView : LayoutView // +0x28
	var leadingMargin : AnyDimension // +0x50
	var leadingAlignment : ViewAlignment // +0x78
	var trailingView : LayoutView // +0x80
	var trailingMargin : AnyDimension // +0xa8
	var trailingAlignment : ViewAlignment // +0xd0
 }

 enum JetUI.ViewAlignment {

	// Properties
	case top  
	case center  
	case bottom  
	case fit  
 }

 struct JetUI.UIViewCoordinateSpaceAdapter {

	// Properties
	let adaptedView : UIView // +0x0
	let adaptedSuperview : UIView // +0x8
	let coordinateSpace : UICoordinateSpace // +0x10
 }

 struct JetUI.Separator {

	// Properties
	var position : Position // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var leadingInset : yw // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var trailingInset : yw // +0x10
	var verticalOutset : AnyDimension // +0x18
 }

 enum JetUI.Position {

	// Properties
	case top  
	case bottom  
 }

 struct JetUI.LanguageAwareLayoutTextView {

	// Properties
	let targetStorage : Indirect // +0x0
 }

 struct JetUI.VerticalFlowLayout {

	// Properties
	var expandChildrenToFit : Bool // +0x0
	var children : Child // +0x8
 }

 enum JetUI.VerticalPlacement {

	// Properties
	case top  
	case firstBaseline  
 }

 enum JetUI.HorizontalPlacement {

	// Properties
	case leading  
	case center  
	case trailing  
 }

 struct JetUI.ExclusionCondition {

	// Properties
	let rawValue : UInt // +0x0
 }

 struct JetUI.Child {

	// Properties
	let view : LayoutView // +0x0
	let topSpace : AnyDimension // +0x28
	let bottomSpace : AnyDimension // +0x50
	let verticalPlacement : VerticalPlacement // +0x78
	let horizontalPlacement : HorizontalPlacement // +0x79
	let excludeWhen : ExclusionCondition // +0x80
 }

 class JetUI.LayoutTextViewPlaceholder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var text : String
	var textAlignment : NSTextAlignment
	var lineSpacing : Int
	var frame : CGRect
	var isHidden : Bool
	var numberOfLines : Int
	var lineBreakMode : NSLineBreakMode
	var font : UIFont?

	// Swift methods
	0x48140  class func LayoutTextViewPlaceholder.__allocating_init(text:font:textAlignment:lineBreakMode:lineSpacing:numberOfLines:) // init 
 }

 enum JetUI.FontUseCase {

	// Properties
	case preferredFont : TextStyle
	case preferredFontDerivative : TextStyle
WARNING: couldn't find address 0x0 (0x0) in binary!
	case systemFont :  first-element-marker 
	case dynamicPreferredFont : TextStyle
 }

 struct JetUI.StaticDimension {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let constant : yw // +0x0
	let sourceStorage : Indirect // +0x8
 }

 class JetUI.TableContent {
