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
	0x64040  @objc SingleValueAnnotationViewDataSource.init <stripped>
	0x64150  @objc SingleValueAnnotationViewDataSource.valueViewForColumnAtIndex:orientation: <stripped>
	0x641f0  @objc SingleValueAnnotationViewDataSource.updateUsing: <stripped>
	0x64e90  @objc SingleValueAnnotationViewDataSource.updateUsing:valueRange:dateRange:timeScope: <stripped>
	0x65610  @objc SingleValueAnnotationViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0x64180  func SingleValueAnnotationViewDataSource.update(using:) // method 
	0x64260  func SingleValueAnnotationViewDataSource.updateReferenceRange(using:) // method 
	0x64b70  func SingleValueAnnotationViewDataSource.update(using:valueRange:dateRange:timeScope:) // method 
	0x64fb0  func SingleValueAnnotationViewDataSource.updateValue(using:) // method 
 }

 class HealthRecordsUI.SingleValueChartData : HKInteractiveChartSinglePointData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let chartableQuantitySet : HKChartableCodedQuantitySet // +0x8 (0x8)
	let date : Date // +0xfeedfacf (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x3 (0x8)
	let hasTime : Bool // +0x4c (0x1)
	let partOfOutOfRangeSeries : Bool // +0x6100085 (0x1)

	// ObjC -> Swift bridged methods
	0x665e0  @objc SingleValueChartData.init <stripped>
	0x66650  @objc SingleValueChartData..cxx_destruct <stripped>

	// Swift methods
	0x664e0  class func SingleValueChartData.__allocating_init(chartableQuantitySet:date:dateFormat:hasTime:partOfOutOfRangeSeries:) // init 
 }

 class HealthRecordsUI.LoadingTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containerView : UIView // +0x8 (0x8)
	let spinner : UIActivityIndicatorView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x66f20  @objc LoadingTableViewCell.init <stripped>
	0x67030  @objc LoadingTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x67100  @objc LoadingTableViewCell.initWithCoder: <stripped>
	0x67890  @objc LoadingTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0x66e70  class func static LoadingTableViewCell.reuseIdentifier.getter // getter 
	0x67140  func LoadingTableViewCell.willDisplay() // method 
	0x67160  func LoadingTableViewCell.didEndDisplaying() // method 
	0x67180  func <stripped> // method 
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
	0x6d900  @objc TapToRadarManager.init <stripped>
 }

 struct HealthRecordsUI.SyncTaskScheduler: TaskScheduler { }

 class HealthRecordsUI.DiagnosticTestResultFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x6f220  @objc DiagnosticTestResultFormatter.init <stripped>
	0x6f300  @objc DiagnosticTestResultFormatter..cxx_destruct <stripped>

	// Swift methods
	0x6e670  class func DiagnosticTestResultFormatter.__allocating_init(store:context:) // init 
	0x6e780  func DiagnosticTestResultFormatter.displayItems(from:) // method 
	0x6e7d0  func <stripped> // method 
	0x6ed30  func <stripped> // method 
	0x6ed70  func <stripped> // method 
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
	0x71d60  @objc ClinicalSourcesDataProvider.initWithHealthRecordsStore: <stripped>
	0x71e10  @objc ClinicalSourcesDataProvider..cxx_destruct <stripped>
 }

 class HealthRecordsUI.HealthRecordsSupportedChangeListener : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let handler : (_:) // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x71f70  @objc HealthRecordsSupportedChangeListener.init <stripped>
	0x71ff0  @objc HealthRecordsSupportedChangeListener..cxx_destruct <stripped>

	// Swift methods
	0x71e20  class func HealthRecordsSupportedChangeListener.__allocating_init(_:) // init 
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
	0x72010  class func HealthRecordsSupportedManager.__allocating_init(_:) // init 
	0x720d0  func HealthRecordsSupportedManager.isHealthRecordsSupported() // method 
	0x72140  func HealthRecordsSupportedManager.observe(_:) // method 
	0x72560  func HealthRecordsSupportedManager.addListener(_:) // method 
	0x72a20  func HealthRecordsSupportedManager.removeListener(_:) // method 
	0x73220  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x763f0  @objc InternalStateCell.initWithStyle:reuseIdentifier: <stripped>
	0x764a0  @objc InternalStateCell.initWithCoder: <stripped>
	0x76540  @objc InternalStateCell..cxx_destruct <stripped>
 }

 class HealthRecordsUI.InternalStateViewController : UITableViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let supportedCategories : [DisplayCategory]
	var currentIngestionState : HKHealthRecordsStoreIngestionState
	var currentIndexingState : HKConceptIndexManagerState

	// ObjC -> Swift bridged methods
	0x76640  @objc InternalStateViewController.init <stripped>
	0x76770  @objc InternalStateViewController.dealloc <stripped>
	0x767b0  @objc InternalStateViewController.initWithCoder: <stripped>
	0x76b30  @objc InternalStateViewController.viewDidLoad <stripped>
	0x76b60  @objc InternalStateViewController.numberOfSectionsInTableView: <stripped>
	0x76b70  @objc InternalStateViewController.tableView:numberOfRowsInSection: <stripped>
	0x76b90  @objc InternalStateViewController.tableView:cellForRowAtIndexPath: <stripped>
	0x76c50  @objc InternalStateViewController.tableView:shouldHighlightRowAtIndexPath: <stripped>
	0x76d00  @objc InternalStateViewController.tableView:titleForHeaderInSection: <stripped>
	0x77d10  @objc InternalStateViewController.healthRecordsStore:ingestionStateDidUpdateTo: <stripped>
	0x77da0  @objc InternalStateViewController.conceptStore:indexManagerDidChangeState: <stripped>
	0x77e30  @objc InternalStateViewController.medicalRecordCountProvider:didUpdateCountForSampleTypes: <stripped>
	0x77e40  @objc InternalStateViewController.medicalRecordCountProviderDidUpdateAllRecordsCount: <stripped>
	0x77e50  @objc InternalStateViewController.medicalRecordCountProvider:didUpdateCountForCategories: <stripped>
	0x77ec0  @objc InternalStateViewController.initWithStyle: <stripped>
	0x77ef0  @objc InternalStateViewController.initWithNibName:bundle: <stripped>
	0x76790  @objc InternalStateViewController..cxx_destruct <stripped>

	// Swift methods
	0x76d50  func <stripped> // method 
	0x76f30  func <stripped> // method 
	0x771a0  func <stripped> // method 
	0x773e0  func <stripped> // method 
	0x77800  func <stripped> // method 
	0x77aa0  func <stripped> // method 
 }

 class HealthRecordsUI.FeedItemListViewController : type metadata for DataTypeDetailViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]

	// ObjC -> Swift bridged methods
	0x7a830  @objc FeedItemListViewController.initWithCoder: <stripped>
	0x7aca0  @objc FeedItemListViewController.viewDidLoad <stripped>
	0x7aff0  @objc FeedItemListViewController.viewWillAppear: <stripped>
	0x7b040  @objc FeedItemListViewController.initWithCollectionViewLayout: <stripped>
	0x7b070  @objc FeedItemListViewController.initWithNibName:bundle: <stripped>
	0x7b120  @objc FeedItemListViewController..cxx_destruct <stripped>

	// Swift methods
	0x7a710  func <stripped> // method 
	0x7a820  func <stripped> // getter 
 }

 class HealthRecordsUI.FeedItemListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]
	let store : HealthExperienceStore

	// Swift methods
	0x7b1e0  func <stripped> // method 
 }

 class HealthRecordsUI.SingleValueDataTransformer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
	0x7d350  @objc SingleValueDataTransformer.chartPointFor:in:with:dataSourceType: <stripped>
	0x7d4b0  @objc SingleValueDataTransformer.graphSeriesWith: <stripped>
	0x7d510  @objc SingleValueDataTransformer.chartDisplayTypeWith:displayName:unitName: <stripped>

	// Swift methods
	0x7d1e0  func SingleValueDataTransformer.chartPoint(for:in:with:dataSourceType:) // method 
	0x7d4a0  func SingleValueDataTransformer.graphSeries(with:) // method 
	0x7d500  func SingleValueDataTransformer.chartDisplayType(with:displayName:unitName:) // method 
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
	0x864c0  @objc ConditionRecordFormatter.init <stripped>
	0x865a0  @objc ConditionRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x85460  class func ConditionRecordFormatter.__allocating_init(store:context:) // init 
	0x85570  func ConditionRecordFormatter.displayItems(from:) // method 
	0x855d0  func <stripped> // method 
	0x85a70  func <stripped> // method 
	0x85f90  func <stripped> // method 
	0x85fd0  func <stripped> // method 
	0x86010  func <stripped> // method 
 }

 class HealthRecordsUI.TimelineHeaderView : UITableViewHeaderFooterView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_titleLabel : UILabel? // +0x8 (0x8)
	var $__lazy_storage_$_subtitleLabel : UILabel? // +0x10 (0x8)
	var $__lazy_storage_$_backgroundEffectView : UIVisualEffectView? // +0x18 (0x8)
	var $__lazy_storage_$_separatorView : UIView? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x876e0  @objc TimelineHeaderView.initWithReuseIdentifier: <stripped>
	0x877a0  @objc TimelineHeaderView.initWithCoder: <stripped>
	0x87b30  @objc TimelineHeaderView.applyTitle:subtitle: <stripped>
	0x87d60  @objc TimelineHeaderView.applyStyleFromNavigationBar: <stripped>
	0x87d80  @objc TimelineHeaderView.floating <stripped>
	0x87e30  @objc TimelineHeaderView.setFloating: <stripped>
	0x88920  @objc TimelineHeaderView.layoutSubviews <stripped>
	0x88960  @objc TimelineHeaderView.sizeThatFits: <stripped>
	0x88ca0  @objc TimelineHeaderView.traitCollectionDidChange: <stripped>
	0x88d70  @objc TimelineHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x874b0  class func static TimelineHeaderView.reuseIdentifier.getter // getter 
	0x874e0  func <stripped> // getter 
	0x87500  func <stripped> // getter 
	0x877e0  func <stripped> // method 
	0x87b20  func TimelineHeaderView.apply(title:subtitle:) // method 
	0x87be0  func TimelineHeaderView.applyStyle(from:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartabilityResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let configuration : MedicalRecordChartConfiguration // +0x8 (0x8)
	let masterDataSource : MedicalRecordChartDataSource // +0x10 (0x8)
	let seriesDataSources : [MedicalRecordChartDataSource] // +0x18 (0x8)
	let outOfRangeDataSource : MedicalRecordChartDataSource? // +0x20 (0x8)
	let noRangeDataSource : MedicalRecordChartDataSource? // +0x28 (0x8)
	let latestChartableDate : Date? // +0x19e000 (0x0)

	// ObjC -> Swift bridged methods
	0x89180  @objc MedicalRecordChartabilityResult.configuration <stripped>
	0x891d0  @objc MedicalRecordChartabilityResult.masterDataSource <stripped>
	0x89210  @objc MedicalRecordChartabilityResult.seriesDataSources <stripped>
	0x89280  @objc MedicalRecordChartabilityResult.outOfRangeDataSource <stripped>
	0x892e0  @objc MedicalRecordChartabilityResult.noRangeDataSource <stripped>
	0x89340  @objc MedicalRecordChartabilityResult.latestChartableDate <stripped>
	0x893f0  @objc MedicalRecordChartabilityResult.shouldProduceAtLeastOneOverlay <stripped>
	0x89700  @objc MedicalRecordChartabilityResult.init <stripped>
	0x89770  @objc MedicalRecordChartabilityResult..cxx_destruct <stripped>

	// Swift methods
	0x89470  func MedicalRecordChartabilityResult.shouldProduceAtLeastOneOverlay.getter // getter 
	0x89540  class func MedicalRecordChartabilityResult.__allocating_init(configuration:masterDataSource:seriesDataSources:outOfRangeDataSource:noRangeDataSource:latestChartableDate:) // init 
 }

 class HealthRecordsUI.MedicalRecordChartabilityDeterminer : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x8c030  @objc MedicalRecordChartabilityDeterminer.determineChartabilityForConcept:records:completion: <stripped>
	0x8c3b0  @objc MedicalRecordChartabilityDeterminer.init <stripped>

	// Swift methods
	0x897e0  func MedicalRecordChartabilityDeterminer.determineChartability(for:records:completion:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeriesCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let concept : HKConcept
	var preferredColors : HKUIMetricColors?
	var chartableQuantitySets : [HKChartableCodedQuantitySet]

	// Swift methods
	0x8c2e0  class func MedicalRecordChartableSeriesCollector.__allocating_init(concept:) // init 
	0x8c470  func MedicalRecordChartableSeriesCollector.collect(record:) // method 
	0x8c730  func MedicalRecordChartableSeriesCollector.allUnits.getter // getter 
	0x8cbd0  func MedicalRecordChartableSeriesCollector.chartDataSourceSeries(compatibleWith:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeries : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let concept : HKConcept
	let chartableQuantitySets : [HKChartableCodedQuantitySet]
	let preferredColors : HKUIMetricColors?

	// ObjC -> Swift bridged methods
	0x8e270  @objc MedicalRecordChartableSeries.init <stripped>
	0x8e300  @objc MedicalRecordChartableSeries..cxx_destruct <stripped>

	// Swift methods
	0x8d5d0  func <stripped> // getter 
	0x8d480  class func MedicalRecordChartableSeries.__allocating_init(concept:chartableQuantities:unit:preferredColors:) // init 
	0x8d860  func MedicalRecordChartableSeries.createDataSource(with:unit:) // method 
	0x8d940  func MedicalRecordChartableSeries.outOfRangeQuantitySets() // method 
	0x8ddb0  func MedicalRecordChartableSeries.noRangeQuantitySets() // method 
 }

 struct HealthRecordsUI.UnboundedCache: Cache {

	// Properties
	let storageBox : Box<[A : B]>
	let lowMemoryWarnings : Any
	let didEnterBackground : Any
 }

 class HealthRecordsUI.SingleValueChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xa9d60  @objc SingleValueChartConfiguration.chartControllerClass <stripped>
	0xa9dd0  @objc SingleValueChartConfiguration.shouldShowOutOfRangeOverlay <stripped>
	0xa9e00  @objc SingleValueChartConfiguration.dataTransformer <stripped>
	0xa9ed0  @objc SingleValueChartConfiguration.init <stripped>

	// Swift methods
	0xa9da0  func SingleValueChartConfiguration.chartControllerClass.getter // getter 
	0xa9df0  func SingleValueChartConfiguration.shouldShowOutOfRangeOverlay.getter // getter 
	0xa9e30  func SingleValueChartConfiguration.dataTransformer.getter // getter 
 }

 class HealthRecordsUI.SettingsViewController : HKTableViewController /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var accounts : [HKClinicalAccount] // +0x8 (0x8)
	var appSourceModels : [HKSourceDataModel] // +0x10 (0x8)
	var sourceLoadingToken : WDCancellationToken? // +0x18 (0x8)
	var accountLoadingToken : WDCancellationToken? // +0x20 (0x8)
	let factory : ViewControllerFactory // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x1221a0  @objc SettingsViewController.numberOfSectionsInTableView: <stripped>
	0x1221c0  @objc SettingsViewController.tableView:numberOfRowsInSection: <stripped>
	0x122320  @objc SettingsViewController.tableView:titleForHeaderInSection: <stripped>
	0x1223c0  @objc SettingsViewController.tableView:titleForFooterInSection: <stripped>
	0x122f90  @objc SettingsViewController.tableView:cellForRowAtIndexPath: <stripped>
	0x123130  @objc SettingsViewController.tableView:willDisplayCell:forRowAtIndexPath: <stripped>
	0x123350  @objc SettingsViewController.tableView:didEndDisplayingCell:forRowAtIndexPath: <stripped>
	0x100990  @objc SettingsViewController.closeButtonTapped <stripped>
	0x100800  @objc SettingsViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0x1008d0  @objc SettingsViewController.tableView:shouldHighlightRowAtIndexPath: <stripped>
	0xaae30  @objc SettingsViewController.init <stripped>
	0xaaf40  @objc SettingsViewController.dealloc <stripped>
	0xabb80  @objc SettingsViewController.viewDidLoad <stripped>
	0xabee0  @objc SettingsViewController.viewDidAppear: <stripped>
	0xabf20  @objc SettingsViewController.tapToRadar: <stripped>
	0xacec0  @objc SettingsViewController.healthRecordsStore:accountDidChange:changeType: <stripped>
	0xad280  @objc SettingsViewController.initWithUsingInsetStyling: <stripped>
	0xad3c0  @objc SettingsViewController.initWithStyle: <stripped>
	0xad5b0  @objc SettingsViewController.initWithNibName:bundle: <stripped>
	0xad670  @objc SettingsViewController.initWithCoder: <stripped>
	0xaaff0  @objc SettingsViewController..cxx_destruct <stripped>

	// Swift methods
	0xabfb0  func SettingsViewController.accountStateDidChange(healthRecordsStore:account:changeType:) // method 
	0xacf40  func SettingsViewController.providedHealthExperienceStore.getter // getter 
	0xacfa0  func SettingsViewController.providedHealthStore.getter // getter 
	0xad010  func SettingsViewController.pushForAPIAuthorization(forSource:) // method 
 }

 class HealthRecordsUI.AccountErrorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let profile : HRProfile // +0x10 (0x8)
	let healthRecordsStore : HKHealthRecordsStore // +0x18 (0x8)

	// Swift methods
	0xb3300  func AccountErrorManager.presentRelogin(for:from:completion:) // method 
	0xb3b00  func AccountErrorManager.presentRelogin(for:from:completion:) // method 
 }

 class HealthRecordsUI.BloodPressureChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xb4d40  @objc BloodPressureChartConfiguration.chartControllerClass <stripped>
	0xb4db0  @objc BloodPressureChartConfiguration.shouldShowOutOfRangeOverlay <stripped>
	0xb4dd0  @objc BloodPressureChartConfiguration.dataTransformer <stripped>
	0xb4ec0  @objc BloodPressureChartConfiguration.init <stripped>

	// Swift methods
	0xb4d80  func BloodPressureChartConfiguration.chartControllerClass.getter // getter 
	0xb4dc0  func BloodPressureChartConfiguration.shouldShowOutOfRangeOverlay.getter // getter 
	0xb4e10  func BloodPressureChartConfiguration.dataTransformer.getter // getter 
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
	0xb5a20  @objc FilterSettingsViewController.initWithDelegate:selectedCategories:selectedAccounts: <stripped>
	0xb5a80  @objc FilterSettingsViewController.initWithCoder: <stripped>
	0xb6360  @objc FilterSettingsViewController.viewDidLoad <stripped>
	0xb63a0  @objc FilterSettingsViewController.numberOfSectionsInTableView: <stripped>
	0xb6520  @objc FilterSettingsViewController.tableView:viewForHeaderInSection: <stripped>
	0xb65a0  @objc FilterSettingsViewController.tableView:numberOfRowsInSection: <stripped>
	0xb7230  @objc FilterSettingsViewController.tableView:cellForRowAtIndexPath: <stripped>
	0xb73a0  @objc FilterSettingsViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0xb7470  @objc FilterSettingsViewController.tableView:heightForHeaderInSection: <stripped>
	0xb7490  @objc FilterSettingsViewController.tableView:heightForFooterInSection: <stripped>
	0xb7f00  @objc FilterSettingsViewController.doneButtonTapped <stripped>
	0xb7fa0  @objc FilterSettingsViewController.initWithUsingInsetStyling: <stripped>
	0xb8030  @objc FilterSettingsViewController.initWithStyle: <stripped>
	0xb8100  @objc FilterSettingsViewController.initWithNibName:bundle: <stripped>
	0xb8180  @objc FilterSettingsViewController..cxx_destruct <stripped>

	// Swift methods
	0xb51d0  class func FilterSettingsViewController.__allocating_init(withDelegate:selectedCategories:selectedAccounts:) // init 
	0xb74a0  func <stripped> // method 
	0xb76e0  func <stripped> // method 
	0xb7920  func <stripped> // method 
	0xb7950  func <stripped> // method 
	0xb7b70  func <stripped> // method 
	0xb7b90  func <stripped> // method 
	0xb7d10  func <stripped> // method 
 }

 class HealthRecordsUI.AddAccountTableViewCell : HRStandardTableViewCell {

	// Properties
	var alignWithAccountTitle : Bool // +0x8 (0x1)

	// ObjC -> Swift bridged methods
	0xbd170  @objc AddAccountTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xbd250  @objc AddAccountTableViewCell.initWithCoder: <stripped>
	0xbd550  @objc AddAccountTableViewCell.tintColorDidChange <stripped>

	// Swift methods
	0xbd2f0  func <stripped> // method 
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
	0xbf980  class func CategoryCountDataProvider.__allocating_init(healthStore:) // init 
	0xbfa10  func CategoryCountDataProvider.fetchCategoryCounts(categories:additionalPredicate:completion:) // method 
 }

 class HealthRecordsUI.AllergyRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_reactionFormatter : AllergyReactionFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xcb8b0  @objc AllergyRecordFormatter.init <stripped>
	0xcb930  @objc AllergyRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0xc9e50  func AllergyRecordFormatter.structuredItems(from:) // method 
	0xca000  class func AllergyRecordFormatter.__allocating_init(store:context:) // init 
	0xca100  func AllergyRecordFormatter.displayItems(from:) // method 
	0xca160  func <stripped> // method 
	0xca610  func <stripped> // method 
	0xcb410  func <stripped> // method 
 }

 struct HealthRecordsUI.CategorySummaryFeedItemIdentifierFactory { }

 class HealthRecordsUI.MedicationOrderFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xcdfe0  @objc MedicationOrderFormatter.init <stripped>
	0xce060  @objc MedicationOrderFormatter..cxx_destruct <stripped>

	// Swift methods
	0xccc60  func MedicationOrderFormatter.structuredItems(from:) // method 
	0xcd120  class func MedicationOrderFormatter.__allocating_init(store:context:) // init 
	0xcd220  func MedicationOrderFormatter.displayItems(from:) // method 
	0xcd280  func <stripped> // method 
	0xcd730  func <stripped> // method 
	0xcdaf0  func <stripped> // method 
	0xcdb30  func <stripped> // method 
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
	0xd5450  @objc MedicationDosageFormatter.init <stripped>
	0xd54d0  @objc MedicationDosageFormatter..cxx_destruct <stripped>

	// Swift methods
	0xd4c50  func MedicationDosageFormatter.structuredItems(from:) // method 
	0xd4fb0  func MedicationDosageFormatter.displayItems(from:) // method 
	0xd4ba0  class func MedicationDosageFormatter.__allocating_init(store:context:) // init 
	0xd5310  func MedicationDosageFormatter.displayItems(from:) // method 
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
	0xd6cf0  @objc RecordCategoryViewController.initWithCoder: <stripped>
	0xd6da0  @objc RecordCategoryViewController.dealloc <stripped>
	0xd71e0  @objc RecordCategoryViewController.viewDidLoad <stripped>
	0xd7320  @objc RecordCategoryViewController.viewWillLayoutSubviews <stripped>
	0xd74a0  @objc RecordCategoryViewController.modePickerDidChange: <stripped>
	0xd7520  @objc RecordCategoryViewController.tapToRadar: <stripped>
	0xd80e0  @objc RecordCategoryViewController.initWithNibName:bundle: <stripped>
	0xd6e20  @objc RecordCategoryViewController..cxx_destruct <stripped>

	// Swift methods
	0xd7350  func <stripped> // method 
	0xd75b0  func <stripped> // method 
	0xd76c0  func <stripped> // method 
	0xd77a0  func <stripped> // method 
	0xd7dc0  func <stripped> // method 
	0xd7f50  func <stripped> // getter 
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
	0xda550  @objc NoDataViewController.initWithCoder: <stripped>
	0xda680  @objc NoDataViewController.loadView <stripped>
	0xda6b0  @objc NoDataViewController.initWithNibName:bundle: <stripped>

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
	0xdb410  func CancellationToken.isCancelled.getter // getter 
	0xdb440  func CancellationToken.cancelBlock.getter // getter 
	0xdb480  func CancellationToken.cancelBlock.setter // setter 
	0xdb4c0  func CancellationToken.cancelBlock.modify // modifyCoroutine 
	0xdb2d0  class func CancellationToken.__allocating_init(cancelBlock:) // init 
	0xdb7d0  func CancellationToken.cancel() // method 
 }

 class HealthRecordsUI.PromotionListViewController : FeedItemListViewController {
	// Swift methods
 }

 class HealthRecordsUI.PromotionListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
	var store : HealthExperienceStore

	// Swift methods
	0xdbc70  func PromotionListViewDataSourceProvider.store.getter // getter 
	0xdbcb0  func PromotionListViewDataSourceProvider.store.setter // setter 
	0xdbd00  func PromotionListViewDataSourceProvider.store.modify // modifyCoroutine 
	0xdb920  class func PromotionListViewDataSourceProvider.__allocating_init(predicate:store:) // init 
	0xdbd80  func PromotionListViewDataSourceProvider.selectedDataSources(for:) // method 
	0xdbe10  func PromotionListViewDataSourceProvider.makePromotionDataSource() // method 
 }

 class HealthRecordsUI.AccountErrorTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let accountErrorView : AccountErrorFeedItemView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xdc680  @objc AccountErrorTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xdc6e0  @objc AccountErrorTableViewCell.initWithCoder: <stripped>
	0xdcc00  @objc AccountErrorTableViewCell.layoutSubviews <stripped>
	0xdcce0  @objc AccountErrorTableViewCell.sizeThatFits: <stripped>
	0xdcf20  @objc AccountErrorTableViewCell.traitCollectionDidChange: <stripped>
	0xdd070  @objc AccountErrorTableViewCell.layoutMarginsDidChange <stripped>
	0xdd230  @objc AccountErrorTableViewCell.prepareForReuse <stripped>
	0xdd320  @objc AccountErrorTableViewCell.setHighlighted:animated: <stripped>
	0xdd3c0  @objc AccountErrorTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0xdc5a0  class func static AccountErrorTableViewCell.reuseIdentifier.getter // getter 
	0xdc7b0  func <stripped> // method 
 }

 class HealthRecordsUI.SuggestedActionTileViewControllerShim {
 class HealthRecordsUI.OnboardingSuggestedActionViewController {
 class HealthRecordsUI.BloodPressureCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
	0xdece0  @objc BloodPressureCurrentValueViewDataSource.initWithDateCache:displayCategoryController:healthStore:selectedRangeFormatter: <stripped>
	0xdee30  @objc BloodPressureCurrentValueViewDataSource.init <stripped>
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
	var minimumAxisSpace : Double? // +0x50 (0x9)

	// ObjC -> Swift bridged methods
	0xe9e00  @objc MedicalRecordChartDataSource.displayName <stripped>
	0xea180  @objc MedicalRecordChartDataSource.initWithConcept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type: <stripped>
	0xea210  @objc MedicalRecordChartDataSource.cachedBlockForPath:context: <stripped>
	0xeaf90  @objc MedicalRecordChartDataSource.chartDisplayTypeWithVerticalAxis: <stripped>
	0xec3f0  @objc MedicalRecordChartDataSource.init <stripped>
	0xec470  @objc MedicalRecordChartDataSource..cxx_destruct <stripped>

	// Swift methods
	0xe9b40  func MedicalRecordChartDataSource.unit.getter // getter 
	0xe9bc0  func MedicalRecordChartDataSource.preferredColors.getter // getter 
	0xe9cc0  func MedicalRecordChartDataSource.chartableXRange.getter // getter 
	0xe9dc0  func MedicalRecordChartDataSource.minimumAxisSpace.getter // getter 
	0xe9ee0  func MedicalRecordChartDataSource.displayName.getter // getter 
	0xe95e0  class func MedicalRecordChartDataSource.__allocating_init(concept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type:) // init 
	0xea2c0  func MedicalRecordChartDataSource.chartPoints(in:with:) // method 
	0xea800  func MedicalRecordChartDataSource.numberOfDataPoints(in:) // method 
	0xeab00  func MedicalRecordChartDataSource.graphSeries(withMainColor:verticalAxis:) // method 
	0xead90  func MedicalRecordChartDataSource.chartDisplayType(verticalAxis:) // method 
	0xeaff0  func MedicalRecordChartDataSource.take(chartableCodedQuantitySets:) // method 
	0xeb630  func MedicalRecordChartDataSource.bucketQuantitySets(with:) // method 
 }

 class HealthRecordsUI.CategoryRecordQueryDescription : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SampleQueryDescription {

	// Properties
	let category : BrowseCategory // +0x45545f5f (0x0)
	let sampleQueryDescription : HKSampleQueryDescription // +0x0 (0x8)

	// Swift methods
	0xf1400  func CategoryRecordQueryDescription.sampleType.getter // getter 
	0xf1430  func CategoryRecordQueryDescription.predicate.getter // getter 
	0xf1470  func CategoryRecordQueryDescription.hash(into:) // method 
	0xf1540  func CategoryRecordQueryDescription.hashValue.getter // getter 
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
	0xf3fc0  @objc VaccinationRecordFormatter.init <stripped>
	0xf40a0  @objc VaccinationRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0xf2150  class func VaccinationRecordFormatter.__allocating_init(store:context:) // init 
	0xf2260  func VaccinationRecordFormatter.displayItems(from:) // method 
	0xf22c0  func <stripped> // method 
	0xf27b0  func <stripped> // method 
	0xf3660  func <stripped> // method 
	0xf3ab0  func <stripped> // method 
	0xf3af0  func <stripped> // method 
 }

 class HealthRecordsUI.NotificationPolicy : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xf50b0  @objc NotificationPolicy.userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler: <stripped>
	0xf5790  @objc NotificationPolicy.userNotificationCenter:willPresentNotification:withCompletionHandler: <stripped>
	0xf5920  @objc NotificationPolicy.init <stripped>

	// Swift methods
	0xf4ea0  func NotificationPolicy.userNotificationCenter(_:didReceive:withCompletionHandler:) // method 
	0xf5130  func NotificationPolicy.userNotificationCenter(_:willPresent:withCompletionHandler:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartPoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let chartableSet : HKChartableCodedQuantitySet // +0x8 (0x8)
	let blockCoordinateInfo : SingleValueChartData // +0x10 (0x8)
	let sortedYValues : [Double] // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xf6cb0  @objc MedicalRecordChartPoint.userInfo <stripped>
	0xf6da0  @objc MedicalRecordChartPoint.xValueAsGenericType <stripped>
	0xf6f70  @objc MedicalRecordChartPoint.maxXValueAsGenericType <stripped>
	0xf6f70  @objc MedicalRecordChartPoint.minXValueAsGenericType <stripped>
	0xf70c0  @objc MedicalRecordChartPoint.yValue <stripped>
	0xf71c0  @objc MedicalRecordChartPoint.yValueForKey: <stripped>
	0xf73e0  @objc MedicalRecordChartPoint.allYValues <stripped>
	0xf70c0  @objc MedicalRecordChartPoint.minYValue <stripped>
	0xf74b0  @objc MedicalRecordChartPoint.maxYValue <stripped>
	0xf7530  @objc MedicalRecordChartPoint.description <stripped>
	0xf7890  @objc MedicalRecordChartPoint.init <stripped>
	0xf7910  @objc MedicalRecordChartPoint..cxx_destruct <stripped>

	// Swift methods
	0xf67e0  class func MedicalRecordChartPoint.__allocating_init(chartableSet:unit:blockCoordinateInfo:) // init 
	0xf6c80  func MedicalRecordChartPoint.userInfo() // method 
	0xf6ce0  func MedicalRecordChartPoint.xValueAsGenericType() // method 
	0xf6eb0  func MedicalRecordChartPoint.maxXValueAsGenericType() // method 
	0xf8be0  func MedicalRecordChartPoint.minXValueAsGenericType() // method 
	0xf7080  func MedicalRecordChartPoint.yValue() // method 
	0xf7130  func MedicalRecordChartPoint.yValue(forKey:) // method 
	0xf7270  func MedicalRecordChartPoint.allYValues() // method 
	0xf8bd0  func MedicalRecordChartPoint.minYValue() // method 
	0xf7460  func MedicalRecordChartPoint.maxYValue() // method 
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
	0xfb4b0  @objc LabelStackView.initWithCoder: <stripped>
	0xfbdb0  @objc LabelStackView.layoutSubviews <stripped>
	0xfbdf0  @objc LabelStackView.sizeThatFits: <stripped>
	0xfbef0  @objc LabelStackView.initWithFrame: <stripped>
	0xfbf70  @objc LabelStackView..cxx_destruct <stripped>

	// Swift methods
	0xfb210  class func LabelStackView.__allocating_init(textStyle:) // init 
	0xfb550  func LabelStackView.addLabel(text:textColor:) // method 
	0xfb710  func LabelStackView.removeAll() // method 
 }

 class HealthRecordsUI.BrowseIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var iconCache : UnboundedCache<BrowseCategory, UnboundedCache<AccountIcon.Size, BrowseIcon>> // +0x10 (0x48)
	var placeholderCache : UnboundedCache<BrowseCategory, UnboundedCache<AccountIcon.Size, BrowseIcon>> // +0x58 (0x48)
	let accountIconProvider : AccountIconProvider // +0xa0 (0x8)

	// Swift methods
	0xfd9f0  class func BrowseIconProvider.__allocating_init(accountIconProvider:) // init 
	0xfdbe0  func BrowseIconProvider.placeholder(for:size:) // method 
	0xfe0b0  func BrowseIconProvider.fetchIcon(for:size:queue:completion:) // method 
 }

 class HealthRecordsUI.OAuthViewControllerNotificationUserInfoKeys : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xffb50  @objc OAuthViewControllerNotificationUserInfoKeys.init <stripped>
	0xffbf0  @objc OAuthViewControllerNotificationUserInfoKeys..cxx_destruct <stripped>
 }

 class HealthRecordsUI.AllergyReactionFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x102bf0  @objc AllergyReactionFormatter.displayItemsFromReaction: <stripped>
	0x103df0  @objc AllergyReactionFormatter.init <stripped>
	0x103e70  @objc AllergyReactionFormatter..cxx_destruct <stripped>

	// Swift methods
	0x100ac0  func AllergyReactionFormatter.structuredItems(from:) // method 
	0x101b20  func AllergyReactionFormatter.displayItems(from:) // method 
	0x102ac0  class func AllergyReactionFormatter.__allocating_init(store:context:) // init 
	0x102ba0  func AllergyReactionFormatter.displayItems(from:) // method 
	0x102ce0  func <stripped> // method 
	0x102ec0  func <stripped> // method 
	0x1038a0  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartData : HKInteractiveChartBloodPressureData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let date : Date // +0x0 (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x0 (0x8)
	let hasTime : Bool // +0x73635f5f (0x1)
	let partOfOutOfRangeSeries : Bool // +0x67 (0x1)

	// ObjC -> Swift bridged methods
	0x1058c0  @objc BloodPressureChartData.init <stripped>
	0x105930  @objc BloodPressureChartData..cxx_destruct <stripped>

	// Swift methods
	0x105650  class func BloodPressureChartData.__allocating_init(date:dateFormat:hasTime:systolicRange:diastolicRange:) // init 
 }

 class HealthRecordsUI.AccountTableViewCell : HRSourceTableViewCell {

	// Properties
	let brandView : WDMedicalRecordBrandView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x107290  @objc AccountTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x1072e0  @objc AccountTableViewCell.initWithCoder: <stripped>
	0x107500  @objc AccountTableViewCell.configureWithAccount:dataProvider: <stripped>
	0x107960  @objc AccountTableViewCell.prepareForReuse <stripped>
	0x107b40  @objc AccountTableViewCell.layoutSubviews <stripped>
	0x107be0  @objc AccountTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0x1073e0  func <stripped> // method 
	0x1074f0  func AccountTableViewCell.configureWithAccountDataProviderForObjC(_:_:) // method 
	0x107570  func <stripped> // method 
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
	0x10bda0  @objc MedicalRecordChartOverlayContext.initWithTitle:dataSource:defaultColors:selectedColors:verticalAxis: <stripped>
	0x10bec0  @objc MedicalRecordChartOverlayContext.contextItemForLastUpdate <stripped>
	0x10c1d0  @objc MedicalRecordChartOverlayContext.updateContextItemForDateInterval:timeScope:completion: <stripped>
	0x10c300  @objc MedicalRecordChartOverlayContext.sampleTypeForDateRangeUpdates <stripped>
	0x10c3a0  @objc MedicalRecordChartOverlayContext.overlayDisplayTypeForTimeScope: <stripped>
	0x10c430  @objc MedicalRecordChartOverlayContext.init <stripped>
	0x10c4b0  @objc MedicalRecordChartOverlayContext..cxx_destruct <stripped>

	// Swift methods
	0x10bb50  class func MedicalRecordChartOverlayContext.__allocating_init(title:dataSource:defaultColors:selectedColors:verticalAxis:) // init 
	0x10be30  func MedicalRecordChartOverlayContext.contextItemForLastUpdate() // method 
	0x10bf00  func MedicalRecordChartOverlayContext.updateItem(for:timeScope:completion:) // method 
	0x10c2a0  func MedicalRecordChartOverlayContext.sampleTypeForDateRangeUpdates() // method 
	0x10c390  func MedicalRecordChartOverlayContext.overlayDisplayType(for:) // method 
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
	0x10d320  @objc AccountStateChangeListener.healthRecordsStore:accountDidChange:changeType: <stripped>
	0x10d3f0  @objc AccountStateChangeListener.init <stripped>
	0x10d6a0  @objc AccountStateChangeListener..cxx_destruct <stripped>

	// Swift methods
	0x10cf40  class func AccountStateChangeListener.__allocating_init(handler:) // init 
	0x10d040  func AccountStateChangeListener.accountStateDidChange(healthRecordsStore:account:changeType:) // method 
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
	0x111080  func CountFormatter.style.getter // getter 
	0x1110f0  func CountFormatter.style.setter // setter 
	0x111120  func CountFormatter.style.modify // modifyCoroutine 
	0x1111f0  class func CountFormatter.__allocating_init(style:) // init 
	0x1112b0  func CountFormatter.string(for:) // method 
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
	0x112800  @objc DiagnosticTestReportFormatter.init <stripped>
	0x1128e0  @objc DiagnosticTestReportFormatter..cxx_destruct <stripped>

	// Swift methods
	0x111f30  class func DiagnosticTestReportFormatter.__allocating_init(store:context:) // init 
	0x112040  func DiagnosticTestReportFormatter.displayItems(from:) // method 
	0x1120a0  func <stripped> // method 
	0x1125d0  func <stripped> // method 
 }

 class HealthRecordsUI.AccountIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monogramProvider : MonogramProvider // +0x10 (0x8)
	var brandImageManager : HKBrandImageManager // +0x18 (0x8)
	var iconCache : UnboundedCache<UUID, UnboundedCache<AccountIcon.Size, AccountIcon>> // +0x20 (0x48)

	// Swift methods
	0x1130d0  class func AccountIconProvider.__allocating_init(brandImageManager:monogramProvider:) // init 
	0x113230  func AccountIconProvider.placeholder(forTitle:size:) // method 
	0x114040  func AccountIconProvider.fetchIcon(forAccount:size:completion:) // method 
	0x1146c0  func AccountIconProvider.fetchIcon(for:size:queue:completion:) // method 
 }

 class HealthRecordsUI.ContentStatusCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let spinner : UIActivityIndicatorView // +0x8 (0x8)
	let titleLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x116a10  @objc ContentStatusCell.spinner <stripped>
	0x116a50  @objc ContentStatusCell.titleLabel <stripped>
	0x116c70  @objc ContentStatusCell.init <stripped>
	0x116c90  @objc ContentStatusCell.initWithCoder: <stripped>
	0x1171b0  @objc ContentStatusCell.initWithStyle:reuseIdentifier: <stripped>
	0x117230  @objc ContentStatusCell..cxx_destruct <stripped>

	// Swift methods
	0x116cb0  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartSeries : HKGraphSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var selectedStrokeStyle : HKStrokeStyle?
	var unselectedStrokeStyle : HKStrokeStyle?

	// ObjC -> Swift bridged methods
	0x117630  @objc MedicalRecordChartSeries.selectedPathRange <stripped>
	0x117880  @objc MedicalRecordChartSeries.coordinatesForBlock:blockPath:xAxis:yAxis: <stripped>
	0x118110  @objc MedicalRecordChartSeries.drawSeriesWithBlockCoordinates:axisRect:zoomLevelConfiguration:pointTransform:renderContext:secondaryRenderContext: <stripped>
	0x118220  @objc MedicalRecordChartSeries.supportsMultiTouchSelection <stripped>
	0x118250  @objc MedicalRecordChartSeries.blockCoordinateIsVisibleInsideOfChartRect:blockCoordinate: <stripped>
	0x1182f0  @objc MedicalRecordChartSeries.distanceFromPoint:blockCoordinate:chartRect: <stripped>
	0x118360  @objc MedicalRecordChartSeries.xAxisDistanceFromPoint:blockCoordinate:chartRect: <stripped>
	0x1183d0  @objc MedicalRecordChartSeries.yAxisDifferenceToPoint:blockCoordinate:chartRect: <stripped>
	0x1184a0  @objc MedicalRecordChartSeries.init <stripped>
	0x118530  @objc MedicalRecordChartSeries..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordChartCoordinate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let pointValuesAscending : [CGPoint]
	let blockCoordinateInfo : HKGraphSeriesBlockCoordinateInfo

	// ObjC -> Swift bridged methods
	0x1188d0  @objc MedicalRecordChartCoordinate.startXValue <stripped>
	0x118930  @objc MedicalRecordChartCoordinate.endXValue <stripped>
	0x118990  @objc MedicalRecordChartCoordinate.userInfo <stripped>
	0x1189d0  @objc MedicalRecordChartCoordinate.copyWithTransform:roundToViewScale: <stripped>
	0x118a70  @objc MedicalRecordChartCoordinate.init <stripped>
	0x118b00  @objc MedicalRecordChartCoordinate..cxx_destruct <stripped>

	// Swift methods
	0x117830  class func MedicalRecordChartCoordinate.__allocating_init(sortedPointValues:blockCoordinateInfo:) // init 
	0x1187d0  func MedicalRecordChartCoordinate.xValue.getter // getter 
	0x118800  func MedicalRecordChartCoordinate.minPoint.getter // getter 
	0x118830  func MedicalRecordChartCoordinate.maxPoint.getter // getter 
	0x118870  func MedicalRecordChartCoordinate.distance(from:) // method 
	0x118900  func MedicalRecordChartCoordinate.startXValue.getter // getter 
	0x118960  func MedicalRecordChartCoordinate.endXValue.getter // getter 
	0x11bb80  func MedicalRecordChartCoordinate.userInfo.getter // getter 
	0x1189c0  func MedicalRecordChartCoordinate.copy(with:roundToViewScale:) // method 
 }

 class HealthRecordsUI.ContentStatusView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let subtitleLabel : UILabel // +0x10 (0x8)
	let spinnerView : UIActivityIndicatorView // +0x18 (0x8)
	var title : String? // +0x20 (0x10)
	var subtitle : String? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x11bb90  @objc ContentStatusView.title <stripped>
	0x11bbd0  @objc ContentStatusView.setTitle: <stripped>
	0x11bca0  @objc ContentStatusView.subtitle <stripped>
	0x11bda0  @objc ContentStatusView.setSubtitle: <stripped>
	0x11c240  @objc ContentStatusView.initWithTitle:subtitle: <stripped>
	0x11c310  @objc ContentStatusView.initWithCoder: <stripped>
	0x11c5c0  @objc ContentStatusView.initWithFrame: <stripped>
	0x11c8c0  @objc ContentStatusView.startAnimating <stripped>
	0x11c930  @objc ContentStatusView.stopAnimating <stripped>
	0x11cb20  @objc ContentStatusView.traitCollectionDidChange: <stripped>
	0x11d150  @objc ContentStatusView.layoutSubviews <stripped>
	0x11d310  @objc ContentStatusView..cxx_destruct <stripped>

	// Swift methods
	0x11bbb0  func ContentStatusView.title.getter // getter 
	0x11bbf0  func ContentStatusView.title.setter // setter 
	0x11bc20  func ContentStatusView.title.modify // modifyCoroutine 
	0x11bd30  func ContentStatusView.subtitle.getter // getter 
	0x11be40  func ContentStatusView.subtitle.setter // setter 
	0x11be70  func ContentStatusView.subtitle.modify // modifyCoroutine 
	0x11bf70  class func ContentStatusView.__allocating_init(title:subtitle:) // init 
	0x11c5f0  func <stripped> // method 
	0x11c8a0  func ContentStatusView.startAnimating() // method 
	0x11c8e0  func ContentStatusView.stopAnimating() // method 
	0x11d180  func <stripped> // method 
 }

 class HealthRecordsUI.MedicationRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x11f090  @objc MedicationRecordFormatter.init <stripped>
	0x11f110  @objc MedicationRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x11d680  func MedicationRecordFormatter.structuredItems(from:) // method 
	0x11db40  class func MedicationRecordFormatter.__allocating_init(store:context:) // init 
	0x11dc40  func MedicationRecordFormatter.displayItems(from:) // method 
	0x11dca0  func <stripped> // method 
	0x11e200  func <stripped> // method 
	0x11e7b0  func <stripped> // method 
	0x11ec00  func <stripped> // method 
 }

 class HealthRecordsUI.ClinicalOnboardingManager : WDClinicalOnboardingManager {
	// ObjC -> Swift bridged methods
	0x11fb30  @objc ClinicalOnboardingManager.initWithProfile: <stripped>
 }

 class HealthRecordsUI.ConceptTitleTableHeaderView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let fontChoices : [UIFont] // +0x10 (0x8)
	var widthCache : CGFloat // +0x18 (0x8)
	var titleCache : NSString // +0x20 (0x8)
	var bottomExtraSpace : CGFloat // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x11fbe0  @objc ConceptTitleTableHeaderView.bottomExtraSpace <stripped>
	0x11fc50  @objc ConceptTitleTableHeaderView.setBottomExtraSpace: <stripped>
	0x11fd30  @objc ConceptTitleTableHeaderView.title <stripped>
	0x11fe80  @objc ConceptTitleTableHeaderView.setTitle: <stripped>
	0x1205d0  @objc ConceptTitleTableHeaderView.initWithFrame: <stripped>
	0x120600  @objc ConceptTitleTableHeaderView.initWithCoder: <stripped>
	0x120a40  @objc ConceptTitleTableHeaderView.layoutSubviews <stripped>
	0x120a80  @objc ConceptTitleTableHeaderView.sizeThatFits: <stripped>
	0x121260  @objc ConceptTitleTableHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x11fc20  func ConceptTitleTableHeaderView.bottomExtraSpace.getter // getter 
	0x11fca0  func ConceptTitleTableHeaderView.bottomExtraSpace.setter // setter 
	0x11fce0  func ConceptTitleTableHeaderView.bottomExtraSpace.modify // modifyCoroutine 
	0x11ff50  func ConceptTitleTableHeaderView.title.setter // setter 
	0x11ffe0  func ConceptTitleTableHeaderView.title.modify // modifyCoroutine 
	0x11fdf0  func ConceptTitleTableHeaderView.title.getter // getter 
	0x120620  func <stripped> // method 
	0x120ad0  func <stripped> // method 
 }

 class HealthRecordsUI.WeakNotificationObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let scheduler : TaskScheduler // +0x8 (0x28)
	let block : (_:) // +0x30 (0x10)
	var center : weak NSNotificationCenter? // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x121b00  @objc WeakNotificationObserver.dealloc <stripped>
	0x121c30  @objc WeakNotificationObserver.didReceiveWithNotification: <stripped>
	0x121de0  @objc WeakNotificationObserver.init <stripped>
	0x121ba0  @objc WeakNotificationObserver..cxx_destruct <stripped>

	// Swift methods
	0x121820  class func WeakNotificationObserver.__allocating_init(forName:object:scheduler:center:block:) // init 
	0x121be0  func WeakNotificationObserver.invalidate() // method 
 }

 class HealthRecordsUI.MedicalRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x124650  @objc MedicalRecordFormatter.structuredItemsFromRecord: <stripped>
	0x1253d0  @objc MedicalRecordFormatter.initWithConceptStore:context: <stripped>
	0x125b70  @objc MedicalRecordFormatter.displayItemsFromRecord: <stripped>
	0x125c60  @objc MedicalRecordFormatter.init <stripped>
	0x125ce0  @objc MedicalRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x1241e0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124710  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x1247d0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124890  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124950  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124a10  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124b10  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124c00  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124cf0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124dd0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124ed0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124fd0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x1250d0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x1251c0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x1252f0  class func MedicalRecordFormatter.__allocating_init(store:context:) // init 
	0x125440  func MedicalRecordFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.ViewControllerFactory : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let profile : HRProfile // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x126a60  @objc ViewControllerFactory.profile <stripped>
	0x126de0  @objc ViewControllerFactory.makeSettingsViewController <stripped>
	0x1272c0  @objc ViewControllerFactory.makeViewControllerForConcept:highlightedRecordId: <stripped>
	0x1277c0  @objc ViewControllerFactory.makeViewControllerForRecord: <stripped>
	0x127820  @objc ViewControllerFactory.makeDetailViewControllerForRecord: <stripped>
	0x1278c0  @objc ViewControllerFactory.init <stripped>
	0x127940  @objc ViewControllerFactory..cxx_destruct <stripped>

	// Swift methods
	0x126a80  func ViewControllerFactory.makeViewController(forAccount:) // method 
	0x126b70  func ViewControllerFactory.makeAndPresentAddAccountViewController(from:animated:completion:) // method 
	0x126b80  func ViewControllerFactory.makeDetailViewController(forAccount:) // method 
	0x126c90  func ViewControllerFactory.makeDetailViewController(for:) // method 
	0x126cd0  func ViewControllerFactory.makeLearnMoreViewController() // method 
	0x126d40  func ViewControllerFactory.makeSettingsViewController() // method 
	0x126eb0  func ViewControllerFactory.makeViewController(for:) // method 
	0x127190  func ViewControllerFactory.makeViewController(for:highlightedRecord:) // method 
	0x127390  func ViewControllerFactory.makeViewController(forConcept:highlightedRecord:) // method 
	0x127580  func ViewControllerFactory.makeViewController(for:) // method 
	0x1277e0  func ViewControllerFactory.makeDetailViewController(for:) // method 
 }

 class HealthRecordsUI.MedicalRecordAnnotationViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dateGroup : UIStackView // +0x8 (0x8)
	let monthYearLabel : UILabel // +0x10 (0x8)
	let timeLabel : UILabel // +0x18 (0x8)
	let dividerLabel : UILabel // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x1292b0  @objc MedicalRecordAnnotationViewDataSource.init <stripped>
	0x1292d0  @objc MedicalRecordAnnotationViewDataSource.numberOfValuesForAnnotationView: <stripped>
	0x129310  @objc MedicalRecordAnnotationViewDataSource.valueViewForColumnAtIndex:orientation: <stripped>
	0x129340  @objc MedicalRecordAnnotationViewDataSource.showSeparators <stripped>
	0x129350  @objc MedicalRecordAnnotationViewDataSource.dateViewWithOrientation: <stripped>
	0x1293b0  @objc MedicalRecordAnnotationViewDataSource.leftMarginViewWithOrientation: <stripped>
	0x129410  @objc MedicalRecordAnnotationViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0x128470  func MedicalRecordAnnotationViewDataSource.numberOfValues(for:) // method 
	0x1292e0  func MedicalRecordAnnotationViewDataSource.valueViewForColumn(at:orientation:) // method 
	0x128480  func MedicalRecordAnnotationViewDataSource.showSeparators() // method 
	0x128490  func MedicalRecordAnnotationViewDataSource.dateView(with:) // method 
	0x1284c0  func MedicalRecordAnnotationViewDataSource.leftMarginView(with:) // method 
	0x1284d0  func MedicalRecordAnnotationViewDataSource.updateDateGroup(using:) // method 
	0x1287d0  func MedicalRecordAnnotationViewDataSource.updateDateGroup(using:timeScope:) // method 
	0x128b30  func MedicalRecordAnnotationViewDataSource.applyOrientation(_:to:) // method 
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
	0x131390  @objc BloodPressureDataTransformer.chartPointFor:in:with:dataSourceType: <stripped>
	0x1314a0  @objc BloodPressureDataTransformer.graphSeriesWith: <stripped>
	0x131580  @objc BloodPressureDataTransformer.chartDisplayTypeWith:displayName:unitName: <stripped>

	// Swift methods
	0x1305a0  func BloodPressureDataTransformer.createUserInfo(date:timeScope:systole:diastole:) // method 
	0x130c40  func BloodPressureDataTransformer.chartPoint(for:in:with:dataSourceType:) // method 
	0x131410  func BloodPressureDataTransformer.graphSeries(with:) // method 
	0x131570  func BloodPressureDataTransformer.chartDisplayType(with:displayName:unitName:) // method 
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
	0x133b00  @objc IconTextListView.initWithCoder: <stripped>
	0x134570  @objc IconTextListView.layoutSubviews <stripped>
	0x1345b0  @objc IconTextListView.sizeThatFits: <stripped>
	0x1348f0  @objc IconTextListView.traitCollectionDidChange: <stripped>
	0x1349f0  @objc IconTextListView.initWithFrame: <stripped>
	0x134a70  @objc IconTextListView..cxx_destruct <stripped>

	// Swift methods
	0x1337a0  class func IconTextListView.__allocating_init(textStyle:iconSize:interItemSpacingHorizontal:interItemSpacingVertical:hidesIconsForAccessibilityTextSizes:) // init 
	0x133b80  func IconTextListView.addItem(icon:text:textColor:) // method 
	0x133b90  func IconTextListView.removeAll() // method 
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
	0x136870  @objc StandardTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x136900  @objc StandardTableViewCell.initWithCoder: <stripped>

	// Swift methods
	0x136780  class func static StandardTableViewCell.reuseIdentifier.getter // getter 
 }

 class HealthRecordsUI.NoAppTableViewCell : HRStandardTableViewCell {
	// ObjC -> Swift bridged methods
	0x1369a0  @objc NoAppTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x136a80  @objc NoAppTableViewCell.initWithCoder: <stripped>
 }

 class HealthRecordsUI.SourceTableViewCell : HRStandardTableViewCell {

	// Properties
	var sourceModel : HKSourceDataModel?

	// ObjC -> Swift bridged methods
	0x137310  @objc SourceTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x1374a0  @objc SourceTableViewCell.initWithCoder: <stripped>
	0x137600  @objc SourceTableViewCell..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordUnitCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var units : [HKUnit : NSCountedSet] // +0x10 (0x8)

	// Swift methods
	0x137f80  func MedicalRecordUnitCollector.add(units:) // method 
	0x1387a0  func MedicalRecordUnitCollector.preferredUnit() // method 
 }

 class HealthRecordsUI.BloodPressureFormatter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit? // +0x10 (0x8)

	// Swift methods
	0x13cb90  func BloodPressureFormatter.rawUnitString.getter // getter 
	0x13cc70  func BloodPressureFormatter.niceUnitString.getter // getter 
	0x13cde0  func BloodPressureFormatter.valueString(for:diastolicRange:) // method 
 }

 class HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var lastCachedNumberOfChartPoints : Int? // +0x8 (0x9)

	// ObjC -> Swift bridged methods
	0x13d640  @objc SingleValueCurrentValueViewDataSource.attributedTitleStringForCurrentValueView: <stripped>
	0x13de00  @objc SingleValueCurrentValueViewDataSource.updateDataSourceWithGraphView:displayType:timeScope: <stripped>
	0x13dfb0  @objc SingleValueCurrentValueViewDataSource.initWithDateCache:displayCategoryController:healthStore:selectedRangeFormatter: <stripped>
	0x13e120  @objc SingleValueCurrentValueViewDataSource.init <stripped>

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
	0x1437d0  @objc HealthRecordsMigrator.migrateIfNeededWithCompletion: <stripped>
	0x144150  @objc HealthRecordsMigrator.init <stripped>
	0x1441d0  @objc HealthRecordsMigrator..cxx_destruct <stripped>

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
	0x144870  func ConceptListViewDataSourceProvider.store.getter // getter 
	0x1448b0  func ConceptListViewDataSourceProvider.store.setter // setter 
	0x144900  func ConceptListViewDataSourceProvider.store.modify // modifyCoroutine 
	0x1446d0  class func ConceptListViewDataSourceProvider.__allocating_init(categoryPredicate:store:) // init 
	0x1449f0  func ConceptListViewDataSourceProvider.selectedDataSources(for:) // method 
	0x144ab0  func <stripped> // method 
	0x1451f0  func ConceptListViewDataSourceProvider.makePromotionDataSource() // method 
 }

 class HealthRecordsUI.MedicationDispenseFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x146cf0  @objc MedicationDispenseFormatter.init <stripped>
	0x146d70  @objc MedicationDispenseFormatter..cxx_destruct <stripped>

	// Swift methods
	0x146250  func MedicationDispenseFormatter.structuredItems(from:) // method 
	0x146190  class func MedicationDispenseFormatter.__allocating_init(store:context:) // init 
	0x146780  func MedicationDispenseFormatter.displayItems(from:) // method 
	0x1467e0  func <stripped> // method 
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
	var headerImage : UIImage? // +0x18 (0x8)
	var title : String? // +0x20 (0x10)
	var categoryColor : UIColor? // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x14d820  @objc ConceptHeaderCell.headerImage <stripped>
	0x14d860  @objc ConceptHeaderCell.setHeaderImage: <stripped>
	0x14d940  @objc ConceptHeaderCell.title <stripped>
	0x14da00  @objc ConceptHeaderCell.setTitle: <stripped>
	0x14db50  @objc ConceptHeaderCell.categoryColor <stripped>
	0x14dc10  @objc ConceptHeaderCell.setCategoryColor: <stripped>
	0x14e080  @objc ConceptHeaderCell.setupSubviews <stripped>
	0x14e590  @objc ConceptHeaderCell.setUpConstraints <stripped>
	0x14e660  @objc ConceptHeaderCell._updateForCurrentSizeCategory <stripped>
	0x14e810  @objc ConceptHeaderCell.traitCollectionDidChange: <stripped>
	0x14f020  @objc ConceptHeaderCell.initWithStyle:reuseIdentifier: <stripped>
	0x14f0f0  @objc ConceptHeaderCell.initWithCoder: <stripped>
	0x14f180  @objc ConceptHeaderCell..cxx_destruct <stripped>

	// Swift methods
	0x14d840  func ConceptHeaderCell.headerImage.getter // getter 
	0x14d880  func ConceptHeaderCell.headerImage.setter // setter 
	0x14d8c0  func ConceptHeaderCell.headerImage.modify // modifyCoroutine 
	0x14d9b0  func ConceptHeaderCell.title.getter // getter 
	0x14da60  func ConceptHeaderCell.title.setter // setter 
	0x14da90  func ConceptHeaderCell.title.modify // modifyCoroutine 
	0x14dbb0  func ConceptHeaderCell.categoryColor.getter // getter 
	0x14dca0  func ConceptHeaderCell.categoryColor.setter // setter 
	0x14dce0  func ConceptHeaderCell.categoryColor.modify // modifyCoroutine 
	0x14e860  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartSeries : HKBloodPressureSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
	0x14fcf0  @objc BloodPressureChartSeries.selectedPathRange <stripped>
	0x14ff80  @objc BloodPressureChartSeries.init <stripped>
 }

 class HealthRecordsUI.ProfileOnboardingActionViewController {
 class HealthRecordsUI.OnboardingTableViewCell : type metadata for ChromeHostViewTableCell /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {
	// ObjC -> Swift bridged methods
	0x150880  @objc OnboardingTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x1508e0  @objc OnboardingTableViewCell.initWithCoder: <stripped>

	// Swift methods
 }

 class HealthRecordsUI.RecordKindDataProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RecordKindDataProviderProtocol {

	// Properties
	let healthStore : HKHealthStore // +0x10 (0x8)
	let queue : OS_dispatch_queue // +0x18 (0x8)

	// Swift methods
	0x1512d0  class func RecordKindDataProvider.__allocating_init(healthStore:) // init 
	0x151580  func RecordKindDataProvider.fetchRecordKinds(completion:) // method 
	0x151e50  func RecordKindDataProvider.fetchRecordKinds(in:completion:) // method 
	0x152f20  func RecordKindDataProvider.addObserver(following:handler:) // method 
 }

 class HealthRecordsUI.CategoryViewControllerManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var activeCategoryViewController : weak UIViewController? // +0x10 (0x8)

	// Swift methods
	0x155c70  func CategoryViewControllerManager.isCategoryViewControllerOnTop() // method 
	0x156410  func CategoryViewControllerManager.hasActiveCategoryViewController() // method 
 }

 class HealthRecordsUI.Features : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x156630  @objc Features.init <stripped>
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
	0x157c60  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
	0x157d10  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
	0x157d20  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
 }

 struct HealthRecordsUI.RecordKindFeedItemIdentifierFactory { }

 class HealthRecordsUI.RecordPrimaryTitleCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let recordTitleLabel : UILabel
	let recordDateLabel : UILabel

	// ObjC -> Swift bridged methods
	0x159550  @objc RecordPrimaryTitleCell.recordTitleLabel <stripped>
	0x159590  @objc RecordPrimaryTitleCell.recordDateLabel <stripped>
	0x159610  @objc RecordPrimaryTitleCell.initWithStyle:reuseIdentifier: <stripped>
	0x159630  @objc RecordPrimaryTitleCell.initWithCoder: <stripped>
	0x159dd0  @objc RecordPrimaryTitleCell..cxx_destruct <stripped>

	// Swift methods
	0x159670  func <stripped> // method 
 }

 class HealthRecordsUI.RecordDetailItemCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let bodyLabel : UILabel

	// ObjC -> Swift bridged methods
	0x159e80  @objc RecordDetailItemCell.titleLabel <stripped>
	0x159ec0  @objc RecordDetailItemCell.bodyLabel <stripped>
	0x159f40  @objc RecordDetailItemCell.initWithStyle:reuseIdentifier: <stripped>
	0x159fc0  @objc RecordDetailItemCell.initWithCoder: <stripped>
	0x15a760  @objc RecordDetailItemCell..cxx_destruct <stripped>

	// Swift methods
	0x15a000  func <stripped> // method 
 }

 class HealthRecordsUI.RecordReferenceRangeCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let referenceRangeView : HKReferenceRangeView // +0x8 (0x8)
	var valueInRange : HKInspectableValueInRange? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x15a810  @objc RecordReferenceRangeCell.valueInRange <stripped>
	0x15a8a0  @objc RecordReferenceRangeCell.setValueInRange: <stripped>
	0x15aa10  @objc RecordReferenceRangeCell.initWithStyle:reuseIdentifier: <stripped>
	0x15aa30  @objc RecordReferenceRangeCell.initWithCoder: <stripped>
	0x15aad0  @objc RecordReferenceRangeCell..cxx_destruct <stripped>

	// Swift methods
	0x15a860  func RecordReferenceRangeCell.valueInRange.getter // getter 
	0x15a8f0  func RecordReferenceRangeCell.valueInRange.setter // setter 
	0x15a910  func RecordReferenceRangeCell.valueInRange.modify // modifyCoroutine 
 }

 class HealthRecordsUI.RecordDataSourceCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let brandView : WDMedicalRecordBrandView

	// ObjC -> Swift bridged methods
	0x15ac30  @objc RecordDataSourceCell.initWithStyle:reuseIdentifier: <stripped>
	0x15ac50  @objc RecordDataSourceCell.initWithCoder: <stripped>
	0x15ae90  @objc RecordDataSourceCell.configCellWith:owner:dataProvider: <stripped>
	0x15af80  @objc RecordDataSourceCell..cxx_destruct <stripped>

	// Swift methods
	0x15ad30  func RecordDataSourceCell.configCell(with:owner:dataProvider:) // method 
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
	0x1603b0  @objc ProcedureRecordFormatter.init <stripped>
	0x160490  @objc ProcedureRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x15df90  class func ProcedureRecordFormatter.__allocating_init(store:context:) // init 
	0x15e0e0  func ProcedureRecordFormatter.displayItems(from:) // method 
	0x15e140  func <stripped> // method 
	0x15e600  func <stripped> // method 
	0x15f420  func <stripped> // method 
	0x15f460  func <stripped> // method 
	0x15f8c0  func <stripped> // method 
	0x15fbf0  func <stripped> // method 
	0x15ff20  func <stripped> // method 
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
