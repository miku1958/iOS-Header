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
	0x655f0  @objc SingleValueAnnotationViewDataSource.init <stripped>
	0x65640  @objc SingleValueAnnotationViewDataSource.valueViewForColumnAtIndex:orientation: <stripped>
	0x656c0  @objc SingleValueAnnotationViewDataSource.updateUsing: <stripped>
	0x661a0  @objc SingleValueAnnotationViewDataSource.updateUsing:valueRange:dateRange:timeScope: <stripped>
	0x668b0  @objc SingleValueAnnotationViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0x65670  func SingleValueAnnotationViewDataSource.update(using:) // method 
	0x65730  func SingleValueAnnotationViewDataSource.updateReferenceRange(using:) // method 
	0x65f00  func SingleValueAnnotationViewDataSource.update(using:valueRange:dateRange:timeScope:) // method 
	0x66290  func SingleValueAnnotationViewDataSource.updateValue(using:) // method 
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
	0x67ac0  @objc SingleValueChartData.init <stripped>
	0x67a30  @objc SingleValueChartData..cxx_destruct <stripped>

	// Swift methods
	0x67970  class func SingleValueChartData.__allocating_init(chartableQuantitySet:date:dateFormat:hasTime:partOfOutOfRangeSeries:) // init 
 }

 class HealthRecordsUI.LoadingTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containerView : UIView // +0x8 (0x8)
	let spinner : UIActivityIndicatorView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x68290  @objc LoadingTableViewCell.init <stripped>
	0x683a0  @objc LoadingTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x68470  @objc LoadingTableViewCell.initWithCoder: <stripped>
	0x68bb0  @objc LoadingTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0x681e0  class func static LoadingTableViewCell.reuseIdentifier.getter // getter 
	0x684b0  func LoadingTableViewCell.willDisplay() // method 
	0x684d0  func LoadingTableViewCell.didEndDisplaying() // method 
	0x684f0  func <stripped> // method 
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
	0x6ebf0  @objc TapToRadarManager.init <stripped>
 }

 struct HealthRecordsUI.SyncTaskScheduler: TaskScheduler { }

 class HealthRecordsUI.DiagnosticTestResultFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x6f970  @objc DiagnosticTestResultFormatter.init <stripped>
	0x6f900  @objc DiagnosticTestResultFormatter..cxx_destruct <stripped>

	// Swift methods
	0x6f7b0  class func DiagnosticTestResultFormatter.__allocating_init(store:context:) // init 
	0x6f880  func DiagnosticTestResultFormatter.displayItems(from:) // method 
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
	0x727c0  @objc ClinicalSourcesDataProvider.initWithHealthRecordsStore: <stripped>
	0x72760  @objc ClinicalSourcesDataProvider..cxx_destruct <stripped>
 }

 class HealthRecordsUI.InternalStateViewController : UITableViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var dataProvider : InternalStateProvider
	var sections : InternalStateSection

	// ObjC -> Swift bridged methods
	0x72aa0  @objc InternalStateViewController.init <stripped>
	0x72b40  @objc InternalStateViewController.initWithCoder: <stripped>
	0x72be0  @objc InternalStateViewController.dealloc <stripped>
	0x72d80  @objc InternalStateViewController.viewDidLoad <stripped>
	0x72db0  @objc InternalStateViewController.viewWillAppear: <stripped>
	0x731d0  @objc InternalStateViewController.initWithStyle: <stripped>
	0x73200  @objc InternalStateViewController.initWithNibName:bundle: <stripped>
	0x72c50  @objc InternalStateViewController..cxx_destruct <stripped>

	// Swift methods
	0x72e10  func <stripped> // method 
 }

 class HealthRecordsUI.Cell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x72830  @objc Cell.initWithStyle:reuseIdentifier: <stripped>
	0x728c0  @objc Cell.initWithCoder: <stripped>

	// Swift methods
	0x72800  class func <stripped> // getter 
	0x72920  func <stripped> // method 
 }

 class HealthRecordsUI.FeedItemListViewController : type metadata for DataTypeDetailViewController /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]

	// ObjC -> Swift bridged methods
	0x74380  @objc FeedItemListViewController.initWithCoder: <stripped>
	0x74540  @objc FeedItemListViewController.viewDidLoad <stripped>
	0x747e0  @objc FeedItemListViewController.viewWillAppear: <stripped>
	0x748c0  @objc FeedItemListViewController.initWithCollectionViewLayout: <stripped>
	0x748f0  @objc FeedItemListViewController.initWithNibName:bundle: <stripped>
	0x74890  @objc FeedItemListViewController..cxx_destruct <stripped>

	// Swift methods
	0x74280  func <stripped> // method 
	0x74370  func <stripped> // getter 
 }

 class HealthRecordsUI.FeedItemListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]
