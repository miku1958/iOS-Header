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
	0x65470  @objc SingleValueAnnotationViewDataSource.init <stripped>
	0x654c0  @objc SingleValueAnnotationViewDataSource.valueViewForColumnAtIndex:orientation: <stripped>
	0x65540  @objc SingleValueAnnotationViewDataSource.updateUsing: <stripped>
	0x66020  @objc SingleValueAnnotationViewDataSource.updateUsing:valueRange:dateRange:timeScope: <stripped>
	0x66730  @objc SingleValueAnnotationViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0x654f0  func SingleValueAnnotationViewDataSource.update(using:) // method 
	0x655b0  func SingleValueAnnotationViewDataSource.updateReferenceRange(using:) // method 
	0x65d80  func SingleValueAnnotationViewDataSource.update(using:valueRange:dateRange:timeScope:) // method 
	0x66110  func SingleValueAnnotationViewDataSource.updateValue(using:) // method 
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
	0x67940  @objc SingleValueChartData.init <stripped>
	0x678b0  @objc SingleValueChartData..cxx_destruct <stripped>

	// Swift methods
	0x677f0  class func SingleValueChartData.__allocating_init(chartableQuantitySet:date:dateFormat:hasTime:partOfOutOfRangeSeries:) // init 
 }

 class HealthRecordsUI.LoadingTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containerView : UIView // +0x8 (0x8)
	let spinner : UIActivityIndicatorView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x68110  @objc LoadingTableViewCell.init <stripped>
	0x68220  @objc LoadingTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x682f0  @objc LoadingTableViewCell.initWithCoder: <stripped>
	0x68a30  @objc LoadingTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0x68060  class func static LoadingTableViewCell.reuseIdentifier.getter // getter 
	0x68330  func LoadingTableViewCell.willDisplay() // method 
	0x68350  func LoadingTableViewCell.didEndDisplaying() // method 
	0x68370  func <stripped> // method 
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
	0x6ea70  @objc TapToRadarManager.init <stripped>
 }

 struct HealthRecordsUI.SyncTaskScheduler: TaskScheduler { }

 class HealthRecordsUI.DiagnosticTestResultFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x6f7f0  @objc DiagnosticTestResultFormatter.init <stripped>
	0x6f780  @objc DiagnosticTestResultFormatter..cxx_destruct <stripped>

	// Swift methods
	0x6f630  class func DiagnosticTestResultFormatter.__allocating_init(store:context:) // init 
	0x6f700  func DiagnosticTestResultFormatter.displayItems(from:) // method 
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
	0x72640  @objc ClinicalSourcesDataProvider.initWithHealthRecordsStore: <stripped>
	0x725e0  @objc ClinicalSourcesDataProvider..cxx_destruct <stripped>
 }

 class HealthRecordsUI.InternalStateViewController : UITableViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var dataProvider : InternalStateProvider
	var sections : InternalStateSection

	// ObjC -> Swift bridged methods
	0x72920  @objc InternalStateViewController.init <stripped>
	0x729c0  @objc InternalStateViewController.initWithCoder: <stripped>
	0x72a60  @objc InternalStateViewController.dealloc <stripped>
	0x72c00  @objc InternalStateViewController.viewDidLoad <stripped>
	0x72c30  @objc InternalStateViewController.viewWillAppear: <stripped>
	0x73050  @objc InternalStateViewController.initWithStyle: <stripped>
	0x73080  @objc InternalStateViewController.initWithNibName:bundle: <stripped>
	0x72ad0  @objc InternalStateViewController..cxx_destruct <stripped>

	// Swift methods
	0x72c90  func <stripped> // method 
 }

 class HealthRecordsUI.Cell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x726b0  @objc Cell.initWithStyle:reuseIdentifier: <stripped>
	0x72740  @objc Cell.initWithCoder: <stripped>

	// Swift methods
	0x72680  class func <stripped> // getter 
	0x727a0  func <stripped> // method 
 }

 class HealthRecordsUI.FeedItemListViewController : type metadata for DataTypeDetailViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]

	// ObjC -> Swift bridged methods
	0x74200  @objc FeedItemListViewController.initWithCoder: <stripped>
	0x743c0  @objc FeedItemListViewController.viewDidLoad <stripped>
	0x74660  @objc FeedItemListViewController.viewWillAppear: <stripped>
	0x74740  @objc FeedItemListViewController.initWithCollectionViewLayout: <stripped>
	0x74770  @objc FeedItemListViewController.initWithNibName:bundle: <stripped>
	0x74710  @objc FeedItemListViewController..cxx_destruct <stripped>

	// Swift methods
	0x74100  func <stripped> // method 
	0x741f0  func <stripped> // getter 
 }

 class HealthRecordsUI.FeedItemListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]
