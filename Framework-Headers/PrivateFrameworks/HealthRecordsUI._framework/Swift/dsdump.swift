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
 protocol HealthRecordsUI.AccountViewControllerFactory // 7 requirements
 {
	// method
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
 protocol HealthRecordsUI.FeedItemIdentifierFactory // 1 requirements
 {
	// class method
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
	var width : ù:
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ù:
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : ù:
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ù:
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

 class __C.CGContext {
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
	let conceptId : ÛD
	let title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let meaningfulDate : 	:
 }

 class HealthRecordsUI.SingleValueAnnotationViewDataSource : MedicalRecordAnnotationViewDataSource {

	// Properties
	let referenceRangeView : HKReferenceRangeView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15a840006d078 (0x2840006d078) in binary!
	0x1af18  @objc SingleValueAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x1cc6c0006d868 (0x46c0006d868) in binary!
	0x148f0  @objc SingleValueAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x1aa940006be40 (0x2940006be40) in binary!
	0x28000000c  @objc SingleValueAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x15a3c0006d030 (0x23c0006d030) in binary!
	0x1aa70  @objc SingleValueAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0xccfff0db48  @objc SingleValueAnnotationViewDataSource.(null) <stripped>

	// Swift methods
	0x60ec0  func <stripped> // method 
	0x60f70  func <stripped> // method 
	0x60fc0  func <stripped> // method 
	0x616d0  func <stripped> // method 
 }

 class HealthRecordsUI.SingleValueChartData : HKInteractiveChartSinglePointData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let chartableQuantitySet : HKChartableCodedQuantitySet // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : ı7 // +0x3 (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x3e (0x8)
	let hasTime : Bool // +0x6100085 (0x1)
	let partOfOutOfRangeSeries : Bool // +0xfeedfacf (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15a3c0006d030 (0x23c0006d030) in binary!
	0x1aa70  @objc SingleValueChartData.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0xccfff0db48  @objc SingleValueChartData.(null) <stripped>

	// Swift methods
	0x62050  class func SingleValueChartData.__allocating_init(chartableQuantitySet:date:dateFormat:hasTime:partOfOutOfRangeSeries:) // init 
	0x620e0  func <stripped> // method 
 }

 class HealthRecordsUI.LoadingTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containerView : UIView
	let spinner : UIActivityIndicatorView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15a1c0006d010 (0x21c0006d010) in binary!
	0x14a84  @objc LoadingTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1ad940006d380 (0x5940006d380) in binary!
	0x1aa38  @objc LoadingTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x9cfff0f400  @objc LoadingTableViewCell.(null) <stripped>
	0x94fff0f4d8  @objc LoadingTableViewCell. <stripped>

	// Swift methods
	0x63ca0  class func <stripped> // getter 
	0x63f50  func <stripped> // method 
	0x63f70  func <stripped> // method 
	0x63f90  func <stripped> // method 
 }

 class HealthRecordsUI.Box {
 enum HealthRecordsUI.IconStyle {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case opaque : 8
	case template : UIColor
	case default  
 }

 class HealthRecordsUI.InternalAllFeedForProfileViewController {
 class HealthRecordsUI.AllFeedForProfileDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var store : {<
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sourceProfile : S8

	// Swift methods
	0x65fc0  func <stripped> // getter 
	0x66000  func <stripped> // setter 
	0x66050  func <stripped> // modifyCoroutine 
	0x65e10  class func AllFeedForProfileDataSourceProvider.__allocating_init(sourceProfile:store:) // init 
	0x661c0  func <stripped> // method 
	0x662a0  func <stripped> // method 
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
	case custom : È6
	case small  
	case medium  
	case large  
 }

 struct HealthRecordsUI.AccountErrorFeedItemViewData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let accountId : ˝5
	let title : String
	let subtitle : String
	let state : HKClinicalAccountState
 }

 class HealthRecordsUI.TapToRadarManager : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x159640006cf58 (0x1640006cf58) in binary!
	0x28000000c  @objc TapToRadarManager.(null) <stripped>
 }

 struct HealthRecordsUI.SyncTaskScheduler: TaskScheduler { }

 class HealthRecordsUI.DiagnosticTestResultFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1594c0006cf40 (0x14c0006cf40) in binary!
	0x1a980  @objc DiagnosticTestResultFormatter.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff17418  @objc DiagnosticTestResultFormatter.(null) <stripped>

	// Swift methods
	0x6a920  class func DiagnosticTestResultFormatter.__allocating_init(store:context:) // init 
	0x6a9e0  func <stripped> // method 
 }

 class HealthRecordsUI.InternalConceptsFeedViewController {
 struct HealthRecordsUI.AccountViewData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let accountId : ˝5
	let title : String
	let subtitle : String?
 }

 class HealthRecordsUI.AccountView {
 class HealthRecordsUI.ClinicalSourcesDataProvider : WDClinicalSourcesDataProvider {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1acbc0006f730 (0x4bc0006f730) in binary!
	0x78000000c  @objc ClinicalSourcesDataProvider.(null) <stripped>
 }

 class HealthRecordsUI.InternalStateViewController : UITableViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var dataProvider : InternalStateProvider
	var sections : InternalStateSection
	var profile : HRProfile

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1aca40006d290 (0x4a40006d290) in binary!
	0x1a948  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x1a93c0006c698 (0x13c0006c698) in binary!
	0x153c6  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x169840006c5e8 (0x1840006c5e8) in binary!
	0x142c8  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x1a90c0006bcb8 (0x10c0006bcb8) in binary!
	0x58000000c  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x154150006bec0 (0x4150006bec0) in binary!
	0x1ab9c  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x169100006e4f8 (0x1100006e4f8) in binary!
	0x1a9bc  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x142740006bce8 (0x2740006bce8) in binary!
	0x28000000c  @objc InternalStateViewController.(null) <stripped>

	// Swift methods
	0x6dcd0  func <stripped> // method 
 }

 class HealthRecordsUI.Cell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x148e00006cf28 (0xe00006cf28) in binary!
	0x1abf0  @objc Cell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x554fff1d708  @objc Cell.(null) <stripped>

	// Swift methods
	0x6d750  class func <stripped> // getter 
	0x6d870  func <stripped> // method 
 }

 class HealthRecordsUI.FeedItemListViewController {
 class HealthRecordsUI.FeedItemListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]
WARNING: couldn't find address 0x0 (0x0) in binary!
	let store : {<

	// Swift methods
	0x6fdf0  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateSection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let title : String
	let items : InternalStateItem

	// Swift methods
	0x72710  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let title : String
	let value : String

	// Swift methods
	0x72c50  func <stripped> // method 
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
WARNING: couldn't find address 0x1434c0006fdc8 (0x34c0006fdc8) in binary!
	0x1abd0  @objc SingleValueDataTransformer.(null) <stripped>
WARNING: couldn't find address 0x143540006fd68 (0x3540006fd68) in binary!
	0x18000000c  @objc SingleValueDataTransformer.(null) <stripped>
WARNING: couldn't find address 0x1408c00070070 (0x8c00070070) in binary!
	0x18000000c  @objc SingleValueDataTransformer.(null) <stripped>

	// Swift methods
	0x73960  func <stripped> // method 
	0x73c40  func <stripped> // method 
	0x73ca0  func <stripped> // method 
 }

 enum HealthRecordsUI.LocalizationContext { }

 enum HealthRecordsUI.RecordLookupError {

	// Properties
	case unknown  
 }

 class HealthRecordsUI.ConditionRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x157ec0006cde0 (0x7ec0006cde0) in binary!
	0x1a820  @objc ConditionRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff29b98  @objc ConditionRecordFormatter.(null) <stripped>

	// Swift methods
	0x7e590  class func ConditionRecordFormatter.__allocating_init(store:context:) // init 
	0x7e650  func <stripped> // method 
 }

 class HealthRecordsUI.TimelineHeaderView : UITableViewHeaderFooterView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : weak HRTimelineHeaderViewDelegate?
	var $__lazy_storage_$_titleLabel : UILabel?
	var $__lazy_storage_$_subtitleLabel : UILabel?
	var $__lazy_storage_$_backgroundEffectView : UIVisualEffectView?
	var $__lazy_storage_$_separatorView : UIView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x157b40006e230 (0x7b40006e230) in binary!
	0x1c9a8  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1ab2c0006e580 (0x32c0006e580) in binary!
	0x1ab20  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1980e0006e738 (0xe0006e738) in binary!
	0x1c978  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1a7ac0006c408 (0x7ac0006c408) in binary!
	0x13fd0  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1522a0006f960 (0x22a0006f960) in binary!
	0x1a788  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x150ec0006dc08 (0xec0006dc08) in binary!
	0x1c930  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1a7640006bb10 (0x7640006bb10) in binary!
	0x28000000c  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1570c0006cd00 (0x70c0006cd00) in binary!
	0x1a740  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x324fff2c8a8  @objc TimelineHeaderView.(null) <stripped>
	0x31cfff2c920  @objc TimelineHeaderView.ü <stripped>
	0x2ecfff2c9d8  @objc TimelineHeaderView.√UHâÂSPHâ˚Hã=7! <stripped>
	0x48cfff2caf0  @objc TimelineHeaderView. <stripped>
	0xfff2cdb8  @objc TimelineHeaderView.âÂHãw! <stripped>

	// Swift methods
	0x80040  class func <stripped> // getter 
	0x800b0  func <stripped> // getter 
	0x80130  func <stripped> // setter 
	0x80200  func <stripped> // modifyCoroutine 
	0x802d0  func <stripped> // getter 
	0x802f0  func <stripped> // getter 
	0x80420  func <stripped> // getter 
	0x804d0  func <stripped> // getter 
	0x80730  func <stripped> // method 
	0x80860  func <stripped> // method 
	0x809e0  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartabilityResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let configuration : MedicalRecordChartConfiguration // +0x8 (0x8)
	let masterDataSource : MedicalRecordChartDataSource // +0x10 (0x8)
	let seriesDataSources : MedicalRecordChartDataSource // +0x18 (0x8)
	let outOfRangeDataSource : MedicalRecordChartDataSource // +0x20 (0x8)
	let noRangeDataSource : MedicalRecordChartDataSource // +0x28 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let latestChartableDate : 	: // +0x198000 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x156ec0006cb20 (0x6ec0006cb20) in binary!
	0x156e0  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x156d40006cb20 (0x6d40006cb20) in binary!
	0x156c8  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x156bc0006cb18 (0x6bc0006cb18) in binary!
	0x156b0  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x13f140006cad0 (0x7140006cad0) in binary!
	0x15698  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x1a6cc0006ba78 (0x6cc0006ba78) in binary!
	0x28000000c  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x155f40006cae0 (0x5f40006cae0) in binary!
	0x15668  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x8cfff3bc80  @objc MedicalRecordChartabilityResult.(null) <stripped>
	0x424fff3bce8  @objc MedicalRecordChartabilityResult. <stripped>
	0x6900006e278  @objc MedicalRecordChartabilityResult.UHâÂHãΩ! <stripped>

	// Swift methods
	0x83110  func <stripped> // getter 
	0x83190  class func MedicalRecordChartabilityResult.__allocating_init(configuration:masterDataSource:seriesDataSources:outOfRangeDataSource:noRangeDataSource:latestChartableDate:) // init 
 }

 class HealthRecordsUI.MedicalRecordChartabilityDeterminer : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x155f40006cae0 (0x5f40006cae0) in binary!
	0x15668  @objc MedicalRecordChartabilityDeterminer.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x8cfff3bc80  @objc MedicalRecordChartabilityDeterminer.(null) <stripped>

	// Swift methods
	0x83420  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeriesCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let concept : HKConcept // +0x10 (0x8)
	var preferredColors : HKUIMetricColors? // +0x18 (0x8)
	var chartableQuantitySets : [HKChartableCodedQuantitySet] // +0x20 (0x8)

	// Swift methods
	0x85150  class func MedicalRecordChartableSeriesCollector.__allocating_init(concept:) // init 
	0x85280  func <stripped> // method 
	0x854e0  func <stripped> // getter 
	0x85770  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeries : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let concept : HKConcept
	let chartableQuantitySets : [HKChartableCodedQuantitySet]
	let preferredColors : HKUIMetricColors?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1570c0006cd00 (0x70c0006cd00) in binary!
	0x1a740  @objc MedicalRecordChartableSeries.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x324fff2c8a8  @objc MedicalRecordChartableSeries.(null) <stripped>

	// Swift methods
	0x85eb0  func <stripped> // getter 
	0x85d90  class func MedicalRecordChartableSeries.__allocating_init(concept:chartableQuantities:unit:preferredColors:) // init 
	0x86130  func <stripped> // method 
	0x86230  func <stripped> // method 
	0x86250  func <stripped> // method 
 }

 struct HealthRecordsUI.UnboundedCache: Cache {

	// Properties
	let storageBox : Box
	let lowMemoryWarnings : Any
	let didEnterBackground : Any
 }

 class HealthRecordsUI.SingleValueChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1b0a40006cad8 (0xa40006cad8) in binary!
	0x13eb8  @objc SingleValueChartConfiguration.(null) <stripped>
	0x15630  -[WDMedicalRecordBrandView brandTitleLabel]
