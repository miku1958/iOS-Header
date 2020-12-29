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
 protocol HealthVisualization.DisplayTypeProviding // 3 requirements
 {
	// class base protocol
	// getter
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
 protocol HealthVisualization.CharacteristicChangePublisherHealthStoreProxy // 1 requirements
 {
	// method
 }
 protocol HealthVisualization.DisplayCategoryProviding // 2 requirements
 {
	// class base protocol
	// getter
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
 protocol HealthVisualization.QuantityTypeProviding // 1 requirements
 {
	// getter
 }
 protocol HealthVisualization.ChartContextProducing // 1 requirements
 {
	// getter
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
 protocol HealthVisualization.ChangePublisher // 1 requirements
 {
	// getter
 }

 struct __C.HKCharacteristicTypeIdentifier {

	// Properties
	var _rawValue : NSString
 }

 struct __C.UILayoutPriority {

	// Properties
	let rawValue : Float
 }

 enum __C.HKAxisLabelType { }

 struct __C.CGAffineTransform {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var a : ]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var b : ]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var c : ]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var d : ]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tx : ]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ty : ]
 }

 enum __C.QualityOfService { }

 enum __C._HKQuantityDistributionStyle { }

 struct __C.HKQuantityTypeIdentifier {

	// Properties
	var _rawValue : NSString
 }

 struct __C.NSKeyValueObservingOptions {

	// Properties
	let rawValue : UInt
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : ]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ]
 }

 class __C.CGContext {
 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ]
 }

 struct __C.UIEdgeInsets {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var top : ]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : ]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : ]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : ]
 }

 struct __C.SymbolicTraits {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : ˘
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.Options {

	// Properties
	let rawValue : UInt
 }

 enum __C.HKDisplayTypeIdentifier { }

 class __C.CGColor {
 struct HealthVisualization.SnippetConfiguration {

	// Properties
	let currentValueQueryConfig : QueryConfiguration // +0x0
	let showDefaultSupplementaryLabel : Bool // +0x21
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case currentValueQueryConfig  
	case showDefaultSupplementaryLabel  
 }

 struct HealthVisualization.SleepQueryConfiguration {

	// Properties
	let dateRange : DateRange // +0x0
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case dateRange  
 }

 class HealthVisualization.HistogramUtilities : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x6df0  class func <stripped> // method 
 }

 class HealthVisualization.DiagramDistribution : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let configuration : Distribution
	let data : DiagramData
	let minMaxParameters : DiagramDistributionMinMax
	let maxPointItems : DiagramPointAnnotations
	let minPointItems : DiagramPointAnnotations
	let axisHandler : DiagramAxis

	// Swift methods
	0x7220  func <stripped> // getter 
	0x73d0  func <stripped> // getter 
	0xaac0  func <stripped> // method 
	0xacd0  func <stripped> // method 
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
	let minLabelPoint : CGPoint // +0x80
	let maxLabelPoint : CGPoint // +0x98
	let minPoint : CGPoint // +0xb0
	let maxPoint : CGPoint // +0xc0
	let showIndicators : Bool // +0xd0
	let labelAttributes : Key // +0xd8
	let valueAttributes : Key // +0xe0
 }

 class HealthVisualization.Localization : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var localizationBundleTable : [NSBundle : String]
	let defaultLocalizationFile : String

	// Swift methods
	0xda10  class func <stripped> // method 
	0xda80  class func <stripped> // method 
	0xdaf0  class func <stripped> // method 
	0xdb70  class func <stripped> // method 
	0xdc60  func <stripped> // method 
	0xdea0  func <stripped> // method 
	0xe020  func <stripped> // method 
	0xe1c0  func <stripped> // method 
 }

 struct HealthVisualization.ObjectTypeConfiguration {

	// Properties
	let identifier : String // +0x0
	let numericalFormatting : NumericalFormatting // +0x10
	let snippetConfig : SnippetConfiguration // +0x18
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case identifier  
	case numericalFormatting  
	case snippetConfig  
 }

 class HealthVisualization.SampleQueryOperation {
 struct HealthVisualization.AudiogramQueryConfiguration {

	// Properties
	let mostRecentSample : MostRecentSampleQueryConfiguration // +0x0
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case mostRecentSample  
 }

 struct HealthVisualization.AudioExposureStatistics {

	// Properties
	let leqValue : Double
	let leqUnitString : String
	let secondsListened : Double
	let daysAggregated : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lastUpdated : É	
 }

 class HealthVisualization.AudioExposureStatisticsQueryOperation {
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
	var imageRenderer : UIGraphicsImageRenderer?
	var delegate : DiagramImageViewDelegate
	var lastUsedTransformer : DiagramTransformer
	var lastUsedModelSpace : CGRect

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd9340002d100 (0x1340002d100) in binary!
	0xd948  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xd96c0002d278 (0x16c0002d278) in binary!
	0xd930  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xd9540002d270 (0x1540002d270) in binary!
	0xd978  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xfc700002d278 (0x4700002d278) in binary!
	0xe18c  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xfc580002d2a8 (0x4580002d2a8) in binary!
	0xd978  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xe9ac0002d080 (0x1ac0002d080) in binary!
	0x58000000c  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xfc280002d230 (0x4280002d230) in binary!
	0xe144  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xd90c0002d200 (0x10c0002d200) in binary!
	0xfc04  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xe9640002d038 (0x1640002d038) in binary!
	0x28000000c  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xffdc0002cfe8 (0x7dc0002cfe8) in binary!
	0xffd0  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x54fff8ea68  @objc DiagramImageView.(null) <stripped>

	// Swift methods
	0x1cb20  func <stripped> // getter 
	0x1cb60  func <stripped> // setter 
	0x1cbc0  func <stripped> // modifyCoroutine 
	0x1ce30  func <stripped> // getter 
	0x1ced0  func <stripped> // setter 
	0x1cf90  func <stripped> // modifyCoroutine 
	0x1d0a0  func <stripped> // getter 
	0x1d0f0  func <stripped> // setter 
	0x1d130  func <stripped> // modifyCoroutine 
	0x1d800  func <stripped> // method 
	0x1dbe0  func <stripped> // method 
 }

 struct HealthVisualization.DiagramDrawBlockContext {

	// Properties
	let size : CGSize // +0x0
	let context : CGContext // +0x10
	let transformer : DiagramTransformer // +0x18
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

 enum HealthVisualization.DateRange {

	// Properties
	case unspecified  
	case allTime  
	case today  
	case rollingWeek  
	case rollingMonth  
 }

 struct HealthVisualization.QuantityDistributionConfigurationOverrides {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var dateInterval : w
	var predicate : NSPredicate?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var histogramWidth : Ø
 }

 struct HealthVisualization.EmptyQueryConfiguration { }

 enum HealthVisualization.CodingKeys { }

 enum HealthVisualization.ResultProducingError {

	// Properties
	case notStarted  
	case notConfigured  
	case notFinished  
	case canceled  
 }

 class HealthVisualization.DiagramAxisMetricsCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let axisLabelDimension : HKAxisLabelDimension
	let maximumLabelCount : Int
	let calculator : DiagramAxisLabel

	// Swift methods
	0x23540  class func DiagramAxisMetricsCalculator.__allocating_init(axisLabelDimension:maximumLabelCount:calculator:) // init 
	0x235c0  func <stripped> // method 
 }

 enum HealthVisualization.Constants { }

 struct HealthVisualization.DiagramDataGroup {

	// Properties
	let points : CGPoint // +0x0
	let annotation : String? // +0x8
	let supplementaryAnnotation : String? // +0x18
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
	0x26bb0  class func DiagramFactory.__allocating_init() // init 
	0x26be0  func <stripped> // method 
	0x26d60  func <stripped> // method 
	0x274a0  func <stripped> // method 
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
	case supplementaryAnnotation  
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
	let axDate : É	
	let axProbability : AXProbability
	let axProjectionKind : String?
 }

 class HealthVisualization.ConfigurationCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var cachedModels : ObjectTypeConfiguration
	let fileName : String
	let fileExtension : String
	let bundle : NSBundle

	// Swift methods
 }

 class HealthVisualization.DiagramMultiDayDateAxisMetricsCalculator : DiagramDateAxisMetricsCalculator {

	// Properties
	let durationThreshold6HourTickIntervals : Double
	let durationThreshold12HourTickIntervals : Double
	let durationThreshold1DayTickIntervals : Double
 }

 class HealthVisualization.HighlightCalendarView : NUIContainerGridView /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI {

	// Properties
	var longWeekdayStrings : [String]?
	var shortWeekdayStrings : [String]?
	var $__lazy_storage_$_ringsRenderer : ARUIRenderer?
	var weekdayLabels : [UILabel]
	var monthLabels : [UILabel]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfc280002d230 (0x4280002d230) in binary!
	0xe144  @objc HighlightCalendarView.(null) <stripped>
WARNING: couldn't find address 0xd90c0002d200 (0x10c0002d200) in binary!
	0xfc04  @objc HighlightCalendarView.(null) <stripped>
WARNING: couldn't find address 0xe9640002d038 (0x1640002d038) in binary!
	0x28000000c  @objc HighlightCalendarView.(null) <stripped>
WARNING: couldn't find address 0xffdc0002cfe8 (0x7dc0002cfe8) in binary!
	0xffd0  @objc HighlightCalendarView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x54fff8ea68  @objc HighlightCalendarView.(null) <stripped>

	// Swift methods
	0x316c0  func <stripped> // getter 
	0x31810  class func HighlightCalendarView.__allocating_init(model:) // init 
	0x325c0  func <stripped> // method 
	0x326f0  func <stripped> // method 
	0x32fb0  func <stripped> // method 
	0x33a40  func <stripped> // method 
 }

 class HealthVisualization.StatisticsQueryOperation {
 enum HealthVisualization.SharedDiagrams { }

 class HealthVisualization.CharacteristicChangePublisher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let characteristicToAffectedSampleTypes : HKCharacteristicTypeIdentifier
	let healthStore : CharacteristicChangePublisherHealthStoreProxy
	let context : String
	let queue : OS_dispatch_queue
WARNING: couldn't find address 0x0 (0x0) in binary!
	var observer : ˝
WARNING: couldn't find address 0x0 (0x0) in binary!
	var changeDetectionSubject : Õ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var underlyingCacheData : Õ

	// Swift methods
	0x36f30  func <stripped> // getter 
	0x37660  func <stripped> // getter 
	0x37690  class func CharacteristicChangePublisher.__allocating_init(characteristicToAffectedSampleTypes:cacheData:healthStore:context:) // init 
	0x378b0  func <stripped> // method 
 }

 struct HealthVisualization.CacheData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lastUpdatedDate : É	
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case lastUpdatedDate  
 }

 struct HealthVisualization.MostRecentSampleQueryConfiguration {

	// Properties
	let valueOverrideLocalizedStringKey : String? // +0x0
	let valueOverrideLocalizedStringTable : String? // +0x10
	let forceDayGranularity : Bool // +0x20
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case valueOverrideLocalizedStringKey  
	case valueOverrideLocalizedStringTable  
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

 class HealthVisualization.SleepQueryOperation {
 enum HealthVisualization.DiagramAxisMetricsOrientation {

	// Properties
	case horizontalAxis  
	case verticalAxis  
 }

 class HealthVisualization.DiagramAxisMetricsCalculatorFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib, DiagramAxisMetricsCalculatorProducing {
	// Swift methods
	0x3e3f0  class func DiagramAxisMetricsCalculatorFactory.__allocating_init() // init 
	0x3e420  func <stripped> // method 
 }

 class HealthVisualization.HiLoScalarAxisDimension : HKAxisLabelDimensionScalar /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let displayType : HKDisplayType?
	let valueFormatter : HKDisplayTypeValueFormatter?
	let unitPreferenceController : HKUnitPreferenceController?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfbc00002cff8 (0x3c00002cff8) in binary!
	0xffb0  @objc HiLoScalarAxisDimension.(null) <stripped>
WARNING: couldn't find address 0xe9140002cfe8 (0x1140002cfe8) in binary!
	0xb8000000c  @objc HiLoScalarAxisDimension.(null) <stripped>
WARNING: couldn't find address 0xff8c0002cfc0 (0x78c0002cfc0) in binary!
	0xfb7c  @objc HiLoScalarAxisDimension.(null) <stripped>

	// Swift methods
 }

 struct HealthVisualization.DiagramPointAnnotations {

	// Properties
	let pointAnnotations : CGPoint // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let linePadding : ] // +0x8
	let valueAttributes : Key // +0x10
 }

 enum HealthVisualization.SevenDayDoseOperationError {

	// Properties
	case notFinished  
	case cancelled  
	case invalidConfiguration  
	case invalidResults  
 }

 class HealthVisualization.SevenDayDoseOperation {
 struct HealthVisualization.DoseData {

	// Properties
	let points : CGPoint // +0x0
 }

 enum HealthVisualization.SevenDayDose { }

 class HealthVisualization.CountComparisonQueryOperation {
 class HealthVisualization.OngoingCycleFactorsSampleQueryOperation {
 class HealthVisualization.DiagramBanner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let bannerConfig : Banner
	let bannerData : DiagramData

	// Swift methods
 }

 class HealthVisualization.MostRecentSampleQueryOperationCore {
 class HealthVisualization.MostRecentSampleQueryOperation {
 struct HealthVisualization.AudioExposureQueryConfiguration {

	// Properties
	let statistics : StatisticsQueryConfiguration // +0x0
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case statistics  
 }

 struct HealthVisualization.SampleCountQueryConfiguration { }

 enum HealthVisualization.CodingKeys { }

 enum HealthVisualization.QueryConfiguration {

	// Properties
	case statistics : StatisticsQueryConfiguration
	case correlatedStatistics : CorrelatedStatisticsQueryConfiguration
	case sleep : SleepQueryConfiguration
	case mostRecentTimePeriod : MostRecentTimePeriodQueryConfiguration
	case mostRecentSample : MostRecentSampleQueryConfiguration
	case activitySummary : ActivitySummaryQueryConfiguration
	case audioExposure : AudioExposureQueryConfiguration
	case audiogram : AudiogramQueryConfiguration
	case sampleCount : SampleCountQueryConfiguration
	case standHours : MostRecentTimePeriodQueryConfiguration
	case contraceptive : EmptyQueryConfiguration
	case countComparison : CountComparisonQueryConfiguration
	case cardioFitness : EmptyQueryConfiguration
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
	case contraceptive  
	case countComparison  
	case cardioFitness  
 }

 class HealthVisualization.DiagramAxis : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var horizontalMetrics : DiagramAxisMetrics
	var verticalMetrics : DiagramAxisMetrics
	let axisConfiguration : Axis
	let originalModelSpace : CGRect
	let originalEdgeInsets : UIEdgeInsets
	let innerAxisInsets : CGSize

	// Swift methods
	0x4ca70  func <stripped> // method 
	0x4cae0  func <stripped> // method 
	0x4cf00  func <stripped> // method 
	0x4d170  func <stripped> // method 
	0x4e070  func <stripped> // method 
 }

 class HealthVisualization.StatisticsCollectionQueryOperation {
 class HealthVisualization.DiagramLine : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let diagramConfig : Line
	let diagramData : DiagramData
	let axisHandler : DiagramAxis
	let computedInsets : UIEdgeInsets
	let diagramMaxPointAnnotations : DiagramPointAnnotations

	// Swift methods
	0x52f10  func <stripped> // getter 
	0x53c90  func <stripped> // method 
	0x54f80  func <stripped> // method 
 }

 enum HealthVisualization.StatisticsOption {

	// Properties
	case discreteAverage  
	case discreteMinimum  
	case discreteMaximum  
	case cumulativeSum  
	case mostRecent  
	case duration  
	case averageDuration  
 }

 class HealthVisualization.DiagramBar : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let barDiagramConfig : Bar
	let barData : DiagramData
	let axisHandler : DiagramAxis

	// Swift methods
	0x5ab10  func <stripped> // getter 
	0x5bf10  func <stripped> // method 
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

 struct HealthVisualization.StatisticsQueryConfigurationOverrides {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateInterval : w
	let additionalPredicate : NSPredicate?
 }

 enum HealthVisualization.AnchorDate {

	// Properties
	case startOfToday  
	case startOfWeek  
	case startOfMonth  
	case startOfYear  
 }

 class HealthVisualization.ActivitySummaryQueryOperation {
 class HealthVisualization.HighlightCalendarDayView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let model : HighlightCalendarDayViewModel // +0x0 (0x0)
	var dayLabel : UILabel? // +0x0 (0x8)
	var todayIndicatorLayer : CALayer? // +0x0 (0x8)
	let ringsRenderer : ARUIRenderer? // +0x0 (0x8)
	var activityRingsView : HKActivityRingView? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xff8c0002cfc0 (0x78c0002cfc0) in binary!
	0xfb7c  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xff740002cf98 (0x7740002cf98) in binary!
	0xfb64  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xfb600002d168 (0x3600002d168) in binary!
	0xfb60  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xe8b40002d568 (0xb40002d568) in binary!
	0xe064  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xe0580002d278 (0x580002d278) in binary!
	0xd820  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xe8840002cf58 (0x840002cf58) in binary!
	0x48000000c  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xfb000002d108 (0x3000002d108) in binary!
	0xe860  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xd8140002d5e8 (0x140002d5e8) in binary!
	0xe848  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x71cfffc9660  @objc HighlightCalendarDayView.(null) <stripped>
	0x5b4fffc9a98  @objc HighlightCalendarDayView.HÖ…u#HçrH;u®çÔ <stripped>
	0xfffc92e0  @objc HighlightCalendarDayView.Â	 <stripped>

	// Swift methods
	0x64ad0  func <stripped> // getter 
 }

 class HealthVisualization.DiagramAxisOnly : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let config : AxisOnly
	let axisHandler : DiagramAxis

	// Swift methods
	0x67d40  func <stripped> // getter 
 }

 enum HealthVisualization.LocalizationReplacement {

	// Properties
	case direct : (key: String)
	case literal : (value: String)
	case quantity : (value: Double, unit: String)
 }

 enum HealthVisualization.StatisticsInterval {

	// Properties
	case oneHour  
	case oneDay  
	case oneWeek  
	case oneMonth  
	case oneYear  
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

 class HealthVisualization.CorrelatedStatisticsCollectionQueryOperation {
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
	case defaultBucketSize  
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
	let diagramConfig : HeartRateRecovery
	let diagramData : DiagramData
	var $__lazy_storage_$_allPoints : CGPoint
	var $__lazy_storage_$_perMinuteReadings : MinuteLine

	// Swift methods
	0x710b0  func <stripped> // getter 
	0x71100  func <stripped> // getter 
	0x71590  func <stripped> // getter 
	0x71610  func <stripped> // getter 
	0x71bb0  func <stripped> // getter 
	0x72b10  func <stripped> // method 
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

 class HealthVisualization.QuantityDistributionQueryOperation {
 struct HealthVisualization.MostRecentTimePeriodQueryConfiguration { }

 enum HealthVisualization.CodingKeys { }

 class HealthVisualization.ItemDetailViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var scrollView : UIScrollView?
	var closeButton : UIButton?
	var allItemsButton : UIButton?
	var containerView : UIView?
	var buttonStackView : UIStackView?
	let embeddedViewController : UIViewController
	var dataProvider : ItemDetailDataProviding
	var $__lazy_storage_$_associatedObjectTypeButtons : [UIButton]?
	let associatedObjectTypes : [HKObjectType]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfb000002d108 (0x3000002d108) in binary!
	0xe860  @objc ItemDetailViewController.(null) <stripped>
WARNING: couldn't find address 0xd8140002d5e8 (0x140002d5e8) in binary!
	0xe848  @objc ItemDetailViewController.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x71cfffc9660  @objc ItemDetailViewController.(null) <stripped>
	0x5b4fffc9a98  @objc ItemDetailViewController.HÖ…u#HçrH;u®çÔ <stripped>

	// Swift methods
	0x77560  func <stripped> // getter 
	0x77580  func <stripped> // setter 
	0x775a0  func <stripped> // modifyCoroutine 
	0x77620  func <stripped> // getter 
	0x77640  func <stripped> // setter 
	0x77660  func <stripped> // modifyCoroutine 
	0x776e0  func <stripped> // getter 
	0x77700  func <stripped> // setter 
	0x77720  func <stripped> // modifyCoroutine 
	0x777a0  func <stripped> // getter 
	0x777c0  func <stripped> // setter 
	0x777e0  func <stripped> // modifyCoroutine 
	0x77900  func <stripped> // getter 
	0x77960  func <stripped> // setter 
	0x779c0  func <stripped> // modifyCoroutine 
	0x77a80  func <stripped> // getter 
	0x77da0  func <stripped> // setter 
	0x77dc0  func <stripped> // modifyCoroutine 
	0x77e30  class func ItemDetailViewController.__allocating_init(embedding:associatedObjectTypes:dataProvider:) // init 
 }

 struct HealthVisualization.HealthTypeProxy {

	// Properties
	let objectTypeIdentifier : String // +0x0
	let healthStore : HKHealthStore? // +0x10
 }

 class HealthVisualization.DatabaseChangesProducer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, DatabaseChangesProducing {

	// Properties
	let hkQuery : _HKDatabaseChangesQuery
	let healthStore : HKHealthStore

	// Swift methods
 }

 class HealthVisualization.ChangeDetectorOperation {
 struct HealthVisualization.CountComparisonQueryConfiguration {

	// Properties
	var firstDurationCondition : DurationCondition // +0x0
	var secondDurationCondition : DurationCondition // +0x10
 }

 enum HealthVisualization.DurationCondition {

	// Properties
	case greaterThanOrEqualTo : Double
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case greaterThanOrEqualTo  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case firstDurationCondition  
	case secondDurationCondition  
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

 enum HealthVisualization.PointLabelConfigurationKeys {

	// Properties
	case minMax  
	case allPoints  
 }

 enum HealthVisualization.PointLabelConfiguration {

	// Properties
	case minMax : PointLabelMinMaxConfiguration
	case allPoints : PointLabelAllPointsConfiguration
 }

 struct HealthVisualization.PointLabelMinMaxSet {

	// Properties
	let rawValue : Int // +0x0
 }

 struct HealthVisualization.PointLabelMinMaxConfiguration {

	// Properties
	let labelOptions : PointLabelMinMaxSet // +0x0
	let labelAttributes : TextAttributes // +0x8
	let valueAttributes : TextAttributes // +0x9
	let avoidOverlappingLabelWithDataGroups : Bool // +0xa
 }

 struct HealthVisualization.PointLabelAllPointsConfiguration {

	// Properties
	let maxPointsAttributes : PointLabelAllPointsAttributes // +0x0
	let minPointsAttributes : PointLabelAllPointsAttributes // +0x1
 }

 struct HealthVisualization.PointLabelAllPointsAttributes {

	// Properties
	let valueAttributes : TextAttributes // +0x0
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
	let referenceLineTextAttributes : TextAttributes // +0x7
	let referenceAnnotationPosition : ReferenceAnnotationPosition // +0x8
	let axisText : TextAttributes // +0x9
	let baseValue : Double // +0x10
	let axis : Axis // +0x18
	let outerInsets : Insets // +0x26
 }

 struct HealthVisualization.Banner {

	// Properties
	let bannerText : String // +0x0
	let bannerTextStyle : TextAttributes // +0x10
 }

 struct HealthVisualization.AxisOnly {

	// Properties
	let axis : Axis // +0x0
	let horizontalAxisInset : AxisInset // +0xe
	let verticalAxisInset : AxisInset // +0xf
	let innerHorizontalInset : AxisInset // +0x10
	let innerVerticalInset : AxisInset // +0x11
	let drawModelAreaForDebug : Bool // +0x12
 }

 enum HealthVisualization.BarWidth {

	// Properties
	case hourWidth  
	case dayWidth  
	case weekWidth  
	case insightWidth  
 }

 struct HealthVisualization.Line {

	// Properties
	let lineProperties : LineProperties // +0x0
	let axis : Axis // +0x8
	let valueFormatter : ValueFormatter // +0x16
	let outerInsets : Insets // +0x17
 }

 struct HealthVisualization.LineProperties {

	// Properties
	let lineWidth : LineWidth // +0x0
	let lineColor : Color // +0x1
	let lineHighlightColor : Color // +0x2
	let linePointRadius : LineRadius // +0x3
	let lineCornerRadius : LineRadius // +0x4
	let referenceAnnotationPosition : ReferenceAnnotationPosition // +0x5
	let referenceLineColor : Color // +0x6
	let referenceLineWidth : LineWidth // +0x7
	let referenceLineTextAttributes : TextAttributes // +0x8
	let dataGroupForPointLabels : DiagramDataKey // +0x9
	let pointLabels : PointLabelConfiguration // +0x10
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
	case threeFourthsRadius  
	case fourThirdsRadius  
 }

 struct HealthVisualization.Distribution {

	// Properties
	let barWidth : DistributionWidth // +0x0
	let padding : DistributionPadding // +0x1
	let contentColor : Color // +0x2
	let highlightColor : Color // +0x3
	let referenceLineColor : Color // +0x4
	let referenceLineTextAttributes : TextAttributes // +0x5
	let referenceAnnotationPosition : ReferenceAnnotationPosition // +0x6
	let dataGroupForPointLabels : DiagramDataKey // +0x7
	let pointLabels : PointLabelConfiguration // +0x8
	let verticalLimits : DistributionLimits // +0x18
	let axis : Axis // +0x41
	let outerInsets : Insets // +0x4f
	let valueFormatter : ValueFormatter // +0x50
 }

 enum HealthVisualization.DistributionWidth {

	// Properties
	case defaultDistributionWidth  
	case weekDistributionWidth  
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
	let vertical : AxisProperties // +0x7
 }

 struct HealthVisualization.AxisProperties {

	// Properties
	let axisType : AxisType // +0x0
	let labelTextAttributes : TextAttributes // +0x1
	let labelColor : Color // +0x2
	let gridLineColor : Color // +0x3
	let gridLineWidth : AxisLineWidth // +0x4
	let majorTickLength : AxisTickLength // +0x5
	let minorTickLength : AxisTickLength // +0x6
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
	case halfWidth  
 }

 enum HealthVisualization.AxisType {

	// Properties
	case defaultDateAxis  
	case defaultDateRangeAxis  
	case defaultIntegerAxis  
	case defaultScalarAxis  
	case sleepAnalysisDurationAxis  
	case standHourDurationAxis  
	case mindfulSessionDurationAxis  
	case workoutDurationAxis  
	case heightLengthAxis  
	case audioVerticalAxis  
	case workoutHeartRateDateAxis  
	case sleepHeartRateDateAxis  
	case weekdayAxis  
	case multiDayDateAxis  
	case dayLabelBoundsDateAxis  
	case customAxis  
 }

 enum HealthVisualization.SharedConstants { }

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
	case referenceAnnotationCenterColor  
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

 enum HealthVisualization.Insets {

	// Properties
	case defaultDistributionInsets  
	case defaultBarInsets  
	case defaultLineInsets  
	case zeroInsets  
 }

 enum HealthVisualization.ValueFormatter {

	// Properties
	case standard  
	case percent  
 }

 enum HealthVisualization.TextAttributes {

	// Properties
	case averageAnnotationText  
	case snippetDiagramText  
	case defaultAxisText  
	case defaultVerticalAxisText  
	case dateRangeAxisText  
	case heavyRoundedVerticalAxisText  
	case referenceAnnotationCenterText  
	case hearingMinMaxLabel  
	case hearingMinMaxValue  
	case hearingPointAnnotationText  
	case workoutHeartRateMinMaxLabel  
	case workoutHeartRateMinMaxValue  
	case heartRateRecoveryTimeLabel  
	case heartRateRecoveryYValueLabel  
	case alertHeartRateAnnotationText  
	case alertHeartRatePointLabelText  
	case alertHearingAnnotationText  
	case alertHearingPointLabelText  
 }

 enum HealthVisualization.ReferenceAnnotationPosition {

	// Properties
	case leftMargin  
	case rightMargin  
	case center  
	case bottomMargin  
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
	case barWidth  
	case padding  
	case contentColor  
	case highlightColor  
	case referenceLineColor  
	case referenceLineTextAttributes  
	case referenceAnnotationPosition  
	case dataGroupForPointLabels  
	case pointLabels  
	case verticalLimits  
	case axis  
	case outerInsets  
	case valueFormatter  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case lineWidth  
	case lineColor  
	case lineHighlightColor  
	case linePointRadius  
	case lineCornerRadius  
	case referenceAnnotationPosition  
	case referenceLineColor  
	case referenceLineWidth  
	case referenceLineTextAttributes  
	case dataGroupForPointLabels  
	case pointLabels  
 }

 enum HealthVisualization.CodingKeys {

	// Properties
	case lineProperties  
	case axis  
	case valueFormatter  
	case outerInsets  
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
	case referenceLineTextAttributes  
	case referenceAnnotationPosition  
	case axisText  
	case baseValue  
	case axis  
	case outerInsets  
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
	case avoidOverlappingLabelWithDataGroups  
 }

 class HealthVisualization.DiagramDateRangeAxisMetricsCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xa4530  func <stripped> // method 
 }

 class HealthVisualization.DiagramDateAxisMetricsCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let boundsLabelsShouldShowDaySpan : Bool
	let customLabelDateFormatter : NSDateFormatter?

	// Swift methods
	0xa49f0  func <stripped> // method 
	0xa3ec0  func <stripped> // method 
	0xa4410  func <stripped> // method 
 }

 struct HealthVisualization.DateTickIntervalStrategy {

	// Properties
	let enumerationAlgorithm : IntervalEnumerationAlgorithm
WARNING: couldn't find address 0x0 (0x0) in binary!
	let intervalMatchDateComponents : ÒÛ
	let intervalDownsampleFactor : Int
	let useMajorTicksOnly : Bool
	let labelDateFormatter : NSDateFormatter
	let boundsLabelDateFormatter : NSDateFormatter
	let prefersRelativeDateFormatting : Bool
 }

 class HealthVisualization.DiagramWeekdayAxisMetricsCalculator : DiagramDateAxisMetricsCalculator { }

 enum HealthVisualization.IntervalEnumerationAlgorithm {

	// Properties
	case simple  
	case calendrical  
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

 class HealthVisualization.AggregateChangeDetector : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let healthStore : HKHealthStore
	let includeChangeDetails : Bool
	let name : String?
	let deliveryQueue : OS_dispatch_queue
WARNING: couldn't find address 0x0 (0x0) in binary!
	var changesHandler : ÔÓ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var queries : œÓ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let otherChangePublishers : ∑Ó
WARNING: couldn't find address 0x0 (0x0) in binary!
	var otherChanges : ôÓ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : Ó
	var lock_pendingChangeSet : AnchoredChangeSet
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock_pendingError : 9Ù
	var lock_dispatchPending : Bool
	var lock_state : State

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfe7c0002cf20 (0x67c0002cf20) in binary!
	0xe7e0  @objc AggregateChangeDetector.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x5483a4d4152  @objc AggregateChangeDetector.(null) <stripped>

	// Swift methods
	0xa75f0  func <stripped> // getter 
	0xa7670  class func AggregateChangeDetector.__allocating_init(types:highFrequencyTypes:anchor:includeChangeDetails:name:healthStore:deliveryQueue:changesHandler:otherChangePublishers:) // init 
	0xa7df0  func <stripped> // method 
	0xa8430  func <stripped> // method 
	0xa8590  func <stripped> // method 
	0xa9ef0  func <stripped> // method 
	0xaa400  func <stripped> // method 
	0xaa660  func <stripped> // method 
	0xaa8b0  func <stripped> // method 
 }

 enum HealthVisualization.State {

	// Properties
	case initialized  
	case started  
	case stopped  
 }
