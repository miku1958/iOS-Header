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

 struct __C.UILayoutPriority {

	// Properties
	let rawValue : Float
 }

 enum __C.HKAxisLabelType { }

 struct __C.CGAffineTransform {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var a : ­
WARNING: couldn't find address 0x0 (0x0) in binary!
	var b : ­
WARNING: couldn't find address 0x0 (0x0) in binary!
	var c : ­
WARNING: couldn't find address 0x0 (0x0) in binary!
	var d : ­
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tx : ­
WARNING: couldn't find address 0x0 (0x0) in binary!
	var ty : ­
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
	var x : ­
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ­
 }

 class __C.CGContext {
 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ­
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ­
 }

 struct __C.UIEdgeInsets {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var top : ­
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : ­
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : ­
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : ­
 }

 struct __C.SymbolicTraits {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : Á
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
	0x6bc0  class func <stripped> // method 
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
	0x6ff0  func <stripped> // getter 
	0x71a0  func <stripped> // getter 
	0xa890  func <stripped> // method 
	0xaaa0  func <stripped> // method 
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
	0xd7d0  class func <stripped> // method 
	0xd840  class func <stripped> // method 
	0xd8b0  class func <stripped> // method 
	0xd930  class func <stripped> // method 
	0xda20  func <stripped> // method 
	0xdc60  func <stripped> // method 
	0xdde0  func <stripped> // method 
	0xdf80  func <stripped> // method 
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
	let lastUpdated : ñ
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
WARNING: couldn't find address 0xd2940002ac30 (0x2940002ac30) in binary!
	0xd2a8  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xd2cc0002ada8 (0x2cc0002ada8) in binary!
	0xd290  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xd2b40002ada0 (0x2b40002ada0) in binary!
	0xd2d8  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xef500002ada8 (0x7500002ada8) in binary!
	0xdaec  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xef380002add8 (0x7380002add8) in binary!
	0xd2d8  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xf3140002abb0 (0x3140002abb0) in binary!
	0x58000000c  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xef080002ad60 (0x7080002ad60) in binary!
	0xdaa4  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xd26c0002ad30 (0x26c0002ad30) in binary!
	0xeee4  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xf2cc0002ab68 (0x2cc0002ab68) in binary!
	0x28000000c  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xf2bc0002ab18 (0x2bc0002ab18) in binary!
	0xf2b0  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x384fff91a88  @objc DiagramImageView.(null) <stripped>

	// Swift methods
	0x1c830  func <stripped> // getter 
	0x1c870  func <stripped> // setter 
	0x1c8d0  func <stripped> // modifyCoroutine 
	0x1cb40  func <stripped> // getter 
	0x1cbe0  func <stripped> // setter 
	0x1cca0  func <stripped> // modifyCoroutine 
	0x1cdb0  func <stripped> // getter 
	0x1ce00  func <stripped> // setter 
	0x1ce40  func <stripped> // modifyCoroutine 
	0x1d510  func <stripped> // method 
	0x1d8f0  func <stripped> // method 
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
	var dateInterval : åý
	var predicate : NSPredicate?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var histogramWidth : þ
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
	0x23210  class func DiagramAxisMetricsCalculator.__allocating_init(axisLabelDimension:maximumLabelCount:calculator:) // init 
	0x23290  func <stripped> // method 
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
	0x26880  class func DiagramFactory.__allocating_init() // init 
	0x268b0  func <stripped> // method 
	0x26a30  func <stripped> // method 
	0x27170  func <stripped> // method 
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
	let axDate : ñ
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
WARNING: couldn't find address 0xef080002ad60 (0x7080002ad60) in binary!
	0xdaa4  @objc HighlightCalendarView.(null) <stripped>
WARNING: couldn't find address 0xd26c0002ad30 (0x26c0002ad30) in binary!
	0xeee4  @objc HighlightCalendarView.(null) <stripped>
WARNING: couldn't find address 0xf2cc0002ab68 (0x2cc0002ab68) in binary!
	0x28000000c  @objc HighlightCalendarView.(null) <stripped>
WARNING: couldn't find address 0xf2bc0002ab18 (0x2bc0002ab18) in binary!
	0xf2b0  @objc HighlightCalendarView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x384fff91a88  @objc HighlightCalendarView.(null) <stripped>

	// Swift methods
	0x313c0  func <stripped> // getter 
	0x31510  class func HighlightCalendarView.__allocating_init(model:) // init 
	0x322c0  func <stripped> // method 
	0x323f0  func <stripped> // method 
	0x32cb0  func <stripped> // method 
	0x33740  func <stripped> // method 
 }

 class HealthVisualization.StatisticsQueryOperation {
 enum HealthVisualization.SharedDiagrams { }

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
	0x398e0  class func DiagramAxisMetricsCalculatorFactory.__allocating_init() // init 
	0x39910  func <stripped> // method 
 }

 class HealthVisualization.HiLoScalarAxisDimension : HKAxisLabelDimensionScalar /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let displayType : HKDisplayType?
	let valueFormatter : HKDisplayTypeValueFormatter?
	let unitPreferenceController : HKUnitPreferenceController?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xeea00002ab28 (0x6a00002ab28) in binary!
	0xf290  @objc HiLoScalarAxisDimension.(null) <stripped>
WARNING: couldn't find address 0xf27c0002ab18 (0x27c0002ab18) in binary!
	0xb8000000c  @objc HiLoScalarAxisDimension.(null) <stripped>