WARNING: couldn't find address 0x138000000c (0x138000000c) in binary!
	0x274fffa7dc8  @objc SingleValueChartConfiguration.(null) <stripped>
	0x3dcfffa7ee0  @objc SingleValueChartConfiguration.â√Hã5”â <stripped>

	// Swift methods
	0x92270  func <stripped> // getter 
	0x922c0  func <stripped> // getter 
	0x92300  func <stripped> // getter 
 }

 struct HealthRecordsUI.LoadState {

	// Properties
	let lock : NSObject // +0x0
	var didLoadHandlers : [()] // +0x8
	var _isLoaded : Bool // +0x10
 }

 class HealthRecordsUI.SettingsViewController : HKTableViewController /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var accounts : [HKClinicalAccount]
	var appSourceModels : [HKSourceDataModel]
	var researchStudySourceModels : [HKSourceDataModel]
	var sourceLoadingToken : WDCancellationToken?
	var accountLoadingToken : WDCancellationToken?
	let factory : ViewControllerFactory
	let profile : HRProfile
	var sourceListDataSource : HKSourceListDataSource?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x166900006e278 (0x6900006e278) in binary!
	0x1a73c  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a8f80006ba60 (0xf80006ba60) in binary!
	0x1a8ec  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x13fdc0006ba50 (0x7dc0006ba50) in binary!
	0x18530  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x185240006c010 (0x5240006c010) in binary!
	0x19652  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1511d0006bbc8 (0x11d0006bbc8) in binary!
	0x1a940  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a5e40006dc08 (0x5e40006dc08) in binary!
	0x1a5d8  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x150620006cf30 (0x620006cf30) in binary!
	0x1c780  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x15f140006bcb8 (0x7140006bcb8) in binary!
	0x15f19  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x165fc0006c260 (0x5fc0006c260) in binary!
	0x13f40  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a5840006b930 (0x5840006b930) in binary!
	0x28000000c  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1c72c0006c0d0 (0x72c0006c0d0) in binary!
	0x1a560  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x744fff426e8  @objc SettingsViewController.(null) <stripped>
	0x2dcfff42750  @objc SettingsViewController. <stripped>
	0x7f40006e530  @objc SettingsViewController.‘Iâ∆Hã= <stripped>
WARNING: couldn't find address 0x6ce44fff42980 (0x644fff42980) in binary!
	0x4fc0006c258  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x6e10cfff431c8 (0x10cfff431c8) in binary!
	0x7980006ba80  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x6e0fcfff43470 (0xfcfff43470) in binary!
	0x67c0006b8f0  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x6b8fcfff440a8 (0xfcfff440a8) in binary!
	0x4fb0006b8c8  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x6ba54fff442c0 (0x254fff442c0) in binary!
	0x49c0006f750  @objc SettingsViewController.(null) <stripped>

	// Swift methods
	0x92e10  class func SettingsViewController.__allocating_init(with:) // init 
	0x93f70  func <stripped> // method 
	0x94d00  func <stripped> // getter 
	0x94d30  func <stripped> // getter 
	0x94d90  func <stripped> // method 
 }

 class HealthRecordsUI.AccountErrorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x979e0  func <stripped> // method 
	0x98150  func <stripped> // method 
 }

 enum HealthRecordsUI.OnboardingFunnelSteps { }

 enum HealthRecordsUI.OnboardingFunnelContext { }

 class HealthRecordsUI.BloodPressureChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1af5c0006c990 (0x75c0006c990) in binary!
	0x13d70  @objc BloodPressureChartConfiguration.(null) <stripped>
WARNING: couldn't find address 0x154f40006f730 (0x4f40006f730) in binary!
	0x154e8  @objc BloodPressureChartConfiguration.(null) <stripped>
WARNING: couldn't find address 0xf8000000c (0xf8000000c) in binary!
	0x644fff42980  @objc BloodPressureChartConfiguration.(null) <stripped>
	0x10cfff431c8  @objc BloodPressureChartConfiguration.HãE»HâC(LâÔLã-^Ê <stripped>

	// Swift methods
	0x98e20  func <stripped> // getter 
	0x98e70  func <stripped> // getter 
	0x98ec0  func <stripped> // getter 
 }

 class HealthRecordsUI.FilterSettingsViewController : HKTableViewController /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var delegate : weak FilterSettingsViewControllerDelegate?
	var categories : [WDMedicalRecordCategory]
	var selectedCategories : Set<WDMedicalRecordCategory>
	var accounts : [HKClinicalAccount]
	var selectedAccounts : Set<HKClinicalAccount>
	let defaultCellIdentifier : String
	let defaultHeaderIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultSectionContentInset : ù:
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultSectionCornerRadius : ù:

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x13ff40006e530 (0x7f40006e530) in binary!
	0x1a858  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a4fc0006c258 (0x4fc0006c258) in binary!
	0x16524  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a7980006ba80 (0x7980006ba80) in binary!
	0x1a5c4  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x13e7c0006b8f0 (0x67c0006b8f0) in binary!
	0x1950a  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x164fb0006b8c8 (0x4fb0006b8c8) in binary!
	0x164ef  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a49c0006f750 (0x49c0006f750) in binary!
	0x15e01  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x164e40006c148 (0x4e40006c148) in binary!
	0x13e28  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a46c0006b818 (0x46c0006b818) in binary!
	0x28000000c  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x154140006ca08 (0x4140006ca08) in binary!
	0x1a448  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff48d00  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x54cfff48d48  @objc FilterSettingsViewController.(null) <stripped>
	0xfff49060  @objc FilterSettingsViewController.ã]∏Aˇ◊LâÁAˇ◊LâÔAˇ◊Lãe»Lãu¿Hãs0Hã{8ˇWHã4Á <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff49158  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x774fff4d370  @objc FilterSettingsViewController.(null) <stripped>
	0x3740006c968  @objc FilterSettingsViewController.Hã5Èé <stripped>

	// Swift methods
	0x99020  class func FilterSettingsViewController.__allocating_init(withDelegate:selectedCategories:selectedAccounts:) // init 
	0x9aa90  func <stripped> // method 
	0x9acd0  func <stripped> // method 
	0x9af10  func <stripped> // method 
	0x9af40  func <stripped> // method 
	0x9b150  func <stripped> // method 
	0x9b170  func <stripped> // method 
	0x9b2f0  func <stripped> // method 
 }

 class HealthRecordsUI.CoverageRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_classificationFormatter : CoverageClassificationFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x154140006ca08 (0x4140006ca08) in binary!
	0x1a448  @objc CoverageRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff48d00  @objc CoverageRecordFormatter.(null) <stripped>

	// Swift methods
	0x9d880  func <stripped> // getter 
	0x9d960  func <stripped> // method 
	0x9da70  class func CoverageRecordFormatter.__allocating_init(store:context:) // init 
	0x9db30  func <stripped> // method 
 }

 class HealthRecordsUI.AddAccountTableViewCell : HRStandardTableViewCell {

	// Properties
	var alignWithAccountTitle : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x144500006ca98 (0x4500006ca98) in binary!
	0x1a760  @objc AddAccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a4040006d930 (0x4040006d930) in binary!
	0x18000000c  @objc AddAccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x13c1c0006f6f0 (0x41c0006f6f0) in binary!
	0x28000000c  @objc AddAccountTableViewCell.(null) <stripped>

	// Swift methods
	0x9f6f0  func <stripped> // method 
 }

 struct HealthRecordsUI.LocalizationSource {

	// Properties
	let bundle : NSBundle // +0x0
	let table : String // +0x8
 }

 class HealthRecordsUI.CategoryCountDataProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, CategoryCountDataProviderProtocol {

	// Properties
	let healthStore : HKHealthStore

	// Swift methods
	0xa19b0  class func CategoryCountDataProvider.__allocating_init(healthStore:) // init 
	0xa19f0  func <stripped> // method 
 }

 class HealthRecordsUI.AllergyRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_reactionFormatter : AllergyReactionFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x153940006c988 (0x3940006c988) in binary!
	0x1a3c8  @objc AllergyRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x754fff4f300  @objc AllergyRecordFormatter.(null) <stripped>

	// Swift methods
	0xa3430  func <stripped> // getter 
	0xa3510  func <stripped> // method 
	0xa3620  class func AllergyRecordFormatter.__allocating_init(store:context:) // init 
	0xa36e0  func <stripped> // method 
	0xa3740  func <stripped> // method 
 }

 struct HealthRecordsUI.CategorySummaryFeedItemIdentifierFactory { }

 class HealthRecordsUI.MedicationOrderFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x153740006c968 (0x3740006c968) in binary!
	0x1a3a8  @objc MedicationOrderFormatter.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x34fff50ee0  @objc MedicationOrderFormatter.(null) <stripped>

	// Swift methods
	0xa54a0  func <stripped> // getter 
	0xa5580  func <stripped> // method 
	0xa5680  class func MedicationOrderFormatter.__allocating_init(store:context:) // init 
	0xa5740  func <stripped> // method 
	0xa57a0  func <stripped> // method 
 }

 class HealthRecordsUI.InternalAllHealthRecordsFeedViewController {
 class HealthRecordsUI.HealthRecordsFeedDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var store : {<
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sourceProfile : S8

	// Swift methods
	0xa6ed0  func <stripped> // getter 
	0xa6f10  func <stripped> // setter 
	0xa6f60  func <stripped> // modifyCoroutine 
	0xa6d20  class func HealthRecordsFeedDataSourceProvider.__allocating_init(sourceProfile:store:) // init 
	0xa7010  func <stripped> // method 
	0xa7060  func <stripped> // method 
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
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1531c0006c910 (0x31c0006c910) in binary!
	0x1a350  @objc MedicationDosageFormatter.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x154fff59618  @objc MedicationDosageFormatter.(null) <stripped>

	// Swift methods
	0xab180  func <stripped> // method 
	0xab190  func <stripped> // method 
	0xab130  class func MedicationDosageFormatter.__allocating_init(store:context:) // init 
	0xab2c0  func <stripped> // method 
 }

 enum HealthRecordsUI.HealthRecordsURLParsingResult {

	// Properties
	case onboarding : (gatewayID: String, batchID: String)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case onboardingParsingError : #3
WARNING: couldn't find address 0x0 (0x0) in binary!
	case loginRedirectSuccess :  first-element-marker 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case loginRedirectError : #3
	case unrecognized  
	case viewHealthRecords  
	case startProviderSearch  
	case loginRedirectAccessNotGranted  
 }

 class HealthRecordsUI.HealthRecordsURLHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xadfe0  class func HealthRecordsURLHandler.__allocating_init() // init 
	0xae010  func <stripped> // method 
 }

 class HealthRecordsUI.RecordCategoryViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let category : DisplayCategory
	let healthRecordsStore : HKHealthRecordsStore
	var preferredSegment : ModeSegment
	let factory : HRCategoryViewControllerFactory
	let countProvider : CategoryCountProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var recordCanceller : ≈-
