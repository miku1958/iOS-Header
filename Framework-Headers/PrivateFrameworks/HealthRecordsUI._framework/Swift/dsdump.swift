 protocol HealthRecordsUI.CategoryProvider // 6 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// getter
	// method
 }
 protocol HealthRecordsUI.TaskScheduler // 1 requirements
 {
	// method
 }
 protocol HealthRecordsUI.AsserterProvider // 1 requirements
 {
	// getter
 }
 protocol HealthRecordsUI.Cache // 8 requirements
 {
	// class associated type access function
	// class associated type access function
	// class init
	// getter
	// setter
	// modify coroutine
	// method
	// method
 }
 protocol HealthRecordsUI.NoteProvider // 1 requirements
 {
	// getter
 }
 protocol HealthRecordsUI.HKMedicalDateOrNil // 1 requirements
 {
	// method
 }
 protocol HealthRecordsUI.DosagesProvider // 1 requirements
 {
	// getter
 }
 protocol HealthRecordsUI.HKConceptOrNil // 1 requirements
 {
	// method
 }
 protocol HealthRecordsUI.StatusProvider // 6 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// getter
	// method
 }
 protocol HealthRecordsUI.CategoryCountDataProviderProtocol // 1 requirements
 {
	// method
 }
 protocol HealthRecordsUI.EarliestDosageDateProvider // 2 requirements
 {
	// class base protocol
	// getter
 }
 protocol HealthRecordsUI.ViewControllerFactoryProtocol // 4 requirements
 {
	// class base protocol
	// class base protocol
	// class base protocol
	// class base protocol
 }
 protocol HealthRecordsUI.AccountViewControllerFactory // 6 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol HealthRecordsUI.CategoryViewControllerFactory // 1 requirements
 {
	// method
 }
 protocol HealthRecordsUI.ConceptViewControllerFactory // 2 requirements
 {
	// method
	// method
 }
 protocol HealthRecordsUI.RecordViewControllerFactory // 2 requirements
 {
	// method
	// method
 }
 protocol HealthRecordsUI.SampleQueryDescription // 2 requirements
 {
	// getter
	// getter
 }
 protocol HealthRecordsUI.HKMedicalCodingContextOrNil // 1 requirements
 {
	// method
 }
 protocol HealthRecordsUI.FeedItemActionData // 4 requirements
 {
	// class base protocol
	// class base protocol
	// class base protocol
	// class getter
 }
 protocol HealthRecordsUI.FeedItemActionProtocol // 1 requirements
 {
	// method
 }
 protocol HealthRecordsUI.IssueDateProvider // 4 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// getter
 }
 protocol HealthRecordsUI.PreferredNameProvider // 2 requirements
 {
	// method
	// method
 }
 protocol HealthRecordsUI.MeaningfulDateTitleProvider // 1 requirements
 {
	// getter
 }
 protocol HealthRecordsUI.EffectiveDateProvider // 3 requirements
 {
	// class base protocol
	// getter
	// getter
 }
 protocol HealthRecordsUI.ReplayableViewController // 1 requirements
 {
	// method
 }
 protocol HealthRecordsUI.MedicalObjectFormatter // 7 requirements
 {
	// class base protocol
	// class base protocol
	// class associated type access function
	// getter
	// getter
	// class init
	// method
 }
 protocol HealthRecordsUI.MedicalRecordFormatterProtocol // 1 requirements
 {
	// class base protocol
 }
 protocol HealthRecordsUI.MedicalRecordChartData // 4 requirements
 {
	// getter
	// getter
	// getter
	// getter
 }
 protocol HealthRecordsUI.DynamicViewProtocol // 5 requirements
 {
	// class associated type access function
	// method
	// method
	// method
	// method
 }
 protocol HealthRecordsUI.RecordKindDataProviderProtocol // 2 requirements
 {
	// method
	// method
 }
 protocol HealthRecordsUI.BodySiteProvider // 2 requirements
 {
	// getter
	// method
 }
 protocol HealthRecordsUI.BodySitesProvider // 2 requirements
 {
	// getter
	// method
 }

 struct __C.CGSize {

	// Properties
	var width : CGFloat
	var height : CGFloat
 }

 struct __C.CGPoint {

	// Properties
	var x : CGFloat
	var y : CGFloat
 }

 struct __C.TextStyle {

	// Properties
	var _rawValue : NSString
 }

 enum __C.HKTimeScope { }

 enum __C.HKConceptIndexManagerState { }

 enum __C.HKHealthRecordsStoreIngestionState { }

 enum __C.HKDateFormatUtilitiesDateTemplate { }

 enum __C.WDMedicalRecordCategoryType { }

 struct __C.UNNotificationPresentationOptions {

	// Properties
	let rawValue : UInt
 }

 enum __C.HKClinicalAccountState { }

 enum __C.HKClinicalAccountStateChangeType { }

 struct __C.OpenExternalURLOptionsKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct HealthRecordsUI.CategoryRecordKind {

	// Properties
	let categoryKind : DisplayCategory.Kind
	let conceptId : Int64
	let title : String
	let meaningfulDate : Date?
 }

 class HealthRecordsUI.SingleValueAnnotationViewDataSource : MedicalRecordAnnotationViewDataSource {

	// Properties
	let referenceRangeView : HKReferenceRangeView // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x63760  @objc SingleValueAnnotationViewDataSource.init <stripped>
	0x63870  @objc SingleValueAnnotationViewDataSource.valueViewForColumnAtIndex:orientation: <stripped>
	0x63910  @objc SingleValueAnnotationViewDataSource.updateUsing: <stripped>
	0x64590  @objc SingleValueAnnotationViewDataSource.updateUsing:valueRange:dateRange:timeScope: <stripped>
	0x64d10  @objc SingleValueAnnotationViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0x638a0  func SingleValueAnnotationViewDataSource.update(using:) // method 
	0x63980  func SingleValueAnnotationViewDataSource.updateReferenceRange(using:) // method 
	0x64270  func SingleValueAnnotationViewDataSource.update(using:valueRange:dateRange:timeScope:) // method 
	0x646b0  func SingleValueAnnotationViewDataSource.updateValue(using:) // method 
 }

 class HealthRecordsUI.SingleValueChartData : HKInteractiveChartSinglePointData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let chartableQuantitySet : HKChartableCodedQuantitySet // +0x8 (0x8)
	let date : Date // +0xfeedfacf (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x3 (0x8)
	let hasTime : Bool // +0x4c (0x1)
	let partOfOutOfRangeSeries : Bool // +0x6100085 (0x1)

	// ObjC -> Swift bridged methods
	0x65ce0  @objc SingleValueChartData.init <stripped>
	0x65d50  @objc SingleValueChartData..cxx_destruct <stripped>

	// Swift methods
	0x65be0  class func SingleValueChartData.__allocating_init(chartableQuantitySet:date:dateFormat:hasTime:partOfOutOfRangeSeries:) // init 
 }

 class HealthRecordsUI.LoadingTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containerView : UIView // +0x8 (0x8)
	let spinner : UIActivityIndicatorView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x66620  @objc LoadingTableViewCell.init <stripped>
	0x66730  @objc LoadingTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x66800  @objc LoadingTableViewCell.initWithCoder: <stripped>
	0x66f90  @objc LoadingTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0x66570  class func static LoadingTableViewCell.reuseIdentifier.getter // getter 
	0x66840  func LoadingTableViewCell.willDisplay() // method 
	0x66860  func LoadingTableViewCell.didEndDisplaying() // method 
	0x66880  func <stripped> // method 
 }

 class HealthRecordsUI.Box {
 enum HealthRecordsUI.IconStyle {

	// Properties
	case opaque : (cornerRadius: CGFloat)
	case template : UIColor
	case default  
 }

 struct HealthRecordsUI.CodableBox {

	// Properties
	let value : A
 }

 enum HealthRecordsUI.CodableBoxError {

	// Properties
	case decodingError  
 }

 enum HealthRecordsUI.MedicalRecordChartingError {

	// Properties
	case tooFewChartableQuantities : Int
	case tooFewRecords  
	case noUnit  
 }

 struct HealthRecordsUI.AccountIcon {

	// Properties
	let kind : Kind // +0x0
	let size : Size // +0x8
	let image : UIImage // +0x28
 }

 enum HealthRecordsUI.Kind {

	// Properties
	case logo  
	case monogram  
 }

 enum HealthRecordsUI.Size {

	// Properties
	case custom : (dimension: CGFloat, inset: CGFloat, cornerRadius: CGFloat)
	case small  
	case medium  
	case large  
 }

 struct HealthRecordsUI.AccountErrorFeedItemViewData {

	// Properties
	let accountId : UUID
	let title : String
	let subtitle : String
 }

 class HealthRecordsUI.TapToRadarManager : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x6d000  @objc TapToRadarManager.init <stripped>
 }

 struct HealthRecordsUI.SyncTaskScheduler: TaskScheduler { }

 class HealthRecordsUI.DiagnosticTestResultFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x6e910  @objc DiagnosticTestResultFormatter.init <stripped>
	0x6e9f0  @objc DiagnosticTestResultFormatter..cxx_destruct <stripped>

	// Swift methods
	0x6dd60  class func DiagnosticTestResultFormatter.__allocating_init(store:context:) // init 
	0x6de70  func DiagnosticTestResultFormatter.displayItems(from:) // method 
	0x6dec0  func <stripped> // method 
	0x6e420  func <stripped> // method 
	0x6e460  func <stripped> // method 
 }

 struct HealthRecordsUI.AccountViewData {

	// Properties
	let accountId : UUID
	let title : String
	let subtitle : String?
 }

 class HealthRecordsUI.AccountView {
 class HealthRecordsUI.ClinicalSourcesDataProvider : WDClinicalSourcesDataProvider {
	// ObjC -> Swift bridged methods
	0x71450  @objc ClinicalSourcesDataProvider.initWithHealthRecordsStore: <stripped>
	0x71500  @objc ClinicalSourcesDataProvider..cxx_destruct <stripped>
 }

 class HealthRecordsUI.HealthRecordsSupportedChangeListener : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let handler : (_:) // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x71660  @objc HealthRecordsSupportedChangeListener.init <stripped>
	0x716e0  @objc HealthRecordsSupportedChangeListener..cxx_destruct <stripped>

	// Swift methods
	0x71510  class func HealthRecordsSupportedChangeListener.__allocating_init(_:) // init 
 }

 class HealthRecordsUI.HealthRecordsSupportedManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let healthRecordsStore : HKHealthRecordsStore // +0x10 (0x8)
	var supportsHealthRecords : Bool // +0x18 (0x1)
	var hasAccount : Bool // +0x19 (0x1)
	var locale : Locale // +0x0 (0x0)
	var listeners : HealthRecordsSupportedChangeListener // +0x0 (0x8)
	let queue : OS_dispatch_queue // +0x0 (0x8)
	let notifyQueue : OS_dispatch_queue // +0x0 (0x8)
	var localeObserver : WeakNotificationObserver? // +0x0 (0x8)
	var $__lazy_storage_$_accountObserver : AccountStateChangeListener? // +0x0 (0x8)

	// Swift methods
	0x71700  class func HealthRecordsSupportedManager.__allocating_init(_:) // init 
	0x717c0  func HealthRecordsSupportedManager.isHealthRecordsSupported() // method 
	0x71830  func HealthRecordsSupportedManager.observe(_:) // method 
	0x71c50  func HealthRecordsSupportedManager.addListener(_:) // method 
	0x72110  func HealthRecordsSupportedManager.removeListener(_:) // method 
	0x72910  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x75ae0  @objc InternalStateCell.initWithStyle:reuseIdentifier: <stripped>
	0x75b90  @objc InternalStateCell.initWithCoder: <stripped>
	0x75c30  @objc InternalStateCell..cxx_destruct <stripped>
 }

 class HealthRecordsUI.InternalStateViewController : UITableViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let supportedCategories : [DisplayCategory]
	var currentIngestionState : HKHealthRecordsStoreIngestionState
	var currentIndexingState : HKConceptIndexManagerState

	// ObjC -> Swift bridged methods
	0x75d30  @objc InternalStateViewController.init <stripped>
	0x75e60  @objc InternalStateViewController.dealloc <stripped>
	0x75ea0  @objc InternalStateViewController.initWithCoder: <stripped>
	0x76220  @objc InternalStateViewController.viewDidLoad <stripped>
	0x76250  @objc InternalStateViewController.numberOfSectionsInTableView: <stripped>
	0x76260  @objc InternalStateViewController.tableView:numberOfRowsInSection: <stripped>
	0x76280  @objc InternalStateViewController.tableView:cellForRowAtIndexPath: <stripped>
	0x76340  @objc InternalStateViewController.tableView:shouldHighlightRowAtIndexPath: <stripped>
	0x763f0  @objc InternalStateViewController.tableView:titleForHeaderInSection: <stripped>
	0x77400  @objc InternalStateViewController.healthRecordsStore:ingestionStateDidUpdateTo: <stripped>
	0x77490  @objc InternalStateViewController.conceptStore:indexManagerDidChangeState: <stripped>
	0x77520  @objc InternalStateViewController.medicalRecordCountProvider:didUpdateCountForSampleTypes: <stripped>
	0x77530  @objc InternalStateViewController.medicalRecordCountProviderDidUpdateAllRecordsCount: <stripped>
	0x77540  @objc InternalStateViewController.medicalRecordCountProvider:didUpdateCountForCategories: <stripped>
	0x775b0  @objc InternalStateViewController.initWithStyle: <stripped>
	0x775e0  @objc InternalStateViewController.initWithNibName:bundle: <stripped>
	0x75e80  @objc InternalStateViewController..cxx_destruct <stripped>

	// Swift methods
	0x76440  func <stripped> // method 
	0x76620  func <stripped> // method 
	0x76890  func <stripped> // method 
	0x76ad0  func <stripped> // method 
	0x76ef0  func <stripped> // method 
	0x77190  func <stripped> // method 
 }

 class HealthRecordsUI.FeedItemListViewController : type metadata for DataTypeDetailViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]

	// ObjC -> Swift bridged methods
	0x79f20  @objc FeedItemListViewController.initWithCoder: <stripped>
	0x7a390  @objc FeedItemListViewController.viewDidLoad <stripped>
	0x7a6e0  @objc FeedItemListViewController.viewWillAppear: <stripped>
	0x7a730  @objc FeedItemListViewController.initWithCollectionViewLayout: <stripped>
	0x7a760  @objc FeedItemListViewController.initWithNibName:bundle: <stripped>
	0x7a810  @objc FeedItemListViewController..cxx_destruct <stripped>

	// Swift methods
	0x79e00  func <stripped> // method 
	0x79f10  func <stripped> // getter 
 }

 class HealthRecordsUI.FeedItemListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]
	let store : HealthExperienceStore

	// Swift methods
	0x7a8d0  func <stripped> // method 
 }

 class HealthRecordsUI.SingleValueDataTransformer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
	0x7ca40  @objc SingleValueDataTransformer.chartPointFor:in:with:dataSourceType: <stripped>
	0x7cba0  @objc SingleValueDataTransformer.graphSeriesWith: <stripped>
	0x7cc00  @objc SingleValueDataTransformer.chartDisplayTypeWith:displayName:unitName: <stripped>

	// Swift methods
	0x7c8d0  func SingleValueDataTransformer.chartPoint(for:in:with:dataSourceType:) // method 
	0x7cb90  func SingleValueDataTransformer.graphSeries(with:) // method 
	0x7cbf0  func SingleValueDataTransformer.chartDisplayType(with:displayName:unitName:) // method 
 }

 enum HealthRecordsUI.LocalizationContext { }

 enum HealthRecordsUI.RecordLookupError {

	// Properties
	case unknown  
 }

 class HealthRecordsUI.ConditionRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x85cb0  @objc ConditionRecordFormatter.init <stripped>
	0x85d90  @objc ConditionRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x84c50  class func ConditionRecordFormatter.__allocating_init(store:context:) // init 
	0x84d60  func ConditionRecordFormatter.displayItems(from:) // method 
	0x84dc0  func <stripped> // method 
	0x85260  func <stripped> // method 
	0x85780  func <stripped> // method 
	0x857c0  func <stripped> // method 
	0x85800  func <stripped> // method 
 }

 class HealthRecordsUI.TimelineHeaderView : UITableViewHeaderFooterView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : weak HRTimelineHeaderViewDelegate? // +0x8 (0x8)
	var $__lazy_storage_$_titleLabel : UILabel? // +0x10 (0x8)
	var $__lazy_storage_$_subtitleLabel : UILabel? // +0x18 (0x8)
	var $__lazy_storage_$_backgroundEffectView : UIVisualEffectView? // +0x20 (0x8)
	var $__lazy_storage_$_separatorView : UIView? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x86cd0  @objc TimelineHeaderView.delegate <stripped>
	0x86d50  @objc TimelineHeaderView.setDelegate: <stripped>
	0x870c0  @objc TimelineHeaderView.initWithReuseIdentifier: <stripped>
	0x87180  @objc TimelineHeaderView.initWithCoder: <stripped>
	0x87510  @objc TimelineHeaderView.applyTitle:subtitle: <stripped>
	0x87740  @objc TimelineHeaderView.applyStyleFromNavigationBar: <stripped>
	0x87800  @objc TimelineHeaderView.prepareForReuse <stripped>
	0x878c0  @objc TimelineHeaderView.floating <stripped>
	0x87970  @objc TimelineHeaderView.setFloating: <stripped>
	0x884e0  @objc TimelineHeaderView.layoutSubviews <stripped>
	0x88520  @objc TimelineHeaderView.sizeThatFits: <stripped>
	0x88860  @objc TimelineHeaderView.traitCollectionDidChange: <stripped>
	0x88930  @objc TimelineHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x86ca0  class func static TimelineHeaderView.reuseIdentifier.getter // getter 
	0x86d10  func TimelineHeaderView.delegate.getter // getter 
	0x86d90  func TimelineHeaderView.delegate.setter // setter 
	0x86de0  func TimelineHeaderView.delegate.modify // modifyCoroutine 
	0x86ec0  func <stripped> // getter 
	0x86ee0  func <stripped> // getter 
	0x871c0  func <stripped> // method 
	0x87500  func TimelineHeaderView.apply(title:subtitle:) // method 
	0x875c0  func TimelineHeaderView.applyStyle(from:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartabilityResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let configuration : MedicalRecordChartConfiguration // +0x8 (0x8)
	let masterDataSource : MedicalRecordChartDataSource // +0x10 (0x8)
	let seriesDataSources : [MedicalRecordChartDataSource] // +0x18 (0x8)
	let outOfRangeDataSource : MedicalRecordChartDataSource? // +0x20 (0x8)
	let noRangeDataSource : MedicalRecordChartDataSource? // +0x28 (0x8)
	let latestChartableDate : Date? // +0x1a0000 (0x0)

	// ObjC -> Swift bridged methods
	0x88dd0  @objc MedicalRecordChartabilityResult.configuration <stripped>
	0x88e20  @objc MedicalRecordChartabilityResult.masterDataSource <stripped>
	0x88e60  @objc MedicalRecordChartabilityResult.seriesDataSources <stripped>
	0x88ed0  @objc MedicalRecordChartabilityResult.outOfRangeDataSource <stripped>
	0x88f30  @objc MedicalRecordChartabilityResult.noRangeDataSource <stripped>
	0x88f90  @objc MedicalRecordChartabilityResult.latestChartableDate <stripped>
	0x89040  @objc MedicalRecordChartabilityResult.shouldProduceAtLeastOneOverlay <stripped>
	0x89350  @objc MedicalRecordChartabilityResult.init <stripped>
	0x893c0  @objc MedicalRecordChartabilityResult..cxx_destruct <stripped>

	// Swift methods
	0x890c0  func MedicalRecordChartabilityResult.shouldProduceAtLeastOneOverlay.getter // getter 
	0x89190  class func MedicalRecordChartabilityResult.__allocating_init(configuration:masterDataSource:seriesDataSources:outOfRangeDataSource:noRangeDataSource:latestChartableDate:) // init 
 }

 class HealthRecordsUI.MedicalRecordChartabilityDeterminer : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x8bc80  @objc MedicalRecordChartabilityDeterminer.determineChartabilityForConcept:records:completion: <stripped>
	0x8c000  @objc MedicalRecordChartabilityDeterminer.init <stripped>

	// Swift methods
	0x89430  func MedicalRecordChartabilityDeterminer.determineChartability(for:records:completion:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeriesCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let concept : HKConcept
	var preferredColors : HKUIMetricColors?
	var chartableQuantitySets : [HKChartableCodedQuantitySet]

	// Swift methods
	0x8bf30  class func MedicalRecordChartableSeriesCollector.__allocating_init(concept:) // init 
	0x8c0c0  func MedicalRecordChartableSeriesCollector.collect(record:) // method 
	0x8c380  func MedicalRecordChartableSeriesCollector.allUnits.getter // getter 
	0x8c820  func MedicalRecordChartableSeriesCollector.chartDataSourceSeries(compatibleWith:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeries : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let concept : HKConcept
	let chartableQuantitySets : [HKChartableCodedQuantitySet]
	let preferredColors : HKUIMetricColors?

	// ObjC -> Swift bridged methods
	0x8dec0  @objc MedicalRecordChartableSeries.init <stripped>
	0x8df50  @objc MedicalRecordChartableSeries..cxx_destruct <stripped>

	// Swift methods
	0x8d220  func <stripped> // getter 
	0x8d0d0  class func MedicalRecordChartableSeries.__allocating_init(concept:chartableQuantities:unit:preferredColors:) // init 
	0x8d4b0  func MedicalRecordChartableSeries.createDataSource(with:unit:) // method 
	0x8d590  func MedicalRecordChartableSeries.outOfRangeQuantitySets() // method 
	0x8da00  func MedicalRecordChartableSeries.noRangeQuantitySets() // method 
 }

 struct HealthRecordsUI.UnboundedCache: Cache {

	// Properties
	let storageBox : Box<[A : B]>
	let lowMemoryWarnings : Any
	let didEnterBackground : Any
 }

 class HealthRecordsUI.SingleValueChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xa9a90  @objc SingleValueChartConfiguration.chartControllerClass <stripped>
	0xa9b00  @objc SingleValueChartConfiguration.shouldShowOutOfRangeOverlay <stripped>
	0xa9b30  @objc SingleValueChartConfiguration.dataTransformer <stripped>
	0xa9c00  @objc SingleValueChartConfiguration.init <stripped>

	// Swift methods
	0xa9ad0  func SingleValueChartConfiguration.chartControllerClass.getter // getter 
	0xa9b20  func SingleValueChartConfiguration.shouldShowOutOfRangeOverlay.getter // getter 
	0xa9b60  func SingleValueChartConfiguration.dataTransformer.getter // getter 
 }

 class HealthRecordsUI.SettingsViewController : HKTableViewController /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var accounts : [HKClinicalAccount] // +0x8 (0x8)
	var appSourceModels : [HKSourceDataModel] // +0x10 (0x8)
	var researchStudySourceModels : [HKSourceDataModel] // +0x18 (0x8)
	var sourceLoadingToken : WDCancellationToken? // +0x20 (0x8)
	var accountLoadingToken : WDCancellationToken? // +0x28 (0x8)
	let factory : ViewControllerFactory // +0x30 (0x8)
	var sourceListDataSource : HKSourceListDataSource? // +0x38 (0x8)

	// ObjC -> Swift bridged methods
	0xaaae0  @objc SettingsViewController.init <stripped>
	0xaabf0  @objc SettingsViewController.dealloc <stripped>
	0xab840  @objc SettingsViewController.viewDidLoad <stripped>
	0xabba0  @objc SettingsViewController.viewDidAppear: <stripped>
	0xabbe0  @objc SettingsViewController.tapToRadar: <stripped>
	0xacb80  @objc SettingsViewController.healthRecordsStore:accountDidChange:changeType: <stripped>
	0xacf60  @objc SettingsViewController.initWithUsingInsetStyling: <stripped>
	0xad0c0  @objc SettingsViewController.initWithStyle: <stripped>
	0xad2d0  @objc SettingsViewController.initWithNibName:bundle: <stripped>
	0xad390  @objc SettingsViewController.initWithCoder: <stripped>
	0xaaca0  @objc SettingsViewController..cxx_destruct <stripped>

	// Swift methods
	0xabc70  func SettingsViewController.accountStateDidChange(healthRecordsStore:account:changeType:) // method 
	0xacc00  func SettingsViewController.providedHealthExperienceStore.getter // getter 
	0xacc60  func SettingsViewController.providedHealthStore.getter // getter 
	0xaccd0  func SettingsViewController.pushForAPIAuthorization(forSource:) // method 
 }

 class HealthRecordsUI.AccountErrorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let profile : HRProfile // +0x10 (0x8)
	let healthRecordsStore : HKHealthRecordsStore // +0x18 (0x8)

	// Swift methods
	0xb2c20  func AccountErrorManager.presentRelogin(for:from:completion:) // method 
	0xb3420  func AccountErrorManager.presentRelogin(for:from:completion:) // method 
 }

 class HealthRecordsUI.BloodPressureChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xb4670  @objc BloodPressureChartConfiguration.chartControllerClass <stripped>
	0xb46e0  @objc BloodPressureChartConfiguration.shouldShowOutOfRangeOverlay <stripped>
	0xb4700  @objc BloodPressureChartConfiguration.dataTransformer <stripped>
	0xb47f0  @objc BloodPressureChartConfiguration.init <stripped>

	// Swift methods
	0xb46b0  func BloodPressureChartConfiguration.chartControllerClass.getter // getter 
	0xb46f0  func BloodPressureChartConfiguration.shouldShowOutOfRangeOverlay.getter // getter 
	0xb4740  func BloodPressureChartConfiguration.dataTransformer.getter // getter 
 }

 class HealthRecordsUI.FilterSettingsViewController : HKTableViewController /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var delegate : weak FilterSettingsViewControllerDelegate? // +0x8 (0x8)
	var categories : [WDMedicalRecordCategory] // +0x10 (0x8)
	var selectedCategories : Set<WDMedicalRecordCategory> // +0x18 (0x8)
	var accounts : [HKClinicalAccount] // +0x20 (0x8)
	var selectedAccounts : Set<HKClinicalAccount> // +0x28 (0x8)
	let defaultCellIdentifier : String // +0x30 (0x10)
	let defaultHeaderIdentifier : String // +0x40 (0x10)
	let defaultSectionContentInset : CGFloat // +0x50 (0x8)
	let defaultSectionCornerRadius : CGFloat // +0x58 (0x8)

	// ObjC -> Swift bridged methods
	0xb5350  @objc FilterSettingsViewController.initWithDelegate:selectedCategories:selectedAccounts: <stripped>
	0xb53b0  @objc FilterSettingsViewController.initWithCoder: <stripped>
	0xb5c90  @objc FilterSettingsViewController.viewDidLoad <stripped>
	0xb5cd0  @objc FilterSettingsViewController.numberOfSectionsInTableView: <stripped>
	0xb5e50  @objc FilterSettingsViewController.tableView:viewForHeaderInSection: <stripped>
	0xb5ed0  @objc FilterSettingsViewController.tableView:numberOfRowsInSection: <stripped>
	0xb6b60  @objc FilterSettingsViewController.tableView:cellForRowAtIndexPath: <stripped>
	0xb6cd0  @objc FilterSettingsViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0xb6da0  @objc FilterSettingsViewController.tableView:heightForHeaderInSection: <stripped>
	0xb6dc0  @objc FilterSettingsViewController.tableView:heightForFooterInSection: <stripped>
	0xb7830  @objc FilterSettingsViewController.doneButtonTapped <stripped>
	0xb78d0  @objc FilterSettingsViewController.initWithUsingInsetStyling: <stripped>
	0xb7960  @objc FilterSettingsViewController.initWithStyle: <stripped>
	0xb7a30  @objc FilterSettingsViewController.initWithNibName:bundle: <stripped>
	0xb7ab0  @objc FilterSettingsViewController..cxx_destruct <stripped>

	// Swift methods
	0xb4b00  class func FilterSettingsViewController.__allocating_init(withDelegate:selectedCategories:selectedAccounts:) // init 
	0xb6dd0  func <stripped> // method 
	0xb7010  func <stripped> // method 
	0xb7250  func <stripped> // method 
	0xb7280  func <stripped> // method 
	0xb74a0  func <stripped> // method 
	0xb74c0  func <stripped> // method 
	0xb7640  func <stripped> // method 
 }

 class HealthRecordsUI.AddAccountTableViewCell : HRStandardTableViewCell {

	// Properties
	var alignWithAccountTitle : Bool // +0x8 (0x1)

	// ObjC -> Swift bridged methods
	0xbce90  @objc AddAccountTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xbcf70  @objc AddAccountTableViewCell.initWithCoder: <stripped>
	0xbd270  @objc AddAccountTableViewCell.tintColorDidChange <stripped>

	// Swift methods
	0xbd010  func <stripped> // method 
 }

 struct HealthRecordsUI.LocalizationSource {

	// Properties
	let bundle : NSBundle // +0x0
	let table : String // +0x8
 }

 class HealthRecordsUI.CategoryCountDataProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, CategoryCountDataProviderProtocol {

	// Properties
	let healthStore : HKHealthStore // +0x10 (0x8)

	// Swift methods
	0xbf9c0  class func CategoryCountDataProvider.__allocating_init(healthStore:) // init 
	0xbfa50  func CategoryCountDataProvider.fetchCategoryCounts(categories:additionalPredicate:completion:) // method 
 }

 class HealthRecordsUI.AllergyRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_reactionFormatter : AllergyReactionFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xcb990  @objc AllergyRecordFormatter.init <stripped>
	0xcba10  @objc AllergyRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0xc9f30  func AllergyRecordFormatter.structuredItems(from:) // method 
	0xca0e0  class func AllergyRecordFormatter.__allocating_init(store:context:) // init 
	0xca1e0  func AllergyRecordFormatter.displayItems(from:) // method 
	0xca240  func <stripped> // method 
	0xca6f0  func <stripped> // method 
	0xcb4f0  func <stripped> // method 
 }

 struct HealthRecordsUI.CategorySummaryFeedItemIdentifierFactory { }

 class HealthRecordsUI.MedicationOrderFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xce0c0  @objc MedicationOrderFormatter.init <stripped>
	0xce140  @objc MedicationOrderFormatter..cxx_destruct <stripped>

	// Swift methods
	0xccd40  func MedicationOrderFormatter.structuredItems(from:) // method 
	0xcd200  class func MedicationOrderFormatter.__allocating_init(store:context:) // init 
	0xcd300  func MedicationOrderFormatter.displayItems(from:) // method 
	0xcd360  func <stripped> // method 
	0xcd810  func <stripped> // method 
	0xcdbd0  func <stripped> // method 
	0xcdc10  func <stripped> // method 
 }

 class HealthRecordsUI.NSSecureCodingBox {
 enum HealthRecordsUI.CodingKeys {

	// Properties
	case value  
 }

 enum HealthRecordsUI.ViewControllerFactoryError {

	// Properties
	case entityDoesNotExist  
 }

 class HealthRecordsUI.BaseAccountFeedItemView {
 class HealthRecordsUI.MedicationDosageFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xd5530  @objc MedicationDosageFormatter.init <stripped>
	0xd55b0  @objc MedicationDosageFormatter..cxx_destruct <stripped>

	// Swift methods
	0xd4d30  func MedicationDosageFormatter.structuredItems(from:) // method 
	0xd5090  func MedicationDosageFormatter.displayItems(from:) // method 
	0xd4c80  class func MedicationDosageFormatter.__allocating_init(store:context:) // init 
	0xd53f0  func MedicationDosageFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.RecordCategoryViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let category : DisplayCategory // +0x8 (0x40)
	let healthRecordsStore : HKHealthRecordsStore // +0x48 (0x8)
	var preferredSegment : ModeSegment // +0x50 (0x1)
	let factory : HRCategoryViewControllerFactory // +0x58 (0x8)
	let countProvider : WDMedicalRecordCountProvider // +0x60 (0x8)
	var currentViewController : UIViewController? // +0x68 (0x8)
	var displayMode : DisplayMode // +0x70 (0x1)
	var isModePickerHidden : Bool // +0x71 (0x1)
	var $__lazy_storage_$_modePicker : UISegmentedControl? // +0x78 (0x8)
	var $__lazy_storage_$_navigationPalette : _UINavigationBarPalette? // +0x80 (0x8)
	var $__lazy_storage_$_lastUpdatedViewController : UIViewController? // +0x88 (0x8)
	var $__lazy_storage_$_alphabeticalViewController : UIViewController? // +0x90 (0x8)

	// ObjC -> Swift bridged methods
	0xd6ed0  @objc RecordCategoryViewController.initWithCoder: <stripped>
	0xd6f80  @objc RecordCategoryViewController.dealloc <stripped>
	0xd73c0  @objc RecordCategoryViewController.viewDidLoad <stripped>
	0xd7500  @objc RecordCategoryViewController.viewWillLayoutSubviews <stripped>
	0xd7680  @objc RecordCategoryViewController.modePickerDidChange: <stripped>
	0xd7700  @objc RecordCategoryViewController.tapToRadar: <stripped>
	0xd82c0  @objc RecordCategoryViewController.initWithNibName:bundle: <stripped>
	0xd7000  @objc RecordCategoryViewController..cxx_destruct <stripped>

	// Swift methods
	0xd7530  func <stripped> // method 
	0xd7790  func <stripped> // method 
	0xd78a0  func <stripped> // method 
	0xd7980  func <stripped> // method 
	0xd7fa0  func <stripped> // method 
	0xd8130  func <stripped> // getter 
 }

 enum HealthRecordsUI.ModeSegment {

	// Properties
	case lastUpdated  
	case alphabetical  
 }

 enum HealthRecordsUI.DisplayMode {

	// Properties
	case noData : RecordCategoryViewController.NoDataReason
	case data : RecordCategoryViewController.ModeSegment
	case loading  
 }

 enum HealthRecordsUI.NoDataReason {

	// Properties
	case noData  
	case notOnboarded  
 }

 class HealthRecordsUI.NoDataViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let style : Style // +0x8 (0x1)

	// ObjC -> Swift bridged methods
	0xda730  @objc NoDataViewController.initWithCoder: <stripped>
	0xda860  @objc NoDataViewController.loadView <stripped>
	0xda890  @objc NoDataViewController.initWithNibName:bundle: <stripped>

	// Swift methods
 }

 enum HealthRecordsUI.Style {

	// Properties
	case noData  
	case loading  
 }

 class HealthRecordsUI.CancellationToken : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var isCancelled : Bool // +0x10 (0x1)
	var cancelBlock : () // +0x18 (0x10)

	// Swift methods
	0xdb5f0  func CancellationToken.isCancelled.getter // getter 
	0xdb620  func CancellationToken.cancelBlock.getter // getter 
	0xdb660  func CancellationToken.cancelBlock.setter // setter 
	0xdb6a0  func CancellationToken.cancelBlock.modify // modifyCoroutine 
	0xdb4b0  class func CancellationToken.__allocating_init(cancelBlock:) // init 
	0xdb9b0  func CancellationToken.cancel() // method 
 }

 class HealthRecordsUI.PromotionListViewController : FeedItemListViewController {
	// Swift methods
 }

 class HealthRecordsUI.PromotionListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
	var store : HealthExperienceStore

	// Swift methods
	0xdbe50  func PromotionListViewDataSourceProvider.store.getter // getter 
	0xdbe90  func PromotionListViewDataSourceProvider.store.setter // setter 
	0xdbee0  func PromotionListViewDataSourceProvider.store.modify // modifyCoroutine 
	0xdbb00  class func PromotionListViewDataSourceProvider.__allocating_init(predicate:store:) // init 
	0xdbf60  func PromotionListViewDataSourceProvider.selectedDataSources(for:) // method 
	0xdbff0  func PromotionListViewDataSourceProvider.makePromotionDataSource() // method 
 }

 class HealthRecordsUI.AccountErrorTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let accountErrorView : AccountErrorFeedItemView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xdc860  @objc AccountErrorTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xdc8c0  @objc AccountErrorTableViewCell.initWithCoder: <stripped>
	0xdcde0  @objc AccountErrorTableViewCell.layoutSubviews <stripped>
	0xdcec0  @objc AccountErrorTableViewCell.sizeThatFits: <stripped>
	0xdd100  @objc AccountErrorTableViewCell.traitCollectionDidChange: <stripped>
	0xdd250  @objc AccountErrorTableViewCell.layoutMarginsDidChange <stripped>
	0xdd410  @objc AccountErrorTableViewCell.prepareForReuse <stripped>
	0xdd500  @objc AccountErrorTableViewCell.setHighlighted:animated: <stripped>
	0xdd5a0  @objc AccountErrorTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0xdc780  class func static AccountErrorTableViewCell.reuseIdentifier.getter // getter 
	0xdc990  func <stripped> // method 
 }

 class HealthRecordsUI.SuggestedActionTileViewControllerShim {
 class HealthRecordsUI.OnboardingSuggestedActionViewController {
 class HealthRecordsUI.BloodPressureCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
	0xdeec0  @objc BloodPressureCurrentValueViewDataSource.initWithDateCache:displayCategoryController:healthStore:selectedRangeFormatter: <stripped>
	0xdf010  @objc BloodPressureCurrentValueViewDataSource.init <stripped>
 }

 struct HealthRecordsUI.CategoryCount {

	// Properties
	let category : BrowseCategory
	let count : Int
 }

 enum HealthRecordsUI.CodingKeys {

	// Properties
	case category  
	case count  
 }

 enum HealthRecordsUI.MedicalRecordChartDataSourceType { }

 class HealthRecordsUI.MedicalRecordChartDataSource : HKGraphSeriesDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let type : MedicalRecordChartDataSourceType // +0x8 (0x8)
	let concept : HKConcept? // +0x10 (0x8)
	let dataTransformer : MedicalRecordChartDataTransformer // +0x18 (0x8)
	var chartableCodedQuantitySets : [HKChartableCodedQuantitySet]? // +0x20 (0x8)
	var cachedBucketedSets : [HKTimeScope : [HKChartableCodedQuantitySet]] // +0x28 (0x8)
	let collapseIntoRangePoints : Bool // +0x30 (0x1)
	var unit : HKUnit // +0x38 (0x8)
	var preferredColors : HKUIMetricColors? // +0x40 (0x8)
	var chartableXRange : HKValueRange<NSDate>? // +0x48 (0x8)
	var chartableYRange : HKValueRange<NSNumber>? // +0x50 (0x8)

	// ObjC -> Swift bridged methods
	0xe9f60  @objc MedicalRecordChartDataSource.displayName <stripped>
	0xea2e0  @objc MedicalRecordChartDataSource.initWithConcept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type: <stripped>
	0xea370  @objc MedicalRecordChartDataSource.cachedBlockForPath:context: <stripped>
	0xeb1a0  @objc MedicalRecordChartDataSource.chartDisplayTypeWithVerticalAxis: <stripped>
	0xec6d0  @objc MedicalRecordChartDataSource.init <stripped>
	0xec750  @objc MedicalRecordChartDataSource..cxx_destruct <stripped>

	// Swift methods
	0xe9d20  func MedicalRecordChartDataSource.unit.getter // getter 
	0xe9da0  func MedicalRecordChartDataSource.preferredColors.getter // getter 
	0xe9e00  func MedicalRecordChartDataSource.chartableXRange.getter // getter 
	0xe9f00  func MedicalRecordChartDataSource.chartableYRange.getter // getter 
	0xea040  func MedicalRecordChartDataSource.displayName.getter // getter 
	0xe97c0  class func MedicalRecordChartDataSource.__allocating_init(concept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type:) // init 
	0xea420  func MedicalRecordChartDataSource.chartPoints(in:with:) // method 
	0xea960  func MedicalRecordChartDataSource.numberOfDataPoints(in:) // method 
	0xeac60  func MedicalRecordChartDataSource.graphSeries(withMainColor:verticalAxis:) // method 
	0xeafa0  func MedicalRecordChartDataSource.chartDisplayType(verticalAxis:) // method 
	0xeb200  func MedicalRecordChartDataSource.take(chartableCodedQuantitySets:) // method 
	0xeb910  func MedicalRecordChartDataSource.bucketQuantitySets(with:) // method 
 }

 class HealthRecordsUI.CategoryRecordQueryDescription : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SampleQueryDescription {

	// Properties
	let category : BrowseCategory // +0x80000400 (0x0)
	let sampleQueryDescription : HKSampleQueryDescription // +0x0 (0x8)

	// Swift methods
	0xf1730  func CategoryRecordQueryDescription.sampleType.getter // getter 
	0xf1760  func CategoryRecordQueryDescription.predicate.getter // getter 
	0xf17a0  func CategoryRecordQueryDescription.hash(into:) // method 
	0xf1870  func CategoryRecordQueryDescription.hashValue.getter // getter 
 }

 enum HealthRecordsUI.ResultError {

	// Properties
	case unspecified  
 }

 class HealthRecordsUI.VaccinationRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xf42f0  @objc VaccinationRecordFormatter.init <stripped>
	0xf43d0  @objc VaccinationRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0xf2480  class func VaccinationRecordFormatter.__allocating_init(store:context:) // init 
	0xf2590  func VaccinationRecordFormatter.displayItems(from:) // method 
	0xf25f0  func <stripped> // method 
	0xf2ae0  func <stripped> // method 
	0xf3990  func <stripped> // method 
	0xf3de0  func <stripped> // method 
	0xf3e20  func <stripped> // method 
 }

 class HealthRecordsUI.NotificationPolicy : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xf53e0  @objc NotificationPolicy.userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler: <stripped>
	0xf5ac0  @objc NotificationPolicy.userNotificationCenter:willPresentNotification:withCompletionHandler: <stripped>
	0xf5c50  @objc NotificationPolicy.init <stripped>

	// Swift methods
	0xf51d0  func NotificationPolicy.userNotificationCenter(_:didReceive:withCompletionHandler:) // method 
	0xf5460  func NotificationPolicy.userNotificationCenter(_:willPresent:withCompletionHandler:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartPoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let chartableSet : HKChartableCodedQuantitySet // +0x8 (0x8)
	let blockCoordinateInfo : SingleValueChartData // +0x10 (0x8)
	let sortedYValues : [Double] // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xf6fe0  @objc MedicalRecordChartPoint.userInfo <stripped>
	0xf70d0  @objc MedicalRecordChartPoint.xValueAsGenericType <stripped>
	0xf72a0  @objc MedicalRecordChartPoint.maxXValueAsGenericType <stripped>
	0xf72a0  @objc MedicalRecordChartPoint.minXValueAsGenericType <stripped>
	0xf73f0  @objc MedicalRecordChartPoint.yValue <stripped>
	0xf74f0  @objc MedicalRecordChartPoint.yValueForKey: <stripped>
	0xf7710  @objc MedicalRecordChartPoint.allYValues <stripped>
	0xf73f0  @objc MedicalRecordChartPoint.minYValue <stripped>
	0xf77e0  @objc MedicalRecordChartPoint.maxYValue <stripped>
	0xf7860  @objc MedicalRecordChartPoint.description <stripped>
	0xf7bc0  @objc MedicalRecordChartPoint.init <stripped>
	0xf7c40  @objc MedicalRecordChartPoint..cxx_destruct <stripped>

	// Swift methods
	0xf6b10  class func MedicalRecordChartPoint.__allocating_init(chartableSet:unit:blockCoordinateInfo:) // init 
	0xf6fb0  func MedicalRecordChartPoint.userInfo() // method 
	0xf7010  func MedicalRecordChartPoint.xValueAsGenericType() // method 
	0xf71e0  func MedicalRecordChartPoint.maxXValueAsGenericType() // method 
	0xf8f10  func MedicalRecordChartPoint.minXValueAsGenericType() // method 
	0xf73b0  func MedicalRecordChartPoint.yValue() // method 
	0xf7460  func MedicalRecordChartPoint.yValue(forKey:) // method 
	0xf75a0  func MedicalRecordChartPoint.allYValues() // method 
	0xf8f00  func MedicalRecordChartPoint.minYValue() // method 
	0xf7790  func MedicalRecordChartPoint.maxYValue() // method 
 }

 enum HealthRecordsUI.BrowseIcon {

	// Properties
	case category : (UIImage, tintColor: UIColor?)
	case account : AccountIcon
 }

 class HealthRecordsUI.LabelStackView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let textStyle : UIFontTextStyle // +0x8 (0x8)
	var labels : [UILabel] // +0x10 (0x8)
	var font : UIFont // +0x18 (0x8)
	let interItemSpacing : CGFloat // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0xfb7e0  @objc LabelStackView.initWithCoder: <stripped>
	0xfc0e0  @objc LabelStackView.layoutSubviews <stripped>
	0xfc120  @objc LabelStackView.sizeThatFits: <stripped>
	0xfc220  @objc LabelStackView.initWithFrame: <stripped>
	0xfc2a0  @objc LabelStackView..cxx_destruct <stripped>

	// Swift methods
	0xfb540  class func LabelStackView.__allocating_init(textStyle:) // init 
	0xfb880  func LabelStackView.addLabel(text:textColor:) // method 
	0xfba40  func LabelStackView.removeAll() // method 
 }

 class HealthRecordsUI.BrowseIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var iconCache : UnboundedCache<BrowseCategory, UnboundedCache<AccountIcon.Size, BrowseIcon>> // +0x10 (0x48)
	var placeholderCache : UnboundedCache<BrowseCategory, UnboundedCache<AccountIcon.Size, BrowseIcon>> // +0x58 (0x48)
	let accountIconProvider : AccountIconProvider // +0xa0 (0x8)

	// Swift methods
	0xfdd20  class func BrowseIconProvider.__allocating_init(accountIconProvider:) // init 
	0xfdf10  func BrowseIconProvider.placeholder(for:size:) // method 
	0xfe3e0  func BrowseIconProvider.fetchIcon(for:size:queue:completion:) // method 
 }

 class HealthRecordsUI.OAuthViewControllerNotificationUserInfoKeys : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xffe80  @objc OAuthViewControllerNotificationUserInfoKeys.init <stripped>
	0xfff20  @objc OAuthViewControllerNotificationUserInfoKeys..cxx_destruct <stripped>
 }

 class HealthRecordsUI.AllergyReactionFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x102fa0  @objc AllergyReactionFormatter.displayItemsFromReaction: <stripped>
	0x1041a0  @objc AllergyReactionFormatter.init <stripped>
	0x104220  @objc AllergyReactionFormatter..cxx_destruct <stripped>

	// Swift methods
	0x100e70  func AllergyReactionFormatter.structuredItems(from:) // method 
	0x101ed0  func AllergyReactionFormatter.displayItems(from:) // method 
	0x102e70  class func AllergyReactionFormatter.__allocating_init(store:context:) // init 
	0x102f50  func AllergyReactionFormatter.displayItems(from:) // method 
	0x103090  func <stripped> // method 
	0x103270  func <stripped> // method 
	0x103c50  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartData : HKInteractiveChartBloodPressureData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let date : Date // +0x170690 (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0xe3c5 (0x8)
	let hasTime : Bool // +0x170690 (0x1)
	let partOfOutOfRangeSeries : Bool // +0x0 (0x1)

	// ObjC -> Swift bridged methods
	0x105c70  @objc BloodPressureChartData.init <stripped>
	0x105ce0  @objc BloodPressureChartData..cxx_destruct <stripped>

	// Swift methods
	0x105a00  class func BloodPressureChartData.__allocating_init(date:dateFormat:hasTime:systolicRange:diastolicRange:) // init 
 }

 class HealthRecordsUI.AccountTableViewCell : HRSourceTableViewCell {

	// Properties
	let brandView : WDMedicalRecordBrandView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x107500  @objc AccountTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x107550  @objc AccountTableViewCell.initWithCoder: <stripped>
	0x107770  @objc AccountTableViewCell.configureWithAccount:dataProvider: <stripped>
	0x107bd0  @objc AccountTableViewCell.prepareForReuse <stripped>
	0x107db0  @objc AccountTableViewCell.layoutSubviews <stripped>
	0x107e50  @objc AccountTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0x107650  func <stripped> // method 
	0x107760  func AccountTableViewCell.configureWithAccountDataProviderForObjC(_:_:) // method 
	0x1077e0  func <stripped> // method 
 }

 class HealthRecordsUI.FeatureModeToggleAction {
 struct HealthRecordsUI.ActionData {

	// Properties
	let mode : UserInterfaceMode // +0x0
 }

 enum HealthRecordsUI.CodingKeys {

	// Properties
	case mode  
 }

 enum HealthRecordsUI.FeedItemActionError {

	// Properties
	case notificationNameMismatch  
	case invalidUserInfo  
 }

 class HealthRecordsUI.FeedItemAction {
 enum HealthRecordsUI.CodingKeys {

	// Properties
	case data  
 }

 class HealthRecordsUI.MedicalRecordChartOverlayContext : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String // +0x8 (0x10)
	let dataSource : MedicalRecordChartDataSource // +0x18 (0x8)
	let defaultColors : HKUIMetricColors // +0x20 (0x8)
	let selectedColors : HKUIMetricColors // +0x28 (0x8)
	let verticalAxis : HKNumericAxis // +0x30 (0x8)
	var cachedItem : HKDisplayTypeContextItem? // +0x38 (0x8)
	var cachedOverlayDisplayType : HKDisplayType? // +0x40 (0x8)
	var cachedDataSource : MedicalRecordChartDataSource? // +0x48 (0x8)

	// ObjC -> Swift bridged methods
	0x10c010  @objc MedicalRecordChartOverlayContext.initWithTitle:dataSource:defaultColors:selectedColors:verticalAxis: <stripped>
	0x10c130  @objc MedicalRecordChartOverlayContext.contextItemForLastUpdate <stripped>
	0x10c440  @objc MedicalRecordChartOverlayContext.updateContextItemForDateInterval:timeScope:completion: <stripped>
	0x10c570  @objc MedicalRecordChartOverlayContext.sampleTypeForDateRangeUpdates <stripped>
	0x10c610  @objc MedicalRecordChartOverlayContext.overlayDisplayTypeForTimeScope: <stripped>
	0x10c6a0  @objc MedicalRecordChartOverlayContext.init <stripped>
	0x10c720  @objc MedicalRecordChartOverlayContext..cxx_destruct <stripped>

	// Swift methods
	0x10bdc0  class func MedicalRecordChartOverlayContext.__allocating_init(title:dataSource:defaultColors:selectedColors:verticalAxis:) // init 
	0x10c0a0  func MedicalRecordChartOverlayContext.contextItemForLastUpdate() // method 
	0x10c170  func MedicalRecordChartOverlayContext.updateItem(for:timeScope:completion:) // method 
	0x10c510  func MedicalRecordChartOverlayContext.sampleTypeForDateRangeUpdates() // method 
	0x10c600  func MedicalRecordChartOverlayContext.overlayDisplayType(for:) // method 
 }

 struct HealthRecordsUI.AccountStateChange {

	// Properties
	let healthRecordsStore : HKHealthRecordsStore // +0x0
	let account : HKClinicalAccount // +0x8
	let changeType : HKClinicalAccountStateChangeType // +0x10
 }

 class HealthRecordsUI.AccountStateChangeListener : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let handler : AccountStateChange // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x10d590  @objc AccountStateChangeListener.healthRecordsStore:accountDidChange:changeType: <stripped>
	0x10d660  @objc AccountStateChangeListener.init <stripped>
	0x10d910  @objc AccountStateChangeListener..cxx_destruct <stripped>

	// Swift methods
	0x10d1b0  class func AccountStateChangeListener.__allocating_init(handler:) // init 
	0x10d2b0  func AccountStateChangeListener.accountStateDidChange(healthRecordsStore:account:changeType:) // method 
 }

 struct HealthRecordsUI.AddAccountFeedItemIdentifierFactory { }

 struct HealthRecordsUI.DisplayCategory {

	// Properties
	let kind : Kind // +0x0
	let tintColor : UIColor // +0x8
	let imageName : String? // +0x10
	let title : String // +0x20
	let sampleQueryDescriptions : [HKSampleQueryDescription] // +0x30
	let _category : WDMedicalRecordCategory // +0x38
 }

 enum HealthRecordsUI.Kind {

	// Properties
	case invalid  
	case medications  
	case labs  
	case vitals  
	case conditions  
	case procedures  
	case immunizations  
	case allergies  
	case unknown  
 }

 class HealthRecordsUI.CountFormatter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var style : Style // +0x10 (0x11)
	var formatKey : String // +0x28 (0x10)
	var source : LocalizationSource // +0x38 (0x18)

	// Swift methods
	0x1112f0  func CountFormatter.style.getter // getter 
	0x111360  func CountFormatter.style.setter // setter 
	0x111390  func CountFormatter.style.modify // modifyCoroutine 
	0x111460  class func CountFormatter.__allocating_init(style:) // init 
	0x111520  func CountFormatter.string(for:) // method 
 }

 enum HealthRecordsUI.Style {

	// Properties
	case category : DisplayCategory.Kind
	case custom : (formatKey: String)
	case plain  
	case more  
 }

 class HealthRecordsUI.DiagnosticTestReportFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x112a70  @objc DiagnosticTestReportFormatter.init <stripped>
	0x112b50  @objc DiagnosticTestReportFormatter..cxx_destruct <stripped>

	// Swift methods
	0x1121a0  class func DiagnosticTestReportFormatter.__allocating_init(store:context:) // init 
	0x1122b0  func DiagnosticTestReportFormatter.displayItems(from:) // method 
	0x112310  func <stripped> // method 
	0x112840  func <stripped> // method 
 }

 class HealthRecordsUI.AccountIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monogramProvider : MonogramProvider // +0x10 (0x8)
	var brandImageManager : HKBrandImageManager // +0x18 (0x8)
	var iconCache : UnboundedCache<UUID, UnboundedCache<AccountIcon.Size, AccountIcon>> // +0x20 (0x48)

	// Swift methods
	0x113340  class func AccountIconProvider.__allocating_init(brandImageManager:monogramProvider:) // init 
	0x1134a0  func AccountIconProvider.placeholder(forTitle:size:) // method 
	0x1142b0  func AccountIconProvider.fetchIcon(forAccount:size:completion:) // method 
	0x114930  func AccountIconProvider.fetchIcon(for:size:queue:completion:) // method 
 }

 class HealthRecordsUI.ContentStatusCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let spinner : UIActivityIndicatorView // +0x8 (0x8)
	let titleLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x116c80  @objc ContentStatusCell.spinner <stripped>
	0x116cc0  @objc ContentStatusCell.titleLabel <stripped>
	0x116ee0  @objc ContentStatusCell.init <stripped>
	0x116f00  @objc ContentStatusCell.initWithCoder: <stripped>
	0x117420  @objc ContentStatusCell.initWithStyle:reuseIdentifier: <stripped>
	0x1174a0  @objc ContentStatusCell..cxx_destruct <stripped>

	// Swift methods
	0x116f20  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartSeries : HKGraphSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var selectedStrokeStyle : HKStrokeStyle?
	var unselectedStrokeStyle : HKStrokeStyle?

	// ObjC -> Swift bridged methods
	0x1178a0  @objc MedicalRecordChartSeries.selectedPathRange <stripped>
	0x117af0  @objc MedicalRecordChartSeries.coordinatesForBlock:blockPath:xAxis:yAxis: <stripped>
	0x118380  @objc MedicalRecordChartSeries.drawSeriesWithBlockCoordinates:axisRect:zoomLevelConfiguration:pointTransform:renderContext:secondaryRenderContext: <stripped>
	0x118490  @objc MedicalRecordChartSeries.supportsMultiTouchSelection <stripped>
	0x1184c0  @objc MedicalRecordChartSeries.blockCoordinateIsVisibleInsideOfChartRect:blockCoordinate: <stripped>
	0x118560  @objc MedicalRecordChartSeries.distanceFromPoint:blockCoordinate:chartRect: <stripped>
	0x1185d0  @objc MedicalRecordChartSeries.xAxisDistanceFromPoint:blockCoordinate:chartRect: <stripped>
	0x118640  @objc MedicalRecordChartSeries.yAxisDifferenceToPoint:blockCoordinate:chartRect: <stripped>
	0x118710  @objc MedicalRecordChartSeries.init <stripped>
	0x1187a0  @objc MedicalRecordChartSeries..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordChartCoordinate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let pointValuesAscending : [CGPoint]
	let blockCoordinateInfo : HKGraphSeriesBlockCoordinateInfo

	// ObjC -> Swift bridged methods
	0x118b40  @objc MedicalRecordChartCoordinate.startXValue <stripped>
	0x118ba0  @objc MedicalRecordChartCoordinate.endXValue <stripped>
	0x118c00  @objc MedicalRecordChartCoordinate.userInfo <stripped>
	0x118c40  @objc MedicalRecordChartCoordinate.copyWithTransform:roundToViewScale: <stripped>
	0x118ce0  @objc MedicalRecordChartCoordinate.init <stripped>
	0x118d70  @objc MedicalRecordChartCoordinate..cxx_destruct <stripped>

	// Swift methods
	0x117aa0  class func MedicalRecordChartCoordinate.__allocating_init(sortedPointValues:blockCoordinateInfo:) // init 
	0x118a40  func MedicalRecordChartCoordinate.xValue.getter // getter 
	0x118a70  func MedicalRecordChartCoordinate.minPoint.getter // getter 
	0x118aa0  func MedicalRecordChartCoordinate.maxPoint.getter // getter 
	0x118ae0  func MedicalRecordChartCoordinate.distance(from:) // method 
	0x118b70  func MedicalRecordChartCoordinate.startXValue.getter // getter 
	0x118bd0  func MedicalRecordChartCoordinate.endXValue.getter // getter 
	0x11bdf0  func MedicalRecordChartCoordinate.userInfo.getter // getter 
	0x118c30  func MedicalRecordChartCoordinate.copy(with:roundToViewScale:) // method 
 }

 class HealthRecordsUI.ContentStatusView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let subtitleLabel : UILabel // +0x10 (0x8)
	let spinnerView : UIActivityIndicatorView // +0x18 (0x8)
	var title : String? // +0x20 (0x10)
	var subtitle : String? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x11be00  @objc ContentStatusView.title <stripped>
	0x11be40  @objc ContentStatusView.setTitle: <stripped>
	0x11bf10  @objc ContentStatusView.subtitle <stripped>
	0x11c010  @objc ContentStatusView.setSubtitle: <stripped>
	0x11c4b0  @objc ContentStatusView.initWithTitle:subtitle: <stripped>
	0x11c580  @objc ContentStatusView.initWithCoder: <stripped>
	0x11c830  @objc ContentStatusView.initWithFrame: <stripped>
	0x11cb30  @objc ContentStatusView.startAnimating <stripped>
	0x11cba0  @objc ContentStatusView.stopAnimating <stripped>
	0x11cd90  @objc ContentStatusView.traitCollectionDidChange: <stripped>
	0x11d3c0  @objc ContentStatusView.layoutSubviews <stripped>
	0x11d580  @objc ContentStatusView..cxx_destruct <stripped>

	// Swift methods
	0x11be20  func ContentStatusView.title.getter // getter 
	0x11be60  func ContentStatusView.title.setter // setter 
	0x11be90  func ContentStatusView.title.modify // modifyCoroutine 
	0x11bfa0  func ContentStatusView.subtitle.getter // getter 
	0x11c0b0  func ContentStatusView.subtitle.setter // setter 
	0x11c0e0  func ContentStatusView.subtitle.modify // modifyCoroutine 
	0x11c1e0  class func ContentStatusView.__allocating_init(title:subtitle:) // init 
	0x11c860  func <stripped> // method 
	0x11cb10  func ContentStatusView.startAnimating() // method 
	0x11cb50  func ContentStatusView.stopAnimating() // method 
	0x11d3f0  func <stripped> // method 
 }

 class HealthRecordsUI.MedicationRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x11f300  @objc MedicationRecordFormatter.init <stripped>
	0x11f380  @objc MedicationRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x11d8f0  func MedicationRecordFormatter.structuredItems(from:) // method 
	0x11ddb0  class func MedicationRecordFormatter.__allocating_init(store:context:) // init 
	0x11deb0  func MedicationRecordFormatter.displayItems(from:) // method 
	0x11df10  func <stripped> // method 
	0x11e470  func <stripped> // method 
	0x11ea20  func <stripped> // method 
	0x11ee70  func <stripped> // method 
 }

 class HealthRecordsUI.ClinicalOnboardingManager : WDClinicalOnboardingManager {
	// ObjC -> Swift bridged methods
	0x11fda0  @objc ClinicalOnboardingManager.initWithProfile: <stripped>
 }

 class HealthRecordsUI.ConceptTitleTableHeaderView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let fontChoices : [UIFont] // +0x10 (0x8)
	var widthCache : CGFloat // +0x18 (0x8)
	var titleCache : NSString // +0x20 (0x8)
	var bottomExtraSpace : CGFloat // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x11fe50  @objc ConceptTitleTableHeaderView.bottomExtraSpace <stripped>
	0x11fec0  @objc ConceptTitleTableHeaderView.setBottomExtraSpace: <stripped>
	0x11ffa0  @objc ConceptTitleTableHeaderView.title <stripped>
	0x1200f0  @objc ConceptTitleTableHeaderView.setTitle: <stripped>
	0x120840  @objc ConceptTitleTableHeaderView.initWithFrame: <stripped>
	0x120870  @objc ConceptTitleTableHeaderView.initWithCoder: <stripped>
	0x120cb0  @objc ConceptTitleTableHeaderView.layoutSubviews <stripped>
	0x120cf0  @objc ConceptTitleTableHeaderView.sizeThatFits: <stripped>
	0x1214d0  @objc ConceptTitleTableHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x11fe90  func ConceptTitleTableHeaderView.bottomExtraSpace.getter // getter 
	0x11ff10  func ConceptTitleTableHeaderView.bottomExtraSpace.setter // setter 
	0x11ff50  func ConceptTitleTableHeaderView.bottomExtraSpace.modify // modifyCoroutine 
	0x1201c0  func ConceptTitleTableHeaderView.title.setter // setter 
	0x120250  func ConceptTitleTableHeaderView.title.modify // modifyCoroutine 
	0x120060  func ConceptTitleTableHeaderView.title.getter // getter 
	0x120890  func <stripped> // method 
	0x120d40  func <stripped> // method 
 }

 class HealthRecordsUI.WeakNotificationObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let scheduler : TaskScheduler // +0x8 (0x28)
	let block : (_:) // +0x30 (0x10)
	var center : weak NSNotificationCenter? // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x121d70  @objc WeakNotificationObserver.dealloc <stripped>
	0x121ea0  @objc WeakNotificationObserver.didReceiveWithNotification: <stripped>
	0x122050  @objc WeakNotificationObserver.init <stripped>
	0x121e10  @objc WeakNotificationObserver..cxx_destruct <stripped>

	// Swift methods
	0x121a90  class func WeakNotificationObserver.__allocating_init(forName:object:scheduler:center:block:) // init 
	0x121e50  func WeakNotificationObserver.invalidate() // method 
 }

 class HealthRecordsUI.MedicalRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x1248f0  @objc MedicalRecordFormatter.structuredItemsFromRecord: <stripped>
	0x125670  @objc MedicalRecordFormatter.initWithConceptStore:context: <stripped>
	0x125e10  @objc MedicalRecordFormatter.displayItemsFromRecord: <stripped>
	0x125f00  @objc MedicalRecordFormatter.init <stripped>
	0x125f80  @objc MedicalRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x124480  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x1249b0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124a70  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124b30  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124bf0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124cb0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124db0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124ea0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124f90  func MedicalRecordFormatter.displayItems(from:) // method 
	0x125070  func MedicalRecordFormatter.displayItems(from:) // method 
	0x125170  func MedicalRecordFormatter.displayItems(from:) // method 
	0x125270  func MedicalRecordFormatter.displayItems(from:) // method 
	0x125370  func MedicalRecordFormatter.displayItems(from:) // method 
	0x125460  func MedicalRecordFormatter.displayItems(from:) // method 
	0x125590  class func MedicalRecordFormatter.__allocating_init(store:context:) // init 
	0x1256e0  func MedicalRecordFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.ViewControllerFactory : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let profile : HRProfile // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x126d00  @objc ViewControllerFactory.profile <stripped>
	0x127080  @objc ViewControllerFactory.makeSettingsViewController <stripped>
	0x127560  @objc ViewControllerFactory.makeViewControllerForConcept:highlightedRecordId: <stripped>
	0x127a60  @objc ViewControllerFactory.makeViewControllerForRecord: <stripped>
	0x127ac0  @objc ViewControllerFactory.makeDetailViewControllerForRecord: <stripped>
	0x127b60  @objc ViewControllerFactory.init <stripped>
	0x127be0  @objc ViewControllerFactory..cxx_destruct <stripped>

	// Swift methods
	0x126d20  func ViewControllerFactory.makeViewController(forAccount:) // method 
	0x126e10  func ViewControllerFactory.makeAndPresentAddAccountViewController(from:animated:completion:) // method 
	0x126e20  func ViewControllerFactory.makeDetailViewController(forAccount:) // method 
	0x126f30  func ViewControllerFactory.makeDetailViewController(for:) // method 
	0x126f70  func ViewControllerFactory.makeLearnMoreViewController() // method 
	0x126fe0  func ViewControllerFactory.makeSettingsViewController() // method 
	0x127150  func ViewControllerFactory.makeViewController(for:) // method 
	0x127430  func ViewControllerFactory.makeViewController(for:highlightedRecord:) // method 
	0x127630  func ViewControllerFactory.makeViewController(forConcept:highlightedRecord:) // method 
	0x127820  func ViewControllerFactory.makeViewController(for:) // method 
	0x127a80  func ViewControllerFactory.makeDetailViewController(for:) // method 
 }

 class HealthRecordsUI.MedicalRecordAnnotationViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dateGroup : UIStackView // +0x8 (0x8)
	let monthYearLabel : UILabel // +0x10 (0x8)
	let timeLabel : UILabel // +0x18 (0x8)
	let dividerLabel : UILabel // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x129550  @objc MedicalRecordAnnotationViewDataSource.init <stripped>
	0x129570  @objc MedicalRecordAnnotationViewDataSource.numberOfValuesForAnnotationView: <stripped>
	0x1295b0  @objc MedicalRecordAnnotationViewDataSource.valueViewForColumnAtIndex:orientation: <stripped>
	0x1295e0  @objc MedicalRecordAnnotationViewDataSource.showSeparators <stripped>
	0x1295f0  @objc MedicalRecordAnnotationViewDataSource.dateViewWithOrientation: <stripped>
	0x129650  @objc MedicalRecordAnnotationViewDataSource.leftMarginViewWithOrientation: <stripped>
	0x1296b0  @objc MedicalRecordAnnotationViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0x128710  func MedicalRecordAnnotationViewDataSource.numberOfValues(for:) // method 
	0x129580  func MedicalRecordAnnotationViewDataSource.valueViewForColumn(at:orientation:) // method 
	0x128720  func MedicalRecordAnnotationViewDataSource.showSeparators() // method 
	0x128730  func MedicalRecordAnnotationViewDataSource.dateView(with:) // method 
	0x128760  func MedicalRecordAnnotationViewDataSource.leftMarginView(with:) // method 
	0x128770  func MedicalRecordAnnotationViewDataSource.updateDateGroup(using:) // method 
	0x128a70  func MedicalRecordAnnotationViewDataSource.updateDateGroup(using:timeScope:) // method 
	0x128dd0  func MedicalRecordAnnotationViewDataSource.applyOrientation(_:to:) // method 
 }

 class HealthRecordsUI.DisplayItemProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthRecordsUI.AccountErrorFeedItemData {

	// Properties
	let accountId : UUID
	let brandId : BrandIdentifier
	let title : String
	let subtitle : String
 }

 enum HealthRecordsUI.CodingKeys {

	// Properties
	case accountId  
	case brandId  
	case title  
	case subtitle  
 }

 struct HealthRecordsUI.AccountErrorFeedItemIdentifierFactory { }

 class HealthRecordsUI.BloodPressureDataTransformer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit? // +0x10 (0x8)
	var $__lazy_storage_$_displayType : HKDisplayType? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x131e30  @objc BloodPressureDataTransformer.chartPointFor:in:with:dataSourceType: <stripped>
	0x131f40  @objc BloodPressureDataTransformer.graphSeriesWith: <stripped>
	0x132020  @objc BloodPressureDataTransformer.chartDisplayTypeWith:displayName:unitName: <stripped>

	// Swift methods
	0x131040  func BloodPressureDataTransformer.createUserInfo(date:timeScope:systole:diastole:) // method 
	0x1316e0  func BloodPressureDataTransformer.chartPoint(for:in:with:dataSourceType:) // method 
	0x131eb0  func BloodPressureDataTransformer.graphSeries(with:) // method 
	0x132010  func BloodPressureDataTransformer.chartDisplayType(with:displayName:unitName:) // method 
 }

 struct HealthRecordsUI.BrandIdentifier {

	// Properties
	let externalId : String // +0x0
	let batchId : String // +0x10
 }

 enum HealthRecordsUI.CodingKeys {

	// Properties
	case externalId  
	case batchId  
 }

 class HealthRecordsUI.IconTextListView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let textStyle : UIFontTextStyle // +0x8 (0x8)
	var items : ListItem // +0x10 (0x8)
	var font : UIFont // +0x18 (0x8)
	var iconSize : CGSize // +0x20 (0x10)
	let interItemSpacingVertical : CGFloat // +0x30 (0x8)
	let interItemSpacingHorizontal : CGFloat // +0x38 (0x8)
	let hidesIconsForAccessibilityTextSizes : Bool // +0x40 (0x1)

	// ObjC -> Swift bridged methods
	0x1351b0  @objc IconTextListView.initWithCoder: <stripped>
	0x135c20  @objc IconTextListView.layoutSubviews <stripped>
	0x135c60  @objc IconTextListView.sizeThatFits: <stripped>
	0x135fa0  @objc IconTextListView.traitCollectionDidChange: <stripped>
	0x1360a0  @objc IconTextListView.initWithFrame: <stripped>
	0x136120  @objc IconTextListView..cxx_destruct <stripped>

	// Swift methods
	0x134e50  class func IconTextListView.__allocating_init(textStyle:iconSize:interItemSpacingHorizontal:interItemSpacingVertical:hidesIconsForAccessibilityTextSizes:) // init 
	0x135230  func IconTextListView.addItem(icon:text:textColor:) // method 
	0x135240  func IconTextListView.removeAll() // method 
 }

 struct HealthRecordsUI.Icon {

	// Properties
	let image : UIImage // +0x0
	let tint : UIColor? // +0x8
 }

 struct HealthRecordsUI.ListItem {

	// Properties
	let iconView : UIImageView? // +0x0
	let textView : UILabel // +0x8
 }

 class HealthRecordsUI.AccountErrorFeedItemView {
 class HealthRecordsUI.StandardTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x137fa0  @objc StandardTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x138030  @objc StandardTableViewCell.initWithCoder: <stripped>

	// Swift methods
	0x137eb0  class func static StandardTableViewCell.reuseIdentifier.getter // getter 
 }

 class HealthRecordsUI.NoAppTableViewCell : HRStandardTableViewCell {
	// ObjC -> Swift bridged methods
	0x1380d0  @objc NoAppTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x1381b0  @objc NoAppTableViewCell.initWithCoder: <stripped>
 }

 class HealthRecordsUI.SourceTableViewCell : HRStandardTableViewCell {

	// Properties
	var sourceModel : HKSourceDataModel?

	// ObjC -> Swift bridged methods
	0x138de0  @objc SourceTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x138f70  @objc SourceTableViewCell.initWithCoder: <stripped>
	0x1390d0  @objc SourceTableViewCell..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordUnitCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var units : [HKUnit : NSCountedSet] // +0x10 (0x8)

	// Swift methods
	0x139b80  func MedicalRecordUnitCollector.add(units:) // method 
	0x13a3a0  func MedicalRecordUnitCollector.preferredUnit() // method 
 }

 class HealthRecordsUI.BloodPressureFormatter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit? // +0x10 (0x8)

	// Swift methods
	0x13e790  func BloodPressureFormatter.rawUnitString.getter // getter 
	0x13e870  func BloodPressureFormatter.niceUnitString.getter // getter 
	0x13e9e0  func BloodPressureFormatter.valueString(for:diastolicRange:) // method 
 }

 class HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var lastCachedNumberOfChartPoints : Int? // +0x8 (0x9)

	// ObjC -> Swift bridged methods
	0x13f240  @objc SingleValueCurrentValueViewDataSource.attributedTitleStringForCurrentValueView: <stripped>
	0x13fa00  @objc SingleValueCurrentValueViewDataSource.updateDataSourceWithGraphView:displayType:timeScope: <stripped>
	0x13fbb0  @objc SingleValueCurrentValueViewDataSource.initWithDateCache:displayCategoryController:healthStore:selectedRangeFormatter: <stripped>
	0x13fd20  @objc SingleValueCurrentValueViewDataSource.init <stripped>

	// Swift methods
 }

 enum HealthRecordsUI.AccountIconViewError {

	// Properties
	case missingAccount  
 }

 struct HealthRecordsUI.AccountIconViewData {

	// Properties
	let identifier : UUID
	let title : String
 }

 class HealthRecordsUI.AccountIconView {
 enum HealthRecordsUI.CategoryViewReplayableSections {

	// Properties
	case allRecords  
	case unknownRecords  
	case clinicalDocuments  
 }

 enum HealthRecordsUI.ReplayType {

	// Properties
	case category : WDMedicalRecordCategoryType
	case replayableSection : CategoryViewReplayableSections
	case source : String
	case categoryRoom : RecordCategoryViewController.ModeSegment
 }

 struct HealthRecordsUI.ReplayTrace {

	// Properties
	let replayType : ReplayType // +0x0
 }

 class HealthRecordsUI.HealthRecordsViewRouter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum HealthRecordsUI.MedicalRecordFormatterContext { }

 class HealthRecordsUI.DynamicView {
 class HealthRecordsUI.HealthRecordsMigrator : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let healthStore : HKHealthStore // +0x8 (0x8)
	let searchIndexController : SearchIndexController? // +0x10 (0x8)
	let keyValueDomain : HKKeyValueDomain // +0x18 (0x8)
	let queue : OS_dispatch_queue // +0x20 (0x8)
	let healthRecordsKeyValueDomain : String // +0x28 (0x10)
	let dataVersionKey : String // +0x38 (0x10)

	// ObjC -> Swift bridged methods
	0x145700  @objc HealthRecordsMigrator.migrateIfNeededWithCompletion: <stripped>
	0x146080  @objc HealthRecordsMigrator.init <stripped>
	0x146100  @objc HealthRecordsMigrator..cxx_destruct <stripped>

	// Swift methods
 }

 struct HealthRecordsUI.ViewMetrics { }

 class HealthRecordsUI.ConceptListViewController : FeedItemListViewController {
	// Swift methods
 }

 class HealthRecordsUI.ConceptListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let categoryPredicate : NSPredicate
	var store : HealthExperienceStore
	let categoryViewDataSourceProvider : CategoryViewDataSourceProvider

	// Swift methods
	0x1467a0  func ConceptListViewDataSourceProvider.store.getter // getter 
	0x1467e0  func ConceptListViewDataSourceProvider.store.setter // setter 
	0x146830  func ConceptListViewDataSourceProvider.store.modify // modifyCoroutine 
	0x146600  class func ConceptListViewDataSourceProvider.__allocating_init(categoryPredicate:store:) // init 
	0x146920  func ConceptListViewDataSourceProvider.selectedDataSources(for:) // method 
	0x1469e0  func <stripped> // method 
	0x147120  func ConceptListViewDataSourceProvider.makePromotionDataSource() // method 
 }

 class HealthRecordsUI.MedicationDispenseFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x148c20  @objc MedicationDispenseFormatter.init <stripped>
	0x148ca0  @objc MedicationDispenseFormatter..cxx_destruct <stripped>

	// Swift methods
	0x148180  func MedicationDispenseFormatter.structuredItems(from:) // method 
	0x1480c0  class func MedicationDispenseFormatter.__allocating_init(store:context:) // init 
	0x1486b0  func MedicationDispenseFormatter.displayItems(from:) // method 
	0x148710  func <stripped> // method 
 }

 enum HealthRecordsUI.BrowseCategoryError {

	// Properties
	case decodeFailure : (rawValue: String)
 }

 enum HealthRecordsUI.BrowseCategory {

	// Properties
	case subcategory : (kind: DisplayCategory.Kind)
	case account : (identifier: UUID, title: String)
	case healthRecords  
	case clinicalDocuments  
 }

 enum HealthRecordsUI.CodingKeys {

	// Properties
	case rawValue  
 }

 class HealthRecordsUI.ConceptHeaderCell : WDMedicalRecordGroupableCell {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let chevronView : UIView // +0x10 (0x8)
	var $__lazy_storage_$_bottomConstraint : NSLayoutConstraint? // +0x18 (0x8)
	var headerImage : UIImage? // +0x20 (0x8)
	var title : String? // +0x28 (0x10)
	var categoryColor : UIColor? // +0x38 (0x8)

	// ObjC -> Swift bridged methods
	0x14f880  @objc ConceptHeaderCell.headerImage <stripped>
	0x14f8c0  @objc ConceptHeaderCell.setHeaderImage: <stripped>
	0x14f9a0  @objc ConceptHeaderCell.title <stripped>
	0x14fa60  @objc ConceptHeaderCell.setTitle: <stripped>
	0x14fbb0  @objc ConceptHeaderCell.categoryColor <stripped>
	0x14fc70  @objc ConceptHeaderCell.setCategoryColor: <stripped>
	0x1500e0  @objc ConceptHeaderCell.setupSubviews <stripped>
	0x150560  @objc ConceptHeaderCell.setUpConstraints <stripped>
	0x150590  @objc ConceptHeaderCell.intendedPlacement <stripped>
	0x150630  @objc ConceptHeaderCell.setIntendedPlacement: <stripped>
	0x150800  @objc ConceptHeaderCell._updateForCurrentSizeCategory <stripped>
	0x150a10  @objc ConceptHeaderCell.traitCollectionDidChange: <stripped>
	0x150e90  @objc ConceptHeaderCell.initWithStyle:reuseIdentifier: <stripped>
	0x150f60  @objc ConceptHeaderCell.initWithCoder: <stripped>
	0x150ff0  @objc ConceptHeaderCell..cxx_destruct <stripped>

	// Swift methods
	0x14f750  func <stripped> // getter 
	0x14f8a0  func ConceptHeaderCell.headerImage.getter // getter 
	0x14f8e0  func ConceptHeaderCell.headerImage.setter // setter 
	0x14f920  func ConceptHeaderCell.headerImage.modify // modifyCoroutine 
	0x14fa10  func ConceptHeaderCell.title.getter // getter 
	0x14fac0  func ConceptHeaderCell.title.setter // setter 
	0x14faf0  func ConceptHeaderCell.title.modify // modifyCoroutine 
	0x14fc10  func ConceptHeaderCell.categoryColor.getter // getter 
	0x14fd00  func ConceptHeaderCell.categoryColor.setter // setter 
	0x14fd40  func ConceptHeaderCell.categoryColor.modify // modifyCoroutine 
	0x150a60  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartSeries : HKBloodPressureSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
	0x151860  @objc BloodPressureChartSeries.selectedPathRange <stripped>
	0x151af0  @objc BloodPressureChartSeries.init <stripped>
 }

 class HealthRecordsUI.ProfileOnboardingActionViewController {
 class HealthRecordsUI.OnboardingTableViewCell : type metadata for ChromeHostViewTableCell /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {
	// ObjC -> Swift bridged methods
	0x1523f0  @objc OnboardingTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x152450  @objc OnboardingTableViewCell.initWithCoder: <stripped>

	// Swift methods
 }

 class HealthRecordsUI.RecordKindDataProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RecordKindDataProviderProtocol {

	// Properties
	let healthStore : HKHealthStore // +0x10 (0x8)
	let queue : OS_dispatch_queue // +0x18 (0x8)

	// Swift methods
	0x152e40  class func RecordKindDataProvider.__allocating_init(healthStore:) // init 
	0x1530f0  func RecordKindDataProvider.fetchRecordKinds(completion:) // method 
	0x1539c0  func RecordKindDataProvider.fetchRecordKinds(in:completion:) // method 
	0x154a90  func RecordKindDataProvider.addObserver(following:handler:) // method 
 }

 class HealthRecordsUI.CategoryViewControllerManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var activeCategoryViewController : weak UIViewController? // +0x10 (0x8)

	// Swift methods
	0x1577e0  func CategoryViewControllerManager.isCategoryViewControllerOnTop() // method 
	0x157f80  func CategoryViewControllerManager.hasActiveCategoryViewController() // method 
 }

 class HealthRecordsUI.Features : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x1581a0  @objc Features.init <stripped>
 }

 enum HealthRecordsUI.Summary { }

 enum HealthRecordsUI.All { }

 enum HealthRecordsUI.HealthRecords { }

 enum HealthRecordsUI.Charting { }

 enum HealthRecordsUI.UserInterfaceMode {

	// Properties
	case standard  
	case engineering  
 }

 class HealthRecordsUI.HealthRecordsUnitFormatter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x1597d0  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
	0x159880  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
	0x159890  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
 }

 struct HealthRecordsUI.RecordKindFeedItemIdentifierFactory { }

 class HealthRecordsUI.RecordPrimaryTitleCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let recordTitleLabel : UILabel
	let recordDateLabel : UILabel

	// ObjC -> Swift bridged methods
	0x15b0c0  @objc RecordPrimaryTitleCell.recordTitleLabel <stripped>
	0x15b100  @objc RecordPrimaryTitleCell.recordDateLabel <stripped>
	0x15b180  @objc RecordPrimaryTitleCell.initWithStyle:reuseIdentifier: <stripped>
	0x15b1a0  @objc RecordPrimaryTitleCell.initWithCoder: <stripped>
	0x15b940  @objc RecordPrimaryTitleCell..cxx_destruct <stripped>

	// Swift methods
	0x15b1e0  func <stripped> // method 
 }

 class HealthRecordsUI.RecordDetailItemCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let bodyLabel : UILabel

	// ObjC -> Swift bridged methods
	0x15b9f0  @objc RecordDetailItemCell.titleLabel <stripped>
	0x15ba30  @objc RecordDetailItemCell.bodyLabel <stripped>
	0x15bab0  @objc RecordDetailItemCell.initWithStyle:reuseIdentifier: <stripped>
	0x15bb30  @objc RecordDetailItemCell.initWithCoder: <stripped>
	0x15c2d0  @objc RecordDetailItemCell..cxx_destruct <stripped>

	// Swift methods
	0x15bb70  func <stripped> // method 
 }

 class HealthRecordsUI.RecordReferenceRangeCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let referenceRangeView : HKReferenceRangeView // +0x8 (0x8)
	var valueInRange : HKInspectableValueInRange? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x15c380  @objc RecordReferenceRangeCell.valueInRange <stripped>
	0x15c410  @objc RecordReferenceRangeCell.setValueInRange: <stripped>
	0x15c580  @objc RecordReferenceRangeCell.initWithStyle:reuseIdentifier: <stripped>
	0x15c5a0  @objc RecordReferenceRangeCell.initWithCoder: <stripped>
	0x15c640  @objc RecordReferenceRangeCell..cxx_destruct <stripped>

	// Swift methods
	0x15c3d0  func RecordReferenceRangeCell.valueInRange.getter // getter 
	0x15c460  func RecordReferenceRangeCell.valueInRange.setter // setter 
	0x15c480  func RecordReferenceRangeCell.valueInRange.modify // modifyCoroutine 
 }

 class HealthRecordsUI.RecordDataSourceCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let brandView : WDMedicalRecordBrandView

	// ObjC -> Swift bridged methods
	0x15c7a0  @objc RecordDataSourceCell.initWithStyle:reuseIdentifier: <stripped>
	0x15c7c0  @objc RecordDataSourceCell.initWithCoder: <stripped>
	0x15ca00  @objc RecordDataSourceCell.configCellWith:owner:dataProvider: <stripped>
	0x15caf0  @objc RecordDataSourceCell..cxx_destruct <stripped>

	// Swift methods
	0x15c8a0  func RecordDataSourceCell.configCell(with:owner:dataProvider:) // method 
 }

 class HealthRecordsUI.MonogramProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monogrammers : UnboundedCache<CGFloat, HRMonogrammer> // +0x10 (0x48)
	var monograms : UnboundedCache<String, UnboundedCache<CGFloat, UIImage>> // +0x58 (0x48)

	// Swift methods
 }

 enum HealthRecordsUI.FeedItemKind {

	// Properties
	case addAccount  
	case accountError  
	case newRecords  
	case recordKind  
	case categorySummary  
	case category  
 }

 class HealthRecordsUI.ProcedureRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x161f20  @objc ProcedureRecordFormatter.init <stripped>
	0x162000  @objc ProcedureRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x15fb00  class func ProcedureRecordFormatter.__allocating_init(store:context:) // init 
	0x15fc50  func ProcedureRecordFormatter.displayItems(from:) // method 
	0x15fcb0  func <stripped> // method 
	0x160170  func <stripped> // method 
	0x160f90  func <stripped> // method 
	0x160fd0  func <stripped> // method 
	0x161430  func <stripped> // method 
	0x161760  func <stripped> // method 
	0x161a90  func <stripped> // method 
 }

 class HealthRecordsUI.SearchIndexController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let indexName : String // +0x10 (0x10)
	let queue : OS_dispatch_queue // +0x20 (0x8)
	var $__lazy_storage_$_spotlightIndex : CSSearchableIndex? // +0x28 (0x8)

	// Swift methods
 }

 enum HealthRecordsUI.SearchIndexError {

	// Properties
	case notSupported  
 }
