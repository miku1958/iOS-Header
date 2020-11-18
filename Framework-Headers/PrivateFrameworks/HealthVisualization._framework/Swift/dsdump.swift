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

 struct __C.UILayoutPriority {

	// Properties
	let rawValue : Float
 }

 enum __C.HKAxisLabelType { }

 struct __C.CGAffineTransform {

	// Properties
	var a : CGFloat
	var b : CGFloat
	var c : CGFloat
	var d : CGFloat
	var tx : CGFloat
	var ty : CGFloat
 }

 class __C.CGContext {
 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 enum __C.QualityOfService { }

 enum __C.ComparisonResult { }

 struct __C.CGPoint {

	// Properties
	var x : CGFloat
	var y : CGFloat
 }

 enum __C._HKQuantityDistributionStyle { }

 struct __C.Options {

	// Properties
	let rawValue : UInt
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.SymbolicTraits {

	// Properties
	let rawValue : UInt32
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
	0x6a60  func InsightService.generateInsights(requests:) // method 
	0x75b0  func <stripped> // method 
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
	0xac30  class func AverageValueStatsCollectionConverter.__allocating_init(unit:) // init 
	0xacc0  func AverageValueStatsCollectionConverter.convert(from:) // method 
 }

 class HealthVisualization.InsightCalculatorFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthVisualization.OnlineMonotonicTrendConverter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var endAggregateIndexUnderConsideration : Int // +0x10 (0x8)
	var nextAggregateIndexNeeded : Int // +0x18 (0x8)
	let configuration : TrendConfiguration // +0x20 (0x19)
	var currentValues : [InsightValue] // +0x40 (0x8)
	var currentDirection : NSComparisonResult // +0x48 (0x8)

	// Swift methods
	0xbbc0  func <stripped> // method 
	0xc180  func <stripped> // method 
	0xc810  func <stripped> // method 
 }

 class HealthVisualization.DiagramDistribution : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let configuration : DiagramConfiguration.Distribution // +0x10 (0x4d)
	let data : DiagramData // +0x60 (0x30)
	let minMaxParameters : DiagramDistributionMinMax // +0x90 (0xc0)
	let maxPointItems : DiagramDistributionPoints // +0x150 (0x18)
	let minPointItems : DiagramDistributionPoints // +0x168 (0x18)
	let axisHandler : DiagramAxis // +0x180 (0x8)

	// Swift methods
	0xd5a0  func <stripped> // getter 
 }

 struct HealthVisualization.DiagramDistributionPoints {

	// Properties
	let pointAnnotations : [(label: String, point: CGPoint)] // +0x0
	let linePadding : CGFloat // +0x8
	let valueAttributes : [NSAttributedStringKey : Any] // +0x10
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
	let minPoint : CGPoint? // +0x80
	let maxPoint : CGPoint? // +0x98
	let labelAttributes : [NSAttributedStringKey : Any] // +0xb0
	let valueAttributes : [NSAttributedStringKey : Any] // +0xb8
 }

 class HealthVisualization.Localization : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var localizationBundleTable : [NSBundle : String] // +0x10 (0x8)
	let defaultLocalizationFile : String // +0x18 (0x10)

	// Swift methods
	0x149f0  class func static Localization.localize(_:substitutions:mySelf:) // method 
	0x14a70  class func static Localization.localize(_:substitutions:mySelf:tableName:) // method 
	0x14b10  class func static Localization.localize(stringsDictKey:stringsDictFormatArguments:substitutions:mySelf:tableName:) // method 
	0x14bc0  class func static Localization.registerLocalization(classForBundle:localizationFile:) // method 
	0x14cf0  func <stripped> // method 
 }

 struct HealthVisualization.ObjectTypeConfiguration {

	// Properties
	let identifier : String // +0x0
	let numericalFormatting : NumericalFormatting? // +0x10
	let snippetConfig : SnippetConfiguration // +0x18
	let insightConfigs : [InsightConfiguration]? // +0x38
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
	0x1eaf0  func AllInsightsDataSourceProvider.selectedDataSources(for:) // method 
	0x1ee00  func <stripped> // method 
	0x1f260  func <stripped> // method 
 }

 struct HealthVisualization.AudioExposureStatistics {

	// Properties
	let leqValue : Double
	let leqUnitString : String
	let secondsListened : Double
	let daysAggregated : Int
	let lastUpdated : Date
 }

 class HealthVisualization.AudioExposureStatisticsQueryOperation : type metadata for AsynchronousOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var resultHandler : AudioExposureStatistics
	var underlyingResult : AudioExposureStatistics
	let quantityType : HKQuantityType
	let queryConfig : StatisticsQueryConfiguration
	let queryConfigOverrides : StatisticsQueryConfigurationOverrides?
	let queryQualityOfService : NSQualityOfService
	let healthStore : HKHealthStore
	let operationQueue : NSOperationQueue
	var $__lazy_storage_$_statisticsQueryOperation : StatisticsQueryOperation?
	var $__lazy_storage_$_resultDeliveryOperation : NSOperation?
	let audioExposureResult : AudioExposureStatistics

	// ObjC -> Swift bridged methods
	0x21f80  @objc AudioExposureStatisticsQueryOperation.main <stripped>
	0x221f0  @objc AudioExposureStatisticsQueryOperation.init <stripped>
	0x22320  @objc AudioExposureStatisticsQueryOperation..cxx_destruct <stripped>

	// Swift methods
	0x214e0  class func AudioExposureStatisticsQueryOperation.__allocating_init(quantityType:operationQueue:queryConfiguration:queryConfigurationOverrides:name:queryQualityOfService:healthStore:resultHandler:) // init 
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
	let statisticsOptions : [StatisticsOption] // +0x8
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
	var lastUsedModelSpace : CGRect? // +0x58 (0x21)

	// ObjC -> Swift bridged methods
	0x2a6a0  @objc DiagramImageView.intrinsicContentSize <stripped>
	0x2a6e0  @objc DiagramImageView.frame <stripped>
	0x2a720  @objc DiagramImageView.setFrame: <stripped>
	0x2a760  @objc DiagramImageView.bounds <stripped>
	0x2a870  @objc DiagramImageView.setBounds: <stripped>
	0x2aee0  @objc DiagramImageView.initWithFrame: <stripped>
	0x2af80  @objc DiagramImageView.initWithCoder: <stripped>
	0x2b2d0  @objc DiagramImageView.traitCollectionDidChange: <stripped>
	0x2c1c0  @objc DiagramImageView.initWithImage: <stripped>
	0x2c270  @objc DiagramImageView.initWithImage:highlightedImage: <stripped>
	0x2c300  @objc DiagramImageView..cxx_destruct <stripped>

	// Swift methods
	0x2a2a0  func DiagramImageView.delegate.getter // getter 
	0x2a2e0  func DiagramImageView.delegate.setter // setter 
	0x2a340  func DiagramImageView.delegate.modify // modifyCoroutine 
	0x2a430  func DiagramImageView.lastUsedTransformer.getter // getter 
	0x2a4e0  func DiagramImageView.lastUsedTransformer.setter // setter 
	0x2a580  func DiagramImageView.lastUsedTransformer.modify // modifyCoroutine 
	0x2a5c0  func DiagramImageView.lastUsedModelSpace.getter // getter 
	0x2a610  func DiagramImageView.lastUsedModelSpace.setter // setter 
	0x2a650  func DiagramImageView.lastUsedModelSpace.modify // modifyCoroutine 
	0x2b320  func DiagramImageView.drawContent(modelSpace:screenInsets:drawingBlock:) // method 
 }

 struct HealthVisualization.DiagramTransformer {

	// Properties
	let context : CGContextRef? // +0x0
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
	0x31800  func LinearRegressionConverter.convert(from:) // method 
 }

 struct HealthVisualization.QuantityDistributionConfigurationOverrides {

	// Properties
	var dateInterval : DateInterval?
	var predicate : NSPredicate?
	var histogramWidth : DateComponents?
 }

 enum HealthVisualization.ResultProducingError {

	// Properties
	case notStarted  
	case notFinished  
	case canceled  
 }

 class HealthVisualization.OnlineInsightService : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let requests : [InsightRequest] // +0x10 (0x8)
	let healthStore : HKHealthStore // +0x18 (0x8)
	let operationQueue : NSOperationQueue // +0x20 (0x8)

	// Swift methods
	0x330b0  func OnlineInsightService.generateInsights() // method 
	0x33280  func <stripped> // method 
	0x334a0  func <stripped> // method 
 }

 class HealthVisualization.DiagramAxisMetricsCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let axisLabelDimension : HKAxisLabelDimension // +0x10 (0x8)
	let maximumLabelCount : Int // +0x18 (0x8)
	let calculator : (_:_:_:) // +0x20 (0x10)

	// Swift methods
	0x33c80  class func DiagramAxisMetricsCalculator.__allocating_init(axisLabelDimension:maximumLabelCount:calculator:) // init 
	0x33d10  func DiagramAxisMetricsCalculator.axisMetrics(for:customLocations:) // method 
 }

 enum HealthVisualization.Constants { }

 struct HealthVisualization.TrendResult {

	// Properties
	let type : TrendType
	let points : [InsightValue]
	let fit : InsightFitLine
	let dateInterval : DateInterval
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
	let interval : DateInterval
 }

 struct HealthVisualization.DiagramDataGroup {

	// Properties
	let points : [CGPoint] // +0x0
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
	let dataModelSpace : CGRect? // +0x0
	let dataGroups : DiagramDataKey // +0x28
 }

 class HealthVisualization.DiagramFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x374a0  class func DiagramFactory.__allocating_init() // init 
	0x374f0  func DiagramFactory.drawDiagram(diagramImageView:diagramData:configuration:) // method 
	0x375f0  func <stripped> // method 
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case points  
	case annotation  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case dataModelSpace  
	case dataGroups  
 }

 class HealthVisualization.ChartPointStatsCollectionConverter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let unit : HKUnit // +0x10 (0x8)
	let statisticsOption : StatisticsOption // +0x18 (0x1)

	// Swift methods
	0x3aae0  class func ChartPointStatsCollectionConverter.__allocating_init(unit:statisticsOption:) // init 
	0x3ab80  func ChartPointStatsCollectionConverter.convert(from:) // method 
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
	case filledToday : (text: String, todayRingAlpha: CGFloat)
	case unfilled : (text: String)
	case unfilledToday : (text: String, todayRingAlpha: CGFloat)
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
	let axDate : Date
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
	var cachedModels : [ObjectTypeConfiguration] // +0x10 (0x8)
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
	0x45090  @objc HighlightCalendarView.initWithCoder: <stripped>
	0x46280  @objc HighlightCalendarView.traitCollectionDidChange: <stripped>
	0x472f0  @objc HighlightCalendarView.initWithFrame: <stripped>
	0x47400  @objc HighlightCalendarView.initWithArrangedSubviewRows: <stripped>
	0x47480  @objc HighlightCalendarView..cxx_destruct <stripped>

	// Swift methods
	0x450b0  class func HighlightCalendarView.__allocating_init(model:) // init 
	0x462d0  func <stripped> // method 
	0x46d70  func <stripped> // method 
 }

 class HealthVisualization.StatisticsQueryOperation : type metadata for AsynchronousOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var underlyingResult : Atomic<Result<HKStatistics>> // +0x30 (0x8)
	let sampleType : HKSampleType // +0x38 (0x8)
	let configuration : StatisticsQueryConfiguration // +0x40 (0x12)
	let configurationOverrides : StatisticsQueryConfigurationOverrides? // +0x80000408 (0x0)
	let queryQualityOfService : NSQualityOfService // +0x6 (0x8)
	let healthStore : HKHealthStore // +0x74735f5f (0x8)
	let resultHandler : (_:) // +0x65706c65 (0x10)
	var $__lazy_storage_$_query : HKStatisticsQuery? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x4ac50  @objc StatisticsQueryOperation.main <stripped>
	0x4ae90  @objc StatisticsQueryOperation.init <stripped>
	0x4af90  @objc StatisticsQueryOperation..cxx_destruct <stripped>

	// Swift methods
	0x4a570  func StatisticsQueryOperation.result.getter // getter 
	0x4a3b0  class func StatisticsQueryOperation.__allocating_init(sampleType:configuration:configurationOverrides:name:queryQualityOfService:healthStore:resultHandler:) // init 
 }

 class HealthVisualization.DateDistributionCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let variant : InsightVariant // +0x10 (0x1)
	let configuration : DistributionConfiguration // +0x18 (0x9)

	// Swift methods
	0x4c040  func <stripped> // method 
 }

 enum HealthVisualization.Errors {

	// Properties
	case unsupportedBinningStrategy : BinningStrategy
 }

 struct HealthVisualization.InsightValue {

	// Properties
	let dateInterval : DateInterval
	let value : Double?
	let valueType : ValueType
 }

 enum HealthVisualization.ValueType {

	// Properties
	case inferred : (using: MissingDataConfiguration)
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
	var item : SectionedDataSourceItem? // +0x10 (0x28)

	// ObjC -> Swift bridged methods
	0x51760  @objc AllInsightsSectionHeaderView.titleLabel <stripped>
	0x51780  @objc AllInsightsSectionHeaderView.setTitleLabel: <stripped>
	0x51e20  @objc AllInsightsSectionHeaderView.initWithFrame: <stripped>
	0x51f70  @objc AllInsightsSectionHeaderView.initWithCoder: <stripped>
	0x52000  @objc AllInsightsSectionHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x51930  func AllInsightsSectionHeaderView.item.getter // getter 
	0x519d0  func AllInsightsSectionHeaderView.item.setter // setter 
	0x51ad0  func AllInsightsSectionHeaderView.item.modify // modifyCoroutine 
 }

 struct HealthVisualization.AllInsightsSectionHeaderItem {

	// Properties
	var reuseIdentifier : String // +0x0
	var title : String? // +0x10
 }

 class HealthVisualization.AggregateInsightResponseProducerOperation : type metadata for AsyncOperation /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience {

	// Properties
	var responses : [InsightResponse] // +0x18 (0x8)
	let requests : [InsightRequest] // +0x20 (0x8)
	let healthStore : HKHealthStore // +0x28 (0x8)
	let eventHorizonCalculation : (_:) // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x52e10  @objc AggregateInsightResponseProducerOperation.main <stripped>
	0x52e40  @objc AggregateInsightResponseProducerOperation.init <stripped>
	0x52f10  @objc AggregateInsightResponseProducerOperation..cxx_destruct <stripped>

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
	var underlyingResult : Atomic<Result<[HKSleepDay]>> // +0x30 (0x8)
	let dateInterval : DateInterval // +0x80000400 (0x0)
	let calendar : Calendar // +0x0 (0x0)
	let healthStore : HKHealthStore // +0x6f635f5f (0x8)
	let queryQualityOfService : NSQualityOfService // +0x45545f5f (0x8)
	let resultHandler : (_:) // +0x0 (0x10)
	var $__lazy_storage_$_query : HKQuery? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x55760  @objc SleepQueryOperation.main <stripped>
	0x559f0  @objc SleepQueryOperation.init <stripped>
	0x55af0  @objc SleepQueryOperation..cxx_destruct <stripped>

	// Swift methods
	0x54d60  func SleepQueryOperation.result.getter // getter 
	0x54db0  class func SleepQueryOperation.__allocating_init(dateInterval:calendar:name:queryQualityOfService:healthStore:resultHandler:) // init 
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
	let upperBound : InsightThreshold? // +0x0
	let lowerBound : InsightThreshold? // +0x10
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
	0x58480  class func DiagramAxisMetricsCalculatorFactory.__allocating_init() // init 
	0x584d0  func DiagramAxisMetricsCalculatorFactory.diagramAxisMetricsCalculator(for:orientation:) // method 
 }

 class HealthVisualization.HiLoScalarAxisDimension : HKAxisLabelDimensionScalar /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let displayType : HKDisplayType?
	let valueFormatter : HKDisplayTypeValueFormatter?
	let unitPreferenceController : HKUnitPreferenceController?

	// ObjC -> Swift bridged methods
	0x58ad0  @objc HiLoScalarAxisDimension.stringForLocation: <stripped>
	0x58b60  @objc HiLoScalarAxisDimension.init <stripped>
	0x58be0  @objc HiLoScalarAxisDimension..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthVisualization.InsightQueryManager : NSObject /usr/lib/libobjc.A.dylib, InsightValueObservable {

	// Properties
	let healthStore : HKHealthStore
	let request : InsightRequest
	let currentDate : Date
	let operationQueue : NSOperationQueue
	let serialQueue : OS_dispatch_queue
	var $__lazy_storage_$_insightValueObjectCache : InsightValueObject
	var $__lazy_storage_$_pendingQueryOperations : [ClosedRange<Int> : StatisticsCollectionQueryOperation]?
	var $__lazy_storage_$_computedPageDateIntervals : [ClosedRange<Int> : DateInterval]?

	// ObjC -> Swift bridged methods
	0x59610  @objc InsightQueryManager.init <stripped>
	0x596a0  @objc InsightQueryManager..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthVisualization.InsightValueObject : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let boxedValue : InsightValue

	// ObjC -> Swift bridged methods
	0x59250  @objc InsightValueObject.init <stripped>
	0x592a0  @objc InsightValueObject..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthVisualization.DiagramBanner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let bannerConfig : DiagramConfiguration.Banner // +0x10 (0x11)
	let bannerData : DiagramData // +0x28 (0x30)

	// Swift methods
 }

 class HealthVisualization.AllInsightsViewController : type metadata for DataTypeDetailViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {
	// ObjC -> Swift bridged methods
	0x5a000  @objc AllInsightsViewController.viewDidLoad <stripped>
	0x5a0d0  @objc AllInsightsViewController.initWithCoder: <stripped>
	0x5a1f0  @objc AllInsightsViewController.initWithCollectionViewLayout: <stripped>
	0x5a380  @objc AllInsightsViewController.initWithNibName:bundle: <stripped>
 }

 enum HealthVisualization.Constants { }

 class HealthVisualization.TrendCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let variant : InsightVariant // +0x10 (0x1)
	let configuration : TrendConfiguration // +0x18 (0x19)

	// Swift methods
	0x5ac00  func <stripped> // method 
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
	var responses : [InsightResponse] // +0x18 (0x8)
	let request : InsightRequest // +0x20 (0xe0)
	let queryManager : InsightValueObservable // +0x100 (0x28)
	let aggregateIndexEventHorizon : Int // +0x128 (0x8)
	let calculatorFactory : InsightCalculatorOperationFactory // +0x130 (0x8)

	// ObjC -> Swift bridged methods
	0x61030  @objc InsightResponseProducerOperation.main <stripped>
	0x610b0  @objc InsightResponseProducerOperation.init <stripped>
	0x611a0  @objc InsightResponseProducerOperation..cxx_destruct <stripped>

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
	var state : State // +0x40 (0x8)
	var updateHandler : AnchoredChangeSet // +0x48 (0x8)
	let submissionQueue : OS_dispatch_queue // +0x50 (0x8)
	var query : _HKDatabaseChangesQuery? // +0x58 (0x8)
	var lock : UnfairLock // +0x60 (0x8)

	// Swift methods
	0x61e30  class func ChangeDetector.__allocating_init(healthStore:name:types:anchor:includeChangeDetails:updateHandler:) // init 
	0x61f70  func ChangeDetector.start() // method 
	0x621a0  func <stripped> // method 
	0x629a0  func ChangeDetector.stop() // method 
	0x62ac0  class func static ChangeDetector.Operation(for:anchor:healthStore:waitForChanges:includeChangeDetails:) // method 
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
	var horizontalMetrics : DiagramAxisMetrics? // +0x10 (0x18)
	var verticalMetrics : DiagramAxisMetrics? // +0x28 (0x18)
	let axisConfiguration : DiagramConfiguration.Axis? // +0x40 (0xc)
	let originalModelSpace : CGRect // +0x50 (0x20)
	let originalEdgeInsets : UIEdgeInsets? // +0x70 (0x21)
	let innerAxisInsets : CGSize? // +0x98 (0x11)

	// Swift methods
	0x66120  func <stripped> // method 
	0x661f0  func <stripped> // method 
 }

 struct HealthVisualization.InsightConfiguration {

	// Properties
	let aggregatedDataQueryConfig : StatisticsQueryConfiguration // +0x0
	let missingDataConfig : MissingDataConfiguration // +0x18
	let requestedTrends : TrendConfiguration? // +0x28
	let requestedOutliers : OutlierConfiguration? // +0x48
	let requestedStreaks : StreakConfiguration? // +0x60
	let requestedDistributions : DistributionConfiguration? // +0x90
	let requestedTimehops : TimehopConfiguration? // +0xa0
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
	var underlyingResult : Atomic<Result<HKStatisticsCollection>> // +0x30 (0x8)
	let sampleType : HKSampleType // +0x38 (0x8)
	let configuration : StatisticsQueryConfiguration // +0x40 (0x12)
	let configurationOverrides : StatisticsQueryConfigurationOverrides? // +0xde3a0 (0x0)
	let healthStore : HKHealthStore // +0xe3f8 (0x8)
	let query : HKStatisticsCollectionQuery // +0xde3a0 (0x8)
	var resultHandler : (_:)? // +0x0 (0x10)

	// ObjC -> Swift bridged methods
	0x6d620  @objc StatisticsCollectionQueryOperation.main <stripped>
	0x6d7e0  @objc StatisticsCollectionQueryOperation.init <stripped>
	0x6d8e0  @objc StatisticsCollectionQueryOperation..cxx_destruct <stripped>

	// Swift methods
	0x6c120  func StatisticsCollectionQueryOperation.result.getter // getter 
	0x6bf60  class func StatisticsCollectionQueryOperation.__allocating_init(sampleType:configuration:configurationOverrides:name:queryQualityOfService:healthStore:resultHandler:) // init 
 }

 class HealthVisualization.DiagramLine : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let diagramConfig : DiagramConfiguration.Line // +0x10 (0x14)
	let diagramData : DiagramData // +0x28 (0x30)
	let axisHandler : DiagramAxis // +0x58 (0x8)

	// Swift methods
	0x6dc40  func <stripped> // getter 
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
	var expectedDateInterval : DateInterval? // +0x0 (0x0)

	// Swift methods
	0x72520  func InsightValueCollectionConverter.expectedDateInterval.getter // getter 
	0x72560  func InsightValueCollectionConverter.expectedDateInterval.setter // setter 
	0x725b0  func InsightValueCollectionConverter.expectedDateInterval.modify // modifyCoroutine 
	0x722e0  class func InsightValueCollectionConverter.__allocating_init(unit:insightConfig:expectedDateInterval:) // init 
	0x72720  func InsightValueCollectionConverter.convert(from:) // method 
	0x73580  func <stripped> // method 
	0x73700  func <stripped> // method 
 }

 class HealthVisualization.DiagramBar : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let barDiagramConfig : DiagramConfiguration.Bar // +0x10 (0x1c)
	let barData : DiagramData // +0x30 (0x30)
	let axisHandler : DiagramAxis // +0x60 (0x8)

	// Swift methods
	0x77000  func <stripped> // getter 
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
	case failedQuery : (context: String, underlyingError: Error)
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
	let dateInterval : DateInterval?
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
	var underlyingResult : Atomic<Result<[HKActivitySummary]>> // +0x30 (0x8)
	let predicate : NSPredicate? // +0x38 (0x8)
	let orderedAscending : Bool // +0x40 (0x1)
	let limit : Int // +0x48 (0x8)
	let queryQualityOfService : NSQualityOfService // +0x50 (0x8)
	let healthStore : HKHealthStore // +0x58 (0x8)
	var resultHandler : (_:)? // +0x60 (0x10)
	var $__lazy_storage_$_query : HKQuery? // +0x70 (0x8)
	var $__lazy_storage_$_signpostID : OSSignpostID? // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0x7e8a0  @objc ActivitySummaryQueryOperation.main <stripped>
	0x7fb80  @objc ActivitySummaryQueryOperation.init <stripped>
	0x7fc70  @objc ActivitySummaryQueryOperation..cxx_destruct <stripped>

	// Swift methods
	0x7e150  class func ActivitySummaryQueryOperation.__allocating_init(predicate:orderedAscending:limit:name:queryQualityOfService:healthStore:resultHandler:) // init 
 }

 class HealthVisualization.HighlightCalendarDayView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let model : HighlightCalendarDayViewModel // +0x0 (0x0)
	var dayLabel : UILabel? // +0x0 (0x8)
	var todayIndicatorLayer : CALayer? // +0x0 (0x8)
	let ringsRenderer : ARUIRingsViewRenderer? // +0x0 (0x8)
	var activityRingsView : HKActivityRingView? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x83930  @objc HighlightCalendarDayView.axDate <stripped>
	0x83ad0  @objc HighlightCalendarDayView.axProbability <stripped>
	0x83bc0  @objc HighlightCalendarDayView.axProjectionKind <stripped>
	0x83cf0  @objc HighlightCalendarDayView.axCircleState <stripped>
	0x85000  @objc HighlightCalendarDayView.initWithCoder: <stripped>
	0x85020  @objc HighlightCalendarDayView.sizeThatFits: <stripped>
	0x85270  @objc HighlightCalendarDayView.layoutSubviews <stripped>
	0x852a0  @objc HighlightCalendarDayView.layoutSublayersOfLayer: <stripped>
	0x85850  @objc HighlightCalendarDayView.traitCollectionDidChange: <stripped>
	0x858a0  @objc HighlightCalendarDayView.initWithFrame: <stripped>
	0x85910  @objc HighlightCalendarDayView..cxx_destruct <stripped>

	// Swift methods
	0x839c0  func <stripped> // getter 
 }

 class HealthVisualization.DiagramAxisOnly : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let config : DiagramConfiguration.AxisOnly // +0x10 (0x11)
	let axisHandler : DiagramAxis // +0x28 (0x8)

	// Swift methods
	0x85fe0  func <stripped> // getter 
 }

 enum HealthVisualization.LocalizationReplacement {

	// Properties
	case direct : (key: String)
	case literal : (value: String)
	case quantity : (value: Double, unit: String)
 }

 class HealthVisualization.TrendTextSupport : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let response : InsightResponse // +0x6485 (0x0)
	var $__lazy_storage_$_dateFormatter : NSDateFormatter? // +0x0 (0x8)
	var $__lazy_storage_$_percentFormatter : NSNumberFormatter? // +0x0 (0x8)
	var $__lazy_storage_$_integerFormatter : NSNumberFormatter? // +0x0 (0x8)

	// Swift methods
	0x87190  class func TrendTextSupport.__allocating_init(with:) // init 
	0x873a0  func TrendTextSupport.localizedTitle.getter // getter 
	0x87620  func TrendTextSupport.localizedDescription.getter // getter 
	0x88820  class func TrendTextSupport.__allocating_init(from:) // init 
	0x88af0  func TrendTextSupport.encode(to:) // method 
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
	let relevantStartDate : Date
	let relevantEndDate : Date?
	let characteristics : [InsightCharacteristicKey : InsightCharacteristicValue]
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
	var underlyingResult : Atomic<Result<[HKQuantityType : HKStatisticsCollection]>> // +0x30 (0x8)
	let correlationType : HKCorrelationType // +0x38 (0x8)
	let correlatedQuantityTypes : [HKQuantityType] // +0x40 (0x8)
	let configuration : StatisticsQueryConfiguration // +0x48 (0x12)
	let configurationOverrides : StatisticsQueryConfigurationOverrides? // +0x2 (0x0)
	let queryQualityOfService : NSQualityOfService // +0x0 (0x8)
	let healthStore : HKHealthStore // +0x77735f5f (0x8)
	var accumulatedStatisticsCollections : Atomic<[HKQuantityType : HKStatisticsCollection]> // +0xec7a0 (0x8)
	var resultHandler : (_:)? // +0x0 (0x10)
	let operationQueue : NSOperationQueue // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x96240  @objc CorrelatedStatisticsCollectionQueryOperation.main <stripped>
	0x963f0  @objc CorrelatedStatisticsCollectionQueryOperation.init <stripped>
	0x96510  @objc CorrelatedStatisticsCollectionQueryOperation..cxx_destruct <stripped>

	// Swift methods
	0x94e40  class func CorrelatedStatisticsCollectionQueryOperation.__allocating_init(correlationType:correlatedQuantityTypes:configuration:configurationOverrides:name:queryQualityOfService:healthStore:resultHandler:) // init 
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
	let diagramConfig : DiagramConfiguration.HeartRateRecovery // +0x10 (0x4)
	let diagramData : DiagramData // +0x18 (0x30)
	var $__lazy_storage_$_allPoints : [CGPoint]? // +0x48 (0x8)
	var $__lazy_storage_$_perMinuteReadings : MinuteLine // +0x50 (0x8)

	// Swift methods
	0x9d6b0  func <stripped> // getter 
	0x9da20  func DiagramHeartRateRecovery.modelSpace.getter // getter 
	0x9da60  func DiagramHeartRateRecovery.screenInsets.getter // getter 
	0x9dd30  func DiagramHeartRateRecovery.drawingBlock.getter // getter 
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
	var underlyingResult : Atomic<Result<[_HKQuantityDistributionData]>> // +0x30 (0x8)
	let quantityType : HKQuantityType // +0x38 (0x8)
	let healthStore : HKHealthStore // +0x40 (0x8)
	var resultHandler : (_:)? // +0x48 (0x10)
	let baseDate : Date? // +0x664 (0x0)
	let configuration : QuantityDistributionConfiguration // +0x0 (0x10)
	let queryQualityOfService : NSQualityOfService // +0xf7ad4 (0x8)
	let queryStartDate : Date // +0x0 (0x0)
	let queryEndDate : Date // +0x0 (0x0)
	let anchorDate : Date // +0x77735f5f (0x0)
	let intervalComponents : DateComponents // +0x7061635f (0x0)
	let queryPredicate : NSPredicate? // +0x45545f5f (0x8)
	var $__lazy_storage_$_quantityDistributionQuery : _HKQuantityDistributionQuery? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0xa2230  @objc QuantityDistributionQueryOperation.main <stripped>
	0xa2930  @objc QuantityDistributionQueryOperation.init <stripped>
	0xa2aa0  @objc QuantityDistributionQueryOperation..cxx_destruct <stripped>

	// Swift methods
	0xa0480  func QuantityDistributionQueryOperation.result.getter // getter 
	0xa05b0  class func QuantityDistributionQueryOperation.__allocating_init(quantityType:configuration:configurationOverrides:name:queryQualityOfService:healthStore:baseDate:resultHandler:) // init 
	0xa2420  func <stripped> // method 
 }

 class HealthVisualization.InsightTextSupportFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xa3650  class func static InsightTextSupportFactory.textSupport(for:) // method 
 }

 class HealthVisualization.CurrentValueDateIntervalStatsCollectionConverter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xa37d0  class func CurrentValueDateIntervalStatsCollectionConverter.__allocating_init() // init 
	0xa3850  func CurrentValueDateIntervalStatsCollectionConverter.convert(from:) // method 
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
	0xa5960  @objc ItemDetailViewController.initWithCoder: <stripped>
	0xa6cd0  @objc ItemDetailViewController.viewDidLoad <stripped>
	0xa6e50  @objc ItemDetailViewController.initWithNibName:bundle: <stripped>
	0xa6ed0  @objc ItemDetailViewController..cxx_destruct <stripped>

	// Swift methods
	0xa4ff0  func ItemDetailViewController.scrollView.getter // getter 
	0xa5010  func ItemDetailViewController.scrollView.setter // setter 
	0xa5030  func ItemDetailViewController.scrollView.modify // modifyCoroutine 
	0xa5070  func ItemDetailViewController.closeButton.getter // getter 
	0xa5090  func ItemDetailViewController.closeButton.setter // setter 
	0xa50b0  func ItemDetailViewController.closeButton.modify // modifyCoroutine 
	0xa50f0  func ItemDetailViewController.allItemsButton.getter // getter 
	0xa5110  func ItemDetailViewController.allItemsButton.setter // setter 
	0xa5130  func ItemDetailViewController.allItemsButton.modify // modifyCoroutine 
	0xa5170  func ItemDetailViewController.containerView.getter // getter 
	0xa5190  func ItemDetailViewController.containerView.setter // setter 
	0xa51b0  func ItemDetailViewController.containerView.modify // modifyCoroutine 
	0xa51f0  func ItemDetailViewController.buttonStackView.getter // getter 
	0xa5250  func ItemDetailViewController.buttonStackView.setter // setter 
	0xa52b0  func ItemDetailViewController.buttonStackView.modify // modifyCoroutine 
	0xa5320  func ItemDetailViewController.associatedObjectTypeButtons.getter // getter 
	0xa5680  func ItemDetailViewController.associatedObjectTypeButtons.setter // setter 
	0xa56a0  func ItemDetailViewController.associatedObjectTypeButtons.modify // modifyCoroutine 
	0xa5710  class func ItemDetailViewController.__allocating_init(embedding:associatedObjectTypes:dataProvider:) // init 
 }

 struct HealthVisualization.HealthTypeProxy {

	// Properties
	let objectTypeIdentifier : String // +0x0
 }

 class HealthVisualization.InsightResponseCollatorOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var responses : [InsightResponse] // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xa93f0  @objc InsightResponseCollatorOperation.main <stripped>
	0xa9420  @objc InsightResponseCollatorOperation.init <stripped>
	0xa94e0  @objc InsightResponseCollatorOperation..cxx_destruct <stripped>

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
	var result : Result<AnchoredChangeSet>

	// ObjC -> Swift bridged methods
	0xabae0  @objc ChangeDetectorOperation.main <stripped>
	0xabbf0  @objc ChangeDetectorOperation.init <stripped>
	0xabce0  @objc ChangeDetectorOperation..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthVisualization.OnlineDateDistributionConverter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var endAggregateIndexUnderConsideration : Int // +0x10 (0x8)
	var nextAggregateIndexNeeded : Int // +0x18 (0x8)
	var relevantDateInterval : DateInterval? // +0x0 (0x0)
	let configuration : DistributionConfiguration // +0x0 (0x9)
	let binningCalculation : BinningCalculation // +0x0 (0x1)
	var bins : Bin // +0x0 (0x8)

	// Swift methods
	0xac430  func <stripped> // method 
	0xac6f0  func <stripped> // method 
	0xacba0  func <stripped> // method 
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

 enum HealthVisualization.CodingKeys {

	// Properties
	case bannerText  
	case bannerTextStyle  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case labelOptions  
	case labelAttributes  
	case valueAttributes  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case maxPointsAttributes  
	case minPointsAttributes  
 }

 class HealthVisualization.DiagramDateAxisMetricsCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xd0ca0  func <stripped> // method 
	0xd1250  func DiagramDateAxisMetricsCalculator.axisMetrics(for:customLocations:) // method 
 }

 struct HealthVisualization.DateTickIntervalStrategy {

	// Properties
	let enumerationAlgorithm : DiagramDateAxisMetricsCalculator.IntervalEnumerationAlgorithm
	let intervalMatchDateComponents : DateComponents
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
	var changesHandler : Atomic<(_:)>? // +0x30 (0x8)
	var queries : Atomic<[HKQuery]> // +0x38 (0x8)
	var lock : UnfairLock // +0x40 (0x8)
	var lock_pendingChangeSet : AnchoredChangeSet? // +0x48 (0x10)
	var lock_pendingError : Error? // +0x58 (0x8)
	var lock_dispatchPending : Bool // +0x60 (0x1)
	var lock_state : State // +0x61 (0x1)

	// ObjC -> Swift bridged methods
	0xd9b00  @objc AggregateChangeDetector.init <stripped>
	0xd9b80  @objc AggregateChangeDetector..cxx_destruct <stripped>

	// Swift methods
	0xd5670  func AggregateChangeDetector.dispatchPending.getter // getter 
	0xd5720  class func AggregateChangeDetector.__allocating_init(types:highFrequencyTypes:anchor:includeChangeDetails:name:healthStore:deliveryQueue:changesHandler:) // init 
	0xd67c0  func AggregateChangeDetector.start() // method 
	0xd6c00  func AggregateChangeDetector.stop() // method 
	0xd6de0  func AggregateChangeDetector.dispatchChanges() // method 
	0xd8270  func <stripped> // method 
	0xd8810  func <stripped> // method 
	0xd89a0  func <stripped> // method 
	0xd8bd0  func <stripped> // method 
 }

 enum HealthVisualization.State {

	// Properties
	case initialized  
	case started  
	case stopped  
 }