WARNING: couldn't find address 0x0 (0x0) in binary!
	var aToZCanceller : ≈-
	var recordCount : Int
	var currentViewController : UIViewController?
	var displayMode : DisplayMode
	var isModePickerHidden : Bool
	var $__lazy_storage_$_modePicker : UISegmentedControl?
	var $__lazy_storage_$_navigationPalette : _UINavigationBarPalette?
	var $__lazy_storage_$_lastUpdatedViewController : UIViewController?
	var $__lazy_storage_$_alphabeticalViewController : UIViewController?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a68c0006cc78 (0x68c0006cc78) in binary!
	0x1a330  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x1a3240006c080 (0x3240006c080) in binary!
	0x1a318  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x1c4cc0006f728 (0x4cc0006f728) in binary!
	0x1c4c0  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x13ca40006ca90 (0x4a40006ca90) in binary!
	0x1a2e8  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x794fff5d400  @objc RecordCategoryViewController.(null) <stripped>
	0xfff5d528  @objc RecordCategoryViewController.ËgS <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff5f910  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x3bcfff5f9f8  @objc RecordCategoryViewController.(null) <stripped>

	// Swift methods
	0xb0570  func <stripped> // method 
	0xb07e0  func <stripped> // method 
	0xb1070  func <stripped> // method 
	0xb1130  func <stripped> // method 
	0xb1210  func <stripped> // method 
	0xb1820  func <stripped> // method 
	0xb1ae0  func <stripped> // getter 
	0xb1b40  func <stripped> // getter 
	0xb1c20  func <stripped> // getter 
	0xb1de0  func <stripped> // getter 
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

 class HealthRecordsUI.NoDataViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let style : Style

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a6240006cc10 (0x6240006cc10) in binary!
	0x1a2c8  @objc NoDataViewController.(null) <stripped>
WARNING: couldn't find address 0x13c6c0006ca58 (0x46c0006ca58) in binary!
	0x18000000c  @objc NoDataViewController.(null) <stripped>
WARNING: couldn't find address 0x152640006c7a8 (0x2640006c7a8) in binary!
	0x98000000c  @objc NoDataViewController.(null) <stripped>

	// Swift methods
 }

 enum HealthRecordsUI.Style {

	// Properties
	case noData  
	case loading  
 }

 class HealthRecordsUI.CancellationToken : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var isCancelled : Bool
	var cancelBlock : ()

	// Swift methods
	0xb4e70  func <stripped> // getter 
	0xb4fa0  func <stripped> // getter 
	0xb4fe0  func <stripped> // setter 
	0xb5020  func <stripped> // modifyCoroutine 
	0xb4d80  class func CancellationToken.__allocating_init(cancelBlock:) // init 
	0xb5320  func <stripped> // method 
 }

 class HealthRecordsUI.PromotionListViewController {
 class HealthRecordsUI.PromotionListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
WARNING: couldn't find address 0x0 (0x0) in binary!
	var store : {<

	// Swift methods
	0xb5700  func <stripped> // getter 
	0xb5740  func <stripped> // setter 
	0xb5790  func <stripped> // modifyCoroutine 
	0xb5580  class func PromotionListViewDataSourceProvider.__allocating_init(predicate:store:) // init 
	0xb5810  func <stripped> // method 
	0xb5870  func <stripped> // method 
 }

 class HealthRecordsUI.AccountErrorTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let accountErrorView : AccountErrorFeedItemView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x142c00006c908 (0x2c00006c908) in binary!
	0x1a5d0  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a2740006d088 (0x2740006d088) in binary!
	0x14bd8  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1c41c0006cd68 (0x41c0006cd68) in binary!
	0x1a250  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a2440006bea0 (0x2440006bea0) in binary!
	0x177b2  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a22c0006b5d8 (0x22c0006b5d8) in binary!
	0x18000000c  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1c3d40006e1b8 (0x3d40006e1b8) in binary!
	0x68000000c  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a54c0006db28 (0x54c0006db28) in binary!
	0x1a540  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a1e40006d808 (0x1e40006d808) in binary!
	0x177d3  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1518c0006c780 (0x18c0006c780) in binary!
	0x1a1c0  @objc AccountErrorTableViewCell.(null) <stripped>

	// Swift methods
	0xb6300  class func <stripped> // getter 
	0xb6460  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateProvider : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let conceptStore : HKConceptStore
	let healthRecordsStore : HKHealthRecordsStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	let healthExperienceStore : {<
	var recordCounts : DisplayCategory
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sub : ≈-
	var loadState : LoadState
	var changeHandler : InternalStateProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var isObserving : 7(

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a54c0006db28 (0x54c0006db28) in binary!
	0x1a540  @objc InternalStateProvider.(null) <stripped>
WARNING: couldn't find address 0x1a1e40006d808 (0x1e40006d808) in binary!
	0x177d3  @objc InternalStateProvider.(null) <stripped>
WARNING: couldn't find address 0x1518c0006c780 (0x18c0006c780) in binary!
	0x1a1c0  @objc InternalStateProvider.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x9cfff644e8  @objc InternalStateProvider.(null) <stripped>
	0x45c0006cf30  @objc InternalStateProvider.ˇˇHâŸHãù@ˇˇˇE1¿Iâ¡Aˇ’Hã5¡µ <stripped>
WARNING: couldn't find address 0x6c734fff67be8 (0x734fff67be8) in binary!
	0x18000000c  @objc InternalStateProvider.(null) <stripped>

	// Swift methods
	0xb7610  func <stripped> // method 
	0xb8a80  func <stripped> // method 
	0xb9010  func <stripped> // method 
	0xba380  func <stripped> // method 
 }

 class HealthRecordsUI.SuggestedActionTileViewControllerShim {
 class HealthRecordsUI.OnboardingSuggestedActionViewController {
 class HealthRecordsUI.BloodPressureCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x17c5c0006cf30 (0x45c0006cf30) in binary!
	0x15140  @objc BloodPressureCurrentValueViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff68d98  @objc BloodPressureCurrentValueViewDataSource.(null) <stripped>
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
WARNING: couldn't find address 0x151140006c618 (0x1140006c618) in binary!
	0x17dd8  @objc MedicalRecordChartDataSource.(null) <stripped>
WARNING: couldn't find address 0x17dec0006bb50 (0x5ec0006bb50) in binary!
	0x1a480  @objc MedicalRecordChartDataSource.(null) <stripped>
WARNING: couldn't find address 0x150e40006c6d8 (0xe40006c6d8) in binary!
	0x1a118  @objc MedicalRecordChartDataSource.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x654fff76da0  @objc MedicalRecordChartDataSource.(null) <stripped>
	0x324fff77548  @objc MedicalRecordChartDataSource.Hã=π» <stripped>
	0x4ecfff775e0  @objc MedicalRecordChartDataSource.ã5íz <stripped>

	// Swift methods
	0xc4ce0  func <stripped> // getter 
	0xc4d60  func <stripped> // getter 
	0xc4dc0  func <stripped> // getter 
	0xc4ec0  func <stripped> // getter 
	0xc4fe0  func <stripped> // getter 
	0xc4a60  class func MedicalRecordChartDataSource.__allocating_init(concept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type:) // init 
	0xc54e0  func <stripped> // method 
	0xc59e0  func <stripped> // method 
	0xc5cb0  func <stripped> // method 
	0xc5fe0  func <stripped> // method 
	0xc61f0  func <stripped> // method 
	0xc6910  func <stripped> // method 
 }

 class HealthRecordsUI.CategoryRecordQueryDescription : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SampleQueryDescription {

	// Properties
	let category : BrowseCategory // +0x27b0 (0x0)
	let sampleQueryDescription : HKSampleQueryDescription // +0x0 (0x8)

	// Swift methods
	0xccd60  func <stripped> // getter 
	0xccd90  func <stripped> // getter 
	0xccdd0  func <stripped> // method 
	0xcceb0  func <stripped> // getter 
 }

 enum HealthRecordsUI.ResultError {

	// Properties
	case unspecified  
 }

 class HealthRecordsUI.OnboardingTileViewController : HKTableViewController /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let profile : HRProfile // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a4540006ca40 (0x4540006ca40) in binary!
	0x1a0f8  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x1a0ec0006f398 (0xec0006f398) in binary!
	0x1c2a0  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x1a1c00006dcf8 (0x1c00006dcf8) in binary!
	0x13a78  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x17fcc0006b9b8 (0x7cc0006b9b8) in binary!
	0x17fc0  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x15a150006f310 (0x2150006f310) in binary!
	0x160f8  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x13a3c0006c828 (0x23c0006c828) in binary!
	0x1a080  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x40cfff77f58  @objc OnboardingTileViewController.(null) <stripped>
	0x78c0006ba68  @objc OnboardingTileViewController.ã5Jí <stripped>
WARNING: couldn't find address 0x6ba64fff7a0c8 (0x264fff7a0c8) in binary!
	0x7f40006c5e8  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0xfff7a710 (0xfff7a710) in binary!
	0x7dc0006cdc8  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x6ba3cfff7b388 (0x23cfff7b388) in binary!
	0x7c40006ba38  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x6ba34fff7b5d0 (0x234fff7b5d0) in binary!
	0x7ac0006ba30  @objc OnboardingTileViewController.(null) <stripped>

	// Swift methods
	0xcd850  class func OnboardingTileViewController.__allocating_init(with:) // init 
	0xcde80  func <stripped> // method 
 }

 class HealthRecordsUI.VaccinationRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1502c0006c620 (0x2c0006c620) in binary!
	0x1a060  @objc VaccinationRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x264fff7a0c8  @objc VaccinationRecordFormatter.(null) <stripped>

	// Swift methods
	0xce990  class func VaccinationRecordFormatter.__allocating_init(store:context:) // init 
	0xcea50  func <stripped> // method 
 }

 class HealthRecordsUI.NotificationPolicy : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14f8c0006ba68 (0x78c0006ba68) in binary!
	0x14f80  @objc NotificationPolicy.(null) <stripped>
WARNING: couldn't find address 0x14ff40006c5e8 (0x7f40006c5e8) in binary!
	0xc8000000c  @objc NotificationPolicy.(null) <stripped>
WARNING: couldn't find address 0x14fdc0006cdc8 (0x7dc0006cdc8) in binary!
	0x14fd0  @objc NotificationPolicy.(null) <stripped>

	// Swift methods
	0xd0b00  func <stripped> // method 
	0xd0d60  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartPoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let chartableSet : HKChartableCodedQuantitySet
	let blockCoordinateInfo : SingleValueChartData
	let sortedYValues : [Double]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14fdc0006cdc8 (0x7dc0006cdc8) in binary!
	0x14fd0  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x14fc40006ba38 (0x7c40006ba38) in binary!
	0x14fb8  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x14fac0006ba30 (0x7ac0006ba30) in binary!
	0x1a330  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x14f940006ba28 (0x7940006ba28) in binary!
	0x14f88  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x14f7c0006ba20 (0x77c0006ba20) in binary!
	0x14f70  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x14f640006c558 (0x7640006c558) in binary!
	0x19f98  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0xf8000000c (0xf8000000c) in binary!
	0x304fff7d9a0  @objc MedicalRecordChartPoint.(null) <stripped>
	0x25cfff7dae8  @objc MedicalRecordChartPoint.â«Ëı¶ <stripped>
	0x25cfff7dc70  @objc MedicalRecordChartPoint.â«Ëß <stripped>
	0x24cfff7dd18  @objc MedicalRecordChartPoint.‰uXHã5‹ <stripped>
	0x21cfff7dea0  @objc MedicalRecordChartPoint.IâƒHâ«Lã5√? <stripped>
	0x1dcfff7df48  @objc MedicalRecordChartPoint.Hâ√Hâ«Hã5õÍ <stripped>

	// Swift methods
	0xd1e90  class func MedicalRecordChartPoint.__allocating_init(chartableSet:unit:blockCoordinateInfo:) // init 
	0xd1fa0  func <stripped> // method 
	0xd2000  func <stripped> // method 
	0xd2190  func <stripped> // method 
	0xd3c20  func <stripped> // method 
	0xd2320  func <stripped> // method 
	0xd2380  func <stripped> // method 
	0xd2580  func <stripped> // method 
	0xd3c00  func <stripped> // method 
	0xd2770  func <stripped> // method 
 }

 enum HealthRecordsUI.BrowseIcon {

	// Properties
	case category : (UIImage, tintColor: UIColor?)
	case account : AccountIcon
 }

 enum HealthRecordsUI.UserInteractionType { }

 enum HealthRecordsUI.UserInteractionContext { }

 enum HealthRecordsUI.UserInteractionAction { }

 class HealthRecordsUI.LabelStackView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let textStyle : TextStyle // +0x8 (0x8)
	var labels : [UILabel] // +0x10 (0x8)
	var font : UIFont // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interItemSpacing : ù: // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a2140006c800 (0x2140006c800) in binary!
	0x19eb8  @objc LabelStackView.(null) <stripped>
