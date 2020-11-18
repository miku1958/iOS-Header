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
	var a : ›

WARNING: couldn't find address 0x0 (0x0) in binary!
	var b : ›

WARNING: couldn't find address 0x0 (0x0) in binary!
	var c : ›

WARNING: couldn't find address 0x0 (0x0) in binary!
	var d : ›

WARNING: couldn't find address 0x0 (0x0) in binary!
	var tx : ›

WARNING: couldn't find address 0x0 (0x0) in binary!
	var ty : ›

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
	var x : ›

WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ›

 }

 class __C.CGContext {
 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ›

WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ›

 }

 struct __C.UIEdgeInsets {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var top : ›

WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : ›

WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : ›

WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : ›

 }

 struct __C.SymbolicTraits {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : q
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
	0x7740  class func <stripped> // method 
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
	0x7b70  func <stripped> // getter 
	0x7d20  func <stripped> // getter 
	0xb410  func <stripped> // method 
	0xb620  func <stripped> // method 
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
	0xe360  class func <stripped> // method 
	0xe3d0  class func <stripped> // method 
	0xe440  class func <stripped> // method 
	0xe4c0  class func <stripped> // method 
	0xe5b0  func <stripped> // method 
	0xe7f0  func <stripped> // method 
	0xe970  func <stripped> // method 
	0xeb10  func <stripped> // method 
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
	let lastUpdated : 
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
WARNING: couldn't find address 0xd8240002b9c0 (0x240002b9c0) in binary!
	0xd838  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xd85c0002bb38 (0x5c0002bb38) in binary!
	0xd820  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xd8440002bb30 (0x440002bb30) in binary!
	0xd868  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xf8b00002bb38 (0xb00002bb38) in binary!
	0xe07c  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xf8980002bb68 (0x980002bb68) in binary!
	0xd868  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xfc740002b940 (0x4740002b940) in binary!
	0x58000000c  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xf8680002baf0 (0x680002baf0) in binary!
	0xe034  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xd7fc0002bac0 (0x7fc0002bac0) in binary!
	0xf844  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xfc2c0002b8f8 (0x42c0002b8f8) in binary!
	0x28000000c  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0xfc1c0002b8a8 (0x41c0002b8a8) in binary!
	0xfc10  @objc DiagramImageView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x114fff90b68  @objc DiagramImageView.(null) <stripped>

	// Swift methods
	0x1d450  func <stripped> // getter 
	0x1d490  func <stripped> // setter 
	0x1d4f0  func <stripped> // modifyCoroutine 
	0x1d760  func <stripped> // getter 
	0x1d800  func <stripped> // setter 
	0x1d8c0  func <stripped> // modifyCoroutine 
	0x1d9d0  func <stripped> // getter 
	0x1da20  func <stripped> // setter 
	0x1da60  func <stripped> // modifyCoroutine 
	0x1e130  func <stripped> // method 
	0x1e510  func <stripped> // method 
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
	var dateInterval : ˜
	var predicate : NSPredicate?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var histogramWidth : /
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
	0x23e70  class func DiagramAxisMetricsCalculator.__allocating_init(axisLabelDimension:maximumLabelCount:calculator:) // init 
	0x23ef0  func <stripped> // method 
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
	0x274e0  class func DiagramFactory.__allocating_init() // init 
	0x27510  func <stripped> // method 
	0x27690  func <stripped> // method 
	0x27dd0  func <stripped> // method 
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
	let axDate : 
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
WARNING: couldn't find address 0xf8680002baf0 (0x680002baf0) in binary!
	0xe034  @objc HighlightCalendarView.(null) <stripped>
WARNING: couldn't find address 0xd7fc0002bac0 (0x7fc0002bac0) in binary!
	0xf844  @objc HighlightCalendarView.(null) <stripped>
WARNING: couldn't find address 0xfc2c0002b8f8 (0x42c0002b8f8) in binary!
	0x28000000c  @objc HighlightCalendarView.(null) <stripped>
WARNING: couldn't find address 0xfc1c0002b8a8 (0x41c0002b8a8) in binary!
	0xfc10  @objc HighlightCalendarView.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x114fff90b68  @objc HighlightCalendarView.(null) <stripped>

	// Swift methods
	0x31fd0  func <stripped> // getter 
	0x32120  class func HighlightCalendarView.__allocating_init(model:) // init 
	0x32ed0  func <stripped> // method 
	0x33000  func <stripped> // method 
	0x338c0  func <stripped> // method 
	0x34350  func <stripped> // method 
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
	var observer : u˛
WARNING: couldn't find address 0x0 (0x0) in binary!
	var changeDetectionSubject : E
WARNING: couldn't find address 0x0 (0x0) in binary!
	var underlyingCacheData : E˛

	// Swift methods
	0x37840  func <stripped> // getter 
	0x37f70  func <stripped> // getter 
	0x37fa0  class func CharacteristicChangePublisher.__allocating_init(characteristicToAffectedSampleTypes:cacheData:healthStore:context:) // init 
	0x381c0  func <stripped> // method 
 }

 struct HealthVisualization.CacheData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lastUpdatedDate : 
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
	0x3ec30  class func DiagramAxisMetricsCalculatorFactory.__allocating_init() // init 
	0x3ec60  func <stripped> // method 
 }

 class HealthVisualization.HiLoScalarAxisDimension : HKAxisLabelDimensionScalar /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let displayType : HKDisplayType?
	let valueFormatter : HKDisplayTypeValueFormatter?
	let unitPreferenceController : HKUnitPreferenceController?

	// ObjC -> Swift bridged methods
	0xfbf0  @objc HiLoScalarAxisDimension.î¿]√ <stripped>