WARNING: couldn't find address 0xf26c0002aaf0 (0x26c0002aaf0) in binary!
	0xee5c  @objc HiLoScalarAxisDimension.(null) <stripped>

	// Swift methods
 }

 struct HealthVisualization.DiagramPointAnnotations {

	// Properties
	let pointAnnotations : CGPoint // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let linePadding : ­ // +0x8
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
	case countComparison : CountComparisonQueryConfiguration
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
	case countComparison  
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
	0x45f70  func <stripped> // method 
	0x45fe0  func <stripped> // method 
	0x46400  func <stripped> // method 
	0x46690  func <stripped> // method 
	0x47590  func <stripped> // method 
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
	0x4c420  func <stripped> // getter 
	0x4d1a0  func <stripped> // method 
	0x4e490  func <stripped> // method 
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
	0x53f30  func <stripped> // getter 
	0x55330  func <stripped> // method 
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
	let dateInterval : åý
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
WARNING: couldn't find address 0xf26c0002aaf0 (0x26c0002aaf0) in binary!
	0xee5c  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xf2540002aac8 (0x2540002aac8) in binary!
	0xee44  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xee400002ac98 (0x6400002ac98) in binary!
	0xee40  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xf21c0002b050 (0x21c0002b050) in binary!
	0xd9c4  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xd9b80002ada8 (0x1b80002ada8) in binary!
	0xd180  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xf1ec0002aa88 (0x1ec0002aa88) in binary!
	0x48000000c  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xede00002ac38 (0x5e00002ac38) in binary!
	0xf1c8  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xd1740002b0d0 (0x1740002b0d0) in binary!
	0xf1b0  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x204fffca150  @objc HighlightCalendarDayView.(null) <stripped>
	0x9cfffca588  @objc HighlightCalendarDayView.èé{	 <stripped>
	0xfffc9dd0  @objc HighlightCalendarDayView.t
öEÔ…íýÿÿL‰ïÿ„  <stripped>

	// Swift methods
	0x5dab0  func <stripped> // getter 
 }

 class HealthVisualization.DiagramAxisOnly : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let config : AxisOnly
	let axisHandler : DiagramAxis

	// Swift methods
	0x60d10  func <stripped> // getter 
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
	0x6a080  func <stripped> // getter 
	0x6a0d0  func <stripped> // getter 
	0x6a560  func <stripped> // getter 
	0x6a5e0  func <stripped> // getter 
	0x6ab80  func <stripped> // getter 
	0x6bae0  func <stripped> // method 
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
WARNING: couldn't find address 0xede00002ac38 (0x5e00002ac38) in binary!
	0xf1c8  @objc ItemDetailViewController.(null) <stripped>
WARNING: couldn't find address 0xd1740002b0d0 (0x1740002b0d0) in binary!
	0xf1b0  @objc ItemDetailViewController.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x204fffca150  @objc ItemDetailViewController.(null) <stripped>
	0x9cfffca588  @objc ItemDetailViewController.èé{	 <stripped>

	// Swift methods
	0x70520  func <stripped> // getter 
	0x70540  func <stripped> // setter 
	0x70560  func <stripped> // modifyCoroutine 
	0x705e0  func <stripped> // getter 
	0x70600  func <stripped> // setter 
	0x70620  func <stripped> // modifyCoroutine 
	0x706a0  func <stripped> // getter 
	0x706c0  func <stripped> // setter 
	0x706e0  func <stripped> // modifyCoroutine 
	0x70760  func <stripped> // getter 
	0x70780  func <stripped> // setter 
	0x707a0  func <stripped> // modifyCoroutine 
	0x708c0  func <stripped> // getter 
	0x70920  func <stripped> // setter 
	0x70980  func <stripped> // modifyCoroutine 
	0x70a40  func <stripped> // getter 
	0x70d60  func <stripped> // setter 
	0x70d80  func <stripped> // modifyCoroutine 
	0x70df0  class func ItemDetailViewController.__allocating_init(embedding:associatedObjectTypes:dataProvider:) // init 
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
	0x9d930  func <stripped> // method 
 }

 class HealthVisualization.DiagramDateAxisMetricsCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let boundsLabelsShouldShowDaySpan : Bool
	let customLabelDateFormatter : NSDateFormatter?

	// Swift methods
	0x9ddf0  func <stripped> // method 
	0x9d2d0  func <stripped> // method 
	0x9d820  func <stripped> // method 
 }

 struct HealthVisualization.DateTickIntervalStrategy {

	// Properties
	let enumerationAlgorithm : IntervalEnumerationAlgorithm
WARNING: couldn't find address 0x0 (0x0) in binary!
	let intervalMatchDateComponents : #î
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
	var changesHandler : +é
WARNING: couldn't find address 0x0 (0x0) in binary!
	var queries : é
WARNING: couldn't find address 0x0 (0x0) in binary!
	let otherChangePublishers : óè
WARNING: couldn't find address 0x0 (0x0) in binary!
	var otherChanges : Õè
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : cè
	var lock_pendingChangeSet : AnchoredChangeSet
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock_pendingError : õí
	var lock_dispatchPending : Bool
	var lock_state : State

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xf15c0002aa50 (0x15c0002aa50) in binary!
	0xf148  @objc AggregateChangeDetector.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x5483a4d4152  @objc AggregateChangeDetector.(null) <stripped>

	// Swift methods
	0xa09c0  func <stripped> // getter 
	0xa0a60  class func AggregateChangeDetector.__allocating_init(types:highFrequencyTypes:anchor:includeChangeDetails:name:healthStore:deliveryQueue:changesHandler:otherChangePublishers:) // init 
	0xa11e0  func <stripped> // method 
	0xa1820  func <stripped> // method 
	0xa1980  func <stripped> // method 
	0xa32e0  func <stripped> // method 
	0xa37f0  func <stripped> // method 
	0xa3a50  func <stripped> // method 
	0xa3ca0  func <stripped> // method 
 }

 enum HealthVisualization.State {

	// Properties
	case initialized  
	case started  
	case stopped  
 }
