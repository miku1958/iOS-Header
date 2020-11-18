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
	0x63f40  @objc SingleValueAnnotationViewDataSource.init <stripped>
	0x64050  @objc SingleValueAnnotationViewDataSource.valueViewForColumnAtIndex:orientation: <stripped>
	0x640f0  @objc SingleValueAnnotationViewDataSource.updateUsing: <stripped>
	0x64d90  @objc SingleValueAnnotationViewDataSource.updateUsing:valueRange:dateRange:timeScope: <stripped>
	0x65510  @objc SingleValueAnnotationViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0x64080  func SingleValueAnnotationViewDataSource.update(using:) // method 
	0x64160  func SingleValueAnnotationViewDataSource.updateReferenceRange(using:) // method 
	0x64a70  func SingleValueAnnotationViewDataSource.update(using:valueRange:dateRange:timeScope:) // method 
	0x64eb0  func SingleValueAnnotationViewDataSource.updateValue(using:) // method 
 }

 class HealthRecordsUI.SingleValueChartData : HKInteractiveChartSinglePointData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let chartableQuantitySet : HKChartableCodedQuantitySet // +0x8 (0x8)
	let date : Date // +0xfeedfacf (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x3 (0x8)
	let hasTime : Bool // +0x4c (0x1)
	let partOfOutOfRangeSeries : Bool // +0x6100085 (0x1)

	// ObjC -> Swift bridged methods
	0x664e0  @objc SingleValueChartData.init <stripped>
	0x66550  @objc SingleValueChartData..cxx_destruct <stripped>

	// Swift methods
	0x663e0  class func SingleValueChartData.__allocating_init(chartableQuantitySet:date:dateFormat:hasTime:partOfOutOfRangeSeries:) // init 
 }

 class HealthRecordsUI.LoadingTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containerView : UIView // +0x8 (0x8)
	let spinner : UIActivityIndicatorView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x66e20  @objc LoadingTableViewCell.init <stripped>
	0x66f30  @objc LoadingTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x67000  @objc LoadingTableViewCell.initWithCoder: <stripped>
	0x67790  @objc LoadingTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0x66d70  class func static LoadingTableViewCell.reuseIdentifier.getter // getter 
	0x67040  func LoadingTableViewCell.willDisplay() // method 
	0x67060  func LoadingTableViewCell.didEndDisplaying() // method 
	0x67080  func <stripped> // method 
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
	0x6d800  @objc TapToRadarManager.init <stripped>
 }

 struct HealthRecordsUI.SyncTaskScheduler: TaskScheduler { }

 class HealthRecordsUI.DiagnosticTestResultFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x6f110  @objc DiagnosticTestResultFormatter.init <stripped>
	0x6f1f0  @objc DiagnosticTestResultFormatter..cxx_destruct <stripped>

	// Swift methods
	0x6e560  class func DiagnosticTestResultFormatter.__allocating_init(store:context:) // init 
	0x6e670  func DiagnosticTestResultFormatter.displayItems(from:) // method 
	0x6e6c0  func <stripped> // method 
	0x6ec20  func <stripped> // method 
	0x6ec60  func <stripped> // method 
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
	0x71c50  @objc ClinicalSourcesDataProvider.initWithHealthRecordsStore: <stripped>
	0x71d00  @objc ClinicalSourcesDataProvider..cxx_destruct <stripped>
 }

 class HealthRecordsUI.HealthRecordsSupportedChangeListener : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let handler : (_:) // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x71e60  @objc HealthRecordsSupportedChangeListener.init <stripped>
	0x71ee0  @objc HealthRecordsSupportedChangeListener..cxx_destruct <stripped>

	// Swift methods
	0x71d10  class func HealthRecordsSupportedChangeListener.__allocating_init(_:) // init 
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
	0x71f00  class func HealthRecordsSupportedManager.__allocating_init(_:) // init 
	0x71fc0  func HealthRecordsSupportedManager.isHealthRecordsSupported() // method 
	0x72030  func HealthRecordsSupportedManager.observe(_:) // method 
	0x72450  func HealthRecordsSupportedManager.addListener(_:) // method 
	0x72910  func HealthRecordsSupportedManager.removeListener(_:) // method 
	0x73110  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x762e0  @objc InternalStateCell.initWithStyle:reuseIdentifier: <stripped>
	0x76390  @objc InternalStateCell.initWithCoder: <stripped>
	0x76430  @objc InternalStateCell..cxx_destruct <stripped>
 }

 class HealthRecordsUI.InternalStateViewController : UITableViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let supportedCategories : [DisplayCategory]
	var currentIngestionState : HKHealthRecordsStoreIngestionState
	var currentIndexingState : HKConceptIndexManagerState

	// ObjC -> Swift bridged methods
	0x76530  @objc InternalStateViewController.init <stripped>
	0x76660  @objc InternalStateViewController.dealloc <stripped>
	0x766a0  @objc InternalStateViewController.initWithCoder: <stripped>
	0x76a20  @objc InternalStateViewController.viewDidLoad <stripped>
	0x76a50  @objc InternalStateViewController.numberOfSectionsInTableView: <stripped>
	0x76a60  @objc InternalStateViewController.tableView:numberOfRowsInSection: <stripped>
	0x76a80  @objc InternalStateViewController.tableView:cellForRowAtIndexPath: <stripped>
	0x76b40  @objc InternalStateViewController.tableView:shouldHighlightRowAtIndexPath: <stripped>
	0x76bf0  @objc InternalStateViewController.tableView:titleForHeaderInSection: <stripped>
	0x77c00  @objc InternalStateViewController.healthRecordsStore:ingestionStateDidUpdateTo: <stripped>
	0x77c90  @objc InternalStateViewController.conceptStore:indexManagerDidChangeState: <stripped>
	0x77d20  @objc InternalStateViewController.medicalRecordCountProvider:didUpdateCountForSampleTypes: <stripped>
	0x77d30  @objc InternalStateViewController.medicalRecordCountProviderDidUpdateAllRecordsCount: <stripped>
	0x77d40  @objc InternalStateViewController.medicalRecordCountProvider:didUpdateCountForCategories: <stripped>
	0x77db0  @objc InternalStateViewController.initWithStyle: <stripped>
	0x77de0  @objc InternalStateViewController.initWithNibName:bundle: <stripped>
	0x76680  @objc InternalStateViewController..cxx_destruct <stripped>

	// Swift methods
	0x76c40  func <stripped> // method 
	0x76e20  func <stripped> // method 
	0x77090  func <stripped> // method 
	0x772d0  func <stripped> // method 
	0x776f0  func <stripped> // method 
	0x77990  func <stripped> // method 
 }

 class HealthRecordsUI.FeedItemListViewController : type metadata for DataTypeDetailViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]

	// ObjC -> Swift bridged methods
	0x7a720  @objc FeedItemListViewController.initWithCoder: <stripped>
	0x7ab90  @objc FeedItemListViewController.viewDidLoad <stripped>
	0x7aee0  @objc FeedItemListViewController.viewWillAppear: <stripped>
	0x7af30  @objc FeedItemListViewController.initWithCollectionViewLayout: <stripped>
	0x7af60  @objc FeedItemListViewController.initWithNibName:bundle: <stripped>
	0x7b010  @objc FeedItemListViewController..cxx_destruct <stripped>

	// Swift methods
	0x7a600  func <stripped> // method 
	0x7a710  func <stripped> // getter 
 }

 class HealthRecordsUI.FeedItemListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]
	let store : HealthExperienceStore

	// Swift methods
	0x7b0d0  func <stripped> // method 
 }

 class HealthRecordsUI.SingleValueDataTransformer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
	0x7d240  @objc SingleValueDataTransformer.chartPointFor:in:with:dataSourceType: <stripped>
	0x7d3a0  @objc SingleValueDataTransformer.graphSeriesWith: <stripped>
	0x7d400  @objc SingleValueDataTransformer.chartDisplayTypeWith:displayName:unitName: <stripped>

	// Swift methods
	0x7d0d0  func SingleValueDataTransformer.chartPoint(for:in:with:dataSourceType:) // method 
	0x7d390  func SingleValueDataTransformer.graphSeries(with:) // method 
	0x7d3f0  func SingleValueDataTransformer.chartDisplayType(with:displayName:unitName:) // method 
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
	0x863b0  @objc ConditionRecordFormatter.init <stripped>
	0x86490  @objc ConditionRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x85350  class func ConditionRecordFormatter.__allocating_init(store:context:) // init 
	0x85460  func ConditionRecordFormatter.displayItems(from:) // method 
	0x854c0  func <stripped> // method 
	0x85960  func <stripped> // method 
	0x85e80  func <stripped> // method 
	0x85ec0  func <stripped> // method 
	0x85f00  func <stripped> // method 
 }

 class HealthRecordsUI.TimelineHeaderView : UITableViewHeaderFooterView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_titleLabel : UILabel? // +0x8 (0x8)
	var $__lazy_storage_$_subtitleLabel : UILabel? // +0x10 (0x8)
	var $__lazy_storage_$_backgroundEffectView : UIVisualEffectView? // +0x18 (0x8)
	var $__lazy_storage_$_separatorView : UIView? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x875d0  @objc TimelineHeaderView.initWithReuseIdentifier: <stripped>
	0x87690  @objc TimelineHeaderView.initWithCoder: <stripped>
	0x87a20  @objc TimelineHeaderView.applyTitle:subtitle: <stripped>
	0x87c50  @objc TimelineHeaderView.applyStyleFromNavigationBar: <stripped>
	0x87c70  @objc TimelineHeaderView.floating <stripped>
	0x87d20  @objc TimelineHeaderView.setFloating: <stripped>
	0x88810  @objc TimelineHeaderView.layoutSubviews <stripped>
	0x88850  @objc TimelineHeaderView.sizeThatFits: <stripped>
	0x88b90  @objc TimelineHeaderView.traitCollectionDidChange: <stripped>
	0x88c60  @objc TimelineHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x873a0  class func static TimelineHeaderView.reuseIdentifier.getter // getter 
	0x873d0  func <stripped> // getter 
	0x873f0  func <stripped> // getter 
	0x876d0  func <stripped> // method 
	0x87a10  func TimelineHeaderView.apply(title:subtitle:) // method 
	0x87ad0  func TimelineHeaderView.applyStyle(from:) // method 
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
	0x89070  @objc MedicalRecordChartabilityResult.configuration <stripped>
	0x890c0  @objc MedicalRecordChartabilityResult.masterDataSource <stripped>
	0x89100  @objc MedicalRecordChartabilityResult.seriesDataSources <stripped>
	0x89170  @objc MedicalRecordChartabilityResult.outOfRangeDataSource <stripped>
	0x891d0  @objc MedicalRecordChartabilityResult.noRangeDataSource <stripped>
	0x89230  @objc MedicalRecordChartabilityResult.latestChartableDate <stripped>
	0x892e0  @objc MedicalRecordChartabilityResult.shouldProduceAtLeastOneOverlay <stripped>
	0x895f0  @objc MedicalRecordChartabilityResult.init <stripped>
	0x89660  @objc MedicalRecordChartabilityResult..cxx_destruct <stripped>

	// Swift methods
	0x89360  func MedicalRecordChartabilityResult.shouldProduceAtLeastOneOverlay.getter // getter 
	0x89430  class func MedicalRecordChartabilityResult.__allocating_init(configuration:masterDataSource:seriesDataSources:outOfRangeDataSource:noRangeDataSource:latestChartableDate:) // init 
 }

 class HealthRecordsUI.MedicalRecordChartabilityDeterminer : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x8bf20  @objc MedicalRecordChartabilityDeterminer.determineChartabilityForConcept:records:completion: <stripped>
	0x8c2a0  @objc MedicalRecordChartabilityDeterminer.init <stripped>

	// Swift methods
	0x896d0  func MedicalRecordChartabilityDeterminer.determineChartability(for:records:completion:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeriesCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let concept : HKConcept
	var preferredColors : HKUIMetricColors?
	var chartableQuantitySets : [HKChartableCodedQuantitySet]

	// Swift methods
	0x8c1d0  class func MedicalRecordChartableSeriesCollector.__allocating_init(concept:) // init 
	0x8c360  func MedicalRecordChartableSeriesCollector.collect(record:) // method 
	0x8c620  func MedicalRecordChartableSeriesCollector.allUnits.getter // getter 
	0x8cac0  func MedicalRecordChartableSeriesCollector.chartDataSourceSeries(compatibleWith:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeries : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let concept : HKConcept
	let chartableQuantitySets : [HKChartableCodedQuantitySet]
	let preferredColors : HKUIMetricColors?

	// ObjC -> Swift bridged methods
	0x8e160  @objc MedicalRecordChartableSeries.init <stripped>
	0x8e1f0  @objc MedicalRecordChartableSeries..cxx_destruct <stripped>

	// Swift methods
	0x8d4c0  func <stripped> // getter 
	0x8d370  class func MedicalRecordChartableSeries.__allocating_init(concept:chartableQuantities:unit:preferredColors:) // init 
	0x8d750  func MedicalRecordChartableSeries.createDataSource(with:unit:) // method 
	0x8d830  func MedicalRecordChartableSeries.outOfRangeQuantitySets() // method 
	0x8dca0  func MedicalRecordChartableSeries.noRangeQuantitySets() // method 
 }

 struct HealthRecordsUI.UnboundedCache: Cache {

	// Properties
	let storageBox : Box<[A : B]>
	let lowMemoryWarnings : Any
	let didEnterBackground : Any
 }

 class HealthRecordsUI.SingleValueChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xa9c50  @objc SingleValueChartConfiguration.chartControllerClass <stripped>
	0xa9cc0  @objc SingleValueChartConfiguration.shouldShowOutOfRangeOverlay <stripped>
	0xa9cf0  @objc SingleValueChartConfiguration.dataTransformer <stripped>
	0xa9dc0  @objc SingleValueChartConfiguration.init <stripped>

	// Swift methods
	0xa9c90  func SingleValueChartConfiguration.chartControllerClass.getter // getter 
	0xa9ce0  func SingleValueChartConfiguration.shouldShowOutOfRangeOverlay.getter // getter 
	0xa9d20  func SingleValueChartConfiguration.dataTransformer.getter // getter 
 }

 class HealthRecordsUI.SettingsViewController : HKTableViewController /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var accounts : [HKClinicalAccount] // +0x8 (0x8)
	var appSourceModels : [HKSourceDataModel] // +0x10 (0x8)
	var sourceLoadingToken : WDCancellationToken? // +0x18 (0x8)
	var accountLoadingToken : WDCancellationToken? // +0x20 (0x8)
	let factory : ViewControllerFactory // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x1220f0  @objc SettingsViewController.numberOfSectionsInTableView: <stripped>
	0x122110  @objc SettingsViewController.tableView:numberOfRowsInSection: <stripped>
	0x122270  @objc SettingsViewController.tableView:titleForHeaderInSection: <stripped>
	0x122310  @objc SettingsViewController.tableView:titleForFooterInSection: <stripped>
	0x122ee0  @objc SettingsViewController.tableView:cellForRowAtIndexPath: <stripped>
	0x123080  @objc SettingsViewController.tableView:willDisplayCell:forRowAtIndexPath: <stripped>
	0x1232a0  @objc SettingsViewController.tableView:didEndDisplayingCell:forRowAtIndexPath: <stripped>
	0x100a20  @objc SettingsViewController.closeButtonTapped <stripped>
	0x100890  @objc SettingsViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0x100960  @objc SettingsViewController.tableView:shouldHighlightRowAtIndexPath: <stripped>
	0xaad20  @objc SettingsViewController.init <stripped>
	0xaae30  @objc SettingsViewController.dealloc <stripped>
	0xaba70  @objc SettingsViewController.viewDidLoad <stripped>
	0xabdd0  @objc SettingsViewController.viewDidAppear: <stripped>
	0xabe10  @objc SettingsViewController.tapToRadar: <stripped>
	0xacdb0  @objc SettingsViewController.healthRecordsStore:accountDidChange:changeType: <stripped>
	0xad170  @objc SettingsViewController.initWithUsingInsetStyling: <stripped>
	0xad2b0  @objc SettingsViewController.initWithStyle: <stripped>
	0xad4a0  @objc SettingsViewController.initWithNibName:bundle: <stripped>
	0xad560  @objc SettingsViewController.initWithCoder: <stripped>
	0xaaee0  @objc SettingsViewController..cxx_destruct <stripped>

	// Swift methods
	0xabea0  func SettingsViewController.accountStateDidChange(healthRecordsStore:account:changeType:) // method 
	0xace30  func SettingsViewController.providedHealthExperienceStore.getter // getter 
	0xace90  func SettingsViewController.providedHealthStore.getter // getter 
	0xacf00  func SettingsViewController.pushForAPIAuthorization(forSource:) // method 
 }

 class HealthRecordsUI.AccountErrorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let profile : HRProfile // +0x10 (0x8)
	let healthRecordsStore : HKHealthRecordsStore // +0x18 (0x8)

	// Swift methods
	0xb31f0  func AccountErrorManager.presentRelogin(for:from:completion:) // method 
	0xb39f0  func AccountErrorManager.presentRelogin(for:from:completion:) // method 
 }

 class HealthRecordsUI.BloodPressureChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xb4c40  @objc BloodPressureChartConfiguration.chartControllerClass <stripped>
	0xb4cb0  @objc BloodPressureChartConfiguration.shouldShowOutOfRangeOverlay <stripped>
	0xb4cd0  @objc BloodPressureChartConfiguration.dataTransformer <stripped>
	0xb4dc0  @objc BloodPressureChartConfiguration.init <stripped>

	// Swift methods
	0xb4c80  func BloodPressureChartConfiguration.chartControllerClass.getter // getter 
	0xb4cc0  func BloodPressureChartConfiguration.shouldShowOutOfRangeOverlay.getter // getter 
	0xb4d10  func BloodPressureChartConfiguration.dataTransformer.getter // getter 
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
	0xb5920  @objc FilterSettingsViewController.initWithDelegate:selectedCategories:selectedAccounts: <stripped>
	0xb5980  @objc FilterSettingsViewController.initWithCoder: <stripped>
	0xb6260  @objc FilterSettingsViewController.viewDidLoad <stripped>
	0xb62a0  @objc FilterSettingsViewController.numberOfSectionsInTableView: <stripped>
	0xb6420  @objc FilterSettingsViewController.tableView:viewForHeaderInSection: <stripped>
	0xb64a0  @objc FilterSettingsViewController.tableView:numberOfRowsInSection: <stripped>
	0xb7130  @objc FilterSettingsViewController.tableView:cellForRowAtIndexPath: <stripped>
	0xb72a0  @objc FilterSettingsViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0xb7370  @objc FilterSettingsViewController.tableView:heightForHeaderInSection: <stripped>
	0xb7390  @objc FilterSettingsViewController.tableView:heightForFooterInSection: <stripped>
	0xb7e00  @objc FilterSettingsViewController.doneButtonTapped <stripped>
	0xb7ea0  @objc FilterSettingsViewController.initWithUsingInsetStyling: <stripped>
	0xb7f30  @objc FilterSettingsViewController.initWithStyle: <stripped>
	0xb8000  @objc FilterSettingsViewController.initWithNibName:bundle: <stripped>
	0xb8080  @objc FilterSettingsViewController..cxx_destruct <stripped>

	// Swift methods
	0xb50d0  class func FilterSettingsViewController.__allocating_init(withDelegate:selectedCategories:selectedAccounts:) // init 
	0xb73a0  func <stripped> // method 
	0xb75e0  func <stripped> // method 
	0xb7820  func <stripped> // method 
	0xb7850  func <stripped> // method 
	0xb7a70  func <stripped> // method 
	0xb7a90  func <stripped> // method 
	0xb7c10  func <stripped> // method 
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
	0xbf920  class func CategoryCountDataProvider.__allocating_init(healthStore:) // init 
	0xbf9b0  func CategoryCountDataProvider.fetchCategoryCounts(categories:additionalPredicate:completion:) // method 
 }

 class HealthRecordsUI.AllergyRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_reactionFormatter : AllergyReactionFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xcb850  @objc AllergyRecordFormatter.init <stripped>
	0xcb8d0  @objc AllergyRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0xc9df0  func AllergyRecordFormatter.structuredItems(from:) // method 
	0xc9fa0  class func AllergyRecordFormatter.__allocating_init(store:context:) // init 
	0xca0a0  func AllergyRecordFormatter.displayItems(from:) // method 
	0xca100  func <stripped> // method 
	0xca5b0  func <stripped> // method 
	0xcb3b0  func <stripped> // method 
 }

 struct HealthRecordsUI.CategorySummaryFeedItemIdentifierFactory { }

 class HealthRecordsUI.MedicationOrderFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xcdf80  @objc MedicationOrderFormatter.init <stripped>
	0xce000  @objc MedicationOrderFormatter..cxx_destruct <stripped>

	// Swift methods
	0xccc00  func MedicationOrderFormatter.structuredItems(from:) // method 
	0xcd0c0  class func MedicationOrderFormatter.__allocating_init(store:context:) // init 
	0xcd1c0  func MedicationOrderFormatter.displayItems(from:) // method 
	0xcd220  func <stripped> // method 
	0xcd6d0  func <stripped> // method 
	0xcda90  func <stripped> // method 
	0xcdad0  func <stripped> // method 
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
	0xd53f0  @objc MedicationDosageFormatter.init <stripped>
	0xd5470  @objc MedicationDosageFormatter..cxx_destruct <stripped>

	// Swift methods
	0xd4bf0  func MedicationDosageFormatter.structuredItems(from:) // method 
	0xd4f50  func MedicationDosageFormatter.displayItems(from:) // method 
	0xd4b40  class func MedicationDosageFormatter.__allocating_init(store:context:) // init 
	0xd52b0  func MedicationDosageFormatter.displayItems(from:) // method 
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
	0xd6c90  @objc RecordCategoryViewController.initWithCoder: <stripped>
	0xd6d40  @objc RecordCategoryViewController.dealloc <stripped>
	0xd7180  @objc RecordCategoryViewController.viewDidLoad <stripped>
	0xd72c0  @objc RecordCategoryViewController.viewWillLayoutSubviews <stripped>
	0xd7440  @objc RecordCategoryViewController.modePickerDidChange: <stripped>
	0xd74c0  @objc RecordCategoryViewController.tapToRadar: <stripped>
	0xd8080  @objc RecordCategoryViewController.initWithNibName:bundle: <stripped>
	0xd6dc0  @objc RecordCategoryViewController..cxx_destruct <stripped>

	// Swift methods
	0xd72f0  func <stripped> // method 
	0xd7550  func <stripped> // method 
	0xd7660  func <stripped> // method 
	0xd7740  func <stripped> // method 
	0xd7d60  func <stripped> // method 
	0xd7ef0  func <stripped> // getter 
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
	0xda4f0  @objc NoDataViewController.initWithCoder: <stripped>
	0xda620  @objc NoDataViewController.loadView <stripped>
	0xda650  @objc NoDataViewController.initWithNibName:bundle: <stripped>

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
	0xdb3b0  func CancellationToken.isCancelled.getter // getter 
	0xdb3e0  func CancellationToken.cancelBlock.getter // getter 
	0xdb420  func CancellationToken.cancelBlock.setter // setter 
	0xdb460  func CancellationToken.cancelBlock.modify // modifyCoroutine 
	0xdb270  class func CancellationToken.__allocating_init(cancelBlock:) // init 
	0xdb770  func CancellationToken.cancel() // method 
 }

 class HealthRecordsUI.PromotionListViewController : FeedItemListViewController {
	// Swift methods
 }

 class HealthRecordsUI.PromotionListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
	var store : HealthExperienceStore

	// Swift methods
	0xdbc10  func PromotionListViewDataSourceProvider.store.getter // getter 
	0xdbc50  func PromotionListViewDataSourceProvider.store.setter // setter 
	0xdbca0  func PromotionListViewDataSourceProvider.store.modify // modifyCoroutine 
	0xdb8c0  class func PromotionListViewDataSourceProvider.__allocating_init(predicate:store:) // init 
	0xdbd20  func PromotionListViewDataSourceProvider.selectedDataSources(for:) // method 
	0xdbdb0  func PromotionListViewDataSourceProvider.makePromotionDataSource() // method 
 }

 class HealthRecordsUI.AccountErrorTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let accountErrorView : AccountErrorFeedItemView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xdc620  @objc AccountErrorTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xdc680  @objc AccountErrorTableViewCell.initWithCoder: <stripped>
	0xdcba0  @objc AccountErrorTableViewCell.layoutSubviews <stripped>
	0xdcc80  @objc AccountErrorTableViewCell.sizeThatFits: <stripped>
	0xdcec0  @objc AccountErrorTableViewCell.traitCollectionDidChange: <stripped>
	0xdd010  @objc AccountErrorTableViewCell.layoutMarginsDidChange <stripped>
	0xdd1d0  @objc AccountErrorTableViewCell.prepareForReuse <stripped>
	0xdd2c0  @objc AccountErrorTableViewCell.setHighlighted:animated: <stripped>
	0xdd360  @objc AccountErrorTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0xdc540  class func static AccountErrorTableViewCell.reuseIdentifier.getter // getter 
	0xdc750  func <stripped> // method 
 }

 class HealthRecordsUI.SuggestedActionTileViewControllerShim {
 class HealthRecordsUI.OnboardingSuggestedActionViewController {
 class HealthRecordsUI.BloodPressureCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
	0xdec80  @objc BloodPressureCurrentValueViewDataSource.initWithDateCache:displayCategoryController:healthStore:selectedRangeFormatter: <stripped>
	0xdedd0  @objc BloodPressureCurrentValueViewDataSource.init <stripped>
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
	0xe9d20  @objc MedicalRecordChartDataSource.displayName <stripped>
	0xea0a0  @objc MedicalRecordChartDataSource.initWithConcept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type: <stripped>
	0xea130  @objc MedicalRecordChartDataSource.cachedBlockForPath:context: <stripped>
	0xeaf60  @objc MedicalRecordChartDataSource.chartDisplayTypeWithVerticalAxis: <stripped>
	0xec430  @objc MedicalRecordChartDataSource.init <stripped>
	0xec4b0  @objc MedicalRecordChartDataSource..cxx_destruct <stripped>

	// Swift methods
	0xe9ae0  func MedicalRecordChartDataSource.unit.getter // getter 
	0xe9b60  func MedicalRecordChartDataSource.preferredColors.getter // getter 
	0xe9bc0  func MedicalRecordChartDataSource.chartableXRange.getter // getter 
	0xe9cc0  func MedicalRecordChartDataSource.chartableYRange.getter // getter 
	0xe9e00  func MedicalRecordChartDataSource.displayName.getter // getter 
	0xe9580  class func MedicalRecordChartDataSource.__allocating_init(concept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type:) // init 
	0xea1e0  func MedicalRecordChartDataSource.chartPoints(in:with:) // method 
	0xea720  func MedicalRecordChartDataSource.numberOfDataPoints(in:) // method 
	0xeaa20  func MedicalRecordChartDataSource.graphSeries(withMainColor:verticalAxis:) // method 
	0xead60  func MedicalRecordChartDataSource.chartDisplayType(verticalAxis:) // method 
	0xeafc0  func MedicalRecordChartDataSource.take(chartableCodedQuantitySets:) // method 
	0xeb670  func MedicalRecordChartDataSource.bucketQuantitySets(with:) // method 
 }

 class HealthRecordsUI.CategoryRecordQueryDescription : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SampleQueryDescription {

	// Properties
	let category : BrowseCategory // +0x45545f5f (0x0)
	let sampleQueryDescription : HKSampleQueryDescription // +0x0 (0x8)

	// Swift methods
	0xf1490  func CategoryRecordQueryDescription.sampleType.getter // getter 
	0xf14c0  func CategoryRecordQueryDescription.predicate.getter // getter 
	0xf1500  func CategoryRecordQueryDescription.hash(into:) // method 
	0xf15d0  func CategoryRecordQueryDescription.hashValue.getter // getter 
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
	0xf4050  @objc VaccinationRecordFormatter.init <stripped>
	0xf4130  @objc VaccinationRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0xf21e0  class func VaccinationRecordFormatter.__allocating_init(store:context:) // init 
	0xf22f0  func VaccinationRecordFormatter.displayItems(from:) // method 
	0xf2350  func <stripped> // method 
	0xf2840  func <stripped> // method 
	0xf36f0  func <stripped> // method 
	0xf3b40  func <stripped> // method 
	0xf3b80  func <stripped> // method 
 }

 class HealthRecordsUI.NotificationPolicy : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xf5140  @objc NotificationPolicy.userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler: <stripped>
	0xf5820  @objc NotificationPolicy.userNotificationCenter:willPresentNotification:withCompletionHandler: <stripped>
	0xf59b0  @objc NotificationPolicy.init <stripped>

	// Swift methods
	0xf4f30  func NotificationPolicy.userNotificationCenter(_:didReceive:withCompletionHandler:) // method 
	0xf51c0  func NotificationPolicy.userNotificationCenter(_:willPresent:withCompletionHandler:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartPoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let chartableSet : HKChartableCodedQuantitySet // +0x8 (0x8)
	let blockCoordinateInfo : SingleValueChartData // +0x10 (0x8)
	let sortedYValues : [Double] // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xf6d40  @objc MedicalRecordChartPoint.userInfo <stripped>
	0xf6e30  @objc MedicalRecordChartPoint.xValueAsGenericType <stripped>
	0xf7000  @objc MedicalRecordChartPoint.maxXValueAsGenericType <stripped>
	0xf7000  @objc MedicalRecordChartPoint.minXValueAsGenericType <stripped>
	0xf7150  @objc MedicalRecordChartPoint.yValue <stripped>
	0xf7250  @objc MedicalRecordChartPoint.yValueForKey: <stripped>
	0xf7470  @objc MedicalRecordChartPoint.allYValues <stripped>
	0xf7150  @objc MedicalRecordChartPoint.minYValue <stripped>
	0xf7540  @objc MedicalRecordChartPoint.maxYValue <stripped>
	0xf75c0  @objc MedicalRecordChartPoint.description <stripped>
	0xf7920  @objc MedicalRecordChartPoint.init <stripped>
	0xf79a0  @objc MedicalRecordChartPoint..cxx_destruct <stripped>

	// Swift methods
	0xf6870  class func MedicalRecordChartPoint.__allocating_init(chartableSet:unit:blockCoordinateInfo:) // init 
	0xf6d10  func MedicalRecordChartPoint.userInfo() // method 
	0xf6d70  func MedicalRecordChartPoint.xValueAsGenericType() // method 
	0xf6f40  func MedicalRecordChartPoint.maxXValueAsGenericType() // method 
	0xf8c70  func MedicalRecordChartPoint.minXValueAsGenericType() // method 
	0xf7110  func MedicalRecordChartPoint.yValue() // method 
	0xf71c0  func MedicalRecordChartPoint.yValue(forKey:) // method 
	0xf7300  func MedicalRecordChartPoint.allYValues() // method 
	0xf8c60  func MedicalRecordChartPoint.minYValue() // method 
	0xf74f0  func MedicalRecordChartPoint.maxYValue() // method 
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
	0xfb540  @objc LabelStackView.initWithCoder: <stripped>
	0xfbe40  @objc LabelStackView.layoutSubviews <stripped>
	0xfbe80  @objc LabelStackView.sizeThatFits: <stripped>
	0xfbf80  @objc LabelStackView.initWithFrame: <stripped>
	0xfc000  @objc LabelStackView..cxx_destruct <stripped>

	// Swift methods
	0xfb2a0  class func LabelStackView.__allocating_init(textStyle:) // init 
	0xfb5e0  func LabelStackView.addLabel(text:textColor:) // method 
	0xfb7a0  func LabelStackView.removeAll() // method 
 }

 class HealthRecordsUI.BrowseIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var iconCache : UnboundedCache<BrowseCategory, UnboundedCache<AccountIcon.Size, BrowseIcon>> // +0x10 (0x48)
	var placeholderCache : UnboundedCache<BrowseCategory, UnboundedCache<AccountIcon.Size, BrowseIcon>> // +0x58 (0x48)
	let accountIconProvider : AccountIconProvider // +0xa0 (0x8)

	// Swift methods
	0xfda80  class func BrowseIconProvider.__allocating_init(accountIconProvider:) // init 
	0xfdc70  func BrowseIconProvider.placeholder(for:size:) // method 
	0xfe140  func BrowseIconProvider.fetchIcon(for:size:queue:completion:) // method 
 }

 class HealthRecordsUI.OAuthViewControllerNotificationUserInfoKeys : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xffbe0  @objc OAuthViewControllerNotificationUserInfoKeys.init <stripped>
	0xffc80  @objc OAuthViewControllerNotificationUserInfoKeys..cxx_destruct <stripped>
 }

 class HealthRecordsUI.AllergyReactionFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x102c80  @objc AllergyReactionFormatter.displayItemsFromReaction: <stripped>
	0x103e80  @objc AllergyReactionFormatter.init <stripped>
	0x103f00  @objc AllergyReactionFormatter..cxx_destruct <stripped>

	// Swift methods
	0x100b50  func AllergyReactionFormatter.structuredItems(from:) // method 
	0x101bb0  func AllergyReactionFormatter.displayItems(from:) // method 
	0x102b50  class func AllergyReactionFormatter.__allocating_init(store:context:) // init 
	0x102c30  func AllergyReactionFormatter.displayItems(from:) // method 
	0x102d70  func <stripped> // method 
	0x102f50  func <stripped> // method 
	0x103930  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartData : HKInteractiveChartBloodPressureData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let date : Date // +0x0 (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x0 (0x8)
	let hasTime : Bool // +0x73635f5f (0x1)
	let partOfOutOfRangeSeries : Bool // +0x67 (0x1)

	// ObjC -> Swift bridged methods
	0x105950  @objc BloodPressureChartData.init <stripped>
	0x1059c0  @objc BloodPressureChartData..cxx_destruct <stripped>

	// Swift methods
	0x1056e0  class func BloodPressureChartData.__allocating_init(date:dateFormat:hasTime:systolicRange:diastolicRange:) // init 
 }

 class HealthRecordsUI.AccountTableViewCell : HRSourceTableViewCell {

	// Properties
	let brandView : WDMedicalRecordBrandView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x1071e0  @objc AccountTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x107230  @objc AccountTableViewCell.initWithCoder: <stripped>
	0x107450  @objc AccountTableViewCell.configureWithAccount:dataProvider: <stripped>
	0x1078b0  @objc AccountTableViewCell.prepareForReuse <stripped>
	0x107a90  @objc AccountTableViewCell.layoutSubviews <stripped>
	0x107b30  @objc AccountTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0x107330  func <stripped> // method 
	0x107440  func AccountTableViewCell.configureWithAccountDataProviderForObjC(_:_:) // method 
	0x1074c0  func <stripped> // method 
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
	0x10bcf0  @objc MedicalRecordChartOverlayContext.initWithTitle:dataSource:defaultColors:selectedColors:verticalAxis: <stripped>
	0x10be10  @objc MedicalRecordChartOverlayContext.contextItemForLastUpdate <stripped>
	0x10c120  @objc MedicalRecordChartOverlayContext.updateContextItemForDateInterval:timeScope:completion: <stripped>
	0x10c250  @objc MedicalRecordChartOverlayContext.sampleTypeForDateRangeUpdates <stripped>
	0x10c2f0  @objc MedicalRecordChartOverlayContext.overlayDisplayTypeForTimeScope: <stripped>
	0x10c380  @objc MedicalRecordChartOverlayContext.init <stripped>
	0x10c400  @objc MedicalRecordChartOverlayContext..cxx_destruct <stripped>

	// Swift methods
	0x10baa0  class func MedicalRecordChartOverlayContext.__allocating_init(title:dataSource:defaultColors:selectedColors:verticalAxis:) // init 
	0x10bd80  func MedicalRecordChartOverlayContext.contextItemForLastUpdate() // method 
	0x10be50  func MedicalRecordChartOverlayContext.updateItem(for:timeScope:completion:) // method 
	0x10c1f0  func MedicalRecordChartOverlayContext.sampleTypeForDateRangeUpdates() // method 
	0x10c2e0  func MedicalRecordChartOverlayContext.overlayDisplayType(for:) // method 
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
	0x10d270  @objc AccountStateChangeListener.healthRecordsStore:accountDidChange:changeType: <stripped>
	0x10d340  @objc AccountStateChangeListener.init <stripped>
	0x10d5f0  @objc AccountStateChangeListener..cxx_destruct <stripped>

	// Swift methods
	0x10ce90  class func AccountStateChangeListener.__allocating_init(handler:) // init 
	0x10cf90  func AccountStateChangeListener.accountStateDidChange(healthRecordsStore:account:changeType:) // method 
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
	0x110fd0  func CountFormatter.style.getter // getter 
	0x111040  func CountFormatter.style.setter // setter 
	0x111070  func CountFormatter.style.modify // modifyCoroutine 
	0x111140  class func CountFormatter.__allocating_init(style:) // init 
	0x111200  func CountFormatter.string(for:) // method 
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
	0x112750  @objc DiagnosticTestReportFormatter.init <stripped>
	0x112830  @objc DiagnosticTestReportFormatter..cxx_destruct <stripped>

	// Swift methods
	0x111e80  class func DiagnosticTestReportFormatter.__allocating_init(store:context:) // init 
	0x111f90  func DiagnosticTestReportFormatter.displayItems(from:) // method 
	0x111ff0  func <stripped> // method 
	0x112520  func <stripped> // method 
 }

 class HealthRecordsUI.AccountIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monogramProvider : MonogramProvider // +0x10 (0x8)
	var brandImageManager : HKBrandImageManager // +0x18 (0x8)
	var iconCache : UnboundedCache<UUID, UnboundedCache<AccountIcon.Size, AccountIcon>> // +0x20 (0x48)

	// Swift methods
	0x113020  class func AccountIconProvider.__allocating_init(brandImageManager:monogramProvider:) // init 
	0x113180  func AccountIconProvider.placeholder(forTitle:size:) // method 
	0x113f90  func AccountIconProvider.fetchIcon(forAccount:size:completion:) // method 
	0x114610  func AccountIconProvider.fetchIcon(for:size:queue:completion:) // method 
 }

 class HealthRecordsUI.ContentStatusCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let spinner : UIActivityIndicatorView // +0x8 (0x8)
	let titleLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x116960  @objc ContentStatusCell.spinner <stripped>
	0x1169a0  @objc ContentStatusCell.titleLabel <stripped>
	0x116bc0  @objc ContentStatusCell.init <stripped>
	0x116be0  @objc ContentStatusCell.initWithCoder: <stripped>
	0x117100  @objc ContentStatusCell.initWithStyle:reuseIdentifier: <stripped>
	0x117180  @objc ContentStatusCell..cxx_destruct <stripped>

	// Swift methods
	0x116c00  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartSeries : HKGraphSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var selectedStrokeStyle : HKStrokeStyle?
	var unselectedStrokeStyle : HKStrokeStyle?

	// ObjC -> Swift bridged methods
	0x117580  @objc MedicalRecordChartSeries.selectedPathRange <stripped>
	0x1177d0  @objc MedicalRecordChartSeries.coordinatesForBlock:blockPath:xAxis:yAxis: <stripped>
	0x118060  @objc MedicalRecordChartSeries.drawSeriesWithBlockCoordinates:axisRect:zoomLevelConfiguration:pointTransform:renderContext:secondaryRenderContext: <stripped>
	0x118170  @objc MedicalRecordChartSeries.supportsMultiTouchSelection <stripped>
	0x1181a0  @objc MedicalRecordChartSeries.blockCoordinateIsVisibleInsideOfChartRect:blockCoordinate: <stripped>
	0x118240  @objc MedicalRecordChartSeries.distanceFromPoint:blockCoordinate:chartRect: <stripped>
	0x1182b0  @objc MedicalRecordChartSeries.xAxisDistanceFromPoint:blockCoordinate:chartRect: <stripped>
	0x118320  @objc MedicalRecordChartSeries.yAxisDifferenceToPoint:blockCoordinate:chartRect: <stripped>
	0x1183f0  @objc MedicalRecordChartSeries.init <stripped>
	0x118480  @objc MedicalRecordChartSeries..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordChartCoordinate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let pointValuesAscending : [CGPoint]
	let blockCoordinateInfo : HKGraphSeriesBlockCoordinateInfo

	// ObjC -> Swift bridged methods
	0x118820  @objc MedicalRecordChartCoordinate.startXValue <stripped>
	0x118880  @objc MedicalRecordChartCoordinate.endXValue <stripped>
	0x1188e0  @objc MedicalRecordChartCoordinate.userInfo <stripped>
	0x118920  @objc MedicalRecordChartCoordinate.copyWithTransform:roundToViewScale: <stripped>
	0x1189c0  @objc MedicalRecordChartCoordinate.init <stripped>
	0x118a50  @objc MedicalRecordChartCoordinate..cxx_destruct <stripped>

	// Swift methods
	0x117780  class func MedicalRecordChartCoordinate.__allocating_init(sortedPointValues:blockCoordinateInfo:) // init 
	0x118720  func MedicalRecordChartCoordinate.xValue.getter // getter 
	0x118750  func MedicalRecordChartCoordinate.minPoint.getter // getter 
	0x118780  func MedicalRecordChartCoordinate.maxPoint.getter // getter 
	0x1187c0  func MedicalRecordChartCoordinate.distance(from:) // method 
	0x118850  func MedicalRecordChartCoordinate.startXValue.getter // getter 
	0x1188b0  func MedicalRecordChartCoordinate.endXValue.getter // getter 
	0x11bad0  func MedicalRecordChartCoordinate.userInfo.getter // getter 
	0x118910  func MedicalRecordChartCoordinate.copy(with:roundToViewScale:) // method 
 }

 class HealthRecordsUI.ContentStatusView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let subtitleLabel : UILabel // +0x10 (0x8)
	let spinnerView : UIActivityIndicatorView // +0x18 (0x8)
	var title : String? // +0x20 (0x10)
	var subtitle : String? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x11bae0  @objc ContentStatusView.title <stripped>
	0x11bb20  @objc ContentStatusView.setTitle: <stripped>
	0x11bbf0  @objc ContentStatusView.subtitle <stripped>
	0x11bcf0  @objc ContentStatusView.setSubtitle: <stripped>
	0x11c190  @objc ContentStatusView.initWithTitle:subtitle: <stripped>
	0x11c260  @objc ContentStatusView.initWithCoder: <stripped>
	0x11c510  @objc ContentStatusView.initWithFrame: <stripped>
	0x11c810  @objc ContentStatusView.startAnimating <stripped>
	0x11c880  @objc ContentStatusView.stopAnimating <stripped>
	0x11ca70  @objc ContentStatusView.traitCollectionDidChange: <stripped>
	0x11d0a0  @objc ContentStatusView.layoutSubviews <stripped>
	0x11d260  @objc ContentStatusView..cxx_destruct <stripped>

	// Swift methods
	0x11bb00  func ContentStatusView.title.getter // getter 
	0x11bb40  func ContentStatusView.title.setter // setter 
	0x11bb70  func ContentStatusView.title.modify // modifyCoroutine 
	0x11bc80  func ContentStatusView.subtitle.getter // getter 
	0x11bd90  func ContentStatusView.subtitle.setter // setter 
	0x11bdc0  func ContentStatusView.subtitle.modify // modifyCoroutine 
	0x11bec0  class func ContentStatusView.__allocating_init(title:subtitle:) // init 
	0x11c540  func <stripped> // method 
	0x11c7f0  func ContentStatusView.startAnimating() // method 
	0x11c830  func ContentStatusView.stopAnimating() // method 
	0x11d0d0  func <stripped> // method 
 }

 class HealthRecordsUI.MedicationRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x11efe0  @objc MedicationRecordFormatter.init <stripped>
	0x11f060  @objc MedicationRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x11d5d0  func MedicationRecordFormatter.structuredItems(from:) // method 
	0x11da90  class func MedicationRecordFormatter.__allocating_init(store:context:) // init 
	0x11db90  func MedicationRecordFormatter.displayItems(from:) // method 
	0x11dbf0  func <stripped> // method 
	0x11e150  func <stripped> // method 
	0x11e700  func <stripped> // method 
	0x11eb50  func <stripped> // method 
 }

 class HealthRecordsUI.ClinicalOnboardingManager : WDClinicalOnboardingManager {
	// ObjC -> Swift bridged methods
	0x11fa80  @objc ClinicalOnboardingManager.initWithProfile: <stripped>
 }

 class HealthRecordsUI.ConceptTitleTableHeaderView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let fontChoices : [UIFont] // +0x10 (0x8)
	var widthCache : CGFloat // +0x18 (0x8)
	var titleCache : NSString // +0x20 (0x8)
	var bottomExtraSpace : CGFloat // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x11fb30  @objc ConceptTitleTableHeaderView.bottomExtraSpace <stripped>
	0x11fba0  @objc ConceptTitleTableHeaderView.setBottomExtraSpace: <stripped>
	0x11fc80  @objc ConceptTitleTableHeaderView.title <stripped>
	0x11fdd0  @objc ConceptTitleTableHeaderView.setTitle: <stripped>
	0x120520  @objc ConceptTitleTableHeaderView.initWithFrame: <stripped>
	0x120550  @objc ConceptTitleTableHeaderView.initWithCoder: <stripped>
	0x120990  @objc ConceptTitleTableHeaderView.layoutSubviews <stripped>
	0x1209d0  @objc ConceptTitleTableHeaderView.sizeThatFits: <stripped>
	0x1211b0  @objc ConceptTitleTableHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x11fb70  func ConceptTitleTableHeaderView.bottomExtraSpace.getter // getter 
	0x11fbf0  func ConceptTitleTableHeaderView.bottomExtraSpace.setter // setter 
	0x11fc30  func ConceptTitleTableHeaderView.bottomExtraSpace.modify // modifyCoroutine 
	0x11fea0  func ConceptTitleTableHeaderView.title.setter // setter 
	0x11ff30  func ConceptTitleTableHeaderView.title.modify // modifyCoroutine 
	0x11fd40  func ConceptTitleTableHeaderView.title.getter // getter 
	0x120570  func <stripped> // method 
	0x120a20  func <stripped> // method 
 }

 class HealthRecordsUI.WeakNotificationObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let scheduler : TaskScheduler // +0x8 (0x28)
	let block : (_:) // +0x30 (0x10)
	var center : weak NSNotificationCenter? // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x121a50  @objc WeakNotificationObserver.dealloc <stripped>
	0x121b80  @objc WeakNotificationObserver.didReceiveWithNotification: <stripped>
	0x121d30  @objc WeakNotificationObserver.init <stripped>
	0x121af0  @objc WeakNotificationObserver..cxx_destruct <stripped>

	// Swift methods
	0x121770  class func WeakNotificationObserver.__allocating_init(forName:object:scheduler:center:block:) // init 
	0x121b30  func WeakNotificationObserver.invalidate() // method 
 }

 class HealthRecordsUI.MedicalRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x1245a0  @objc MedicalRecordFormatter.structuredItemsFromRecord: <stripped>
	0x125320  @objc MedicalRecordFormatter.initWithConceptStore:context: <stripped>
	0x125ac0  @objc MedicalRecordFormatter.displayItemsFromRecord: <stripped>
	0x125bb0  @objc MedicalRecordFormatter.init <stripped>
	0x125c30  @objc MedicalRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x124130  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124660  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124720  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x1247e0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x1248a0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x124960  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124a60  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124b50  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124c40  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124d20  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124e20  func MedicalRecordFormatter.displayItems(from:) // method 
	0x124f20  func MedicalRecordFormatter.displayItems(from:) // method 
	0x125020  func MedicalRecordFormatter.displayItems(from:) // method 
	0x125110  func MedicalRecordFormatter.displayItems(from:) // method 
	0x125240  class func MedicalRecordFormatter.__allocating_init(store:context:) // init 
	0x125390  func MedicalRecordFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.ViewControllerFactory : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let profile : HRProfile // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x1269b0  @objc ViewControllerFactory.profile <stripped>
	0x126d30  @objc ViewControllerFactory.makeSettingsViewController <stripped>
	0x127210  @objc ViewControllerFactory.makeViewControllerForConcept:highlightedRecordId: <stripped>
	0x127710  @objc ViewControllerFactory.makeViewControllerForRecord: <stripped>
	0x127770  @objc ViewControllerFactory.makeDetailViewControllerForRecord: <stripped>
	0x127810  @objc ViewControllerFactory.init <stripped>
	0x127890  @objc ViewControllerFactory..cxx_destruct <stripped>

	// Swift methods
	0x1269d0  func ViewControllerFactory.makeViewController(forAccount:) // method 
	0x126ac0  func ViewControllerFactory.makeAndPresentAddAccountViewController(from:animated:completion:) // method 
	0x126ad0  func ViewControllerFactory.makeDetailViewController(forAccount:) // method 
	0x126be0  func ViewControllerFactory.makeDetailViewController(for:) // method 
	0x126c20  func ViewControllerFactory.makeLearnMoreViewController() // method 
	0x126c90  func ViewControllerFactory.makeSettingsViewController() // method 
	0x126e00  func ViewControllerFactory.makeViewController(for:) // method 
	0x1270e0  func ViewControllerFactory.makeViewController(for:highlightedRecord:) // method 
	0x1272e0  func ViewControllerFactory.makeViewController(forConcept:highlightedRecord:) // method 
	0x1274d0  func ViewControllerFactory.makeViewController(for:) // method 
	0x127730  func ViewControllerFactory.makeDetailViewController(for:) // method 
 }

 class HealthRecordsUI.MedicalRecordAnnotationViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dateGroup : UIStackView // +0x8 (0x8)
	let monthYearLabel : UILabel // +0x10 (0x8)
	let timeLabel : UILabel // +0x18 (0x8)
	let dividerLabel : UILabel // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x129200  @objc MedicalRecordAnnotationViewDataSource.init <stripped>
	0x129220  @objc MedicalRecordAnnotationViewDataSource.numberOfValuesForAnnotationView: <stripped>
	0x129260  @objc MedicalRecordAnnotationViewDataSource.valueViewForColumnAtIndex:orientation: <stripped>
	0x129290  @objc MedicalRecordAnnotationViewDataSource.showSeparators <stripped>
	0x1292a0  @objc MedicalRecordAnnotationViewDataSource.dateViewWithOrientation: <stripped>
	0x129300  @objc MedicalRecordAnnotationViewDataSource.leftMarginViewWithOrientation: <stripped>
	0x129360  @objc MedicalRecordAnnotationViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0x1283c0  func MedicalRecordAnnotationViewDataSource.numberOfValues(for:) // method 
	0x129230  func MedicalRecordAnnotationViewDataSource.valueViewForColumn(at:orientation:) // method 
	0x1283d0  func MedicalRecordAnnotationViewDataSource.showSeparators() // method 
	0x1283e0  func MedicalRecordAnnotationViewDataSource.dateView(with:) // method 
	0x128410  func MedicalRecordAnnotationViewDataSource.leftMarginView(with:) // method 
	0x128420  func MedicalRecordAnnotationViewDataSource.updateDateGroup(using:) // method 
	0x128720  func MedicalRecordAnnotationViewDataSource.updateDateGroup(using:timeScope:) // method 
	0x128a80  func MedicalRecordAnnotationViewDataSource.applyOrientation(_:to:) // method 
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
	0x131300  @objc BloodPressureDataTransformer.chartPointFor:in:with:dataSourceType: <stripped>
	0x131410  @objc BloodPressureDataTransformer.graphSeriesWith: <stripped>
	0x1314f0  @objc BloodPressureDataTransformer.chartDisplayTypeWith:displayName:unitName: <stripped>

	// Swift methods
	0x130510  func BloodPressureDataTransformer.createUserInfo(date:timeScope:systole:diastole:) // method 
	0x130bb0  func BloodPressureDataTransformer.chartPoint(for:in:with:dataSourceType:) // method 
	0x131380  func BloodPressureDataTransformer.graphSeries(with:) // method 
	0x1314e0  func BloodPressureDataTransformer.chartDisplayType(with:displayName:unitName:) // method 
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
	0x133a70  @objc IconTextListView.initWithCoder: <stripped>
	0x1344e0  @objc IconTextListView.layoutSubviews <stripped>
	0x134520  @objc IconTextListView.sizeThatFits: <stripped>
	0x134860  @objc IconTextListView.traitCollectionDidChange: <stripped>
	0x134960  @objc IconTextListView.initWithFrame: <stripped>
	0x1349e0  @objc IconTextListView..cxx_destruct <stripped>

	// Swift methods
	0x133710  class func IconTextListView.__allocating_init(textStyle:iconSize:interItemSpacingHorizontal:interItemSpacingVertical:hidesIconsForAccessibilityTextSizes:) // init 
	0x133af0  func IconTextListView.addItem(icon:text:textColor:) // method 
	0x133b00  func IconTextListView.removeAll() // method 
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
	0x1367e0  @objc StandardTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x136870  @objc StandardTableViewCell.initWithCoder: <stripped>

	// Swift methods
	0x1366f0  class func static StandardTableViewCell.reuseIdentifier.getter // getter 
 }

 class HealthRecordsUI.NoAppTableViewCell : HRStandardTableViewCell {
	// ObjC -> Swift bridged methods
	0x136910  @objc NoAppTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x1369f0  @objc NoAppTableViewCell.initWithCoder: <stripped>
 }

 class HealthRecordsUI.SourceTableViewCell : HRStandardTableViewCell {

	// Properties
	var sourceModel : HKSourceDataModel?

	// ObjC -> Swift bridged methods
	0x137280  @objc SourceTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x137410  @objc SourceTableViewCell.initWithCoder: <stripped>
	0x137570  @objc SourceTableViewCell..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordUnitCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var units : [HKUnit : NSCountedSet] // +0x10 (0x8)

	// Swift methods
	0x137ef0  func MedicalRecordUnitCollector.add(units:) // method 
	0x138710  func MedicalRecordUnitCollector.preferredUnit() // method 
 }

 class HealthRecordsUI.BloodPressureFormatter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit? // +0x10 (0x8)

	// Swift methods
	0x13cb00  func BloodPressureFormatter.rawUnitString.getter // getter 
	0x13cbe0  func BloodPressureFormatter.niceUnitString.getter // getter 
	0x13cd50  func BloodPressureFormatter.valueString(for:diastolicRange:) // method 
 }

 class HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var lastCachedNumberOfChartPoints : Int? // +0x8 (0x9)

	// ObjC -> Swift bridged methods
	0x13d5b0  @objc SingleValueCurrentValueViewDataSource.attributedTitleStringForCurrentValueView: <stripped>
	0x13dd70  @objc SingleValueCurrentValueViewDataSource.updateDataSourceWithGraphView:displayType:timeScope: <stripped>
	0x13df20  @objc SingleValueCurrentValueViewDataSource.initWithDateCache:displayCategoryController:healthStore:selectedRangeFormatter: <stripped>
	0x13e090  @objc SingleValueCurrentValueViewDataSource.init <stripped>

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
	0x143740  @objc HealthRecordsMigrator.migrateIfNeededWithCompletion: <stripped>
	0x1440c0  @objc HealthRecordsMigrator.init <stripped>
	0x144140  @objc HealthRecordsMigrator..cxx_destruct <stripped>

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
	0x1447e0  func ConceptListViewDataSourceProvider.store.getter // getter 
	0x144820  func ConceptListViewDataSourceProvider.store.setter // setter 
	0x144870  func ConceptListViewDataSourceProvider.store.modify // modifyCoroutine 
	0x144640  class func ConceptListViewDataSourceProvider.__allocating_init(categoryPredicate:store:) // init 
	0x144960  func ConceptListViewDataSourceProvider.selectedDataSources(for:) // method 
	0x144a20  func <stripped> // method 
	0x145160  func ConceptListViewDataSourceProvider.makePromotionDataSource() // method 
 }

 class HealthRecordsUI.MedicationDispenseFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter? // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x146c60  @objc MedicationDispenseFormatter.init <stripped>
	0x146ce0  @objc MedicationDispenseFormatter..cxx_destruct <stripped>

	// Swift methods
	0x1461c0  func MedicationDispenseFormatter.structuredItems(from:) // method 
	0x146100  class func MedicationDispenseFormatter.__allocating_init(store:context:) // init 
	0x1466f0  func MedicationDispenseFormatter.displayItems(from:) // method 
	0x146750  func <stripped> // method 
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
	0x14d790  @objc ConceptHeaderCell.headerImage <stripped>
	0x14d7d0  @objc ConceptHeaderCell.setHeaderImage: <stripped>
	0x14d8b0  @objc ConceptHeaderCell.title <stripped>
	0x14d970  @objc ConceptHeaderCell.setTitle: <stripped>
	0x14dac0  @objc ConceptHeaderCell.categoryColor <stripped>
	0x14db80  @objc ConceptHeaderCell.setCategoryColor: <stripped>
	0x14dff0  @objc ConceptHeaderCell.setupSubviews <stripped>
	0x14e500  @objc ConceptHeaderCell.setUpConstraints <stripped>
	0x14e5d0  @objc ConceptHeaderCell._updateForCurrentSizeCategory <stripped>
	0x14e780  @objc ConceptHeaderCell.traitCollectionDidChange: <stripped>
	0x14ef90  @objc ConceptHeaderCell.initWithStyle:reuseIdentifier: <stripped>
	0x14f060  @objc ConceptHeaderCell.initWithCoder: <stripped>
	0x14f0f0  @objc ConceptHeaderCell..cxx_destruct <stripped>

	// Swift methods
	0x14d7b0  func ConceptHeaderCell.headerImage.getter // getter 
	0x14d7f0  func ConceptHeaderCell.headerImage.setter // setter 
	0x14d830  func ConceptHeaderCell.headerImage.modify // modifyCoroutine 
	0x14d920  func ConceptHeaderCell.title.getter // getter 
	0x14d9d0  func ConceptHeaderCell.title.setter // setter 
	0x14da00  func ConceptHeaderCell.title.modify // modifyCoroutine 
	0x14db20  func ConceptHeaderCell.categoryColor.getter // getter 
	0x14dc10  func ConceptHeaderCell.categoryColor.setter // setter 
	0x14dc50  func ConceptHeaderCell.categoryColor.modify // modifyCoroutine 
	0x14e7d0  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartSeries : HKBloodPressureSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
	0x14fc60  @objc BloodPressureChartSeries.selectedPathRange <stripped>
	0x14fef0  @objc BloodPressureChartSeries.init <stripped>
 }

 class HealthRecordsUI.ProfileOnboardingActionViewController {
 class HealthRecordsUI.OnboardingTableViewCell : type metadata for ChromeHostViewTableCell /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {
	// ObjC -> Swift bridged methods
	0x1507f0  @objc OnboardingTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x150850  @objc OnboardingTableViewCell.initWithCoder: <stripped>

	// Swift methods
 }

 class HealthRecordsUI.RecordKindDataProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RecordKindDataProviderProtocol {

	// Properties
	let healthStore : HKHealthStore // +0x10 (0x8)
	let queue : OS_dispatch_queue // +0x18 (0x8)

	// Swift methods
	0x151240  class func RecordKindDataProvider.__allocating_init(healthStore:) // init 
	0x1514f0  func RecordKindDataProvider.fetchRecordKinds(completion:) // method 
	0x151dc0  func RecordKindDataProvider.fetchRecordKinds(in:completion:) // method 
	0x152e90  func RecordKindDataProvider.addObserver(following:handler:) // method 
 }

 class HealthRecordsUI.CategoryViewControllerManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var activeCategoryViewController : weak UIViewController? // +0x10 (0x8)

	// Swift methods
	0x155be0  func CategoryViewControllerManager.isCategoryViewControllerOnTop() // method 
	0x156380  func CategoryViewControllerManager.hasActiveCategoryViewController() // method 
 }

 class HealthRecordsUI.Features : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x1565a0  @objc Features.init <stripped>
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
	0x157bd0  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
	0x157c80  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
	0x157c90  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
 }

 struct HealthRecordsUI.RecordKindFeedItemIdentifierFactory { }

 class HealthRecordsUI.RecordPrimaryTitleCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let recordTitleLabel : UILabel
	let recordDateLabel : UILabel

	// ObjC -> Swift bridged methods
	0x1594c0  @objc RecordPrimaryTitleCell.recordTitleLabel <stripped>
	0x159500  @objc RecordPrimaryTitleCell.recordDateLabel <stripped>
	0x159580  @objc RecordPrimaryTitleCell.initWithStyle:reuseIdentifier: <stripped>
	0x1595a0  @objc RecordPrimaryTitleCell.initWithCoder: <stripped>
	0x159d40  @objc RecordPrimaryTitleCell..cxx_destruct <stripped>

	// Swift methods
	0x1595e0  func <stripped> // method 
 }

 class HealthRecordsUI.RecordDetailItemCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let bodyLabel : UILabel

	// ObjC -> Swift bridged methods
	0x159df0  @objc RecordDetailItemCell.titleLabel <stripped>
	0x159e30  @objc RecordDetailItemCell.bodyLabel <stripped>
	0x159eb0  @objc RecordDetailItemCell.initWithStyle:reuseIdentifier: <stripped>
	0x159f30  @objc RecordDetailItemCell.initWithCoder: <stripped>
	0x15a6d0  @objc RecordDetailItemCell..cxx_destruct <stripped>

	// Swift methods
	0x159f70  func <stripped> // method 
 }

 class HealthRecordsUI.RecordReferenceRangeCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let referenceRangeView : HKReferenceRangeView // +0x8 (0x8)
	var valueInRange : HKInspectableValueInRange? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x15a780  @objc RecordReferenceRangeCell.valueInRange <stripped>
	0x15a810  @objc RecordReferenceRangeCell.setValueInRange: <stripped>
	0x15a980  @objc RecordReferenceRangeCell.initWithStyle:reuseIdentifier: <stripped>
	0x15a9a0  @objc RecordReferenceRangeCell.initWithCoder: <stripped>
	0x15aa40  @objc RecordReferenceRangeCell..cxx_destruct <stripped>

	// Swift methods
	0x15a7d0  func RecordReferenceRangeCell.valueInRange.getter // getter 
	0x15a860  func RecordReferenceRangeCell.valueInRange.setter // setter 
	0x15a880  func RecordReferenceRangeCell.valueInRange.modify // modifyCoroutine 
 }

 class HealthRecordsUI.RecordDataSourceCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let brandView : WDMedicalRecordBrandView

	// ObjC -> Swift bridged methods
	0x15aba0  @objc RecordDataSourceCell.initWithStyle:reuseIdentifier: <stripped>
	0x15abc0  @objc RecordDataSourceCell.initWithCoder: <stripped>
	0x15ae00  @objc RecordDataSourceCell.configCellWith:owner:dataProvider: <stripped>
	0x15aef0  @objc RecordDataSourceCell..cxx_destruct <stripped>

	// Swift methods
	0x15aca0  func RecordDataSourceCell.configCell(with:owner:dataProvider:) // method 
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
	0x160320  @objc ProcedureRecordFormatter.init <stripped>
	0x160400  @objc ProcedureRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x15df00  class func ProcedureRecordFormatter.__allocating_init(store:context:) // init 
	0x15e050  func ProcedureRecordFormatter.displayItems(from:) // method 
	0x15e0b0  func <stripped> // method 
	0x15e570  func <stripped> // method 
	0x15f390  func <stripped> // method 
	0x15f3d0  func <stripped> // method 
	0x15f830  func <stripped> // method 
	0x15fb60  func <stripped> // method 
	0x15fe90  func <stripped> // method 
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
