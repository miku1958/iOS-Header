 protocol TeaTemplate.DimensionSizerType // 2 requirements
 {
	// getter
	// method
 }
 protocol TeaTemplate.SizerType // 2 requirements
 {
	// method
	// method
 }
 protocol TeaTemplate.EmbedFactoryType // 5 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol TeaTemplate.LayoutAttributesType // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol TeaTemplate.TextLinesSizerAttributedTextProviderType // 1 requirements
 {
	// method
 }
 protocol TeaTemplate.ConditionType // 1 requirements
 {
	// method
 }
 protocol TeaTemplate.ConditionalProviding // 1 requirements
 {
	// getter
 }
 protocol TeaTemplate.BuilderType // 5 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol TeaTemplate.LayoutItemApplicable // 5 requirements
 {
	// class base protocol
	// class base protocol
	// method
	// method
	// method
 }
 protocol TeaTemplate.LayoutValueSource // 1 requirements
 {
	// getter
 }
 protocol TeaTemplate.LayoutType // 4 requirements
 {
	// class base protocol
	// class base protocol
	// getter
	// class init
 }
 protocol TeaTemplate.LayoutValueLiteral // 5 requirements
 {
	// class base protocol
	// class base protocol
	// getter
	// class init
	// method
 }

 struct __C.UIContentSizeCategory {

	// Properties
	var _rawValue : NSString
 }

 enum __C.UIUserInterfaceLayoutDirection { }

 struct __C.CGPoint {

	// Properties
	var x : CGFloat
	var y : CGFloat
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.CGSize {

	// Properties
	var width : CGFloat
	var height : CGFloat
 }

 struct __C.UIEdgeInsets {

	// Properties
	var top : CGFloat
	var left : CGFloat
	var bottom : CGFloat
	var right : CGFloat
 }

 enum __C.UIUserInterfaceSizeClass { }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.NSStringDrawingOptions {

	// Properties
	let rawValue : Int
 }

 struct TeaTemplate.LayoutOptions {

	// Properties
	let boundingSize : CGSize // +0x0
	let viewportSize : CGSize // +0x10
	let traitCollection : UITraitCollection // +0x20
	let layoutMargins : UIEdgeInsets // +0x28
	let origin : CGPoint // +0x48
	let layoutDirection : UIUserInterfaceLayoutDirection // +0x58
	let contentSizeCategory : UIContentSizeCategory // +0x60
 }

 enum TeaTemplate.DimensionSizerTrait {

	// Properties
	case offset : CGFloat
	case flexibleArea  
	case anchored  
 }

 class TeaTemplate.Space {
 struct TeaTemplate.IfSizer {

	// Properties
	let conditional : Conditional<A>
	let thenSizing : Sizing<A>
	let elseSizing : Sizing<A>
 }

 enum TeaTemplate.LayoutError {

	// Properties
	case ambiguousSizing : String
	case missingSpecFor : (UITraitCollection, viewportWidth: CGFloat)
	case unknownTraitCollection : UITraitCollection
	case missingConstrainingFrame : (forName: String)
	case overlayMissingFrame : (forName: String)
	case missingAltFrame : (identifier: String)
	case unsupportedCanvas  
	case ambiguousLayout  
	case secondPassRequiresFirstPass  
	case keyPathMismatch  
	case unsupportColumnSpecForLayoutDirection  
	case unsupportedResizing  
	case postProcessingOrder  
 }

 struct TeaTemplate.FillDimensionSizer { }

 enum TeaTemplate.Column {

	// Properties
	case six  
	case eight  
	case twelve  
	case eighteen  
 }

 enum TeaTemplate.ColumnSpec {

	// Properties
	case hSpacing  
	case vSpacing  
 }

 class TeaTemplate.Frame {
 enum TeaTemplate.SizerTrait {

	// Properties
	case offset : CGPoint
	case anchored  
	case flexibleArea  
	case positionOffset  
 }

 struct TeaTemplate.SizeToFitSizer { }

 struct TeaTemplate.MinRatioSizer {

	// Properties
	let sizer : SizerType // +0x0
	let adjustRatio : Ratio // +0x28
 }

 enum TeaTemplate.DimensionSizing {

	// Properties
	case fixed : CGFloat
	case scaledFixed : CGFloat
	case columns : ColumnSize
	case invert : DimensionSizing
	case sizer : DimensionSizerType
	case sizeToFit  
	case fill  
 }

 enum TeaTemplate.ColumnSize {

	// Properties
	case fixed : Int
 }

 struct TeaTemplate.ColumnRowSpanSizer {

	// Properties
	let columns : Int // +0x0
	let aspect : Ratio.Aspect // +0x8
 }

 struct TeaTemplate.EmbedFactoryCursor {

	// Properties
	let origin : CGPoint // +0x0
	let boundingSize : CGSize // +0x10
	let adjustFrameBlock : (_:) // +0x20
 }

 class TeaTemplate.EmbedFactory {
 struct TeaTemplate.Context {

	// Properties
	let factory : A1
	let model : EmbedFactoryType
	let options : EmbedFactoryType
 }

 class TeaTemplate.Dynamic {
 struct TeaTemplate.State {

	// Properties
	let cursor : Cursor<A>
	let template : A
	let context : LayoutContext
 }

 enum TeaTemplate.ColumnSystem {

	// Properties
	case custom : (insets: UIEdgeInsets)
	case default  
 }

 struct TeaTemplate.Options {

	// Properties
	let column : Column // +0x0
	var traits : Traits // +0x8
	let hSpacing : CGFloat // +0x10
	let vSpacing : CGFloat // +0x18
	let bounds : CGRect // +0x20
	let layoutMargins : UIEdgeInsets // +0x40
 }

 struct TeaTemplate.Traits {

	// Properties
	let rawValue : Int // +0x0
 }

 struct TeaTemplate.FontSizer {

	// Properties
	let sizer : SizerType
	let font : UIFont
	let align : FontSizer<A>.Align
	let integral : Bool
 }

 enum TeaTemplate.Align {

	// Properties
	case otherFirstBaseline : String
	case otherBaseline : String
	case firstBaseline  
	case baseline  
 }

 struct TeaTemplate.ResizeSizer {

	// Properties
	let sizer : SizerType // +0x0
 }

 struct TeaTemplate.AltText {

	// Properties
	let identifier : String // +0x0
	let attributedText : NSAttributedString // +0x10
	let logic : AltTextLogic // +0x18
	let adjustedAttributedText : NSAttributedString // +0x20
 }

 struct TeaTemplate.TextSizer {

	// Properties
	let adjustedAttributedText : NSAttributedString // +0x0
 }

 struct TeaTemplate.LayoutContext {

	// Properties
	let name : String? // +0x0
	var frames : [String : CGRect] // +0x10
	var metadata : [String : [SizerResultMetadataKey : Any]] // +0x18
 }

 struct TeaTemplate.ColumnSpecSizer {

	// Properties
	let columnSpec : ColumnSpec // +0x0
 }

 class TeaTemplate.IfNode {
 class TeaTemplate.LayoutItemList {
 enum TeaTemplate.CodingKeys {

	// Properties
	case values  
	case sources  
 }

 class TeaTemplate.Log {
 class TeaTemplate.LayoutItem {
 enum TeaTemplate.CodingKeys {

	// Properties
	case value  
 }

 struct TeaTemplate.FillSizer { }

 class TeaTemplate.Logging : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct TeaTemplate.NonIntegralSizer {

	// Properties
	let sizer : SizerType // +0x0
 }

 struct TeaTemplate.ColumnDimensionSizer {

	// Properties
	let size : ColumnSize // +0x0
 }

 struct TeaTemplate.Cursor {

	// Properties
	let origin : CGPoint
	let initialOrigin : CGPoint
	let direction : Direction
	var pass : Pass
	let isResizing : Bool
	let bounds : CGRect
	let layoutOptions : LayoutOptions
	let canvasOptions : Canvas.Options
	var filledBounds : CGRect?
	var position : CGPoint
	var filledArea : CGSize
	let initialPosition : CursorInitialPosition
	let sizingBehavior : SizingBehavior
 }

 enum TeaTemplate.CursorInitialPosition {

	// Properties
	case adjustedOrigin : CGPoint
	case adjustedOriginAndPosition : CGPoint
	case origin  
 }

 enum TeaTemplate.Pass {

	// Properties
	case second : Pass.DynamicOptions
	case first  
 }

 struct TeaTemplate.DynamicOptions {

	// Properties
	let flexibleArea : CGSize // +0x0
 }

 struct TeaTemplate.SizeConstraints {

	// Properties
	let width : SizeConstraint // +0x0
	let height : SizeConstraint // +0x8
 }

 enum TeaTemplate.SizeConstraint {

	// Properties
	case min : CGFloat
	case max : CGFloat
 }

 struct TeaTemplate.SizeToFitDimensionSizer { }

 struct TeaTemplate.AltFlexibleTextSizer {

	// Properties
	let adjustedAttributedText : NSAttributedString // +0x0
	let altTexts : [AltText] // +0x8
 }

 enum TeaTemplate.CGRectTransform {

	// Properties
	case setWidth : CGFloat
	case setHeight : CGFloat
	case setMinX : CGFloat
	case setMinY : CGFloat
	case setBounds : CGRect
	case identity  
 }

 class TeaTemplate.Node {
 struct TeaTemplate.RectDimension {

	// Properties
	let origin : CGFloat // +0x0
	let size : CGFloat // +0x8
 }

 class TeaTemplate.LayoutBuilder {
 struct TeaTemplate.ResizeConstrainingSizer {

	// Properties
	let sizer : SizerType // +0x0
	let constraint : ResizeConstraint // +0x28
	let name : String // +0x30
 }

 struct TeaTemplate.InvertSizer {

	// Properties
	let sizer : SizerType // +0x0
 }

 struct TeaTemplate.FlexibleSizer {

	// Properties
	let percentage : CGFloat // +0x0
 }

 struct TeaTemplate.BoolCondition {

	// Properties
	let value : Bool // +0x0
 }

 struct TeaTemplate.RatioSizer {

	// Properties
	let ratio : Ratio // +0x0
 }

 struct TeaTemplate.DimensionCursor {

	// Properties
	let direction : Direction
	let cursor : Cursor<A>
 }

 class TeaTemplate.Overlay {
 struct TeaTemplate.TextLinesSizer {

	// Properties
	let sizer : SizerType // +0x0
	let lines : TextLinesSizer.Lines // +0x28
 }

 enum TeaTemplate.Lines {

	// Properties
	case min : Int
	case max : Int
 }

 struct TeaTemplate.DynamicSizer {

	// Properties
	let block : (_:)
 }

 struct TeaTemplate.OffsetSizer {

	// Properties
	let sizer : SizerType // +0x0
	let offset : CGPoint // +0x28
 }

 struct TeaTemplate.FlexibleTextSizer {

	// Properties
	let adjustedAttributedText : NSAttributedString // +0x0
 }

 enum TeaTemplate.SizerResult {

	// Properties
	case frame : (CGRect, SizingBehavior)
	case ambiguous : SizerType
	case resizing : SizerResult
	case constraining : SizerResult
	case nonIntegral : SizerResult
	case processing : SizerResult
	case postProcessing : SizerResult
	case metadata : SizerResult
 }

 enum TeaTemplate.ProcessResult {

	// Properties
	case adjustFrame : (to: CGRect)
	case replaceFrame : (with: CGRect)
	case noChange  
 }

 class TeaTemplate.BoxBuilder {
 struct TeaTemplate.AltTextSizer {

	// Properties
	let adjustedAttributedText : NSAttributedString // +0x0
	let altTexts : [AltText] // +0x8
 }

 struct TeaTemplate.FlexibleMaxSizer {

	// Properties
	let constraints : SizeConstraints // +0x0
	let fixedSizer : FixedSizer // +0x10
 }

 class TeaTemplate.Inspect {
 struct TeaTemplate.State {

	// Properties
	let cursor : Cursor<A>
	let template : A
	let context : LayoutContext
 }

 enum TeaTemplate.Fixed {

	// Properties
	case size : CGSize
	case width : CGFloat
	case height : CGFloat
	case scaledWidth : CGFloat
	case scaledHeight : CGFloat
 }

 struct TeaTemplate.FixedSizer {

	// Properties
	let fixed : FixedSizer.Fixed // +0x0
 }

 struct TeaTemplate.FixedDimensionSizer {

	// Properties
	let size : CGFloat // +0x0
	let scaled : Bool // +0x8
 }

 class TeaTemplate.Prop {
 enum TeaTemplate.Conditional {

	// Properties
	case expr : Bool
	case not : Conditional
	case flexible  
	case flexibleWidth  
	case flexibleHeight  
 }

 enum TeaTemplate.ConditionalList {

	// Properties
	case first : (B, B.Sequence.Element)
	case last : (B, B.Sequence.Element)
	case nth : (B, B.Sequence.Element, B.Collection.Index)
	case not : ConditionalList
 }

 enum TeaTemplate.DimensionSizerResult {

	// Properties
	case value : (RectDimension, DimensionSizingBehavior)
	case ambiguous : DimensionSizerType
	case constraining : DimensionSizerResult
	case nonIntegral : DimensionSizerResult
	case resizing : DimensionSizerResult
	case processing : DimensionSizerResult
	case postProcessing : DimensionSizerResult
 }

 enum TeaTemplate.ProcessResult {

	// Properties
	case adjustValue : (to: RectDimension)
	case replaceValue : (with: RectDimension)
	case noChange  
 }

 enum TeaTemplate.Column {

	// Properties
	case fixed : Int
	case percentage : CGFloat
 }

 struct TeaTemplate.ColumnSizer {

	// Properties
	let column : ColumnSizer.Column // +0x0
 }

 struct TeaTemplate.AnchorSizer {

	// Properties
	let sizer : SizerType
	let anchor : Positioning<A>.Anchor
	let resizing : Bool
 }

 class TeaTemplate.Box {
 enum TeaTemplate.AltTextLogic {

	// Properties
	case textLines : Operator
	case alt : AltTextLogic
	case and : AltTextLogic
	case or : AltTextLogic
 }

 enum TeaTemplate.Operator {

	// Properties
	case eq  
	case neq  
	case gt  
	case gte  
	case lt  
	case lte  
 }

 struct TeaTemplate.DimensionWiseSizer {

	// Properties
	let horizontal : DimensionSizerType // +0x0
	let vertical : DimensionSizerType // +0x28
 }

 struct TeaTemplate.NotCondition {

	// Properties
	let condition : ConditionType // +0x0
 }

 class TeaTemplate.ColumnDebugView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let columnSystem : ColumnSystem // +0x8 (0x21)
	var showMargins : Bool // +0x29 (0x1)
	var showColumns : Bool // +0x2a (0x1)
	let columnViews : [UIView] // +0x30 (0x8)
	let leftMarginView : UIView // +0x38 (0x8)
	let rightMarginView : UIView // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x3b3e0  @objc ColumnDebugView.initWithCoder: <stripped>
	0x3be70  @objc ColumnDebugView.layoutSubviews <stripped>
	0x3bf50  @objc ColumnDebugView.initWithFrame: <stripped>
	0x3bfd0  @objc ColumnDebugView..cxx_destruct <stripped>

	// Swift methods
	0x3ac30  class func ColumnDebugView.__allocating_init(columnSystem:) // init 
 }

 class TeaTemplate.Layout {
 struct TeaTemplate.SizingBehavior {

	// Properties
	let width : DimensionSizingBehavior // +0x0
	let height : DimensionSizingBehavior // +0x1
 }

 enum TeaTemplate.DimensionSizingBehavior {

	// Properties
	case sizeToFitContents  
	case fixed  
 }

 struct TeaTemplate.InvertDimensionSizer {

	// Properties
	let sizer : DimensionSizerType // +0x0
 }

 struct TeaTemplate.AltTextSized {

	// Properties
	let altText : AltText // +0x0
	let frame : CGRect // +0x28
 }

 struct TeaTemplate.MinMaxSizer {

	// Properties
	let sizer : SizerType // +0x0
	let adjust : MinMaxSizer.Adjust // +0x28
 }

 enum TeaTemplate.Adjust {

	// Properties
	case minWidth : CGFloat
	case maxWidth : CGFloat
	case minHeight : CGFloat
	case maxHeight : CGFloat
 }

 struct TeaTemplate.InsetSizer {

	// Properties
	let sizer : SizerType // +0x0
	let insets : UIEdgeInsets // +0x28
 }

 struct TeaTemplate.PercentageSizer {

	// Properties
	let percentage : CGFloat // +0x0
 }

 struct TeaTemplate.ZeroSizer { }

 class TeaTemplate.ForEachNode {
 enum TeaTemplate.ResizeConstraint {

	// Properties
	case height  
	case width  
 }

 enum TeaTemplate.Sizing {

	// Properties
	case percentage : CGFloat
	case size : (width: DimensionSizing, height: DimensionSizing)
	case width : CGFloat
	case height : CGFloat
	case scaledWidth : CGFloat
	case scaledHeight : CGFloat
	case ratio : Ratio
	case flexiblePercentage : CGFloat
	case flexibleMaxHeight : CGFloat
	case flexibleMaxWidth : CGFloat
	case flexibleText : (String?, font: UIFont)
	case flexibleAttributedText : NSAttributedString?
	case altFlexibleAttributedText : (NSAttributedString?, alts: [AltText])
	case columns : Int
	case columnPercentage : CGFloat
	case columnSpec : ColumnSpec
	case columnRowSpan : (Int, Ratio.Aspect)
	case text : (String?, font: UIFont)
	case attributedText : NSAttributedString?
	case altAttributedText : (NSAttributedString?, alts: [AltText])
	case sizer : SizerType
	case if : Sizing
	case dynamic : Sizing
	case fill  
	case sizeToFit  
	case flexible  
	case zero  
 }

 enum TeaTemplate.Direction {

	// Properties
	case horizontal  
	case vertical  
 }

 class TeaTemplate.IfBuilder {
 enum TeaTemplate.Ratio {

	// Properties
	case width : CGFloat
	case height : CGFloat
	case aspect : Aspect
 }

 enum TeaTemplate.Aspect {

	// Properties
	case custom : CGFloat
	case x1x1  
	case x4x3  
	case x3x4  
	case x16x9  
 }

 class TeaTemplate.ListBuilder {
 enum TeaTemplate.LayoutValue {

	// Properties
	case rect : CGRect
	case size : CGSize
	case int : Int
	case uint : UInt
	case float : CGFloat
	case double : Double
	case bool : Bool
	case data : Data
	case string : String
	case nil  
 }

 enum TeaTemplate.Positioning {

	// Properties
	case inset : UIEdgeInsets
	case anchor : Anchor
	case offset : CGPoint
	case scaleOffset : CGPoint
	case adjustWidth : PositioningAdjustment
	case adjustHeight : PositioningAdjustment
	case minWidth : CGFloat
	case maxWidth : CGFloat
	case minHeight : CGFloat
	case maxHeight : CGFloat
	case scaleHeight : CGFloat
	case scaleWidth : CGFloat
	case scaleHeightWithOrigin : CGFloat
	case scaleWidthWithOrigin : CGFloat
	case minAspectRatio : Ratio
	case firstBaseline : UIFont
	case baseline : UIFont
	case otherFirstBaseline : (String, UIFont)
	case otherFirstBaselineIntegral : (String, UIFont)
	case otherBaseline : (String, UIFont)
	case otherBaselineIntegral : (String, UIFont)
	case minTextLines : Int
	case maxTextLines : Int
	case resizeAnchor : Anchor
	case resizeConstraining : (ResizeConstraint, to: String)
	case dynamic : Positioning
	case invert  
	case resize  
	case noIntegral  
 }

 enum TeaTemplate.Anchor {

	// Properties
	case top  
	case bottom  
	case leading  
	case trailing  
	case center  
	case hcenter  
	case vcenter  
 }

 enum TeaTemplate.PositioningAdjustment {

	// Properties
	case add : PositioningAmount
	case subtract : PositioningAmount
 }

 enum TeaTemplate.PositioningAmount {

	// Properties
	case fixed : CGFloat
	case vSpacing  
	case hSpacing  
 }

 enum TeaTemplate.SizerResultMetadataKey {

	// Properties
	case altText  
 }

 struct TeaTemplate.SizeAdjustSizer {

	// Properties
	let sizer : SizerType // +0x0
	let adjust : SizeAdjustSizer.Adjust // +0x28
 }

 enum TeaTemplate.Adjust {

	// Properties
	case width : PositioningAdjustment
	case height : PositioningAdjustment
 }

 struct TeaTemplate.SizeScaleSizer {

	// Properties
	let sizer : SizerType // +0x0
	let scale : SizeScaleSizer.Scale // +0x28
	let adjustOrigin : Bool // +0x31
 }

 enum TeaTemplate.Scale {

	// Properties
	case width : CGFloat
	case height : CGFloat
 }

 struct TeaTemplate.OffsetScaleSizer {

	// Properties
	let sizer : SizerType // +0x0
	let scaleOffset : CGPoint // +0x28
 }

 struct TeaTemplate.FlexibleCondition {

	// Properties
	let directionOption : FlexibleCondition.DirectionOption // +0x0
 }

 enum TeaTemplate.DirectionOption {

	// Properties
	case layoutDirection  
	case horizontal  
	case vertical  
 }

 enum TeaTemplate.Canvas {

	// Properties
	case column : (system: ColumnSystem)
	case default  
 }

 enum TeaTemplate.Options {

	// Properties
	case column : ColumnSystem.Options
	case none  
 }

 class TeaTemplate.EmbedLayout {
