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
 protocol TeaTemplate.LayoutDecodable // 1 requirements
 {
	// getter
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
 protocol TeaTemplate.LayoutItemApplicable // 2 requirements
 {
	// method
	// method
 }
 protocol TeaTemplate.LayoutValueSource // 1 requirements
 {
	// getter
 }
 protocol TeaTemplate.LayoutNullable // 1 requirements
 {
	// getter
 }
 protocol TeaTemplate.LayoutType // 2 requirements
 {
	// getter
	// class init
 }
 protocol TeaTemplate.LayoutValueLiteral // 3 requirements
 {
	// class base protocol
	// class base protocol
	// class base protocol
 }
 protocol TeaTemplate.LayoutAdjustable // 1 requirements
 {
	// method
 }

 struct __C.UIContentSizeCategory {

	// Properties
	var _rawValue : NSString
 }

 enum __C.UIUserInterfaceLayoutDirection { }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : }¨
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : }¨
 }

 struct __C.UIRectCorner {

	// Properties
	let rawValue : UInt
 }

 struct __C.UIEdgeInsets {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var top : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : }¨
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
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

 enum TeaTemplate.ColumnLayoutSize {

	// Properties
	case large  
	case small  
 }

 class TeaTemplate.StackBuilder {
 struct TeaTemplate.LayoutOptions {

	// Properties
	let boundingSize : CGSize // +0x0
	let viewportSize : CGSize // +0x10
	let windowSize : CGSize // +0x20
	let traitCollection : UITraitCollection // +0x30
	let layoutMargins : UIEdgeInsets // +0x38
	let origin : CGPoint // +0x58
	let layoutDirection : UIUserInterfaceLayoutDirection // +0x68
	let contentSizeCategory : UIContentSizeCategory // +0x70
 }

 enum TeaTemplate.DimensionSizerTrait {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case offset : }¨
	case flexibleArea  
	case anchored  
 }

 class TeaTemplate.Space {
 struct TeaTemplate.IfSizer {

	// Properties
	let conditional : Conditional
	let thenSizing : Sizing
	let elseSizing : Sizing
 }

 enum TeaTemplate.LayoutError {

	// Properties
	case ambiguousSizing : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case missingSpecFor :  first-element-marker 
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	case fixed : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case scaledFixed : }¨
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
	let aspect : Aspect // +0x8
 }

 struct TeaTemplate.EmbedFactoryCursor {

	// Properties
	let origin : CGPoint // +0x0
	let boundingSize : CGSize // +0x10
	let adjustFrameBlock : CGRect // +0x20
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
	let cursor : Cursor
	let template : A
	let context : LayoutContext
 }

 enum TeaTemplate.ColumnSystem {

	// Properties
	case custom : UIEdgeInsets
	case default  
 }

 struct TeaTemplate.Options {

	// Properties
	let column : Column // +0x0
	var traits : Traits // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let hSpacing : }¨ // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let vSpacing : }¨ // +0x18
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
	let align : Align
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
	var frames : CGRect // +0x10
	var metadata : SizerResultMetadataKey // +0x18
 }

 struct TeaTemplate.ColumnSpecSizer {

	// Properties
	let columnSpec : ColumnSpec // +0x0
 }

 class TeaTemplate.IfNode {
 class TeaTemplate.LayoutItemList {
 class TeaTemplate.Log {
 class TeaTemplate.LayoutItem {
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
	let canvasOptions : Options
	var filledBounds : CGRect
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
	case second : DynamicOptions
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	case min : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case max : }¨
 }

 enum TeaTemplate.LayoutDecoderError {

	// Properties
	case typeMismatch : (actual: Any?, expected: String)
	case expectedLayoutDecodable : (actual: Any)
	case notImplemented  
	case expectedNonNil  
 }

 struct TeaTemplate.SizeToFitDimensionSizer { }

 struct TeaTemplate.AltFlexibleTextSizer {

	// Properties
	let adjustedAttributedText : NSAttributedString // +0x0
	let altTexts : AltText // +0x8
 }

 enum TeaTemplate.CGRectTransform {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case setWidth : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case setHeight : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case setMinX : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case setMinY : }¨
	case setBounds : CGRect
	case identity  
 }

 class TeaTemplate.Node {
 struct TeaTemplate.RectDimension {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let origin : }¨ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let size : }¨ // +0x8
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let percentage : }¨ // +0x0
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
	let cursor : Cursor
 }

 class TeaTemplate.Overlay {
 struct TeaTemplate.TextLinesSizer {

	// Properties
	let sizer : SizerType // +0x0
	let lines : Lines // +0x28
 }

 enum TeaTemplate.Lines {

	// Properties
	case min : Int
	case max : Int
 }

 struct TeaTemplate.DynamicSizer {

	// Properties
	let block : SizerType
 }

 struct TeaTemplate.OffsetSizer {

	// Properties
	let sizer : SizerType // +0x0
	let offset : CGPoint // +0x28
 }

 enum TeaTemplate.LayoutDecoderObject {

	// Properties
	case layout : [String : Any]
	case layoutAttributes : [String : Any]
 }

 struct TeaTemplate.FlexibleTextSizer {

	// Properties
	let adjustedAttributedText : NSAttributedString // +0x0
 }

 enum TeaTemplate.SizerResult {

	// Properties
	case frame : CGRect
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
	case adjustFrame : CGRect
	case replaceFrame : CGRect
	case noChange  
 }

 class TeaTemplate.BoxBuilder {
 struct TeaTemplate.AltTextSizer {

	// Properties
	let adjustedAttributedText : NSAttributedString // +0x0
	let altTexts : AltText // +0x8
 }

 struct TeaTemplate.FlexibleMaxSizer {

	// Properties
	let constraints : SizeConstraints // +0x0
 }

 class TeaTemplate.Inspect {
 struct TeaTemplate.State {

	// Properties
	let cursor : Cursor
	let template : A
	let context : LayoutContext
 }

 enum TeaTemplate.Fixed {

	// Properties
	case size : CGSize
WARNING: couldn't find address 0x0 (0x0) in binary!
	case width : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case height : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case scaledWidth : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case scaledHeight : }¨
 }

 struct TeaTemplate.FixedSizer {

	// Properties
	let fixed : Fixed // +0x0
 }

 class TeaTemplate.Stack {
 class TeaTemplate.StackLayer {
 struct TeaTemplate.FixedDimensionSizer {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let size : }¨ // +0x0
	let scaled : Bool // +0x8
 }

 class TeaTemplate.LayoutDecoder {
 class TeaTemplate._LayoutDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let object : LayoutDecoderObject // +0x10 (0x9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var codingPath :  empty-list  // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var userInfo :  empty-list  // +0x28 (0x8)

	// Swift methods
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
	case value : RectDimension
	case ambiguous : DimensionSizerType
	case constraining : DimensionSizerResult
	case nonIntegral : DimensionSizerResult
	case resizing : DimensionSizerResult
	case processing : DimensionSizerResult
	case postProcessing : DimensionSizerResult
 }

 enum TeaTemplate.ProcessResult {

	// Properties
	case adjustValue : RectDimension
	case replaceValue : RectDimension
	case noChange  
 }

 enum TeaTemplate.Column {

	// Properties
	case fixed : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	case percentage : }¨
 }

 struct TeaTemplate.ColumnSizer {

	// Properties
	let column : Column // +0x0
 }

 struct TeaTemplate.AnchorSizer {

	// Properties
	let sizer : SizerType
	let anchor : Anchor
	let resizing : Bool
 }

 class TeaTemplate.Box {
 enum TeaTemplate.AltTextLogic {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case textLines : Ã›
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

 struct TeaTemplate.ClipToBoundsSizer {

	// Properties
	let sizer : SizerType // +0x0
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

 class TeaTemplate.LayoutKeyedDecodingContainer {
 class TeaTemplate.ColumnDebugView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let columnSystem : ColumnSystem // +0x8 (0x21)
	var showMargins : Bool // +0x29 (0x1)
	var showColumns : Bool // +0x2a (0x1)
	let columnViews : [UIView] // +0x30 (0x8)
	let leftMarginView : UIView // +0x38 (0x8)
	let rightMarginView : UIView // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x4b960  @objc ColumnDebugView.initWithCoder: <stripped>
	0x4c270  @objc ColumnDebugView.layoutSubviews <stripped>
	0x4c3d0  @objc ColumnDebugView.initWithFrame: <stripped>
	0x4c2d0  @objc ColumnDebugView..cxx_destruct <stripped>

	// Swift methods
	0x4b0b0  class func ColumnDebugView.__allocating_init(columnSystem:) // init 
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
	let adjust : Adjust // +0x28
 }

 enum TeaTemplate.Adjust {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case minWidth : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case maxWidth : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case minHeight : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case maxHeight : }¨
 }

 struct TeaTemplate.InsetSizer {

	// Properties
	let sizer : SizerType // +0x0
	let insets : UIEdgeInsets // +0x28
 }

 struct TeaTemplate.PercentageSizer {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let percentage : }¨ // +0x0
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	case percentage : }¨
	case size : DimensionSizing
WARNING: couldn't find address 0x0 (0x0) in binary!
	case width : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case height : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case scaledWidth : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case scaledHeight : }¨
	case ratio : Ratio
WARNING: couldn't find address 0x0 (0x0) in binary!
	case flexiblePercentage : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case flexibleMaxHeight : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case flexibleMaxWidth : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case flexibleMaxSize : #™
	case flexibleText : (String?, font: UIFont)
	case flexibleAttributedText : NSAttributedString?
	case altFlexibleAttributedText : AltText
	case columns : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	case columnPercentage : }¨
	case columnSpec : ColumnSpec
	case columnRowSpan : Aspect
	case text : (String?, font: UIFont)
	case attributedText : NSAttributedString?
	case altAttributedText : AltText
	case sizer : SizerType
	case if : Conditional
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	case width : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case height : }¨
	case aspect : Aspect
 }

 enum TeaTemplate.Aspect {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case custom : }¨
	case x1x1  
	case x4x3  
	case x3x4  
	case x16x9  
 }

 class TeaTemplate.ListBuilder {
 enum TeaTemplate.Positioning {

	// Properties
	case inset : UIEdgeInsets
	case anchor : Anchor
	case offset : CGPoint
	case scaleOffset : CGPoint
	case adjustWidth : PositioningAdjustment
	case adjustHeight : PositioningAdjustment
WARNING: couldn't find address 0x0 (0x0) in binary!
	case minWidth : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case maxWidth : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case minHeight : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case maxHeight : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case scaleHeight : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case scaleWidth : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case scaleHeightWithOrigin : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case scaleWidthWithOrigin : }¨
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
	case resizeConstraining : ResizeConstraint
	case dynamic : Positioning
	case invert  
	case resize  
	case noIntegral  
	case clipToBounds  
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	case fixed : }¨
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
	let adjust : Adjust // +0x28
 }

 enum TeaTemplate.Adjust {

	// Properties
	case width : PositioningAdjustment
	case height : PositioningAdjustment
 }

 struct TeaTemplate.SizeScaleSizer {

	// Properties
	let sizer : SizerType // +0x0
	let scale : Scale // +0x28
	let adjustOrigin : Bool // +0x31
 }

 enum TeaTemplate.Scale {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case width : }¨
WARNING: couldn't find address 0x0 (0x0) in binary!
	case height : }¨
 }

 struct TeaTemplate.OffsetScaleSizer {

	// Properties
	let sizer : SizerType // +0x0
	let scaleOffset : CGPoint // +0x28
 }

 struct TeaTemplate.FlexibleCondition {

	// Properties
	let directionOption : DirectionOption // +0x0
 }

 enum TeaTemplate.DirectionOption {

	// Properties
	case layoutDirection  
	case horizontal  
	case vertical  
 }

 enum TeaTemplate.Canvas {

	// Properties
	case column : ColumnSystem
	case default  
 }

 enum TeaTemplate.Options {

	// Properties
	case column : Options
	case none  
 }

 class TeaTemplate.EmbedLayout {
