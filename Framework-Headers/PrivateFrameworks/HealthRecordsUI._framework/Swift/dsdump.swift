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
	0x63aa0  @objc SingleValueAnnotationViewDataSource.init <stripped>
	0x63bb0  @objc SingleValueAnnotationViewDataSource.valueViewForColumnAtIndex:orientation: <stripped>
	0x63c50  @objc SingleValueAnnotationViewDataSource.updateUsing: <stripped>
	0x648d0  @objc SingleValueAnnotationViewDataSource.updateUsing:valueRange:dateRange:timeScope: <stripped>
	0x65050  @objc SingleValueAnnotationViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0x63be0  func SingleValueAnnotationViewDataSource.update(using:) // method 
	0x63cc0  func SingleValueAnnotationViewDataSource.updateReferenceRange(using:) // method 
	0x645b0  func SingleValueAnnotationViewDataSource.update(using:valueRange:dateRange:timeScope:) // method 
	0x649f0  func SingleValueAnnotationViewDataSource.updateValue(using:) // method 
 }

 class HealthRecordsUI.SingleValueChartData : HKInteractiveChartSinglePointData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let chartableQuantitySet : HKChartableCodedQuantitySet // +0x8 (0x8)
	let date : Date // +0xfeedfacf (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x3 (0x8)
	let hasTime : Bool // +0x4c (0x1)
	let partOfOutOfRangeSeries : Bool // +0x6100085 (0x1)

	// ObjC -> Swift bridged methods
	0x66020  @objc SingleValueChartData.init <stripped>
	0x66090  @objc SingleValueChartData..cxx_destruct <stripped>

	// Swift methods
	0x65f20  class func SingleValueChartData.__allocating_init(chartableQuantitySet:date:dateFormat:hasTime:partOfOutOfRangeSeries:) // init 
 }

 class HealthRecordsUI.LoadingTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containerView : UIView // +0x8 (0x8)
	let spinner : UIActivityIndicatorView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x66960  @objc LoadingTableViewCell.init <stripped>
	0x66a70  @objc LoadingTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x66b40  @objc LoadingTableViewCell.initWithCoder: <stripped>
	0x672d0  @objc LoadingTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0x668b0  class func static LoadingTableViewCell.reuseIdentifier.getter // getter 
	0x66b80  func LoadingTableViewCell.willDisplay() // method 
	0x66ba0  func LoadingTableViewCell.didEndDisplaying() // method 
	0x66bc0  func <stripped> // method 
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
	0x6d340  @objc TapToRadarManager.init <stripped>
 }

 struct HealthRecordsUI.SyncTaskScheduler: TaskScheduler { }

 class HealthRecordsUI.DiagnosticTestResultFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x6ec50  @objc DiagnosticTestResultFormatter.init <stripped>
	0x6ed30  @objc DiagnosticTestResultFormatter..cxx_destruct <stripped>

	// Swift methods
	0x6e0a0  class func DiagnosticTestResultFormatter.__allocating_init(store:context:) // init 
	0x6e1b0  func DiagnosticTestResultFormatter.displayItems(from:) // method 
	0x6e200  func <stripped> // method 
	0x6e760  func <stripped> // method 
	0x6e7a0  func <stripped> // method 
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
	0x71790  @objc ClinicalSourcesDataProvider.initWithHealthRecordsStore: <stripped>
	0x71840  @objc ClinicalSourcesDataProvider..cxx_destruct <stripped>
 }

 class HealthRecordsUI.HealthRecordsSupportedChangeListener : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let handler : (_:) // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x719a0  @objc HealthRecordsSupportedChangeListener.init <stripped>
	0x71a20  @objc HealthRecordsSupportedChangeListener..cxx_destruct <stripped>

	// Swift methods
	0x71850  class func HealthRecordsSupportedChangeListener.__allocating_init(_:) // init 
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
	0x71a40  class func HealthRecordsSupportedManager.__allocating_init(_:) // init 
	0x71b00  func HealthRecordsSupportedManager.isHealthRecordsSupported() // method 
	0x71b70  func HealthRecordsSupportedManager.observe(_:) // method 
	0x71f90  func HealthRecordsSupportedManager.addListener(_:) // method 
	0x72450  func HealthRecordsSupportedManager.removeListener(_:) // method 
	0x72c50  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x75e20  @objc InternalStateCell.initWithStyle:reuseIdentifier: <stripped>
	0x75ed0  @objc InternalStateCell.initWithCoder: <stripped>
	0x75f70  @objc InternalStateCell..cxx_destruct <stripped>
 }

 class HealthRecordsUI.InternalStateViewController : UITableViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let supportedCategories : [DisplayCategory]
	var currentIngestionState : HKHealthRecordsStoreIngestionState
	var currentIndexingState : HKConceptIndexManagerState

	// ObjC -> Swift bridged methods
	0x76070  @objc InternalStateViewController.init <stripped>
	0x761a0  @objc InternalStateViewController.dealloc <stripped>
	0x761e0  @objc InternalStateViewController.initWithCoder: <stripped>
	0x76560  @objc InternalStateViewController.viewDidLoad <stripped>
	0x76590  @objc InternalStateViewController.numberOfSectionsInTableView: <stripped>
	0x765a0  @objc InternalStateViewController.tableView:numberOfRowsInSection: <stripped>
	0x765c0  @objc InternalStateViewController.tableView:cellForRowAtIndexPath: <stripped>
	0x76680  @objc InternalStateViewController.tableView:shouldHighlightRowAtIndexPath: <stripped>
	0x76730  @objc InternalStateViewController.tableView:titleForHeaderInSection: <stripped>
	0x77740  @objc InternalStateViewController.healthRecordsStore:ingestionStateDidUpdateTo: <stripped>
	0x777d0  @objc InternalStateViewController.conceptStore:indexManagerDidChangeState: <stripped>
	0x77860  @objc InternalStateViewController.medicalRecordCountProvider:didUpdateCountForSampleTypes: <stripped>
	0x77870  @objc InternalStateViewController.medicalRecordCountProviderDidUpdateAllRecordsCount: <stripped>
	0x77880  @objc InternalStateViewController.medicalRecordCountProvider:didUpdateCountForCategories: <stripped>
	0x778f0  @objc InternalStateViewController.initWithStyle: <stripped>
	0x77920  @objc InternalStateViewController.initWithNibName:bundle: <stripped>
	0x761c0  @objc InternalStateViewController..cxx_destruct <stripped>

	// Swift methods
	0x76780  func <stripped> // method 
	0x76960  func <stripped> // method 
	0x76bd0  func <stripped> // method 
	0x76e10  func <stripped> // method 
	0x77230  func <stripped> // method 
	0x774d0  func <stripped> // method 
 }

 class HealthRecordsUI.FeedItemListViewController : type metadata for DataTypeDetailViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]

	// ObjC -> Swift bridged methods
	0x7a260  @objc FeedItemListViewController.initWithCoder: <stripped>
	0x7a6d0  @objc FeedItemListViewController.viewDidLoad <stripped>
	0x7aa20  @objc FeedItemListViewController.viewWillAppear: <stripped>
	0x7aa70  @objc FeedItemListViewController.initWithCollectionViewLayout: <stripped>
	0x7aaa0  @objc FeedItemListViewController.initWithNibName:bundle: <stripped>
	0x7ab50  @objc FeedItemListViewController..cxx_destruct <stripped>

	// Swift methods
	0x7a140  func <stripped> // method 
	0x7a250  func <stripped> // getter 
 }

 class HealthRecordsUI.FeedItemListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]
	let store : HealthExperienceStore

	// Swift methods
	0x7ac10  func <stripped> // method 
 }

 class HealthRecordsUI.SingleValueDataTransformer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
	0x7cd80  @objc SingleValueDataTransformer.chartPointFor:in:with:dataSourceType: <stripped>
	0x7cee0  @objc SingleValueDataTransformer.graphSeriesWith: <stripped>
	0x7cf40  @objc SingleValueDataTransformer.chartDisplayTypeWith:displayName:unitName: <stripped>

	// Swift methods
	0x7cc10  func SingleValueDataTransformer.chartPoint(for:in:with:dataSourceType:) // method 
	0x7ced0  func SingleValueDataTransformer.graphSeries(with:) // method 
	0x7cf30  func SingleValueDataTransformer.chartDisplayType(with:displayName:unitName:) // method 
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
	0x85ef0  @objc ConditionRecordFormatter.init <stripped>
	0x85fd0  @objc ConditionRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x84e90  class func ConditionRecordFormatter.__allocating_init(store:context:) // init 
	0x84fa0  func ConditionRecordFormatter.displayItems(from:) // method 
	0x85000  func <stripped> // method 
	0x854a0  func <stripped> // method 
	0x859c0  func <stripped> // method 
	0x85a00  func <stripped> // method 
	0x85a40  func <stripped> // method 
 }

 class HealthRecordsUI.TimelineHeaderView : UITableViewHeaderFooterView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : weak HRTimelineHeaderViewDelegate? // +0x8 (0x8)
	var $__lazy_storage_$_titleLabel : UILabel? // +0x10 (0x8)
	var $__lazy_storage_$_subtitleLabel : UILabel? // +0x18 (0x8)
	var $__lazy_storage_$_backgroundEffectView : UIVisualEffectView? // +0x20 (0x8)
	var $__lazy_storage_$_separatorView : UIView? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x86f10  @objc TimelineHeaderView.delegate <stripped>
	0x86f90  @objc TimelineHeaderView.setDelegate: <stripped>
	0x87300  @objc TimelineHeaderView.initWithReuseIdentifier: <stripped>
	0x873c0  @objc TimelineHeaderView.initWithCoder: <stripped>
	0x87750  @objc TimelineHeaderView.applyTitle:subtitle: <stripped>
	0x87980  @objc TimelineHeaderView.applyStyleFromNavigationBar: <stripped>
	0x87a40  @objc TimelineHeaderView.prepareForReuse <stripped>
	0x87b00  @objc TimelineHeaderView.floating <stripped>
	0x87bb0  @objc TimelineHeaderView.setFloating: <stripped>
	0x88720  @objc TimelineHeaderView.layoutSubviews <stripped>
	0x88760  @objc TimelineHeaderView.sizeThatFits: <stripped>
	0x88aa0  @objc TimelineHeaderView.traitCollectionDidChange: <stripped>
	0x88b70  @objc TimelineHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x86ee0  class func static TimelineHeaderView.reuseIdentifier.getter // getter 
	0x86f50  func TimelineHeaderView.delegate.getter // getter 
	0x86fd0  func TimelineHeaderView.delegate.setter // setter 
	0x87020  func TimelineHeaderView.delegate.modify // modifyCoroutine 
	0x87100  func <stripped> // getter 
	0x87120  func <stripped> // getter 
	0x87400  func <stripped> // method 
	0x87740  func TimelineHeaderView.apply(title:subtitle:) // method 
	0x87800  func TimelineHeaderView.applyStyle(from:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartabilityResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let configuration : MedicalRecordChartConfiguration // +0x8 (0x8)
	let masterDataSource : MedicalRecordChartDataSource // +0x10 (0x8)
	let seriesDataSources : [MedicalRecordChartDataSource] // +0x18 (0x8)
	let outOfRangeDataSource : MedicalRecordChartDataSource? // +0x20 (0x8)
	let noRangeDataSource : MedicalRecordChartDataSource? // +0x28 (0x8)
	let latestChartableDate : Date? // +0x19f000 (0x0)

	// ObjC -> Swift bridged methods
	0x89010  @objc MedicalRecordChartabilityResult.configuration <stripped>
	0x89060  @objc MedicalRecordChartabilityResult.masterDataSource <stripped>
	0x890a0  @objc MedicalRecordChartabilityResult.seriesDataSources <stripped>
	0x89110  @objc MedicalRecordChartabilityResult.outOfRangeDataSource <stripped>
	0x89170  @objc MedicalRecordChartabilityResult.noRangeDataSource <stripped>
	0x891d0  @objc MedicalRecordChartabilityResult.latestChartableDate <stripped>
	0x89280  @objc MedicalRecordChartabilityResult.shouldProduceAtLeastOneOverlay <stripped>
	0x89590  @objc MedicalRecordChartabilityResult.init <stripped>
	0x89600  @objc MedicalRecordChartabilityResult..cxx_destruct <stripped>

	// Swift methods
	0x89300  func MedicalRecordChartabilityResult.shouldProduceAtLeastOneOverlay.getter // getter 
	0x893d0  class func MedicalRecordChartabilityResult.__allocating_init(configuration:masterDataSource:seriesDataSources:outOfRangeDataSource:noRangeDataSource:latestChartableDate:) // init 
 }

 class HealthRecordsUI.MedicalRecordChartabilityDeterminer : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x8bec0  @objc MedicalRecordChartabilityDeterminer.determineChartabilityForConcept:records:completion: <stripped>
	0x8c240  @objc MedicalRecordChartabilityDeterminer.init <stripped>

	// Swift methods
	0x89670  func MedicalRecordChartabilityDeterminer.determineChartability(for:records:completion:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeriesCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let concept : HKConcept
	var preferredColors : HKUIMetricColors?
	var chartableQuantitySets : [HKChartableCodedQuantitySet]

	// Swift methods
	0x8c170  class func MedicalRecordChartableSeriesCollector.__allocating_init(concept:) // init 
	0x8c300  func MedicalRecordChartableSeriesCollector.collect(record:) // method 
	0x8c5c0  func MedicalRecordChartableSeriesCollector.allUnits.getter // getter 
	0x8ca60  func MedicalRecordChartableSeriesCollector.chartDataSourceSeries(compatibleWith:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeries : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let concept : HKConcept
	let chartableQuantitySets : [HKChartableCodedQuantitySet]
	let preferredColors : HKUIMetricColors?

	// ObjC -> Swift bridged methods
	0x8e100  @objc MedicalRecordChartableSeries.init <stripped>
	0x8e190  @objc MedicalRecordChartableSeries..cxx_destruct <stripped>

	// Swift methods
	0x8d460  func <stripped> // getter 
	0x8d310  class func MedicalRecordChartableSeries.__allocating_init(concept:chartableQuantities:unit:preferredColors:) // init 
	0x8d6f0  func MedicalRecordChartableSeries.createDataSource(with:unit:) // method 
	0x8d7d0  func MedicalRecordChartableSeries.outOfRangeQuantitySets() // method 
	0x8dc40  func MedicalRecordChartableSeries.noRangeQuantitySets() // method 
 }

 struct HealthRecordsUI.UnboundedCache: Cache {

	// Properties
	let storageBox : Box<[A : B]>
	let lowMemoryWarnings : Any
	let didEnterBackground : Any
 }

 class HealthRecordsUI.SingleValueChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xa9bf0  @objc SingleValueChartConfiguration.chartControllerClass <stripped>
	0xa9c60  @objc SingleValueChartConfiguration.shouldShowOutOfRangeOverlay <stripped>
	0xa9c90  @objc SingleValueChartConfiguration.dataTransformer <stripped>
	0xa9d60  @objc SingleValueChartConfiguration.init <stripped>

	// Swift methods
	0xa9c30  func SingleValueChartConfiguration.chartControllerClass.getter // getter 
	0xa9c80  func SingleValueChartConfiguration.shouldShowOutOfRangeOverlay.getter // getter 
	0xa9cc0  func SingleValueChartConfiguration.dataTransformer.getter // getter 
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
	0xaacc0  @objc SettingsViewController.init <stripped>
	0xaadd0  @objc SettingsViewController.dealloc <stripped>
	0xaba20  @objc SettingsViewController.viewDidLoad <stripped>
	0xabd80  @objc SettingsViewController.viewDidAppear: <stripped>
	0xabdc0  @objc SettingsViewController.tapToRadar: <stripped>
	0xacd60  @objc SettingsViewController.healthRecordsStore:accountDidChange:changeType: <stripped>
	0xad140  @objc SettingsViewController.initWithUsingInsetStyling: <stripped>
	0xad2a0  @objc SettingsViewController.initWithStyle: <stripped>
	0xad4b0  @objc SettingsViewController.initWithNibName:bundle: <stripped>
	0xad570  @objc SettingsViewController.initWithCoder: <stripped>
	0xaae80  @objc SettingsViewController..cxx_destruct <stripped>

	// Swift methods
	0xabe50  func SettingsViewController.accountStateDidChange(healthRecordsStore:account:changeType:) // method 
	0xacde0  func SettingsViewController.providedHealthExperienceStore.getter // getter 
	0xace40  func SettingsViewController.providedHealthStore.getter // getter 
	0xaceb0  func SettingsViewController.pushForAPIAuthorization(forSource:) // method 
 }

 class HealthRecordsUI.AccountErrorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let profile : HRProfile // +0x10 (0x8)
	let healthRecordsStore : HKHealthRecordsStore // +0x18 (0x8)

	// Swift methods
	0xb2e00  func AccountErrorManager.presentRelogin(for:from:completion:) // method 
	0xb3600  func AccountErrorManager.presentRelogin(for:from:completion:) // method 
 }

 class HealthRecordsUI.BloodPressureChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xb4850  @objc BloodPressureChartConfiguration.chartControllerClass <stripped>
	0xb48c0  @objc BloodPressureChartConfiguration.shouldShowOutOfRangeOverlay <stripped>
	0xb48e0  @objc BloodPressureChartConfiguration.dataTransformer <stripped>
	0xb49d0  @objc BloodPressureChartConfiguration.init <stripped>

	// Swift methods
	0xb4890  func BloodPressureChartConfiguration.chartControllerClass.getter // getter 
	0xb48d0  func BloodPressureChartConfiguration.shouldShowOutOfRangeOverlay.getter // getter 
	0xb4920  func BloodPressureChartConfiguration.dataTransformer.getter // getter 
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
	0xb5530  @objc FilterSettingsViewController.initWithDelegate:selectedCategories:selectedAccounts: <stripped>
	0xb5590  @objc FilterSettingsViewController.initWithCoder: <stripped>
	0xb5e70  @objc FilterSettingsViewController.viewDidLoad <stripped>
	0xb5eb0  @objc FilterSettingsViewController.numberOfSectionsInTableView: <stripped>
	0xb6030  @objc FilterSettingsViewController.tableView:viewForHeaderInSection: <stripped>
	0xb60b0  @objc FilterSettingsViewController.tableView:numberOfRowsInSection: <stripped>
	0xb6d40  @objc FilterSettingsViewController.tableView:cellForRowAtIndexPath: <stripped>
	0xb6eb0  @objc FilterSettingsViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0xb6f80  @objc FilterSettingsViewController.tableView:heightForHeaderInSection: <stripped>
	0xb6fa0  @objc FilterSettingsViewController.tableView:heightForFooterInSection: <stripped>
	0xb7a10  @objc FilterSettingsViewController.doneButtonTapped <stripped>
	0xb7ab0  @objc FilterSettingsViewController.initWithUsingInsetStyling: <stripped>
	0xb7b40  @objc FilterSettingsViewController.initWithStyle: <stripped>
	0xb7c10  @objc FilterSettingsViewController.initWithNibName:bundle: <stripped>
	0xb7c90  @objc FilterSettingsViewController..cxx_destruct <stripped>

	// Swift methods
	0xb4ce0  class func FilterSettingsViewController.__allocating_init(withDelegate:selectedCategories:selectedAccounts:) // init 
	0xb6fb0  func <stripped> // method 
	0xb71f0  func <stripped> // method 
	0xb7430  func <stripped> // method 
	0xb7460  func <stripped> // method 
	0xb7680  func <stripped> // method 
	0xb76a0  func <stripped> // method 
	0xb7820  func <stripped> // method 
 }

 class HealthRecordsUI.AddAccountTableViewCell : HRStandardTableViewCell {

	// Properties
	var alignWithAccountTitle : Bool // +0x8 (0x1)

	// ObjC -> Swift bridged methods
	0xbd070  @objc AddAccountTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xbd150  @objc AddAccountTableViewCell.initWithCoder: <stripped>
	0xbd450  @objc AddAccountTableViewCell.tintColorDidChange <stripped>

	// Swift methods
	0xbd1f0  func <stripped> // method 
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
	0xbfba0  class func CategoryCountDataProvider.__allocating_init(healthStore:) // init 
	0xbfc30  func CategoryCountDataProvider.fetchCategoryCounts(categories:additionalPredicate:completion:) // method 
 }

 class HealthRecordsUI.AllergyRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_reactionFormatter : AllergyReactionFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xcbad0  @objc AllergyRecordFormatter.init <stripped>
	0xcbb50  @objc AllergyRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0xca070  func AllergyRecordFormatter.structuredItems(from:) // method 
	0xca220  class func AllergyRecordFormatter.__allocating_init(store:context:) // init 
	0xca320  func AllergyRecordFormatter.displayItems(from:) // method 
	0xca380  func <stripped> // method 
	0xca830  func <stripped> // method 
	0xcb630  func <stripped> // method 
 }

 struct HealthRecordsUI.CategorySummaryFeedItemIdentifierFactory { }

 class HealthRecordsUI.MedicationOrderFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xce200  @objc MedicationOrderFormatter.init <stripped>
	0xce280  @objc MedicationOrderFormatter..cxx_destruct <stripped>

	// Swift methods
	0xcce80  func MedicationOrderFormatter.structuredItems(from:) // method 
	0xcd340  class func MedicationOrderFormatter.__allocating_init(store:context:) // init 
	0xcd440  func MedicationOrderFormatter.displayItems(from:) // method 
	0xcd4a0  func <stripped> // method 
	0xcd950  func <stripped> // method 
	0xcdd10  func <stripped> // method 
	0xcdd50  func <stripped> // method 
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
	0xd5670  @objc MedicationDosageFormatter.init <stripped>
	0xd56f0  @objc MedicationDosageFormatter..cxx_destruct <stripped>

	// Swift methods
	0xd4e70  func MedicationDosageFormatter.structuredItems(from:) // method 
	0xd51d0  func MedicationDosageFormatter.displayItems(from:) // method 
	0xd4dc0  class func MedicationDosageFormatter.__allocating_init(store:context:) // init 
	0xd5530  func MedicationDosageFormatter.displayItems(from:) // method 
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
	0xd6f10  @objc RecordCategoryViewController.initWithCoder: <stripped>
	0xd6fc0  @objc RecordCategoryViewController.dealloc <stripped>
	0xd7400  @objc RecordCategoryViewController.viewDidLoad <stripped>
	0xd7540  @objc RecordCategoryViewController.viewWillLayoutSubviews <stripped>
	0xd76c0  @objc RecordCategoryViewController.modePickerDidChange: <stripped>
	0xd7740  @objc RecordCategoryViewController.tapToRadar: <stripped>
	0xd8300  @objc RecordCategoryViewController.initWithNibName:bundle: <stripped>
	0xd7040  @objc RecordCategoryViewController..cxx_destruct <stripped>

	// Swift methods
	0xd7570  func <stripped> // method 
	0xd77d0  func <stripped> // method 
	0xd78e0  func <stripped> // method 
	0xd79c0  func <stripped> // method 
	0xd7fe0  func <stripped> // method 
	0xd8170  func <stripped> // getter 
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
	0xda770  @objc NoDataViewController.initWithCoder: <stripped>
	0xda8a0  @objc NoDataViewController.loadView <stripped>
	0xda8d0  @objc NoDataViewController.initWithNibName:bundle: <stripped>

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
	0xdb630  func CancellationToken.isCancelled.getter // getter 
	0xdb660  func CancellationToken.cancelBlock.getter // getter 
	0xdb6a0  func CancellationToken.cancelBlock.setter // setter 
	0xdb6e0  func CancellationToken.cancelBlock.modify // modifyCoroutine 
	0xdb4f0  class func CancellationToken.__allocating_init(cancelBlock:) // init 
	0xdb9f0  func CancellationToken.cancel() // method 
 }

 class HealthRecordsUI.PromotionListViewController : FeedItemListViewController {
	// Swift methods
 }

 class HealthRecordsUI.PromotionListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
	var store : HealthExperienceStore

	// Swift methods
	0xdbe90  func PromotionListViewDataSourceProvider.store.getter // getter 
	0xdbed0  func PromotionListViewDataSourceProvider.store.setter // setter 
	0xdbf20  func PromotionListViewDataSourceProvider.store.modify // modifyCoroutine 
	0xdbb40  class func PromotionListViewDataSourceProvider.__allocating_init(predicate:store:) // init 
	0xdbfa0  func PromotionListViewDataSourceProvider.selectedDataSources(for:) // method 
	0xdc030  func PromotionListViewDataSourceProvider.makePromotionDataSource() // method 
 }

 class HealthRecordsUI.AccountErrorTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let accountErrorView : AccountErrorFeedItemView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xdc8a0  @objc AccountErrorTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xdc900  @objc AccountErrorTableViewCell.initWithCoder: <stripped>
	0xdce20  @objc AccountErrorTableViewCell.layoutSubviews <stripped>
	0xdcf00  @objc AccountErrorTableViewCell.sizeThatFits: <stripped>
	0xdd140  @objc AccountErrorTableViewCell.traitCollectionDidChange: <stripped>
	0xdd290  @objc AccountErrorTableViewCell.layoutMarginsDidChange <stripped>
	0xdd450  @objc AccountErrorTableViewCell.prepareForReuse <stripped>
	0xdd540  @objc AccountErrorTableViewCell.setHighlighted:animated: <stripped>
	0xdd5e0  @objc AccountErrorTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0xdc7c0  class func static AccountErrorTableViewCell.reuseIdentifier.getter // getter 
	0xdc9d0  func <stripped> // method 
 }

 class HealthRecordsUI.SuggestedActionTileViewControllerShim {
 class HealthRecordsUI.OnboardingSuggestedActionViewController {
 class HealthRecordsUI.BloodPressureCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
	0xdef00  @objc BloodPressureCurrentValueViewDataSource.initWithDateCache:displayCategoryController:healthStore:selectedRangeFormatter: <stripped>
	0xdf050  @objc BloodPressureCurrentValueViewDataSource.init <stripped>
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
	0xe9fa0  @objc MedicalRecordChartDataSource.displayName <stripped>
	0xea320  @objc MedicalRecordChartDataSource.initWithConcept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type: <stripped>
	0xea3b0  @objc MedicalRecordChartDataSource.cachedBlockForPath:context: <stripped>
	0xeb1e0  @objc MedicalRecordChartDataSource.chartDisplayTypeWithVerticalAxis: <stripped>
	0xec710  @objc MedicalRecordChartDataSource.init <stripped>
	0xec790  @objc MedicalRecordChartDataSource..cxx_destruct <stripped>

	// Swift methods
	0xe9d60  func MedicalRecordChartDataSource.unit.getter // getter 
	0xe9de0  func MedicalRecordChartDataSource.preferredColors.getter // getter 
	0xe9e40  func MedicalRecordChartDataSource.chartableXRange.getter // getter 
	0xe9f40  func MedicalRecordChartDataSource.chartableYRange.getter // getter 
	0xea080  func MedicalRecordChartDataSource.displayName.getter // getter 
	0xe9800  class func MedicalRecordChartDataSource.__allocating_init(concept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type:) // init 
	0xea460  func MedicalRecordChartDataSource.chartPoints(in:with:) // method 
	0xea9a0  func MedicalRecordChartDataSource.numberOfDataPoints(in:) // method 
	0xeaca0  func MedicalRecordChartDataSource.graphSeries(withMainColor:verticalAxis:) // method 
	0xeafe0  func MedicalRecordChartDataSource.chartDisplayType(verticalAxis:) // method 
	0xeb240  func MedicalRecordChartDataSource.take(chartableCodedQuantitySets:) // method 
	0xeb950  func MedicalRecordChartDataSource.bucketQuantitySets(with:) // method 
 }

 class HealthRecordsUI.CategoryRecordQueryDescription : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SampleQueryDescription {

	// Properties
	let category : BrowseCategory // +0x80000400 (0x0)
	let sampleQueryDescription : HKSampleQueryDescription // +0x0 (0x8)

	// Swift methods
	0xf1770  func CategoryRecordQueryDescription.sampleType.getter // getter 
	0xf17a0  func CategoryRecordQueryDescription.predicate.getter // getter 
	0xf17e0  func CategoryRecordQueryDescription.hash(into:) // method 
	0xf18b0  func CategoryRecordQueryDescription.hashValue.getter // getter 
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
	0xf4330  @objc VaccinationRecordFormatter.init <stripped>
	0xf4410  @objc VaccinationRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0xf24c0  class func VaccinationRecordFormatter.__allocating_init(store:context:) // init 
	0xf25d0  func VaccinationRecordFormatter.displayItems(from:) // method 
	0xf2630  func <stripped> // method 
	0xf2b20  func <stripped> // method 
	0xf39d0  func <stripped> // method 
	0xf3e20  func <stripped> // method 
	0xf3e60  func <stripped> // method 
 }

 class HealthRecordsUI.NotificationPolicy : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xf5420  @objc NotificationPolicy.userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler: <stripped>
	0xf5b00  @objc NotificationPolicy.userNotificationCenter:willPresentNotification:withCompletionHandler: <stripped>
	0xf5c90  @objc NotificationPolicy.init <stripped>

	// Swift methods
	0xf5210  func NotificationPolicy.userNotificationCenter(_:didReceive:withCompletionHandler:) // method 
	0xf54a0  func NotificationPolicy.userNotificationCenter(_:willPresent:withCompletionHandler:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartPoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let chartableSet : HKChartableCodedQuantitySet // +0x8 (0x8)
	let blockCoordinateInfo : SingleValueChartData // +0x10 (0x8)
	let sortedYValues : [Double] // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xf7020  @objc MedicalRecordChartPoint.userInfo <stripped>
	0xf7110  @objc MedicalRecordChartPoint.xValueAsGenericType <stripped>
	0xf72e0  @objc MedicalRecordChartPoint.maxXValueAsGenericType <stripped>
	0xf72e0  @objc MedicalRecordChartPoint.minXValueAsGenericType <stripped>
	0xf7430  @objc MedicalRecordChartPoint.yValue <stripped>
	0xf7530  @objc MedicalRecordChartPoint.yValueForKey: <stripped>
	0xf7750  @objc MedicalRecordChartPoint.allYValues <stripped>
	0xf7430  @objc MedicalRecordChartPoint.minYValue <stripped>
	0xf7820  @objc MedicalRecordChartPoint.maxYValue <stripped>
	0xf78a0  @objc MedicalRecordChartPoint.description <stripped>
	0xf7c00  @objc MedicalRecordChartPoint.init <stripped>
	0xf7c80  @objc MedicalRecordChartPoint..cxx_destruct <stripped>

	// Swift methods
	0xf6b50  class func MedicalRecordChartPoint.__allocating_init(chartableSet:unit:blockCoordinateInfo:) // init 
	0xf6ff0  func MedicalRecordChartPoint.userInfo() // method 
	0xf7050  func MedicalRecordChartPoint.xValueAsGenericType() // method 
	0xf7220  func MedicalRecordChartPoint.maxXValueAsGenericType() // method 
	0xf8f50  func MedicalRecordChartPoint.minXValueAsGenericType() // method 
	0xf73f0  func MedicalRecordChartPoint.yValue() // method 
	0xf74a0  func MedicalRecordChartPoint.yValue(forKey:) // method 
	0xf75e0  func MedicalRecordChartPoint.allYValues() // method 
	0xf8f40  func MedicalRecordChartPoint.minYValue() // method 
	0xf77d0  func MedicalRecordChartPoint.maxYValue() // method 
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
	0xfb820  @objc LabelStackView.initWithCoder: <stripped>
	0xfc120  @objc LabelStackView.layoutSubviews <stripped>
	0xfc160  @objc LabelStackView.sizeThatFits: <stripped>
	0xfc260  @objc LabelStackView.initWithFrame: <stripped>
	0xfc2e0  @objc LabelStackView..cxx_destruct <stripped>

	// Swift methods
	0xfb580  class func LabelStackView.__allocating_init(textStyle:) // init 
	0xfb8c0  func LabelStackView.addLabel(text:textColor:) // method 
	0xfba80  func LabelStackView.removeAll() // method 
 }

 class HealthRecordsUI.BrowseIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var iconCache : UnboundedCache<BrowseCategory, UnboundedCache<AccountIcon.Size, BrowseIcon>> // +0x10 (0x48)
	var placeholderCache : UnboundedCache<BrowseCategory, UnboundedCache<AccountIcon.Size, BrowseIcon>> // +0x58 (0x48)
	let accountIconProvider : AccountIconProvider // +0xa0 (0x8)

	// Swift methods
	0xfdd60  class func BrowseIconProvider.__allocating_init(accountIconProvider:) // init 
	0xfdf50  func BrowseIconProvider.placeholder(for:size:) // method 
	0xfe420  func BrowseIconProvider.fetchIcon(for:size:queue:completion:) // method 
 }

 class HealthRecordsUI.OAuthViewControllerNotificationUserInfoKeys : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xffec0  @objc OAuthViewControllerNotificationUserInfoKeys.init <stripped>
	0xfff60  @objc OAuthViewControllerNotificationUserInfoKeys..cxx_destruct <stripped>
 }

 class HealthRecordsUI.AllergyReactionFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x102fe0  @objc AllergyReactionFormatter.displayItemsFromReaction: <stripped>
	0x1041e0  @objc AllergyReactionFormatter.init <stripped>
	0x104260  @objc AllergyReactionFormatter..cxx_destruct <stripped>

	// Swift methods
	0x100eb0  func AllergyReactionFormatter.structuredItems(from:) // method 
	0x101f10  func AllergyReactionFormatter.displayItems(from:) // method 
	0x102eb0  class func AllergyReactionFormatter.__allocating_init(store:context:) // init 
	0x102f90  func AllergyReactionFormatter.displayItems(from:) // method 
	0x1030d0  func <stripped> // method 
	0x1032b0  func <stripped> // method 
	0x103c90  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartData : HKInteractiveChartBloodPressureData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let date : Date // +0x16f730 (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0xe3b5 (0x8)
	let hasTime : Bool // +0x16f730 (0x1)
	let partOfOutOfRangeSeries : Bool // +0x0 (0x1)

	// ObjC -> Swift bridged methods
	0x105cb0  @objc BloodPressureChartData.init <stripped>
	0x105d20  @objc BloodPressureChartData..cxx_destruct <stripped>

	// Swift methods
	0x105a40  class func BloodPressureChartData.__allocating_init(date:dateFormat:hasTime:systolicRange:diastolicRange:) // init 
 }

 class HealthRecordsUI.AccountTableViewCell : HRSourceTableViewCell {

	// Properties
	let brandView : WDMedicalRecordBrandView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x107540  @objc AccountTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x107590  @objc AccountTableViewCell.initWithCoder: <stripped>
	0x1077b0  @objc AccountTableViewCell.configureWithAccount:dataProvider: <stripped>
	0x107c10  @objc AccountTableViewCell.prepareForReuse <stripped>
	0x107df0  @objc AccountTableViewCell.layoutSubviews <stripped>
	0x107e90  @objc AccountTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0x107690  func <stripped> // method 
	0x1077a0  func AccountTableViewCell.configureWithAccountDataProviderForObjC(_:_:) // method 
	0x107820  func <stripped> // method 
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
	0x10c050  @objc MedicalRecordChartOverlayContext.initWithTitle:dataSource:defaultColors:selectedColors:verticalAxis: <stripped>
	0x10c170  @objc MedicalRecordChartOverlayContext.contextItemForLastUpdate <stripped>
	0x10c480  @objc MedicalRecordChartOverlayContext.updateContextItemForDateInterval:timeScope:completion: <stripped>
	0x10c5b0  @objc MedicalRecordChartOverlayContext.sampleTypeForDateRangeUpdates <stripped>
	0x10c650  @objc MedicalRecordChartOverlayContext.overlayDisplayTypeForTimeScope: <stripped>
	0x10c6e0  @objc MedicalRecordChartOverlayContext.init <stripped>
	0x10c760  @objc MedicalRecordChartOverlayContext..cxx_destruct <stripped>

	// Swift methods
	0x10be00  class func MedicalRecordChartOverlayContext.__allocating_init(title:dataSource:defaultColors:selectedColors:verticalAxis:) // init 
	0x10c0e0  func MedicalRecordChartOverlayContext.contextItemForLastUpdate() // method 
	0x10c1b0  func MedicalRecordChartOverlayContext.updateItem(for:timeScope:completion:) // method 
	0x10c550  func MedicalRecordChartOverlayContext.sampleTypeForDateRangeUpdates() // method 
	0x10c640  func MedicalRecordChartOverlayContext.overlayDisplayType(for:) // method 
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
	0x10d5d0  @objc AccountStateChangeListener.healthRecordsStore:accountDidChange:changeType: <stripped>
	0x10d6a0  @objc AccountStateChangeListener.init <stripped>
	0x10d950  @objc AccountStateChangeListener..cxx_destruct <stripped>

	// Swift methods
	0x10d1f0  class func AccountStateChangeListener.__allocating_init(handler:) // init 
	0x10d2f0  func AccountStateChangeListener.accountStateDidChange(healthRecordsStore:account:changeType:) // method 
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
	0x111330  func CountFormatter.style.getter // getter 
	0x1113a0  func CountFormatter.style.setter // setter 
	0x1113d0  func CountFormatter.style.modify // modifyCoroutine 
	0x1114a0  class func CountFormatter.__allocating_init(style:) // init 
	0x111560  func CountFormatter.string(for:) // method 
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
	0x112ab0  @objc DiagnosticTestReportFormatter.init <stripped>
	0x112b90  @objc DiagnosticTestReportFormatter..cxx_destruct <stripped>

	// Swift methods
	0x1121e0  class func DiagnosticTestReportFormatter.__allocating_init(store:context:) // init 
	0x1122f0  func DiagnosticTestReportFormatter.displayItems(from:) // method 
	0x112350  func <stripped> // method 
	0x112880  func <stripped> // method 
 }

 class HealthRecordsUI.AccountIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monogramProvider : MonogramProvider // +0x10 (0x8)
	var brandImageManager : HKBrandImageManager // +0x18 (0x8)
	var iconCache : UnboundedCache<UUID, UnboundedCache<AccountIcon.Size, AccountIcon>> // +0x20 (0x48)

	// Swift methods
	0x113380  class func AccountIconProvider.__allocating_init(brandImageManager:monogramProvider:) // init 
	0x1134e0  func AccountIconProvider.placeholder(forTitle:size:) // method 
	0x1142f0  func AccountIconProvider.fetchIcon(forAccount:size:completion:) // method 
	0x114970  func AccountIconProvider.fetchIcon(for:size:queue:completion:) // method 
 }

 class HealthRecordsUI.ContentStatusCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let spinner : UIActivityIndicatorView // +0x8 (0x8)
	let titleLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x116cc0  @objc ContentStatusCell.spinner <stripped>
	0x116d00  @objc ContentStatusCell.titleLabel <stripped>
	0x116f20  @objc ContentStatusCell.init <stripped>
	0x116f40  @objc ContentStatusCell.initWithCoder: <stripped>
	0x117460  @objc ContentStatusCell.initWithStyle:reuseIdentifier: <stripped>
	0x1174e0  @objc ContentStatusCell..cxx_destruct <stripped>

	// Swift methods
	0x116f60  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartSeries : HKGraphSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var selectedStrokeStyle : HKStrokeStyle?
	var unselectedStrokeStyle : HKStrokeStyle?

	// ObjC -> Swift bridged methods
	0x1178e0  @objc MedicalRecordChartSeries.selectedPathRange <stripped>
	0x117b30  @objc MedicalRecordChartSeries.coordinatesForBlock:blockPath:xAxis:yAxis: <stripped>
	0x1183c0  @objc MedicalRecordChartSeries.drawSeriesWithBlockCoordinates:axisRect:zoomLevelConfiguration:pointTransform:renderContext:secondaryRenderContext: <stripped>
	0x1184d0  @objc MedicalRecordChartSeries.supportsMultiTouchSelection <stripped>
	0x118500  @objc MedicalRecordChartSeries.blockCoordinateIsVisibleInsideOfChartRect:blockCoordinate: <stripped>
	0x1185a0  @objc MedicalRecordChartSeries.distanceFromPoint:blockCoordinate:chartRect: <stripped>
	0x118610  @objc MedicalRecordChartSeries.xAxisDistanceFromPoint:blockCoordinate:chartRect: <stripped>
	0x118680  @objc MedicalRecordChartSeries.yAxisDifferenceToPoint:blockCoordinate:chartRect: <stripped>
	0x118750  @objc MedicalRecordChartSeries.init <stripped>
	0x1187e0  @objc MedicalRecordChartSeries..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordChartCoordinate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let pointValuesAscending : [CGPoint]
	let blockCoordinateInfo : HKGraphSeriesBlockCoordinateInfo

	// ObjC -> Swift bridged methods
	0x118b80  @objc MedicalRecordChartCoordinate.startXValue <stripped>
	0x118be0  @objc MedicalRecordChartCoordinate.endXValue <stripped>
	0x118c40  @objc MedicalRecordChartCoordinate.userInfo <stripped>
	0x118c80  @objc MedicalRecordChartCoordinate.copyWithTransform:roundToViewScale: <stripped>
	0x118d20  @objc MedicalRecordChartCoordinate.init <stripped>
	0x118db0  @objc MedicalRecordChartCoordinate..cxx_destruct <stripped>

	// Swift methods
	0x117ae0  class func MedicalRecordChartCoordinate.__allocating_init(sortedPointValues:blockCoordinateInfo:) // init 
	0x118a80  func MedicalRecordChartCoordinate.xValue.getter // getter 
	0x118ab0  func MedicalRecordChartCoordinate.minPoint.getter // getter 
	0x118ae0  func MedicalRecordChartCoordinate.maxPoint.getter // getter 
	0x118b20  func MedicalRecordChartCoordinate.distance(from:) // method 
	0x118bb0  func MedicalRecordChartCoordinate.startXValue.getter // getter 
	0x118c10  func MedicalRecordChartCoordinate.endXValue.getter // getter 
	0x11be30  func MedicalRecordChartCoordinate.userInfo.getter // getter 
	0x118c70  func MedicalRecordChartCoordinate.copy(with:roundToViewScale:) // method 
 }

 class HealthRecordsUI.ContentStatusView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let subtitleLabel : UILabel // +0x10 (0x8)
	let spinnerView : UIActivityIndicatorView // +0x18 (0x8)
	var title : String? // +0x20 (0x10)
	var subtitle : String? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x11be40  @objc ContentStatusView.title <stripped>
	0x11be80  @objc ContentStatusView.setTitle: <stripped>
	0x11bf50  @objc ContentStatusView.subtitle <stripped>
	0x11c050  @objc ContentStatusView.setSubtitle: <stripped>
	0x11c4f0  @objc ContentStatusView.initWithTitle:subtitle: <stripped>
	0x11c5c0  @objc ContentStatusView.initWithCoder: <stripped>
	0x11c870  @objc ContentStatusView.initWithFrame: <stripped>
	0x11cb70  @objc ContentStatusView.startAnimating <stripped>
	0x11cbe0  @objc ContentStatusView.stopAnimating <stripped>
	0x11cdd0  @objc ContentStatusView.traitCollectionDidChange: <stripped>
	0x11d400  @objc ContentStatusView.layoutSubviews <stripped>
	0x11d5c0  @objc ContentStatusView..cxx_destruct <stripped>

	// Swift methods
	0x11be60  func ContentStatusView.title.getter // getter 
	0x11bea0  func ContentStatusView.title.setter // setter 
	0x11bed0  func ContentStatusView.title.modify // modifyCoroutine 
	0x11bfe0  func ContentStatusView.subtitle.getter // getter 
	0x11c0f0  func ContentStatusView.subtitle.setter // setter 
	0x11c120  func ContentStatusView.subtitle.modify // modifyCoroutine 
	0x11c220  class func ContentStatusView.__allocating_init(title:subtitle:) // init 
	0x11c8a0  func <stripped> // method 
	0x11cb50  func ContentStatusView.startAnimating() // method 
	0x11cb90  func ContentStatusView.stopAnimating() // method 
	0x11d430  func <stripped> // method 
 }

 class HealthRecordsUI.MedicationRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x11f340  @objc MedicationRecordFormatter.init <stripped>
	0x11f3c0  @objc MedicationRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x11d930  func MedicationRecordFormatter.structuredItems(from:) // method 
	0x11ddf0  class func MedicationRecordFormatter.__allocating_init(store:context:) // init 
	0x11def0  func MedicationRecordFormatter.displayItems(from:) // method 
	0x11df50  func <stripped> // method 
	0x11e4b0  func <stripped> // method 
	0x11ea60  func <stripped> // method 
	0x11eeb0  func <stripped> // method 
 }

 class HealthRecordsUI.ClinicalOnboardingManager : WDClinicalOnboardingManager {
	// ObjC -> Swift bridged methods
	0x11fde0  @objc ClinicalOnboardingManager.initWithProfile: <stripped>
 }

 class HealthRecordsUI.ConceptTitleTableHeaderView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let fontChoices : [UIFont] // +0x10 (0x8)
	var widthCache : CGFloat // +0x18 (0x8)
	var titleCache : NSString // +0x20 (0x8)
	var bottomExtraSpace : CGFloat // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x11fe90  @objc ConceptTitleTableHeaderView.bottomExtraSpace <stripped>
	0x11ff00  @objc ConceptTitleTableHeaderView.setBottomExtraSpace: <stripped>
	0x11ffe0  @objc ConceptTitleTableHeaderView.title <stripped>
	0x120130  @objc ConceptTitleTableHeaderView.setTitle: <stripped>
	0x120880  @objc ConceptTitleTableHeaderView.initWithFrame: <stripped>
	0x1208b0  @objc ConceptTitleTableHeaderView.initWithCoder: <stripped>
	0x120cf0  @objc ConceptTitleTableHeaderView.layoutSubviews <stripped>
	0x120d30  @objc ConceptTitleTableHeaderView.sizeThatFits: <stripped>
	0x121510  @objc ConceptTitleTableHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x11fed0  func ConceptTitleTableHeaderView.bottomExtraSpace.getter // getter 
	0x11ff50  func ConceptTitleTableHeaderView.bottomExtraSpace.setter // setter 
	0x11ff90  func ConceptTitleTableHeaderView.bottomExtraSpace.modify // modifyCoroutine 
	0x120200  func ConceptTitleTableHeaderView.title.setter // setter 
	0x120290  func ConceptTitleTableHeaderView.title.modify // modifyCoroutine 
	0x1200a0  func ConceptTitleTableHeaderView.title.getter // getter 
	0x1208d0  func <stripped> // method 
	0x120d80  func <stripped> // method 
 }

 class HealthRecordsUI.WeakNotificationObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let scheduler : TaskScheduler // +0x8 (0x28)
	let block : (_:) // +0x30 (0x10)
	var center : weak NSNotificationCenter? // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x121db0  @objc WeakNotificationObserver.dealloc <stripped>
	0x121ee0  @objc WeakNotificationObserver.didReceiveWithNotification: <stripped>
	0x122090  @objc WeakNotificationObserver.init <stripped>
	0x121e50  @objc WeakNotificationObserver..cxx_destruct <stripped>

	// Swift methods
	0x121ad0  class func WeakNotificationObserver.__allocating_init(forName:object:scheduler:center:block:) // init 
	0x121e90  func WeakNotificationObserver.invalidate() // method 
 }

 class HealthRecordsUI.MedicalRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x124930  @objc MedicalRecordFormatter.structuredItemsFromRecord: <stripped>
	0x1256b0  @objc MedicalRecordFormatter.initWithConceptStore:context: <stripped>
	0x125e50  @objc MedicalRecordFormatter.displayItemsFromRecord: <stripped>
	0x125f40  @objc MedicalRecordFormatter.init <stripped>
	0x125fc0  @objc MedicalRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x1244c0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x1249f0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124ab0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124b70  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124c30  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124cf0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124df0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124ee0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124fd0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x1250b0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x1251b0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x1252b0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x1253b0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x1254a0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x1255d0  class func MedicalRecordFormatter.__allocating_init(store:context:) // init 
	0x125720  func MedicalRecordFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.ViewControllerFactory : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let profile : HRProfile // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x126d40  @objc ViewControllerFactory.profile <stripped>
	0x1270c0  @objc ViewControllerFactory.makeSettingsViewController <stripped>
	0x1275a0  @objc ViewControllerFactory.makeViewControllerForConcept:highlightedRecordId: <stripped>
	0x127aa0  @objc ViewControllerFactory.makeViewControllerForRecord: <stripped>
	0x127b00  @objc ViewControllerFactory.makeDetailViewControllerForRecord: <stripped>
	0x127ba0  @objc ViewControllerFactory.init <stripped>
	0x127c20  @objc ViewControllerFactory..cxx_destruct <stripped>

	// Swift methods
	0x126d60  func ViewControllerFactory.makeViewController(forAccount:) // method 
	0x126e50  func ViewControllerFactory.makeAndPresentAddAccountViewController(from:animated:completion:) // method 
	0x126e60  func ViewControllerFactory.makeDetailViewController(forAccount:) // method 
	0x126f70  func ViewControllerFactory.makeDetailViewController(for:) // method 
	0x126fb0  func ViewControllerFactory.makeLearnMoreViewController() // method 
	0x127020  func ViewControllerFactory.makeSettingsViewController() // method 
	0x127190  func ViewControllerFactory.makeViewController(for:) // method 
	0x127470  func ViewControllerFactory.makeViewController(for:highlightedRecord:) // method 
	0x127670  func ViewControllerFactory.makeViewController(forConcept:highlightedRecord:) // method 
	0x127860  func ViewControllerFactory.makeViewController(for:) // method 
	0x127ac0  func ViewControllerFactory.makeDetailViewController(for:) // method 
 }

 class HealthRecordsUI.MedicalRecordAnnotationViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dateGroup : UIStackView // +0x8 (0x8)
	let monthYearLabel : UILabel // +0x10 (0x8)
	let timeLabel : UILabel // +0x18 (0x8)
	let dividerLabel : UILabel // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x129590  @objc MedicalRecordAnnotationViewDataSource.init <stripped>
	0x1295b0  @objc MedicalRecordAnnotationViewDataSource.numberOfValuesForAnnotationView: <stripped>
	0x1295f0  @objc MedicalRecordAnnotationViewDataSource.valueViewForColumnAtIndex:orientation: <stripped>
	0x129620  @objc MedicalRecordAnnotationViewDataSource.showSeparators <stripped>
	0x129630  @objc MedicalRecordAnnotationViewDataSource.dateViewWithOrientation: <stripped>
	0x129690  @objc MedicalRecordAnnotationViewDataSource.leftMarginViewWithOrientation: <stripped>
	0x1296f0  @objc MedicalRecordAnnotationViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0x128750  func MedicalRecordAnnotationViewDataSource.numberOfValues(for:) // method 
	0x1295c0  func MedicalRecordAnnotationViewDataSource.valueViewForColumn(at:orientation:) // method 
	0x128760  func MedicalRecordAnnotationViewDataSource.showSeparators() // method 
	0x128770  func MedicalRecordAnnotationViewDataSource.dateView(with:) // method 
	0x1287a0  func MedicalRecordAnnotationViewDataSource.leftMarginView(with:) // method 
	0x1287b0  func MedicalRecordAnnotationViewDataSource.updateDateGroup(using:) // method 
	0x128ab0  func MedicalRecordAnnotationViewDataSource.updateDateGroup(using:timeScope:) // method 
	0x128e10  func MedicalRecordAnnotationViewDataSource.applyOrientation(_:to:) // method 
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
	0x131e70  @objc BloodPressureDataTransformer.chartPointFor:in:with:dataSourceType: <stripped>
	0x131f80  @objc BloodPressureDataTransformer.graphSeriesWith: <stripped>
	0x132060  @objc BloodPressureDataTransformer.chartDisplayTypeWith:displayName:unitName: <stripped>

	// Swift methods
	0x131080  func BloodPressureDataTransformer.createUserInfo(date:timeScope:systole:diastole:) // method 
	0x131720  func BloodPressureDataTransformer.chartPoint(for:in:with:dataSourceType:) // method 
	0x131ef0  func BloodPressureDataTransformer.graphSeries(with:) // method 
	0x132050  func BloodPressureDataTransformer.chartDisplayType(with:displayName:unitName:) // method 
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
	0x1345e0  @objc IconTextListView.initWithCoder: <stripped>
	0x135050  @objc IconTextListView.layoutSubviews <stripped>
	0x135090  @objc IconTextListView.sizeThatFits: <stripped>
	0x1353d0  @objc IconTextListView.traitCollectionDidChange: <stripped>
	0x1354d0  @objc IconTextListView.initWithFrame: <stripped>
	0x135550  @objc IconTextListView..cxx_destruct <stripped>

	// Swift methods
	0x134280  class func IconTextListView.__allocating_init(textStyle:iconSize:interItemSpacingHorizontal:interItemSpacingVertical:hidesIconsForAccessibilityTextSizes:) // init 
	0x134660  func IconTextListView.addItem(icon:text:textColor:) // method 
	0x134670  func IconTextListView.removeAll() // method 
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
	0x137350  @objc StandardTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x1373e0  @objc StandardTableViewCell.initWithCoder: <stripped>

	// Swift methods
	0x137260  class func static StandardTableViewCell.reuseIdentifier.getter // getter 
 }

 class HealthRecordsUI.NoAppTableViewCell : HRStandardTableViewCell {
	// ObjC -> Swift bridged methods
	0x137480  @objc NoAppTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x137560  @objc NoAppTableViewCell.initWithCoder: <stripped>
 }

 class HealthRecordsUI.SourceTableViewCell : HRStandardTableViewCell {

	// Properties
	var sourceModel : HKSourceDataModel?

	// ObjC -> Swift bridged methods
	0x137fc0  @objc SourceTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x138150  @objc SourceTableViewCell.initWithCoder: <stripped>
	0x1382b0  @objc SourceTableViewCell..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordUnitCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var units : [HKUnit : NSCountedSet] // +0x10 (0x8)

	// Swift methods
	0x138c30  func MedicalRecordUnitCollector.add(units:) // method 
	0x139450  func MedicalRecordUnitCollector.preferredUnit() // method 
 }

 class HealthRecordsUI.BloodPressureFormatter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit? // +0x10 (0x8)

	// Swift methods
	0x13d840  func BloodPressureFormatter.rawUnitString.getter // getter 
	0x13d920  func BloodPressureFormatter.niceUnitString.getter // getter 
	0x13da90  func BloodPressureFormatter.valueString(for:diastolicRange:) // method 
 }

 class HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var lastCachedNumberOfChartPoints : Int? // +0x8 (0x9)

	// ObjC -> Swift bridged methods
	0x13e2f0  @objc SingleValueCurrentValueViewDataSource.attributedTitleStringForCurrentValueView: <stripped>
	0x13eab0  @objc SingleValueCurrentValueViewDataSource.updateDataSourceWithGraphView:displayType:timeScope: <stripped>
	0x13ec60  @objc SingleValueCurrentValueViewDataSource.initWithDateCache:displayCategoryController:healthStore:selectedRangeFormatter: <stripped>
	0x13edd0  @objc SingleValueCurrentValueViewDataSource.init <stripped>

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
	0x1447b0  @objc HealthRecordsMigrator.migrateIfNeededWithCompletion: <stripped>
	0x145130  @objc HealthRecordsMigrator.init <stripped>
	0x1451b0  @objc HealthRecordsMigrator..cxx_destruct <stripped>

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
	0x145850  func ConceptListViewDataSourceProvider.store.getter // getter 
	0x145890  func ConceptListViewDataSourceProvider.store.setter // setter 
	0x1458e0  func ConceptListViewDataSourceProvider.store.modify // modifyCoroutine 
	0x1456b0  class func ConceptListViewDataSourceProvider.__allocating_init(categoryPredicate:store:) // init 
	0x1459d0  func ConceptListViewDataSourceProvider.selectedDataSources(for:) // method 
	0x145a90  func <stripped> // method 
	0x1461d0  func ConceptListViewDataSourceProvider.makePromotionDataSource() // method 
 }

 class HealthRecordsUI.MedicationDispenseFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x147cd0  @objc MedicationDispenseFormatter.init <stripped>
	0x147d50  @objc MedicationDispenseFormatter..cxx_destruct <stripped>

	// Swift methods
	0x147230  func MedicationDispenseFormatter.structuredItems(from:) // method 
	0x147170  class func MedicationDispenseFormatter.__allocating_init(store:context:) // init 
	0x147760  func MedicationDispenseFormatter.displayItems(from:) // method 
	0x1477c0  func <stripped> // method 
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
	0x14e930  @objc ConceptHeaderCell.headerImage <stripped>
	0x14e970  @objc ConceptHeaderCell.setHeaderImage: <stripped>
	0x14ea50  @objc ConceptHeaderCell.title <stripped>
	0x14eb10  @objc ConceptHeaderCell.setTitle: <stripped>
	0x14ec60  @objc ConceptHeaderCell.categoryColor <stripped>
	0x14ed20  @objc ConceptHeaderCell.setCategoryColor: <stripped>
	0x14f190  @objc ConceptHeaderCell.setupSubviews <stripped>
	0x14f610  @objc ConceptHeaderCell.setUpConstraints <stripped>
	0x14f640  @objc ConceptHeaderCell.intendedPlacement <stripped>
	0x14f6e0  @objc ConceptHeaderCell.setIntendedPlacement: <stripped>
	0x14f8b0  @objc ConceptHeaderCell._updateForCurrentSizeCategory <stripped>
	0x14fac0  @objc ConceptHeaderCell.traitCollectionDidChange: <stripped>
	0x14ff40  @objc ConceptHeaderCell.initWithStyle:reuseIdentifier: <stripped>
	0x150010  @objc ConceptHeaderCell.initWithCoder: <stripped>
	0x1500a0  @objc ConceptHeaderCell..cxx_destruct <stripped>

	// Swift methods
	0x14e800  func <stripped> // getter 
	0x14e950  func ConceptHeaderCell.headerImage.getter // getter 
	0x14e990  func ConceptHeaderCell.headerImage.setter // setter 
	0x14e9d0  func ConceptHeaderCell.headerImage.modify // modifyCoroutine 
	0x14eac0  func ConceptHeaderCell.title.getter // getter 
	0x14eb70  func ConceptHeaderCell.title.setter // setter 
	0x14eba0  func ConceptHeaderCell.title.modify // modifyCoroutine 
	0x14ecc0  func ConceptHeaderCell.categoryColor.getter // getter 
	0x14edb0  func ConceptHeaderCell.categoryColor.setter // setter 
	0x14edf0  func ConceptHeaderCell.categoryColor.modify // modifyCoroutine 
	0x14fb10  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartSeries : HKBloodPressureSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
	0x150910  @objc BloodPressureChartSeries.selectedPathRange <stripped>
	0x150ba0  @objc BloodPressureChartSeries.init <stripped>
 }

 class HealthRecordsUI.ProfileOnboardingActionViewController {
 class HealthRecordsUI.OnboardingTableViewCell : type metadata for ChromeHostViewTableCell /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {
	// ObjC -> Swift bridged methods
	0x1514a0  @objc OnboardingTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x151500  @objc OnboardingTableViewCell.initWithCoder: <stripped>

	// Swift methods
 }

 class HealthRecordsUI.RecordKindDataProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RecordKindDataProviderProtocol {

	// Properties
	let healthStore : HKHealthStore // +0x10 (0x8)
	let queue : OS_dispatch_queue // +0x18 (0x8)

	// Swift methods
	0x151ef0  class func RecordKindDataProvider.__allocating_init(healthStore:) // init 
	0x1521a0  func RecordKindDataProvider.fetchRecordKinds(completion:) // method 
	0x152a70  func RecordKindDataProvider.fetchRecordKinds(in:completion:) // method 
	0x153b40  func RecordKindDataProvider.addObserver(following:handler:) // method 
 }

 class HealthRecordsUI.CategoryViewControllerManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var activeCategoryViewController : weak UIViewController? // +0x10 (0x8)

	// Swift methods
	0x156890  func CategoryViewControllerManager.isCategoryViewControllerOnTop() // method 
	0x157030  func CategoryViewControllerManager.hasActiveCategoryViewController() // method 
 }

 class HealthRecordsUI.Features : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x157250  @objc Features.init <stripped>
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
	0x158880  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
	0x158930  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
	0x158940  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
 }

 struct HealthRecordsUI.RecordKindFeedItemIdentifierFactory { }

 class HealthRecordsUI.RecordPrimaryTitleCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let recordTitleLabel : UILabel
	let recordDateLabel : UILabel

	// ObjC -> Swift bridged methods
	0x15a170  @objc RecordPrimaryTitleCell.recordTitleLabel <stripped>
	0x15a1b0  @objc RecordPrimaryTitleCell.recordDateLabel <stripped>
	0x15a230  @objc RecordPrimaryTitleCell.initWithStyle:reuseIdentifier: <stripped>
	0x15a250  @objc RecordPrimaryTitleCell.initWithCoder: <stripped>
	0x15a9f0  @objc RecordPrimaryTitleCell..cxx_destruct <stripped>

	// Swift methods
	0x15a290  func <stripped> // method 
 }

 class HealthRecordsUI.RecordDetailItemCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let bodyLabel : UILabel

	// ObjC -> Swift bridged methods
	0x15aaa0  @objc RecordDetailItemCell.titleLabel <stripped>
	0x15aae0  @objc RecordDetailItemCell.bodyLabel <stripped>
	0x15ab60  @objc RecordDetailItemCell.initWithStyle:reuseIdentifier: <stripped>
	0x15abe0  @objc RecordDetailItemCell.initWithCoder: <stripped>
	0x15b380  @objc RecordDetailItemCell..cxx_destruct <stripped>

	// Swift methods
	0x15ac20  func <stripped> // method 
 }

 class HealthRecordsUI.RecordReferenceRangeCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let referenceRangeView : HKReferenceRangeView // +0x8 (0x8)
	var valueInRange : HKInspectableValueInRange? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x15b430  @objc RecordReferenceRangeCell.valueInRange <stripped>
	0x15b4c0  @objc RecordReferenceRangeCell.setValueInRange: <stripped>
	0x15b630  @objc RecordReferenceRangeCell.initWithStyle:reuseIdentifier: <stripped>
	0x15b650  @objc RecordReferenceRangeCell.initWithCoder: <stripped>
	0x15b6f0  @objc RecordReferenceRangeCell..cxx_destruct <stripped>

	// Swift methods
	0x15b480  func RecordReferenceRangeCell.valueInRange.getter // getter 
	0x15b510  func RecordReferenceRangeCell.valueInRange.setter // setter 
	0x15b530  func RecordReferenceRangeCell.valueInRange.modify // modifyCoroutine 
 }

 class HealthRecordsUI.RecordDataSourceCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let brandView : WDMedicalRecordBrandView

	// ObjC -> Swift bridged methods
	0x15b850  @objc RecordDataSourceCell.initWithStyle:reuseIdentifier: <stripped>
	0x15b870  @objc RecordDataSourceCell.initWithCoder: <stripped>
	0x15bab0  @objc RecordDataSourceCell.configCellWith:owner:dataProvider: <stripped>
	0x15bba0  @objc RecordDataSourceCell..cxx_destruct <stripped>

	// Swift methods
	0x15b950  func RecordDataSourceCell.configCell(with:owner:dataProvider:) // method 
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
	0x160fd0  @objc ProcedureRecordFormatter.init <stripped>
	0x1610b0  @objc ProcedureRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x15ebb0  class func ProcedureRecordFormatter.__allocating_init(store:context:) // init 
	0x15ed00  func ProcedureRecordFormatter.displayItems(from:) // method 
	0x15ed60  func <stripped> // method 
	0x15f220  func <stripped> // method 
	0x160040  func <stripped> // method 
	0x160080  func <stripped> // method 
	0x1604e0  func <stripped> // method 
	0x160810  func <stripped> // method 
	0x160b40  func <stripped> // method 
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
