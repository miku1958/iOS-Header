 protocol HealthRecordsUI.CategoryProvider // 3 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// getter
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
 protocol HealthRecordsUI.StatusProvider // 3 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// getter
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
 protocol HealthRecordsUI.MedicalRecordFormatterProtocol // 7 requirements
 {
	// class base protocol
	// class base protocol
	// class associated type access function
	// getter
	// getter
	// class init
	// method
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
 protocol HealthRecordsUI.BodySiteProvider // 1 requirements
 {
	// getter
 }
 protocol HealthRecordsUI.BodySitesProvider // 1 requirements
 {
	// getter
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ÿ+
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ÿ+
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : ÿ+
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ÿ+
 }

 struct __C.TextStyle {

	// Properties
	var _rawValue : NSString
 }

 enum __C.HKTimeScope { }

 enum __C.HKDateFormatUtilitiesDateTemplate { }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 enum __C.WDMedicalRecordCategoryType { }

 struct __C.UNNotificationPresentationOptions {

	// Properties
	let rawValue : UInt
 }

 enum __C.HKClinicalAccountState { }

 enum __C.HKClinicalAccountStateChangeType { }

 struct __C.HKBrandImageManagerFetchOptions {

	// Properties
	let rawValue : UInt
 }

 struct __C.OpenExternalURLOptionsKey {

	// Properties
	var _rawValue : NSString
 }

 class __C.CGContext {
 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }

 struct __C.UILayoutPriority {

	// Properties
	let rawValue : Float
 }

 struct HealthRecordsUI.CategoryRecordKind {

	// Properties
	let categoryKind : Kind
WARNING: couldn't find address 0x0 (0x0) in binary!
	let conceptId : Í4
	let title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let meaningfulDate : k+
 }

 class HealthRecordsUI.SingleValueAnnotationViewDataSource : MedicalRecordAnnotationViewDataSource {

	// Properties
	let referenceRangeView : HKReferenceRangeView // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x655e0  @objc SingleValueAnnotationViewDataSource.init <stripped>
	0x65630  @objc SingleValueAnnotationViewDataSource.valueViewForColumnAtIndex:orientation: <stripped>
	0x656b0  @objc SingleValueAnnotationViewDataSource.updateUsing: <stripped>
	0x66190  @objc SingleValueAnnotationViewDataSource.updateUsing:valueRange:dateRange:timeScope: <stripped>
	0x668a0  @objc SingleValueAnnotationViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0x65660  func SingleValueAnnotationViewDataSource.update(using:) // method 
	0x65720  func SingleValueAnnotationViewDataSource.updateReferenceRange(using:) // method 
	0x65ef0  func SingleValueAnnotationViewDataSource.update(using:valueRange:dateRange:timeScope:) // method 
	0x66280  func SingleValueAnnotationViewDataSource.updateValue(using:) // method 
 }

 class HealthRecordsUI.SingleValueChartData : HKInteractiveChartSinglePointData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let chartableQuantitySet : HKChartableCodedQuantitySet // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : )) // +0xfeedfacf (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x3 (0x8)
	let hasTime : Bool // +0x4d (0x1)
	let partOfOutOfRangeSeries : Bool // +0x6100085 (0x1)

	// ObjC -> Swift bridged methods
	0x67ab0  @objc SingleValueChartData.init <stripped>
	0x67a20  @objc SingleValueChartData..cxx_destruct <stripped>

	// Swift methods
	0x67960  class func SingleValueChartData.__allocating_init(chartableQuantitySet:date:dateFormat:hasTime:partOfOutOfRangeSeries:) // init 
 }

 class HealthRecordsUI.LoadingTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containerView : UIView // +0x8 (0x8)
	let spinner : UIActivityIndicatorView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x68280  @objc LoadingTableViewCell.init <stripped>
	0x68390  @objc LoadingTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x68460  @objc LoadingTableViewCell.initWithCoder: <stripped>
	0x68ba0  @objc LoadingTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0x681d0  class func static LoadingTableViewCell.reuseIdentifier.getter // getter 
	0x684a0  func LoadingTableViewCell.willDisplay() // method 
	0x684c0  func LoadingTableViewCell.didEndDisplaying() // method 
	0x684e0  func <stripped> // method 
 }

 class HealthRecordsUI.Box {
 enum HealthRecordsUI.IconStyle {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case opaque : ý(
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	case custom : S'
	case small  
	case medium  
	case large  
 }

 struct HealthRecordsUI.AccountErrorFeedItemViewData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let accountId : g&
	let title : String
	let subtitle : String
 }

 class HealthRecordsUI.TapToRadarManager : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x6ebe0  @objc TapToRadarManager.init <stripped>
 }

 struct HealthRecordsUI.SyncTaskScheduler: TaskScheduler { }

 class HealthRecordsUI.DiagnosticTestResultFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x6f960  @objc DiagnosticTestResultFormatter.init <stripped>
	0x6f8f0  @objc DiagnosticTestResultFormatter..cxx_destruct <stripped>

	// Swift methods
	0x6f7a0  class func DiagnosticTestResultFormatter.__allocating_init(store:context:) // init 
	0x6f870  func DiagnosticTestResultFormatter.displayItems(from:) // method 
 }

 struct HealthRecordsUI.AccountViewData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let accountId : g&
	let title : String
	let subtitle : String?
 }

 class HealthRecordsUI.AccountView {
 class HealthRecordsUI.ClinicalSourcesDataProvider : WDClinicalSourcesDataProvider {
	// ObjC -> Swift bridged methods
	0x727b0  @objc ClinicalSourcesDataProvider.initWithHealthRecordsStore: <stripped>
	0x72750  @objc ClinicalSourcesDataProvider..cxx_destruct <stripped>
 }

 class HealthRecordsUI.InternalStateViewController : UITableViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var dataProvider : InternalStateProvider
	var sections : InternalStateSection

	// ObjC -> Swift bridged methods
	0x72a90  @objc InternalStateViewController.init <stripped>
	0x72b30  @objc InternalStateViewController.initWithCoder: <stripped>
	0x72bd0  @objc InternalStateViewController.dealloc <stripped>
	0x72d70  @objc InternalStateViewController.viewDidLoad <stripped>
	0x72da0  @objc InternalStateViewController.viewWillAppear: <stripped>
	0x731c0  @objc InternalStateViewController.initWithStyle: <stripped>
	0x731f0  @objc InternalStateViewController.initWithNibName:bundle: <stripped>
	0x72c40  @objc InternalStateViewController..cxx_destruct <stripped>

	// Swift methods
	0x72e00  func <stripped> // method 
 }

 class HealthRecordsUI.Cell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x72820  @objc Cell.initWithStyle:reuseIdentifier: <stripped>
	0x728b0  @objc Cell.initWithCoder: <stripped>

	// Swift methods
	0x727f0  class func <stripped> // getter 
	0x72910  func <stripped> // method 
 }

 class HealthRecordsUI.FeedItemListViewController : type metadata for DataTypeDetailViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]

	// ObjC -> Swift bridged methods
	0x74370  @objc FeedItemListViewController.initWithCoder: <stripped>
	0x74530  @objc FeedItemListViewController.viewDidLoad <stripped>
	0x747d0  @objc FeedItemListViewController.viewWillAppear: <stripped>
	0x748b0  @objc FeedItemListViewController.initWithCollectionViewLayout: <stripped>
	0x748e0  @objc FeedItemListViewController.initWithNibName:bundle: <stripped>
	0x74880  @objc FeedItemListViewController..cxx_destruct <stripped>

	// Swift methods
	0x74270  func <stripped> // method 
	0x74360  func <stripped> // getter 
 }

 class HealthRecordsUI.FeedItemListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]
