 protocol TeaCharts.ChartInteractorType // 3 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// method
 }
 protocol TeaCharts.CategoryCoordinateCalculatorType // 2 requirements
 {
	// method
	// method
 }
 protocol TeaCharts.LineImageGeneratorType // 2 requirements
 {
	// method
	// method
 }
 protocol TeaCharts.ChartCoordinateProviderType // 4 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// method
	// method
 }
 protocol TeaCharts.ChartLayoutAttributesProviderType // 1 requirements
 {
	// getter
 }
 protocol TeaCharts.LineChartImageLoaderType // 1 requirements
 {
	// method
 }
 protocol TeaCharts.GridLayoutAttributesFactoryType // 1 requirements
 {
	// method
 }
 protocol TeaCharts.InteractionManagerType // 5 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// method
	// method
 }
 protocol TeaCharts.ColumnChartStylerType // 1 requirements
 {
	// getter
 }
 protocol TeaCharts.Zonable // 7 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// getter
	// method
 }
 protocol TeaCharts.LineChartRendererType // 2 requirements
 {
	// method
	// method
 }
 protocol TeaCharts.ChartModelFactoryType // 3 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// method
 }
 protocol TeaCharts.ColumnPathGeneratorType // 1 requirements
 {
	// method
 }
 protocol TeaCharts.GridLabelFormatterType // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol TeaCharts.StringLabelFormatterType // 1 requirements
 {
	// method
 }
 protocol TeaCharts.ValueLabelFormatterType // 1 requirements
 {
	// method
 }
 protocol TeaCharts.ValueAxisCalculationModelType // 2 requirements
 {
	// method
	// method
 }
 protocol TeaCharts.GridViewProviderType // 2 requirements
 {
	// method
	// method
 }
 protocol TeaCharts.SparklineViewRendererType // 1 requirements
 {
	// method
 }
 protocol TeaCharts.ColumnChartImageGeneratorType // 1 requirements
 {
	// method
 }
 protocol TeaCharts.AxisType // 2 requirements
 {
	// class associated type access function
	// getter
 }
 protocol TeaCharts.GridViewRendererType // 1 requirements
 {
	// method
 }
 protocol TeaCharts.InteractionHandler // 6 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// method
	// method
 }
 protocol TeaCharts.GridViewModelGeneratorType // 5 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol TeaCharts.ColumnChartImageLoaderType // 1 requirements
 {
	// method
 }
 protocol TeaCharts.ChartSeriesAccessibilityElementProviderType // 5 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol TeaCharts.LineChartStylerType // 3 requirements
 {
	// getter
	// method
	// method
 }
 protocol TeaCharts.SparklineLoaderType // 2 requirements
 {
	// method
	// method
 }
 protocol TeaCharts.ChartModelType // 10 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// getter
	// getter
 }
 protocol TeaCharts.GridPathGeneratorType // 1 requirements
 {
	// method
 }
 protocol TeaCharts.LinePathGeneratorType // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol TeaCharts.AxisGridViewModelGeneratorType // 3 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// method
 }
 protocol TeaCharts.SparklineCoordinateProviderType // 1 requirements
 {
	// method
 }
 protocol TeaCharts.StyleProviderType // 2 requirements
 {
	// class associated type access function
	// getter
 }
 protocol TeaCharts.StyleManagerType // 2 requirements
 {
	// class base protocol
	// method
 }
 protocol TeaCharts.ZoneProviderType // 3 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// getter
 }
 protocol TeaCharts.ZoneManagerType // 4 requirements
 {
	// class base protocol
	// method
	// method
	// method
 }
 protocol TeaCharts.ChartLayoutAttributesFactoryType // 1 requirements
 {
	// method
 }
 protocol TeaCharts.ValueCoordinateCalculatorType // 2 requirements
 {
	// method
	// method
 }
 protocol TeaCharts.GridViewStylerType // 2 requirements
 {
	// method
	// method
 }
 protocol TeaCharts.LineZoneMaskProviderType // 1 requirements
 {
	// method
 }
 protocol TeaCharts.ColumnChartRendererType // 1 requirements
 {
	// method
 }
 protocol TeaCharts.ChartViewProviderType // 6 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// method
	// method
 }
 protocol TeaCharts.ZoneType // 2 requirements
 {
	// class base protocol
	// class base protocol
 }

 struct __C.UIRectCorner {

	// Properties
	let rawValue : UInt
 }

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

 struct __C.UIEdgeInsets {

	// Properties
	var top : CGFloat
	var left : CGFloat
	var bottom : CGFloat
	var right : CGFloat
 }

 struct __C.CGSize {

	// Properties
	var width : CGFloat
	var height : CGFloat
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 class __C.CGColor {
 enum TeaCharts.GridLabel {

	// Properties
	case formatter : GridLabelFormatter<A>
	case none  
 }

 struct TeaCharts.GridViewModel {

	// Properties
	let orientation : Orientation // +0x0
	let locations : [GridLine] // +0x8
	let style : GridStyle // +0x10
 }

 enum TeaCharts.LineCap {

	// Properties
	case butt  
	case round  
	case square  
 }

 class TeaCharts.CategoryCoordinateCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib, CategoryCoordinateCalculatorType {
	// Swift methods
 }

 class TeaCharts.LineImageGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LineImageGeneratorType {

	// Properties
	let pathGenerator : LinePathGeneratorType // +0x10 (0x28)

	// Swift methods
 }

 class TeaCharts.LineChartViewProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let renderer : LineChartRendererType // +0x10 (0x28)
	let styler : LineChartStylerType // +0x38 (0x28)
	let zoneManager : ZoneManager<CategoryZone> // +0x60 (0x8)

	// Swift methods
 }

 struct TeaCharts.SeriesStyle {

	// Properties
	let strokeColor : UIColor? // +0x0
	let fill : Fill // +0x8
 }

 struct TeaCharts.ZoneStyle {

	// Properties
	let identifier : String
	let style : A
 }

 class TeaCharts.LineChartImageLoader : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LineChartImageLoaderType {

	// Properties
	let imageGenerator : LineImageGeneratorType // +0x10 (0x28)
	let styler : LineChartStylerType // +0x38 (0x28)

	// Swift methods
 }

 class TeaCharts.GridLayoutAttributesFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, GridLayoutAttributesFactoryType {

	// Properties
	let pathGenerator : GridPathGeneratorType // +0x10 (0x28)

	// Swift methods
 }

 struct TeaCharts.Label {

	// Properties
	let attributedString : NSAttributedString // +0x0
	let size : CGSize // +0x8
	let baseline : CGFloat // +0x18
	let location : CGFloat // +0x20
	let orientation : Orientation // +0x28
	let padding : UIEdgeInsets // +0x30
 }

 struct TeaCharts.InteractionCursor {

	// Properties
	let series : Series<A>
	let point : A
 }

 class TeaCharts.InteractionManager {
 class TeaCharts.SparklineAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xdbd0  @objc SparklineAssembly.init <stripped>

	// Swift methods
 }

 struct TeaCharts.GridLine {

	// Properties
	let location : CGFloat // +0x0
	let label : NSAttributedString? // +0x8
 }

 class TeaCharts.ColumnChartStyler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ColumnChartStylerType {

	// Properties
	let styleManager : StyleManager<ColumnChartStyle> // +0x10 (0x8)

	// Swift methods
 }

 class TeaCharts.LineSeriesView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let defaultLineView : LineView // +0x8 (0x8)
	var zoneLineViews : [String : LineView] // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xe310  @objc LineSeriesView.initWithCoder: <stripped>
	0xea80  @objc LineSeriesView.layoutSubviews <stripped>
	0xeb60  @objc LineSeriesView.initWithFrame: <stripped>
	0xebe0  @objc LineSeriesView..cxx_destruct <stripped>

	// Swift methods
 }

 class TeaCharts.ValueAxisGridViewModelGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let valueCoordinateCalculator : ValueCoordinateCalculatorType // +0x10 (0x28)

	// Swift methods
 }

 class TeaCharts.LineChartInteractor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let categoryCoordinateCalculator : CategoryCoordinateCalculatorType // +0x10 (0x28)
	let valueCoordinateCalculator : ValueCoordinateCalculatorType // +0x38 (0x28)

	// Swift methods
	0x114d0  class func LineChartInteractor.__allocating_init(categoryCoordinateCalculator:valueCoordinateCalculator:) // init 
 }

 class TeaCharts.Assembly : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let assemblies : [NFAssembly] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x12b40  @objc Assembly.assemblies <stripped>
	0x12db0  @objc Assembly.init <stripped>
	0x12e20  @objc Assembly..cxx_destruct <stripped>
 }

 struct TeaCharts.LayoutOptions {

	// Properties
	let size : CGSize // +0x0
	let screenScale : CGFloat // +0x10
 }

 struct TeaCharts.ChartLayoutOptions {

	// Properties
	let size : CGSize // +0x0
 }

 struct TeaCharts.GridLayoutOptions {

	// Properties
	let size : CGSize // +0x0
 }

 class TeaCharts.ColumnChartInteractor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class TeaCharts.LineView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let imageView : UIImageView // +0x8 (0x8)
	let maskLayer : CAShapeLayer // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x13120  @objc LineView.initWithCoder: <stripped>
	0x13200  @objc LineView.init <stripped>
	0x13470  @objc LineView.layoutSubviews <stripped>
	0x136b0  @objc LineView.initWithFrame: <stripped>
	0x13730  @objc LineView..cxx_destruct <stripped>
 }

 class TeaCharts.CategoryAxisGridViewModelGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let coordinateCalculator : CategoryCoordinateCalculatorType // +0x10 (0x28)

	// Swift methods
 }

 class TeaCharts.LineChartRenderer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LineChartRendererType {

	// Properties
	let imageLoader : LineChartImageLoaderType // +0x10 (0x28)
	let styler : LineChartStylerType // +0x38 (0x28)
	let zoneMaskProvider : LineZoneMaskProviderType // +0x60 (0x28)
	let animationSynchronizer : SynchronizerType // +0x88 (0x28)
	let reuseProtector : ObjectReuseProtector<UIView, [LineChartImages]> // +0xb0 (0x8)
	let accessibilityElementProvider : LineSeriesAccessibilityElementProvider // +0xb8 (0x8)

	// Swift methods
 }

 struct TeaCharts.GridLabelLayoutAttributes {

	// Properties
	let attributedString : NSAttributedString? // +0x0
	let frame : CGRect? // +0x8
 }

 class TeaCharts.ChartModelFactory {
 struct TeaCharts.Series {

	// Properties
	let name : String
	let points : [A]
 }

 enum TeaCharts.CodingKeys {

	// Properties
	case name  
	case points  
 }

 class TeaCharts.ChartViewController {
 class TeaCharts.MultiTouchInteractionManager {
 class TeaCharts.ColumnPathGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ColumnPathGeneratorType {

	// Properties
	let valueCoordinateCalculator : ValueCoordinateCalculatorType // +0x10 (0x28)

	// Swift methods
 }

 struct TeaCharts.GridLabelFormatterOptions {

	// Properties
	let traitCollection : UITraitCollection // +0x0
 }

 class TeaCharts.GridLabelFormatter {
 struct TeaCharts.GridStyle {

	// Properties
	let stroke : Stroke // +0x0
	let insetBehavior : GridInsetBehavior // +0x19
	let labelPadding : UIEdgeInsets // +0x20
 }

 enum TeaCharts.GridInsetBehavior {

	// Properties
	case full  
	case inset  
 }

 enum TeaCharts.Orientation {

	// Properties
	case horizontal  
	case vertical  
 }

 class TeaCharts.GridViewProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, GridViewProviderType {

	// Properties
	let renderer : GridViewRendererType // +0x10 (0x28)
	let styler : GridViewStylerType // +0x38 (0x28)

	// Swift methods
 }

 struct TeaCharts.DataPoint {

	// Properties
	let x : Double // +0x0
	let y : Double // +0x8
 }

 class TeaCharts.GridAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x230f0  @objc GridAssembly.init <stripped>

	// Swift methods
 }

 class TeaCharts.SparklineViewRenderer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SparklineViewRendererType {

	// Properties
	let imageLoader : SparklineLoaderType // +0x10 (0x28)
	let reuseProtector : ObjectReuseProtector<UIView, UIImage> // +0x38 (0x8)
	var cache : LRUCacheKey // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x23b70  @objc SparklineViewRenderer.didReceiveMemoryWarning <stripped>

	// Swift methods
 }

 struct TeaCharts.LRUCacheKey {

	// Properties
	let size : CGSize // +0x0
	let series : Series<CategoryDataPoint> // +0x10
	let style : SparklineStyle // +0x28
 }

 class TeaCharts.ColumnChartAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x25380  @objc ColumnChartAssembly.init <stripped>

	// Swift methods
 }

 class TeaCharts.LineChartView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var seriesViews : [LineSeriesView] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x25b50  @objc LineChartView.initWithCoder: <stripped>
	0x25fa0  @objc LineChartView.layoutSubviews <stripped>
	0x26080  @objc LineChartView.initWithFrame: <stripped>
	0x26100  @objc LineChartView..cxx_destruct <stripped>

	// Swift methods
	0x25a40  class func LineChartView.__allocating_init(seriesViews:) // init 
 }

 class TeaCharts.ColumnChartImageGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ColumnChartImageGeneratorType {

	// Properties
	let pathGenerator : ColumnPathGeneratorType // +0x10 (0x28)

	// Swift methods
 }

 struct TeaCharts.CategoryAxis {

	// Properties
	let categories : UniqueCollection<String>
	let mappedCategories : [String : Int]
	let grids : [Grid<String>]
 }

 class TeaCharts.GridViewRenderer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, GridViewRendererType {

	// Properties
	let animationSynchronizer : SynchronizerType // +0x10 (0x28)

	// Swift methods
 }

 struct TeaCharts.CoordinateSpace {

	// Properties
	let x : A
	let y : B
 }

 struct TeaCharts.GridViewModelGeneratorOptions {

	// Properties
	let size : CGSize // +0x0
	let traitCollection : UITraitCollection // +0x10
 }

 class TeaCharts.GridViewModelGenerator {
 struct TeaCharts.ColumnChartModel {

	// Properties
	let coordinateSpace : CoordinateSpace<CategoryAxis, ValueAxis>
	let series : [Series<CategoryDataPoint>]
	let options : ColumnChartOptions
 }

 enum TeaCharts.GridType {

	// Properties
	case values : [A]
	case interval : Double
 }

 class TeaCharts.ColumnChartImageLoader : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ColumnChartImageLoaderType {

	// Properties
	let imageGenerator : ColumnChartImageGeneratorType // +0x10 (0x28)
	let styler : ColumnChartStylerType // +0x38 (0x28)

	// Swift methods
 }

 enum TeaCharts.ColumnChartImageLoaderError {

	// Properties
	case missingStyle  
	case failedToCreateImage  
 }

 struct TeaCharts.SparklineLayoutAttributes {

	// Properties
	let frame : CGRect // +0x0
 }

 struct TeaCharts.LineChartModel {

	// Properties
	let coordinateSpace : CoordinateSpace<CategoryAxis, ValueAxis>
	let series : [Series<CategoryDataPoint>]
 }

 class TeaCharts.LineChartAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x2dfb0  @objc LineChartAssembly.init <stripped>
	0x2e050  @objc LineChartAssembly..cxx_destruct <stripped>

	// Swift methods
 }

 class TeaCharts.ColumnChartView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let imageView : UIImageView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x2ea20  @objc ColumnChartView.initWithCoder: <stripped>
	0x2eae0  @objc ColumnChartView.init <stripped>
	0x2ecd0  @objc ColumnChartView.layoutSubviews <stripped>
	0x2ee70  @objc ColumnChartView.initWithFrame: <stripped>
	0x2eef0  @objc ColumnChartView..cxx_destruct <stripped>
 }

 class TeaCharts.LineChartStyler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LineChartStylerType {

	// Properties
	let styleManager : StyleManager<LineChartStyle> // +0x10 (0x8)

	// Swift methods
 }

 class TeaCharts.SparklineLoader : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SparklineLoaderType {

	// Properties
	let imageGenerator : LineImageGeneratorType // +0x10 (0x28)
	let imageGenerationQueue : OS_dispatch_queue // +0x38 (0x8)

	// Swift methods
 }

 enum TeaCharts.SparklineLoaderError {

	// Properties
	case unableToLoadImage  
 }

 struct TeaCharts.GridSetLayoutAttributes {

	// Properties
	let frame : CGRect // +0x0
	let insets : UIEdgeInsets // +0x20
	let gridLayoutAttributes : [GridLayoutAttributes] // +0x40
	let labelLayoutAttributes : [GridLabelLayoutAttributes] // +0x48
 }

 struct TeaCharts.SparklineModel {

	// Properties
	let coordinateSpace : CoordinateSpace<CategoryAxis, ValueAxis>
	let series : Series<CategoryDataPoint>
 }

 class TeaCharts.SparklineView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let imageView : UIImageView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x31260  @objc SparklineView.initWithCoder: <stripped>
	0x314a0  @objc SparklineView.initWithFrame: <stripped>
	0x315d0  @objc SparklineView.layoutSubviews <stripped>
	0x31710  @objc SparklineView..cxx_destruct <stripped>
 }

 class TeaCharts.LineSeriesAccessibilityElementProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let interactor : LineChartInteractor // +0x10 (0x8)
	var seriesElements : [Int : LineSeriesAccessibilityElement] // +0x18 (0x8)
	var currentZone : CategoryZone? // +0x20 (0x30)

	// Swift methods
 }

 struct TeaCharts.SparklineLayoutOptions {

	// Properties
	let layout : LayoutOptions // +0x0
 }

 struct TeaCharts.CategoryZone {

	// Properties
	let identifier : String // +0x0
	let fromCategory : String // +0x10
	let toCategory : String // +0x20
 }

 class TeaCharts.TapDragGestureRecognizer : UIGestureRecognizer /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var locations : LocationType // +0x8 (0x21)
	var minimumPressDuration : Double // +0x30 (0x8)
	let orientation : Orientation // +0x38 (0x1)
	var touches : Set<UITouch> // +0x40 (0x8)
	var timer : NSTimer? // +0x48 (0x8)

	// ObjC -> Swift bridged methods
	0x32d70  @objc TapDragGestureRecognizer.initWithCoder: <stripped>
	0x33ac0  @objc TapDragGestureRecognizer.touchesBegan:withEvent: <stripped>
	0x33c30  @objc TapDragGestureRecognizer.touchesMoved:withEvent: <stripped>
	0x33db0  @objc TapDragGestureRecognizer.touchesEnded:withEvent: <stripped>
	0x33f80  @objc TapDragGestureRecognizer.reset <stripped>
	0x34060  @objc TapDragGestureRecognizer.initWithTarget:action: <stripped>
	0x34110  @objc TapDragGestureRecognizer..cxx_destruct <stripped>

	// Swift methods
 }

 enum TeaCharts.LocationType {

	// Properties
	case single : CGPoint
	case double : (CGPoint, CGPoint)
 }

 struct TeaCharts.Stroke {

	// Properties
	let style : StrokeStyle // +0x0
	let width : CGFloat // +0x8
	let color : UIColor // +0x10
	let lineCap : LineCap // +0x18
 }

 struct TeaCharts.GridPathGeneratorOptions {

	// Properties
	let size : CGSize // +0x0
	let insets : UIEdgeInsets // +0x10
	let insetBehavior : GridInsetBehavior // +0x30
 }

 class TeaCharts.InteractionHandlerWrapper {
 class TeaCharts.GridPathGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib, GridPathGeneratorType {
	// Swift methods
 }

 struct TeaCharts.GridLayoutAttributes {

	// Properties
	let linePath : UIBezierPath // +0x0
 }

 class TeaCharts.LineSeriesAccessibilityElement : UIAccessibilityElement /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let series : Series<CategoryDataPoint> // +0x8 (0x18)
	let chartModel : LineChartModel // +0x0 (0x0)
	var interactor : weak LineChartInteractor? // +0x0 (0x8)
	var dataElements : [UIAccessibilityElement]? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x3a3e0  @objc LineSeriesAccessibilityElement.accessibilityFrame <stripped>
	0x3a5a0  @objc LineSeriesAccessibilityElement.setAccessibilityFrame: <stripped>
	0x3a5b0  @objc LineSeriesAccessibilityElement.tc_accessibilityDataSeriesName <stripped>
	0x3a910  @objc LineSeriesAccessibilityElement.tc_accessibilityDataSeriesValuesForAxis: <stripped>
	0x3a930  @objc LineSeriesAccessibilityElement.tc_accessibilityDataSeriesType <stripped>
	0x3a940  @objc LineSeriesAccessibilityElement.tc_accessibilityDataSeriesTitleForAxis: <stripped>
	0x3a990  @objc LineSeriesAccessibilityElement.tc_accessibilityDataSeriesMinimumValueForAxis: <stripped>
	0x3aa70  @objc LineSeriesAccessibilityElement.tc_accessibilityDataSeriesMaximumValueForAxis: <stripped>
	0x3ab60  @objc LineSeriesAccessibilityElement.tc_accessibilityDataSeriesSupportsSonification <stripped>
	0x3ab60  @objc LineSeriesAccessibilityElement.tc_accessibilityDataSeriesSupportsSummarization <stripped>
	0x3ab80  @objc LineSeriesAccessibilityElement.tc_accessibilityDataSeriesIncludesTrendlineInSonification <stripped>
	0x3ab90  @objc LineSeriesAccessibilityElement.tc_accessibilityDataSeriesSonificationDuration <stripped>
	0x3af40  @objc LineSeriesAccessibilityElement.tc_accessibilityDataSeriesValueDescriptionForPosition:axis: <stripped>
	0x3bae0  @objc LineSeriesAccessibilityElement.tc_accessibilityDataSeriesGridlinePositionsForAxis: <stripped>
	0x3cd10  @objc LineSeriesAccessibilityElement.initWithAccessibilityContainer: <stripped>
	0x3cdb0  @objc LineSeriesAccessibilityElement.init <stripped>
	0x3ce20  @objc LineSeriesAccessibilityElement..cxx_destruct <stripped>

	// Swift methods
	0x3bb90  func <stripped> // method 
	0x3bd60  func <stripped> // method 
	0x3be80  func <stripped> // method 
	0x3c8b0  func <stripped> // method 
 }

 struct TeaCharts.ValueAxis {

	// Properties
	let range : ClosedRange<Double> // +0x0
	let calculationModel : ValueAxisCalculationModelType // +0x10
	let grids : [Grid<Double>] // +0x38
 }

 struct TeaCharts.LineChartStyle {

	// Properties
	let lineStyles : [LineStyle] // +0x0
 }

 class TeaCharts.GridView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var gridLayers : [CAShapeLayer] // +0x8 (0x8)
	var labels : [UILabel] // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x40410  @objc GridView.initWithCoder: <stripped>
	0x40f00  @objc GridView.layoutSubviews <stripped>
	0x40fe0  @objc GridView.initWithFrame: <stripped>
	0x41060  @objc GridView..cxx_destruct <stripped>

	// Swift methods
	0x402b0  class func GridView.__allocating_init(numberOfGrids:numberOfLabels:) // init 
 }

 struct TeaCharts.LineChartImages {

	// Properties
	let default : UIImage? // +0x0
	let zones : [String : UIImage] // +0x8
 }

 class TeaCharts.LinePathGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LinePathGeneratorType {

	// Properties
	let coordinateProvider : LineChartCoordinateProvider // +0x10 (0x8)

	// Swift methods
	0x41c00  class func LinePathGenerator.__allocating_init(coordinateProvider:) // init 
 }

 class TeaCharts.LineStyle : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stroke : Stroke // +0x10 (0x19)
	let fill : Fill // +0x30 (0x9)
	let zoneStyles : LineStyle // +0x40 (0x8)

	// Swift methods
	0x42ca0  class func LineStyle.__allocating_init(stroke:fill:zoneStyles:) // init 
 }

 struct TeaCharts.AxisGridViewModelGeneratorOptions {

	// Properties
	let size : CGFloat // +0x0
	let traitCollection : UITraitCollection // +0x8
 }

 class TeaCharts.SparklineCoordinateProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SparklineCoordinateProviderType {

	// Properties
	let valueCoordinateCalculator : ValueCoordinateCalculatorType // +0x10 (0x28)
	let categoryCoordinateCalculator : CategoryCoordinateCalculatorType // +0x38 (0x28)

	// Swift methods
	0x43030  func <stripped> // method 
 }

 class TeaCharts.StyleManager {
 class TeaCharts.HighlightInteraction {
 enum TeaCharts.InteractionType {

	// Properties
	case single : A1
	case range : (A1, A1)
 }

 class TeaCharts.ZoneManager {
 enum TeaCharts.Fill {

	// Properties
	case color : UIColor
	case gradient : (colors: [UIColor])
 }

 class TeaCharts.ChartsAssembly : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x45460  @objc ChartsAssembly.init <stripped>
 }

 class TeaCharts.ChartLayoutAttributesFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ChartLayoutAttributesFactoryType {

	// Properties
	let gridLayoutAttributesFactory : GridLayoutAttributesFactoryType // +0x10 (0x28)

	// Swift methods
 }

 class TeaCharts.ColumnChartCoordinateProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class TeaCharts.LinearAxisCalculationModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x45bb0  class func LinearAxisCalculationModel.__allocating_init() // init 
 }

 struct TeaCharts.CategoryDataPoint {

	// Properties
	let category : String // +0x0
	let value : Double // +0x10
 }

 enum TeaCharts.CodingKeys {

	// Properties
	case category  
	case value  
 }

 class TeaCharts.ValueCoordinateCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ValueCoordinateCalculatorType {
	// Swift methods
 }

 struct TeaCharts.SparklineStyle {

	// Properties
	let identifier : String // +0x0
	let lineStyle : LineStyle // +0x10
 }

 class TeaCharts.GridViewStyler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, GridViewStylerType {
	// Swift methods
 }

 struct TeaCharts.ColumnChartOptions {

	// Properties
	let preferredWidthPerBar : CGFloat // +0x0
	let spacingBetweenSeries : CGFloat // +0x8
	let minimumSpacingBetweenCategories : CGFloat // +0x10
	let cornerRadius : CornerRadius // +0x18
 }

 class TeaCharts.LineZoneMaskProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LineZoneMaskProviderType {

	// Properties
	let coordinateProvider : LineChartCoordinateProvider // +0x10 (0x8)

	// Swift methods
 }

 struct TeaCharts.ColumnChartStyle {

	// Properties
	let columnStyles : [ColumnStyle] // +0x0
 }

 struct TeaCharts.CornerRadius {

	// Properties
	let corners : UIRectCorner // +0x0
	let radius : CGFloat // +0x8
 }

 class TeaCharts.ColumnChartRenderer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ColumnChartRendererType {

	// Properties
	let imageLoader : ColumnChartImageLoaderType // +0x10 (0x28)
	let animationSynchronizer : SynchronizerType // +0x38 (0x28)
	let reuseProtector : ObjectReuseProtector<UIView, UIImage> // +0x60 (0x8)

	// Swift methods
 }

 struct TeaCharts.ColumnStyle {

	// Properties
	let backgroundColor : UIColor // +0x0
 }

 enum TeaCharts.InteractionType {

	// Properties
	case highlight : HighlightInteraction<A>
 }

 enum TeaCharts.StrokeStyle {

	// Properties
	case dashed : (pattern: [Int])
	case solid  
 }

 class TeaCharts.LineChartCoordinateProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let valueCoordinateCalculator : ValueCoordinateCalculatorType // +0x10 (0x28)
	let categoryCoordinateCalculator : CategoryCoordinateCalculatorType // +0x38 (0x28)
	var coordinateSpace : CoordinateSpace<CategoryAxis, ValueAxis>? // +0x0 (0x0)
	var size : CGSize? // +0x0 (0x11)

	// Swift methods
 }

 class TeaCharts.ColumnChartViewProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let renderer : ColumnChartRendererType // +0x10 (0x28)
	let styler : ColumnChartStylerType // +0x38 (0x28)

	// Swift methods
 }

 struct TeaCharts.Grid {

	// Properties
	let type : GridType<A>
	let style : GridStyle
	let label : GridLabel<A>
 }

 struct TeaCharts.ChartLayoutAttributes {

	// Properties
	let chartFrame : CGRect // +0x0
	let gridSetLayoutAttributes : GridSetLayoutAttributes // +0x20
 }