WARNING: couldn't find address 0x1481c0006d338 (0x1c0006d338) in binary!
	0x14830  @objc LabelStackView.(null) <stripped>
WARNING: couldn't find address 0x19e940006b240 (0x6940006b240) in binary!
	0x18000000c  @objc LabelStackView.(null) <stripped>
WARNING: couldn't find address 0x14e3c0006c210 (0x63c0006c210) in binary!
	0x28000000c  @objc LabelStackView.(null) <stripped>
WARNING: couldn't find address 0x14e240006c580 (0x6240006c580) in binary!
	0x14e18  @objc LabelStackView.(null) <stripped>

	// Swift methods
	0xd5dd0  class func LabelStackView.__allocating_init(textStyle:) // init 
	0xd60a0  func <stripped> // method 
	0xd6230  func <stripped> // method 
 }

 class HealthRecordsUI.BrowseIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var iconCache : UnboundedCache
	var placeholderCache : UnboundedCache
	let accountIconProvider : AccountIconProvider

	// Swift methods
	0xd90e0  class func BrowseIconProvider.__allocating_init(accountIconProvider:) // init 
	0xd9250  func <stripped> // method 
	0xd9860  func <stripped> // method 
	0xda5c0  func <stripped> // method 
 }

 class HealthRecordsUI.OAuthViewControllerNotificationUserInfoKeys : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14e040006c3f8 (0x6040006c3f8) in binary!
	0x19e38  @objc OAuthViewControllerNotificationUserInfoKeys.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff85cd0  @objc OAuthViewControllerNotificationUserInfoKeys.(null) <stripped>
 }

 enum HealthRecordsUI.HealthRecordsConceptType { }

 class HealthRecordsUI.AnalyticsManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let healthStore : HKHealthStore
	let conceptStore : HKConceptStore
	var queuedEvents : [[String : NSObject]]
	let managerQueue : OS_dispatch_queue
	var optInDetermined : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14dcc0006c3c0 (0x5cc0006c3c0) in binary!
	0x19e00  @objc AnalyticsManager.(null) <stripped>
WARNING: couldn't find address 0x18ae40006d5c0 (0x2e40006d5c0) in binary!
	0x18af8  @objc AnalyticsManager.(null) <stripped>
WARNING: couldn't find address 0x18b0c0006d5b0 (0x30c0006d5b0) in binary!
	0x19dd0  @objc AnalyticsManager.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x364fff88ce8  @objc AnalyticsManager.(null) <stripped>
	0xfff89100  @objc AnalyticsManager.Hâ√Hã5û€ <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x12cfff8b868  @objc AnalyticsManager.(null) <stripped>

	// Swift methods
	0xdcee0  func <stripped> // method 
	0xdd000  func <stripped> // method 
	0xdd470  func <stripped> // method 
	0xdd6d0  func <stripped> // method 
	0xdd850  func <stripped> // method 
	0xdde20  func <stripped> // method 
	0xde370  func <stripped> // method 
 }

 class HealthRecordsUI.AllergyReactionFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1376c0006b828 (0x76c0006b828) in binary!
	0x14d70  @objc AllergyReactionFormatter.(null) <stripped>
WARNING: couldn't find address 0x19da40006b150 (0x5a40006b150) in binary!
	0x28000000c  @objc AllergyReactionFormatter.(null) <stripped>
WARNING: couldn't find address 0x14d4c0006c340 (0x54c0006c340) in binary!
	0x19d80  @objc AllergyReactionFormatter.(null) <stripped>

	// Swift methods
	0xdf9e0  func <stripped> // method 
	0xdf9f0  func <stripped> // method 
	0xdfaa0  class func AllergyReactionFormatter.__allocating_init(store:context:) // init 
	0xdfb40  func <stripped> // method 
	0xdfc70  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartData : HKInteractiveChartBloodPressureData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : ı7 // +0x80000400 (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x0 (0x8)
	let hasTime : Bool // +0x74735f5f (0x1)
	let partOfOutOfRangeSeries : Bool // +0x0 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14d4c0006c340 (0x54c0006c340) in binary!
	0x19d80  @objc BloodPressureChartData.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff8c5f8  @objc BloodPressureChartData.(null) <stripped>

	// Swift methods
	0xe2470  class func BloodPressureChartData.__allocating_init(date:dateFormat:hasTime:systolicRange:diastolicRange:) // init 
 }

 class HealthRecordsUI.AccountTableViewCell : HRSourceTableViewCell {

	// Properties
	let brandView : WDMedicalRecordBrandView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x13d880006c3d0 (0x5880006c3d0) in binary!
	0x1a098  @objc AccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x18d860006c2a0 (0x5860006c2a0) in binary!
	0x19d30  @objc AccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x19d240006cb38 (0x5240006cb38) in binary!
	0x19d18  @objc AccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x76cfff90540  @objc AccountTableViewCell.(null) <stripped>
	0x764fff90928  @objc AccountTableViewCell.Hã51Í <stripped>
	0x27cfff90aa0  @objc AccountTableViewCell.Ê <stripped>

	// Swift methods
	0xe3680  func <stripped> // method 
	0xe3790  func <stripped> // method 
	0xe3810  func <stripped> // method 
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
	let title : String
	let dataSource : MedicalRecordChartDataSource
	let defaultColors : HKUIMetricColors
	let selectedColors : HKUIMetricColors
	let verticalAxis : HKNumericAxis
	var cachedItem : HKDisplayTypeContextItem?
	var cachedOverlayDisplayType : HKDisplayType?
	var cachedDataSource : MedicalRecordChartDataSource

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18f040006c1b8 (0x7040006c1b8) in binary!
	0x14cb8  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x18f0c0006b768 (0x70c0006b768) in binary!
	0x14ca0  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x15d340006b760 (0x5340006b760) in binary!
	0x14c88  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x19cbc0006b068 (0x4bc0006b068) in binary!
	0x38000000c  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x156040006b3a8 (0x6040006b3a8) in binary!
	0x14c58  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x19c8c0006b038 (0x48c0006b038) in binary!
	0x18000000c  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x14c340006c178 (0x4340006c178) in binary!
	0x68000000c  @objc MedicalRecordChartOverlayContext.(null) <stripped>

	// Swift methods
	0xe7330  class func MedicalRecordChartOverlayContext.__allocating_init(title:dataSource:defaultColors:selectedColors:verticalAxis:) // init 
	0xe7530  func <stripped> // method 
	0xe7620  func <stripped> // method 
	0xe7970  func <stripped> // method 
	0xe7a20  func <stripped> // method 
 }

 struct HealthRecordsUI.AccountStateChange {

	// Properties
	let healthRecordsStore : HKHealthRecordsStore // +0x0
	let account : HKClinicalAccount // +0x8
	let changeType : HKClinicalAccountStateChangeType // +0x10
 }

 class HealthRecordsUI.AccountStateChangeListener : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _latestChange : ì% // +0x0 (0x0)
	let handler : AccountStateChange // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x156040006b3a8 (0x6040006b3a8) in binary!
	0x14c58  @objc AccountStateChangeListener.(null) <stripped>