WARNING: couldn't find address 0xfbdc0002b8a8 (0x3dc0002b8a8) in binary!
	0xb8000000c  @objc HiLoScalarAxisDimension.(null) <stripped>
WARNING: couldn't find address 0xfbcc0002b880 (0x3cc0002b880) in binary!
	0xf7bc  @objc HiLoScalarAxisDimension.(null) <stripped>

	// Swift methods
 }

 struct HealthVisualization.DiagramPointAnnotations {

	// Properties
	let pointAnnotations : CGPoint // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let linePadding : ›
 // +0x8
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
	0x4b2c0  func <stripped> // method 
	0x4b330  func <stripped> // method 
	0x4b750  func <stripped> // method 
	0x4b9c0  func <stripped> // method 
	0x4c8c0  func <stripped> // method 
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
	0x51760  func <stripped> // getter 
	0x524e0  func <stripped> // method 
	0x537d0  func <stripped> // method 
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
	0x59290  func <stripped> // getter 
	0x5a690  func <stripped> // method 
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
	let dateInterval : ˜
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
WARNING: couldn't find address 0xfbcc0002b880 (0x3cc0002b880) in binary!
	0xf7bc  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xfbb40002b858 (0x3b40002b858) in binary!
	0xf7a4  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xf7a00002ba28 (0x7a00002ba28) in binary!
	0xf7a0  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xfb7c0002bdf8 (0x37c0002bdf8) in binary!
	0xdf54  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xdf480002bb38 (0x7480002bb38) in binary!
	0xd710  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xfb4c0002b818 (0x34c0002b818) in binary!
	0x48000000c  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xf7400002b9c8 (0x7400002b9c8) in binary!
	0xfb28  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0xd7040002be78 (0x7040002be78) in binary!
	0xfb10  @objc HighlightCalendarDayView.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x7acfffc96a0  @objc HighlightCalendarDayView.(null) <stripped>
	0x644fffc9ad8  @objc HighlightCalendarDayView.Ñç <stripped>
	0xfffc9320  @objc HighlightCalendarDayView. <stripped>

	// Swift methods
	0x63250  func <stripped> // getter 
 }

 class HealthVisualization.DiagramAxisOnly : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let config : AxisOnly
	let axisHandler : DiagramAxis

	// Swift methods
	0x664c0  func <stripped> // getter 
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
	0x6f830  func <stripped> // getter 
	0x6f880  func <stripped> // getter 
	0x6fd10  func <stripped> // getter 
	0x6fd90  func <stripped> // getter 
	0x70330  func <stripped> // getter 
	0x71290  func <stripped> // method 
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
WARNING: couldn't find address 0xf7400002b9c8 (0x7400002b9c8) in binary!
	0xfb28  @objc ItemDetailViewController.(null) <stripped>