WARNING: couldn't find address 0x0 (0x0) in binary!
	let store : Ó'

	// Swift methods
	0x749b0  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateSection : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String
	let items : InternalStateItem

	// ObjC -> Swift bridged methods
	0x766e0  @objc InternalStateSection.init <stripped>
	0x766b0  @objc InternalStateSection..cxx_destruct <stripped>

	// Swift methods
	0x769f0  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateItem : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let title : String
	let value : String

	// ObjC -> Swift bridged methods
	0x76c30  @objc InternalStateItem.init <stripped>
	0x76bf0  @objc InternalStateItem..cxx_destruct <stripped>

	// Swift methods
	0x76e90  func <stripped> // method 
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
	0x77f10  @objc SingleValueDataTransformer.chartPointFor:in:with:dataSourceType: <stripped>
	0x78080  @objc SingleValueDataTransformer.graphSeriesWith: <stripped>
	0x780e0  @objc SingleValueDataTransformer.chartDisplayTypeWith:displayName:unitName: <stripped>

	// Swift methods
	0x77d90  func SingleValueDataTransformer.chartPoint(for:in:with:dataSourceType:) // method 
	0x78070  func SingleValueDataTransformer.graphSeries(with:) // method 
	0x780d0  func SingleValueDataTransformer.chartDisplayType(with:displayName:unitName:) // method 
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
	0x7f630  @objc ConditionRecordFormatter.init <stripped>
	0x7f5c0  @objc ConditionRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x7f460  class func ConditionRecordFormatter.__allocating_init(store:context:) // init 
	0x7f530  func ConditionRecordFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.TimelineHeaderView : UITableViewHeaderFooterView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : weak HRTimelineHeaderViewDelegate? // +0x8 (0x8)
	var $__lazy_storage_$_titleLabel : UILabel? // +0x10 (0x8)
	var $__lazy_storage_$_subtitleLabel : UILabel? // +0x18 (0x8)
	var $__lazy_storage_$_backgroundEffectView : UIVisualEffectView? // +0x20 (0x8)
	var $__lazy_storage_$_separatorView : UIView? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x80f80  @objc TimelineHeaderView.delegate <stripped>
	0x81000  @objc TimelineHeaderView.setDelegate: <stripped>
	0x81360  @objc TimelineHeaderView.initWithReuseIdentifier: <stripped>
	0x81420  @objc TimelineHeaderView.initWithCoder: <stripped>
	0x81840  @objc TimelineHeaderView.applyTitle:subtitle: <stripped>
	0x81a70  @objc TimelineHeaderView.applyStyleFromNavigationBar: <stripped>
	0x81b00  @objc TimelineHeaderView.prepareForReuse <stripped>
	0x81ba0  @objc TimelineHeaderView.floating <stripped>
	0x81c00  @objc TimelineHeaderView.setFloating: <stripped>
	0x826e0  @objc TimelineHeaderView.layoutSubviews <stripped>
	0x82830  @objc TimelineHeaderView.sizeThatFits: <stripped>
	0x82ac0  @objc TimelineHeaderView.traitCollectionDidChange: <stripped>
	0x82b70  @objc TimelineHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x80f50  class func static TimelineHeaderView.reuseIdentifier.getter // getter 
	0x80fc0  func TimelineHeaderView.delegate.getter // getter 
	0x81040  func TimelineHeaderView.delegate.setter // setter 
	0x81090  func TimelineHeaderView.delegate.modify // modifyCoroutine 
	0x81160  func <stripped> // getter 
	0x81180  func <stripped> // getter 
	0x81460  func <stripped> // method 
	0x81770  func TimelineHeaderView.apply(title:subtitle:) // method 
	0x818f0  func TimelineHeaderView.applyStyle(from:) // method 
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
	0x82ec0  @objc MedicalRecordChartabilityResult.configuration <stripped>
	0x82f10  @objc MedicalRecordChartabilityResult.masterDataSource <stripped>
	0x82f50  @objc MedicalRecordChartabilityResult.seriesDataSources <stripped>
	0x82fc0  @objc MedicalRecordChartabilityResult.outOfRangeDataSource <stripped>
	0x83020  @objc MedicalRecordChartabilityResult.noRangeDataSource <stripped>
	0x83080  @objc MedicalRecordChartabilityResult.latestChartableDate <stripped>
	0x83130  @objc MedicalRecordChartabilityResult.shouldProduceAtLeastOneOverlay <stripped>
	0x83460  @objc MedicalRecordChartabilityResult.init <stripped>
	0x833c0  @objc MedicalRecordChartabilityResult..cxx_destruct <stripped>

	// Swift methods
	0x831d0  func MedicalRecordChartabilityResult.shouldProduceAtLeastOneOverlay.getter // getter 
	0x83250  class func MedicalRecordChartabilityResult.__allocating_init(configuration:masterDataSource:seriesDataSources:outOfRangeDataSource:noRangeDataSource:latestChartableDate:) // init 
 }

 class HealthRecordsUI.MedicalRecordChartabilityDeterminer : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x85a00  @objc MedicalRecordChartabilityDeterminer.determineChartabilityForConcept:records:completion: <stripped>
	0x85db0  @objc MedicalRecordChartabilityDeterminer.init <stripped>

	// Swift methods
	0x83490  func MedicalRecordChartabilityDeterminer.determineChartability(for:records:completion:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeriesCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let concept : HKConcept // +0x10 (0x8)
	var preferredColors : HKUIMetricColors? // +0x18 (0x8)
	var chartableQuantitySets : [HKChartableCodedQuantitySet] // +0x20 (0x8)

	// Swift methods
	0x85cd0  class func MedicalRecordChartableSeriesCollector.__allocating_init(concept:) // init 
	0x85e30  func MedicalRecordChartableSeriesCollector.collect(record:) // method 
	0x86040  func MedicalRecordChartableSeriesCollector.allUnits.getter // getter 
	0x86460  func MedicalRecordChartableSeriesCollector.chartDataSourceSeries(compatibleWith:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeries : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let concept : HKConcept
	let chartableQuantitySets : [HKChartableCodedQuantitySet]
	let preferredColors : HKUIMetricColors?

	// ObjC -> Swift bridged methods
	0x877c0  @objc MedicalRecordChartableSeries.init <stripped>
	0x87720  @objc MedicalRecordChartableSeries..cxx_destruct <stripped>

	// Swift methods
	0x86b60  func <stripped> // getter 
	0x86a40  class func MedicalRecordChartableSeries.__allocating_init(concept:chartableQuantities:unit:preferredColors:) // init 
	0x86de0  func MedicalRecordChartableSeries.createDataSource(with:unit:) // method 
	0x86ee0  func MedicalRecordChartableSeries.outOfRangeQuantitySets() // method 
	0x872f0  func MedicalRecordChartableSeries.noRangeQuantitySets() // method 
 }

 struct HealthRecordsUI.UnboundedCache: Cache {

	// Properties
	let storageBox : Box
	let lowMemoryWarnings : Any
	let didEnterBackground : Any
 }

 class HealthRecordsUI.SingleValueChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xa1580  @objc SingleValueChartConfiguration.chartControllerClass <stripped>
	0xa15e0  @objc SingleValueChartConfiguration.shouldShowOutOfRangeOverlay <stripped>
	0xa1600  @objc SingleValueChartConfiguration.dataTransformer <stripped>
	0xa16b0  @objc SingleValueChartConfiguration.init <stripped>

	// Swift methods
	0xa15a0  func SingleValueChartConfiguration.chartControllerClass.getter // getter 
	0xa15f0  func SingleValueChartConfiguration.shouldShowOutOfRangeOverlay.getter // getter 
	0xa1630  func SingleValueChartConfiguration.dataTransformer.getter // getter 
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
	0xa2700  @objc SettingsViewController.init <stripped>
	0xa2790  @objc SettingsViewController.initWithCoder: <stripped>
	0xa2850  @objc SettingsViewController.dealloc <stripped>
	0xa34d0  @objc SettingsViewController.viewDidLoad <stripped>
	0xa3770  @objc SettingsViewController.viewDidAppear: <stripped>
	0xa37b0  @objc SettingsViewController.tapToRadar: <stripped>
	0xa44c0  @objc SettingsViewController.healthRecordsStore:accountDidChange:changeType: <stripped>
	0xa47a0  @objc SettingsViewController.initWithUsingInsetStyling: <stripped>
	0xa4830  @objc SettingsViewController.initWithStyle: <stripped>
	0xa4900  @objc SettingsViewController.initWithNibName:bundle: <stripped>
	0xa28e0  @objc SettingsViewController..cxx_destruct <stripped>

	// Swift methods
	0xa3840  func SettingsViewController.accountStateDidChange(healthRecordsStore:account:changeType:) // method 
	0xa4540  func SettingsViewController.providedHealthExperienceStore.getter // getter 
	0xa45a0  func SettingsViewController.providedHealthStore.getter // getter 
	0xa4610  func SettingsViewController.pushForAPIAuthorization(forSource:) // method 
 }

 class HealthRecordsUI.AccountErrorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let profile : HRProfile // +0x10 (0x8)
	let healthRecordsStore : HKHealthRecordsStore // +0x18 (0x8)

	// Swift methods
	0xa97f0  func AccountErrorManager.presentRelogin(for:from:completion:) // method 
	0xa9dd0  func AccountErrorManager.presentRelogin(for:from:completion:) // method 
 }

 class HealthRecordsUI.BloodPressureChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xaac10  @objc BloodPressureChartConfiguration.chartControllerClass <stripped>
	0xaac70  @objc BloodPressureChartConfiguration.shouldShowOutOfRangeOverlay <stripped>
	0xaac90  @objc BloodPressureChartConfiguration.dataTransformer <stripped>
	0xaad60  @objc BloodPressureChartConfiguration.init <stripped>

	// Swift methods
	0xaac30  func BloodPressureChartConfiguration.chartControllerClass.getter // getter 
	0xaac80  func BloodPressureChartConfiguration.shouldShowOutOfRangeOverlay.getter // getter 
	0xaacd0  func BloodPressureChartConfiguration.dataTransformer.getter // getter 
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
	0xab790  @objc FilterSettingsViewController.initWithDelegate:selectedCategories:selectedAccounts: <stripped>
	0xab810  @objc FilterSettingsViewController.initWithCoder: <stripped>
	0xac000  @objc FilterSettingsViewController.viewDidLoad <stripped>
	0xac040  @objc FilterSettingsViewController.numberOfSectionsInTableView: <stripped>
	0xac180  @objc FilterSettingsViewController.tableView:viewForHeaderInSection: <stripped>
	0xac200  @objc FilterSettingsViewController.tableView:numberOfRowsInSection: <stripped>
	0xaced0  @objc FilterSettingsViewController.tableView:cellForRowAtIndexPath: <stripped>
	0xad040  @objc FilterSettingsViewController.tableView:didSelectRowAtIndexPath: <stripped>
	0xad110  @objc FilterSettingsViewController.tableView:heightForHeaderInSection: <stripped>
	0xad130  @objc FilterSettingsViewController.tableView:heightForFooterInSection: <stripped>
	0xadb60  @objc FilterSettingsViewController.doneButtonTapped <stripped>
	0xadca0  @objc FilterSettingsViewController.initWithUsingInsetStyling: <stripped>
	0xadd30  @objc FilterSettingsViewController.initWithStyle: <stripped>
	0xade00  @objc FilterSettingsViewController.initWithNibName:bundle: <stripped>
	0xadbc0  @objc FilterSettingsViewController..cxx_destruct <stripped>

	// Swift methods
	0xab060  class func FilterSettingsViewController.__allocating_init(withDelegate:selectedCategories:selectedAccounts:) // init 
	0xad140  func <stripped> // method 
	0xad3a0  func <stripped> // method 
	0xad600  func <stripped> // method 
	0xad630  func <stripped> // method 
	0xad850  func <stripped> // method 
	0xad870  func <stripped> // method 
	0xad9f0  func <stripped> // method 
 }

 class HealthRecordsUI.AddAccountTableViewCell : HRStandardTableViewCell {

	// Properties
	var alignWithAccountTitle : Bool // +0x8 (0x1)

	// ObjC -> Swift bridged methods
	0xb2840  @objc AddAccountTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xb2910  @objc AddAccountTableViewCell.initWithCoder: <stripped>
	0xb2bd0  @objc AddAccountTableViewCell.tintColorDidChange <stripped>

	// Swift methods
	0xb29b0  func <stripped> // method 
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
	0xb4f60  class func CategoryCountDataProvider.__allocating_init(healthStore:) // init 
	0xb4fa0  func CategoryCountDataProvider.fetchCategoryCounts(categories:additionalPredicate:completion:) // method 
 }

 class HealthRecordsUI.AllergyRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_reactionFormatter : AllergyReactionFormatter // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xbee70  @objc AllergyRecordFormatter.init <stripped>
	0xbede0  @objc AllergyRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0xbdd30  func AllergyRecordFormatter.structuredItems(from:) // method 
	0xbdf10  class func AllergyRecordFormatter.__allocating_init(store:context:) // init 
	0xbdfd0  func AllergyRecordFormatter.displayItems(from:) // method 
	0xbe030  func <stripped> // method 
 }

 struct HealthRecordsUI.CategorySummaryFeedItemIdentifierFactory { }

 class HealthRecordsUI.MedicationOrderFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xc0f80  @objc MedicationOrderFormatter.init <stripped>
	0xc0ef0  @objc MedicationOrderFormatter..cxx_destruct <stripped>

	// Swift methods
	0xc0530  func MedicationOrderFormatter.structuredItems(from:) // method 
	0xc0970  class func MedicationOrderFormatter.__allocating_init(store:context:) // init 
	0xc0a30  func MedicationOrderFormatter.displayItems(from:) // method 
	0xc0a90  func <stripped> // method 
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
	0xc8020  @objc MedicationDosageFormatter.init <stripped>
	0xc8080  @objc MedicationDosageFormatter..cxx_destruct <stripped>

	// Swift methods
	0xc79e0  func MedicationDosageFormatter.structuredItems(from:country:) // method 
	0xc7c70  func MedicationDosageFormatter.displayItems(from:country:) // method 
	0xc7990  class func MedicationDosageFormatter.__allocating_init(store:context:) // init 
	0xc7f40  func MedicationDosageFormatter.displayItems(from:country:) // method 
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
	0xc97a0  class func HealthRecordsURLHandler.__allocating_init() // init 
	0xc97d0  func HealthRecordsURLHandler.parse(url:) // method 
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
	0xcb990  @objc RecordCategoryViewController.initWithCoder: <stripped>
	0xcba30  @objc RecordCategoryViewController.dealloc <stripped>
	0xcbe90  @objc RecordCategoryViewController.viewDidLoad <stripped>
	0xcbfb0  @objc RecordCategoryViewController.viewWillLayoutSubviews <stripped>
	0xcc130  @objc RecordCategoryViewController.modePickerDidChange: <stripped>
	0xcc1b0  @objc RecordCategoryViewController.tapToRadar: <stripped>
	0xcccf0  @objc RecordCategoryViewController.initWithNibName:bundle: <stripped>
	0xcbaa0  @objc RecordCategoryViewController..cxx_destruct <stripped>

	// Swift methods
	0xcbfe0  func <stripped> // method 
	0xcc240  func <stripped> // method 
	0xcc350  func <stripped> // method 
	0xcc430  func <stripped> // method 
	0xcca00  func <stripped> // method 
	0xccb80  func <stripped> // getter 
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
	0xce930  @objc ExplainerTextFooterCell.content <stripped>
	0xce9f0  @objc ExplainerTextFooterCell.setContent: <stripped>
	0xcecc0  @objc ExplainerTextFooterCell.initWithReuseIdentifier: <stripped>
	0xcf300  @objc ExplainerTextFooterCell.initWithStyle:reuseIdentifier: <stripped>
	0xcf3d0  @objc ExplainerTextFooterCell.initWithCoder: <stripped>
	0xcf210  @objc ExplainerTextFooterCell..cxx_destruct <stripped>

	// Swift methods
	0xce9a0  func ExplainerTextFooterCell.content.getter // getter 
	0xcea50  func ExplainerTextFooterCell.content.setter // setter 
	0xcea80  func ExplainerTextFooterCell.content.modify // modifyCoroutine 
	0xced60  func <stripped> // method 
 }

 class HealthRecordsUI.NoDataViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let style : Style // +0x8 (0x1)

	// ObjC -> Swift bridged methods
	0xd00a0  @objc NoDataViewController.initWithCoder: <stripped>
	0xd0210  @objc NoDataViewController.loadView <stripped>
	0xd0240  @objc NoDataViewController.initWithNibName:bundle: <stripped>

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
	0xd1120  func CancellationToken.isCancelled.getter // getter 
	0xd1150  func CancellationToken.cancelBlock.getter // getter 
	0xd1190  func CancellationToken.cancelBlock.setter // setter 
	0xd11d0  func CancellationToken.cancelBlock.modify // modifyCoroutine 
	0xd1030  class func CancellationToken.__allocating_init(cancelBlock:) // init 
	0xd1570  func CancellationToken.cancel() // method 
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
	0xd1920  func PromotionListViewDataSourceProvider.store.getter // getter 
	0xd1960  func PromotionListViewDataSourceProvider.store.setter // setter 
	0xd19b0  func PromotionListViewDataSourceProvider.store.modify // modifyCoroutine 
	0xd16b0  class func PromotionListViewDataSourceProvider.__allocating_init(predicate:store:) // init 
	0xd1a60  func PromotionListViewDataSourceProvider.selectedDataSources(for:) // method 
	0xd1ab0  func PromotionListViewDataSourceProvider.makePromotionDataSource() // method 
 }

 class HealthRecordsUI.AccountErrorTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let accountErrorView : AccountErrorFeedItemView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xd21c0  @objc AccountErrorTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0xd2220  @objc AccountErrorTableViewCell.initWithCoder: <stripped>
	0xd2660  @objc AccountErrorTableViewCell.layoutSubviews <stripped>
	0xd2750  @objc AccountErrorTableViewCell.sizeThatFits: <stripped>
	0xd2970  @objc AccountErrorTableViewCell.traitCollectionDidChange: <stripped>
	0xd2a80  @objc AccountErrorTableViewCell.layoutMarginsDidChange <stripped>
	0xd2c00  @objc AccountErrorTableViewCell.prepareForReuse <stripped>
	0xd2cd0  @objc AccountErrorTableViewCell.setHighlighted:animated: <stripped>
	0xd2d40  @objc AccountErrorTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0xd20e0  class func static AccountErrorTableViewCell.reuseIdentifier.getter // getter 
	0xd2260  func <stripped> // method 
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
	0xd3440  @objc InternalStateProvider.initWithHealthStore: <stripped>
	0xd3580  @objc InternalStateProvider.initWithProfile: <stripped>
	0xd3670  @objc InternalStateProvider.init <stripped>
	0xd3740  @objc InternalStateProvider.dealloc <stripped>
	0xd43a0  @objc InternalStateProvider.fetchJSONWithCompletion: <stripped>
	0xd37b0  @objc InternalStateProvider..cxx_destruct <stripped>

	// Swift methods
	0xd3850  func <stripped> // method 
	0xd3e60  func InternalStateProvider.fetchJSON(completion:) // method 
	0xd4410  func <stripped> // method 
 }

 class HealthRecordsUI.SuggestedActionTileViewControllerShim {
 class HealthRecordsUI.OnboardingSuggestedActionViewController {
 class HealthRecordsUI.BloodPressureCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
	0xda510  @objc BloodPressureCurrentValueViewDataSource.initWithDateCache:displayCategoryController:healthStore:selectedRangeFormatter: <stripped>
	0xda5c0  @objc BloodPressureCurrentValueViewDataSource.init <stripped>
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
	0xe3950  @objc MedicalRecordChartDataSource.displayName <stripped>
	0xe3b20  @objc MedicalRecordChartDataSource.initWithConcept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type: <stripped>
	0xe3eb0  @objc MedicalRecordChartDataSource.cachedBlockForPath:context: <stripped>
	0xe4b70  @objc MedicalRecordChartDataSource.chartDisplayTypeWithVerticalAxis: <stripped>
	0xe6420  @objc MedicalRecordChartDataSource.init <stripped>
	0xe6480  @objc MedicalRecordChartDataSource..cxx_destruct <stripped>

	// Swift methods
	0xe3710  func MedicalRecordChartDataSource.unit.getter // getter 
	0xe3790  func MedicalRecordChartDataSource.preferredColors.getter // getter 
	0xe37f0  func MedicalRecordChartDataSource.chartableXRange.getter // getter 
	0xe38f0  func MedicalRecordChartDataSource.chartableYRange.getter // getter 
	0xe3a30  func MedicalRecordChartDataSource.displayName.getter // getter 
	0xe3200  class func MedicalRecordChartDataSource.__allocating_init(concept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type:) // init 
	0xe3f50  func MedicalRecordChartDataSource.chartPoints(in:with:) // method 
	0xe43e0  func MedicalRecordChartDataSource.numberOfDataPoints(in:) // method 
	0xe46a0  func MedicalRecordChartDataSource.graphSeries(withMainColor:verticalAxis:) // method 
	0xe49b0  func MedicalRecordChartDataSource.chartDisplayType(verticalAxis:) // method 
	0xe4bd0  func MedicalRecordChartDataSource.take(chartableCodedQuantitySets:) // method 
	0xe5670  func MedicalRecordChartDataSource.bucketQuantitySets(with:) // method 
 }

 class HealthRecordsUI.CategoryRecordQueryDescription : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SampleQueryDescription {

	// Properties
	let category : BrowseCategory // +0x80000400 (0x0)
	let sampleQueryDescription : HKSampleQueryDescription // +0x0 (0x8)

	// Swift methods
	0xea260  func CategoryRecordQueryDescription.sampleType.getter // getter 
	0xea290  func CategoryRecordQueryDescription.predicate.getter // getter 
	0xea2d0  func CategoryRecordQueryDescription.hash(into:) // method 
	0xea3b0  func CategoryRecordQueryDescription.hashValue.getter // getter 
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
	0xeb0b0  @objc VaccinationRecordFormatter.init <stripped>
	0xeb040  @objc VaccinationRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0xeaee0  class func VaccinationRecordFormatter.__allocating_init(store:context:) // init 
	0xeafb0  func VaccinationRecordFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.NotificationPolicy : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xed710  @objc NotificationPolicy.userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler: <stripped>
	0xedc70  @objc NotificationPolicy.userNotificationCenter:willPresentNotification:withCompletionHandler: <stripped>
	0xede10  @objc NotificationPolicy.init <stripped>

	// Swift methods
	0xed580  func NotificationPolicy.userNotificationCenter(_:didReceive:withCompletionHandler:) // method 
	0xed790  func NotificationPolicy.userNotificationCenter(_:willPresent:withCompletionHandler:) // method 
 }

 class HealthRecordsUI.MedicalRecordChartPoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let chartableSet : HKChartableCodedQuantitySet // +0x8 (0x8)
	let blockCoordinateInfo : SingleValueChartData // +0x10 (0x8)
	let sortedYValues : [Double] // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xeec70  @objc MedicalRecordChartPoint.userInfo <stripped>
	0xeed40  @objc MedicalRecordChartPoint.xValueAsGenericType <stripped>
	0xeeed0  @objc MedicalRecordChartPoint.maxXValueAsGenericType <stripped>
	0xf1100  @objc MedicalRecordChartPoint.minXValueAsGenericType <stripped>
	0xef000  @objc MedicalRecordChartPoint.yValue <stripped>
	0xef0b0  @objc MedicalRecordChartPoint.yValueForKey: <stripped>
	0xef2d0  @objc MedicalRecordChartPoint.allYValues <stripped>
	0xef330  @objc MedicalRecordChartPoint.minYValue <stripped>
	0xef3e0  @objc MedicalRecordChartPoint.maxYValue <stripped>
	0xef460  @objc MedicalRecordChartPoint.description <stripped>
	0xef770  @objc MedicalRecordChartPoint.init <stripped>
	0xef7d0  @objc MedicalRecordChartPoint..cxx_destruct <stripped>

	// Swift methods
	0xeeb30  class func MedicalRecordChartPoint.__allocating_init(chartableSet:unit:blockCoordinateInfo:) // init 
	0xeec40  func MedicalRecordChartPoint.userInfo() // method 
	0xeeca0  func MedicalRecordChartPoint.xValueAsGenericType() // method 
	0xeee30  func MedicalRecordChartPoint.maxXValueAsGenericType() // method 
	0xf1110  func MedicalRecordChartPoint.minXValueAsGenericType() // method 
	0xeefc0  func MedicalRecordChartPoint.yValue() // method 
	0xef020  func MedicalRecordChartPoint.yValue(forKey:) // method 
	0xef180  func MedicalRecordChartPoint.allYValues() // method 
	0xf10f0  func MedicalRecordChartPoint.minYValue() // method 
	0xef390  func MedicalRecordChartPoint.maxYValue() // method 
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
	0xf34d0  @objc LabelStackView.initWithCoder: <stripped>
	0xf3d00  @objc LabelStackView.layoutSubviews <stripped>
	0xf3e20  @objc LabelStackView.sizeThatFits: <stripped>
	0xf3fa0  @objc LabelStackView.initWithFrame: <stripped>
	0xf3ea0  @objc LabelStackView..cxx_destruct <stripped>

	// Swift methods
	0xf3460  class func LabelStackView.__allocating_init(textStyle:) // init 
	0xf3550  func LabelStackView.addLabel(text:textColor:) // method 
	0xf36e0  func LabelStackView.removeAll() // method 
 }

 class HealthRecordsUI.SideBySideLabelCell : WDMedicalRecordGroupableCell {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let detailLabel : UILabel // +0x10 (0x8)
	let chevronView : UIView // +0x18 (0x8)
	var title : String? // +0x20 (0x10)
	var detail : String? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0xf4b10  @objc SideBySideLabelCell.title <stripped>
	0xf4b50  @objc SideBySideLabelCell.setTitle: <stripped>
	0xf4c20  @objc SideBySideLabelCell.detail <stripped>
	0xf4d20  @objc SideBySideLabelCell.setDetail: <stripped>
	0xf5060  @objc SideBySideLabelCell.initWithReuseIdentifier: <stripped>
	0xf5820  @objc SideBySideLabelCell.traitCollectionDidChange: <stripped>
	0xf5980  @objc SideBySideLabelCell.initWithStyle:reuseIdentifier: <stripped>
	0xf5a50  @objc SideBySideLabelCell.initWithCoder: <stripped>
	0xf5860  @objc SideBySideLabelCell..cxx_destruct <stripped>

	// Swift methods
	0xf4b30  func SideBySideLabelCell.title.getter // getter 
	0xf4b70  func SideBySideLabelCell.title.setter // setter 
	0xf4ba0  func SideBySideLabelCell.title.modify // modifyCoroutine 
	0xf4cb0  func SideBySideLabelCell.detail.getter // getter 
	0xf4dc0  func SideBySideLabelCell.detail.setter // setter 
	0xf4df0  func SideBySideLabelCell.detail.modify // modifyCoroutine 
	0xf5100  func <stripped> // method 
 }

 class HealthRecordsUI.BrowseIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var iconCache : UnboundedCache // +0x10 (0x48)
	var placeholderCache : UnboundedCache // +0x58 (0x48)
	let accountIconProvider : AccountIconProvider // +0xa0 (0x8)

	// Swift methods
	0xf6cb0  class func BrowseIconProvider.__allocating_init(accountIconProvider:) // init 
	0xf6e50  func BrowseIconProvider.placeholder(for:size:) // method 
	0xf7330  func BrowseIconProvider.fetchIcon(for:size:queue:completion:) // method 
 }

 class HealthRecordsUI.OAuthViewControllerNotificationUserInfoKeys : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xf8a10  @objc OAuthViewControllerNotificationUserInfoKeys.init <stripped>
	0xf89b0  @objc OAuthViewControllerNotificationUserInfoKeys..cxx_destruct <stripped>
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
	0xfaad0  @objc AnalyticsManager.init <stripped>
	0xfabf0  @objc AnalyticsManager.submitAndFlushQueuedEvents <stripped>
	0xfb0a0  @objc AnalyticsManager.postOnboardingFunnelEventWithStep:context:gatewayUrl: <stripped>
	0xfb520  @objc AnalyticsManager..cxx_destruct <stripped>

	// Swift methods
	0xfaaf0  func AnalyticsManager.submitAndFlushQueuedEvents() // method 
	0xfac20  func AnalyticsManager.postOnboardingFunnelEvent(step:context:gatewayUrl:) // method 
 }

 class HealthRecordsUI.AllergyReactionFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xfefc0  @objc AllergyReactionFormatter.displayItemsFromReaction:country: <stripped>
	0xff390  @objc AllergyReactionFormatter.init <stripped>
	0xff3f0  @objc AllergyReactionFormatter..cxx_destruct <stripped>

	// Swift methods
	0xfccf0  func AllergyReactionFormatter.structuredItems(from:country:) // method 
	0xfe1b0  func AllergyReactionFormatter.displayItems(from:country:) // method 
	0xfeed0  class func AllergyReactionFormatter.__allocating_init(store:context:) // init 
	0xfef70  func AllergyReactionFormatter.displayItems(from:country:) // method 
 }

 class HealthRecordsUI.BloodPressureChartData : HKInteractiveChartBloodPressureData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : )) // +0xede5 (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x169440 (0x8)
	let hasTime : Bool // +0x0 (0x1)
	let partOfOutOfRangeSeries : Bool // +0x2 (0x1)

	// ObjC -> Swift bridged methods
	0x100af0  @objc BloodPressureChartData.init <stripped>
	0x100a70  @objc BloodPressureChartData..cxx_destruct <stripped>

	// Swift methods
	0x100820  class func BloodPressureChartData.__allocating_init(date:dateFormat:hasTime:systolicRange:diastolicRange:) // init 
 }

 class HealthRecordsUI.AccountTableViewCell : HRSourceTableViewCell {

	// Properties
	let brandView : WDMedicalRecordBrandView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x102090  @objc AccountTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x1020e0  @objc AccountTableViewCell.initWithCoder: <stripped>
	0x102240  @objc AccountTableViewCell.configureWithAccount:dataProvider: <stripped>
	0x102620  @objc AccountTableViewCell.prepareForReuse <stripped>
	0x1027d0  @objc AccountTableViewCell.layoutSubviews <stripped>
	0x102850  @objc AccountTableViewCell..cxx_destruct <stripped>

	// Swift methods
	0x102120  func <stripped> // method 
	0x102230  func AccountTableViewCell.configureWithAccountDataProviderForObjC(_:_:) // method 
	0x1022b0  func <stripped> // method 
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
	0x106030  @objc MedicalRecordChartOverlayContext.initWithTitle:dataSource:defaultColors:selectedColors:verticalAxis: <stripped>
	0x106130  @objc MedicalRecordChartOverlayContext.contextItemForLastUpdate <stripped>
	0x1063d0  @objc MedicalRecordChartOverlayContext.updateContextItemForDateInterval:timeScope:completion: <stripped>
	0x1064e0  @objc MedicalRecordChartOverlayContext.sampleTypeForDateRangeUpdates <stripped>
	0x106560  @objc MedicalRecordChartOverlayContext.overlayDisplayTypeForTimeScope: <stripped>
	0x1066b0  @objc MedicalRecordChartOverlayContext.init <stripped>
	0x1065d0  @objc MedicalRecordChartOverlayContext..cxx_destruct <stripped>

	// Swift methods
	0x105eb0  class func MedicalRecordChartOverlayContext.__allocating_init(title:dataSource:defaultColors:selectedColors:verticalAxis:) // init 
	0x1060c0  func MedicalRecordChartOverlayContext.contextItemForLastUpdate() // method 
	0x1061b0  func MedicalRecordChartOverlayContext.updateItem(for:timeScope:completion:) // method 
	0x1064a0  func MedicalRecordChartOverlayContext.sampleTypeForDateRangeUpdates() // method 
	0x106550  func MedicalRecordChartOverlayContext.overlayDisplayType(for:) // method 
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
	0x107210  @objc AccountStateChangeListener.healthRecordsStore:accountDidChange:changeType: <stripped>
	0x107330  @objc AccountStateChangeListener.init <stripped>
	0x1072c0  @objc AccountStateChangeListener..cxx_destruct <stripped>

	// Swift methods
	0x106f30  class func AccountStateChangeListener.__allocating_init(handler:) // init 
	0x106ff0  func AccountStateChangeListener.accountStateDidChange(healthRecordsStore:account:changeType:) // method 
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
	0x10b680  func CountFormatter.style.getter // getter 
	0x10b6f0  func CountFormatter.style.setter // setter 
	0x10b720  func CountFormatter.style.modify // modifyCoroutine 
	0x10b7c0  class func CountFormatter.__allocating_init(style:) // init 
	0x10b860  func CountFormatter.string(for:) // method 
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
	0x10c620  @objc DiagnosticTestReportFormatter.init <stripped>
	0x10c5b0  @objc DiagnosticTestReportFormatter..cxx_destruct <stripped>

	// Swift methods
	0x10c450  class func DiagnosticTestReportFormatter.__allocating_init(store:context:) // init 
	0x10c520  func DiagnosticTestReportFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.AccountIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monogramProvider : MonogramProvider // +0x10 (0x8)
	var brandImageManager : HKBrandImageManager // +0x18 (0x8)
	var iconCache : UnboundedCache // +0x20 (0x48)

	// Swift methods
	0x10d6f0  class func AccountIconProvider.__allocating_init(brandImageManager:monogramProvider:) // init 
	0x10d800  func AccountIconProvider.placeholder(forTitle:size:) // method 
	0x10e220  func AccountIconProvider.fetchIcon(forAccount:size:completion:) // method 
	0x10e770  func AccountIconProvider.fetchIcon(for:size:queue:completion:) // method 
 }

 class HealthRecordsUI.ContentStatusCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let spinner : UIActivityIndicatorView // +0x8 (0x8)
	let titleLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x110130  @objc ContentStatusCell.spinner <stripped>
	0x110170  @objc ContentStatusCell.titleLabel <stripped>
	0x1103b0  @objc ContentStatusCell.init <stripped>
	0x1103d0  @objc ContentStatusCell.initWithCoder: <stripped>
	0x110960  @objc ContentStatusCell.initWithStyle:reuseIdentifier: <stripped>
	0x110880  @objc ContentStatusCell..cxx_destruct <stripped>

	// Swift methods
	0x1103f0  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartSeries : HKGraphSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var selectedStrokeStyle : HKStrokeStyle?
	var unselectedStrokeStyle : HKStrokeStyle?

	// ObjC -> Swift bridged methods
	0x110d50  @objc MedicalRecordChartSeries.selectedPathRange <stripped>
	0x110f70  @objc MedicalRecordChartSeries.coordinatesForBlock:blockPath:xAxis:yAxis: <stripped>
	0x111740  @objc MedicalRecordChartSeries.drawSeriesWithBlockCoordinates:axisRect:zoomLevelConfiguration:pointTransform:renderContext:secondaryRenderContext: <stripped>
	0x111850  @objc MedicalRecordChartSeries.supportsMultiTouchSelection <stripped>
	0x111870  @objc MedicalRecordChartSeries.blockCoordinateIsVisibleInsideOfChartRect:blockCoordinate: <stripped>
	0x111910  @objc MedicalRecordChartSeries.distanceFromPoint:blockCoordinate:chartRect: <stripped>
	0x111980  @objc MedicalRecordChartSeries.xAxisDistanceFromPoint:blockCoordinate:chartRect: <stripped>
	0x1119f0  @objc MedicalRecordChartSeries.yAxisDifferenceToPoint:blockCoordinate:chartRect: <stripped>
	0x111aa0  @objc MedicalRecordChartSeries.init <stripped>
	0x111b10  @objc MedicalRecordChartSeries..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordChartCoordinate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let pointValuesAscending : CGPoint
	let blockCoordinateInfo : HKGraphSeriesBlockCoordinateInfo

	// ObjC -> Swift bridged methods
	0x111f60  @objc MedicalRecordChartCoordinate.startXValue <stripped>
	0x111fc0  @objc MedicalRecordChartCoordinate.endXValue <stripped>
	0x112020  @objc MedicalRecordChartCoordinate.userInfo <stripped>
	0x112060  @objc MedicalRecordChartCoordinate.copyWithTransform:roundToViewScale: <stripped>
	0x112170  @objc MedicalRecordChartCoordinate.init <stripped>
	0x112110  @objc MedicalRecordChartCoordinate..cxx_destruct <stripped>

	// Swift methods
	0x110f50  class func MedicalRecordChartCoordinate.__allocating_init(sortedPointValues:blockCoordinateInfo:) // init 
	0x111d50  func MedicalRecordChartCoordinate.xValue.getter // getter 
	0x111d80  func MedicalRecordChartCoordinate.minPoint.getter // getter 
	0x111db0  func MedicalRecordChartCoordinate.maxPoint.getter // getter 
	0x111df0  func MedicalRecordChartCoordinate.distance(from:) // method 
	0x111f90  func MedicalRecordChartCoordinate.startXValue.getter // getter 
	0x111ff0  func MedicalRecordChartCoordinate.endXValue.getter // getter 
	0x114ae0  func MedicalRecordChartCoordinate.userInfo.getter // getter 
	0x112050  func MedicalRecordChartCoordinate.copy(with:roundToViewScale:) // method 
 }

 class HealthRecordsUI.ContentStatusView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let subtitleLabel : UILabel // +0x10 (0x8)
	let spinnerView : UIActivityIndicatorView // +0x18 (0x8)
	var title : String? // +0x20 (0x10)
	var subtitle : String? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x114af0  @objc ContentStatusView.title <stripped>
	0x114b30  @objc ContentStatusView.setTitle: <stripped>
	0x114c00  @objc ContentStatusView.subtitle <stripped>
	0x114d00  @objc ContentStatusView.setSubtitle: <stripped>
	0x114f50  @objc ContentStatusView.initWithTitle:subtitle: <stripped>
	0x115050  @objc ContentStatusView.initWithCoder: <stripped>
	0x115310  @objc ContentStatusView.initWithFrame: <stripped>
	0x115590  @objc ContentStatusView.startAnimating <stripped>
	0x115600  @objc ContentStatusView.stopAnimating <stripped>
	0x115750  @objc ContentStatusView.traitCollectionDidChange: <stripped>
	0x115d70  @objc ContentStatusView.layoutSubviews <stripped>
	0x115ee0  @objc ContentStatusView..cxx_destruct <stripped>

	// Swift methods
	0x114b10  func ContentStatusView.title.getter // getter 
	0x114b50  func ContentStatusView.title.setter // setter 
	0x114b80  func ContentStatusView.title.modify // modifyCoroutine 
	0x114c90  func ContentStatusView.subtitle.getter // getter 
	0x114da0  func ContentStatusView.subtitle.setter // setter 
	0x114dd0  func ContentStatusView.subtitle.modify // modifyCoroutine 
	0x114e90  class func ContentStatusView.__allocating_init(title:subtitle:) // init 
	0x115340  func <stripped> // method 
	0x115570  func ContentStatusView.startAnimating() // method 
	0x1155b0  func ContentStatusView.stopAnimating() // method 
	0x115da0  func <stripped> // method 
 }

 class HealthRecordsUI.MedicationRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x117180  @objc MedicationRecordFormatter.init <stripped>
	0x1170f0  @objc MedicationRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x1164d0  func MedicationRecordFormatter.structuredItems(from:) // method 
	0x116910  class func MedicationRecordFormatter.__allocating_init(store:context:) // init 
	0x1169d0  func MedicationRecordFormatter.displayItems(from:) // method 
	0x116a30  func <stripped> // method 
 }

 class HealthRecordsUI.ClinicalOnboardingManager : WDClinicalOnboardingManager {
	// ObjC -> Swift bridged methods
	0x1183a0  @objc ClinicalOnboardingManager.initWithProfile: <stripped>
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
	0x1183e0  @objc ConceptTitleTableHeaderView.bottomExtraSpace <stripped>
	0x118450  @objc ConceptTitleTableHeaderView.setBottomExtraSpace: <stripped>
	0x118530  @objc ConceptTitleTableHeaderView.title <stripped>
	0x118640  @objc ConceptTitleTableHeaderView.setTitle: <stripped>
	0x118c10  @objc ConceptTitleTableHeaderView.initWithFrame: <stripped>
	0x118c40  @objc ConceptTitleTableHeaderView.initWithCoder: <stripped>
	0x118fc0  @objc ConceptTitleTableHeaderView.layoutSubviews <stripped>
	0x1191d0  @objc ConceptTitleTableHeaderView.sizeThatFits: <stripped>
	0x119820  @objc ConceptTitleTableHeaderView..cxx_destruct <stripped>

	// Swift methods
	0x118420  func ConceptTitleTableHeaderView.bottomExtraSpace.getter // getter 
	0x1184a0  func ConceptTitleTableHeaderView.bottomExtraSpace.setter // setter 
	0x1184e0  func ConceptTitleTableHeaderView.bottomExtraSpace.modify // modifyCoroutine 
	0x1185d0  func ConceptTitleTableHeaderView.title.getter // getter 
	0x1186f0  func ConceptTitleTableHeaderView.title.setter // setter 
	0x118760  func ConceptTitleTableHeaderView.title.modify // modifyCoroutine 
	0x118c60  func <stripped> // method 
	0x119220  func <stripped> // method 
 }

 class HealthRecordsUI.WeakNotificationObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let scheduler : TaskScheduler // +0x8 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let block :  empty-list  // +0x30 (0x10)
	var center : weak NSNotificationCenter? // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x119d60  @objc WeakNotificationObserver.dealloc <stripped>
	0x119e80  @objc WeakNotificationObserver.didReceiveWithNotification: <stripped>
	0x11a020  @objc WeakNotificationObserver.init <stripped>
	0x119df0  @objc WeakNotificationObserver..cxx_destruct <stripped>

	// Swift methods
	0x119bf0  class func WeakNotificationObserver.__allocating_init(forName:object:scheduler:center:block:) // init 
	0x119e30  func WeakNotificationObserver.invalidate() // method 
 }

 class HealthRecordsUI.MedicalRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore // +0x8 (0x8)
	let context : MedicalRecordFormatterContext // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x11c820  @objc MedicalRecordFormatter.structuredItemsFromRecord: <stripped>
	0x11d520  @objc MedicalRecordFormatter.initWithConceptStore:context: <stripped>
	0x11dc90  @objc MedicalRecordFormatter.displayItemsFromRecord: <stripped>
	0x11ddb0  @objc MedicalRecordFormatter.init <stripped>
	0x11dd40  @objc MedicalRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x11c420  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11c8a0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11c960  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11ca20  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11cae0  func MedicalRecordFormatter.structuredItems(from:) // method 
	0x11cba0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11cca0  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11cd90  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11ce80  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11cf60  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11d060  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11d160  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11d260  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11d350  func MedicalRecordFormatter.displayItems(from:) // method 
	0x11d480  class func MedicalRecordFormatter.__allocating_init(store:context:) // init 
	0x11d580  func MedicalRecordFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.ViewControllerFactory : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let profile : HRProfile // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x11e0f0  @objc ViewControllerFactory.profile <stripped>
	0x11e5f0  @objc ViewControllerFactory.makeSettingsViewController <stripped>
	0x11f090  @objc ViewControllerFactory.makeViewControllerForRecord: <stripped>
	0x11f0f0  @objc ViewControllerFactory.makeDetailViewControllerForRecord: <stripped>
	0x11f190  @objc ViewControllerFactory.init <stripped>
	0x11f1f0  @objc ViewControllerFactory..cxx_destruct <stripped>

	// Swift methods
	0x11e110  func ViewControllerFactory.makeViewController(forAccount:) // method 
	0x11e200  func ViewControllerFactory.makeAndPresentAddAccountViewController(from:animated:completion:) // method 
	0x11e380  func ViewControllerFactory.makeDetailViewController(forAccount:) // method 
	0x11e4a0  func ViewControllerFactory.makeDetailViewController(for:) // method 
	0x11e4e0  func ViewControllerFactory.makeLearnMoreViewController() // method 
	0x11e550  func ViewControllerFactory.makeSettingsViewController() // method 
	0x11e6c0  func ViewControllerFactory.makeViewController(for:) // method 
	0x11ea70  func ViewControllerFactory.makeViewController(for:fromDisplayCategory:highlightedRecord:) // method 
	0x11ebf0  func ViewControllerFactory.makeViewController(forConcept:fromDisplayCategory:highlightedRecord:) // method 
	0x11ee00  func ViewControllerFactory.makeViewController(for:) // method 
	0x11f0b0  func ViewControllerFactory.makeDetailViewController(for:) // method 
 }

 class HealthRecordsUI.MedicalRecordAnnotationViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dateGroup : UIStackView // +0x8 (0x8)
	let monthYearLabel : UILabel // +0x10 (0x8)
	let timeLabel : UILabel // +0x18 (0x8)
	let dividerLabel : UILabel // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x120c00  @objc MedicalRecordAnnotationViewDataSource.init <stripped>
	0x120c20  @objc MedicalRecordAnnotationViewDataSource.numberOfValuesForAnnotationView: <stripped>
	0x120c60  @objc MedicalRecordAnnotationViewDataSource.valueViewForColumnAtIndex:orientation: <stripped>
	0x120c90  @objc MedicalRecordAnnotationViewDataSource.showSeparators <stripped>
	0x120ca0  @objc MedicalRecordAnnotationViewDataSource.dateViewWithOrientation: <stripped>
	0x120cf0  @objc MedicalRecordAnnotationViewDataSource.leftMarginViewWithOrientation: <stripped>
	0x120d30  @objc MedicalRecordAnnotationViewDataSource..cxx_destruct <stripped>

	// Swift methods
	0x120300  func MedicalRecordAnnotationViewDataSource.numberOfValues(for:) // method 
	0x120c30  func MedicalRecordAnnotationViewDataSource.valueViewForColumn(at:orientation:) // method 
	0x120310  func MedicalRecordAnnotationViewDataSource.showSeparators() // method 
	0x120320  func MedicalRecordAnnotationViewDataSource.dateView(with:) // method 
	0x120350  func MedicalRecordAnnotationViewDataSource.leftMarginView(with:) // method 
	0x120360  func MedicalRecordAnnotationViewDataSource.updateDateGroup(using:) // method 
	0x120390  func MedicalRecordAnnotationViewDataSource.updateDateGroup(using:timeScope:) // method 
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
	0x128e00  @objc HealthRecordsSupportedStateChangeListener.healthRecordsStore:healthRecordsSupportedDidChangeTo: <stripped>
	0x128f00  @objc HealthRecordsSupportedStateChangeListener.init <stripped>
	0x128e90  @objc HealthRecordsSupportedStateChangeListener..cxx_destruct <stripped>

	// Swift methods
	0x128b40  class func HealthRecordsSupportedStateChangeListener.__allocating_init(handler:) // init 
	0x128c00  func HealthRecordsSupportedStateChangeListener.healthRecordsSupportedDidChange(healthRecordsStore:to:) // method 
 }

 class HealthRecordsUI.BloodPressureDataTransformer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit? // +0x10 (0x8)
	var $__lazy_storage_$_displayType : HKDisplayType? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x12b390  @objc BloodPressureDataTransformer.chartPointFor:in:with:dataSourceType: <stripped>
	0x12b4a0  @objc BloodPressureDataTransformer.graphSeriesWith: <stripped>
	0x12b580  @objc BloodPressureDataTransformer.chartDisplayTypeWith:displayName:unitName: <stripped>

	// Swift methods
	0x12a620  func BloodPressureDataTransformer.createUserInfo(date:timeScope:systole:diastole:) // method 
	0x12aca0  func BloodPressureDataTransformer.chartPoint(for:in:with:dataSourceType:) // method 
	0x12b410  func BloodPressureDataTransformer.graphSeries(with:) // method 
	0x12b570  func BloodPressureDataTransformer.chartDisplayType(with:displayName:unitName:) // method 
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
	0x12f910  @objc IconTextListView.initWithCoder: <stripped>
	0x1302c0  @objc IconTextListView.layoutSubviews <stripped>
	0x1303b0  @objc IconTextListView.sizeThatFits: <stripped>
	0x130700  @objc IconTextListView.traitCollectionDidChange: <stripped>
	0x130880  @objc IconTextListView.initWithFrame: <stripped>
	0x130780  @objc IconTextListView..cxx_destruct <stripped>

	// Swift methods
	0x12f870  class func IconTextListView.__allocating_init(textStyle:iconSize:interItemSpacingHorizontal:interItemSpacingVertical:hidesIconsForAccessibilityTextSizes:) // init 
	0x12f990  func IconTextListView.addItem(icon:text:textColor:) // method 
	0x12fbb0  func IconTextListView.removeAll() // method 
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
	0x1324f0  @objc StandardTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x132560  @objc StandardTableViewCell.initWithCoder: <stripped>

	// Swift methods
	0x132420  class func static StandardTableViewCell.reuseIdentifier.getter // getter 
 }

 class HealthRecordsUI.NoAppTableViewCell : HRStandardTableViewCell {
	// ObjC -> Swift bridged methods
	0x132650  @objc NoAppTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x132710  @objc NoAppTableViewCell.initWithCoder: <stripped>
 }

 class HealthRecordsUI.SourceTableViewCell : HRStandardTableViewCell {

	// Properties
	var sourceModel : HKSourceDataModel?

	// ObjC -> Swift bridged methods
	0x1331e0  @objc SourceTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x133340  @objc SourceTableViewCell.initWithCoder: <stripped>
	0x133430  @objc SourceTableViewCell..cxx_destruct <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordUnitCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var units : [HKUnit : NSCountedSet] // +0x10 (0x8)

	// Swift methods
	0x133e50  func MedicalRecordUnitCollector.add(units:) // method 
	0x134cd0  func MedicalRecordUnitCollector.preferredUnit() // method 
 }

 class HealthRecordsUI.BloodPressureFormatter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit? // +0x10 (0x8)

	// Swift methods
	0x138b20  func BloodPressureFormatter.rawUnitString.getter // getter 
	0x138c00  func BloodPressureFormatter.niceUnitString.getter // getter 
	0x138d60  func BloodPressureFormatter.valueString(for:diastolicRange:) // method 
 }

 class HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var lastCachedNumberOfChartPoints : Int? // +0x8 (0x9)

	// ObjC -> Swift bridged methods
	0x1394e0  @objc SingleValueCurrentValueViewDataSource.attributedTitleStringForCurrentValueView: <stripped>
	0x139b40  @objc SingleValueCurrentValueViewDataSource.updateDataSourceWithGraphView:displayType:timeScope: <stripped>
	0x139d10  @objc SingleValueCurrentValueViewDataSource.initWithDateCache:displayCategoryController:healthStore:selectedRangeFormatter: <stripped>
	0x139df0  @objc SingleValueCurrentValueViewDataSource.init <stripped>

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
	0x140160  @objc HealthRecordsMigrator.migrateIfNeededWithCompletion: <stripped>
	0x1408f0  @objc HealthRecordsMigrator.init <stripped>
	0x140820  @objc HealthRecordsMigrator..cxx_destruct <stripped>

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
	0x141100  func ConceptListViewDataSourceProvider.store.getter // getter 
	0x141140  func ConceptListViewDataSourceProvider.store.setter // setter 
	0x141190  func ConceptListViewDataSourceProvider.store.modify // modifyCoroutine 
	0x140fb0  class func ConceptListViewDataSourceProvider.__allocating_init(categoryPredicate:store:) // init 
	0x141280  func ConceptListViewDataSourceProvider.selectedDataSources(for:) // method 
	0x1412e0  func <stripped> // method 
	0x1418a0  func ConceptListViewDataSourceProvider.makePromotionDataSource() // method 
 }

 class HealthRecordsUI.MedicationDispenseFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter // +0x8 (0x8)
	let store : HKConceptStore // +0x10 (0x8)
	let context : MedicalRecordFormatterContext // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x142c30  @objc MedicationDispenseFormatter.init <stripped>
	0x142c90  @objc MedicationDispenseFormatter..cxx_destruct <stripped>

	// Swift methods
	0x1426e0  func MedicationDispenseFormatter.structuredItems(from:) // method 
	0x142680  class func MedicationDispenseFormatter.__allocating_init(store:context:) // init 
	0x142b80  func MedicationDispenseFormatter.displayItems(from:) // method 
 }

 class HealthRecordsUI.HealthRecordsNotAvailableViewController : UIAlertController /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x144000  @objc HealthRecordsNotAvailableViewController.initWithNibName:bundle: <stripped>
	0x144150  @objc HealthRecordsNotAvailableViewController.initWithCoder: <stripped>

	// Swift methods
	0x143c20  class func static HealthRecordsNotAvailableViewController.presentableInstance() // method 
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
	0x1497a0  @objc ConceptHeaderCell.headerImage <stripped>
	0x1497e0  @objc ConceptHeaderCell.setHeaderImage: <stripped>
	0x1498c0  @objc ConceptHeaderCell.title <stripped>
	0x149980  @objc ConceptHeaderCell.setTitle: <stripped>
	0x149b50  @objc ConceptHeaderCell.categoryColor <stripped>
	0x149c10  @objc ConceptHeaderCell.setCategoryColor: <stripped>
	0x149f80  @objc ConceptHeaderCell.setupSubviews <stripped>
	0x14a480  @objc ConceptHeaderCell.setUpConstraints <stripped>
	0x14a4b0  @objc ConceptHeaderCell.intendedPlacement <stripped>
	0x14a510  @objc ConceptHeaderCell.setIntendedPlacement: <stripped>
	0x14a7a0  @objc ConceptHeaderCell._updateForCurrentSizeCategory <stripped>
	0x14a970  @objc ConceptHeaderCell.traitCollectionDidChange: <stripped>
	0x14ae70  @objc ConceptHeaderCell.initWithStyle:reuseIdentifier: <stripped>
	0x14af40  @objc ConceptHeaderCell.initWithCoder: <stripped>
	0x14ad40  @objc ConceptHeaderCell..cxx_destruct <stripped>

	// Swift methods
	0x1497c0  func ConceptHeaderCell.headerImage.getter // getter 
	0x149800  func ConceptHeaderCell.headerImage.setter // setter 
	0x149840  func ConceptHeaderCell.headerImage.modify // modifyCoroutine 
	0x149930  func ConceptHeaderCell.title.getter // getter 
	0x1499e0  func ConceptHeaderCell.title.setter // setter 
	0x149a10  func ConceptHeaderCell.title.modify // modifyCoroutine 
	0x149bb0  func ConceptHeaderCell.categoryColor.getter // getter 
	0x149ca0  func ConceptHeaderCell.categoryColor.setter // setter 
	0x149ce0  func ConceptHeaderCell.categoryColor.modify // modifyCoroutine 
	0x14a9c0  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartSeries : HKBloodPressureSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
	0x14b7d0  @objc BloodPressureChartSeries.selectedPathRange <stripped>
	0x14ba70  @objc BloodPressureChartSeries.init <stripped>
 }

 class HealthRecordsUI.ProfileOnboardingActionViewController {
 class HealthRecordsUI.OnboardingTableViewCell : type metadata for ChromeHostViewTableCell /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI {
	// ObjC -> Swift bridged methods
	0x14bfb0  @objc OnboardingTableViewCell.initWithStyle:reuseIdentifier: <stripped>
	0x14c010  @objc OnboardingTableViewCell.initWithCoder: <stripped>

	// Swift methods
 }

 class HealthRecordsUI.ProviderNotFoundView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let glyphView : UIView // +0x8 (0x8)
	let providerStatusLabel : UILabel // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x14c820  @objc ProviderNotFoundView.initWithFrame: <stripped>
	0x14c850  @objc ProviderNotFoundView.initWithCoder: <stripped>
	0x14cfc0  @objc ProviderNotFoundView..cxx_destruct <stripped>

	// Swift methods
	0x14c8a0  func <stripped> // method 
 }

 class HealthRecordsUI.RecordKindDataProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RecordKindDataProviderProtocol {

	// Properties
	let healthStore : HKHealthStore // +0x10 (0x8)
	let queue : OS_dispatch_queue // +0x18 (0x8)

	// Swift methods
	0x14d2f0  class func RecordKindDataProvider.__allocating_init(healthStore:) // init 
	0x14d4a0  func RecordKindDataProvider.fetchRecordKinds(completion:) // method 
	0x14dd20  func RecordKindDataProvider.fetchRecordKinds(in:completion:) // method 
	0x14ebc0  func RecordKindDataProvider.addObserver(following:handler:) // method 
 }

 class HealthRecordsUI.CategoryViewControllerManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var activeCategoryViewController : weak UIViewController? // +0x10 (0x8)

	// Swift methods
	0x151620  func CategoryViewControllerManager.isCategoryViewControllerOnTop() // method 
	0x151d00  func CategoryViewControllerManager.hasActiveCategoryViewController() // method 
 }

 class HealthRecordsUI.Features : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x151ff0  @objc Features.init <stripped>
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
	0x153380  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
	0x153430  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
	0x153440  class func static HealthRecordsUnitFormatter.unitString(from:) // method 
 }

 struct HealthRecordsUI.RecordKindFeedItemIdentifierFactory { }

 class HealthRecordsUI.RecordPrimaryTitleCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let recordTitleLabel : UILabel
	let recordDateLabel : UILabel

	// ObjC -> Swift bridged methods
	0x154480  @objc RecordPrimaryTitleCell.recordTitleLabel <stripped>
	0x1544c0  @objc RecordPrimaryTitleCell.recordDateLabel <stripped>
	0x154540  @objc RecordPrimaryTitleCell.initWithStyle:reuseIdentifier: <stripped>
	0x154560  @objc RecordPrimaryTitleCell.initWithCoder: <stripped>
	0x154c10  @objc RecordPrimaryTitleCell..cxx_destruct <stripped>

	// Swift methods
	0x1545a0  func <stripped> // method 
 }

 class HealthRecordsUI.RecordDetailItemCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let bodyLabel : UILabel

	// ObjC -> Swift bridged methods
	0x154cc0  @objc RecordDetailItemCell.titleLabel <stripped>
	0x154d00  @objc RecordDetailItemCell.bodyLabel <stripped>
	0x154d80  @objc RecordDetailItemCell.initWithStyle:reuseIdentifier: <stripped>
	0x154e00  @objc RecordDetailItemCell.initWithCoder: <stripped>
	0x1554e0  @objc RecordDetailItemCell..cxx_destruct <stripped>

	// Swift methods
	0x154e40  func <stripped> // method 
 }

 class HealthRecordsUI.RecordReferenceRangeCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let referenceRangeView : HKReferenceRangeView // +0x8 (0x8)
	var valueInRange : HKInspectableValueInRange? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x155590  @objc RecordReferenceRangeCell.valueInRange <stripped>
	0x155620  @objc RecordReferenceRangeCell.setValueInRange: <stripped>
	0x155760  @objc RecordReferenceRangeCell.initWithStyle:reuseIdentifier: <stripped>
	0x155780  @objc RecordReferenceRangeCell.initWithCoder: <stripped>
	0x155820  @objc RecordReferenceRangeCell..cxx_destruct <stripped>

	// Swift methods
	0x1555e0  func RecordReferenceRangeCell.valueInRange.getter // getter 
	0x155670  func RecordReferenceRangeCell.valueInRange.setter // setter 
	0x155690  func RecordReferenceRangeCell.valueInRange.modify // modifyCoroutine 
 }

 class HealthRecordsUI.RecordDataSourceCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let brandView : WDMedicalRecordBrandView

	// ObjC -> Swift bridged methods
	0x155980  @objc RecordDataSourceCell.initWithStyle:reuseIdentifier: <stripped>
	0x1559a0  @objc RecordDataSourceCell.initWithCoder: <stripped>
	0x155bf0  @objc RecordDataSourceCell.configCellWith:owner:dataProvider: <stripped>
	0x155ca0  @objc RecordDataSourceCell..cxx_destruct <stripped>

	// Swift methods
	0x155a90  func RecordDataSourceCell.configCell(with:owner:dataProvider:) // method 
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
	0x158b40  @objc ProcedureRecordFormatter.init <stripped>
	0x158ba0  @objc ProcedureRecordFormatter..cxx_destruct <stripped>

	// Swift methods
	0x158980  class func ProcedureRecordFormatter.__allocating_init(store:context:) // init 
	0x158a90  func ProcedureRecordFormatter.displayItems(from:) // method 
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