WARNING: couldn't find address 0x19c8c0006b038 (0x48c0006b038) in binary!
	0x18000000c  @objc AccountStateChangeListener.(null) <stripped>
WARNING: couldn't find address 0x14c340006c178 (0x4340006c178) in binary!
	0x68000000c  @objc AccountStateChangeListener.(null) <stripped>

	// Swift methods
	0xe82a0  func <stripped> // getter 
	0xe8300  func <stripped> // setter 
	0xe8370  func <stripped> // modifyCoroutine 
	0xe8540  func <stripped> // getter 
	0xe85e0  func <stripped> // setter 
	0xe8650  func <stripped> // modifyCoroutine 
	0xe87f0  class func AccountStateChangeListener.__allocating_init(handler:) // init 
	0xe8a60  func <stripped> // method 
 }

 struct HealthRecordsUI.AddAccountFeedItemIdentifierFactory { }

 class HealthRecordsUI.ExplainerTextFooterCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let label : UILabel
	var content : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14c1c0006f1d0 (0x41c0006f1d0) in binary!
	0x1be10  @objc ExplainerTextFooterCell.(null) <stripped>
WARNING: couldn't find address 0x19f940006d9e8 (0x7940006d9e8) in binary!
	0x13c6c  @objc ExplainerTextFooterCell.(null) <stripped>
WARNING: couldn't find address 0x19f7c0006c568 (0x77c0006c568) in binary!
	0x19c20  @objc ExplainerTextFooterCell.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x7acfff97238  @objc ExplainerTextFooterCell.(null) <stripped>
	0x3ac0006dab0  @objc ExplainerTextFooterCell.È…Y <stripped>
WARNING: couldn't find address 0x6b864fff9c068 (0x64fff9c068) in binary!
	0x3940006c188  @objc ExplainerTextFooterCell.(null) <stripped>

	// Swift methods
	0xe96b0  func <stripped> // getter 
	0xe9760  func <stripped> // setter 
	0xe9810  func <stripped> // modifyCoroutine 
	0xe9a90  func <stripped> // method 
 }

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
	case insurance  
 }

 class HealthRecordsUI.CountFormatter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var style : Style
	var formatKey : String
	var source : LocalizationSource

	// Swift methods
	0xed2f0  func <stripped> // getter 
	0xed350  func <stripped> // setter 
	0xed400  func <stripped> // modifyCoroutine 
	0xed650  class func CountFormatter.__allocating_init(style:) // init 
	0xed900  func <stripped> // method 
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
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14bcc0006c1c0 (0x3cc0006c1c0) in binary!
	0x19c00  @objc DiagnosticTestReportFormatter.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x64fff9c068  @objc DiagnosticTestReportFormatter.(null) <stripped>

	// Swift methods
	0xee0d0  class func DiagnosticTestReportFormatter.__allocating_init(store:context:) // init 
	0xee190  func <stripped> // method 
 }

 class HealthRecordsUI.AccountIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monogramProvider : MonogramProvider
	var brandImageManager : HKBrandImageManager
	var iconCache : UnboundedCache

	// Swift methods
	0xf0300  class func AccountIconProvider.__allocating_init(brandImageManager:monogramProvider:) // init 
	0xf03e0  func <stripped> // method 
	0xf04e0  func <stripped> // method 
	0xf0a60  func <stripped> // method 
 }

 class HealthRecordsUI.ContentStatusCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let spinner : UIActivityIndicatorView
	let titleLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14bac0006dab0 (0x3ac0006dab0) in binary!
	0x14ba0  @objc ContentStatusCell.(null) <stripped>
WARNING: couldn't find address 0x14b940006c188 (0x3940006c188) in binary!
	0x19f18  @objc ContentStatusCell.(null) <stripped>