WARNING: couldn't find address 0x0 (0x0) in binary!
	let store : Ó'

	// Swift methods
	0x749a0  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateSection : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String
	let items : InternalStateItem

	// ObjC -> Swift bridged methods
	0x766d0  @objc InternalStateSection.init <stripped>
	0x766a0  @objc InternalStateSection..cxx_destruct <stripped>

	// Swift methods
	0x769e0  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateItem : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String
	let value : String

	// ObjC -> Swift bridged methods
	0x76c20  @objc InternalStateItem.init <stripped>
	0x76be0  @objc InternalStateItem..cxx_destruct <stripped>

	// Swift methods
	0x76e80  func <stripped> // method 
 }

 enum HealthRecordsUI.CodingKeys {

	// Properties
	case title  
	case value  
 }

 enum HealthRecordsUI.CodingKeys {

	// Properties
	case title  
	case items  
 }

 class HealthRecordsUI.SingleValueDataTransformer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
	0x77f00  @objc SingleValueDataTransformer.chartPointFor:in:with:dataSourceType: <stripped>
	0x78070  @objc SingleValueDataTransformer.graphSeriesWith: <stripped>
	0x780d0  @objc SingleValueDataTransformer.chartDisplayTypeWith:displayName:unitName: <stripped>

	// Swift methods
	0x77d80  func SingleValueDataTransformer.chartPoint(for:in:with:dataSourceType:) // method 
	0x78060  func SingleValueDataTransformer.graphSeries(with:) // method 
	0x780c0  func SingleValueDataTransformer.chartDisplayType(with:displayName:unitName:) // method 
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
	0x7f620  @objc ConditionRecordFormatter.init <stripped>
	0x7f5b0  @objc ConditionRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x7f450  class func ConditionRecordFormatter.__allocating_init(store:context:) // init 
	0x7f520  func ConditionRecordFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.TimelineHeaderView : UITableViewHeaderFooterView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : weak HRTimelineHeaderViewDelegate? // +0x8 (0x8)
	var $__lazy_storage_$_titleLabel : UILabel? // +0x10 (0x8)
	var $__lazy_storage_$_subtitleLabel : UILabel? // +0x18 (0x8)
	var $__lazy_storage_$_backgroundEffectView : UIVisualEffectView? // +0x20 (0x8)
	var $__lazy_storage_$_separatorView : UIView? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x80f70  @objc TimelineHeaderView.delegate <stripped>
	0x80ff0  @objc TimelineHeaderView.setDelegate: <stripped>
	0x81350  @objc TimelineHeaderView.initWithReuseIdentifier: <stripped>
	0x81410  @objc TimelineHeaderView.initWithCoder: <stripped>
	0x81830  @objc TimelineHeaderView.applyTitle:subtitle: <stripped>
	0x81a60  @objc TimelineHeaderView.applyStyleFromNavigationBar: <stripped>
	0x81af0  @objc TimelineHeaderView.prepareForReuse <stripped>
	0x81b90  @objc TimelineHeaderView.floating <stripped>
	0x81bf0  @objc TimelineHeaderView.setFloating: <stripped>
	0x826d0  @objc TimelineHeaderView.layoutSubviews <stripped>
	0x82820  @objc TimelineHeaderView.sizeThatFits: <stripped>
	0x82ab0  @objc TimelineHeaderView.traitCollectionDidChange: <stripped>
	0x82b60  @objc TimelineHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x80f40  class func static TimelineHeaderView.reuseIdentifier.getter // getter 
	0x80fb0  func TimelineHeaderView.delegate.getter // getter 
	0x81030  func TimelineHeaderView.delegate.setter // setter 
	0x81080  func TimelineHeaderView.delegate.modify // modifyCoroutine 
	0x81150  func <stripped> // getter 
	0x81170  func <stripped> // getter 
	0x81450  func <stripped> // method 
	0x81760  func TimelineHeaderView.apply(title:subtitle:) // method 
	0x818e0  func TimelineHeaderView.applyStyle(from:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartabilityResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let configuration : MedicalRecordChartConfiguration // +0x8 (0x8)
	let masterDataSource : MedicalRecordChartDataSource // +0x10 (0x8)
	let seriesDataSources : MedicalRecordChartDataSource // +0x18 (0x8)
	let outOfRangeDataSource : MedicalRecordChartDataSource // +0x20 (0x8)
	let noRangeDataSource : MedicalRecordChartDataSource // +0x28 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let latestChartableDate : k+ // +0x19c000 (0x0)

	// ObjC -> Swift bridged methods
	0x82eb0  @objc MedicalRecordChartabilityResult.configuration <stripped>
	0x82f00  @objc MedicalRecordChartabilityResult.masterDataSource <stripped>
	0x82f40  @objc MedicalRecordChartabilityResult.seriesDataSources <stripped>
	0x82fb0  @objc MedicalRecordChartabilityResult.outOfRangeDataSource <stripped>
	0x83010  @objc MedicalRecordChartabilityResult.noRangeDataSource <stripped>
	0x83070  @objc MedicalRecordChartabilityResult.latestChartableDate <stripped>
	0x83120  @objc MedicalRecordChartabilityResult.shouldProduceAtLeastOneOverlay <stripped>
	0x83450  @objc MedicalRecordChartabilityResult.init <stripped>
	0x833b0  @objc MedicalRecordChartabilityResult..cxx_destruct <stripped>

	// Swift methods
	0x831c0  func MedicalRecordChartabilityResult.shouldProduceAtLeastOneOverlay.getter // getter 
	0x83240  class func MedicalRecordChartabilityResult.__allocating_init(configuration:masterDataSource:seriesDataSources:outOfRangeDataSource:noRangeDataSource:latestChartableDate:) // init 
 }

 class HealthRecordsUI.MedicalRecordChartabilityDeterminer : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x859f0  @objc MedicalRecordChartabilityDeterminer.determineChartabilityForConcept:records:completion: <stripped>
	0x85da0  @objc MedicalRecordChartabilityDeterminer.init <stripped>

	// Swift methods
	0x83480  func MedicalRecordChartabilityDeterminer.determineChartability(for:records:completion:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeriesCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let concept : HKConcept // +0x10 (0x8)
	var preferredColors : HKUIMetricColors? // +0x18 (0x8)
	var chartableQuantitySets : [HKChartableCodedQuantitySet] // +0x20 (0x8)

	// Swift methods
	0x85cc0  class func MedicalRecordChartableSeriesCollector.__allocating_init(concept:) // init 
	0x85e20  func MedicalRecordChartableSeriesCollector.collect(record:) // method 
	0x86030  func MedicalRecordChartableSeriesCollector.allUnits.getter // getter 
	0x86450  func MedicalRecordChartableSeriesCollector.chartDataSourceSeries(compatibleWith:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeries : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let concept : HKConcept
	let chartableQuantitySets : [HKChartableCodedQuantitySet]
	let preferredColors : HKUIMetricColors?

	// ObjC -> Swift bridged methods
	0x877b0  @objc MedicalRecordChartableSeries.init <stripped>
	0x87710  @objc MedicalRecordChartableSeries..cxx_destruct <stripped>

	// Swift methods
	0x86b50  func <stripped> // getter 
	0x86a30  class func MedicalRecordChartableSeries.__allocating_init(concept:chartableQuantities:unit:preferredColors:) // init 
	0x86dd0  func MedicalRecordChartableSeries.createDataSource(with:unit:) // method 
	0x86ed0  func MedicalRecordChartableSeries.outOfRangeQuantitySets() // method 
	0x872e0  func MedicalRecordChartableSeries.noRangeQuantitySets() // method 
 }

 struct HealthRecordsUI.UnboundedCache: Cache {

	// Properties
	let storageBox : Box
	let lowMemoryWarnings : Any
	let didEnterBackground : Any
 }

 class HealthRecordsUI.SingleValueChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xa1570  @objc SingleValueChartConfiguration.chartControllerClass <stripped>
	0xa15d0  @objc SingleValueChartConfiguration.shouldShowOutOfRangeOverlay <stripped>
	0xa15f0  @objc SingleValueChartConfiguration.dataTransformer <stripped>
	0xa16a0  @objc SingleValueChartConfiguration.init <stripped>

	// Swift methods
	0xa1590  func SingleValueChartConfiguration.chartControllerClass.getter // getter 
	0xa15e0  func SingleValueChartConfiguration.shouldShowOutOfRangeOverlay.getter // getter 
	0xa1620  func SingleValueChartConfiguration.dataTransformer.getter // getter 
 }

 struct HealthRecordsUI.LoadState {

	// Properties
	let lock : NSObject // +0x0
	var didLoadHandlers : [()] // +0x8
	var _isLoaded : Bool // +0x10
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
	0xa26f0  @objc SettingsViewController.init <stripped>
	0xa2780  @objc SettingsViewController.initWithCoder: <stripped>
	0xa2840  @objc SettingsViewController.dealloc <stripped>
	0xa34c0  @objc SettingsViewController.viewDidLoad <stripped>
	0xa3760  @objc SettingsViewController.viewDidAppear: <stripped>
	0xa37a0  @objc SettingsViewController.tapToRadar: <stripped>
	0xa44b0  @objc SettingsViewController.healthRecordsStore:accountDidChange:changeType: <stripped>
	0xa4790  @objc SettingsViewController.initWithUsingInsetStyling: <stripped>
	0xa4820  @objc SettingsViewController.initWithStyle: <stripped>
	0xa48f0  @objc SettingsViewController.initWithNibName:bundle: <stripped>
	0xa28d0  @objc SettingsViewController..cxx_destruct <stripped>

	// Swift methods
	0xa3830  func SettingsViewController.accountStateDidChange(healthRecordsStore:account:changeType:) // method 
	0xa4530  func SettingsViewController.providedHealthExperienceStore.getter // getter 
	0xa4590  func SettingsViewController.providedHealthStore.getter // getter 
	0xa4600  func SettingsViewController.pushForAPIAuthorization(forSource:) // method 
 }

 class HealthRecordsUI.AccountErrorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let profile : HRProfile // +0x10 (0x8)
	let healthRecordsStore : HKHealthRecordsStore // +0x18 (0x8)

	// Swift methods
	0xa97e0  func AccountErrorManager.presentRelogin(for:from:completion:) // method 
	0xa9dc0  func AccountErrorManager.presentRelogin(for:from:completion:) // method 
 }

 class HealthRecordsUI.BloodPressureChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xaac00  @objc BloodPressureChartConfiguration.chartControllerClass <stripped>
	0xaac60  @objc BloodPressureChartConfiguration.shouldShowOutOfRangeOverlay <stripped>
	0xaac80  @objc BloodPressureChartConfiguration.dataTransformer <stripped>
	0xaad50  @objc BloodPressureChartConfiguration.init <stripped>

	// Swift methods
	0xaac20  func BloodPressureChartConfiguration.chartControllerClass.getter // getter 
	0xaac70  func BloodPressureChartConfiguration.shouldShowOutOfRangeOverlay.getter // getter 
	0xaacc0  func BloodPressureChartConfiguration.dataTransformer.getter // getter 
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultSectionContentInset : ÿ+ // +0x50 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultSectionCornerRadius : ÿ+ // +0x58 (0x8)

	// ObjC -> Swift bridged methods
	0xab780  @objc FilterSettingsViewController.initWithDelegate:selectedCategories:selectedAccounts: <stripped>
	0xab800  @objc FilterSettingsViewController.initWithCoder: <stripped>
	0xabff0  @objc FilterSettingsViewController.viewDidLoad <stripped>
	0xac030  @objc FilterSettingsViewController.numberOfSectionsInTableView: <stripped>
	0xac170  @objc FilterSettingsViewController.tableView:viewForHeaderInSection: <stripped>
	0xac1f0  @objc FilterSettingsViewController.tableView:numberOfRowsInSection: <stripped>
	0xacec0  @objc FilterSettingsViewController.tableView:cellForRowAtIndexPath: <stripped>
	0xad030  @objc FilterSettingsViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0xad100  @objc FilterSettingsViewController.tableView:heightForHeaderInSection: <stripped>
	0xad120  @objc FilterSettingsViewController.tableView:heightForFooterInSection: <stripped>
	0xadb50  @objc FilterSettingsViewController.doneButtonTapped <stripped>
	0xadc90  @objc FilterSettingsViewController.initWithUsingInsetStyling: <stripped>
	0xadd20  @objc FilterSettingsViewController.initWithStyle: <stripped>
	0xaddf0  @objc FilterSettingsViewController.initWithNibName:bundle: <stripped>
	0xadbb0  @objc FilterSettingsViewController..cxx_destruct <stripped>

	// Swift methods
	0xab050  class func FilterSettingsViewController.__allocating_init(withDelegate:selectedCategories:selectedAccounts:) // init 
	0xad130  func <stripped> // method 
	0xad390  func <stripped> // method 
	0xad5f0  func <stripped> // method 
	0xad620  func <stripped> // method 
	0xad840  func <stripped> // method 
	0xad860  func <stripped> // method 
	0xad9e0  func <stripped> // method 
 }

 class HealthRecordsUI.AddAccountTableViewCell : HRStandardTableViewCell {

	// Properties
	var alignWithAccountTitle : Bool // +0x8 (0x1)

	// ObjC -> Swift bridged methods
	0xb2830  @objc AddAccountTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xb2900  @objc AddAccountTableViewCell.initWithCoder: <stripped>
	0xb2bc0  @objc AddAccountTableViewCell.tintColorDidChange <stripped>

	// Swift methods
	0xb29a0  func <stripped> // method 
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
	0xb4f50  class func CategoryCountDataProvider.__allocating_init(healthStore:) // init 
	0xb4f90  func CategoryCountDataProvider.fetchCategoryCounts(categories:additionalPredicate:completion:) // method 
 }

 class HealthRecordsUI.AllergyRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_reactionFormatter : AllergyReactionFormatter // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xbee60  @objc AllergyRecordFormatter.init <stripped>
	0xbedd0  @objc AllergyRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0xbdd20  func AllergyRecordFormatter.structuredItems(from:) // method 
	0xbdf00  class func AllergyRecordFormatter.__allocating_init(store:context:) // init 
	0xbdfc0  func AllergyRecordFormatter.displayItems(from:) // method 
	0xbe020  func <stripped> // method 
 }

 struct HealthRecordsUI.CategorySummaryFeedItemIdentifierFactory { }

 class HealthRecordsUI.MedicationOrderFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xc0f70  @objc MedicationOrderFormatter.init <stripped>
	0xc0ee0  @objc MedicationOrderFormatter..cxx_destruct <stripped>

	// Swift methods
	0xc0520  func MedicationOrderFormatter.structuredItems(from:) // method 
	0xc0960  class func MedicationOrderFormatter.__allocating_init(store:context:) // init 
	0xc0a20  func MedicationOrderFormatter.displayItems(from:) // method 
	0xc0a80  func <stripped> // method 
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
	0xc8010  @objc MedicationDosageFormatter.init <stripped>
	0xc8070  @objc MedicationDosageFormatter..cxx_destruct <stripped>

	// Swift methods
	0xc79d0  func MedicationDosageFormatter.structuredItems(from:country:) // method 
	0xc7c60  func MedicationDosageFormatter.displayItems(from:country:) // method 
	0xc7980  class func MedicationDosageFormatter.__allocating_init(store:context:) // init 
	0xc7f30  func MedicationDosageFormatter.displayItems(from:country:) // method 
 }

 enum HealthRecordsUI.HealthRecordsURLParsingResult {

	// Properties
	case onboarding : (gatewayID: String, batchID: String)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case onboardingParsingError : w,
WARNING: couldn't find address 0x0 (0x0) in binary!
	case loginRedirectSuccess :  first-element-marker 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case loginRedirectError : w,
	case unrecognized  
	case viewHealthRecords  
	case startProviderSearch  
	case loginRedirectAccessNotGranted  
 }

 class HealthRecordsUI.HealthRecordsURLHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xc9790  class func HealthRecordsURLHandler.__allocating_init() // init 
	0xc97c0  func HealthRecordsURLHandler.parse(url:) // method 
 }

 class HealthRecordsUI.RecordCategoryViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let category : DisplayCategory // +0x8 (0x48)
	let healthRecordsStore : HKHealthRecordsStore // +0x50 (0x8)
	var preferredSegment : ModeSegment // +0x58 (0x1)
	let factory : HRCategoryViewControllerFactory // +0x60 (0x8)
	let countProvider : WDMedicalRecordCountProvider // +0x68 (0x8)
	var currentViewController : UIViewController? // +0x70 (0x8)
	var displayMode : DisplayMode // +0x78 (0x1)
	var isModePickerHidden : Bool // +0x79 (0x1)
	var $__lazy_storage_$_modePicker : UISegmentedControl? // +0x80 (0x8)
	var $__lazy_storage_$_navigationPalette : _UINavigationBarPalette? // +0x88 (0x8)
	var $__lazy_storage_$_lastUpdatedViewController : UIViewController? // +0x90 (0x8)
	var $__lazy_storage_$_alphabeticalViewController : UIViewController? // +0x98 (0x8)

	// ObjC -> Swift bridged methods
	0xcb980  @objc RecordCategoryViewController.initWithCoder: <stripped>
	0xcba20  @objc RecordCategoryViewController.dealloc <stripped>
	0xcbe80  @objc RecordCategoryViewController.viewDidLoad <stripped>
	0xcbfa0  @objc RecordCategoryViewController.viewWillLayoutSubviews <stripped>
	0xcc120  @objc RecordCategoryViewController.modePickerDidChange: <stripped>
	0xcc1a0  @objc RecordCategoryViewController.tapToRadar: <stripped>
	0xccce0  @objc RecordCategoryViewController.initWithNibName:bundle: <stripped>
	0xcba90  @objc RecordCategoryViewController..cxx_destruct <stripped>

	// Swift methods
	0xcbfd0  func <stripped> // method 
	0xcc230  func <stripped> // method 
	0xcc340  func <stripped> // method 
	0xcc420  func <stripped> // method 
	0xcc9f0  func <stripped> // method 
	0xccb70  func <stripped> // getter 
 }

 enum HealthRecordsUI.ModeSegment {

	// Properties
	case lastUpdated  
	case alphabetical  
 }

 enum HealthRecordsUI.DisplayMode {

	// Properties
	case noData : NoDataReason
	case data : ModeSegment
	case loading  
 }

 enum HealthRecordsUI.NoDataReason {

	// Properties
	case noData  
	case notOnboarded  
 }

 class HealthRecordsUI.ExplainerTextFooterCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let label : UILabel // +0x8 (0x8)
	var content : String? // +0x10 (0x10)

	// ObjC -> Swift bridged methods
	0xce920  @objc ExplainerTextFooterCell.content <stripped>
	0xce9e0  @objc ExplainerTextFooterCell.setContent: <stripped>
	0xcecb0  @objc ExplainerTextFooterCell.initWithReuseIdentifier: <stripped>
	0xcf2f0  @objc ExplainerTextFooterCell.initWithStyle:reuseIdentifier: <stripped>
	0xcf3c0  @objc ExplainerTextFooterCell.initWithCoder: <stripped>
	0xcf200  @objc ExplainerTextFooterCell..cxx_destruct <stripped>

	// Swift methods
	0xce990  func ExplainerTextFooterCell.content.getter // getter 
	0xcea40  func ExplainerTextFooterCell.content.setter // setter 
	0xcea70  func ExplainerTextFooterCell.content.modify // modifyCoroutine 
	0xced50  func <stripped> // method 
 }

 class HealthRecordsUI.NoDataViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let style : Style // +0x8 (0x1)

	// ObjC -> Swift bridged methods
	0xd0090  @objc NoDataViewController.initWithCoder: <stripped>
	0xd0200  @objc NoDataViewController.loadView <stripped>
	0xd0230  @objc NoDataViewController.initWithNibName:bundle: <stripped>

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
	0xd1110  func CancellationToken.isCancelled.getter // getter 
	0xd1140  func CancellationToken.cancelBlock.getter // getter 
	0xd1180  func CancellationToken.cancelBlock.setter // setter 
	0xd11c0  func CancellationToken.cancelBlock.modify // modifyCoroutine 
	0xd1020  class func CancellationToken.__allocating_init(cancelBlock:) // init 
	0xd1560  func CancellationToken.cancel() // method 
 }

 class HealthRecordsUI.PromotionListViewController : FeedItemListViewController {
	// Swift methods
 }

 class HealthRecordsUI.PromotionListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