WARNING: couldn't find address 0x0 (0x0) in binary!
	let store : Ó'

	// Swift methods
	0x74830  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateSection : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String
	let items : InternalStateItem

	// ObjC -> Swift bridged methods
	0x76560  @objc InternalStateSection.init <stripped>
	0x76530  @objc InternalStateSection..cxx_destruct <stripped>

	// Swift methods
	0x76870  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateItem : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String
	let value : String

	// ObjC -> Swift bridged methods
	0x76ab0  @objc InternalStateItem.init <stripped>
	0x76a70  @objc InternalStateItem..cxx_destruct <stripped>

	// Swift methods
	0x76d10  func <stripped> // method 
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
	0x77d90  @objc SingleValueDataTransformer.chartPointFor:in:with:dataSourceType: <stripped>
	0x77f00  @objc SingleValueDataTransformer.graphSeriesWith: <stripped>
	0x77f60  @objc SingleValueDataTransformer.chartDisplayTypeWith:displayName:unitName: <stripped>

	// Swift methods
	0x77c10  func SingleValueDataTransformer.chartPoint(for:in:with:dataSourceType:) // method 
	0x77ef0  func SingleValueDataTransformer.graphSeries(with:) // method 
	0x77f50  func SingleValueDataTransformer.chartDisplayType(with:displayName:unitName:) // method 
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
	0x7f4b0  @objc ConditionRecordFormatter.init <stripped>
	0x7f440  @objc ConditionRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x7f2e0  class func ConditionRecordFormatter.__allocating_init(store:context:) // init 
	0x7f3b0  func ConditionRecordFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.TimelineHeaderView : UITableViewHeaderFooterView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : weak HRTimelineHeaderViewDelegate? // +0x8 (0x8)
	var $__lazy_storage_$_titleLabel : UILabel? // +0x10 (0x8)
	var $__lazy_storage_$_subtitleLabel : UILabel? // +0x18 (0x8)
	var $__lazy_storage_$_backgroundEffectView : UIVisualEffectView? // +0x20 (0x8)
	var $__lazy_storage_$_separatorView : UIView? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x80e00  @objc TimelineHeaderView.delegate <stripped>
	0x80e80  @objc TimelineHeaderView.setDelegate: <stripped>
	0x811e0  @objc TimelineHeaderView.initWithReuseIdentifier: <stripped>
	0x812a0  @objc TimelineHeaderView.initWithCoder: <stripped>
	0x816c0  @objc TimelineHeaderView.applyTitle:subtitle: <stripped>
	0x818f0  @objc TimelineHeaderView.applyStyleFromNavigationBar: <stripped>
	0x81980  @objc TimelineHeaderView.prepareForReuse <stripped>
	0x81a20  @objc TimelineHeaderView.floating <stripped>
	0x81a80  @objc TimelineHeaderView.setFloating: <stripped>
	0x82560  @objc TimelineHeaderView.layoutSubviews <stripped>
	0x826b0  @objc TimelineHeaderView.sizeThatFits: <stripped>
	0x82940  @objc TimelineHeaderView.traitCollectionDidChange: <stripped>
	0x829f0  @objc TimelineHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x80dd0  class func static TimelineHeaderView.reuseIdentifier.getter // getter 
	0x80e40  func TimelineHeaderView.delegate.getter // getter 
	0x80ec0  func TimelineHeaderView.delegate.setter // setter 
	0x80f10  func TimelineHeaderView.delegate.modify // modifyCoroutine 
	0x80fe0  func <stripped> // getter 
	0x81000  func <stripped> // getter 
	0x812e0  func <stripped> // method 
	0x815f0  func TimelineHeaderView.apply(title:subtitle:) // method 
	0x81770  func TimelineHeaderView.applyStyle(from:) // method 
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
	0x82d40  @objc MedicalRecordChartabilityResult.configuration <stripped>
	0x82d90  @objc MedicalRecordChartabilityResult.masterDataSource <stripped>
	0x82dd0  @objc MedicalRecordChartabilityResult.seriesDataSources <stripped>
	0x82e40  @objc MedicalRecordChartabilityResult.outOfRangeDataSource <stripped>
	0x82ea0  @objc MedicalRecordChartabilityResult.noRangeDataSource <stripped>
	0x82f00  @objc MedicalRecordChartabilityResult.latestChartableDate <stripped>
	0x82fb0  @objc MedicalRecordChartabilityResult.shouldProduceAtLeastOneOverlay <stripped>
	0x832e0  @objc MedicalRecordChartabilityResult.init <stripped>
	0x83240  @objc MedicalRecordChartabilityResult..cxx_destruct <stripped>

	// Swift methods
	0x83050  func MedicalRecordChartabilityResult.shouldProduceAtLeastOneOverlay.getter // getter 
	0x830d0  class func MedicalRecordChartabilityResult.__allocating_init(configuration:masterDataSource:seriesDataSources:outOfRangeDataSource:noRangeDataSource:latestChartableDate:) // init 
 }

 class HealthRecordsUI.MedicalRecordChartabilityDeterminer : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x85880  @objc MedicalRecordChartabilityDeterminer.determineChartabilityForConcept:records:completion: <stripped>
	0x85c30  @objc MedicalRecordChartabilityDeterminer.init <stripped>

	// Swift methods
	0x83310  func MedicalRecordChartabilityDeterminer.determineChartability(for:records:completion:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeriesCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let concept : HKConcept // +0x10 (0x8)
	var preferredColors : HKUIMetricColors? // +0x18 (0x8)
	var chartableQuantitySets : [HKChartableCodedQuantitySet] // +0x20 (0x8)

	// Swift methods
	0x85b50  class func MedicalRecordChartableSeriesCollector.__allocating_init(concept:) // init 
	0x85cb0  func MedicalRecordChartableSeriesCollector.collect(record:) // method 
	0x85ec0  func MedicalRecordChartableSeriesCollector.allUnits.getter // getter 
	0x862e0  func MedicalRecordChartableSeriesCollector.chartDataSourceSeries(compatibleWith:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeries : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let concept : HKConcept
	let chartableQuantitySets : [HKChartableCodedQuantitySet]
	let preferredColors : HKUIMetricColors?

	// ObjC -> Swift bridged methods
	0x87640  @objc MedicalRecordChartableSeries.init <stripped>
	0x875a0  @objc MedicalRecordChartableSeries..cxx_destruct <stripped>

	// Swift methods
	0x869e0  func <stripped> // getter 
	0x868c0  class func MedicalRecordChartableSeries.__allocating_init(concept:chartableQuantities:unit:preferredColors:) // init 
	0x86c60  func MedicalRecordChartableSeries.createDataSource(with:unit:) // method 
	0x86d60  func MedicalRecordChartableSeries.outOfRangeQuantitySets() // method 
	0x87170  func MedicalRecordChartableSeries.noRangeQuantitySets() // method 
 }

 struct HealthRecordsUI.UnboundedCache: Cache {

	// Properties
	let storageBox : Box
	let lowMemoryWarnings : Any
	let didEnterBackground : Any
 }

 class HealthRecordsUI.SingleValueChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xa1400  @objc SingleValueChartConfiguration.chartControllerClass <stripped>
	0xa1460  @objc SingleValueChartConfiguration.shouldShowOutOfRangeOverlay <stripped>
	0xa1480  @objc SingleValueChartConfiguration.dataTransformer <stripped>
	0xa1530  @objc SingleValueChartConfiguration.init <stripped>

	// Swift methods
	0xa1420  func SingleValueChartConfiguration.chartControllerClass.getter // getter 
	0xa1470  func SingleValueChartConfiguration.shouldShowOutOfRangeOverlay.getter // getter 
	0xa14b0  func SingleValueChartConfiguration.dataTransformer.getter // getter 
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
	0xa2580  @objc SettingsViewController.init <stripped>
	0xa2610  @objc SettingsViewController.initWithCoder: <stripped>
	0xa26d0  @objc SettingsViewController.dealloc <stripped>
	0xa3350  @objc SettingsViewController.viewDidLoad <stripped>
	0xa35f0  @objc SettingsViewController.viewDidAppear: <stripped>
	0xa3630  @objc SettingsViewController.tapToRadar: <stripped>
	0xa4340  @objc SettingsViewController.healthRecordsStore:accountDidChange:changeType: <stripped>
	0xa4620  @objc SettingsViewController.initWithUsingInsetStyling: <stripped>
	0xa46b0  @objc SettingsViewController.initWithStyle: <stripped>
	0xa4780  @objc SettingsViewController.initWithNibName:bundle: <stripped>
	0xa2760  @objc SettingsViewController..cxx_destruct <stripped>

	// Swift methods
	0xa36c0  func SettingsViewController.accountStateDidChange(healthRecordsStore:account:changeType:) // method 
	0xa43c0  func SettingsViewController.providedHealthExperienceStore.getter // getter 
	0xa4420  func SettingsViewController.providedHealthStore.getter // getter 
	0xa4490  func SettingsViewController.pushForAPIAuthorization(forSource:) // method 
 }

 class HealthRecordsUI.AccountErrorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let profile : HRProfile // +0x10 (0x8)
	let healthRecordsStore : HKHealthRecordsStore // +0x18 (0x8)

	// Swift methods
	0xa9670  func AccountErrorManager.presentRelogin(for:from:completion:) // method 
	0xa9c50  func AccountErrorManager.presentRelogin(for:from:completion:) // method 
 }

 class HealthRecordsUI.BloodPressureChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xaaa90  @objc BloodPressureChartConfiguration.chartControllerClass <stripped>
	0xaaaf0  @objc BloodPressureChartConfiguration.shouldShowOutOfRangeOverlay <stripped>
	0xaab10  @objc BloodPressureChartConfiguration.dataTransformer <stripped>
	0xaabe0  @objc BloodPressureChartConfiguration.init <stripped>

	// Swift methods
	0xaaab0  func BloodPressureChartConfiguration.chartControllerClass.getter // getter 
	0xaab00  func BloodPressureChartConfiguration.shouldShowOutOfRangeOverlay.getter // getter 
	0xaab50  func BloodPressureChartConfiguration.dataTransformer.getter // getter 
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
	0xab610  @objc FilterSettingsViewController.initWithDelegate:selectedCategories:selectedAccounts: <stripped>
	0xab690  @objc FilterSettingsViewController.initWithCoder: <stripped>
	0xabe80  @objc FilterSettingsViewController.viewDidLoad <stripped>
	0xabec0  @objc FilterSettingsViewController.numberOfSectionsInTableView: <stripped>
	0xac000  @objc FilterSettingsViewController.tableView:viewForHeaderInSection: <stripped>
	0xac080  @objc FilterSettingsViewController.tableView:numberOfRowsInSection: <stripped>
	0xacd50  @objc FilterSettingsViewController.tableView:cellForRowAtIndexPath: <stripped>
	0xacec0  @objc FilterSettingsViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0xacf90  @objc FilterSettingsViewController.tableView:heightForHeaderInSection: <stripped>
	0xacfb0  @objc FilterSettingsViewController.tableView:heightForFooterInSection: <stripped>
	0xad9e0  @objc FilterSettingsViewController.doneButtonTapped <stripped>
	0xadb20  @objc FilterSettingsViewController.initWithUsingInsetStyling: <stripped>
	0xadbb0  @objc FilterSettingsViewController.initWithStyle: <stripped>
	0xadc80  @objc FilterSettingsViewController.initWithNibName:bundle: <stripped>
	0xada40  @objc FilterSettingsViewController..cxx_destruct <stripped>

	// Swift methods
	0xaaee0  class func FilterSettingsViewController.__allocating_init(withDelegate:selectedCategories:selectedAccounts:) // init 
	0xacfc0  func <stripped> // method 
	0xad220  func <stripped> // method 
	0xad480  func <stripped> // method 
	0xad4b0  func <stripped> // method 
	0xad6d0  func <stripped> // method 
	0xad6f0  func <stripped> // method 
	0xad870  func <stripped> // method 
 }

 class HealthRecordsUI.AddAccountTableViewCell : HRStandardTableViewCell {

	// Properties
	var alignWithAccountTitle : Bool // +0x8 (0x1)

	// ObjC -> Swift bridged methods
	0xb26c0  @objc AddAccountTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xb2790  @objc AddAccountTableViewCell.initWithCoder: <stripped>
	0xb2a50  @objc AddAccountTableViewCell.tintColorDidChange <stripped>

	// Swift methods
	0xb2830  func <stripped> // method 
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
	0xb4de0  class func CategoryCountDataProvider.__allocating_init(healthStore:) // init 
	0xb4e20  func CategoryCountDataProvider.fetchCategoryCounts(categories:additionalPredicate:completion:) // method 
 }

 class HealthRecordsUI.AllergyRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_reactionFormatter : AllergyReactionFormatter // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xbecf0  @objc AllergyRecordFormatter.init <stripped>
	0xbec60  @objc AllergyRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0xbdbb0  func AllergyRecordFormatter.structuredItems(from:) // method 
	0xbdd90  class func AllergyRecordFormatter.__allocating_init(store:context:) // init 
	0xbde50  func AllergyRecordFormatter.displayItems(from:) // method 
	0xbdeb0  func <stripped> // method 
 }

 struct HealthRecordsUI.CategorySummaryFeedItemIdentifierFactory { }

 class HealthRecordsUI.MedicationOrderFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xc0e00  @objc MedicationOrderFormatter.init <stripped>
	0xc0d70  @objc MedicationOrderFormatter..cxx_destruct <stripped>

	// Swift methods
	0xc03b0  func MedicationOrderFormatter.structuredItems(from:) // method 
	0xc07f0  class func MedicationOrderFormatter.__allocating_init(store:context:) // init 
	0xc08b0  func MedicationOrderFormatter.displayItems(from:) // method 
	0xc0910  func <stripped> // method 
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
	0xc7ea0  @objc MedicationDosageFormatter.init <stripped>
	0xc7f00  @objc MedicationDosageFormatter..cxx_destruct <stripped>

	// Swift methods
	0xc7860  func MedicationDosageFormatter.structuredItems(from:country:) // method 
	0xc7af0  func MedicationDosageFormatter.displayItems(from:country:) // method 
	0xc7810  class func MedicationDosageFormatter.__allocating_init(store:context:) // init 
	0xc7dc0  func MedicationDosageFormatter.displayItems(from:country:) // method 
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
	0xc9620  class func HealthRecordsURLHandler.__allocating_init() // init 
	0xc9650  func HealthRecordsURLHandler.parse(url:) // method 
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
	0xcb810  @objc RecordCategoryViewController.initWithCoder: <stripped>
	0xcb8b0  @objc RecordCategoryViewController.dealloc <stripped>
	0xcbd10  @objc RecordCategoryViewController.viewDidLoad <stripped>
	0xcbe30  @objc RecordCategoryViewController.viewWillLayoutSubviews <stripped>
	0xcbfb0  @objc RecordCategoryViewController.modePickerDidChange: <stripped>
	0xcc030  @objc RecordCategoryViewController.tapToRadar: <stripped>
	0xccb70  @objc RecordCategoryViewController.initWithNibName:bundle: <stripped>
	0xcb920  @objc RecordCategoryViewController..cxx_destruct <stripped>

	// Swift methods
	0xcbe60  func <stripped> // method 
	0xcc0c0  func <stripped> // method 
	0xcc1d0  func <stripped> // method 
	0xcc2b0  func <stripped> // method 
	0xcc880  func <stripped> // method 
	0xcca00  func <stripped> // getter 
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
	0xce7b0  @objc ExplainerTextFooterCell.content <stripped>
	0xce870  @objc ExplainerTextFooterCell.setContent: <stripped>
	0xceb40  @objc ExplainerTextFooterCell.initWithReuseIdentifier: <stripped>
	0xcf180  @objc ExplainerTextFooterCell.initWithStyle:reuseIdentifier: <stripped>
	0xcf250  @objc ExplainerTextFooterCell.initWithCoder: <stripped>
	0xcf090  @objc ExplainerTextFooterCell..cxx_destruct <stripped>

	// Swift methods
	0xce820  func ExplainerTextFooterCell.content.getter // getter 
	0xce8d0  func ExplainerTextFooterCell.content.setter // setter 
	0xce900  func ExplainerTextFooterCell.content.modify // modifyCoroutine 
	0xcebe0  func <stripped> // method 
 }

 class HealthRecordsUI.NoDataViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let style : Style // +0x8 (0x1)

	// ObjC -> Swift bridged methods
	0xcff20  @objc NoDataViewController.initWithCoder: <stripped>
	0xd0090  @objc NoDataViewController.loadView <stripped>
	0xd00c0  @objc NoDataViewController.initWithNibName:bundle: <stripped>

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
	0xd0fa0  func CancellationToken.isCancelled.getter // getter 
	0xd0fd0  func CancellationToken.cancelBlock.getter // getter 
	0xd1010  func CancellationToken.cancelBlock.setter // setter 
	0xd1050  func CancellationToken.cancelBlock.modify // modifyCoroutine 
	0xd0eb0  class func CancellationToken.__allocating_init(cancelBlock:) // init 
	0xd13f0  func CancellationToken.cancel() // method 
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
	0xd17a0  func PromotionListViewDataSourceProvider.store.getter // getter 
	0xd17e0  func PromotionListViewDataSourceProvider.store.setter // setter 
	0xd1830  func PromotionListViewDataSourceProvider.store.modify // modifyCoroutine 
	0xd1530  class func PromotionListViewDataSourceProvider.__allocating_init(predicate:store:) // init 
	0xd18e0  func PromotionListViewDataSourceProvider.selectedDataSources(for:) // method 
	0xd1930  func PromotionListViewDataSourceProvider.makePromotionDataSource() // method 
 }

 class HealthRecordsUI.AccountErrorTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let accountErrorView : AccountErrorFeedItemView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xd2040  @objc AccountErrorTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xd20a0  @objc AccountErrorTableViewCell.initWithCoder: <stripped>
	0xd24e0  @objc AccountErrorTableViewCell.layoutSubviews <stripped>
	0xd25d0  @objc AccountErrorTableViewCell.sizeThatFits: <stripped>
	0xd27f0  @objc AccountErrorTableViewCell.traitCollectionDidChange: <stripped>
	0xd2900  @objc AccountErrorTableViewCell.layoutMarginsDidChange <stripped>
	0xd2a80  @objc AccountErrorTableViewCell.prepareForReuse <stripped>
	0xd2b50  @objc AccountErrorTableViewCell.setHighlighted:animated: <stripped>
	0xd2bc0  @objc AccountErrorTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0xd1f60  class func static AccountErrorTableViewCell.reuseIdentifier.getter // getter 
	0xd20e0  func <stripped> // method 
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
	0xd32c0  @objc InternalStateProvider.initWithHealthStore: <stripped>
	0xd3400  @objc InternalStateProvider.initWithProfile: <stripped>
	0xd34f0  @objc InternalStateProvider.init <stripped>
	0xd35c0  @objc InternalStateProvider.dealloc <stripped>
	0xd4220  @objc InternalStateProvider.fetchJSONWithCompletion: <stripped>
	0xd3630  @objc InternalStateProvider..cxx_destruct <stripped>

	// Swift methods
	0xd36d0  func <stripped> // method 
	0xd3ce0  func InternalStateProvider.fetchJSON(completion:) // method 
	0xd4290  func <stripped> // method 
 }

 class HealthRecordsUI.SuggestedActionTileViewControllerShim {
 class HealthRecordsUI.OnboardingSuggestedActionViewController {
 class HealthRecordsUI.BloodPressureCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
	0xda390  @objc BloodPressureCurrentValueViewDataSource.initWithDateCache:displayCategoryController:healthStore:selectedRangeFormatter: <stripped>
	0xda440  @objc BloodPressureCurrentValueViewDataSource.init <stripped>
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
	0xe37d0  @objc MedicalRecordChartDataSource.displayName <stripped>
	0xe39a0  @objc MedicalRecordChartDataSource.initWithConcept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type: <stripped>
	0xe3d30  @objc MedicalRecordChartDataSource.cachedBlockForPath:context: <stripped>
	0xe49f0  @objc MedicalRecordChartDataSource.chartDisplayTypeWithVerticalAxis: <stripped>
	0xe62a0  @objc MedicalRecordChartDataSource.init <stripped>
	0xe6300  @objc MedicalRecordChartDataSource..cxx_destruct <stripped>

	// Swift methods
	0xe3590  func MedicalRecordChartDataSource.unit.getter // getter 
	0xe3610  func MedicalRecordChartDataSource.preferredColors.getter // getter 
	0xe3670  func MedicalRecordChartDataSource.chartableXRange.getter // getter 
	0xe3770  func MedicalRecordChartDataSource.chartableYRange.getter // getter 
	0xe38b0  func MedicalRecordChartDataSource.displayName.getter // getter 
	0xe3080  class func MedicalRecordChartDataSource.__allocating_init(concept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type:) // init 
	0xe3dd0  func MedicalRecordChartDataSource.chartPoints(in:with:) // method 
	0xe4260  func MedicalRecordChartDataSource.numberOfDataPoints(in:) // method 
	0xe4520  func MedicalRecordChartDataSource.graphSeries(withMainColor:verticalAxis:) // method 
	0xe4830  func MedicalRecordChartDataSource.chartDisplayType(verticalAxis:) // method 
	0xe4a50  func MedicalRecordChartDataSource.take(chartableCodedQuantitySets:) // method 
	0xe54f0  func MedicalRecordChartDataSource.bucketQuantitySets(with:) // method 
 }

 class HealthRecordsUI.CategoryRecordQueryDescription : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SampleQueryDescription {

	// Properties
	let category : BrowseCategory // +0x80000400 (0x0)
	let sampleQueryDescription : HKSampleQueryDescription // +0x0 (0x8)

	// Swift methods
	0xea0e0  func CategoryRecordQueryDescription.sampleType.getter // getter 
	0xea110  func CategoryRecordQueryDescription.predicate.getter // getter 
	0xea150  func CategoryRecordQueryDescription.hash(into:) // method 
	0xea230  func CategoryRecordQueryDescription.hashValue.getter // getter 
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
	0xeaf30  @objc VaccinationRecordFormatter.init <stripped>
	0xeaec0  @objc VaccinationRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0xead60  class func VaccinationRecordFormatter.__allocating_init(store:context:) // init 
	0xeae30  func VaccinationRecordFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.NotificationPolicy : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xed590  @objc NotificationPolicy.userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler: <stripped>
	0xedaf0  @objc NotificationPolicy.userNotificationCenter:willPresentNotification:withCompletionHandler: <stripped>
	0xedc90  @objc NotificationPolicy.init <stripped>

	// Swift methods
	0xed400  func NotificationPolicy.userNotificationCenter(_:didReceive:withCompletionHandler:) // method 
	0xed610  func NotificationPolicy.userNotificationCenter(_:willPresent:withCompletionHandler:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartPoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let chartableSet : HKChartableCodedQuantitySet // +0x8 (0x8)
	let blockCoordinateInfo : SingleValueChartData // +0x10 (0x8)
	let sortedYValues : [Double] // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xeeaf0  @objc MedicalRecordChartPoint.userInfo <stripped>
	0xeebc0  @objc MedicalRecordChartPoint.xValueAsGenericType <stripped>
	0xeed50  @objc MedicalRecordChartPoint.maxXValueAsGenericType <stripped>
	0xf0f80  @objc MedicalRecordChartPoint.minXValueAsGenericType <stripped>
	0xeee80  @objc MedicalRecordChartPoint.yValue <stripped>
	0xeef30  @objc MedicalRecordChartPoint.yValueForKey: <stripped>
	0xef150  @objc MedicalRecordChartPoint.allYValues <stripped>
	0xef1b0  @objc MedicalRecordChartPoint.minYValue <stripped>
	0xef260  @objc MedicalRecordChartPoint.maxYValue <stripped>
	0xef2e0  @objc MedicalRecordChartPoint.description <stripped>
	0xef5f0  @objc MedicalRecordChartPoint.init <stripped>
	0xef650  @objc MedicalRecordChartPoint..cxx_destruct <stripped>

	// Swift methods
	0xee9b0  class func MedicalRecordChartPoint.__allocating_init(chartableSet:unit:blockCoordinateInfo:) // init 
	0xeeac0  func MedicalRecordChartPoint.userInfo() // method 
	0xeeb20  func MedicalRecordChartPoint.xValueAsGenericType() // method 
	0xeecb0  func MedicalRecordChartPoint.maxXValueAsGenericType() // method 
	0xf0f90  func MedicalRecordChartPoint.minXValueAsGenericType() // method 
	0xeee40  func MedicalRecordChartPoint.yValue() // method 
	0xeeea0  func MedicalRecordChartPoint.yValue(forKey:) // method 
	0xef000  func MedicalRecordChartPoint.allYValues() // method 
	0xf0f70  func MedicalRecordChartPoint.minYValue() // method 
	0xef210  func MedicalRecordChartPoint.maxYValue() // method 
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
	0xf3350  @objc LabelStackView.initWithCoder: <stripped>
	0xf3b80  @objc LabelStackView.layoutSubviews <stripped>
	0xf3ca0  @objc LabelStackView.sizeThatFits: <stripped>
	0xf3e20  @objc LabelStackView.initWithFrame: <stripped>
	0xf3d20  @objc LabelStackView..cxx_destruct <stripped>

	// Swift methods
	0xf32e0  class func LabelStackView.__allocating_init(textStyle:) // init 
	0xf33d0  func LabelStackView.addLabel(text:textColor:) // method 
	0xf3560  func LabelStackView.removeAll() // method 
 }

 class HealthRecordsUI.SideBySideLabelCell : WDMedicalRecordGroupableCell {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let detailLabel : UILabel // +0x10 (0x8)
	let chevronView : UIView // +0x18 (0x8)
	var title : String? // +0x20 (0x10)
	var detail : String? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0xf4990  @objc SideBySideLabelCell.title <stripped>
	0xf49d0  @objc SideBySideLabelCell.setTitle: <stripped>
	0xf4aa0  @objc SideBySideLabelCell.detail <stripped>
	0xf4ba0  @objc SideBySideLabelCell.setDetail: <stripped>
	0xf4ee0  @objc SideBySideLabelCell.initWithReuseIdentifier: <stripped>
	0xf56a0  @objc SideBySideLabelCell.traitCollectionDidChange: <stripped>
	0xf5800  @objc SideBySideLabelCell.initWithStyle:reuseIdentifier: <stripped>
	0xf58d0  @objc SideBySideLabelCell.initWithCoder: <stripped>
	0xf56e0  @objc SideBySideLabelCell..cxx_destruct <stripped>

	// Swift methods
	0xf49b0  func SideBySideLabelCell.title.getter // getter 
	0xf49f0  func SideBySideLabelCell.title.setter // setter 
	0xf4a20  func SideBySideLabelCell.title.modify // modifyCoroutine 
	0xf4b30  func SideBySideLabelCell.detail.getter // getter 
	0xf4c40  func SideBySideLabelCell.detail.setter // setter 
	0xf4c70  func SideBySideLabelCell.detail.modify // modifyCoroutine 
	0xf4f80  func <stripped> // method 
 }

 class HealthRecordsUI.BrowseIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var iconCache : UnboundedCache // +0x10 (0x48)
	var placeholderCache : UnboundedCache // +0x58 (0x48)
	let accountIconProvider : AccountIconProvider // +0xa0 (0x8)

	// Swift methods
	0xf6b30  class func BrowseIconProvider.__allocating_init(accountIconProvider:) // init 
	0xf6cd0  func BrowseIconProvider.placeholder(for:size:) // method 
	0xf71b0  func BrowseIconProvider.fetchIcon(for:size:queue:completion:) // method 
 }

 class HealthRecordsUI.OAuthViewControllerNotificationUserInfoKeys : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xf8890  @objc OAuthViewControllerNotificationUserInfoKeys.init <stripped>
	0xf8830  @objc OAuthViewControllerNotificationUserInfoKeys..cxx_destruct <stripped>
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
	0xfa950  @objc AnalyticsManager.init <stripped>
	0xfaa70  @objc AnalyticsManager.submitAndFlushQueuedEvents <stripped>
	0xfaf20  @objc AnalyticsManager.postOnboardingFunnelEventWithStep:context:gatewayUrl: <stripped>
	0xfb3a0  @objc AnalyticsManager..cxx_destruct <stripped>

	// Swift methods
	0xfa970  func AnalyticsManager.submitAndFlushQueuedEvents() // method 
	0xfaaa0  func AnalyticsManager.postOnboardingFunnelEvent(step:context:gatewayUrl:) // method 
 }

 class HealthRecordsUI.AllergyReactionFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xfee40  @objc AllergyReactionFormatter.displayItemsFromReaction:country: <stripped>
	0xff210  @objc AllergyReactionFormatter.init <stripped>
	0xff270  @objc AllergyReactionFormatter..cxx_destruct <stripped>

	// Swift methods
	0xfcb70  func AllergyReactionFormatter.structuredItems(from:country:) // method 
	0xfe030  func AllergyReactionFormatter.displayItems(from:country:) // method 
	0xfed50  class func AllergyReactionFormatter.__allocating_init(store:context:) // init 
	0xfedf0  func AllergyReactionFormatter.displayItems(from:country:) // method 
 }

 class HealthRecordsUI.BloodPressureChartData : HKInteractiveChartBloodPressureData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : )) // +0xef65 (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x1692c0 (0x8)
	let hasTime : Bool // +0x0 (0x1)
	let partOfOutOfRangeSeries : Bool // +0x2 (0x1)

	// ObjC -> Swift bridged methods
	0x100970  @objc BloodPressureChartData.init <stripped>
	0x1008f0  @objc BloodPressureChartData..cxx_destruct <stripped>

	// Swift methods
	0x1006a0  class func BloodPressureChartData.__allocating_init(date:dateFormat:hasTime:systolicRange:diastolicRange:) // init 
 }

 class HealthRecordsUI.AccountTableViewCell : HRSourceTableViewCell {

	// Properties
	let brandView : WDMedicalRecordBrandView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x101f10  @objc AccountTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x101f60  @objc AccountTableViewCell.initWithCoder: <stripped>
	0x1020c0  @objc AccountTableViewCell.configureWithAccount:dataProvider: <stripped>
	0x1024a0  @objc AccountTableViewCell.prepareForReuse <stripped>
	0x102650  @objc AccountTableViewCell.layoutSubviews <stripped>
	0x1026d0  @objc AccountTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0x101fa0  func <stripped> // method 
	0x1020b0  func AccountTableViewCell.configureWithAccountDataProviderForObjC(_:_:) // method 
	0x102130  func <stripped> // method 
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
	0x105eb0  @objc MedicalRecordChartOverlayContext.initWithTitle:dataSource:defaultColors:selectedColors:verticalAxis: <stripped>
	0x105fb0  @objc MedicalRecordChartOverlayContext.contextItemForLastUpdate <stripped>
	0x106250  @objc MedicalRecordChartOverlayContext.updateContextItemForDateInterval:timeScope:completion: <stripped>
	0x106360  @objc MedicalRecordChartOverlayContext.sampleTypeForDateRangeUpdates <stripped>
	0x1063e0  @objc MedicalRecordChartOverlayContext.overlayDisplayTypeForTimeScope: <stripped>
	0x106530  @objc MedicalRecordChartOverlayContext.init <stripped>
	0x106450  @objc MedicalRecordChartOverlayContext..cxx_destruct <stripped>

	// Swift methods
	0x105d30  class func MedicalRecordChartOverlayContext.__allocating_init(title:dataSource:defaultColors:selectedColors:verticalAxis:) // init 
	0x105f40  func MedicalRecordChartOverlayContext.contextItemForLastUpdate() // method 
	0x106030  func MedicalRecordChartOverlayContext.updateItem(for:timeScope:completion:) // method 
	0x106320  func MedicalRecordChartOverlayContext.sampleTypeForDateRangeUpdates() // method 
	0x1063d0  func MedicalRecordChartOverlayContext.overlayDisplayType(for:) // method 
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
	0x107090  @objc AccountStateChangeListener.healthRecordsStore:accountDidChange:changeType: <stripped>
	0x1071b0  @objc AccountStateChangeListener.init <stripped>
	0x107140  @objc AccountStateChangeListener..cxx_destruct <stripped>

	// Swift methods
	0x106db0  class func AccountStateChangeListener.__allocating_init(handler:) // init 
	0x106e70  func AccountStateChangeListener.accountStateDidChange(healthRecordsStore:account:changeType:) // method 
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
	0x10b500  func CountFormatter.style.getter // getter 
	0x10b570  func CountFormatter.style.setter // setter 
	0x10b5a0  func CountFormatter.style.modify // modifyCoroutine 
	0x10b640  class func CountFormatter.__allocating_init(style:) // init 
	0x10b6e0  func CountFormatter.string(for:) // method 
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
	0x10c4a0  @objc DiagnosticTestReportFormatter.init <stripped>
	0x10c430  @objc DiagnosticTestReportFormatter..cxx_destruct <stripped>

	// Swift methods
	0x10c2d0  class func DiagnosticTestReportFormatter.__allocating_init(store:context:) // init 
	0x10c3a0  func DiagnosticTestReportFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.AccountIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monogramProvider : MonogramProvider // +0x10 (0x8)
	var brandImageManager : HKBrandImageManager // +0x18 (0x8)
	var iconCache : UnboundedCache // +0x20 (0x48)

	// Swift methods
	0x10d570  class func AccountIconProvider.__allocating_init(brandImageManager:monogramProvider:) // init 
	0x10d680  func AccountIconProvider.placeholder(forTitle:size:) // method 
	0x10e0a0  func AccountIconProvider.fetchIcon(forAccount:size:completion:) // method 
	0x10e5f0  func AccountIconProvider.fetchIcon(for:size:queue:completion:) // method 
 }

 class HealthRecordsUI.ContentStatusCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let spinner : UIActivityIndicatorView // +0x8 (0x8)
	let titleLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x10ffb0  @objc ContentStatusCell.spinner <stripped>
	0x10fff0  @objc ContentStatusCell.titleLabel <stripped>
	0x110230  @objc ContentStatusCell.init <stripped>
	0x110250  @objc ContentStatusCell.initWithCoder: <stripped>
	0x1107e0  @objc ContentStatusCell.initWithStyle:reuseIdentifier: <stripped>
	0x110700  @objc ContentStatusCell..cxx_destruct <stripped>

	// Swift methods
	0x110270  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartSeries : HKGraphSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var selectedStrokeStyle : HKStrokeStyle?
	var unselectedStrokeStyle : HKStrokeStyle?

	// ObjC -> Swift bridged methods
	0x110bd0  @objc MedicalRecordChartSeries.selectedPathRange <stripped>
	0x110df0  @objc MedicalRecordChartSeries.coordinatesForBlock:blockPath:xAxis:yAxis: <stripped>
	0x1115c0  @objc MedicalRecordChartSeries.drawSeriesWithBlockCoordinates:axisRect:zoomLevelConfiguration:pointTransform:renderContext:secondaryRenderContext: <stripped>
	0x1116d0  @objc MedicalRecordChartSeries.supportsMultiTouchSelection <stripped>
	0x1116f0  @objc MedicalRecordChartSeries.blockCoordinateIsVisibleInsideOfChartRect:blockCoordinate: <stripped>
	0x111790  @objc MedicalRecordChartSeries.distanceFromPoint:blockCoordinate:chartRect: <stripped>
	0x111800  @objc MedicalRecordChartSeries.xAxisDistanceFromPoint:blockCoordinate:chartRect: <stripped>
	0x111870  @objc MedicalRecordChartSeries.yAxisDifferenceToPoint:blockCoordinate:chartRect: <stripped>
	0x111920  @objc MedicalRecordChartSeries.init <stripped>
	0x111990  @objc MedicalRecordChartSeries..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordChartCoordinate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let pointValuesAscending : CGPoint
	let blockCoordinateInfo : HKGraphSeriesBlockCoordinateInfo

	// ObjC -> Swift bridged methods
	0x111de0  @objc MedicalRecordChartCoordinate.startXValue <stripped>
	0x111e40  @objc MedicalRecordChartCoordinate.endXValue <stripped>
	0x111ea0  @objc MedicalRecordChartCoordinate.userInfo <stripped>
	0x111ee0  @objc MedicalRecordChartCoordinate.copyWithTransform:roundToViewScale: <stripped>
	0x111ff0  @objc MedicalRecordChartCoordinate.init <stripped>
	0x111f90  @objc MedicalRecordChartCoordinate..cxx_destruct <stripped>

	// Swift methods
	0x110dd0  class func MedicalRecordChartCoordinate.__allocating_init(sortedPointValues:blockCoordinateInfo:) // init 
	0x111bd0  func MedicalRecordChartCoordinate.xValue.getter // getter 
	0x111c00  func MedicalRecordChartCoordinate.minPoint.getter // getter 
	0x111c30  func MedicalRecordChartCoordinate.maxPoint.getter // getter 
	0x111c70  func MedicalRecordChartCoordinate.distance(from:) // method 
	0x111e10  func MedicalRecordChartCoordinate.startXValue.getter // getter 
	0x111e70  func MedicalRecordChartCoordinate.endXValue.getter // getter 
	0x114960  func MedicalRecordChartCoordinate.userInfo.getter // getter 
	0x111ed0  func MedicalRecordChartCoordinate.copy(with:roundToViewScale:) // method 
 }

 class HealthRecordsUI.ContentStatusView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let subtitleLabel : UILabel // +0x10 (0x8)
	let spinnerView : UIActivityIndicatorView // +0x18 (0x8)
	var title : String? // +0x20 (0x10)
	var subtitle : String? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x114970  @objc ContentStatusView.title <stripped>
	0x1149b0  @objc ContentStatusView.setTitle: <stripped>
	0x114a80  @objc ContentStatusView.subtitle <stripped>
	0x114b80  @objc ContentStatusView.setSubtitle: <stripped>
	0x114dd0  @objc ContentStatusView.initWithTitle:subtitle: <stripped>
	0x114ed0  @objc ContentStatusView.initWithCoder: <stripped>
	0x115190  @objc ContentStatusView.initWithFrame: <stripped>
	0x115410  @objc ContentStatusView.startAnimating <stripped>
	0x115480  @objc ContentStatusView.stopAnimating <stripped>
	0x1155d0  @objc ContentStatusView.traitCollectionDidChange: <stripped>
	0x115bf0  @objc ContentStatusView.layoutSubviews <stripped>
	0x115d60  @objc ContentStatusView..cxx_destruct <stripped>

	// Swift methods
	0x114990  func ContentStatusView.title.getter // getter 
	0x1149d0  func ContentStatusView.title.setter // setter 
	0x114a00  func ContentStatusView.title.modify // modifyCoroutine 
	0x114b10  func ContentStatusView.subtitle.getter // getter 
	0x114c20  func ContentStatusView.subtitle.setter // setter 
	0x114c50  func ContentStatusView.subtitle.modify // modifyCoroutine 
	0x114d10  class func ContentStatusView.__allocating_init(title:subtitle:) // init 
	0x1151c0  func <stripped> // method 
	0x1153f0  func ContentStatusView.startAnimating() // method 
	0x115430  func ContentStatusView.stopAnimating() // method 
	0x115c20  func <stripped> // method 
 }

 class HealthRecordsUI.MedicationRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x117000  @objc MedicationRecordFormatter.init <stripped>
	0x116f70  @objc MedicationRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x116350  func MedicationRecordFormatter.structuredItems(from:) // method 
	0x116790  class func MedicationRecordFormatter.__allocating_init(store:context:) // init 
	0x116850  func MedicationRecordFormatter.displayItems(from:) // method 
	0x1168b0  func <stripped> // method 
 }

 class HealthRecordsUI.ClinicalOnboardingManager : WDClinicalOnboardingManager {
	// ObjC -> Swift bridged methods
	0x118220  @objc ClinicalOnboardingManager.initWithProfile: <stripped>
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
	0x118260  @objc ConceptTitleTableHeaderView.bottomExtraSpace <stripped>
	0x1182d0  @objc ConceptTitleTableHeaderView.setBottomExtraSpace: <stripped>
	0x1183b0  @objc ConceptTitleTableHeaderView.title <stripped>
	0x1184c0  @objc ConceptTitleTableHeaderView.setTitle: <stripped>
	0x118a90  @objc ConceptTitleTableHeaderView.initWithFrame: <stripped>
	0x118ac0  @objc ConceptTitleTableHeaderView.initWithCoder: <stripped>
	0x118e40  @objc ConceptTitleTableHeaderView.layoutSubviews <stripped>
	0x119050  @objc ConceptTitleTableHeaderView.sizeThatFits: <stripped>
	0x1196a0  @objc ConceptTitleTableHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x1182a0  func ConceptTitleTableHeaderView.bottomExtraSpace.getter // getter 
	0x118320  func ConceptTitleTableHeaderView.bottomExtraSpace.setter // setter 
	0x118360  func ConceptTitleTableHeaderView.bottomExtraSpace.modify // modifyCoroutine 
	0x118450  func ConceptTitleTableHeaderView.title.getter // getter 
	0x118570  func ConceptTitleTableHeaderView.title.setter // setter 
	0x1185e0  func ConceptTitleTableHeaderView.title.modify // modifyCoroutine 
	0x118ae0  func <stripped> // method 
	0x1190a0  func <stripped> // method 
 }

 class HealthRecordsUI.WeakNotificationObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let scheduler : TaskScheduler // +0x8 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let block :  empty-list  // +0x30 (0x10)
	var center : weak NSNotificationCenter? // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x119be0  @objc WeakNotificationObserver.dealloc <stripped>
	0x119d00  @objc WeakNotificationObserver.didReceiveWithNotification: <stripped>
	0x119ea0  @objc WeakNotificationObserver.init <stripped>
	0x119c70  @objc WeakNotificationObserver..cxx_destruct <stripped>

	// Swift methods
	0x119a70  class func WeakNotificationObserver.__allocating_init(forName:object:scheduler:center:block:) // init 
	0x119cb0  func WeakNotificationObserver.invalidate() // method 
 }

 class HealthRecordsUI.MedicalRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x11c6a0  @objc MedicalRecordFormatter.structuredItemsFromRecord: <stripped>
	0x11d3a0  @objc MedicalRecordFormatter.initWithConceptStore:context: <stripped>
	0x11db10  @objc MedicalRecordFormatter.displayItemsFromRecord: <stripped>
	0x11dc30  @objc MedicalRecordFormatter.init <stripped>
	0x11dbc0  @objc MedicalRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x11c2a0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11c720  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11c7e0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11c8a0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11c960  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11ca20  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11cb20  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11cc10  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11cd00  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11cde0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11cee0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11cfe0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11d0e0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11d1d0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11d300  class func MedicalRecordFormatter.__allocating_init(store:context:) // init 
	0x11d400  func MedicalRecordFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.ViewControllerFactory : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let profile : HRProfile // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x11df70  @objc ViewControllerFactory.profile <stripped>
	0x11e470  @objc ViewControllerFactory.makeSettingsViewController <stripped>
	0x11ef10  @objc ViewControllerFactory.makeViewControllerForRecord: <stripped>
	0x11ef70  @objc ViewControllerFactory.makeDetailViewControllerForRecord: <stripped>
	0x11f010  @objc ViewControllerFactory.init <stripped>
	0x11f070  @objc ViewControllerFactory..cxx_destruct <stripped>

	// Swift methods
	0x11df90  func ViewControllerFactory.makeViewController(forAccount:) // method 
	0x11e080  func ViewControllerFactory.makeAndPresentAddAccountViewController(from:animated:completion:) // method 
	0x11e200  func ViewControllerFactory.makeDetailViewController(forAccount:) // method 
	0x11e320  func ViewControllerFactory.makeDetailViewController(for:) // method 
	0x11e360  func ViewControllerFactory.makeLearnMoreViewController() // method 
	0x11e3d0  func ViewControllerFactory.makeSettingsViewController() // method 
	0x11e540  func ViewControllerFactory.makeViewController(for:) // method 
	0x11e8f0  func ViewControllerFactory.makeViewController(for:fromDisplayCategory:highlightedRecord:) // method 
	0x11ea70  func ViewControllerFactory.makeViewController(forConcept:fromDisplayCategory:highlightedRecord:) // method 
	0x11ec80  func ViewControllerFactory.makeViewController(for:) // method 
	0x11ef30  func ViewControllerFactory.makeDetailViewController(for:) // method 
 }

 class HealthRecordsUI.MedicalRecordAnnotationViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dateGroup : UIStackView // +0x8 (0x8)
	let monthYearLabel : UILabel // +0x10 (0x8)
	let timeLabel : UILabel // +0x18 (0x8)
	let dividerLabel : UILabel // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x120a80  @objc MedicalRecordAnnotationViewDataSource.init <stripped>
	0x120aa0  @objc MedicalRecordAnnotationViewDataSource.numberOfValuesForAnnotationView: <stripped>
	0x120ae0  @objc MedicalRecordAnnotationViewDataSource.valueViewForColumnAtIndex:orientation: <stripped>
	0x120b10  @objc MedicalRecordAnnotationViewDataSource.showSeparators <stripped>
	0x120b20  @objc MedicalRecordAnnotationViewDataSource.dateViewWithOrientation: <stripped>
	0x120b70  @objc MedicalRecordAnnotationViewDataSource.leftMarginViewWithOrientation: <stripped>
	0x120bb0  @objc MedicalRecordAnnotationViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0x120180  func MedicalRecordAnnotationViewDataSource.numberOfValues(for:) // method 
	0x120ab0  func MedicalRecordAnnotationViewDataSource.valueViewForColumn(at:orientation:) // method 
	0x120190  func MedicalRecordAnnotationViewDataSource.showSeparators() // method 
	0x1201a0  func MedicalRecordAnnotationViewDataSource.dateView(with:) // method 
	0x1201d0  func MedicalRecordAnnotationViewDataSource.leftMarginView(with:) // method 
	0x1201e0  func MedicalRecordAnnotationViewDataSource.updateDateGroup(using:) // method 
	0x120210  func MedicalRecordAnnotationViewDataSource.updateDateGroup(using:timeScope:) // method 
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
	0x128c80  @objc HealthRecordsSupportedStateChangeListener.healthRecordsStore:healthRecordsSupportedDidChangeTo: <stripped>
	0x128d80  @objc HealthRecordsSupportedStateChangeListener.init <stripped>
	0x128d10  @objc HealthRecordsSupportedStateChangeListener..cxx_destruct <stripped>

	// Swift methods
	0x1289c0  class func HealthRecordsSupportedStateChangeListener.__allocating_init(handler:) // init 
	0x128a80  func HealthRecordsSupportedStateChangeListener.healthRecordsSupportedDidChange(healthRecordsStore:to:) // method 
 }

 class HealthRecordsUI.BloodPressureDataTransformer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit? // +0x10 (0x8)
	var $__lazy_storage_$_displayType : HKDisplayType? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x12b210  @objc BloodPressureDataTransformer.chartPointFor:in:with:dataSourceType: <stripped>
	0x12b320  @objc BloodPressureDataTransformer.graphSeriesWith: <stripped>
	0x12b400  @objc BloodPressureDataTransformer.chartDisplayTypeWith:displayName:unitName: <stripped>

	// Swift methods
	0x12a4a0  func BloodPressureDataTransformer.createUserInfo(date:timeScope:systole:diastole:) // method 
	0x12ab20  func BloodPressureDataTransformer.chartPoint(for:in:with:dataSourceType:) // method 
	0x12b290  func BloodPressureDataTransformer.graphSeries(with:) // method 
	0x12b3f0  func BloodPressureDataTransformer.chartDisplayType(with:displayName:unitName:) // method 
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
	0x12f790  @objc IconTextListView.initWithCoder: <stripped>
	0x130140  @objc IconTextListView.layoutSubviews <stripped>
	0x130230  @objc IconTextListView.sizeThatFits: <stripped>
	0x130580  @objc IconTextListView.traitCollectionDidChange: <stripped>
	0x130700  @objc IconTextListView.initWithFrame: <stripped>
	0x130600  @objc IconTextListView..cxx_destruct <stripped>

	// Swift methods
	0x12f6f0  class func IconTextListView.__allocating_init(textStyle:iconSize:interItemSpacingHorizontal:interItemSpacingVertical:hidesIconsForAccessibilityTextSizes:) // init 
	0x12f810  func IconTextListView.addItem(icon:text:textColor:) // method 
	0x12fa30  func IconTextListView.removeAll() // method 
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
	0x132370  @objc StandardTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x1323e0  @objc StandardTableViewCell.initWithCoder: <stripped>

	// Swift methods
	0x1322a0  class func static StandardTableViewCell.reuseIdentifier.getter // getter 
 }

 class HealthRecordsUI.NoAppTableViewCell : HRStandardTableViewCell {
	// ObjC -> Swift bridged methods
	0x1324d0  @objc NoAppTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x132590  @objc NoAppTableViewCell.initWithCoder: <stripped>
 }

 class HealthRecordsUI.SourceTableViewCell : HRStandardTableViewCell {

	// Properties
	var sourceModel : HKSourceDataModel?

	// ObjC -> Swift bridged methods
	0x133060  @objc SourceTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x1331c0  @objc SourceTableViewCell.initWithCoder: <stripped>
	0x1332b0  @objc SourceTableViewCell..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordUnitCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var units : [HKUnit : NSCountedSet] // +0x10 (0x8)

	// Swift methods
	0x133cd0  func MedicalRecordUnitCollector.add(units:) // method 
	0x134b50  func MedicalRecordUnitCollector.preferredUnit() // method 
 }

 class HealthRecordsUI.BloodPressureFormatter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit? // +0x10 (0x8)

	// Swift methods
	0x1389a0  func BloodPressureFormatter.rawUnitString.getter // getter 
	0x138a80  func BloodPressureFormatter.niceUnitString.getter // getter 
	0x138be0  func BloodPressureFormatter.valueString(for:diastolicRange:) // method 
 }

 class HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var lastCachedNumberOfChartPoints : Int? // +0x8 (0x9)

	// ObjC -> Swift bridged methods
	0x139360  @objc SingleValueCurrentValueViewDataSource.attributedTitleStringForCurrentValueView: <stripped>
	0x1399c0  @objc SingleValueCurrentValueViewDataSource.updateDataSourceWithGraphView:displayType:timeScope: <stripped>
	0x139b90  @objc SingleValueCurrentValueViewDataSource.initWithDateCache:displayCategoryController:healthStore:selectedRangeFormatter: <stripped>
	0x139c70  @objc SingleValueCurrentValueViewDataSource.init <stripped>

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
	0x13ffe0  @objc HealthRecordsMigrator.migrateIfNeededWithCompletion: <stripped>
	0x140770  @objc HealthRecordsMigrator.init <stripped>
	0x1406a0  @objc HealthRecordsMigrator..cxx_destruct <stripped>

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
	0x140f80  func ConceptListViewDataSourceProvider.store.getter // getter 
	0x140fc0  func ConceptListViewDataSourceProvider.store.setter // setter 
	0x141010  func ConceptListViewDataSourceProvider.store.modify // modifyCoroutine 
	0x140e30  class func ConceptListViewDataSourceProvider.__allocating_init(categoryPredicate:store:) // init 
	0x141100  func ConceptListViewDataSourceProvider.selectedDataSources(for:) // method 
	0x141160  func <stripped> // method 
	0x141720  func ConceptListViewDataSourceProvider.makePromotionDataSource() // method 
 }

 class HealthRecordsUI.MedicationDispenseFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x142ab0  @objc MedicationDispenseFormatter.init <stripped>
	0x142b10  @objc MedicationDispenseFormatter..cxx_destruct <stripped>

	// Swift methods
	0x142560  func MedicationDispenseFormatter.structuredItems(from:) // method 
	0x142500  class func MedicationDispenseFormatter.__allocating_init(store:context:) // init 
	0x142a00  func MedicationDispenseFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.HealthRecordsNotAvailableViewController : UIAlertController /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x143e80  @objc HealthRecordsNotAvailableViewController.initWithNibName:bundle: <stripped>
	0x143fd0  @objc HealthRecordsNotAvailableViewController.initWithCoder: <stripped>

	// Swift methods
	0x143aa0  class func static HealthRecordsNotAvailableViewController.presentableInstance() // method 
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
	0x149620  @objc ConceptHeaderCell.headerImage <stripped>
	0x149660  @objc ConceptHeaderCell.setHeaderImage: <stripped>
	0x149740  @objc ConceptHeaderCell.title <stripped>
	0x149800  @objc ConceptHeaderCell.setTitle: <stripped>
	0x1499d0  @objc ConceptHeaderCell.categoryColor <stripped>
	0x149a90  @objc ConceptHeaderCell.setCategoryColor: <stripped>
	0x149e00  @objc ConceptHeaderCell.setupSubviews <stripped>
	0x14a300  @objc ConceptHeaderCell.setUpConstraints <stripped>
	0x14a330  @objc ConceptHeaderCell.intendedPlacement <stripped>
	0x14a390  @objc ConceptHeaderCell.setIntendedPlacement: <stripped>
	0x14a620  @objc ConceptHeaderCell._updateForCurrentSizeCategory <stripped>
	0x14a7f0  @objc ConceptHeaderCell.traitCollectionDidChange: <stripped>
	0x14acf0  @objc ConceptHeaderCell.initWithStyle:reuseIdentifier: <stripped>
	0x14adc0  @objc ConceptHeaderCell.initWithCoder: <stripped>
	0x14abc0  @objc ConceptHeaderCell..cxx_destruct <stripped>

	// Swift methods
	0x149640  func ConceptHeaderCell.headerImage.getter // getter 
	0x149680  func ConceptHeaderCell.headerImage.setter // setter 
	0x1496c0  func ConceptHeaderCell.headerImage.modify // modifyCoroutine 
	0x1497b0  func ConceptHeaderCell.title.getter // getter 
	0x149860  func ConceptHeaderCell.title.setter // setter 
	0x149890  func ConceptHeaderCell.title.modify // modifyCoroutine 
	0x149a30  func ConceptHeaderCell.categoryColor.getter // getter 
	0x149b20  func ConceptHeaderCell.categoryColor.setter // setter 
	0x149b60  func ConceptHeaderCell.categoryColor.modify // modifyCoroutine 
	0x14a840  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartSeries : HKBloodPressureSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
	0x14b650  @objc BloodPressureChartSeries.selectedPathRange <stripped>
	0x14b8f0  @objc BloodPressureChartSeries.init <stripped>
 }

 class HealthRecordsUI.ProfileOnboardingActionViewController {
 class HealthRecordsUI.OnboardingTableViewCell : type metadata for ChromeHostViewTableCell /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {
	// ObjC -> Swift bridged methods
	0x14be30  @objc OnboardingTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x14be90  @objc OnboardingTableViewCell.initWithCoder: <stripped>

	// Swift methods
 }

 class HealthRecordsUI.ProviderNotFoundView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let glyphView : UIView // +0x8 (0x8)
	let providerStatusLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x14c6a0  @objc ProviderNotFoundView.initWithFrame: <stripped>
	0x14c6d0  @objc ProviderNotFoundView.initWithCoder: <stripped>
	0x14ce40  @objc ProviderNotFoundView..cxx_destruct <stripped>

	// Swift methods
	0x14c720  func <stripped> // method 
 }

 class HealthRecordsUI.RecordKindDataProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RecordKindDataProviderProtocol {

	// Properties
	let healthStore : HKHealthStore // +0x10 (0x8)
	let queue : OS_dispatch_queue // +0x18 (0x8)

	// Swift methods
	0x14d170  class func RecordKindDataProvider.__allocating_init(healthStore:) // init 
	0x14d320  func RecordKindDataProvider.fetchRecordKinds(completion:) // method 
	0x14dba0  func RecordKindDataProvider.fetchRecordKinds(in:completion:) // method 
	0x14ea40  func RecordKindDataProvider.addObserver(following:handler:) // method 
 }

 class HealthRecordsUI.CategoryViewControllerManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var activeCategoryViewController : weak UIViewController? // +0x10 (0x8)

	// Swift methods
	0x1514a0  func CategoryViewControllerManager.isCategoryViewControllerOnTop() // method 
	0x151b80  func CategoryViewControllerManager.hasActiveCategoryViewController() // method 
 }

 class HealthRecordsUI.Features : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x151e70  @objc Features.init <stripped>
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
	0x153200  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
	0x1532b0  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
	0x1532c0  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
 }

 struct HealthRecordsUI.RecordKindFeedItemIdentifierFactory { }

 class HealthRecordsUI.RecordPrimaryTitleCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let recordTitleLabel : UILabel
	let recordDateLabel : UILabel

	// ObjC -> Swift bridged methods
	0x154300  @objc RecordPrimaryTitleCell.recordTitleLabel <stripped>
	0x154340  @objc RecordPrimaryTitleCell.recordDateLabel <stripped>
	0x1543c0  @objc RecordPrimaryTitleCell.initWithStyle:reuseIdentifier: <stripped>
	0x1543e0  @objc RecordPrimaryTitleCell.initWithCoder: <stripped>
	0x154a90  @objc RecordPrimaryTitleCell..cxx_destruct <stripped>

	// Swift methods
	0x154420  func <stripped> // method 
 }

 class HealthRecordsUI.RecordDetailItemCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let bodyLabel : UILabel

	// ObjC -> Swift bridged methods
	0x154b40  @objc RecordDetailItemCell.titleLabel <stripped>
	0x154b80  @objc RecordDetailItemCell.bodyLabel <stripped>
	0x154c00  @objc RecordDetailItemCell.initWithStyle:reuseIdentifier: <stripped>
	0x154c80  @objc RecordDetailItemCell.initWithCoder: <stripped>
	0x155360  @objc RecordDetailItemCell..cxx_destruct <stripped>

	// Swift methods
	0x154cc0  func <stripped> // method 
 }

 class HealthRecordsUI.RecordReferenceRangeCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let referenceRangeView : HKReferenceRangeView // +0x8 (0x8)
	var valueInRange : HKInspectableValueInRange? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x155410  @objc RecordReferenceRangeCell.valueInRange <stripped>
	0x1554a0  @objc RecordReferenceRangeCell.setValueInRange: <stripped>
	0x1555e0  @objc RecordReferenceRangeCell.initWithStyle:reuseIdentifier: <stripped>
	0x155600  @objc RecordReferenceRangeCell.initWithCoder: <stripped>
	0x1556a0  @objc RecordReferenceRangeCell..cxx_destruct <stripped>

	// Swift methods
	0x155460  func RecordReferenceRangeCell.valueInRange.getter // getter 
	0x1554f0  func RecordReferenceRangeCell.valueInRange.setter // setter 
	0x155510  func RecordReferenceRangeCell.valueInRange.modify // modifyCoroutine 
 }

 class HealthRecordsUI.RecordDataSourceCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let brandView : WDMedicalRecordBrandView

	// ObjC -> Swift bridged methods
	0x155800  @objc RecordDataSourceCell.initWithStyle:reuseIdentifier: <stripped>
	0x155820  @objc RecordDataSourceCell.initWithCoder: <stripped>
	0x155a70  @objc RecordDataSourceCell.configCellWith:owner:dataProvider: <stripped>
	0x155b20  @objc RecordDataSourceCell..cxx_destruct <stripped>

	// Swift methods
	0x155910  func RecordDataSourceCell.configCell(with:owner:dataProvider:) // method 
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
	0x1589c0  @objc ProcedureRecordFormatter.init <stripped>
	0x158a20  @objc ProcedureRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x158800  class func ProcedureRecordFormatter.__allocating_init(store:context:) // init 
	0x158910  func ProcedureRecordFormatter.displayItems(from:) // method 
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