WARNING: couldn't find address 0x13bf00006c238 (0x3f00006c238) in binary!
	0x19bb0  @objc ContentStatusCell.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x74fff9c988  @objc ContentStatusCell.(null) <stripped>
	0x30cfff9cab0  @objc ContentStatusCell.k <stripped>
	0x66cfff9cf38  @objc ContentStatusCell.k <stripped>

	// Swift methods
	0xf3390  func <stripped> // method 
 }

 class HealthRecordsUI.SideBySideLabelCell : WDMedicalRecordGroupableCell {

	// Properties
	let titleLabel : UILabel
	let detailLabel : UILabel
	let chevronView : UIView
	var title : String?
	var detail : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14b5c0006ba68 (0x35c0006ba68) in binary!
	0x1bd50  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x14b440006b1c0 (0x3440006b1c0) in binary!
	0x1bd38  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x19ebc0006d910 (0x6bc0006d910) in binary!
	0x1bd20  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x13b880006c1d0 (0x3880006c1d0) in binary!
	0x19e98  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x19b3c0006aee8 (0x33c0006aee8) in binary!
	0xa8000000c  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x194c40006f270 (0x4c40006f270) in binary!
	0x194e8  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x194fc0006b5a8 (0x4fc0006b5a8) in binary!
	0x13330  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x195540006b5a0 (0x5540006b5a0) in binary!
	0x19578  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x1956c0006b598 (0x56c0006b598) in binary!
	0x19560  @objc SideBySideLabelCell.(null) <stripped>

	// Swift methods
	0xf3a70  func <stripped> // getter 
	0xf3ab0  func <stripped> // setter 
	0xf3b20  func <stripped> // modifyCoroutine 
	0xf3c20  func <stripped> // getter 
	0xf3d20  func <stripped> // setter 
	0xf3e30  func <stripped> // modifyCoroutine 
	0xf40d0  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartSeries : HKGraphSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var selectedStrokeStyle : HKStrokeStyle?
	var unselectedStrokeStyle : HKStrokeStyle?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x194c40006f270 (0x4c40006f270) in binary!
	0x194e8  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x194fc0006b5a8 (0x4fc0006b5a8) in binary!
	0x13330  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x195540006b5a0 (0x5540006b5a0) in binary!
	0x19578  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x1956c0006b598 (0x56c0006b598) in binary!
	0x19560  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x14a840006c078 (0x2840006c078) in binary!
	0x19ab8  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x56cfff9ef20  @objc MedicalRecordChartSeries.(null) <stripped>
	0x55cfff9efc8  @objc MedicalRecordChartSeries.` <stripped>
	0x614fff9f100  @objc MedicalRecordChartSeries.Ë˛ˇˇH9tHãΩHˇˇˇË˚æ <stripped>
	0x2140006b920  @objc MedicalRecordChartSeries. <stripped>
WARNING: couldn't find address 0x6b72cfffa0ac0 (0x72cfffa0ac0) in binary!
	0x1fc0006b910  @objc MedicalRecordChartSeries.(null) <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordChartCoordinate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let pointValuesAscending : CGPoint
	let blockCoordinateInfo : HKGraphSeriesBlockCoordinateInfo

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x196280006b570 (0x6280006b570) in binary!
	0x1961c  @objc MedicalRecordChartCoordinate.(null) <stripped>
WARNING: couldn't find address 0x14a4c0006c838 (0x24c0006c838) in binary!
	0x136d0  @objc MedicalRecordChartCoordinate.(null) <stripped>
WARNING: couldn't find address 0x14a340006c028 (0x2340006c028) in binary!
	0x19a68  @objc MedicalRecordChartCoordinate.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x72cfffa0ac0  @objc MedicalRecordChartCoordinate.(null) <stripped>
	0x74fffa0be8  @objc MedicalRecordChartCoordinate. <stripped>
	0x354fffa1030  @objc MedicalRecordChartCoordinate.ãHã5èm <stripped>

	// Swift methods
	0xf5010  class func MedicalRecordChartCoordinate.__allocating_init(sortedPointValues:blockCoordinateInfo:) // init 
	0xf5ec0  func <stripped> // getter 
	0xf5ef0  func <stripped> // getter 
	0xf5f20  func <stripped> // getter 
	0xf5f60  func <stripped> // method 
	0xf6110  func <stripped> // getter 
	0xf6170  func <stripped> // getter 
	0xf7c90  func <stripped> // getter 
	0xf61d0  func <stripped> // method 
 }

 class HealthRecordsUI.ContentStatusView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let subtitleLabel : UILabel // +0x10 (0x8)
	let spinnerView : UIActivityIndicatorView // +0x18 (0x8)
	var title : String? // +0x20 (0x10)
	var subtitle : String? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14a140006b920 (0x2140006b920) in binary!
	0x1bc08  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x149fc0006b910 (0x1fc0006b910) in binary!
	0x1bbf0  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x133d40006d530 (0x3d40006d530) in binary!
	0x19d68  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x1439c0006b968 (0x39c0006b968) in binary!
	0x19a00  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x199f40006bf48 (0x1f40006bf48) in binary!
	0x1bba8  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x199dc0006c7f0 (0x1dc0006c7f0) in binary!
	0x199d0  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x55cfffa30d8  @objc ContentStatusView.(null) <stripped>
	0x4ec0006bb70  @objc ContentStatusView.]ˇ‡UHâÂAWAVAUATSPMâ∆IâÃIâˇHã˜Ù <stripped>
WARNING: couldn't find address 0xfffa4328 (0xfffa4328) in binary!
	0x1440006d3c0  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x6b7a4fffa4350 (0x7a4fffa4350) in binary!
	0x4f00006b450  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x6d744fffa4598 (0x744fffa4598) in binary!
	0x1140006b820  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x6b62cfffa4750 (0x62cfffa4750) in binary!
	0xfc0006b428  @objc ContentStatusView.(null) <stripped>

	// Swift methods
	0xf7cf0  func <stripped> // getter 
	0xf7d30  func <stripped> // setter 
	0xf7da0  func <stripped> // modifyCoroutine 
	0xf7ea0  func <stripped> // getter 
	0xf7fa0  func <stripped> // setter 
	0xf80b0  func <stripped> // modifyCoroutine 
	0xf81d0  class func ContentStatusView.__allocating_init(title:subtitle:) // init 
	0xf8660  func <stripped> // method 
	0xf8880  func <stripped> // method 
	0xf88c0  func <stripped> // method 
	0xf9130  func <stripped> // method 
 }

 class HealthRecordsUI.MedicationRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1497c0006bf70 (0x17c0006bf70) in binary!
	0x199b0  @objc MedicationRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa4328  @objc MedicationRecordFormatter.(null) <stripped>

	// Swift methods
	0xf9ae0  func <stripped> // getter 
	0xf9bc0  func <stripped> // method 
	0xf9cc0  class func MedicationRecordFormatter.__allocating_init(store:context:) // init 
	0xf9d80  func <stripped> // method 
	0xf9de0  func <stripped> // method 
 }

 class HealthRecordsUI.ClinicalOnboardingManager : WDClinicalOnboardingManager {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19cec0006bb70 (0x4ec0006bb70) in binary!
	0xe8000000c  @objc ClinicalOnboardingManager.(null) <stripped>
 }

 class HealthRecordsUI.ConceptTitleTableHeaderView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let actionButton : UIButton // +0x10 (0x8)
	let fontChoices : [UIFont] // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var widthCache : ù: // +0x20 (0x8)
	var titleCache : NSString // +0x28 (0x8)
	var delegate : weak HRConceptTitleTableHeaderViewDelegate? // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottomExtraSpace : ù: // +0x38 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x149440006d3c0 (0x1440006d3c0) in binary!
	0x1bb38  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x194f00006b450 (0x4f00006b450) in binary!
	0x197d9  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x149140006b820 (0x1140006b820) in binary!
	0x1bb08  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x148fc0006b428 (0xfc0006b428) in binary!
	0x1baf0  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x142b40006b880 (0x2b40006b880) in binary!
	0x19c68  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1990c0006c720 (0x10c0006c720) in binary!
	0x14270  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1bab40006f0b8 (0x2b40006f0b8) in binary!
	0x198e8  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x2f4fffa6740  @objc ConceptTitleTableHeaderView.(null) <stripped>
	0x45cfffa6a18  @objc ConceptTitleTableHeaderView. <stripped>
	0x24c0006bc38  @objc ConceptTitleTableHeaderView.ã]»HâŸMâ¯ˇÒı <stripped>
WARNING: couldn't find address 0xfffa6d78 (0xfffa6d78) in binary!
	0x3d40006c770  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x6c754fffa8f80 (0x754fffa8f80) in binary!
	0x3bc0006c750  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x6be14fffaa9a8 (0x614fffaa9a8) in binary!
	0x540006ac00  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0xfffaaa00 (0xfffaaa00) in binary!
	0x7fc0006bd30  @objc ConceptTitleTableHeaderView.(null) <stripped>

	// Swift methods
	0xfb670  func <stripped> // getter 
	0xfb6f0  func <stripped> // setter 
	0xfb7c0  func <stripped> // modifyCoroutine 
	0xfb8d0  func <stripped> // getter 
	0xfb950  func <stripped> // setter 
	0xfba10  func <stripped> // modifyCoroutine 
	0xfbb00  func <stripped> // getter 
	0xfbc20  func <stripped> // setter 
	0xfbd60  func <stripped> // modifyCoroutine 
	0xfbef0  func <stripped> // getter 
	0xfbfc0  func <stripped> // setter 
	0xfc090  func <stripped> // modifyCoroutine 
	0xfc4e0  func <stripped> // method 
	0xfcd00  func <stripped> // method 
 }

 class HealthRecordsUI.WeakNotificationObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let scheduler : TaskScheduler
WARNING: couldn't find address 0x0 (0x0) in binary!
	let block :  empty-list 
	var center : weak NSNotificationCenter?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x198d40006cef8 (0xd40006cef8) in binary!
	0x1ba88  @objc WeakNotificationObserver.(null) <stripped>
WARNING: couldn't find address 0x1487c0006be70 (0x7c0006be70) in binary!
	0x198b0  @objc WeakNotificationObserver.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa6d78  @objc WeakNotificationObserver.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x754fffa8f80  @objc WeakNotificationObserver.(null) <stripped>

	// Swift methods
	0xfd960  class func WeakNotificationObserver.__allocating_init(forName:object:scheduler:center:block:) // init 
	0xfdba0  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19bd40006c770 (0x3d40006c770) in binary!
	0x19b2c  @objc MedicalRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x19bbc0006c750 (0x3bc0006c750) in binary!
	0x14820  @objc MedicalRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x198540006ac00 (0x540006ac00) in binary!
	0x18000000c  @objc MedicalRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x147fc0006bd30 (0x7fc0006bd30) in binary!
	0x68000000c  @objc MedicalRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x19b740006d940 (0x3740006d940) in binary!
	0x19b68  @objc MedicalRecordFormatter.(null) <stripped>

	// Swift methods
	0x100130  func <stripped> // method 
	0x100430  func <stripped> // method 
	0x100590  func <stripped> // method 
	0x1006f0  func <stripped> // method 
	0x100840  func <stripped> // method 
	0x100990  func <stripped> // method 
	0x100b30  func <stripped> // method 
	0x100c30  func <stripped> // method 
	0x100d20  func <stripped> // method 
	0x100e20  func <stripped> // method 
	0x100f10  func <stripped> // method 
	0x100ff0  func <stripped> // method 
	0x1010f0  func <stripped> // method 
	0x1011f0  func <stripped> // method 
	0x1012f0  func <stripped> // method 
	0x1013e0  func <stripped> // method 
	0x101510  class func MedicalRecordFormatter.__allocating_init(store:context:) // init 
	0x101610  func <stripped> // method 
 }

 class HealthRecordsUI.ViewControllerFactory : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19b740006d940 (0x3740006d940) in binary!
	0x19b68  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x131bc0006d7f0 (0x1bc0006d7f0) in binary!
	0x131b0  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x147b40006bda8 (0x7b40006bda8) in binary!
	0x197e8  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x7b4fffacff0  @objc ViewControllerFactory.(null) <stripped>
	0x3acfffacb08  @objc ViewControllerFactory.ˇHãµ(ˇˇˇLâ‚Aˇ÷LâÁLã%0] <stripped>
	0x75c0006bd50  @objc ViewControllerFactory.ˇb] <stripped>

	// Swift methods
	0x1028c0  func <stripped> // method 
	0x1029b0  func <stripped> // method 
	0x102b10  func <stripped> // method 
	0x102b20  func <stripped> // method 
	0x102b30  func <stripped> // method 
	0x102b70  func <stripped> // method 
	0x102be0  func <stripped> // method 
	0x102c50  func <stripped> // method 
	0x102e00  func <stripped> // method 
	0x103210  func <stripped> // method 
	0x103230  func <stripped> // method 
	0x1033c0  func <stripped> // method 
	0x103760  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordAnnotationViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dateGroup : UIStackView // +0x8 (0x8)
	let monthYearLabel : UILabel // +0x10 (0x8)
	let timeLabel : UILabel // +0x18 (0x8)
	let dividerLabel : UILabel // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1475c0006bd50 (0x75c0006bd50) in binary!
	0x157c4  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x19be40006b178 (0x3e40006b178) in binary!
	0x12fa8  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x157cc0006b278 (0x7cc0006b278) in binary!
	0x157c0  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x197540006ab00 (0x7540006ab00) in binary!
	0x48000000c  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x1973c0006b408 (0x73c0006b408) in binary!
	0x130e0  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x19a740006c060 (0x2740006c060) in binary!
	0x19718  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x2bcfffbcb20  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>

	// Swift methods
	0x105110  func <stripped> // method 
	0x1059c0  func <stripped> // method 
	0x105120  func <stripped> // method 
	0x105130  func <stripped> // method 
	0x105160  func <stripped> // method 
	0x105170  func <stripped> // method 
	0x1051a0  func <stripped> // method 
 }

 class HealthRecordsUI.DisplayItemProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthRecordsUI.TextViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_textView : UITextView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1973c0006b408 (0x73c0006b408) in binary!
	0x130e0  @objc TextViewController.(null) <stripped>
WARNING: couldn't find address 0x19a740006c060 (0x2740006c060) in binary!
	0x19718  @objc TextViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x2bcfffbcb20  @objc TextViewController.(null) <stripped>
	0x1cfffbcc68  @objc TextViewController.ã5™ <stripped>

	// Swift methods
	0x10ecb0  func <stripped> // getter 
	0x10ee20  func <stripped> // getter 
	0x10eea0  func <stripped> // setter 
	0x10ef10  func <stripped> // modifyCoroutine 
 }

 struct HealthRecordsUI.AccountErrorFeedItemData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let accountId : ˝5
	let brandId : BrandIdentifier
	let title : String
	let subtitle : String
	let state : HKClinicalAccountState
 }

 enum HealthRecordsUI.CodingKeys {

	// Properties
	case accountId  
	case brandId  
	case title  
	case subtitle  
	case state  
 }

 class HealthRecordsUI.SampleTypeCountProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let sampleType : HKSampleType // +0x10 (0x8)
	let predicate : NSPredicate? // +0x18 (0x8)
	let healthStore : HKHealthStore // +0x20 (0x8)
	var observerQuery : HKObserverQuery? // +0x28 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_sampleCountDebouncer : ˜ // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _sampleCount : G! // +0x0 (0x0)

	// Swift methods
	0x111c90  func <stripped> // getter 
	0x111d70  func <stripped> // getter 
	0x112210  func <stripped> // method 
 }

 class HealthRecordsUI.CategoryCountProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let category : DisplayCategory
	let healthStore : HKHealthStore
	var sampleTypeCountProviders : SampleTypeCountProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_categoryRecordCountPublisher : Î 

	// Swift methods
	0x1125f0  func <stripped> // getter 
	0x112c60  func <stripped> // getter 
	0x112dd0  func <stripped> // method 
 }

 struct HealthRecordsUI.AccountErrorFeedItemIdentifierFactory { }

 class HealthRecordsUI.ImprovementDataCollectionAboutPrivacyViewController : TextViewController {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x197040006b460 (0x7040006b460) in binary!
	0x133e8  @objc ImprovementDataCollectionAboutPrivacyViewController.(null) <stripped>
WARNING: couldn't find address 0x1309c0006be88 (0x9c0006be88) in binary!
	0x19a30  @objc ImprovementDataCollectionAboutPrivacyViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x474fffbd9d8  @objc ImprovementDataCollectionAboutPrivacyViewController.(null) <stripped>
	0xfffbda50  @objc ImprovementDataCollectionAboutPrivacyViewController.IâAˇ‘Iã<Hã5≈· <stripped>
 }

 struct HealthRecordsUI.HealthRecordsSupportedChange {

	// Properties
	let store : HKHealthRecordsStore // +0x0
	let isSupported : Bool // +0x8
 }

 class HealthRecordsUI.HealthRecordsSupportedStateChangeListener : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let handler : HealthRecordsSupportedChange // +0x8 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _latestChange : ˜  // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a03d0006b1e8 (0x3d0006b1e8) in binary!
	0x14680  @objc HealthRecordsSupportedStateChangeListener.(null) <stripped>
WARNING: couldn't find address 0x196b40006aa60 (0x6b40006aa60) in binary!
	0x28000000c  @objc HealthRecordsSupportedStateChangeListener.(null) <stripped>
WARNING: couldn't find address 0x12ecc0006b210 (0x6cc0006b210) in binary!
	0x14650  @objc HealthRecordsSupportedStateChangeListener.(null) <stripped>

	// Swift methods
	0x1144a0  func <stripped> // getter 
	0x114500  func <stripped> // setter 
	0x114570  func <stripped> // modifyCoroutine 
	0x114740  func <stripped> // getter 
	0x1147e0  func <stripped> // setter 
	0x114850  func <stripped> // modifyCoroutine 
	0x1149f0  class func HealthRecordsSupportedStateChangeListener.__allocating_init(handler:) // init 
	0x114c60  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureDataTransformer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit?
	var $__lazy_storage_$_displayType : HKDisplayType?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1313c0006ebb8 (0x13c0006ebb8) in binary!
	0x199c0  @objc BloodPressureDataTransformer.(null) <stripped>
WARNING: couldn't find address 0x131440006eb58 (0x1440006eb58) in binary!
	0x68000000c  @objc BloodPressureDataTransformer.(null) <stripped>
WARNING: couldn't find address 0x1999c0006bf88 (0x19c0006bf88) in binary!
	0x19640  @objc BloodPressureDataTransformer.(null) <stripped>

	// Swift methods
	0x115990  func <stripped> // getter 
	0x115a30  func <stripped> // getter 
	0x115b10  func <stripped> // method 
	0x115f70  func <stripped> // method 
	0x116220  func <stripped> // method 
	0x116380  func <stripped> // method 
 }

 class HealthRecordsUI.CountProviderCollection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var countProviders : DisplayCategory
	var healthStore : HKHealthStore

	// Swift methods
	0x1188d0  func <stripped> // method 
 }

 struct HealthRecordsUI.CategoryWithCount {

	// Properties
	let category : DisplayCategory // +0x0
	var count : Int // +0x48
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
	let textStyle : TextStyle
	var items : ListItem
	var font : UIFont
	var iconSize : CGSize
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interItemSpacingVertical : ù:
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interItemSpacingHorizontal : ù:
	let hidesIconsForAccessibilityTextSizes : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1999c0006bf88 (0x19c0006bf88) in binary!
	0x19640  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x13fa40006cac0 (0x7a40006cac0) in binary!
	0x1b7e8  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x13fac0006b578 (0x7ac0006b578) in binary!
	0x19610  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc5358  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc4fe0  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc5178  @objc IconTextListView.(null) <stripped>

	// Swift methods
	0x119f70  class func IconTextListView.__allocating_init(textStyle:iconSize:interItemSpacingHorizontal:interItemSpacingVertical:hidesIconsForAccessibilityTextSizes:) // init 
	0x11a180  func <stripped> // method 
	0x11a3b0  func <stripped> // method 
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
WARNING: couldn't find address 0x135b80006bc00 (0x5b80006bc00) in binary!
	0x198c8  @objc StandardTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x694fffc5190  @objc StandardTableViewCell.(null) <stripped>

	// Swift methods
	0x11c690  class func <stripped> // getter 
 }

 class HealthRecordsUI.NoAppTableViewCell : HRStandardTableViewCell {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x135980006bbe0 (0x5980006bbe0) in binary!
	0x198a8  @objc NoAppTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0xe4fffd0a70  @objc NoAppTableViewCell.(null) <stripped>
 }

 class HealthRecordsUI.SourceTableViewCell : HRStandardTableViewCell {

	// Properties
	var sourceModel : HKSourceDataModel?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x135e80006bc30 (0x5e80006bc30) in binary!
	0x198f8  @objc SourceTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1959c0006a948 (0x59c0006a948) in binary!
	0x28000000c  @objc SourceTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x135b80006bc00 (0x5b80006bc00) in binary!
	0x198c8  @objc SourceTableViewCell.(null) <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordUnitCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var units : [HKUnit : NSCountedSet]

	// Swift methods
	0x11de80  func <stripped> // method 
	0x11e640  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureFormatter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit?

	// Swift methods
	0x127960  func <stripped> // getter 
	0x127a00  func <stripped> // getter 
	0x127a70  func <stripped> // getter 
	0x127b50  func <stripped> // method 
 }

 class HealthRecordsUI.CoverageClassificationFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x145040006baf8 (0x5040006baf8) in binary!
	0x19538  @objc CoverageClassificationFormatter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x6b4fffd20f0  @objc CoverageClassificationFormatter.(null) <stripped>

	// Swift methods
	0x127f80  func <stripped> // method 
	0x127f90  func <stripped> // method 
	0x128040  class func CoverageClassificationFormatter.__allocating_init(store:context:) // init 
	0x1280e0  func <stripped> // method 
	0x128130  func <stripped> // method 
 }

 class HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var lastCachedNumberOfChartPoints : Int? // +0x8 (0x9)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x198740006b048 (0x740006b048) in binary!
	0x14e78  @objc SingleValueCurrentValueViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x16fdc0006c2b0 (0x7dc0006c2b0) in binary!
	0x144c0  @objc SingleValueCurrentValueViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x2bcfffd9a58  @objc SingleValueCurrentValueViewDataSource.(null) <stripped>
	0x74fffda6f0  @objc SingleValueCurrentValueViewDataSource.ˇ’Lã%‹# <stripped>

	// Swift methods
	0x129820  func <stripped> // method 
 }

 enum HealthRecordsUI.AccountIconViewError {

	// Properties
	case missingAccount  
 }

 struct HealthRecordsUI.AccountIconViewData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : ˝5
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
	let healthStore : HKHealthStore
	let searchIndexController : SearchIndexController
	let keyValueDomain : HKKeyValueDomain
	let queue : OS_dispatch_queue
	let healthRecordsKeyValueDomain : String
	let dataVersionKey : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1983c0006ce18 (0x3c0006ce18) in binary!
	0x16adb  @objc HealthRecordsMigrator.(null) <stripped>
WARNING: couldn't find address 0x144940006ba88 (0x4940006ba88) in binary!
	0x194c8  @objc HealthRecordsMigrator.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x69cfffdd220  @objc HealthRecordsMigrator.(null) <stripped>
	0x5ccfffdd348  @objc HealthRecordsMigrator.”IâˇLã5Uÿ <stripped>

	// Swift methods
 }

 struct HealthRecordsUI.ViewMetrics { }

 class HealthRecordsUI.ConceptListViewController {
 class HealthRecordsUI.ConceptListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let categoryPredicate : NSPredicate
WARNING: couldn't find address 0x0 (0x0) in binary!
	var store : {<
WARNING: couldn't find address 0x0 (0x0) in binary!
	let categoryViewDataSourceProvider : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sourceProfile : S8

	// Swift methods
	0x133210  func <stripped> // getter 
	0x133250  func <stripped> // setter 
	0x1332a0  func <stripped> // modifyCoroutine 
	0x1327c0  class func ConceptListViewDataSourceProvider.__allocating_init(categoryPredicate:sourceProfile:store:) // init 
	0x1333f0  func <stripped> // method 
	0x133460  func <stripped> // method 
	0x133c20  func <stripped> // method 
 }

 class HealthRecordsUI.ClinicalOnboardingLearnMoreViewController : TextViewController {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x194b40006b210 (0x4b40006b210) in binary!
	0x1b668  @objc ClinicalOnboardingLearnMoreViewController.(null) <stripped>
WARNING: couldn't find address 0x12e4c0006bc38 (0x64c0006bc38) in binary!
	0x197e0  @objc ClinicalOnboardingLearnMoreViewController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x1cfffdd878  @objc ClinicalOnboardingLearnMoreViewController.(null) <stripped>
	0x60c0006bbf8  @objc ClinicalOnboardingLearnMoreViewController.Hâﬂæ <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicationDispenseFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1443c0006ba30 (0x43c0006ba30) in binary!
	0x19470  @objc MedicationDispenseFormatter.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x58cfffde9a8  @objc MedicationDispenseFormatter.(null) <stripped>

	// Swift methods
	0x134d70  func <stripped> // getter 
	0x134e50  func <stripped> // method 
	0x134d10  class func MedicationDispenseFormatter.__allocating_init(store:context:) // init 
	0x134fb0  func <stripped> // method 
 }

 class HealthRecordsUI.HealthRecordsNotAvailableViewController : UIAlertController /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x12e0c0006bbf8 (0x60c0006bbf8) in binary!
	0x197a0  @objc HealthRecordsNotAvailableViewController.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe4ee8  @objc HealthRecordsNotAvailableViewController.(null) <stripped>

	// Swift methods
	0x135e80  class func <stripped> // method 
 }

 enum HealthRecordsUI.BrowseCategoryError {

	// Properties
	case decodeFailure : (rawValue: String)
 }

 enum HealthRecordsUI.BrowseCategory {

	// Properties
	case subcategory : Kind
WARNING: couldn't find address 0x0 (0x0) in binary!
	case account : ﬂ
	case addAccountShownInFirstSection  
	case showAllCategories  
	case allHealthRecords  
	case addAccount  
	case addAnotherAccount  
	case clinicalDocuments  
 }

 enum HealthRecordsUI.CodingKeys {

	// Properties
	case rawValue  
 }

 class HealthRecordsUI.ConceptHeaderCell : WDMedicalRecordGroupableCell {

	// Properties
	let titleLabel : UILabel
	let chevronView : UIView
	var $__lazy_storage_$_bottomConstraint : NSLayoutConstraint?
	var headerImage : UIImage?
	var title : String?
	var categoryColor : UIColor?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x143e40006af50 (0x3e40006af50) in binary!
	0x1b5d8  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x143cc0006b2d8 (0x3cc0006b2d8) in binary!
	0x1b5c0  @objc ConceptHeaderCell.(null) <stripped>
	0x1b5a8  -[HKUnknownRecord(Displayable) fetchDetailItemsWithHealthRecordsStore:conceptStore:completion:]
WARNING: couldn't find address 0x193dc0006afb8 (0x3dc0006afb8) in binary!
	0x193d0  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x132540006ede8 (0x2540006ede8) in binary!
	0x1ae6f  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x193ac0006bab0 (0x3ac0006bab0) in binary!
	0x1b560  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x133c80006ba10 (0x3c80006ba10) in binary!
	0x196d8  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x1937c0006a728 (0x37c0006a728) in binary!
	0x28000000c  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x18d040006eab0 (0x5040006eab0) in binary!
	0x14318  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x474fffe72e0  @objc ConceptHeaderCell.(null) <stripped>
	0xfffe79c8  @objc ConceptHeaderCell.• <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x644fffeac10  @objc ConceptHeaderCell.(null) <stripped>
	0x164fffeacd8  @objc ConceptHeaderCell.Hã5˙ <stripped>
	0x29c0006b890  @objc ConceptHeaderCell. <stripped>
WARNING: couldn't find address 0xfffea778 (0xfffea778) in binary!
	0x2840006b7c8  @objc ConceptHeaderCell.(null) <stripped>

	// Swift methods
	0x13bf00  func <stripped> // getter 
	0x13c050  func <stripped> // getter 
	0x13c090  func <stripped> // setter 
	0x13c140  func <stripped> // modifyCoroutine 
	0x13c230  func <stripped> // getter 
	0x13c2e0  func <stripped> // setter 
	0x13c390  func <stripped> // modifyCoroutine 
	0x13c480  func <stripped> // getter 
	0x13c570  func <stripped> // setter 
	0x13c660  func <stripped> // modifyCoroutine 
	0x13d090  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartSeries : HKBloodPressureSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18d040006eab0 (0x5040006eab0) in binary!
	0x14318  @objc BloodPressureChartSeries.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x474fffe72e0  @objc BloodPressureChartSeries.(null) <stripped>
 }

 class HealthRecordsUI.ProfileOnboardingActionViewController {
 class HealthRecordsUI.OnboardingTableViewCell {
 class HealthRecordsUI.ProviderNotFoundView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let glyphView : UIView
	let providerStatusLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x13cd40006b2a0 (0x4d40006b2a0) in binary!
	0x19688  @objc ProviderNotFoundView.(null) <stripped>
WARNING: couldn't find address 0x1932c0006a6d8 (0x32c0006a6d8) in binary!
	0x48000000c  @objc ProviderNotFoundView.(null) <stripped>
WARNING: couldn't find address 0x12b440006b988 (0x3440006b988) in binary!
	0x13d9e  @objc ProviderNotFoundView.(null) <stripped>

	// Swift methods
	0x13ec80  func <stripped> // method 
 }

 class HealthRecordsUI.RecordKindDataProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RecordKindDataProviderProtocol {

	// Properties
	let healthStore : HKHealthStore
	let queue : OS_dispatch_queue

	// Swift methods
	0x13f3a0  class func RecordKindDataProvider.__allocating_init(healthStore:) // init 
	0x13f570  func <stripped> // method 
	0x13fd00  func <stripped> // method 
	0x140ce0  func <stripped> // method 
 }

 class HealthRecordsUI.CategoryViewControllerManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var activeCategoryViewController : weak UIViewController?

	// Swift methods
	0x141550  func <stripped> // method 
	0x141c20  func <stripped> // method 
 }

 class HealthRecordsUI.Features : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1429c0006b890 (0x29c0006b890) in binary!
	0x18000000c  @objc Features.(null) <stripped>
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
	0x1436e0  class func <stripped> // method 
	0x143790  class func <stripped> // method 
	0x1437a0  class func <stripped> // method 
 }

 struct HealthRecordsUI.RecordKindFeedItemIdentifierFactory { }

 enum HealthRecordsUI.PrivacyInteractionType { }

 enum HealthRecordsUI.PrivacyInteractionContext { }

 class HealthRecordsUI.RecordPrimaryTitleCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let recordTitleLabel : UILabel
	let recordDateLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x141a40006bb88 (0x1a40006bb88) in binary!
	0x14198  @objc RecordPrimaryTitleCell.(null) <stripped>
WARNING: couldn't find address 0x132000006b848 (0x2000006b848) in binary!
	0x19510  @objc RecordPrimaryTitleCell.(null) <stripped>
WARNING: couldn't find address 0x191b40006a560 (0x1b40006a560) in binary!
	0x58000000c  @objc RecordPrimaryTitleCell.(null) <stripped>
WARNING: couldn't find address 0x1415c0006a7f0 (0x15c0006a7f0) in binary!
	0x1b350  @objc RecordPrimaryTitleCell.(null) <stripped>
WARNING: couldn't find address 0x131b80006b800 (0x1b80006b800) in binary!
	0x194c8  @objc RecordPrimaryTitleCell.(null) <stripped>

	// Swift methods
	0x1446f0  func <stripped> // method 
 }

 class HealthRecordsUI.RecordDetailItemCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let bodyLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x141ec0006aeb0 (0x1ec0006aeb0) in binary!
	0x141e0  @objc RecordDetailItemCell.(null) <stripped>
WARNING: couldn't find address 0x132480006b890 (0x2480006b890) in binary!
	0x19558  @objc RecordDetailItemCell.(null) <stripped>
WARNING: couldn't find address 0x191fc0006a5a8 (0x1fc0006a5a8) in binary!
	0x58000000c  @objc RecordDetailItemCell.(null) <stripped>
WARNING: couldn't find address 0x141a40006bb88 (0x1a40006bb88) in binary!
	0x14198  @objc RecordDetailItemCell.(null) <stripped>
WARNING: couldn't find address 0x132000006b848 (0x2000006b848) in binary!
	0x19510  @objc RecordDetailItemCell.(null) <stripped>

	// Swift methods
	0x144e00  func <stripped> // method 
 }

 class HealthRecordsUI.RecordReferenceRangeCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let referenceRangeView : HKReferenceRangeView // +0x8 (0x8)
	var valueInRange : HKInspectableValueInRange? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1415c0006a7f0 (0x15c0006a7f0) in binary!
	0x1b350  @objc RecordReferenceRangeCell.(null) <stripped>
WARNING: couldn't find address 0x131b80006b800 (0x1b80006b800) in binary!
	0x194c8  @objc RecordReferenceRangeCell.(null) <stripped>
WARNING: couldn't find address 0x1916c0006a518 (0x16c0006a518) in binary!
	0x18000000c  @objc RecordReferenceRangeCell.(null) <stripped>
WARNING: couldn't find address 0x141140006b638 (0x1140006b638) in binary!
	0x88000000c  @objc RecordReferenceRangeCell.(null) <stripped>
WARNING: couldn't find address 0x140fc0006ebb8 (0xfc0006ebb8) in binary!
	0x140f0  @objc RecordReferenceRangeCell.(null) <stripped>

	// Swift methods
	0x145450  func <stripped> // getter 
	0x1454e0  func <stripped> // setter 
	0x145590  func <stripped> // modifyCoroutine 
 }

 class HealthRecordsUI.RecordDataSourceCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let brandView : WDMedicalRecordBrandView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x132980006b8e0 (0x2980006b8e0) in binary!
	0x195a8  @objc RecordDataSourceCell.(null) <stripped>
WARNING: couldn't find address 0x1715c0006bc18 (0x15c0006bc18) in binary!
	0x19240  @objc RecordDataSourceCell.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x3d4fffed2b8  @objc RecordDataSourceCell.(null) <stripped>
	0x344fffed350  @objc RecordDataSourceCell.^A_]ÈÂ≥ <stripped>

	// Swift methods
	0x145a00  func <stripped> // method 
 }

 class HealthRecordsUI.MonogramProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monogrammers : UnboundedCache
	var monograms : UnboundedCache

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

 class HealthRecordsUI.ProfileManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var currentProfile : HRProfile
	var profileCache : [HKProfileIdentifier : HRProfile]
	var countProviderCollectionCache : CountProviderCollection
	var managerQueue : OS_dispatch_queue
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lock : €

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x140fc0006ebb8 (0xfc0006ebb8) in binary!
	0x140f0  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x1b2e40006ac70 (0x2e40006ac70) in binary!
	0x140d8  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x1b2cc0006de08 (0x2cc0006de08) in binary!
	0x19450  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x194440006ac50 (0x4440006ac50) in binary!
	0x190e8  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x474ffff24a0  @objc ProfileManager.(null) <stripped>
	0x0  @objc ProfileManager.Î3Hã=ß⁄ <stripped>
WARNING: couldn't find address 0x3fd3333333333333 (0x33333333333) in binary!
	0x0  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x0  @objc ProfileManager.(null) <stripped>

	// Swift methods
	0x1487b0  func <stripped> // getter 
	0x148970  func <stripped> // getter 
	0x148a10  func <stripped> // setter 
	0x148b10  func <stripped> // modifyCoroutine 
	0x1490e0  func <stripped> // method 
	0x149200  func <stripped> // method 
	0x1493f0  func <stripped> // method 
	0x1495c0  func <stripped> // method 
 }

 class HealthRecordsUI.ProcedureRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x140940006b688 (0x940006b688) in binary!
	0x190c8  @objc ProcedureRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x4014000000000000 (0x0) in binary!
	0x33333333333  @objc ProcedureRecordFormatter.(null) <stripped>

	// Swift methods
	0x149e80  class func ProcedureRecordFormatter.__allocating_init(store:context:) // init 
	0x149f80  func <stripped> // method 
 }

 class HealthRecordsUI.SearchIndexController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let indexName : String
	let queue : OS_dispatch_queue
	var $__lazy_storage_$_spotlightIndex : CSSearchableIndex?

	// Swift methods
 }

 enum HealthRecordsUI.SearchIndexError {

	// Properties
	case notSupported  
 }