WARNING: couldn't find address 0x0 (0x0) in binary!
	var store : Ó'

	// Swift methods
	0xd1910  func PromotionListViewDataSourceProvider.store.getter // getter 
	0xd1950  func PromotionListViewDataSourceProvider.store.setter // setter 
	0xd19a0  func PromotionListViewDataSourceProvider.store.modify // modifyCoroutine 
	0xd16a0  class func PromotionListViewDataSourceProvider.__allocating_init(predicate:store:) // init 
	0xd1a50  func PromotionListViewDataSourceProvider.selectedDataSources(for:) // method 
	0xd1aa0  func PromotionListViewDataSourceProvider.makePromotionDataSource() // method 
 }

 class HealthRecordsUI.AccountErrorTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let accountErrorView : AccountErrorFeedItemView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xd21b0  @objc AccountErrorTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xd2210  @objc AccountErrorTableViewCell.initWithCoder: <stripped>
	0xd2650  @objc AccountErrorTableViewCell.layoutSubviews <stripped>
	0xd2740  @objc AccountErrorTableViewCell.sizeThatFits: <stripped>
	0xd2960  @objc AccountErrorTableViewCell.traitCollectionDidChange: <stripped>
	0xd2a70  @objc AccountErrorTableViewCell.layoutMarginsDidChange <stripped>
	0xd2bf0  @objc AccountErrorTableViewCell.prepareForReuse <stripped>
	0xd2cc0  @objc AccountErrorTableViewCell.setHighlighted:animated: <stripped>
	0xd2d30  @objc AccountErrorTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0xd20d0  class func static AccountErrorTableViewCell.reuseIdentifier.getter // getter 
	0xd2250  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateProvider : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let conceptStore : HKConceptStore // +0x8 (0x8)
	let healthRecordsStore : HKHealthRecordsStore // +0x10 (0x8)
	let recordCountProvider : WDMedicalRecordCountProvider // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let healthExperienceStore : Ó' // +0x20 (0x28)
	var loadState : LoadState // +0x48 (0x11)
	var changeHandler : InternalStateProvider // +0x60 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var isObserving : ¿/ // +0x70 (0x8)

	// ObjC -> Swift bridged methods
	0xd3430  @objc InternalStateProvider.initWithHealthStore: <stripped>
	0xd3570  @objc InternalStateProvider.initWithProfile: <stripped>
	0xd3660  @objc InternalStateProvider.init <stripped>
	0xd3730  @objc InternalStateProvider.dealloc <stripped>
	0xd4390  @objc InternalStateProvider.fetchJSONWithCompletion: <stripped>
	0xd37a0  @objc InternalStateProvider..cxx_destruct <stripped>

	// Swift methods
	0xd3840  func <stripped> // method 
	0xd3e50  func InternalStateProvider.fetchJSON(completion:) // method 
	0xd4400  func <stripped> // method 
 }

 class HealthRecordsUI.SuggestedActionTileViewControllerShim {
 class HealthRecordsUI.OnboardingSuggestedActionViewController {
 class HealthRecordsUI.BloodPressureCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
	0xda500  @objc BloodPressureCurrentValueViewDataSource.initWithDateCache:displayCategoryController:healthStore:selectedRangeFormatter: <stripped>
	0xda5b0  @objc BloodPressureCurrentValueViewDataSource.init <stripped>
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
	var cachedBucketedSets : HKTimeScope // +0x28 (0x8)
	let collapseIntoRangePoints : Bool // +0x30 (0x1)
	var unit : HKUnit // +0x38 (0x8)
	var preferredColors : HKUIMetricColors? // +0x40 (0x8)
	var chartableXRange : HKValueRange<NSDate>? // +0x48 (0x8)
	var chartableYRange : HKValueRange<NSNumber>? // +0x50 (0x8)

	// ObjC -> Swift bridged methods
	0xe3940  @objc MedicalRecordChartDataSource.displayName <stripped>
	0xe3b10  @objc MedicalRecordChartDataSource.initWithConcept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type: <stripped>
	0xe3ea0  @objc MedicalRecordChartDataSource.cachedBlockForPath:context: <stripped>
	0xe4b60  @objc MedicalRecordChartDataSource.chartDisplayTypeWithVerticalAxis: <stripped>
	0xe6410  @objc MedicalRecordChartDataSource.init <stripped>
	0xe6470  @objc MedicalRecordChartDataSource..cxx_destruct <stripped>

	// Swift methods
	0xe3700  func MedicalRecordChartDataSource.unit.getter // getter 
	0xe3780  func MedicalRecordChartDataSource.preferredColors.getter // getter 
	0xe37e0  func MedicalRecordChartDataSource.chartableXRange.getter // getter 
	0xe38e0  func MedicalRecordChartDataSource.chartableYRange.getter // getter 
	0xe3a20  func MedicalRecordChartDataSource.displayName.getter // getter 
	0xe31f0  class func MedicalRecordChartDataSource.__allocating_init(concept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type:) // init 
	0xe3f40  func MedicalRecordChartDataSource.chartPoints(in:with:) // method 
	0xe43d0  func MedicalRecordChartDataSource.numberOfDataPoints(in:) // method 
	0xe4690  func MedicalRecordChartDataSource.graphSeries(withMainColor:verticalAxis:) // method 
	0xe49a0  func MedicalRecordChartDataSource.chartDisplayType(verticalAxis:) // method 
	0xe4bc0  func MedicalRecordChartDataSource.take(chartableCodedQuantitySets:) // method 
	0xe5660  func MedicalRecordChartDataSource.bucketQuantitySets(with:) // method 
 }

 class HealthRecordsUI.CategoryRecordQueryDescription : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SampleQueryDescription {

	// Properties
	let category : BrowseCategory // +0x80000400 (0x0)
	let sampleQueryDescription : HKSampleQueryDescription // +0x0 (0x8)

	// Swift methods
	0xea250  func CategoryRecordQueryDescription.sampleType.getter // getter 
	0xea280  func CategoryRecordQueryDescription.predicate.getter // getter 
	0xea2c0  func CategoryRecordQueryDescription.hash(into:) // method 
	0xea3a0  func CategoryRecordQueryDescription.hashValue.getter // getter 
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
	0xeb0a0  @objc VaccinationRecordFormatter.init <stripped>
	0xeb030  @objc VaccinationRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0xeaed0  class func VaccinationRecordFormatter.__allocating_init(store:context:) // init 
	0xeafa0  func VaccinationRecordFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.NotificationPolicy : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xed700  @objc NotificationPolicy.userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler: <stripped>
	0xedc60  @objc NotificationPolicy.userNotificationCenter:willPresentNotification:withCompletionHandler: <stripped>
	0xede00  @objc NotificationPolicy.init <stripped>

	// Swift methods
	0xed570  func NotificationPolicy.userNotificationCenter(_:didReceive:withCompletionHandler:) // method 
	0xed780  func NotificationPolicy.userNotificationCenter(_:willPresent:withCompletionHandler:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartPoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let chartableSet : HKChartableCodedQuantitySet // +0x8 (0x8)
	let blockCoordinateInfo : SingleValueChartData // +0x10 (0x8)
	let sortedYValues : [Double] // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xeec60  @objc MedicalRecordChartPoint.userInfo <stripped>
	0xeed30  @objc MedicalRecordChartPoint.xValueAsGenericType <stripped>
	0xeeec0  @objc MedicalRecordChartPoint.maxXValueAsGenericType <stripped>
	0xf10f0  @objc MedicalRecordChartPoint.minXValueAsGenericType <stripped>
	0xeeff0  @objc MedicalRecordChartPoint.yValue <stripped>
	0xef0a0  @objc MedicalRecordChartPoint.yValueForKey: <stripped>
	0xef2c0  @objc MedicalRecordChartPoint.allYValues <stripped>
	0xef320  @objc MedicalRecordChartPoint.minYValue <stripped>
	0xef3d0  @objc MedicalRecordChartPoint.maxYValue <stripped>
	0xef450  @objc MedicalRecordChartPoint.description <stripped>
	0xef760  @objc MedicalRecordChartPoint.init <stripped>
	0xef7c0  @objc MedicalRecordChartPoint..cxx_destruct <stripped>

	// Swift methods
	0xeeb20  class func MedicalRecordChartPoint.__allocating_init(chartableSet:unit:blockCoordinateInfo:) // init 
	0xeec30  func MedicalRecordChartPoint.userInfo() // method 
	0xeec90  func MedicalRecordChartPoint.xValueAsGenericType() // method 
	0xeee20  func MedicalRecordChartPoint.maxXValueAsGenericType() // method 
	0xf1100  func MedicalRecordChartPoint.minXValueAsGenericType() // method 
	0xeefb0  func MedicalRecordChartPoint.yValue() // method 
	0xef010  func MedicalRecordChartPoint.yValue(forKey:) // method 
	0xef170  func MedicalRecordChartPoint.allYValues() // method 
	0xf10e0  func MedicalRecordChartPoint.minYValue() // method 
	0xef380  func MedicalRecordChartPoint.maxYValue() // method 
 }

 enum HealthRecordsUI.BrowseIcon {

	// Properties
	case category : (UIImage, tintColor: UIColor?)
	case account : AccountIcon
 }

 class HealthRecordsUI.LabelStackView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let textStyle : TextStyle // +0x8 (0x8)
	var labels : [UILabel] // +0x10 (0x8)
	var font : UIFont // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interItemSpacing : ÿ+ // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0xf34c0  @objc LabelStackView.initWithCoder: <stripped>
	0xf3cf0  @objc LabelStackView.layoutSubviews <stripped>
	0xf3e10  @objc LabelStackView.sizeThatFits: <stripped>
	0xf3f90  @objc LabelStackView.initWithFrame: <stripped>
	0xf3e90  @objc LabelStackView..cxx_destruct <stripped>

	// Swift methods
	0xf3450  class func LabelStackView.__allocating_init(textStyle:) // init 
	0xf3540  func LabelStackView.addLabel(text:textColor:) // method 
	0xf36d0  func LabelStackView.removeAll() // method 
 }

 class HealthRecordsUI.SideBySideLabelCell : WDMedicalRecordGroupableCell {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let detailLabel : UILabel // +0x10 (0x8)
	let chevronView : UIView // +0x18 (0x8)
	var title : String? // +0x20 (0x10)
	var detail : String? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0xf4b00  @objc SideBySideLabelCell.title <stripped>
	0xf4b40  @objc SideBySideLabelCell.setTitle: <stripped>
	0xf4c10  @objc SideBySideLabelCell.detail <stripped>
	0xf4d10  @objc SideBySideLabelCell.setDetail: <stripped>
	0xf5050  @objc SideBySideLabelCell.initWithReuseIdentifier: <stripped>
	0xf5810  @objc SideBySideLabelCell.traitCollectionDidChange: <stripped>
	0xf5970  @objc SideBySideLabelCell.initWithStyle:reuseIdentifier: <stripped>
	0xf5a40  @objc SideBySideLabelCell.initWithCoder: <stripped>
	0xf5850  @objc SideBySideLabelCell..cxx_destruct <stripped>

	// Swift methods
	0xf4b20  func SideBySideLabelCell.title.getter // getter 
	0xf4b60  func SideBySideLabelCell.title.setter // setter 
	0xf4b90  func SideBySideLabelCell.title.modify // modifyCoroutine 
	0xf4ca0  func SideBySideLabelCell.detail.getter // getter 
	0xf4db0  func SideBySideLabelCell.detail.setter // setter 
	0xf4de0  func SideBySideLabelCell.detail.modify // modifyCoroutine 
	0xf50f0  func <stripped> // method 
 }

 class HealthRecordsUI.BrowseIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var iconCache : UnboundedCache // +0x10 (0x48)
	var placeholderCache : UnboundedCache // +0x58 (0x48)
	let accountIconProvider : AccountIconProvider // +0xa0 (0x8)

	// Swift methods
	0xf6ca0  class func BrowseIconProvider.__allocating_init(accountIconProvider:) // init 
	0xf6e40  func BrowseIconProvider.placeholder(for:size:) // method 
	0xf7320  func BrowseIconProvider.fetchIcon(for:size:queue:completion:) // method 
 }

 class HealthRecordsUI.OAuthViewControllerNotificationUserInfoKeys : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xf8a00  @objc OAuthViewControllerNotificationUserInfoKeys.init <stripped>
	0xf89a0  @objc OAuthViewControllerNotificationUserInfoKeys..cxx_destruct <stripped>
 }

 enum HealthRecordsUI.OnboardingFunnelSteps { }

 enum HealthRecordsUI.OnboardingFunnelContext { }

 class HealthRecordsUI.AnalyticsManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let healthStore : HKHealthStore // +0x8 (0x8)
	var queuedEvents : [[String : NSObject]] // +0x10 (0x8)
	let managerQueue : OS_dispatch_queue // +0x18 (0x8)
	var optInDetermined : Bool // +0x20 (0x1)

	// ObjC -> Swift bridged methods
	0xfaac0  @objc AnalyticsManager.init <stripped>
	0xfabe0  @objc AnalyticsManager.submitAndFlushQueuedEvents <stripped>
	0xfb090  @objc AnalyticsManager.postOnboardingFunnelEventWithStep:context:gatewayUrl: <stripped>
	0xfb510  @objc AnalyticsManager..cxx_destruct <stripped>

	// Swift methods
	0xfaae0  func AnalyticsManager.submitAndFlushQueuedEvents() // method 
	0xfac10  func AnalyticsManager.postOnboardingFunnelEvent(step:context:gatewayUrl:) // method 
 }

 class HealthRecordsUI.AllergyReactionFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xfefb0  @objc AllergyReactionFormatter.displayItemsFromReaction:country: <stripped>
	0xff380  @objc AllergyReactionFormatter.init <stripped>
	0xff3e0  @objc AllergyReactionFormatter..cxx_destruct <stripped>

	// Swift methods
	0xfcce0  func AllergyReactionFormatter.structuredItems(from:country:) // method 
	0xfe1a0  func AllergyReactionFormatter.displayItems(from:country:) // method 
	0xfeec0  class func AllergyReactionFormatter.__allocating_init(store:context:) // init 
	0xfef60  func AllergyReactionFormatter.displayItems(from:country:) // method 
 }

 class HealthRecordsUI.BloodPressureChartData : HKInteractiveChartBloodPressureData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : )) // +0xedf5 (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x169430 (0x8)
	let hasTime : Bool // +0x0 (0x1)
	let partOfOutOfRangeSeries : Bool // +0x2 (0x1)

	// ObjC -> Swift bridged methods
	0x100ae0  @objc BloodPressureChartData.init <stripped>
	0x100a60  @objc BloodPressureChartData..cxx_destruct <stripped>

	// Swift methods
	0x100810  class func BloodPressureChartData.__allocating_init(date:dateFormat:hasTime:systolicRange:diastolicRange:) // init 
 }

 class HealthRecordsUI.AccountTableViewCell : HRSourceTableViewCell {

	// Properties
	let brandView : WDMedicalRecordBrandView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x102080  @objc AccountTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x1020d0  @objc AccountTableViewCell.initWithCoder: <stripped>
	0x102230  @objc AccountTableViewCell.configureWithAccount:dataProvider: <stripped>
	0x102610  @objc AccountTableViewCell.prepareForReuse <stripped>
	0x1027c0  @objc AccountTableViewCell.layoutSubviews <stripped>
	0x102840  @objc AccountTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0x102110  func <stripped> // method 
	0x102220  func AccountTableViewCell.configureWithAccountDataProviderForObjC(_:_:) // method 
	0x1022a0  func <stripped> // method 
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
	var cachedDataSource : MedicalRecordChartDataSource // +0x48 (0x8)

	// ObjC -> Swift bridged methods
	0x106020  @objc MedicalRecordChartOverlayContext.initWithTitle:dataSource:defaultColors:selectedColors:verticalAxis: <stripped>
	0x106120  @objc MedicalRecordChartOverlayContext.contextItemForLastUpdate <stripped>
	0x1063c0  @objc MedicalRecordChartOverlayContext.updateContextItemForDateInterval:timeScope:completion: <stripped>
	0x1064d0  @objc MedicalRecordChartOverlayContext.sampleTypeForDateRangeUpdates <stripped>
	0x106550  @objc MedicalRecordChartOverlayContext.overlayDisplayTypeForTimeScope: <stripped>
	0x1066a0  @objc MedicalRecordChartOverlayContext.init <stripped>
	0x1065c0  @objc MedicalRecordChartOverlayContext..cxx_destruct <stripped>

	// Swift methods
	0x105ea0  class func MedicalRecordChartOverlayContext.__allocating_init(title:dataSource:defaultColors:selectedColors:verticalAxis:) // init 
	0x1060b0  func MedicalRecordChartOverlayContext.contextItemForLastUpdate() // method 
	0x1061a0  func MedicalRecordChartOverlayContext.updateItem(for:timeScope:completion:) // method 
	0x106490  func MedicalRecordChartOverlayContext.sampleTypeForDateRangeUpdates() // method 
	0x106540  func MedicalRecordChartOverlayContext.overlayDisplayType(for:) // method 
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
	0x107200  @objc AccountStateChangeListener.healthRecordsStore:accountDidChange:changeType: <stripped>
	0x107320  @objc AccountStateChangeListener.init <stripped>
	0x1072b0  @objc AccountStateChangeListener..cxx_destruct <stripped>

	// Swift methods
	0x106f20  class func AccountStateChangeListener.__allocating_init(handler:) // init 
	0x106fe0  func AccountStateChangeListener.accountStateDidChange(healthRecordsStore:account:changeType:) // method 
 }

 struct HealthRecordsUI.AddAccountFeedItemIdentifierFactory { }

 struct HealthRecordsUI.DisplayCategory {

	// Properties
	let kind : Kind // +0x0
	let tintColor : UIColor // +0x8
	let imageName : String? // +0x10
	let title : String // +0x20
	let sampleQueryDescriptions : [HKSampleQueryDescription] // +0x30
	let reachableSampleQueryDescription : [HKSampleQueryDescription] // +0x38
	let _category : WDMedicalRecordCategory // +0x40
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
	0x10b670  func CountFormatter.style.getter // getter 
	0x10b6e0  func CountFormatter.style.setter // setter 
	0x10b710  func CountFormatter.style.modify // modifyCoroutine 
	0x10b7b0  class func CountFormatter.__allocating_init(style:) // init 
	0x10b850  func CountFormatter.string(for:) // method 
 }

 enum HealthRecordsUI.Style {

	// Properties
	case category : Kind
	case custom : (formatKey: String)
	case plain  
	case more  
 }

 class HealthRecordsUI.DiagnosticTestReportFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x10c610  @objc DiagnosticTestReportFormatter.init <stripped>
	0x10c5a0  @objc DiagnosticTestReportFormatter..cxx_destruct <stripped>

	// Swift methods
	0x10c440  class func DiagnosticTestReportFormatter.__allocating_init(store:context:) // init 
	0x10c510  func DiagnosticTestReportFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.AccountIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monogramProvider : MonogramProvider // +0x10 (0x8)
	var brandImageManager : HKBrandImageManager // +0x18 (0x8)
	var iconCache : UnboundedCache // +0x20 (0x48)

	// Swift methods
	0x10d6e0  class func AccountIconProvider.__allocating_init(brandImageManager:monogramProvider:) // init 
	0x10d7f0  func AccountIconProvider.placeholder(forTitle:size:) // method 
	0x10e210  func AccountIconProvider.fetchIcon(forAccount:size:completion:) // method 
	0x10e760  func AccountIconProvider.fetchIcon(for:size:queue:completion:) // method 
 }

 class HealthRecordsUI.ContentStatusCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let spinner : UIActivityIndicatorView // +0x8 (0x8)
	let titleLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x110120  @objc ContentStatusCell.spinner <stripped>
	0x110160  @objc ContentStatusCell.titleLabel <stripped>
	0x1103a0  @objc ContentStatusCell.init <stripped>
	0x1103c0  @objc ContentStatusCell.initWithCoder: <stripped>
	0x110950  @objc ContentStatusCell.initWithStyle:reuseIdentifier: <stripped>
	0x110870  @objc ContentStatusCell..cxx_destruct <stripped>

	// Swift methods
	0x1103e0  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartSeries : HKGraphSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var selectedStrokeStyle : HKStrokeStyle?
	var unselectedStrokeStyle : HKStrokeStyle?

	// ObjC -> Swift bridged methods
	0x110d40  @objc MedicalRecordChartSeries.selectedPathRange <stripped>
	0x110f60  @objc MedicalRecordChartSeries.coordinatesForBlock:blockPath:xAxis:yAxis: <stripped>
	0x111730  @objc MedicalRecordChartSeries.drawSeriesWithBlockCoordinates:axisRect:zoomLevelConfiguration:pointTransform:renderContext:secondaryRenderContext: <stripped>
	0x111840  @objc MedicalRecordChartSeries.supportsMultiTouchSelection <stripped>
	0x111860  @objc MedicalRecordChartSeries.blockCoordinateIsVisibleInsideOfChartRect:blockCoordinate: <stripped>
	0x111900  @objc MedicalRecordChartSeries.distanceFromPoint:blockCoordinate:chartRect: <stripped>
	0x111970  @objc MedicalRecordChartSeries.xAxisDistanceFromPoint:blockCoordinate:chartRect: <stripped>
	0x1119e0  @objc MedicalRecordChartSeries.yAxisDifferenceToPoint:blockCoordinate:chartRect: <stripped>
	0x111a90  @objc MedicalRecordChartSeries.init <stripped>
	0x111b00  @objc MedicalRecordChartSeries..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordChartCoordinate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let pointValuesAscending : CGPoint
	let blockCoordinateInfo : HKGraphSeriesBlockCoordinateInfo

	// ObjC -> Swift bridged methods
	0x111f50  @objc MedicalRecordChartCoordinate.startXValue <stripped>
	0x111fb0  @objc MedicalRecordChartCoordinate.endXValue <stripped>
	0x112010  @objc MedicalRecordChartCoordinate.userInfo <stripped>
	0x112050  @objc MedicalRecordChartCoordinate.copyWithTransform:roundToViewScale: <stripped>
	0x112160  @objc MedicalRecordChartCoordinate.init <stripped>
	0x112100  @objc MedicalRecordChartCoordinate..cxx_destruct <stripped>

	// Swift methods
	0x110f40  class func MedicalRecordChartCoordinate.__allocating_init(sortedPointValues:blockCoordinateInfo:) // init 
	0x111d40  func MedicalRecordChartCoordinate.xValue.getter // getter 
	0x111d70  func MedicalRecordChartCoordinate.minPoint.getter // getter 
	0x111da0  func MedicalRecordChartCoordinate.maxPoint.getter // getter 
	0x111de0  func MedicalRecordChartCoordinate.distance(from:) // method 
	0x111f80  func MedicalRecordChartCoordinate.startXValue.getter // getter 
	0x111fe0  func MedicalRecordChartCoordinate.endXValue.getter // getter 
	0x114ad0  func MedicalRecordChartCoordinate.userInfo.getter // getter 
	0x112040  func MedicalRecordChartCoordinate.copy(with:roundToViewScale:) // method 
 }

 class HealthRecordsUI.ContentStatusView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let subtitleLabel : UILabel // +0x10 (0x8)
	let spinnerView : UIActivityIndicatorView // +0x18 (0x8)
	var title : String? // +0x20 (0x10)
	var subtitle : String? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x114ae0  @objc ContentStatusView.title <stripped>
	0x114b20  @objc ContentStatusView.setTitle: <stripped>
	0x114bf0  @objc ContentStatusView.subtitle <stripped>
	0x114cf0  @objc ContentStatusView.setSubtitle: <stripped>
	0x114f40  @objc ContentStatusView.initWithTitle:subtitle: <stripped>
	0x115040  @objc ContentStatusView.initWithCoder: <stripped>
	0x115300  @objc ContentStatusView.initWithFrame: <stripped>
	0x115580  @objc ContentStatusView.startAnimating <stripped>
	0x1155f0  @objc ContentStatusView.stopAnimating <stripped>
	0x115740  @objc ContentStatusView.traitCollectionDidChange: <stripped>
	0x115d60  @objc ContentStatusView.layoutSubviews <stripped>
	0x115ed0  @objc ContentStatusView..cxx_destruct <stripped>

	// Swift methods
	0x114b00  func ContentStatusView.title.getter // getter 
	0x114b40  func ContentStatusView.title.setter // setter 
	0x114b70  func ContentStatusView.title.modify // modifyCoroutine 
	0x114c80  func ContentStatusView.subtitle.getter // getter 
	0x114d90  func ContentStatusView.subtitle.setter // setter 
	0x114dc0  func ContentStatusView.subtitle.modify // modifyCoroutine 
	0x114e80  class func ContentStatusView.__allocating_init(title:subtitle:) // init 
	0x115330  func <stripped> // method 
	0x115560  func ContentStatusView.startAnimating() // method 
	0x1155a0  func ContentStatusView.stopAnimating() // method 
	0x115d90  func <stripped> // method 
 }

 class HealthRecordsUI.MedicationRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x117170  @objc MedicationRecordFormatter.init <stripped>
	0x1170e0  @objc MedicationRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x1164c0  func MedicationRecordFormatter.structuredItems(from:) // method 
	0x116900  class func MedicationRecordFormatter.__allocating_init(store:context:) // init 
	0x1169c0  func MedicationRecordFormatter.displayItems(from:) // method 
	0x116a20  func <stripped> // method 
 }

 class HealthRecordsUI.ClinicalOnboardingManager : WDClinicalOnboardingManager {
	// ObjC -> Swift bridged methods
	0x118390  @objc ClinicalOnboardingManager.initWithProfile: <stripped>
 }

 class HealthRecordsUI.ConceptTitleTableHeaderView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let fontChoices : [UIFont] // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var widthCache : ÿ+ // +0x18 (0x8)
	var titleCache : NSString // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottomExtraSpace : ÿ+ // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x1183d0  @objc ConceptTitleTableHeaderView.bottomExtraSpace <stripped>
	0x118440  @objc ConceptTitleTableHeaderView.setBottomExtraSpace: <stripped>
	0x118520  @objc ConceptTitleTableHeaderView.title <stripped>
	0x118630  @objc ConceptTitleTableHeaderView.setTitle: <stripped>
	0x118c00  @objc ConceptTitleTableHeaderView.initWithFrame: <stripped>
	0x118c30  @objc ConceptTitleTableHeaderView.initWithCoder: <stripped>
	0x118fb0  @objc ConceptTitleTableHeaderView.layoutSubviews <stripped>
	0x1191c0  @objc ConceptTitleTableHeaderView.sizeThatFits: <stripped>
	0x119810  @objc ConceptTitleTableHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x118410  func ConceptTitleTableHeaderView.bottomExtraSpace.getter // getter 
	0x118490  func ConceptTitleTableHeaderView.bottomExtraSpace.setter // setter 
	0x1184d0  func ConceptTitleTableHeaderView.bottomExtraSpace.modify // modifyCoroutine 
	0x1185c0  func ConceptTitleTableHeaderView.title.getter // getter 
	0x1186e0  func ConceptTitleTableHeaderView.title.setter // setter 
	0x118750  func ConceptTitleTableHeaderView.title.modify // modifyCoroutine 
	0x118c50  func <stripped> // method 
	0x119210  func <stripped> // method 
 }

 class HealthRecordsUI.WeakNotificationObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let scheduler : TaskScheduler // +0x8 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let block :  empty-list  // +0x30 (0x10)
	var center : weak NSNotificationCenter? // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x119d50  @objc WeakNotificationObserver.dealloc <stripped>
	0x119e70  @objc WeakNotificationObserver.didReceiveWithNotification: <stripped>
	0x11a010  @objc WeakNotificationObserver.init <stripped>
	0x119de0  @objc WeakNotificationObserver..cxx_destruct <stripped>

	// Swift methods
	0x119be0  class func WeakNotificationObserver.__allocating_init(forName:object:scheduler:center:block:) // init 
	0x119e20  func WeakNotificationObserver.invalidate() // method 
 }

 class HealthRecordsUI.MedicalRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x11c810  @objc MedicalRecordFormatter.structuredItemsFromRecord: <stripped>
	0x11d510  @objc MedicalRecordFormatter.initWithConceptStore:context: <stripped>
	0x11dc80  @objc MedicalRecordFormatter.displayItemsFromRecord: <stripped>
	0x11dda0  @objc MedicalRecordFormatter.init <stripped>
	0x11dd30  @objc MedicalRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x11c410  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11c890  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11c950  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11ca10  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11cad0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11cb90  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11cc90  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11cd80  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11ce70  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11cf50  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11d050  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11d150  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11d250  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11d340  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11d470  class func MedicalRecordFormatter.__allocating_init(store:context:) // init 
	0x11d570  func MedicalRecordFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.ViewControllerFactory : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let profile : HRProfile // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x11e0e0  @objc ViewControllerFactory.profile <stripped>
	0x11e5e0  @objc ViewControllerFactory.makeSettingsViewController <stripped>
	0x11f080  @objc ViewControllerFactory.makeViewControllerForRecord: <stripped>
	0x11f0e0  @objc ViewControllerFactory.makeDetailViewControllerForRecord: <stripped>
	0x11f180  @objc ViewControllerFactory.init <stripped>
	0x11f1e0  @objc ViewControllerFactory..cxx_destruct <stripped>

	// Swift methods
	0x11e100  func ViewControllerFactory.makeViewController(forAccount:) // method 
	0x11e1f0  func ViewControllerFactory.makeAndPresentAddAccountViewController(from:animated:completion:) // method 
	0x11e370  func ViewControllerFactory.makeDetailViewController(forAccount:) // method 
	0x11e490  func ViewControllerFactory.makeDetailViewController(for:) // method 
	0x11e4d0  func ViewControllerFactory.makeLearnMoreViewController() // method 
	0x11e540  func ViewControllerFactory.makeSettingsViewController() // method 
	0x11e6b0  func ViewControllerFactory.makeViewController(for:) // method 
	0x11ea60  func ViewControllerFactory.makeViewController(for:fromDisplayCategory:highlightedRecord:) // method 
	0x11ebe0  func ViewControllerFactory.makeViewController(forConcept:fromDisplayCategory:highlightedRecord:) // method 
	0x11edf0  func ViewControllerFactory.makeViewController(for:) // method 
	0x11f0a0  func ViewControllerFactory.makeDetailViewController(for:) // method 
 }

 class HealthRecordsUI.MedicalRecordAnnotationViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dateGroup : UIStackView // +0x8 (0x8)
	let monthYearLabel : UILabel // +0x10 (0x8)
	let timeLabel : UILabel // +0x18 (0x8)
	let dividerLabel : UILabel // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x120bf0  @objc MedicalRecordAnnotationViewDataSource.init <stripped>
	0x120c10  @objc MedicalRecordAnnotationViewDataSource.numberOfValuesForAnnotationView: <stripped>
	0x120c50  @objc MedicalRecordAnnotationViewDataSource.valueViewForColumnAtIndex:orientation: <stripped>
	0x120c80  @objc MedicalRecordAnnotationViewDataSource.showSeparators <stripped>
	0x120c90  @objc MedicalRecordAnnotationViewDataSource.dateViewWithOrientation: <stripped>
	0x120ce0  @objc MedicalRecordAnnotationViewDataSource.leftMarginViewWithOrientation: <stripped>
	0x120d20  @objc MedicalRecordAnnotationViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0x1202f0  func MedicalRecordAnnotationViewDataSource.numberOfValues(for:) // method 
	0x120c20  func MedicalRecordAnnotationViewDataSource.valueViewForColumn(at:orientation:) // method 
	0x120300  func MedicalRecordAnnotationViewDataSource.showSeparators() // method 
	0x120310  func MedicalRecordAnnotationViewDataSource.dateView(with:) // method 
	0x120340  func MedicalRecordAnnotationViewDataSource.leftMarginView(with:) // method 
	0x120350  func MedicalRecordAnnotationViewDataSource.updateDateGroup(using:) // method 
	0x120380  func MedicalRecordAnnotationViewDataSource.updateDateGroup(using:timeScope:) // method 
 }

 class HealthRecordsUI.DisplayItemProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthRecordsUI.AccountErrorFeedItemData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let accountId : g&
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

 struct HealthRecordsUI.HealthRecordsSupportedChange {

	// Properties
	let store : HKHealthRecordsStore // +0x0
	let isSupported : Bool // +0x8
 }

 class HealthRecordsUI.HealthRecordsSupportedStateChangeListener : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let handler : HealthRecordsSupportedChange // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x128df0  @objc HealthRecordsSupportedStateChangeListener.healthRecordsStore:healthRecordsSupportedDidChangeTo: <stripped>
	0x128ef0  @objc HealthRecordsSupportedStateChangeListener.init <stripped>
	0x128e80  @objc HealthRecordsSupportedStateChangeListener..cxx_destruct <stripped>

	// Swift methods
	0x128b30  class func HealthRecordsSupportedStateChangeListener.__allocating_init(handler:) // init 
	0x128bf0  func HealthRecordsSupportedStateChangeListener.healthRecordsSupportedDidChange(healthRecordsStore:to:) // method 
 }

 class HealthRecordsUI.BloodPressureDataTransformer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit? // +0x10 (0x8)
	var $__lazy_storage_$_displayType : HKDisplayType? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x12b380  @objc BloodPressureDataTransformer.chartPointFor:in:with:dataSourceType: <stripped>
	0x12b490  @objc BloodPressureDataTransformer.graphSeriesWith: <stripped>
	0x12b570  @objc BloodPressureDataTransformer.chartDisplayTypeWith:displayName:unitName: <stripped>

	// Swift methods
	0x12a610  func BloodPressureDataTransformer.createUserInfo(date:timeScope:systole:diastole:) // method 
	0x12ac90  func BloodPressureDataTransformer.chartPoint(for:in:with:dataSourceType:) // method 
	0x12b400  func BloodPressureDataTransformer.graphSeries(with:) // method 
	0x12b560  func BloodPressureDataTransformer.chartDisplayType(with:displayName:unitName:) // method 
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
	let textStyle : TextStyle // +0x8 (0x8)
	var items : ListItem // +0x10 (0x8)
	var font : UIFont // +0x18 (0x8)
	var iconSize : CGSize // +0x20 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interItemSpacingVertical : ÿ+ // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interItemSpacingHorizontal : ÿ+ // +0x38 (0x8)
	let hidesIconsForAccessibilityTextSizes : Bool // +0x40 (0x1)

	// ObjC -> Swift bridged methods
	0x12f900  @objc IconTextListView.initWithCoder: <stripped>
	0x1302b0  @objc IconTextListView.layoutSubviews <stripped>
	0x1303a0  @objc IconTextListView.sizeThatFits: <stripped>
	0x1306f0  @objc IconTextListView.traitCollectionDidChange: <stripped>
	0x130870  @objc IconTextListView.initWithFrame: <stripped>
	0x130770  @objc IconTextListView..cxx_destruct <stripped>

	// Swift methods
	0x12f860  class func IconTextListView.__allocating_init(textStyle:iconSize:interItemSpacingHorizontal:interItemSpacingVertical:hidesIconsForAccessibilityTextSizes:) // init 
	0x12f980  func IconTextListView.addItem(icon:text:textColor:) // method 
	0x12fba0  func IconTextListView.removeAll() // method 
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
	0x1324e0  @objc StandardTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x132550  @objc StandardTableViewCell.initWithCoder: <stripped>

	// Swift methods
	0x132410  class func static StandardTableViewCell.reuseIdentifier.getter // getter 
 }

 class HealthRecordsUI.NoAppTableViewCell : HRStandardTableViewCell {
	// ObjC -> Swift bridged methods
	0x132640  @objc NoAppTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x132700  @objc NoAppTableViewCell.initWithCoder: <stripped>
 }

 class HealthRecordsUI.SourceTableViewCell : HRStandardTableViewCell {

	// Properties
	var sourceModel : HKSourceDataModel?

	// ObjC -> Swift bridged methods
	0x1331d0  @objc SourceTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x133330  @objc SourceTableViewCell.initWithCoder: <stripped>
	0x133420  @objc SourceTableViewCell..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordUnitCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var units : [HKUnit : NSCountedSet] // +0x10 (0x8)

	// Swift methods
	0x133e40  func MedicalRecordUnitCollector.add(units:) // method 
	0x134cc0  func MedicalRecordUnitCollector.preferredUnit() // method 
 }

 class HealthRecordsUI.BloodPressureFormatter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit? // +0x10 (0x8)

	// Swift methods
	0x138b10  func BloodPressureFormatter.rawUnitString.getter // getter 
	0x138bf0  func BloodPressureFormatter.niceUnitString.getter // getter 
	0x138d50  func BloodPressureFormatter.valueString(for:diastolicRange:) // method 
 }

 class HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var lastCachedNumberOfChartPoints : Int? // +0x8 (0x9)

	// ObjC -> Swift bridged methods
	0x1394d0  @objc SingleValueCurrentValueViewDataSource.attributedTitleStringForCurrentValueView: <stripped>
	0x139b30  @objc SingleValueCurrentValueViewDataSource.updateDataSourceWithGraphView:displayType:timeScope: <stripped>
	0x139d00  @objc SingleValueCurrentValueViewDataSource.initWithDateCache:displayCategoryController:healthStore:selectedRangeFormatter: <stripped>
	0x139de0  @objc SingleValueCurrentValueViewDataSource.init <stripped>

	// Swift methods
 }

 enum HealthRecordsUI.AccountIconViewError {

	// Properties
	case missingAccount  
 }

 struct HealthRecordsUI.AccountIconViewData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : g&
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
	case categoryRoom : ModeSegment
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
	let searchIndexController : SearchIndexController // +0x10 (0x8)
	let keyValueDomain : HKKeyValueDomain // +0x18 (0x8)
	let queue : OS_dispatch_queue // +0x20 (0x8)
	let healthRecordsKeyValueDomain : String // +0x28 (0x10)
	let dataVersionKey : String // +0x38 (0x10)

	// ObjC -> Swift bridged methods
	0x140150  @objc HealthRecordsMigrator.migrateIfNeededWithCompletion: <stripped>
	0x1408e0  @objc HealthRecordsMigrator.init <stripped>
	0x140810  @objc HealthRecordsMigrator..cxx_destruct <stripped>

	// Swift methods
 }

 struct HealthRecordsUI.ViewMetrics { }

 class HealthRecordsUI.ConceptListViewController : FeedItemListViewController {
	// Swift methods
 }

 class HealthRecordsUI.ConceptListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let categoryPredicate : NSPredicate
