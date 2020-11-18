 protocol JetUI.EstimatedMeasurable // 2 requirements
 {
	// class base protocol
	// class method
 }
 protocol JetUI.Copyable // 1 requirements
 {
	// class init
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

 struct __C.Weight {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : ½f
 }

 struct __C.SymbolicTraits {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : k
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
	var width : ½f
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ½f
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : ½f
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ½f
 }

 struct __C.UIContentSizeCategory {

	// Properties
	var _rawValue : NSString
 }

 struct __C.Measurements {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ½f
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ½f
WARNING: couldn't find address 0x0 (0x0) in binary!
	var firstBaseline : ½f
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastBaseline : ½f
 }

 enum __C.UITraitEnvironmentLayoutDirection { }

 struct __C.UIEdgeInsets {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var top : ½f
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : ½f
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : ½f
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : ½f
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
	let useCase : FontUseCase // +0x8 (0x29)
	let traitCollection : UITraitCollection // +0x38 (0x8)

	// ObjC -> Swift bridged methods
	0x1fc0  @objc CacheKey.hash <stripped>
	0x2160  @objc CacheKey.isEqual: <stripped>
	0x2270  @objc CacheKey.init <stripped>
	0x2220  @objc CacheKey..cxx_destruct <stripped>

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
	let multiplier : ½f // +0x8
 }

 struct JetUI.AspectRatio {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var horizontal : ½f // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var vertical : ½f // +0x8
 }

 struct JetUI.Baselines {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var first : ½f // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var last : ½f // +0x8
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
 class JetUI.LayoutAttributedTextViewPlaceholder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var attributedText : NSAttributedString // +0x10 (0x8)
	var textAlignment : NSTextAlignment // +0x18 (0x8)
	var lineSpacing : Int // +0x20 (0x8)
	var frame : CGRect // +0x28 (0x20)
	var isHidden : Bool // +0x48 (0x1)
	var numberOfLines : Int // +0x50 (0x8)
	var lineBreakMode : NSLineBreakMode // +0x58 (0x8)
	var font : UIFont? // +0x60 (0x8)

	// Swift methods
	0xb9b0  class func LayoutAttributedTextViewPlaceholder.__allocating_init(attributedText:font:textAlignment:lineBreakMode:lineSpacing:numberOfLines:) // init 
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
	let spaceMultiplier : ½f // +0x50
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

 class JetUI.TraitsExpression {
 struct JetUI.ViewRecycler { }

 class JetUI.TraitEnvironmentPlaceholder : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let traitCollection : UITraitCollection // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x141f0  @objc TraitEnvironmentPlaceholder.traitCollection <stripped>
	0x14240  @objc TraitEnvironmentPlaceholder.traitCollectionDidChange: <stripped>
	0x142f0  @objc TraitEnvironmentPlaceholder.init <stripped>
	0x14280  @objc TraitEnvironmentPlaceholder..cxx_destruct <stripped>

	// Swift methods
	0x140a0  class func TraitEnvironmentPlaceholder.__allocating_init(traitCollection:) // init 
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

 class JetUI.DimensionExpression {
 struct JetUI.AnyDimensionWrapper {

	// Properties
	let conditional : Conditional // +0x0
 }

 enum JetUI.FontSource {

	// Properties
	case textStyle : TextStyle
	case useCase : FontUseCase
 }

 struct JetUI.ZeroDimension { }

 class JetUI.LayoutViewPlaceholder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let measureLogic : Measurements // +0x10 (0x10)
	var hasContent : Bool // +0x20 (0x1)
	var frame : CGRect // +0x28 (0x20)
	var isHidden : Bool // +0x48 (0x1)

	// Swift methods
	0x172b0  class func LayoutViewPlaceholder.__allocating_init(measureWith:) // init 
	0x173d0  class func LayoutViewPlaceholder.__allocating_init(measurements:) // init 
	0x17560  class func LayoutViewPlaceholder.__allocating_init(representing:) // init 
 }

 class JetUI.InvariantExpression {
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

 struct JetUI.StaticMeasurable {

	// Properties
	let measurementsStorage : Indirect // +0x0
 }

 struct JetUI.InsetLayout {

	// Properties
	var storage : Indirect // +0x0
 }

 struct JetUI.Storage {

	// Properties
	var sublayout : Layout // +0x0
	var layoutMargins : UIEdgeInsets // +0x30
 }

 struct JetUI.Dimensions { }

 class JetUI.InsetLayoutView : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let internalLayoutView : LayoutView // +0x10 (0x28)
	let insets : UIEdgeInsets // +0x38 (0x20)

	// Swift methods
 }

 class JetUI.ClosureExpression {
 struct JetUI.HorizontalSpaceMeasurable {

	// Properties
	let horizontalSpaceStorage : Indirect // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let multiplier : ½f // +0x8
 }

 class JetUI.Expression {
 struct JetUI.Conditional {

	// Properties
	let expression : Expression
 }

 struct JetUI.Indirect {

	// Properties
	var interior : MutableBox
 }

 struct JetUI.TallLocaleMeasurable {

	// Properties
	let dimensionStorage : Indirect // +0x0
 }

 struct JetUI.EdgeInsetsDimension {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let topConstant : ½f // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let leftConstant : ½f // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bottomConstant : ½f // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rightConstant : ½f // +0x18
	let source : FontSource // +0x20
 }

 struct JetUI.AspectFitMeasurable {

	// Properties
	var aspectRatio : AspectRatio // +0x0
 }

 struct JetUI.LineHeightDimension {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let multiplier : ½f // +0x0
	let sourceStorage : Indirect // +0x8
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
	let measurable : Measurable // +0x10 (0x28)
	let layoutView : LayoutView // +0x38 (0x28)

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
	var leadingInset : ½f // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var trailingInset : ½f // +0x10
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

 struct JetUI.Child {

	// Properties
	let view : LayoutView // +0x0
	let topSpace : AnyDimension // +0x28
	let bottomSpace : AnyDimension // +0x50
 }

 class JetUI.LayoutTextViewPlaceholder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var text : String // +0x10 (0x10)
	var textAlignment : NSTextAlignment // +0x20 (0x8)
	var lineSpacing : Int // +0x28 (0x8)
	var frame : CGRect // +0x30 (0x20)
	var isHidden : Bool // +0x50 (0x1)
	var numberOfLines : Int // +0x58 (0x8)
	var lineBreakMode : NSLineBreakMode // +0x60 (0x8)
	var font : UIFont? // +0x68 (0x8)

	// Swift methods
	0x342a0  class func LayoutTextViewPlaceholder.__allocating_init(text:font:textAlignment:lineBreakMode:lineSpacing:numberOfLines:) // init 
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
	let constant : ½f // +0x0
	let sourceStorage : Indirect // +0x8
 }
