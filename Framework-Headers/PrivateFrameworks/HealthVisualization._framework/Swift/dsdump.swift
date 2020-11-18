 protocol HealthVisualization.QueryConfigurationOverrides // 1 requirements
 {
	// getter
 }
 protocol HealthVisualization.DiagramImageViewDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol HealthVisualization.ObjectTypeIdentifiable // 1 requirements
 {
	// getter
 }
 protocol HealthVisualization.InsightCalculator // 2 requirements
 {
	// getter
	// method
 }
 protocol HealthVisualization.PluginFeedItemProducing // 1 requirements
 {
	// getter
 }
 protocol HealthVisualization.PluginFeedItemCollectionProducing // 1 requirements
 {
	// getter
 }
 protocol HealthVisualization.QueryQualityOfServiceProviding // 1 requirements
 {
	// getter
 }
 protocol HealthVisualization.ResultProducing // 2 requirements
 {
	// class associated type access function
	// getter
 }
 protocol HealthVisualization.InsightResponseProducingOperation // 1 requirements
 {
	// getter
 }
 protocol HealthVisualization.DisplayTypeProviding // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol HealthVisualization.ModelCache // 7 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// getter
	// method
	// method
	// method
 }
 protocol HealthVisualization.OperationStateSignpostObserving // 2 requirements
 {
	// method
	// method
 }
 protocol HealthVisualization.RecoverableInforming // 1 requirements
 {
	// getter
 }
 protocol HealthVisualization.HealthStoreProviding // 1 requirements
 {
	// getter
 }
 protocol HealthVisualization.DisplayCategoryProviding // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol HealthVisualization.ValueConverter // 3 requirements
 {
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol HealthVisualization.DiagramAxisMetricsProviding // 1 requirements
 {
	// method
 }
 protocol HealthVisualization.DiagramAxisMetricsCalculatorProducing // 1 requirements
 {
	// method
 }
 protocol HealthVisualization.DiagramGenerator // 3 requirements
 {
	// getter
	// getter
	// getter
 }
 protocol HealthVisualization.InsightValueObservable // 1 requirements
 {
	// method
 }
 protocol HealthVisualization.QuantityTypeProviding // 1 requirements
 {
	// getter
 }
 protocol HealthVisualization.ChartContextProducing // 1 requirements
 {
	// getter
 }
 protocol HealthVisualization.InsightCalculatorOperationDataProvider // 1 requirements
 {
	// method
 }
 protocol HealthVisualization.InsightCalculatorOperation // 4 requirements
 {
	// class base protocol
	// getter
	// setter
	// modify coroutine
 }
 protocol HealthVisualization.FileLoadable // 4 requirements
 {
	// getter
	// getter
	// getter
	// method
 }
 protocol HealthVisualization.QuantityTypeIdentifiable // 1 requirements
 {
	// class base protocol
 }
 protocol HealthVisualization.PluginFeedItemsConsuming // 1 requirements
 {
	// method
 }
 protocol HealthVisualization.InsightTextSupport // 6 requirements
 {
	// class base protocol
	// class base protocol
	// getter
	// class init
	// getter
	// getter
 }
 protocol HealthVisualization.ItemDetailDataProviding // 2 requirements
 {
	// method
	// method
 }
 protocol HealthVisualization.AnchoredChangeSetProviding // 1 requirements
 {
	// getter
 }
 protocol HealthVisualization.DatabaseChangesProducing // 2 requirements
 {
	// method
	// method
 }
 protocol HealthVisualization.OnlineValueConverter // 4 requirements
 {
	// class associated type access function
	// getter
	// getter
	// method
 }

 struct __C.UILayoutPriority {

	// Properties
	let rawValue : Float
 }

 enum __C.HKAxisLabelType { }

 struct __C.CGAffineTransform {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var a : ù°
WARNING: couldn't find address 0x0 (0x0) in binary!
	var b : ù°
WARNING: couldn't find address 0x0 (0x0) in binary!
	var c : ù°
WARNING: couldn't find address 0x0 (0x0) in binary!
	var d : ù°
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tx : ù°
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ty : ù°
 }

 enum __C.QualityOfService { }

 enum __C.ComparisonResult { }

 enum __C._HKQuantityDistributionStyle { }

 struct __C.Options {

	// Properties
	let rawValue : UInt
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : ù°
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ù°
 }

 class __C.CGContext {
 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ù°
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ù°
 }

 struct __C.UIEdgeInsets {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var top : ù°
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : ù°
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : ù°
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : ù°
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.SymbolicTraits {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : cº
 }

 struct __C.HKQuantityTypeIdentifier {

	// Properties
	var _rawValue : NSString
 }

 enum __C.HKDisplayTypeIdentifier { }

 class __C.CGColor {
 struct HealthVisualization.SnippetConfiguration {

	// Properties
	let currentValueQueryConfig : QueryConfiguration // +0x0
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case currentValueQueryConfig  
 }

 class HealthVisualization.InsightService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let insightCalculatorFactory : InsightCalculatorFactory // +0x10 (0x8)
	let operationQueue : NSOperationQueue // +0x18 (0x8)
	let serialQueue : OS_dispatch_queue // +0x20 (0x8)
	let healthStore : HKHealthStore // +0x28 (0x8)

	// Swift methods
	0x57a0  func InsightService.generateInsights(requests:) // method 
 }

 enum HealthVisualization.InsightServiceError {

	// Properties
	case deallocatedBeforeFinishedProcessing  
 }

 struct HealthVisualization.SleepQueryConfiguration {

	// Properties
	let dateRange : DateRange // +0x0
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case dateRange  
 }

 class HealthVisualization.AverageValueStatsCollectionConverter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let unit : HKUnit // +0x10 (0x8)

	// Swift methods
	0x8d40  class func AverageValueStatsCollectionConverter.__allocating_init(unit:) // init 
	0x8d80  func AverageValueStatsCollectionConverter.convert(from:) // method 
 }

 class HealthVisualization.InsightCalculatorFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthVisualization.OnlineMonotonicTrendConverter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var endAggregateIndexUnderConsideration : Int // +0x10 (0x8)
	var nextAggregateIndexNeeded : Int // +0x18 (0x8)
	let configuration : TrendConfiguration // +0x20 (0x19)
	var currentValues : InsightValue // +0x40 (0x8)
	var currentDirection : ComparisonResult // +0x48 (0x8)

	// Swift methods
	0x9be0  func <stripped> // method 
	0xa120  func <stripped> // method 
	0xa7c0  func <stripped> // method 
 }

 class HealthVisualization.DiagramDistribution : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let configuration : Distribution // +0x10 (0x4d)
	let data : DiagramData // +0x60 (0x30)
	let minMaxParameters : DiagramDistributionMinMax // +0x90 (0xc0)
	let maxPointItems : DiagramDistributionPoints // +0x150 (0x18)
	let minPointItems : DiagramDistributionPoints // +0x168 (0x18)
	let axisHandler : DiagramAxis // +0x180 (0x8)

	// Swift methods
	0xb4c0  func <stripped> // getter 
	0xcaa0  func <stripped> // method 
 }

 struct HealthVisualization.DiagramDistributionPoints {

	// Properties
	let pointAnnotations : CGPoint // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let linePadding : ù° // +0x8
	let valueAttributes : Key // +0x10
 }

 struct HealthVisualization.DiagramDistributionMinMax {

	// Properties
	let minLabelString : String // +0x0
	let maxLabelString : String // +0x10
	let minValueString : String // +0x20
	let maxValueString : String // +0x30
	let minLabelSize : CGSize // +0x40
	let maxLabelSize : CGSize // +0x50
	let minValueSize : CGSize // +0x60
	let maxValueSize : CGSize // +0x70
	let minPoint : CGPoint // +0x80
	let maxPoint : CGPoint // +0x98
	let labelAttributes : Key // +0xb0
	let valueAttributes : Key // +0xb8
 }

 class HealthVisualization.Localization : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var localizationBundleTable : [NSBundle : String] // +0x10 (0x8)
	let defaultLocalizationFile : String // +0x18 (0x10)

	// Swift methods
	0x12290  class func static Localization.localize(_:substitutions:mySelf:) // method 
	0x12300  class func static Localization.localize(_:substitutions:mySelf:tableName:) // method 
	0x12370  class func static Localization.localize(stringsDictKey:stringsDictFormatArguments:substitutions:mySelf:tableName:) // method 
	0x123f0  class func static Localization.registerLocalization(classForBundle:localizationFile:) // method 
	0x12510  func <stripped> // method 
	0x126f0  func <stripped> // method 
	0x12b90  func <stripped> // method 
	0x13090  func <stripped> // method 
 }

 struct HealthVisualization.ObjectTypeConfiguration {

	// Properties
	let identifier : String // +0x0
	let numericalFormatting : NumericalFormatting // +0x10
	let snippetConfig : SnippetConfiguration // +0x18
	let insightConfigs : InsightConfiguration // +0x38
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case identifier  
	case numericalFormatting  
	case snippetConfig  
	case insightConfigs  
 }

 class HealthVisualization.SampleQueryOperation {
 struct HealthVisualization.InsightRequest {

	// Properties
	let objectTypeIdentifier : String // +0x0
	let configuration : InsightConfiguration // +0x10
	let operationName : String // +0xd0
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case objectTypeIdentifier  
	case configuration  
	case operationName  
 }

 struct HealthVisualization.AudiogramQueryConfiguration {

	// Properties
	let mostRecentSample : MostRecentSampleQueryConfiguration // +0x0
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case mostRecentSample  
 }

 class HealthVisualization.AllInsightsDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x1bcd0  func AllInsightsDataSourceProvider.selectedDataSources(for:) // method 
	0x1bf80  func <stripped> // method 
	0x1c2c0  func <stripped> // method 
 }

 struct HealthVisualization.AudioExposureStatistics {

	// Properties
	let leqValue : Double
	let leqUnitString : String
	let secondsListened : Double
	let daysAggregated : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lastUpdated : õ§
 }

 class HealthVisualization.AudioExposureStatisticsQueryOperation : type metadata for AsynchronousOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var resultHandler :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var underlyingResult : Ñ³
	let quantityType : HKQuantityType
	let queryConfig : StatisticsQueryConfiguration
	let queryConfigOverrides : StatisticsQueryConfigurationOverrides
	let queryQualityOfService : QualityOfService
	let healthStore : HKHealthStore
	let operationQueue : NSOperationQueue
	var $__lazy_storage_$_statisticsQueryOperation : StatisticsQueryOperation
	var $__lazy_storage_$_resultDeliveryOperation : NSOperation?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let audioExposureResult : Ñ³

	// ObjC -> Swift bridged methods
	0x1e4a0  @objc AudioExposureStatisticsQueryOperation.main <stripped>
	0x1e820  @objc AudioExposureStatisticsQueryOperation.init <stripped>
	0x1e720  @objc AudioExposureStatisticsQueryOperation..cxx_destruct <stripped>

	// Swift methods
	0x1ddf0  class func AudioExposureStatisticsQueryOperation.__allocating_init(quantityType:operationQueue:queryConfiguration:queryConfigurationOverrides:name:queryQualityOfService:healthStore:resultHandler:) // init 
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case leqValue  
	case leqUnitString  
	case secondsListened  
	case daysAggregated  
	case lastUpdated  
 }

 struct HealthVisualization.StatisticsQueryConfiguration {

	// Properties
	let dateRange : DateRange // +0x0
	let statisticsOptions : StatisticsOption // +0x8
	let anchorDate : AnchorDate // +0x10
	let aggregationInterval : StatisticsInterval // +0x11
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case dateRange  
	case statisticsOptions  
	case anchorDate  
	case aggregationInterval  
 }

 class HealthVisualization.MostRecentTimePeriodQueryOperation {
 class HealthVisualization.DiagramImageView : UIImageView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var imageRenderer : UIGraphicsImageRenderer? // +0x8 (0x8)
	var delegate : DiagramImageViewDelegate // +0x10 (0x10)
	var lastUsedTransformer : DiagramTransformer // +0x20 (0x38)
	var lastUsedModelSpace : CGRect // +0x58 (0x21)

	// ObjC -> Swift bridged methods
	0x261d0  @objc DiagramImageView.intrinsicContentSize <stripped>
	0x26210  @objc DiagramImageView.frame <stripped>
	0x26250  @objc DiagramImageView.setFrame: <stripped>
	0x26290  @objc DiagramImageView.bounds <stripped>
	0x26370  @objc DiagramImageView.setBounds: <stripped>
	0x26920  @objc DiagramImageView.initWithFrame: <stripped>
	0x269c0  @objc DiagramImageView.initWithCoder: <stripped>
	0x26e20  @objc DiagramImageView.traitCollectionDidChange: <stripped>
	0x27e70  @objc DiagramImageView.initWithImage: <stripped>
	0x27f20  @objc DiagramImageView.initWithImage:highlightedImage: <stripped>
	0x27d90  @objc DiagramImageView..cxx_destruct <stripped>

	// Swift methods
	0x25dd0  func DiagramImageView.delegate.getter // getter 
	0x25e10  func DiagramImageView.delegate.setter // setter 
	0x25e70  func DiagramImageView.delegate.modify // modifyCoroutine 
	0x25f60  func DiagramImageView.lastUsedTransformer.getter // getter 
	0x26010  func DiagramImageView.lastUsedTransformer.setter // setter 
	0x260b0  func DiagramImageView.lastUsedTransformer.modify // modifyCoroutine 
	0x260f0  func DiagramImageView.lastUsedModelSpace.getter // getter 
	0x26140  func DiagramImageView.lastUsedModelSpace.setter // setter 
	0x26180  func DiagramImageView.lastUsedModelSpace.modify // modifyCoroutine 
	0x26ae0  func <stripped> // method 
	0x26e70  func DiagramImageView.drawContent(modelSpace:screenInsets:drawingBlock:) // method 
 }

 struct HealthVisualization.DiagramTransformer {

	// Properties
	let context : CGContext // +0x0
	let transform : CGAffineTransform // +0x8
 }

 struct HealthVisualization.DiagramAxisLabel {

	// Properties
	let text : String? // +0x0
	let location : Double // +0x10
	let type : HKAxisLabelType // +0x18
	let priority : UILayoutPriority // +0x20
 }

 struct HealthVisualization.DiagramAxisMetrics {

	// Properties
	let labels : DiagramAxisLabel // +0x0
	let adjustedModelCoordinateRange : ClosedRange<Double> // +0x8
 }

 enum HealthVisualization.BinningStrategy {

	// Properties
	case value : (binWidth: Double)
	case hourOfDay  
	case dayOfWeek  
	case weekOfYear  
	case monthOfYear  
 }

 enum HealthVisualization.Base {

	// Properties
	case value  
	case hourOfDay  
	case dayOfWeek  
	case weekOfYear  
	case monthOfYear  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case type  
	case binWidth  
 }

 struct HealthVisualization.OutlierConfiguration {

	// Properties
	let minimumElementsRequired : Int // +0x0
	let iqrAwayFromQuartile : Double // +0x8
	let rangeToTest : StatisticsInterval // +0x10
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case minimumElementsRequired  
	case iqrAwayFromQuartile  
	case rangeToTest  
 }

 enum HealthVisualization.DateRange {

	// Properties
	case unspecified  
	case allTime  
	case today  
	case rollingWeek  
	case rollingMonth  
 }

 class HealthVisualization.LinearRegressionConverter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x2d000  func LinearRegressionConverter.convert(from:) // method 
 }

 struct HealthVisualization.QuantityDistributionConfigurationOverrides {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var dateInterval : í¢
	var predicate : NSPredicate?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var histogramWidth : 5£
 }

 enum HealthVisualization.ResultProducingError {

	// Properties
	case notStarted  
	case notFinished  
	case canceled  
 }

 class HealthVisualization.OnlineInsightService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let requests : InsightRequest // +0x10 (0x8)
	let healthStore : HKHealthStore // +0x18 (0x8)
	let operationQueue : NSOperationQueue // +0x20 (0x8)

	// Swift methods
	0x2e800  func OnlineInsightService.generateInsights() // method 
	0x2eb90  func <stripped> // method 
 }

 class HealthVisualization.DiagramAxisMetricsCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let axisLabelDimension : HKAxisLabelDimension // +0x10 (0x8)
	let maximumLabelCount : Int // +0x18 (0x8)
	let calculator : DiagramAxisLabel // +0x20 (0x10)

	// Swift methods
	0x2f2c0  class func DiagramAxisMetricsCalculator.__allocating_init(axisLabelDimension:maximumLabelCount:calculator:) // init 
	0x2f340  func DiagramAxisMetricsCalculator.axisMetrics(for:customLocations:) // method 
 }

 enum HealthVisualization.Constants { }

 struct HealthVisualization.TrendResult {

	// Properties
	let type : TrendType
	let points : InsightValue
	let fit : InsightFitLine
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateInterval : á¡
 }

 enum HealthVisualization.TrendType {

	// Properties
	case positive  
	case negative  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case type  
	case points  
	case fit  
	case dateInterval  
 }

 struct HealthVisualization.DistributionResult {

	// Properties
	let bins : [Double]
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interval : á¡
 }

 struct HealthVisualization.DiagramDataGroup {

	// Properties
	let points : CGPoint // +0x0
	let annotation : String? // +0x8
 }

 enum HealthVisualization.DiagramDataKey {

	// Properties
	case content  
	case highlightedContent  
	case referenceLine  
 }

 struct HealthVisualization.DiagramData {

	// Properties
	let dataModelSpace : CGRect // +0x0
	let dataGroups : DiagramDataKey // +0x28
 }

 class HealthVisualization.DiagramFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x332c0  class func DiagramFactory.__allocating_init() // init 
	0x332f0  func DiagramFactory.drawDiagram(diagramImageView:diagramData:configuration:) // method 
	0x333f0  func <stripped> // method 
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case dataModelSpace  
	case dataGroups  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case points  
	case annotation  
 }

 class HealthVisualization.ChartPointStatsCollectionConverter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let unit : HKUnit // +0x10 (0x8)
	let statisticsOption : StatisticsOption // +0x18 (0x1)

	// Swift methods
	0x36690  class func ChartPointStatsCollectionConverter.__allocating_init(unit:statisticsOption:) // init 
	0x366e0  func ChartPointStatsCollectionConverter.convert(from:) // method 
 }

 enum HealthVisualization.InsightVariant {

	// Properties
	case streak  
	case trend  
	case outlier  
	case timehop  
	case distribution  
 }

 struct HealthVisualization.HighlightCalendarViewModel {

	// Properties
	let weekViewModels : HighlightCalendarWeekViewModel // +0x0
	let longWeekdayStrings : [String]? // +0x8
	let shortWeekdayStrings : [String]? // +0x10
	let showsSeparatorBetweenHeaderAndWeeks : Bool // +0x18
 }

 struct HealthVisualization.HighlightCalendarWeekViewModel {

	// Properties
	let dayViewModels : HighlightCalendarDayViewModel // +0x0
 }

 struct HealthVisualization.HighlightCalendarDayViewModel {

	// Properties
	let monthText : String
	let hideMonthText : Bool
	let circleState : CircleState
	let accentColor : UIColor
	let backgroundColor : UIColor
	let dayTextColor : UIColor?
	let alternateDayTextColorWhenUnselected : UIColor?
	let dayNumberSize : NumberSize
	let circleSize : CircleSize
	let axProjectionState : AXProjectionState
 }

 enum HealthVisualization.CircleState {

	// Properties
	case activityRings : (activitySummary: HKActivitySummary)
	case filled : (text: String)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case filledToday :  first-element-marker 
	case unfilled : (text: String)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case unfilledToday :  first-element-marker 
	case empty  
 }

 enum HealthVisualization.Constants { }

 enum HealthVisualization.NumberSize {

	// Properties
	case small  
	case smallDeemphasized  
	case large  
 }

 enum HealthVisualization.CircleSize {

	// Properties
	case small  
	case large  
 }

 enum HealthVisualization.AXProbability { }

 enum HealthVisualization.AXCircleState { }

 struct HealthVisualization.AXProjectionState {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let axDate : õ§
	let axProbability : AXProbability
	let axProjectionKind : String?
 }

 enum HealthVisualization.InsightCharacteristicKey {

	// Properties
	case min  
	case max  
	case first  
	case last  
	case count  
	case linearFitGradient  
	case linearFitIntercept  
 }

 enum HealthVisualization.InsightCharacteristicValue {

	// Properties
	case double : (value: Double)
	case int : (value: Int)
	case string : (value: String)
 }

 enum HealthVisualization.Base {

	// Properties
	case double  
	case int  
	case string  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case type  
	case value  
 }

 struct HealthVisualization.InsightFitLine {

	// Properties
	let gradient : Double // +0x0
	let intercept : Double // +0x8
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case gradient  
	case intercept  
 }

 class HealthVisualization.ConfigurationCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var cachedModels : ObjectTypeConfiguration // +0x10 (0x8)
	let fileName : String // +0x18 (0x10)
	let fileExtension : String // +0x28 (0x10)
	let bundle : NSBundle // +0x38 (0x8)

	// Swift methods
 }

 class HealthVisualization.HighlightCalendarView : NUIContainerGridView /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI {

	// Properties
	var longWeekdayStrings : [String]? // +0x8 (0x8)
	var shortWeekdayStrings : [String]? // +0x10 (0x8)
	var $__lazy_storage_$_ringsRenderer : ARUIRingsViewRenderer? // +0x18 (0x8)
	var weekdayLabels : [UILabel] // +0x20 (0x8)
	var monthLabels : [UILabel] // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x3fe50  @objc HighlightCalendarView.initWithCoder: <stripped>
	0x41060  @objc HighlightCalendarView.traitCollectionDidChange: <stripped>
	0x42160  @objc HighlightCalendarView.initWithFrame: <stripped>
	0x42230  @objc HighlightCalendarView.initWithArrangedSubviewRows: <stripped>
	0x42050  @objc HighlightCalendarView..cxx_destruct <stripped>

	// Swift methods
	0x3fe70  class func HighlightCalendarView.__allocating_init(model:) // init 
	0x410b0  func <stripped> // method 
	0x41410  func <stripped> // method 
	0x41c10  func <stripped> // method 
 }

 class HealthVisualization.StatisticsQueryOperation : type metadata for AsynchronousOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var underlyingResult : m³ // +0x30 (0x8)
	let sampleType : HKSampleType // +0x38 (0x8)
	let configuration : StatisticsQueryConfiguration // +0x40 (0x12)
	let configurationOverrides : StatisticsQueryConfigurationOverrides // +0x6 (0x0)
	let queryQualityOfService : QualityOfService // +0x74735f5f (0x8)
	let healthStore : HKHealthStore // +0x80000408 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let resultHandler :  empty-list  // +0x65706c65 (0x10)
	var $__lazy_storage_$_query : HKStatisticsQuery? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x45970  @objc StatisticsQueryOperation.main <stripped>
	0x45b60  @objc StatisticsQueryOperation.init <stripped>
	0x45c50  @objc StatisticsQueryOperation..cxx_destruct <stripped>

	// Swift methods
	0x455e0  func StatisticsQueryOperation.result.getter // getter 
	0x45430  class func StatisticsQueryOperation.__allocating_init(sampleType:configuration:configurationOverrides:name:queryQualityOfService:healthStore:resultHandler:) // init 
 }

 class HealthVisualization.DateDistributionCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let variant : InsightVariant // +0x10 (0x1)
	let configuration : DistributionConfiguration // +0x18 (0x9)

	// Swift methods
	0x46d50  func <stripped> // method 
 }

 enum HealthVisualization.Errors {

	// Properties
	case unsupportedBinningStrategy : BinningStrategy
 }

 struct HealthVisualization.InsightValue {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateInterval : á¡
	let value : Double?
	let valueType : ValueType
 }

 enum HealthVisualization.ValueType {

	// Properties
	case inferred : MissingDataConfiguration
	case original  
 }

 enum HealthVisualization.Base {

	// Properties
	case original  
	case inferred  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case type  
	case using  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case dateInterval  
	case value  
	case valueType  
 }

 class HealthVisualization.AllInsightsSectionHeaderView : UICollectionReusableView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var titleLabel : weak UILabel? // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var item : Ù› // +0x10 (0x28)

	// ObjC -> Swift bridged methods
	0x4b840  @objc AllInsightsSectionHeaderView.titleLabel <stripped>
	0x4b860  @objc AllInsightsSectionHeaderView.setTitleLabel: <stripped>
	0x4bed0  @objc AllInsightsSectionHeaderView.initWithFrame: <stripped>
	0x4c000  @objc AllInsightsSectionHeaderView.initWithCoder: <stripped>
	0x4bd50  @objc AllInsightsSectionHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x4b9f0  func AllInsightsSectionHeaderView.item.getter // getter 
	0x4ba90  func AllInsightsSectionHeaderView.item.setter // setter 
	0x4bb90  func AllInsightsSectionHeaderView.item.modify // modifyCoroutine 
 }

 struct HealthVisualization.AllInsightsSectionHeaderItem {

	// Properties
	var reuseIdentifier : String // +0x0
	var title : String? // +0x10
 }

 class HealthVisualization.AggregateInsightResponseProducerOperation : type metadata for AsyncOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var responses : InsightResponse // +0x18 (0x8)
	let requests : InsightRequest // +0x20 (0x8)
	let healthStore : HKHealthStore // +0x28 (0x8)
	let eventHorizonCalculation : StatisticsInterval // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x4ce20  @objc AggregateInsightResponseProducerOperation.main <stripped>
	0x4ce50  @objc AggregateInsightResponseProducerOperation.init <stripped>
	0x4cf00  @objc AggregateInsightResponseProducerOperation..cxx_destruct <stripped>

	// Swift methods
 }

 struct HealthVisualization.MostRecentSampleQueryConfiguration {

	// Properties
	let valueOverrideLocalizedStringKey : String? // +0x0
	let forceDayGranularity : Bool // +0x10
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case valueOverrideLocalizedStringKey  
	case forceDayGranularity  
 }

 enum HealthVisualization.NumericalFormatting {

	// Properties
	case decimalStandard  
	case decimalInteger  
	case decimalMinPrecision  
	case decimalLowPrecision  
	case decimalMediumPrecision  
	case decimalSignificantFour  
 }

 class HealthVisualization.SleepQueryOperation : type metadata for AsynchronousOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var underlyingResult : M³ // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateInterval : á¡ // +0x80000400 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let calendar : wš // +0x6f635f5f (0x0)
	let healthStore : HKHealthStore // +0x0 (0x8)
	let queryQualityOfService : QualityOfService // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let resultHandler :  empty-list  // +0x45545f5f (0x10)
	var $__lazy_storage_$_query : HKQuery? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x4f330  @objc SleepQueryOperation.main <stripped>
	0x4f6b0  @objc SleepQueryOperation.init <stripped>
	0x4f5d0  @objc SleepQueryOperation..cxx_destruct <stripped>

	// Swift methods
	0x4ec90  func SleepQueryOperation.result.getter // getter 
	0x4ece0  class func SleepQueryOperation.__allocating_init(dateInterval:calendar:name:queryQualityOfService:healthStore:resultHandler:) // init 
 }

 struct HealthVisualization.TimehopConfiguration {

	// Properties
	let lookbackInterval : StatisticsInterval // +0x0
	let lookbackWindow : Int // +0x8
	let minimumThreshold : InsightThreshold // +0x10
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case lookbackInterval  
	case lookbackWindow  
	case minimumThreshold  
 }

 struct HealthVisualization.StreakConfiguration {

	// Properties
	let upperBound : InsightThreshold // +0x0
	let lowerBound : InsightThreshold // +0x10
	let minimumDuration : Int // +0x20
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case upperBound  
	case lowerBound  
	case minimumDuration  
 }

 enum HealthVisualization.DiagramAxisMetricsOrientation {

	// Properties
	case horizontalAxis  
	case verticalAxis  
 }

 class HealthVisualization.DiagramAxisMetricsCalculatorFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, DiagramAxisMetricsCalculatorProducing {
	// Swift methods
	0x51dd0  class func DiagramAxisMetricsCalculatorFactory.__allocating_init() // init 
	0x51e00  func DiagramAxisMetricsCalculatorFactory.diagramAxisMetricsCalculator(for:orientation:) // method 
 }

 class HealthVisualization.HiLoScalarAxisDimension : HKAxisLabelDimensionScalar /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let displayType : HKDisplayType? // +0x8 (0x8)
	let valueFormatter : HKDisplayTypeValueFormatter? // +0x10 (0x8)
	let unitPreferenceController : HKUnitPreferenceController? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x52390  @objc HiLoScalarAxisDimension.stringForLocation: <stripped>
	0x524a0  @objc HiLoScalarAxisDimension.init <stripped>
	0x52450  @objc HiLoScalarAxisDimension..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthVisualization.InsightQueryManager : NSObject /usr/lib/libobjc.A.dylib, InsightValueObservable {

	// Properties
	let healthStore : HKHealthStore
	let request : InsightRequest
WARNING: couldn't find address 0x0 (0x0) in binary!
	let currentDate : õ§
	let operationQueue : NSOperationQueue
	let serialQueue : OS_dispatch_queue
	var $__lazy_storage_$_insightValueObjectCache : InsightValueObject
	var $__lazy_storage_$_pendingQueryOperations : StatisticsCollectionQueryOperation
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_computedPageDateIntervals : ClosedRange<Int>

	// ObjC -> Swift bridged methods
	0x52b10  @objc InsightQueryManager.init <stripped>
	0x52b90  @objc InsightQueryManager..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthVisualization.InsightValueObject : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let boxedValue : InsightValue

	// ObjC -> Swift bridged methods
	0x52ae0  @objc InsightValueObject.init <stripped>
	0x52ac0  @objc InsightValueObject..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthVisualization.DiagramBanner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let bannerConfig : Banner // +0x10 (0x11)
	let bannerData : DiagramData // +0x28 (0x30)

	// Swift methods
 }

 class HealthVisualization.AllInsightsViewController : type metadata for DataTypeDetailViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {
	// ObjC -> Swift bridged methods
	0x53620  @objc AllInsightsViewController.viewDidLoad <stripped>
	0x53710  @objc AllInsightsViewController.initWithCoder: <stripped>
	0x53800  @objc AllInsightsViewController.initWithCollectionViewLayout: <stripped>
	0x53940  @objc AllInsightsViewController.initWithNibName:bundle: <stripped>
 }

 enum HealthVisualization.Constants { }

 class HealthVisualization.TrendCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let variant : InsightVariant // +0x10 (0x1)
	let configuration : TrendConfiguration // +0x18 (0x19)

	// Swift methods
	0x54120  func <stripped> // method 
 }

 enum HealthVisualization.Errors {

	// Properties
	case unsupportedAggregationInterval : StatisticsInterval
 }

 class HealthVisualization.MostRecentSampleQueryOperationCore {
 class HealthVisualization.MostRecentSampleQueryOperation {
 enum HealthVisualization.MissingDataConfiguration {

	// Properties
	case interpolate : (upTo: UInt)
	case invalidate  
	case assumeZero  
 }

 enum HealthVisualization.Base {

	// Properties
	case interpolate  
	case assumeZero  
	case invalidate  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case type  
	case upTo  
 }

 struct HealthVisualization.TrendConfiguration {

	// Properties
	let initialWindowLength : Int // +0x0
	let windowExtension : Int // +0x8
	let percentageOfFreedom : Double // +0x10
	let proveStatistically : Bool // +0x18
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case initialWindowLength  
	case windowExtension  
	case percentageOfFreedom  
	case proveStatistically  
 }

 class HealthVisualization.InsightResponseProducerOperation : type metadata for AsyncOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var responses : InsightResponse // +0x18 (0x8)
	let request : InsightRequest // +0x20 (0xe0)
	let queryManager : InsightValueObservable // +0x100 (0x28)
	let aggregateIndexEventHorizon : Int // +0x128 (0x8)
	let calculatorFactory : InsightCalculatorOperationFactory // +0x130 (0x8)

	// ObjC -> Swift bridged methods
	0x5a6f0  @objc InsightResponseProducerOperation.main <stripped>
	0x5a750  @objc InsightResponseProducerOperation.init <stripped>
	0x5a820  @objc InsightResponseProducerOperation..cxx_destruct <stripped>

	// Swift methods
 }

 struct HealthVisualization.AudioExposureQueryConfiguration {

	// Properties
	let statistics : StatisticsQueryConfiguration // +0x0
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case statistics  
 }

 enum HealthVisualization.ChangeDetectorError {

	// Properties
	case alreadyRunning  
	case notReady  
	case stopped  
	case unknown  
 }

 struct HealthVisualization.AnchoredChangeSet {

	// Properties
	let changes : [HKSampleType : HKSampleTypeChange] // +0x0
	let newAnchor : HKQueryAnchor? // +0x8
 }

 class HealthVisualization.ChangeDetector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let healthStore : HKHealthStore // +0x10 (0x8)
	let name : String // +0x18 (0x10)
	let types : [HKSampleType] // +0x28 (0x8)
	let anchor : HKQueryAnchor? // +0x30 (0x8)
	let includeChangeDetails : Bool // +0x38 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var state : +³ // +0x40 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateHandler : o– // +0x48 (0x8)
	let submissionQueue : OS_dispatch_queue // +0x50 (0x8)
	var query : _HKDatabaseChangesQuery? // +0x58 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : Ç• // +0x60 (0x8)

	// Swift methods
	0x5b5b0  class func ChangeDetector.__allocating_init(healthStore:name:types:anchor:includeChangeDetails:updateHandler:) // init 
	0x5b6d0  func ChangeDetector.start() // method 
	0x5b880  func <stripped> // method 
	0x5bf70  func ChangeDetector.stop() // method 
	0x5c080  class func static ChangeDetector.Operation(for:anchor:healthStore:waitForChanges:includeChangeDetails:) // method 
 }

 enum HealthVisualization.State {

	// Properties
	case initialized  
	case running  
	case stopped  
 }

 struct HealthVisualization.SampleCountQueryConfiguration { }

 enum HealthVisualization.CodingKeys { }

 enum HealthVisualization.QueryConfiguration {

	// Properties
	case statistics : StatisticsQueryConfiguration
	case correlatedStatistics : CorrelatedStatisticsQueryConfiguration
	case sleep : SleepQueryConfiguration
	case mostRecentSample : MostRecentSampleQueryConfiguration
	case audioExposure : AudioExposureQueryConfiguration
	case audiogram : AudiogramQueryConfiguration
	case mostRecentTimePeriod  
	case activitySummary  
	case sampleCount  
	case standHours  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case statistics  
	case correlatedStatistics  
	case sleep  
	case mostRecentTimePeriod  
	case mostRecentSample  
	case activitySummary  
	case audioExposure  
	case audiogram  
	case sampleCount  
	case standHours  
 }

 class HealthVisualization.DiagramAxis : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var horizontalMetrics : DiagramAxisMetrics // +0x10 (0x18)
	var verticalMetrics : DiagramAxisMetrics // +0x28 (0x18)
	let axisConfiguration : Axis // +0x40 (0xc)
	let originalModelSpace : CGRect // +0x50 (0x20)
	let originalEdgeInsets : UIEdgeInsets // +0x70 (0x21)
	let innerAxisInsets : CGSize // +0x98 (0x11)

	// Swift methods
	0x5f1b0  func <stripped> // method 
	0x5f280  func <stripped> // method 
	0x5f670  func <stripped> // method 
	0x5f800  func <stripped> // method 
	0x60290  func <stripped> // method 
 }

 struct HealthVisualization.InsightConfiguration {

	// Properties
	let aggregatedDataQueryConfig : StatisticsQueryConfiguration // +0x0
	let missingDataConfig : MissingDataConfiguration // +0x18
	let requestedTrends : TrendConfiguration // +0x28
	let requestedOutliers : OutlierConfiguration // +0x48
	let requestedStreaks : StreakConfiguration // +0x60
	let requestedDistributions : DistributionConfiguration // +0x90
	let requestedTimehops : TimehopConfiguration // +0xa0
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case aggregatedDataQueryConfig  
	case missingDataConfig  
	case requestedTrends  
	case requestedOutliers  
	case requestedStreaks  
	case requestedDistributions  
	case requestedTimehops  
 }

 class HealthVisualization.StatisticsCollectionQueryOperation : type metadata for AsynchronousOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var underlyingResult : ³ // +0x30 (0x8)
	let sampleType : HKSampleType // +0x38 (0x8)
	let configuration : StatisticsQueryConfiguration // +0x40 (0x12)
	let configurationOverrides : StatisticsQueryConfigurationOverrides // +0xd4a60 (0x0)
	let healthStore : HKHealthStore // +0x0 (0x8)
	let query : HKStatisticsCollectionQuery // +0xd4a60 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var resultHandler :  empty-list  // +0xe3c0 (0x10)

	// ObjC -> Swift bridged methods
	0x65730  @objc StatisticsCollectionQueryOperation.main <stripped>
	0x658b0  @objc StatisticsCollectionQueryOperation.init <stripped>
	0x659a0  @objc StatisticsCollectionQueryOperation..cxx_destruct <stripped>

	// Swift methods
	0x64ed0  func StatisticsCollectionQueryOperation.result.getter // getter 
	0x64d20  class func StatisticsCollectionQueryOperation.__allocating_init(sampleType:configuration:configurationOverrides:name:queryQualityOfService:healthStore:resultHandler:) // init 
 }

 class HealthVisualization.DiagramLine : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let diagramConfig : Line // +0x10 (0x14)
	let diagramData : DiagramData // +0x28 (0x30)
	let axisHandler : DiagramAxis // +0x58 (0x8)

	// Swift methods
	0x66710  func <stripped> // getter 
 }

 enum HealthVisualization.StatisticsOption {

	// Properties
	case discreteAverage  
	case discreteMinimum  
	case discreteMaximum  
	case cumulativeSum  
	case mostRecent  
	case duration  
 }

 class HealthVisualization.InsightValueCollectionConverter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let unit : HKUnit // +0x10 (0x8)
	let insightConfig : InsightConfiguration // +0x18 (0xb9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var expectedDateInterval : í¢ // +0x0 (0x0)

	// Swift methods
	0x6ae30  func InsightValueCollectionConverter.expectedDateInterval.getter // getter 
	0x6ae70  func InsightValueCollectionConverter.expectedDateInterval.setter // setter 
	0x6aec0  func InsightValueCollectionConverter.expectedDateInterval.modify // modifyCoroutine 
	0x6ac10  class func InsightValueCollectionConverter.__allocating_init(unit:insightConfig:expectedDateInterval:) // init 
	0x6b000  func InsightValueCollectionConverter.convert(from:) // method 
	0x6beb0  func <stripped> // method 
	0x6c030  func <stripped> // method 
 }

 class HealthVisualization.DiagramBar : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let barDiagramConfig : Bar // +0x10 (0x1c)
	let barData : DiagramData // +0x30 (0x30)
	let axisHandler : DiagramAxis // +0x60 (0x8)

	// Swift methods
	0x6f370  func <stripped> // getter 
	0x6fd50  func <stripped> // method 
 }

 struct HealthVisualization.DelayedImmutable {

	// Properties
	var _value : A?
 }

 enum HealthVisualization.QueryOperationError {

	// Properties
	case notInitialized : (context: String)
	case dateMathError : (context: String)
	case cancelError : (context: String)
	case missingData : (context: String)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failedQuery :  first-element-marker 
	case programmaticError : (context: String)
	case unknownError  
 }

 enum HealthVisualization.InsightThreshold {

	// Properties
	case constant : (value: Double)
	case median  
	case average  
 }

 enum HealthVisualization.Base {

	// Properties
	case constant  
	case median  
	case average  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case type  
	case value  
 }

 struct HealthVisualization.StatisticsQueryConfigurationOverrides {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateInterval : í¢
	let additionalPredicate : NSPredicate?
 }

 enum HealthVisualization.AnchorDate {

	// Properties
	case startOfToday  
	case startOfWeek  
	case startOfMonth  
	case startOfYear  
 }

 class HealthVisualization.ActivitySummaryQueryOperation : type metadata for AsynchronousOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var underlyingResult : Û² // +0x30 (0x8)
	let predicate : NSPredicate? // +0x38 (0x8)
	let orderedAscending : Bool // +0x40 (0x1)
	let limit : Int // +0x48 (0x8)
	let queryQualityOfService : QualityOfService // +0x50 (0x8)
	let healthStore : HKHealthStore // +0x58 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var resultHandler :  empty-list  // +0x60 (0x10)
	var $__lazy_storage_$_query : HKQuery? // +0x70 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_signpostID : {– // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0x76010  @objc ActivitySummaryQueryOperation.main <stripped>
	0x772d0  @objc ActivitySummaryQueryOperation.init <stripped>
	0x77200  @objc ActivitySummaryQueryOperation..cxx_destruct <stripped>

	// Swift methods
	0x75d20  class func ActivitySummaryQueryOperation.__allocating_init(predicate:orderedAscending:limit:name:queryQualityOfService:healthStore:resultHandler:) // init 
 }

 class HealthVisualization.HighlightCalendarDayView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let model : HighlightCalendarDayViewModel // +0x0 (0x0)
	var dayLabel : UILabel? // +0x0 (0x8)
	var todayIndicatorLayer : CALayer? // +0x0 (0x8)
	let ringsRenderer : ARUIRingsViewRenderer? // +0x0 (0x8)
	var activityRingsView : HKActivityRingView? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x7aa80  @objc HighlightCalendarDayView.axDate <stripped>
	0x7ac20  @objc HighlightCalendarDayView.axProbability <stripped>
	0x7acf0  @objc HighlightCalendarDayView.axProjectionKind <stripped>
	0x7adf0  @objc HighlightCalendarDayView.axCircleState <stripped>
	0x7b140  @objc HighlightCalendarDayView.initWithCoder: <stripped>
	0x7b160  @objc HighlightCalendarDayView.sizeThatFits: <stripped>
	0x7b390  @objc HighlightCalendarDayView.layoutSubviews <stripped>
	0x7b3c0  @objc HighlightCalendarDayView.layoutSublayersOfLayer: <stripped>
	0x7b860  @objc HighlightCalendarDayView.traitCollectionDidChange: <stripped>
	0x7b8b0  @objc HighlightCalendarDayView.initWithFrame: <stripped>
	0x7b910  @objc HighlightCalendarDayView..cxx_destruct <stripped>

	// Swift methods
	0x7ab10  func <stripped> // getter 
 }

 class HealthVisualization.DiagramAxisOnly : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let config : AxisOnly // +0x10 (0x11)
	let axisHandler : DiagramAxis // +0x28 (0x8)

	// Swift methods
	0x7ccc0  func <stripped> // getter 
 }

 enum HealthVisualization.LocalizationReplacement {

	// Properties
	case direct : (key: String)
	case literal : (value: String)
	case quantity : (value: Double, unit: String)
 }

 class HealthVisualization.TrendTextSupport : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let response : InsightResponse // +0x31c0 (0x0)
	var $__lazy_storage_$_dateFormatter : NSDateFormatter? // +0x0 (0x8)
	var $__lazy_storage_$_percentFormatter : NSNumberFormatter? // +0x0 (0x8)
	var $__lazy_storage_$_integerFormatter : NSNumberFormatter? // +0x0 (0x8)

	// Swift methods
	0x7deb0  class func TrendTextSupport.__allocating_init(with:) // init 
	0x7e080  func TrendTextSupport.localizedTitle.getter // getter 
	0x7e270  func TrendTextSupport.localizedDescription.getter // getter 
	0x7f2e0  class func TrendTextSupport.__allocating_init(from:) // init 
	0x7f500  func TrendTextSupport.encode(to:) // method 
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case response  
 }

 enum HealthVisualization.StatisticsInterval {

	// Properties
	case oneHour  
	case oneDay  
	case oneWeek  
	case oneMonth  
	case oneYear  
 }

 struct HealthVisualization.InsightResponse {

	// Properties
	let request : InsightRequest
	let variant : InsightVariant
	let diagramSupport : DiagramSupport
WARNING: couldn't find address 0x0 (0x0) in binary!
	let relevantStartDate : õ§
WARNING: couldn't find address 0x0 (0x0) in binary!
	let relevantEndDate : #Ž
	let characteristics : InsightCharacteristicKey
 }

 struct HealthVisualization.DiagramSupport {

	// Properties
	let configuration : DiagramConfiguration // +0x0
	let data : DiagramData // +0x50
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case request  
	case variant  
	case diagramSupport  
	case relevantStartDate  
	case relevantEndDate  
	case characteristics  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case configuration  
	case data  
 }

 class HealthVisualization.InsightCalculatorOperationFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthVisualization.CorrelatedStatisticsQueryConfiguration {

	// Properties
	let correlatedTypeIdentifiers : [String] // +0x0
	let statisticsQueryConfig : StatisticsQueryConfiguration // +0x8
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case correlatedTypeIdentifiers  
	case statisticsQueryConfig  
 }

 struct HealthVisualization.ActivitySummaryQueryConfiguration { }

 enum HealthVisualization.CodingKeys { }

 class HealthVisualization.CorrelatedStatisticsCollectionQueryOperation : type metadata for AsynchronousOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var underlyingResult : ±² // +0x30 (0x8)
	let correlationType : HKCorrelationType // +0x38 (0x8)
	let correlatedQuantityTypes : [HKQuantityType] // +0x40 (0x8)
	let configuration : StatisticsQueryConfiguration // +0x48 (0x12)
	let configurationOverrides : StatisticsQueryConfigurationOverrides // +0xe2e20 (0x0)
	let queryQualityOfService : QualityOfService // +0x0 (0x8)
	let healthStore : HKHealthStore // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var accumulatedStatisticsCollections : o² // +0x73635f5f (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var resultHandler :  empty-list  // +0x0 (0x10)
	let operationQueue : NSOperationQueue // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x8a540  @objc CorrelatedStatisticsCollectionQueryOperation.main <stripped>
	0x8a840  @objc CorrelatedStatisticsCollectionQueryOperation.init <stripped>
	0x8a740  @objc CorrelatedStatisticsCollectionQueryOperation..cxx_destruct <stripped>

	// Swift methods
	0x895d0  class func CorrelatedStatisticsCollectionQueryOperation.__allocating_init(correlationType:correlatedQuantityTypes:configuration:configurationOverrides:name:queryQualityOfService:healthStore:resultHandler:) // init 
 }

 struct HealthVisualization.QuantityDistributionConfiguration {

	// Properties
	let dateRange : DateRange // +0x0
	let anchorDate : AnchorDate // +0x1
	let histogramWidth : StatisticsInterval // +0x2
	let bucketAnchor : BucketAnchor // +0x0
	let bucketSize : BucketSize // +0x3
	let contextStyle : _HKQuantityDistributionStyle // +0x8
 }

 enum HealthVisualization.BucketAnchor {

	// Properties
	case zero  
 }

 enum HealthVisualization.BucketSize {

	// Properties
	case audioExposureBucketSize  
	case heartRateBucketSize  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case dateRange  
	case anchorDate  
	case histogramWidth  
	case bucketAnchor  
	case bucketSize  
	case contextStyle  
 }

 class HealthVisualization.SampleCountQueryOperation {
 class HealthVisualization.DiagramHeartRateRecovery : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let diagramConfig : HeartRateRecovery // +0x10 (0x4)
	let diagramData : DiagramData // +0x18 (0x30)
	var $__lazy_storage_$_allPoints : CGPoint // +0x48 (0x8)
	var $__lazy_storage_$_perMinuteReadings : MinuteLine // +0x50 (0x8)

	// Swift methods
	0x91540  func <stripped> // getter 
	0x91910  func DiagramHeartRateRecovery.modelSpace.getter // getter 
	0x91960  func DiagramHeartRateRecovery.screenInsets.getter // getter 
	0x91de0  func DiagramHeartRateRecovery.drawingBlock.getter // getter 
 }

 enum HealthVisualization.MinuteLine {

	// Properties
	case zero  
	case one  
	case two  
	case three  
 }

 enum HealthVisualization.YValueLabel {

	// Properties
	case min  
	case max  
 }

 enum HealthVisualization.MinuteTimeLabel {

	// Properties
	case zero  
	case one  
	case two  
	case three  
 }

 enum HealthVisualization.MinuteHeartRateLabel {

	// Properties
	case zero  
	case one  
	case two  
	case three  
 }

 class HealthVisualization.QuantityDistributionQueryOperation : type metadata for AsynchronousOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var underlyingResult : #² // +0x30 (0x8)
	let quantityType : HKQuantityType // +0x38 (0x8)
	let healthStore : HKHealthStore // +0x40 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var resultHandler :  empty-list  // +0x48 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let baseDate : #Ž // +0x0 (0x0)
	let configuration : QuantityDistributionConfiguration // +0xec370 (0x10)
	let queryQualityOfService : QualityOfService // +0x31dc (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let queryStartDate : õ§ // +0x2 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let queryEndDate : õ§ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let anchorDate : õ§ // +0x77735f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let intervalComponents : ‰ // +0x6665725f (0x0)
	let queryPredicate : NSPredicate? // +0x45545f5f (0x8)
	var $__lazy_storage_$_quantityDistributionQuery : _HKQuantityDistributionQuery? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x95380  @objc QuantityDistributionQueryOperation.main <stripped>
	0x95ae0  @objc QuantityDistributionQueryOperation.init <stripped>
	0x95990  @objc QuantityDistributionQueryOperation..cxx_destruct <stripped>

	// Swift methods
	0x94490  func QuantityDistributionQueryOperation.result.getter // getter 
	0x945c0  class func QuantityDistributionQueryOperation.__allocating_init(quantityType:configuration:configurationOverrides:name:queryQualityOfService:healthStore:baseDate:resultHandler:) // init 
	0x95540  func <stripped> // method 
 }

 class HealthVisualization.InsightTextSupportFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x975f0  class func static InsightTextSupportFactory.textSupport(for:) // method 
 }

 class HealthVisualization.CurrentValueDateIntervalStatsCollectionConverter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x97780  class func CurrentValueDateIntervalStatsCollectionConverter.__allocating_init() // init 
	0x977b0  func CurrentValueDateIntervalStatsCollectionConverter.convert(from:) // method 
 }

 class HealthVisualization.AllInsightsSectionedDataSource {
 struct HealthVisualization.MostRecentTimePeriodQueryConfiguration { }

 enum HealthVisualization.CodingKeys { }

 class HealthVisualization.ItemDetailViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var scrollView : UIScrollView? // +0x8 (0x8)
	var closeButton : UIButton? // +0x10 (0x8)
	var allItemsButton : UIButton? // +0x18 (0x8)
	var containerView : UIView? // +0x20 (0x8)
	var buttonStackView : UIStackView? // +0x28 (0x8)
	let embeddedViewController : UIViewController // +0x30 (0x8)
	var dataProvider : ItemDetailDataProviding // +0x38 (0x10)
	var $__lazy_storage_$_associatedObjectTypeButtons : [UIButton]? // +0x48 (0x8)
	let associatedObjectTypes : [HKObjectType] // +0x50 (0x8)

	// ObjC -> Swift bridged methods
	0x99480  @objc ItemDetailViewController.initWithCoder: <stripped>
	0x9a980  @objc ItemDetailViewController.viewDidLoad <stripped>
	0x9aba0  @objc ItemDetailViewController.initWithNibName:bundle: <stripped>
	0x9aa60  @objc ItemDetailViewController..cxx_destruct <stripped>

	// Swift methods
	0x98ce0  func ItemDetailViewController.scrollView.getter // getter 
	0x98d00  func ItemDetailViewController.scrollView.setter // setter 
	0x98d20  func ItemDetailViewController.scrollView.modify // modifyCoroutine 
	0x98d60  func ItemDetailViewController.closeButton.getter // getter 
	0x98d80  func ItemDetailViewController.closeButton.setter // setter 
	0x98da0  func ItemDetailViewController.closeButton.modify // modifyCoroutine 
	0x98de0  func ItemDetailViewController.allItemsButton.getter // getter 
	0x98e00  func ItemDetailViewController.allItemsButton.setter // setter 
	0x98e20  func ItemDetailViewController.allItemsButton.modify // modifyCoroutine 
	0x98e60  func ItemDetailViewController.containerView.getter // getter 
	0x98e80  func ItemDetailViewController.containerView.setter // setter 
	0x98ea0  func ItemDetailViewController.containerView.modify // modifyCoroutine 
	0x98ee0  func ItemDetailViewController.buttonStackView.getter // getter 
	0x98f40  func ItemDetailViewController.buttonStackView.setter // setter 
	0x98fa0  func ItemDetailViewController.buttonStackView.modify // modifyCoroutine 
	0x99010  func ItemDetailViewController.associatedObjectTypeButtons.getter // getter 
	0x99330  func ItemDetailViewController.associatedObjectTypeButtons.setter // setter 
	0x99350  func ItemDetailViewController.associatedObjectTypeButtons.modify // modifyCoroutine 
	0x993c0  class func ItemDetailViewController.__allocating_init(embedding:associatedObjectTypes:dataProvider:) // init 
 }

 struct HealthVisualization.HealthTypeProxy {

	// Properties
	let objectTypeIdentifier : String // +0x0
 }

 class HealthVisualization.InsightResponseCollatorOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var responses : InsightResponse // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x9ccc0  @objc InsightResponseCollatorOperation.main <stripped>
	0x9ccf0  @objc InsightResponseCollatorOperation.init <stripped>
	0x9cd80  @objc InsightResponseCollatorOperation..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthVisualization.DatabaseChangesProducer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, DatabaseChangesProducing {

	// Properties
	let hkQuery : _HKDatabaseChangesQuery
	let healthStore : HKHealthStore

	// Swift methods
 }

 class HealthVisualization.ChangeDetectorOperation : type metadata for AsynchronousOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience, AnchoredChangeSetProviding {

	// Properties
	let types : [HKSampleType]
	let anchor : HKQueryAnchor?
	let healthStore : HKHealthStore
	let waitForChanges : Bool
	let includeChangeDetails : Bool
	var query : DatabaseChangesProducing
WARNING: couldn't find address 0x0 (0x0) in binary!
	var result : ‰

	// ObjC -> Swift bridged methods
	0x9f050  @objc ChangeDetectorOperation.main <stripped>
	0x9f160  @objc ChangeDetectorOperation.init <stripped>
	0x9f230  @objc ChangeDetectorOperation..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthVisualization.OnlineDateDistributionConverter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var endAggregateIndexUnderConsideration : Int // +0x10 (0x8)
	var nextAggregateIndexNeeded : Int // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var relevantDateInterval : í¢ // +0x0 (0x0)
	let configuration : DistributionConfiguration // +0x0 (0x9)
	let binningCalculation : BinningCalculation // +0x0 (0x1)
	var bins : Bin // +0x0 (0x8)

	// Swift methods
	0x9f810  func <stripped> // method 
	0x9fad0  func <stripped> // method 
	0x9ff60  func <stripped> // method 
 }

 struct HealthVisualization.Bin {

	// Properties
	var sumValue : Double // +0x0
	var valueCount : Int // +0x8
 }

 enum HealthVisualization.BinningCalculation {

	// Properties
	case average  
	case count  
	case sum  
 }

 struct HealthVisualization.DistributionConfiguration {

	// Properties
	let binningStrategy : BinningStrategy // +0x0
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case binningStrategy  
 }

 enum HealthVisualization.DiagramConfiguration {

	// Properties
	case bar : Bar
	case banner : Banner
	case line : Line
	case axisOnly : AxisOnly
	case distribution : Distribution
	case heartRateRecovery : HeartRateRecovery
 }

 struct HealthVisualization.Bar {

	// Properties
	let width : BarWidth // +0x0
	let topColor : Color // +0x1
	let bottomColor : Color // +0x2
	let cornerSize : CornerSize // +0x3
	let highlightColor : Color // +0x4
	let axisLineColor : Color // +0x5
	let referenceLineColor : Color // +0x6
	let axisText : TextAttributes // +0x7
	let baseValue : Double // +0x8
	let axis : Axis // +0x10
 }

 struct HealthVisualization.Banner {

	// Properties
	let bannerText : String // +0x0
	let bannerTextStyle : TextAttributes // +0x10
 }

 struct HealthVisualization.AxisOnly {

	// Properties
	let axis : Axis // +0x0
	let horizontalAxisInset : AxisInset // +0xc
	let verticalAxisInset : AxisInset // +0xd
	let innerHorizontalInset : AxisInset // +0xe
	let innerVerticalInset : AxisInset // +0xf
	let drawModelAreaForDebug : Bool // +0x10
 }

 enum HealthVisualization.BarWidth {

	// Properties
	case hourWidth  
	case dayWidth  
	case insightWidth  
 }

 struct HealthVisualization.Line {

	// Properties
	let lineProperties : LineProperties // +0x0
	let axis : Axis // +0x8
 }

 struct HealthVisualization.LineProperties {

	// Properties
	let lineWidth : LineWidth // +0x0
	let lineColor : Color // +0x1
	let lineHighlightColor : Color // +0x2
	let linePointRadius : LineRadius // +0x3
	let lineCornerRadius : LineRadius // +0x4
	let referenceLineColor : Color // +0x5
	let referenceLineWidth : LineWidth // +0x6
 }

 enum HealthVisualization.LineWidth {

	// Properties
	case defaultWidth  
	case hairlineWidth  
	case oneThirdWidth  
	case halfWidth  
	case twoThirdsWidth  
	case fourThirdsWidth  
 }

 enum HealthVisualization.LineRadius {

	// Properties
	case defaultRadius  
	case halfRadius  
	case zeroRadius  
	case heartRateRecoveryDotRadius  
 }

 struct HealthVisualization.Distribution {

	// Properties
	let barWidth : DistributionWidth // +0x0
	let padding : DistributionPadding // +0x1
	let contentColor : Color // +0x2
	let highlightColor : Color // +0x3
	let referenceLineColor : Color // +0x4
	let referenceLineTextAttributes : TextAttributes // +0x5
	let pointLabelData : DiagramDataKey // +0x6
	let pointLabels : DistributionPointLabelConfiguration // +0x8
	let verticalLimits : DistributionLimits // +0x18
	let axis : Axis // +0x41
 }

 enum HealthVisualization.DistributionPointLabelConfigurationKeys {

	// Properties
	case minMax  
	case allPoints  
 }

 enum HealthVisualization.DistributionPointLabelConfiguration {

	// Properties
	case minMax : DistributionMinMaxConfiguration
	case allPoints : DistributionAllPointsConfiguration
 }

 struct HealthVisualization.DistributionMinMaxSet {

	// Properties
	let rawValue : Int // +0x0
 }

 struct HealthVisualization.DistributionMinMaxConfiguration {

	// Properties
	let labelOptions : DistributionMinMaxSet // +0x0
	let labelAttributes : TextAttributes // +0x8
	let valueAttributes : TextAttributes // +0x9
 }

 struct HealthVisualization.DistributionAllPointsConfiguration {

	// Properties
	let maxPointsAttributes : DistributionAllPointsAttributes // +0x0
	let minPointsAttributes : DistributionAllPointsAttributes // +0x1
 }

 struct HealthVisualization.DistributionAllPointsAttributes {

	// Properties
	let valueAttributes : TextAttributes // +0x0
 }

 enum HealthVisualization.DistributionWidth {

	// Properties
	case defaultDistributionWidth  
	case workoutHeartRateDistributionWidth  
	case alertHeartRateDistributionWidth  
	case audioExposureDistributionWidth  
	case audioAlertDistributionWidth  
 }

 enum HealthVisualization.DistributionPadding {

	// Properties
	case zeroPadding  
	case defaultDistributionPadding  
	case heartRateDistributionPadding  
 }

 struct HealthVisualization.DistributionLimits {

	// Properties
	let limitGradientColor : Color // +0x0
	let gradientSpanPercent : Double // +0x8
	let lowLimit : Double? // +0x10
	let highLimit : Double? // +0x20
 }

 struct HealthVisualization.HeartRateRecovery {

	// Properties
	let pointColor : Color // +0x0
	let pointRadius : LineRadius // +0x1
	let minuteLineColor : Color // +0x2
	let minuteLineWidth : LineWidth // +0x3
 }

 struct HealthVisualization.Axis {

	// Properties
	let horizontal : AxisProperties // +0x0
	let vertical : AxisProperties // +0x6
 }

 struct HealthVisualization.AxisProperties {

	// Properties
	let axisType : AxisType // +0x0
	let labelTextAttributes : TextAttributes // +0x1
	let labelColor : Color // +0x2
	let gridLineColor : Color // +0x3
	let gridLineWidth : AxisLineWidth // +0x0
	let majorTickLength : AxisTickLength // +0x4
	let minorTickLength : AxisTickLength // +0x5
 }

 enum HealthVisualization.AxisTickLength {

	// Properties
	case defaultMajorLength  
	case defaultMinorLength  
	case zeroLength  
 }

 enum HealthVisualization.AxisLineWidth {

	// Properties
	case defaultWidth  
 }

 enum HealthVisualization.AxisType {

	// Properties
	case defaultDateAxis  
	case defaultIntegerAxis  
	case defaultScalarAxis  
	case sleepAnalysisDurationAxis  
	case standHourDurationAxis  
	case mindfulSessionDurationAxis  
	case workoutDurationAxis  
	case heightLengthAxis  
	case audioVerticalAxis  
	case workoutHeartRateDateAxis  
	case customAxis  
 }

 enum HealthVisualization.CornerSize {

	// Properties
	case defaultCornerSize  
	case zeroCornerSize  
	case sevenDayCornerSize  
 }

 enum HealthVisualization.Color {

	// Properties
	case defaultBarColor  
	case defaultAxisColor  
	case defaultAxisTickColor  
	case defaultHighlightColor  
	case defaultReferenceLineColor  
	case activityBarTopColor  
	case activityBarBottomColor  
	case defaultLineColor  
	case defaultLineHighlightColor  
	case extraLightReferenceLineColor  
	case randomColor  
	case gradientLightTransparent  
	case gradientDarkTransparent  
	case sparklineActiveColor  
	case sparklineInactiveColor  
	case vitalsKeyColor  
	case activityKeyColor  
	case bodyMeasurementsKeyColor  
	case mindfulnessKeyColor  
	case nutritionKeyColor  
	case reproductiveHealthKeyColor  
	case sleepKeyColor  
	case symptomsKeyColor  
	case respiratoryKeyColor  
	case workoutKeyColor  
	case workoutHeartRateKeyColor  
	case hearingHealthKeyColor  
	case otherKeyColor  
	case secondaryLabelColor  
	case tertiaryLabelColor  
	case quaternaryLabelColor  
	case alertDistributionColor  
	case alertDistributionGradientColor  
	case testingLightColor  
	case testingDarkColor  
	case testingHighlightColor  
 }

 enum HealthVisualization.AxisInset {

	// Properties
	case defaultInset  
	case wideInset  
	case noInset  
 }

 enum HealthVisualization.TextAttributes {

	// Properties
	case averageAnnotationText  
	case snippetDiagramText  
	case defaultAxisText  
	case defaultVerticalAxisText  
	case hearingMinMaxLabel  
	case hearingMinMaxValue  
	case workoutHeartRateMinMaxLabel  
	case workoutHeartRateMinMaxValue  
	case heartRateRecoveryTimeLabel  
	case heartRateRecoveryYValueLabel  
	case alertHeartRateAnnotationText  
	case alertHeartRatePointLabelText  
	case alertHearingAnnotationText  
	case alertHearingPointLabelText  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case bar  
	case banner  
	case line  
	case axisOnly  
	case distribution  
	case heartRateRecovery  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case axisType  
	case labelTextAttributes  
	case labelColor  
	case gridLineColor  
	case gridLineWidth  
	case majorTickLength  
	case minorTickLength  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case horizontal  
	case vertical  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case pointColor  
	case pointRadius  
	case minuteLineColor  
	case minuteLineWidth  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case limitGradientColor  
	case gradientSpanPercent  
	case lowLimit  
	case highLimit  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case valueAttributes  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case maxPointsAttributes  
	case minPointsAttributes  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case labelOptions  
	case labelAttributes  
	case valueAttributes  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case barWidth  
	case padding  
	case contentColor  
	case highlightColor  
	case referenceLineColor  
	case referenceLineTextAttributes  
	case pointLabelData  
	case pointLabels  
	case verticalLimits  
	case axis  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case lineWidth  
	case lineColor  
	case lineHighlightColor  
	case linePointRadius  
	case lineCornerRadius  
	case referenceLineColor  
	case referenceLineWidth  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case lineProperties  
	case axis  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case axis  
	case horizontalAxisInset  
	case verticalAxisInset  
	case innerHorizontalInset  
	case innerVerticalInset  
	case drawModelAreaForDebug  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case bannerText  
	case bannerTextStyle  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case width  
	case topColor  
	case bottomColor  
	case cornerSize  
	case highlightColor  
	case axisLineColor  
	case referenceLineColor  
	case axisText  
	case baseValue  
	case axis  
 }

 class HealthVisualization.DiagramDateAxisMetricsCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xc8740  func <stripped> // method 
	0xc8cb0  func DiagramDateAxisMetricsCalculator.axisMetrics(for:customLocations:) // method 
 }

 struct HealthVisualization.DateTickIntervalStrategy {

	// Properties
	let enumerationAlgorithm : IntervalEnumerationAlgorithm
WARNING: couldn't find address 0x0 (0x0) in binary!
	let intervalMatchDateComponents : ‰
	let intervalDownsampleFactor : Int
	let useMajorTicksOnly : Bool
	let labelDateFormatter : NSDateFormatter
 }

 enum HealthVisualization.IntervalEnumerationAlgorithm {

	// Properties
	case simple  
	case calendrical  
 }

 class HealthVisualization.AggregateChangeDetector : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let healthStore : HKHealthStore // +0x8 (0x8)
	let includeChangeDetails : Bool // +0x10 (0x1)
	let name : String? // +0x18 (0x10)
	let deliveryQueue : OS_dispatch_queue // +0x28 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var changesHandler : ƒ // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var queries : ï± // +0x38 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : Ç• // +0x40 (0x8)
	var lock_pendingChangeSet : AnchoredChangeSet // +0x48 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock_pendingError : …ž // +0x58 (0x8)
	var lock_dispatchPending : Bool // +0x60 (0x1)
	var lock_state : State // +0x61 (0x1)

	// ObjC -> Swift bridged methods
	0xd03b0  @objc AggregateChangeDetector.init <stripped>
	0xd02c0  @objc AggregateChangeDetector..cxx_destruct <stripped>

	// Swift methods
	0xccad0  func AggregateChangeDetector.dispatchPending.getter // getter 
	0xccb70  class func AggregateChangeDetector.__allocating_init(types:highFrequencyTypes:anchor:includeChangeDetails:name:healthStore:deliveryQueue:changesHandler:) // init 
	0xcd750  func AggregateChangeDetector.start() // method 
	0xcda60  func AggregateChangeDetector.stop() // method 
	0xcdb70  func AggregateChangeDetector.dispatchChanges() // method 
	0xcec60  func <stripped> // method 
	0xcf110  func <stripped> // method 
	0xcf280  func <stripped> // method 
	0xcf440  func <stripped> // method 
 }

 enum HealthVisualization.State {

	// Properties
	case initialized  
	case started  
	case stopped  
 }