WARNING: couldn't find address 0x0 (0x0) in binary!
	var store : Ó'
WARNING: couldn't find address 0x0 (0x0) in binary!
	let categoryViewDataSourceProvider : 

	// Swift methods
	0x1410f0  func ConceptListViewDataSourceProvider.store.getter // getter 
	0x141130  func ConceptListViewDataSourceProvider.store.setter // setter 
	0x141180  func ConceptListViewDataSourceProvider.store.modify // modifyCoroutine 
	0x140fa0  class func ConceptListViewDataSourceProvider.__allocating_init(categoryPredicate:store:) // init 
	0x141270  func ConceptListViewDataSourceProvider.selectedDataSources(for:) // method 
	0x1412d0  func <stripped> // method 
	0x141890  func ConceptListViewDataSourceProvider.makePromotionDataSource() // method 
 }

 class HealthRecordsUI.MedicationDispenseFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x142c20  @objc MedicationDispenseFormatter.init <stripped>
	0x142c80  @objc MedicationDispenseFormatter..cxx_destruct <stripped>

	// Swift methods
	0x1426d0  func MedicationDispenseFormatter.structuredItems(from:) // method 
	0x142670  class func MedicationDispenseFormatter.__allocating_init(store:context:) // init 
	0x142b70  func MedicationDispenseFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.HealthRecordsNotAvailableViewController : UIAlertController /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x143ff0  @objc HealthRecordsNotAvailableViewController.initWithNibName:bundle: <stripped>
	0x144140  @objc HealthRecordsNotAvailableViewController.initWithCoder: <stripped>

	// Swift methods
	0x143c10  class func static HealthRecordsNotAvailableViewController.presentableInstance() // method 
 }

 enum HealthRecordsUI.BrowseCategoryError {

	// Properties
	case decodeFailure : (rawValue: String)
 }

 enum HealthRecordsUI.BrowseCategory {

	// Properties
	case subcategory : Kind
WARNING: couldn't find address 0x0 (0x0) in binary!
	case account : ¿ü
	case clinicalDocuments  
	case healthRecords  
	case addAccount  
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
	0x149790  @objc ConceptHeaderCell.headerImage <stripped>
	0x1497d0  @objc ConceptHeaderCell.setHeaderImage: <stripped>
	0x1498b0  @objc ConceptHeaderCell.title <stripped>
	0x149970  @objc ConceptHeaderCell.setTitle: <stripped>
	0x149b40  @objc ConceptHeaderCell.categoryColor <stripped>
	0x149c00  @objc ConceptHeaderCell.setCategoryColor: <stripped>
	0x149f70  @objc ConceptHeaderCell.setupSubviews <stripped>
	0x14a470  @objc ConceptHeaderCell.setUpConstraints <stripped>
	0x14a4a0  @objc ConceptHeaderCell.intendedPlacement <stripped>
	0x14a500  @objc ConceptHeaderCell.setIntendedPlacement: <stripped>
	0x14a790  @objc ConceptHeaderCell._updateForCurrentSizeCategory <stripped>
	0x14a960  @objc ConceptHeaderCell.traitCollectionDidChange: <stripped>
	0x14ae60  @objc ConceptHeaderCell.initWithStyle:reuseIdentifier: <stripped>
	0x14af30  @objc ConceptHeaderCell.initWithCoder: <stripped>
	0x14ad30  @objc ConceptHeaderCell..cxx_destruct <stripped>

	// Swift methods
	0x1497b0  func ConceptHeaderCell.headerImage.getter // getter 
	0x1497f0  func ConceptHeaderCell.headerImage.setter // setter 
	0x149830  func ConceptHeaderCell.headerImage.modify // modifyCoroutine 
	0x149920  func ConceptHeaderCell.title.getter // getter 
	0x1499d0  func ConceptHeaderCell.title.setter // setter 
	0x149a00  func ConceptHeaderCell.title.modify // modifyCoroutine 
	0x149ba0  func ConceptHeaderCell.categoryColor.getter // getter 
	0x149c90  func ConceptHeaderCell.categoryColor.setter // setter 
	0x149cd0  func ConceptHeaderCell.categoryColor.modify // modifyCoroutine 
	0x14a9b0  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartSeries : HKBloodPressureSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
	0x14b7c0  @objc BloodPressureChartSeries.selectedPathRange <stripped>
	0x14ba60  @objc BloodPressureChartSeries.init <stripped>
 }

 class HealthRecordsUI.ProfileOnboardingActionViewController {
 class HealthRecordsUI.OnboardingTableViewCell : type metadata for ChromeHostViewTableCell /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {
	// ObjC -> Swift bridged methods
	0x14bfa0  @objc OnboardingTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x14c000  @objc OnboardingTableViewCell.initWithCoder: <stripped>

	// Swift methods
 }

 class HealthRecordsUI.ProviderNotFoundView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let glyphView : UIView // +0x8 (0x8)
	let providerStatusLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x14c810  @objc ProviderNotFoundView.initWithFrame: <stripped>
	0x14c840  @objc ProviderNotFoundView.initWithCoder: <stripped>
	0x14cfb0  @objc ProviderNotFoundView..cxx_destruct <stripped>

	// Swift methods
	0x14c890  func <stripped> // method 
 }

 class HealthRecordsUI.RecordKindDataProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RecordKindDataProviderProtocol {

	// Properties
	let healthStore : HKHealthStore // +0x10 (0x8)
	let queue : OS_dispatch_queue // +0x18 (0x8)

	// Swift methods
	0x14d2e0  class func RecordKindDataProvider.__allocating_init(healthStore:) // init 
	0x14d490  func RecordKindDataProvider.fetchRecordKinds(completion:) // method 
	0x14dd10  func RecordKindDataProvider.fetchRecordKinds(in:completion:) // method 
	0x14ebb0  func RecordKindDataProvider.addObserver(following:handler:) // method 
 }

 class HealthRecordsUI.CategoryViewControllerManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var activeCategoryViewController : weak UIViewController? // +0x10 (0x8)

	// Swift methods
	0x151610  func CategoryViewControllerManager.isCategoryViewControllerOnTop() // method 
	0x151cf0  func CategoryViewControllerManager.hasActiveCategoryViewController() // method 
 }

 class HealthRecordsUI.Features : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x151fe0  @objc Features.init <stripped>
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
	0x153370  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
	0x153420  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
	0x153430  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
 }

 struct HealthRecordsUI.RecordKindFeedItemIdentifierFactory { }

 class HealthRecordsUI.RecordPrimaryTitleCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let recordTitleLabel : UILabel
	let recordDateLabel : UILabel

	// ObjC -> Swift bridged methods
	0x154470  @objc RecordPrimaryTitleCell.recordTitleLabel <stripped>
	0x1544b0  @objc RecordPrimaryTitleCell.recordDateLabel <stripped>
	0x154530  @objc RecordPrimaryTitleCell.initWithStyle:reuseIdentifier: <stripped>
	0x154550  @objc RecordPrimaryTitleCell.initWithCoder: <stripped>
	0x154c00  @objc RecordPrimaryTitleCell..cxx_destruct <stripped>

	// Swift methods
	0x154590  func <stripped> // method 
 }

 class HealthRecordsUI.RecordDetailItemCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let bodyLabel : UILabel

	// ObjC -> Swift bridged methods
	0x154cb0  @objc RecordDetailItemCell.titleLabel <stripped>
	0x154cf0  @objc RecordDetailItemCell.bodyLabel <stripped>
	0x154d70  @objc RecordDetailItemCell.initWithStyle:reuseIdentifier: <stripped>
	0x154df0  @objc RecordDetailItemCell.initWithCoder: <stripped>
	0x1554d0  @objc RecordDetailItemCell..cxx_destruct <stripped>

	// Swift methods
	0x154e30  func <stripped> // method 
 }

 class HealthRecordsUI.RecordReferenceRangeCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let referenceRangeView : HKReferenceRangeView // +0x8 (0x8)
	var valueInRange : HKInspectableValueInRange? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x155580  @objc RecordReferenceRangeCell.valueInRange <stripped>
	0x155610  @objc RecordReferenceRangeCell.setValueInRange: <stripped>
	0x155750  @objc RecordReferenceRangeCell.initWithStyle:reuseIdentifier: <stripped>
	0x155770  @objc RecordReferenceRangeCell.initWithCoder: <stripped>
	0x155810  @objc RecordReferenceRangeCell..cxx_destruct <stripped>

	// Swift methods
	0x1555d0  func RecordReferenceRangeCell.valueInRange.getter // getter 
	0x155660  func RecordReferenceRangeCell.valueInRange.setter // setter 
	0x155680  func RecordReferenceRangeCell.valueInRange.modify // modifyCoroutine 
 }

 class HealthRecordsUI.RecordDataSourceCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let brandView : WDMedicalRecordBrandView

	// ObjC -> Swift bridged methods
	0x155970  @objc RecordDataSourceCell.initWithStyle:reuseIdentifier: <stripped>
	0x155990  @objc RecordDataSourceCell.initWithCoder: <stripped>
	0x155be0  @objc RecordDataSourceCell.configCellWith:owner:dataProvider: <stripped>
	0x155c90  @objc RecordDataSourceCell..cxx_destruct <stripped>

	// Swift methods
	0x155a80  func RecordDataSourceCell.configCell(with:owner:dataProvider:) // method 
 }

 class HealthRecordsUI.MonogramProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monogrammers : UnboundedCache // +0x10 (0x48)
	var monograms : UnboundedCache // +0x58 (0x48)

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
	0x158b30  @objc ProcedureRecordFormatter.init <stripped>
	0x158b90  @objc ProcedureRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x158970  class func ProcedureRecordFormatter.__allocating_init(store:context:) // init 
	0x158a80  func ProcedureRecordFormatter.displayItems(from:) // method 
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