WARNING: couldn't find address 0xd7040002be78 (0x7040002be78) in binary!
	0xfb10  @objc ItemDetailViewController.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x7acfffc96a0  @objc ItemDetailViewController.(null) <stripped>
	0x644fffc9ad8  @objc ItemDetailViewController.Ñç <stripped>

	// Swift methods
	0x75ce0  func <stripped> // getter 
	0x75d00  func <stripped> // setter 
	0x75d20  func <stripped> // modifyCoroutine 
	0x75da0  func <stripped> // getter 
	0x75dc0  func <stripped> // setter 
	0x75de0  func <stripped> // modifyCoroutine 
	0x75e60  func <stripped> // getter 
	0x75e80  func <stripped> // setter 
	0x75ea0  func <stripped> // modifyCoroutine 
	0x75f20  func <stripped> // getter 
	0x75f40  func <stripped> // setter 
	0x75f60  func <stripped> // modifyCoroutine 
	0x76080  func <stripped> // getter 
	0x760e0  func <stripped> // setter 
	0x76140  func <stripped> // modifyCoroutine 
	0x76200  func <stripped> // getter 
	0x76520  func <stripped> // setter 
	0x76540  func <stripped> // modifyCoroutine 
	0x765b0  class func ItemDetailViewController.__allocating_init(embedding:associatedObjectTypes:dataProvider:) // init 
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
	0xa2cb0  func <stripped> // method 
 }

 class HealthVisualization.DiagramDateAxisMetricsCalculator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let boundsLabelsShouldShowDaySpan : Bool
	let customLabelDateFormatter : NSDateFormatter?

	// Swift methods
	0xa3170  func <stripped> // method 
	0xa2640  func <stripped> // method 
	0xa2b90  func <stripped> // method 
 }

 struct HealthVisualization.DateTickIntervalStrategy {

	// Properties
	let enumerationAlgorithm : IntervalEnumerationAlgorithm
WARNING: couldn't find address 0x0 (0x0) in binary!
	let intervalMatchDateComponents : 9Ò
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
	var changesHandler : /Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var queries : Ï
WARNING: couldn't find address 0x0 (0x0) in binary!
	let otherChangePublishers : ˜Î
WARNING: couldn't find address 0x0 (0x0) in binary!
	var otherChanges : ŸÎ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : gÎ
	var lock_pendingChangeSet : AnchoredChangeSet
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock_pendingError : yÒ
	var lock_dispatchPending : Bool
	var lock_state : State

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xfabc0002b7e0 (0x2bc0002b7e0) in binary!
	0xfaa8  @objc AggregateChangeDetector.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x5483a4d4152  @objc AggregateChangeDetector.(null) <stripped>

	// Swift methods
	0xa5d70  func <stripped> // getter 
	0xa5df0  class func AggregateChangeDetector.__allocating_init(types:highFrequencyTypes:anchor:includeChangeDetails:name:healthStore:deliveryQueue:changesHandler:otherChangePublishers:) // init 
	0xa6570  func <stripped> // method 
	0xa6bb0  func <stripped> // method 
	0xa6d10  func <stripped> // method 
	0xa8670  func <stripped> // method 
	0xa8b80  func <stripped> // method 
	0xa8de0  func <stripped> // method 
	0xa9030  func <stripped> // method 
 }

 enum HealthVisualization.State {

	// Properties
	case initialized  
	case started  
	case stopped  
 }
