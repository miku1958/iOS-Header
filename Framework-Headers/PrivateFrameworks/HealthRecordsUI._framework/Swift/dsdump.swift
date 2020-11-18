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
	var width : 4
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : 4
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : 4
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : 4
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
	let conceptId : c>
	let title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let meaningfulDate : y3
 }

 class HealthRecordsUI.SingleValueAnnotationViewDataSource : MedicalRecordAnnotationViewDataSource {

	// Properties
	let referenceRangeView : HKReferenceRangeView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15a84000679e8 (0x284000679e8) in binary!
	0x1af18  @objc SingleValueAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x1cc6c000681d8 (0x46c000681d8) in binary!
	0x148f0  @objc SingleValueAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x1aa94000667b0 (0x294000667b0) in binary!
	0x28000000c  @objc SingleValueAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x15a3c000679a0 (0x23c000679a0) in binary!
	0x1aa70  @objc SingleValueAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x23cfff0d7e8  @objc SingleValueAnnotationViewDataSource.(null) <stripped>

	// Swift methods
	0x611f0  func <stripped> // method 
	0x612a0  func <stripped> // method 
	0x612f0  func <stripped> // method 
	0x61a00  func <stripped> // method 
 }

 class HealthRecordsUI.SingleValueChartData : HKInteractiveChartSinglePointData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let chartableQuantitySet : HKChartableCodedQuantitySet // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : e1 // +0x3 (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x3e (0x8)
	let hasTime : Bool // +0x6100085 (0x1)
	let partOfOutOfRangeSeries : Bool // +0xfeedfacf (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15a3c000679a0 (0x23c000679a0) in binary!
	0x1aa70  @objc SingleValueChartData.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x23cfff0d7e8  @objc SingleValueChartData.(null) <stripped>

	// Swift methods
	0x62380  class func SingleValueChartData.__allocating_init(chartableQuantitySet:date:dateFormat:hasTime:partOfOutOfRangeSeries:) // init 
	0x62410  func <stripped> // method 
 }

 class HealthRecordsUI.LoadingTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containerView : UIView
	let spinner : UIActivityIndicatorView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15a1c00067980 (0x21c00067980) in binary!
	0x14a84  @objc LoadingTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1ad9400067cf0 (0x59400067cf0) in binary!
	0x1aa38  @objc LoadingTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x20cfff0f0a0  @objc LoadingTableViewCell.(null) <stripped>
	0x204fff0f178  @objc LoadingTableViewCell.ÜU <stripped>

	// Swift methods
	0x63fd0  class func <stripped> // getter 
	0x64280  func <stripped> // method 
	0x642a0  func <stripped> // method 
	0x642c0  func <stripped> // method 
 }

 class HealthRecordsUI.Box {
 enum HealthRecordsUI.IconStyle {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case opaque : 1
	case template : UIColor
	case default  
 }

 class HealthRecordsUI.InternalAllFeedForProfileViewController {
 class HealthRecordsUI.AllFeedForProfileDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var store : Î5
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sourceProfile : √1

	// Swift methods
	0x66300  func <stripped> // getter 
	0x66340  func <stripped> // setter 
	0x66390  func <stripped> // modifyCoroutine 
	0x66150  class func AllFeedForProfileDataSourceProvider.__allocating_init(sourceProfile:store:) // init 
	0x66510  func <stripped> // method 
	0x665f0  func <stripped> // method 
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
	case custom : Y0
	case small  
	case medium  
	case large  
 }

 struct HealthRecordsUI.AccountErrorFeedItemViewData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let accountId : m/
	let title : String
	let subtitle : String
	let state : HKClinicalAccountState
 }

 class HealthRecordsUI.TapToRadarManager : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15964000678c8 (0x164000678c8) in binary!
	0x28000000c  @objc TapToRadarManager.(null) <stripped>
 }

 struct HealthRecordsUI.SyncTaskScheduler: TaskScheduler { }

 class HealthRecordsUI.DiagnosticTestResultFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1594c000678b0 (0x14c000678b0) in binary!
	0x1a980  @objc DiagnosticTestResultFormatter.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff17178  @objc DiagnosticTestResultFormatter.(null) <stripped>

	// Swift methods
	0x6ace0  class func DiagnosticTestResultFormatter.__allocating_init(store:context:) // init 
	0x6ada0  func <stripped> // method 
 }

 class HealthRecordsUI.InternalConceptsFeedViewController {
 struct HealthRecordsUI.AccountViewData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let accountId : m/
	let title : String
	let subtitle : String?
 }

 class HealthRecordsUI.AccountView {
 class HealthRecordsUI.ClinicalSourcesDataProvider : WDClinicalSourcesDataProvider {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1acbc0006a0a0 (0x4bc0006a0a0) in binary!
	0x78000000c  @objc ClinicalSourcesDataProvider.(null) <stripped>
 }

 class HealthRecordsUI.InternalStateViewController : UITableViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var dataProvider : InternalStateProvider
	var sections : InternalStateSection
	var profile : HRProfile

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1aca400067c00 (0x4a400067c00) in binary!
	0x1a948  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x1a93c00067008 (0x13c00067008) in binary!
	0x153c6  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x1698400066f58 (0x18400066f58) in binary!
	0x142c8  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x1a90c00066628 (0x10c00066628) in binary!
	0x58000000c  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x1541500066830 (0x41500066830) in binary!
	0x1ab9c  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x1691000068e68 (0x11000068e68) in binary!
	0x1a9bc  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x1427400066658 (0x27400066658) in binary!
	0x28000000c  @objc InternalStateViewController.(null) <stripped>

	// Swift methods
	0x6e0c0  func <stripped> // method 
 }

 class HealthRecordsUI.Cell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x148e000067898 (0xe000067898) in binary!
	0x1abf0  @objc Cell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x6c4fff1d468  @objc Cell.(null) <stripped>

	// Swift methods
	0x6db40  class func <stripped> // getter 
	0x6dc60  func <stripped> // method 
 }

 class HealthRecordsUI.FeedItemListViewController {
 class HealthRecordsUI.FeedItemListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]
WARNING: couldn't find address 0x0 (0x0) in binary!
	let store : Î5

	// Swift methods
	0x701e0  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateSection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let title : String
	let items : InternalStateItem

	// Swift methods
	0x72b00  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let title : String
	let value : String

	// Swift methods
	0x73040  func <stripped> // method 
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
WARNING: couldn't find address 0x1434c0006a738 (0x34c0006a738) in binary!
	0x1abd0  @objc SingleValueDataTransformer.(null) <stripped>
WARNING: couldn't find address 0x143540006a6d8 (0x3540006a6d8) in binary!
	0x18000000c  @objc SingleValueDataTransformer.(null) <stripped>
WARNING: couldn't find address 0x1408c0006a9e0 (0x8c0006a9e0) in binary!
	0x18000000c  @objc SingleValueDataTransformer.(null) <stripped>

	// Swift methods
	0x73d50  func <stripped> // method 
	0x74030  func <stripped> // method 
	0x74090  func <stripped> // method 
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
WARNING: couldn't find address 0x157ec00067750 (0x7ec00067750) in binary!
	0x1a820  @objc ConditionRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff29918  @objc ConditionRecordFormatter.(null) <stripped>

	// Swift methods
	0x7e9a0  class func ConditionRecordFormatter.__allocating_init(store:context:) // init 
	0x7ea60  func <stripped> // method 
 }

 class HealthRecordsUI.TimelineHeaderView : UITableViewHeaderFooterView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : weak HRTimelineHeaderViewDelegate?
	var $__lazy_storage_$_titleLabel : UILabel?
	var $__lazy_storage_$_subtitleLabel : UILabel?
	var $__lazy_storage_$_backgroundEffectView : UIVisualEffectView?
	var $__lazy_storage_$_separatorView : UIView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x157b400068ba0 (0x7b400068ba0) in binary!
	0x1c9a8  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1ab2c00068ef0 (0x32c00068ef0) in binary!
	0x1ab20  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1980e000690a8 (0xe000690a8) in binary!
	0x1c978  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1a7ac00066d78 (0x7ac00066d78) in binary!
	0x13fd0  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1522a0006a2d0 (0x22a0006a2d0) in binary!
	0x1a788  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x150ec00068578 (0xec00068578) in binary!
	0x1c930  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1a76400066480 (0x76400066480) in binary!
	0x28000000c  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1570c00067670 (0x70c00067670) in binary!
	0x1a740  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x494fff2c638  @objc TimelineHeaderView.(null) <stripped>
	0x48cfff2c6b0  @objc TimelineHeaderView.ˇ‘LâÔˇ’7 <stripped>
	0x45cfff2c768  @objc TimelineHeaderView.â«Ëı• <stripped>
	0x5fcfff2c880  @objc TimelineHeaderView.¶ <stripped>
	0xfff2cb48  @objc TimelineHeaderView. <stripped>

	// Swift methods
	0x80450  class func <stripped> // getter 
	0x804c0  func <stripped> // getter 
	0x80540  func <stripped> // setter 
	0x80610  func <stripped> // modifyCoroutine 
	0x806e0  func <stripped> // getter 
	0x80700  func <stripped> // getter 
	0x80830  func <stripped> // getter 
	0x808e0  func <stripped> // getter 
	0x80b40  func <stripped> // method 
	0x80c70  func <stripped> // method 
	0x80df0  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartabilityResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let configuration : MedicalRecordChartConfiguration // +0x8 (0x8)
	let masterDataSource : MedicalRecordChartDataSource // +0x10 (0x8)
	let seriesDataSources : MedicalRecordChartDataSource // +0x18 (0x8)
	let outOfRangeDataSource : MedicalRecordChartDataSource // +0x20 (0x8)
	let noRangeDataSource : MedicalRecordChartDataSource // +0x28 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let latestChartableDate : y3 // +0x198000 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x156ec00067490 (0x6ec00067490) in binary!
	0x156e0  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x156d400067490 (0x6d400067490) in binary!
	0x156c8  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x156bc00067488 (0x6bc00067488) in binary!
	0x156b0  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x13f1400067440 (0x71400067440) in binary!
	0x15698  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x1a6cc000663e8 (0x6cc000663e8) in binary!
	0x28000000c  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x155f400067450 (0x5f400067450) in binary!
	0x15668  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x1fcfff3ba30  @objc MedicalRecordChartabilityResult.(null) <stripped>
	0x594fff3ba98  @objc MedicalRecordChartabilityResult.Ñé <stripped>
	0x69000068be8  @objc MedicalRecordChartabilityResult. <stripped>

	// Swift methods
	0x83530  func <stripped> // getter 
	0x835b0  class func MedicalRecordChartabilityResult.__allocating_init(configuration:masterDataSource:seriesDataSources:outOfRangeDataSource:noRangeDataSource:latestChartableDate:) // init 
 }

 class HealthRecordsUI.MedicalRecordChartabilityDeterminer : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x155f400067450 (0x5f400067450) in binary!
	0x15668  @objc MedicalRecordChartabilityDeterminer.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x1fcfff3ba30  @objc MedicalRecordChartabilityDeterminer.(null) <stripped>

	// Swift methods
	0x83840  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeriesCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let concept : HKConcept // +0x10 (0x8)
	var preferredColors : HKUIMetricColors? // +0x18 (0x8)
	var chartableQuantitySets : [HKChartableCodedQuantitySet] // +0x20 (0x8)

	// Swift methods
	0x85570  class func MedicalRecordChartableSeriesCollector.__allocating_init(concept:) // init 
	0x856a0  func <stripped> // method 
	0x85900  func <stripped> // getter 
	0x85b90  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeries : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let concept : HKConcept
	let chartableQuantitySets : [HKChartableCodedQuantitySet]
	let preferredColors : HKUIMetricColors?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1570c00067670 (0x70c00067670) in binary!
	0x1a740  @objc MedicalRecordChartableSeries.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x494fff2c638  @objc MedicalRecordChartableSeries.(null) <stripped>

	// Swift methods
	0x862d0  func <stripped> // getter 
	0x861b0  class func MedicalRecordChartableSeries.__allocating_init(concept:chartableQuantities:unit:preferredColors:) // init 
	0x86550  func <stripped> // method 
	0x86650  func <stripped> // method 
	0x86670  func <stripped> // method 
 }

 struct HealthRecordsUI.UnboundedCache: Cache {

	// Properties
	let storageBox : Box
	let lowMemoryWarnings : Any
	let didEnterBackground : Any
 }

 class HealthRecordsUI.SingleValueChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1b0a400067448 (0xa400067448) in binary!
	0x13eb8  @objc SingleValueChartConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1563c0006a1e8 (0x63c0006a1e8) in binary!
	0x15630  @objc SingleValueChartConfiguration.(null) <stripped>
WARNING: couldn't find address 0x138000000c (0x138000000c) in binary!
	0x3e4fffa7cf8  @objc SingleValueChartConfiguration.(null) <stripped>
	0x54cfffa7e10  @objc SingleValueChartConfiguration.ˇAˇ÷Hã{(Hã55; <stripped>

	// Swift methods
	0x926b0  func <stripped> // getter 
	0x92700  func <stripped> // getter 
	0x92740  func <stripped> // getter 
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
WARNING: couldn't find address 0x1669000068be8 (0x69000068be8) in binary!
	0x1a73c  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a8f8000663d0 (0xf8000663d0) in binary!
	0x1a8ec  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x13fdc000663c0 (0x7dc000663c0) in binary!
	0x18530  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1852400066980 (0x52400066980) in binary!
	0x19652  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1511d00066538 (0x11d00066538) in binary!
	0x1a940  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a5e400068578 (0x5e400068578) in binary!
	0x1a5d8  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x15062000678a0 (0x62000678a0) in binary!
	0x1c780  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x15f1400066628 (0x71400066628) in binary!
	0x15f19  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x165fc00066bd0 (0x5fc00066bd0) in binary!
	0x13f40  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a584000662a0 (0x584000662a0) in binary!
	0x28000000c  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1c72c00066a40 (0x72c00066a40) in binary!
	0x1a560  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0xb4fff42498  @objc SettingsViewController.(null) <stripped>
	0x44cfff42500  @objc SettingsViewController.Hâ«ËLø <stripped>
	0x7f400068ea0  @objc SettingsViewController.Ö¿AîƒHâﬂLâ˛Aˇ’Hâ«Ë≈ß <stripped>
WARNING: couldn't find address 0x677b4fff42730 (0x7b4fff42730) in binary!
	0x4fc00066bc8  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x68a7cfff42f78 (0x27cfff42f78) in binary!
	0x798000663f0  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x68a6cfff43220 (0x26cfff43220) in binary!
	0x67c00066260  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x6626cfff43e58 (0x26cfff43e58) in binary!
	0x4fb00066238  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x663c4fff44070 (0x3c4fff44070) in binary!
	0x49c0006a0c0  @objc SettingsViewController.(null) <stripped>

	// Swift methods
	0x93250  class func SettingsViewController.__allocating_init(with:) // init 
	0x943b0  func <stripped> // method 
	0x95140  func <stripped> // getter 
	0x95170  func <stripped> // getter 
	0x951d0  func <stripped> // method 
 }

 class HealthRecordsUI.AccountErrorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x97e20  func <stripped> // method 
	0x98590  func <stripped> // method 
 }

 enum HealthRecordsUI.OnboardingFunnelSteps { }

 enum HealthRecordsUI.OnboardingFunnelContext { }

 class HealthRecordsUI.BloodPressureChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1af5c00067300 (0x75c00067300) in binary!
	0x13d70  @objc BloodPressureChartConfiguration.(null) <stripped>
WARNING: couldn't find address 0x154f40006a0a0 (0x4f40006a0a0) in binary!
	0x154e8  @objc BloodPressureChartConfiguration.(null) <stripped>
WARNING: couldn't find address 0xf8000000c (0xf8000000c) in binary!
	0x7b4fff42730  @objc BloodPressureChartConfiguration.(null) <stripped>
	0x27cfff42f78  @objc BloodPressureChartConfiguration.ˇ÷Hã_Ê <stripped>

	// Swift methods
	0x99260  func <stripped> // getter 
	0x992b0  func <stripped> // getter 
	0x99300  func <stripped> // getter 
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
	let defaultSectionContentInset : 4
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultSectionCornerRadius : 4

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x13ff400068ea0 (0x7f400068ea0) in binary!
	0x1a858  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a4fc00066bc8 (0x4fc00066bc8) in binary!
	0x16524  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a798000663f0 (0x798000663f0) in binary!
	0x1a5c4  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x13e7c00066260 (0x67c00066260) in binary!
	0x1950a  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x164fb00066238 (0x4fb00066238) in binary!
	0x164ef  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a49c0006a0c0 (0x49c0006a0c0) in binary!
	0x15e01  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x164e400066ab8 (0x4e400066ab8) in binary!
	0x13e28  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a46c00066188 (0x46c00066188) in binary!
	0x28000000c  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1541400067378 (0x41400067378) in binary!
	0x1a448  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff48ac0  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x6bcfff48b08  @objc FilterSettingsViewController.(null) <stripped>
	0xfff48e20  @objc FilterSettingsViewController.5€: <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff48f18  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0xe4fff4d140  @objc FilterSettingsViewController.(null) <stripped>
	0x374000672d8  @objc FilterSettingsViewController.ˇ◊Lã=ÔÍ <stripped>

	// Swift methods
	0x99460  class func FilterSettingsViewController.__allocating_init(withDelegate:selectedCategories:selectedAccounts:) // init 
	0x9aed0  func <stripped> // method 
	0x9b110  func <stripped> // method 
	0x9b350  func <stripped> // method 
	0x9b380  func <stripped> // method 
	0x9b590  func <stripped> // method 
	0x9b5b0  func <stripped> // method 
	0x9b730  func <stripped> // method 
 }

 class HealthRecordsUI.CoverageRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_classificationFormatter : CoverageClassificationFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1541400067378 (0x41400067378) in binary!
	0x1a448  @objc CoverageRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff48ac0  @objc CoverageRecordFormatter.(null) <stripped>

	// Swift methods
	0x9dcd0  func <stripped> // getter 
	0x9ddb0  func <stripped> // method 
	0x9dec0  class func CoverageRecordFormatter.__allocating_init(store:context:) // init 
	0x9df80  func <stripped> // method 
 }

 class HealthRecordsUI.AddAccountTableViewCell : HRStandardTableViewCell {

	// Properties
	var alignWithAccountTitle : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1445000067408 (0x45000067408) in binary!
	0x1a760  @objc AddAccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a404000682a0 (0x404000682a0) in binary!
	0x18000000c  @objc AddAccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x13c1c0006a060 (0x41c0006a060) in binary!
	0x28000000c  @objc AddAccountTableViewCell.(null) <stripped>

	// Swift methods
	0x9fb40  func <stripped> // method 
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
	0xa1e00  class func CategoryCountDataProvider.__allocating_init(healthStore:) // init 
	0xa1e40  func <stripped> // method 
 }

 class HealthRecordsUI.AllergyRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_reactionFormatter : AllergyReactionFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15394000672f8 (0x394000672f8) in binary!
	0x1a3c8  @objc AllergyRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0xc4fff4f0d0  @objc AllergyRecordFormatter.(null) <stripped>

	// Swift methods
	0xa3890  func <stripped> // getter 
	0xa3970  func <stripped> // method 
	0xa3a80  class func AllergyRecordFormatter.__allocating_init(store:context:) // init 
	0xa3b40  func <stripped> // method 
	0xa3ba0  func <stripped> // method 
 }

 struct HealthRecordsUI.CategorySummaryFeedItemIdentifierFactory { }

 class HealthRecordsUI.MedicationOrderFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15374000672d8 (0x374000672d8) in binary!
	0x1a3a8  @objc MedicationOrderFormatter.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x1a4fff50cb0  @objc MedicationOrderFormatter.(null) <stripped>

	// Swift methods
	0xa5900  func <stripped> // getter 
	0xa59e0  func <stripped> // method 
	0xa5ae0  class func MedicationOrderFormatter.__allocating_init(store:context:) // init 
	0xa5ba0  func <stripped> // method 
	0xa5c00  func <stripped> // method 
 }

 class HealthRecordsUI.InternalAllHealthRecordsFeedViewController {
 class HealthRecordsUI.HealthRecordsFeedDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var store : Î5
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sourceProfile : √1

	// Swift methods
	0xa7330  func <stripped> // getter 
	0xa7370  func <stripped> // setter 
	0xa73c0  func <stripped> // modifyCoroutine 
	0xa7180  class func HealthRecordsFeedDataSourceProvider.__allocating_init(sourceProfile:store:) // init 
	0xa7470  func <stripped> // method 
	0xa74c0  func <stripped> // method 
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
WARNING: couldn't find address 0x1531c00067280 (0x31c00067280) in binary!
	0x1a350  @objc MedicationDosageFormatter.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x2c4fff59408  @objc MedicationDosageFormatter.(null) <stripped>

	// Swift methods
	0xab5f0  func <stripped> // method 
	0xab600  func <stripped> // method 
	0xab5a0  class func MedicationDosageFormatter.__allocating_init(store:context:) // init 
	0xab730  func <stripped> // method 
 }

 enum HealthRecordsUI.HealthRecordsURLParsingResult {

	// Properties
	case onboarding : (gatewayID: String, batchID: String)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case onboardingParsingError : ì,
WARNING: couldn't find address 0x0 (0x0) in binary!
	case loginRedirectSuccess :  first-element-marker 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case loginRedirectError : ì,
	case unrecognized  
	case viewHealthRecords  
	case startProviderSearch  
	case loginRedirectAccessNotGranted  
 }

 class HealthRecordsUI.HealthRecordsURLHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xae450  class func HealthRecordsURLHandler.__allocating_init() // init 
	0xae480  func <stripped> // method 
 }

 class HealthRecordsUI.RecordCategoryViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let category : DisplayCategory
	let healthRecordsStore : HKHealthRecordsStore
	var preferredSegment : ModeSegment
	let factory : HRCategoryViewControllerFactory
	let countProvider : CategoryCountProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var recordCanceller : 5'
WARNING: couldn't find address 0x0 (0x0) in binary!
	var aToZCanceller : 5'
	var recordCount : Int
	var currentViewController : UIViewController?
	var displayMode : DisplayMode
	var isModePickerHidden : Bool
	var $__lazy_storage_$_modePicker : UISegmentedControl?
	var $__lazy_storage_$_navigationPalette : _UINavigationBarPalette?
	var $__lazy_storage_$_lastUpdatedViewController : UIViewController?
	var $__lazy_storage_$_alphabeticalViewController : UIViewController?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a68c000675e8 (0x68c000675e8) in binary!
	0x1a330  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x1a324000669f0 (0x324000669f0) in binary!
	0x1a318  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x1c4cc0006a098 (0x4cc0006a098) in binary!
	0x1c4c0  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x13ca400067400 (0x4a400067400) in binary!
	0x1a2e8  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x104fff5d200  @objc RecordCategoryViewController.(null) <stripped>
	0xfff5d328  @objc RecordCategoryViewController.Hâ˜Aˇ’HâE®HâﬂAˇ’Iâ«Lâ˜Lâ„Aˇ’IâƒÄ{H <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff5f710  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x52cfff5f7f8  @objc RecordCategoryViewController.(null) <stripped>

	// Swift methods
	0xb09f0  func <stripped> // method 
	0xb0c60  func <stripped> // method 
	0xb14f0  func <stripped> // method 
	0xb15b0  func <stripped> // method 
	0xb1690  func <stripped> // method 
	0xb1ca0  func <stripped> // method 
	0xb1f60  func <stripped> // getter 
	0xb1fc0  func <stripped> // getter 
	0xb20a0  func <stripped> // getter 
	0xb2260  func <stripped> // getter 
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
WARNING: couldn't find address 0x1a62400067580 (0x62400067580) in binary!
	0x1a2c8  @objc NoDataViewController.(null) <stripped>
WARNING: couldn't find address 0x13c6c000673c8 (0x46c000673c8) in binary!
	0x18000000c  @objc NoDataViewController.(null) <stripped>
WARNING: couldn't find address 0x1526400067118 (0x26400067118) in binary!
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
	0xb5300  func <stripped> // getter 
	0xb5430  func <stripped> // getter 
	0xb5470  func <stripped> // setter 
	0xb54b0  func <stripped> // modifyCoroutine 
	0xb5210  class func CancellationToken.__allocating_init(cancelBlock:) // init 
	0xb57b0  func <stripped> // method 
 }

 class HealthRecordsUI.PromotionListViewController {
 class HealthRecordsUI.PromotionListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
WARNING: couldn't find address 0x0 (0x0) in binary!
	var store : Î5

	// Swift methods
	0xb5b90  func <stripped> // getter 
	0xb5bd0  func <stripped> // setter 
	0xb5c20  func <stripped> // modifyCoroutine 
	0xb5a10  class func PromotionListViewDataSourceProvider.__allocating_init(predicate:store:) // init 
	0xb5ca0  func <stripped> // method 
	0xb5d00  func <stripped> // method 
 }

 class HealthRecordsUI.AccountErrorTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let accountErrorView : AccountErrorFeedItemView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x142c000067278 (0x2c000067278) in binary!
	0x1a5d0  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a274000679f8 (0x274000679f8) in binary!
	0x14bd8  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1c41c000676d8 (0x41c000676d8) in binary!
	0x1a250  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a24400066810 (0x24400066810) in binary!
	0x177b2  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a22c00065f48 (0x22c00065f48) in binary!
	0x18000000c  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1c3d400068b28 (0x3d400068b28) in binary!
	0x68000000c  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a54c00068498 (0x54c00068498) in binary!
	0x1a540  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a1e400068178 (0x1e400068178) in binary!
	0x177d3  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1518c000670f0 (0x18c000670f0) in binary!
	0x1a1c0  @objc AccountErrorTableViewCell.(null) <stripped>

	// Swift methods
	0xb6790  class func <stripped> // getter 
	0xb68f0  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateProvider : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let conceptStore : HKConceptStore
	let healthRecordsStore : HKHealthRecordsStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	let healthExperienceStore : Î5
	var recordCounts : DisplayCategory
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sub : 5'
	var loadState : LoadState
	var changeHandler : InternalStateProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var isObserving : ß!

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a54c00068498 (0x54c00068498) in binary!
	0x1a540  @objc InternalStateProvider.(null) <stripped>
WARNING: couldn't find address 0x1a1e400068178 (0x1e400068178) in binary!
	0x177d3  @objc InternalStateProvider.(null) <stripped>
WARNING: couldn't find address 0x1518c000670f0 (0x18c000670f0) in binary!
	0x1a1c0  @objc InternalStateProvider.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x20cfff642f8  @objc InternalStateProvider.(null) <stripped>
	0x45c000678a0  @objc InternalStateProvider.â«Ë¬Ñ <stripped>
WARNING: couldn't find address 0x670a4fff67a28 (0xa4fff67a28) in binary!
	0x18000000c  @objc InternalStateProvider.(null) <stripped>

	// Swift methods
	0xb7ab0  func <stripped> // method 
	0xb8f20  func <stripped> // method 
	0xb94b0  func <stripped> // method 
	0xba820  func <stripped> // method 
 }

 class HealthRecordsUI.SuggestedActionTileViewControllerShim {
 class HealthRecordsUI.OnboardingSuggestedActionViewController {
 class HealthRecordsUI.BloodPressureCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x17c5c000678a0 (0x45c000678a0) in binary!
	0x15140  @objc BloodPressureCurrentValueViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff68bd8  @objc BloodPressureCurrentValueViewDataSource.(null) <stripped>
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
WARNING: couldn't find address 0x1511400066f88 (0x11400066f88) in binary!
	0x17dd8  @objc MedicalRecordChartDataSource.(null) <stripped>
WARNING: couldn't find address 0x17dec000664c0 (0x5ec000664c0) in binary!
	0x1a480  @objc MedicalRecordChartDataSource.(null) <stripped>
WARNING: couldn't find address 0x150e400067048 (0xe400067048) in binary!
	0x1a118  @objc MedicalRecordChartDataSource.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x7c4fff76c10  @objc MedicalRecordChartDataSource.(null) <stripped>
	0x494fff773b8  @objc MedicalRecordChartDataSource.¿LâÈLãE∏Hã]»IâŸˇ£Ì <stripped>
	0x65cfff77450  @objc MedicalRecordChartDataSource.Ã <stripped>

	// Swift methods
	0xc51d0  func <stripped> // getter 
	0xc5250  func <stripped> // getter 
	0xc52b0  func <stripped> // getter 
	0xc53b0  func <stripped> // getter 
	0xc54d0  func <stripped> // getter 
	0xc4f50  class func MedicalRecordChartDataSource.__allocating_init(concept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type:) // init 
	0xc59d0  func <stripped> // method 
	0xc5ed0  func <stripped> // method 
	0xc61a0  func <stripped> // method 
	0xc64d0  func <stripped> // method 
	0xc66e0  func <stripped> // method 
	0xc6e00  func <stripped> // method 
 }

 class HealthRecordsUI.CategoryRecordQueryDescription : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SampleQueryDescription {

	// Properties
	let category : BrowseCategory // +0x2ac0 (0x0)
	let sampleQueryDescription : HKSampleQueryDescription // +0x0 (0x8)

	// Swift methods
	0xcd260  func <stripped> // getter 
	0xcd290  func <stripped> // getter 
	0xcd2d0  func <stripped> // method 
	0xcd3b0  func <stripped> // getter 
 }

 enum HealthRecordsUI.ResultError {

	// Properties
	case unspecified  
 }

 class HealthRecordsUI.OnboardingTileViewController : HKTableViewController /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let profile : HRProfile // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a454000673b0 (0x454000673b0) in binary!
	0x1a0f8  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x1a0ec00069d08 (0xec00069d08) in binary!
	0x1c2a0  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x1a1c000068668 (0x1c000068668) in binary!
	0x13a78  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x17fcc00066328 (0x7cc00066328) in binary!
	0x17fc0  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x15a1500069c80 (0x21500069c80) in binary!
	0x160f8  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x13a3c00067198 (0x23c00067198) in binary!
	0x1a080  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x57cfff77dd8  @objc OnboardingTileViewController.(null) <stripped>
	0x78c000663d8  @objc OnboardingTileViewController.â›Hâ«ËZ\ <stripped>
WARNING: couldn't find address 0x663d4fff79f48 (0x3d4fff79f48) in binary!
	0x7f400066f58  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0xfff7a590 (0xfff7a590) in binary!
	0x7dc00067738  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x663acfff7b218 (0x3acfff7b218) in binary!
	0x7c4000663a8  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x663a4fff7b460 (0x3a4fff7b460) in binary!
	0x7ac000663a0  @objc OnboardingTileViewController.(null) <stripped>

	// Swift methods
	0xcdd50  class func OnboardingTileViewController.__allocating_init(with:) // init 
	0xce380  func <stripped> // method 
 }

 class HealthRecordsUI.VaccinationRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1502c00066f90 (0x2c00066f90) in binary!
	0x1a060  @objc VaccinationRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x3d4fff79f48  @objc VaccinationRecordFormatter.(null) <stripped>

	// Swift methods
	0xceea0  class func VaccinationRecordFormatter.__allocating_init(store:context:) // init 
	0xcef60  func <stripped> // method 
 }

 class HealthRecordsUI.NotificationPolicy : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14f8c000663d8 (0x78c000663d8) in binary!
	0x14f80  @objc NotificationPolicy.(null) <stripped>
WARNING: couldn't find address 0x14ff400066f58 (0x7f400066f58) in binary!
	0xc8000000c  @objc NotificationPolicy.(null) <stripped>
WARNING: couldn't find address 0x14fdc00067738 (0x7dc00067738) in binary!
	0x14fd0  @objc NotificationPolicy.(null) <stripped>

	// Swift methods
	0xd1010  func <stripped> // method 
	0xd1270  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartPoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let chartableSet : HKChartableCodedQuantitySet
	let blockCoordinateInfo : SingleValueChartData
	let sortedYValues : [Double]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14fdc00067738 (0x7dc00067738) in binary!
	0x14fd0  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x14fc4000663a8 (0x7c4000663a8) in binary!
	0x14fb8  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x14fac000663a0 (0x7ac000663a0) in binary!
	0x1a330  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x14f9400066398 (0x79400066398) in binary!
	0x14f88  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x14f7c00066390 (0x77c00066390) in binary!
	0x14f70  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x14f6400066ec8 (0x76400066ec8) in binary!
	0x19f98  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0xf8000000c (0xf8000000c) in binary!
	0x47cfff7d850  @objc MedicalRecordChartPoint.(null) <stripped>
	0x3ccfff7d998  @objc MedicalRecordChartPoint.Ëá≠ <stripped>
	0x3ccfff7db20  @objc MedicalRecordChartPoint.ú? <stripped>
	0x3bcfff7dbc8  @objc MedicalRecordChartPoint. <stripped>
	0x38cfff7dd50  @objc MedicalRecordChartPoint.«Hã5†â <stripped>
	0x34cfff7ddf8  @objc MedicalRecordChartPoint.5≥â <stripped>

	// Swift methods
	0xd23b0  class func MedicalRecordChartPoint.__allocating_init(chartableSet:unit:blockCoordinateInfo:) // init 
	0xd24c0  func <stripped> // method 
	0xd2520  func <stripped> // method 
	0xd26b0  func <stripped> // method 
	0xd4140  func <stripped> // method 
	0xd2840  func <stripped> // method 
	0xd28a0  func <stripped> // method 
	0xd2aa0  func <stripped> // method 
	0xd4120  func <stripped> // method 
	0xd2c90  func <stripped> // method 
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
	let interItemSpacing : 4 // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a21400067170 (0x21400067170) in binary!
	0x19eb8  @objc LabelStackView.(null) <stripped>
WARNING: couldn't find address 0x1481c00067ca8 (0x1c00067ca8) in binary!
	0x14830  @objc LabelStackView.(null) <stripped>
WARNING: couldn't find address 0x19e9400065bb0 (0x69400065bb0) in binary!
	0x18000000c  @objc LabelStackView.(null) <stripped>
WARNING: couldn't find address 0x14e3c00066b80 (0x63c00066b80) in binary!
	0x28000000c  @objc LabelStackView.(null) <stripped>
WARNING: couldn't find address 0x14e2400066ef0 (0x62400066ef0) in binary!
	0x14e18  @objc LabelStackView.(null) <stripped>

	// Swift methods
	0xd6310  class func LabelStackView.__allocating_init(textStyle:) // init 
	0xd65e0  func <stripped> // method 
	0xd6770  func <stripped> // method 
 }

 class HealthRecordsUI.BrowseIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var iconCache : UnboundedCache
	var placeholderCache : UnboundedCache
	let accountIconProvider : AccountIconProvider

	// Swift methods
	0xd9620  class func BrowseIconProvider.__allocating_init(accountIconProvider:) // init 
	0xd9790  func <stripped> // method 
	0xd9da0  func <stripped> // method 
	0xdab00  func <stripped> // method 
 }

 class HealthRecordsUI.OAuthViewControllerNotificationUserInfoKeys : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14e0400066d68 (0x60400066d68) in binary!
	0x19e38  @objc OAuthViewControllerNotificationUserInfoKeys.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff85ba0  @objc OAuthViewControllerNotificationUserInfoKeys.(null) <stripped>
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
WARNING: couldn't find address 0x14dcc00066d30 (0x5cc00066d30) in binary!
	0x19e00  @objc AnalyticsManager.(null) <stripped>
WARNING: couldn't find address 0x18ae400067f30 (0x2e400067f30) in binary!
	0x18af8  @objc AnalyticsManager.(null) <stripped>
WARNING: couldn't find address 0x18b0c00067f20 (0x30c00067f20) in binary!
	0x19dd0  @objc AnalyticsManager.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x4d4fff88bc8  @objc AnalyticsManager.(null) <stripped>
	0xfff88fe0  @objc AnalyticsManager.âﬂHã5Øï <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x29cfff8b748  @objc AnalyticsManager.(null) <stripped>

	// Swift methods
	0xdd440  func <stripped> // method 
	0xdd560  func <stripped> // method 
	0xdd9d0  func <stripped> // method 
	0xddc30  func <stripped> // method 
	0xdddb0  func <stripped> // method 
	0xde380  func <stripped> // method 
	0xde8d0  func <stripped> // method 
 }

 class HealthRecordsUI.AllergyReactionFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1376c00066198 (0x76c00066198) in binary!
	0x14d70  @objc AllergyReactionFormatter.(null) <stripped>
WARNING: couldn't find address 0x19da400065ac0 (0x5a400065ac0) in binary!
	0x28000000c  @objc AllergyReactionFormatter.(null) <stripped>
WARNING: couldn't find address 0x14d4c00066cb0 (0x54c00066cb0) in binary!
	0x19d80  @objc AllergyReactionFormatter.(null) <stripped>

	// Swift methods
	0xdff50  func <stripped> // method 
	0xdff60  func <stripped> // method 
	0xe0010  class func AllergyReactionFormatter.__allocating_init(store:context:) // init 
	0xe00b0  func <stripped> // method 
	0xe01e0  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartData : HKInteractiveChartBloodPressureData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : e1 // +0x80000400 (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x0 (0x8)
	let hasTime : Bool // +0x74735f5f (0x1)
	let partOfOutOfRangeSeries : Bool // +0x0 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14d4c00066cb0 (0x54c00066cb0) in binary!
	0x19d80  @objc BloodPressureChartData.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff8c4d8  @objc BloodPressureChartData.(null) <stripped>

	// Swift methods
	0xe29e0  class func BloodPressureChartData.__allocating_init(date:dateFormat:hasTime:systolicRange:diastolicRange:) // init 
 }

 class HealthRecordsUI.AccountTableViewCell : HRSourceTableViewCell {

	// Properties
	let brandView : WDMedicalRecordBrandView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x13d8800066d40 (0x58800066d40) in binary!
	0x1a098  @objc AccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x18d8600066c10 (0x58600066c10) in binary!
	0x19d30  @objc AccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x19d24000674a8 (0x524000674a8) in binary!
	0x19d18  @objc AccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0xdcfff90430  @objc AccountTableViewCell.(null) <stripped>
	0xd4fff90818  @objc AccountTableViewCell.â«Ë∞ <stripped>
	0x3ecfff90990  @objc AccountTableViewCell.˝Lã= <stripped>

	// Swift methods
	0xe3bf0  func <stripped> // method 
	0xe3d00  func <stripped> // method 
	0xe3d80  func <stripped> // method 
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
WARNING: couldn't find address 0x18f0400066b28 (0x70400066b28) in binary!
	0x14cb8  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x18f0c000660d8 (0x70c000660d8) in binary!
	0x14ca0  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x15d34000660d0 (0x534000660d0) in binary!
	0x14c88  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x19cbc000659d8 (0x4bc000659d8) in binary!
	0x38000000c  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x1560400065d18 (0x60400065d18) in binary!
	0x14c58  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x19c8c000659a8 (0x48c000659a8) in binary!
	0x18000000c  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x14c3400066ae8 (0x43400066ae8) in binary!
	0x68000000c  @objc MedicalRecordChartOverlayContext.(null) <stripped>

	// Swift methods
	0xe78b0  class func MedicalRecordChartOverlayContext.__allocating_init(title:dataSource:defaultColors:selectedColors:verticalAxis:) // init 
	0xe7ab0  func <stripped> // method 
	0xe7ba0  func <stripped> // method 
	0xe7ef0  func <stripped> // method 
	0xe7fa0  func <stripped> // method 
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
	var _latestChange :  // +0x0 (0x0)
	let handler : AccountStateChange // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1560400065d18 (0x60400065d18) in binary!
	0x14c58  @objc AccountStateChangeListener.(null) <stripped>
WARNING: couldn't find address 0x19c8c000659a8 (0x48c000659a8) in binary!
	0x18000000c  @objc AccountStateChangeListener.(null) <stripped>
WARNING: couldn't find address 0x14c3400066ae8 (0x43400066ae8) in binary!
	0x68000000c  @objc AccountStateChangeListener.(null) <stripped>

	// Swift methods
	0xe8820  func <stripped> // getter 
	0xe8880  func <stripped> // setter 
	0xe88f0  func <stripped> // modifyCoroutine 
	0xe8ac0  func <stripped> // getter 
	0xe8b60  func <stripped> // setter 
	0xe8bd0  func <stripped> // modifyCoroutine 
	0xe8d70  class func AccountStateChangeListener.__allocating_init(handler:) // init 
	0xe8fe0  func <stripped> // method 
 }

 struct HealthRecordsUI.AddAccountFeedItemIdentifierFactory { }

 class HealthRecordsUI.ExplainerTextFooterCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let label : UILabel
	var content : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14c1c00069b40 (0x41c00069b40) in binary!
	0x1be10  @objc ExplainerTextFooterCell.(null) <stripped>
WARNING: couldn't find address 0x19f9400068358 (0x79400068358) in binary!
	0x13c6c  @objc ExplainerTextFooterCell.(null) <stripped>
WARNING: couldn't find address 0x19f7c00066ed8 (0x77c00066ed8) in binary!
	0x19c20  @objc ExplainerTextFooterCell.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x11cfff97128  @objc ExplainerTextFooterCell.(null) <stripped>
	0x3ac00068420  @objc ExplainerTextFooterCell.^A_]√UHâÂAWAVAUATSPIâ¸HãK <stripped>
WARNING: couldn't find address 0x661d4fff9bf88 (0x1d4fff9bf88) in binary!
	0x39400066af8  @objc ExplainerTextFooterCell.(null) <stripped>

	// Swift methods
	0xe9c30  func <stripped> // getter 
	0xe9ce0  func <stripped> // setter 
	0xe9d90  func <stripped> // modifyCoroutine 
	0xea010  func <stripped> // method 
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
	0xed870  func <stripped> // getter 
	0xed8d0  func <stripped> // setter 
	0xed980  func <stripped> // modifyCoroutine 
	0xedbd0  class func CountFormatter.__allocating_init(style:) // init 
	0xede80  func <stripped> // method 
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
WARNING: couldn't find address 0x14bcc00066b30 (0x3cc00066b30) in binary!
	0x19c00  @objc DiagnosticTestReportFormatter.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x1d4fff9bf88  @objc DiagnosticTestReportFormatter.(null) <stripped>

	// Swift methods
	0xee650  class func DiagnosticTestReportFormatter.__allocating_init(store:context:) // init 
	0xee710  func <stripped> // method 
 }

 class HealthRecordsUI.AccountIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monogramProvider : MonogramProvider
	var brandImageManager : HKBrandImageManager
	var iconCache : UnboundedCache

	// Swift methods
	0xf0880  class func AccountIconProvider.__allocating_init(brandImageManager:monogramProvider:) // init 
	0xf0960  func <stripped> // method 
	0xf0a60  func <stripped> // method 
	0xf0fe0  func <stripped> // method 
 }

 class HealthRecordsUI.ContentStatusCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let spinner : UIActivityIndicatorView
	let titleLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14bac00068420 (0x3ac00068420) in binary!
	0x14ba0  @objc ContentStatusCell.(null) <stripped>
WARNING: couldn't find address 0x14b9400066af8 (0x39400066af8) in binary!
	0x19f18  @objc ContentStatusCell.(null) <stripped>
WARNING: couldn't find address 0x13bf000066ba8 (0x3f000066ba8) in binary!
	0x19bb0  @objc ContentStatusCell.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x1e4fff9c8a8  @objc ContentStatusCell.(null) <stripped>
	0x47cfff9c9d0  @objc ContentStatusCell.Hâ√Hâﬂ[A^]Èˇ> <stripped>
	0x7dcfff9ce58  @objc ContentStatusCell.Hã5A. <stripped>

	// Swift methods
	0xf3940  func <stripped> // method 
 }

 class HealthRecordsUI.SideBySideLabelCell : WDMedicalRecordGroupableCell {

	// Properties
	let titleLabel : UILabel
	let detailLabel : UILabel
	let chevronView : UIView
	var title : String?
	var detail : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14b5c000663d8 (0x35c000663d8) in binary!
	0x1bd50  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x14b4400065b30 (0x34400065b30) in binary!
	0x1bd38  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x19ebc00068280 (0x6bc00068280) in binary!
	0x1bd20  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x13b8800066b40 (0x38800066b40) in binary!
	0x19e98  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x19b3c00065858 (0x33c00065858) in binary!
	0xa8000000c  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x194c400069be0 (0x4c400069be0) in binary!
	0x194e8  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x194fc00065f18 (0x4fc00065f18) in binary!
	0x13330  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x1955400065f10 (0x55400065f10) in binary!
	0x19578  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x1956c00065f08 (0x56c00065f08) in binary!
	0x19560  @objc SideBySideLabelCell.(null) <stripped>

	// Swift methods
	0xf4020  func <stripped> // getter 
	0xf4060  func <stripped> // setter 
	0xf40d0  func <stripped> // modifyCoroutine 
	0xf41d0  func <stripped> // getter 
	0xf42d0  func <stripped> // setter 
	0xf43e0  func <stripped> // modifyCoroutine 
	0xf4680  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartSeries : HKGraphSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var selectedStrokeStyle : HKStrokeStyle?
	var unselectedStrokeStyle : HKStrokeStyle?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x194c400069be0 (0x4c400069be0) in binary!
	0x194e8  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x194fc00065f18 (0x4fc00065f18) in binary!
	0x13330  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x1955400065f10 (0x55400065f10) in binary!
	0x19578  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x1956c00065f08 (0x56c00065f08) in binary!
	0x19560  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x14a84000669e8 (0x284000669e8) in binary!
	0x19ab8  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x6dcfff9ee40  @objc MedicalRecordChartSeries.(null) <stripped>
	0x6ccfff9eee8  @objc MedicalRecordChartSeries. <stripped>
	0x784fff9f020  @objc MedicalRecordChartSeries.[A^]√UHâÂAWAVAUATSPHâU–IâˇHãˆ„ <stripped>
	0x21400066290  @objc MedicalRecordChartSeries.HâﬂˇOÙ <stripped>
WARNING: couldn't find address 0x6609cfffa09e0 (0x9cfffa09e0) in binary!
	0x1fc00066280  @objc MedicalRecordChartSeries.(null) <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordChartCoordinate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let pointValuesAscending : CGPoint
	let blockCoordinateInfo : HKGraphSeriesBlockCoordinateInfo

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1962800065ee0 (0x62800065ee0) in binary!
	0x1961c  @objc MedicalRecordChartCoordinate.(null) <stripped>
WARNING: couldn't find address 0x14a4c000671a8 (0x24c000671a8) in binary!
	0x136d0  @objc MedicalRecordChartCoordinate.(null) <stripped>
WARNING: couldn't find address 0x14a3400066998 (0x23400066998) in binary!
	0x19a68  @objc MedicalRecordChartCoordinate.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x9cfffa09e0  @objc MedicalRecordChartCoordinate.(null) <stripped>
	0x1e4fffa0b08  @objc MedicalRecordChartCoordinate.Mâ∆IâÃIâˇHã∞“ <stripped>
	0x4c4fffa0f50  @objc MedicalRecordChartCoordinate. <stripped>

	// Swift methods
	0xf55c0  class func MedicalRecordChartCoordinate.__allocating_init(sortedPointValues:blockCoordinateInfo:) // init 
	0xf6470  func <stripped> // getter 
	0xf64a0  func <stripped> // getter 
	0xf64d0  func <stripped> // getter 
	0xf6510  func <stripped> // method 
	0xf66c0  func <stripped> // getter 
	0xf6720  func <stripped> // getter 
	0xf8240  func <stripped> // getter 
	0xf6780  func <stripped> // method 
 }

 class HealthRecordsUI.ContentStatusView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let subtitleLabel : UILabel // +0x10 (0x8)
	let spinnerView : UIActivityIndicatorView // +0x18 (0x8)
	var title : String? // +0x20 (0x10)
	var subtitle : String? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14a1400066290 (0x21400066290) in binary!
	0x1bc08  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x149fc00066280 (0x1fc00066280) in binary!
	0x1bbf0  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x133d400067ea0 (0x3d400067ea0) in binary!
	0x19d68  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x1439c000662d8 (0x39c000662d8) in binary!
	0x19a00  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x199f4000668b8 (0x1f4000668b8) in binary!
	0x1bba8  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x199dc00067160 (0x1dc00067160) in binary!
	0x199d0  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x6ccfffa2ff8  @objc ContentStatusView.(null) <stripped>
	0x4ec000664e0  @objc ContentStatusView. <stripped>
WARNING: couldn't find address 0xfffa4248 (0xfffa4248) in binary!
	0x14400067d30  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x66114fffa4270 (0x114fffa4270) in binary!
	0x4f000065dc0  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x680b4fffa44b8 (0xb4fffa44b8) in binary!
	0x11400066190  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x65f9cfffa4670 (0x79cfffa4670) in binary!
	0xfc00065d98  @objc ContentStatusView.(null) <stripped>

	// Swift methods
	0xf82a0  func <stripped> // getter 
	0xf82e0  func <stripped> // setter 
	0xf8350  func <stripped> // modifyCoroutine 
	0xf8450  func <stripped> // getter 
	0xf8550  func <stripped> // setter 
	0xf8660  func <stripped> // modifyCoroutine 
	0xf8780  class func ContentStatusView.__allocating_init(title:subtitle:) // init 
	0xf8c10  func <stripped> // method 
	0xf8e30  func <stripped> // method 
	0xf8e70  func <stripped> // method 
	0xf96e0  func <stripped> // method 
 }

 class HealthRecordsUI.MedicationRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1497c000668e0 (0x17c000668e0) in binary!
	0x199b0  @objc MedicationRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa4248  @objc MedicationRecordFormatter.(null) <stripped>

	// Swift methods
	0xfa090  func <stripped> // getter 
	0xfa170  func <stripped> // method 
	0xfa270  class func MedicationRecordFormatter.__allocating_init(store:context:) // init 
	0xfa330  func <stripped> // method 
	0xfa390  func <stripped> // method 
 }

 class HealthRecordsUI.ClinicalOnboardingManager : WDClinicalOnboardingManager {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19cec000664e0 (0x4ec000664e0) in binary!
	0xe8000000c  @objc ClinicalOnboardingManager.(null) <stripped>
 }

 class HealthRecordsUI.ConceptTitleTableHeaderView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let actionButton : UIButton // +0x10 (0x8)
	let fontChoices : [UIFont] // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var widthCache : 4 // +0x20 (0x8)
	var titleCache : NSString // +0x28 (0x8)
	var delegate : weak HRConceptTitleTableHeaderViewDelegate? // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottomExtraSpace : 4 // +0x38 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1494400067d30 (0x14400067d30) in binary!
	0x1bb38  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x194f000065dc0 (0x4f000065dc0) in binary!
	0x197d9  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1491400066190 (0x11400066190) in binary!
	0x1bb08  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x148fc00065d98 (0xfc00065d98) in binary!
	0x1baf0  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x142b4000661f0 (0x2b4000661f0) in binary!
	0x19c68  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1990c00067090 (0x10c00067090) in binary!
	0x14270  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1bab400069a28 (0x2b400069a28) in binary!
	0x198e8  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x464fffa6670  @objc ConceptTitleTableHeaderView.(null) <stripped>
	0x5ccfffa6948  @objc ConceptTitleTableHeaderView.HâﬂAˇ’Lâ˜Aˇ’Lãe»Lã}–Iã Lã5I2 <stripped>
	0x24c000665a8  @objc ConceptTitleTableHeaderView.Hçaz <stripped>
WARNING: couldn't find address 0xfffa6ca8 (0xfffa6ca8) in binary!
	0x3d4000670e0  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x670c4fffa8eb0 (0xc4fffa8eb0) in binary!
	0x3bc000670c0  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x66784fffaa8d8 (0x784fffaa8d8) in binary!
	0x5400065570  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0xfffaa930 (0xfffaa930) in binary!
	0x7fc000666a0  @objc ConceptTitleTableHeaderView.(null) <stripped>

	// Swift methods
	0xfbc20  func <stripped> // getter 
	0xfbca0  func <stripped> // setter 
	0xfbd70  func <stripped> // modifyCoroutine 
	0xfbe80  func <stripped> // getter 
	0xfbf00  func <stripped> // setter 
	0xfbfc0  func <stripped> // modifyCoroutine 
	0xfc0b0  func <stripped> // getter 
	0xfc1d0  func <stripped> // setter 
	0xfc310  func <stripped> // modifyCoroutine 
	0xfc4a0  func <stripped> // getter 
	0xfc570  func <stripped> // setter 
	0xfc640  func <stripped> // modifyCoroutine 
	0xfca90  func <stripped> // method 
	0xfd2b0  func <stripped> // method 
 }

 class HealthRecordsUI.WeakNotificationObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let scheduler : TaskScheduler
WARNING: couldn't find address 0x0 (0x0) in binary!
	let block :  empty-list 
	var center : weak NSNotificationCenter?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x198d400067868 (0xd400067868) in binary!
	0x1ba88  @objc WeakNotificationObserver.(null) <stripped>
WARNING: couldn't find address 0x1487c000667e0 (0x7c000667e0) in binary!
	0x198b0  @objc WeakNotificationObserver.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa6ca8  @objc WeakNotificationObserver.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0xc4fffa8eb0  @objc WeakNotificationObserver.(null) <stripped>

	// Swift methods
	0xfdf20  class func WeakNotificationObserver.__allocating_init(forName:object:scheduler:center:block:) // init 
	0xfe160  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19bd4000670e0 (0x3d4000670e0) in binary!
	0x19b2c  @objc MedicalRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x19bbc000670c0 (0x3bc000670c0) in binary!
	0x14820  @objc MedicalRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x1985400065570 (0x5400065570) in binary!
	0x18000000c  @objc MedicalRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x147fc000666a0 (0x7fc000666a0) in binary!
	0x68000000c  @objc MedicalRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x19b74000682b0 (0x374000682b0) in binary!
	0x19b68  @objc MedicalRecordFormatter.(null) <stripped>

	// Swift methods
	0x1006f0  func <stripped> // method 
	0x1009f0  func <stripped> // method 
	0x100b50  func <stripped> // method 
	0x100cb0  func <stripped> // method 
	0x100e00  func <stripped> // method 
	0x100f50  func <stripped> // method 
	0x1010f0  func <stripped> // method 
	0x1011f0  func <stripped> // method 
	0x1012e0  func <stripped> // method 
	0x1013e0  func <stripped> // method 
	0x1014d0  func <stripped> // method 
	0x1015b0  func <stripped> // method 
	0x1016b0  func <stripped> // method 
	0x1017b0  func <stripped> // method 
	0x1018b0  func <stripped> // method 
	0x1019a0  func <stripped> // method 
	0x101ad0  class func MedicalRecordFormatter.__allocating_init(store:context:) // init 
	0x101bd0  func <stripped> // method 
 }

 class HealthRecordsUI.ViewControllerFactory : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19b74000682b0 (0x374000682b0) in binary!
	0x19b68  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x131bc00068160 (0x1bc00068160) in binary!
	0x131b0  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x147b400066718 (0x7b400066718) in binary!
	0x197e8  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x124fffacf20  @objc ViewControllerFactory.(null) <stripped>
	0x51cfffaca38  @objc ViewControllerFactory.D] <stripped>
	0x75c000666c0  @objc ViewControllerFactory.PjATˇ”HÉƒ HâÖ@ˇˇˇLâˇLã=D] <stripped>

	// Swift methods
	0x102e80  func <stripped> // method 
	0x102f70  func <stripped> // method 
	0x1030d0  func <stripped> // method 
	0x1030e0  func <stripped> // method 
	0x1030f0  func <stripped> // method 
	0x103130  func <stripped> // method 
	0x1031a0  func <stripped> // method 
	0x103210  func <stripped> // method 
	0x1033c0  func <stripped> // method 
	0x1037d0  func <stripped> // method 
	0x1037f0  func <stripped> // method 
	0x103980  func <stripped> // method 
	0x103d20  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordAnnotationViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dateGroup : UIStackView // +0x8 (0x8)
	let monthYearLabel : UILabel // +0x10 (0x8)
	let timeLabel : UILabel // +0x18 (0x8)
	let dividerLabel : UILabel // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1475c000666c0 (0x75c000666c0) in binary!
	0x157c4  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x19be400065ae8 (0x3e400065ae8) in binary!
	0x12fa8  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x157cc00065be8 (0x7cc00065be8) in binary!
	0x157c0  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x1975400065470 (0x75400065470) in binary!
	0x48000000c  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x1973c00065d78 (0x73c00065d78) in binary!
	0x130e0  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x19a74000669d0 (0x274000669d0) in binary!
	0x19718  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x42cfffbca80  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>

	// Swift methods
	0x1056d0  func <stripped> // method 
	0x105f80  func <stripped> // method 
	0x1056e0  func <stripped> // method 
	0x1056f0  func <stripped> // method 
	0x105720  func <stripped> // method 
	0x105730  func <stripped> // method 
	0x105760  func <stripped> // method 
 }

 class HealthRecordsUI.DisplayItemProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthRecordsUI.TextViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_textView : UITextView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1973c00065d78 (0x73c00065d78) in binary!
	0x130e0  @objc TextViewController.(null) <stripped>
WARNING: couldn't find address 0x19a74000669d0 (0x274000669d0) in binary!
	0x19718  @objc TextViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x42cfffbca80  @objc TextViewController.(null) <stripped>
	0x18cfffbcbc8  @objc TextViewController.ƒ© <stripped>

	// Swift methods
	0x10f280  func <stripped> // getter 
	0x10f3f0  func <stripped> // getter 
	0x10f470  func <stripped> // setter 
	0x10f4e0  func <stripped> // modifyCoroutine 
 }

 struct HealthRecordsUI.AccountErrorFeedItemData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let accountId : m/
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
	var $__lazy_storage_$_sampleCountDebouncer : g // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _sampleCount : ∑ // +0x0 (0x0)

	// Swift methods
	0x112270  func <stripped> // getter 
	0x112350  func <stripped> // getter 
	0x1127f0  func <stripped> // method 
 }

 class HealthRecordsUI.CategoryCountProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let category : DisplayCategory
	let healthStore : HKHealthStore
	var sampleTypeCountProviders : SampleTypeCountProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_categoryRecordCountPublisher : [

	// Swift methods
	0x112bd0  func <stripped> // getter 
	0x113240  func <stripped> // getter 
	0x1133b0  func <stripped> // method 
 }

 struct HealthRecordsUI.AccountErrorFeedItemIdentifierFactory { }

 class HealthRecordsUI.ImprovementDataCollectionAboutPrivacyViewController : TextViewController {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1970400065dd0 (0x70400065dd0) in binary!
	0x133e8  @objc ImprovementDataCollectionAboutPrivacyViewController.(null) <stripped>
WARNING: couldn't find address 0x1309c000667f8 (0x9c000667f8) in binary!
	0x19a30  @objc ImprovementDataCollectionAboutPrivacyViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x5e4fffbd938  @objc ImprovementDataCollectionAboutPrivacyViewController.(null) <stripped>
	0xfffbd9b0  @objc ImprovementDataCollectionAboutPrivacyViewController.HâﬂAˇ÷HâÿHÉƒ[A^]√UHâÂAVSHÉÏHã5Tú <stripped>
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
	var _latestChange : g // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a03d00065b58 (0x3d00065b58) in binary!
	0x14680  @objc HealthRecordsSupportedStateChangeListener.(null) <stripped>
WARNING: couldn't find address 0x196b4000653d0 (0x6b4000653d0) in binary!
	0x28000000c  @objc HealthRecordsSupportedStateChangeListener.(null) <stripped>
WARNING: couldn't find address 0x12ecc00065b80 (0x6cc00065b80) in binary!
	0x14650  @objc HealthRecordsSupportedStateChangeListener.(null) <stripped>

	// Swift methods
	0x114a90  func <stripped> // getter 
	0x114af0  func <stripped> // setter 
	0x114b60  func <stripped> // modifyCoroutine 
	0x114d30  func <stripped> // getter 
	0x114dd0  func <stripped> // setter 
	0x114e40  func <stripped> // modifyCoroutine 
	0x114fe0  class func HealthRecordsSupportedStateChangeListener.__allocating_init(handler:) // init 
	0x115250  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureDataTransformer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit?
	var $__lazy_storage_$_displayType : HKDisplayType?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1313c00069528 (0x13c00069528) in binary!
	0x199c0  @objc BloodPressureDataTransformer.(null) <stripped>
WARNING: couldn't find address 0x13144000694c8 (0x144000694c8) in binary!
	0x68000000c  @objc BloodPressureDataTransformer.(null) <stripped>
WARNING: couldn't find address 0x1999c000668f8 (0x19c000668f8) in binary!
	0x19640  @objc BloodPressureDataTransformer.(null) <stripped>

	// Swift methods
	0x115f80  func <stripped> // getter 
	0x116020  func <stripped> // getter 
	0x116100  func <stripped> // method 
	0x116560  func <stripped> // method 
	0x116810  func <stripped> // method 
	0x116970  func <stripped> // method 
 }

 class HealthRecordsUI.CountProviderCollection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var countProviders : DisplayCategory
	var healthStore : HKHealthStore

	// Swift methods
	0x118ec0  func <stripped> // method 
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
	let interItemSpacingVertical : 4
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interItemSpacingHorizontal : 4
	let hidesIconsForAccessibilityTextSizes : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1999c000668f8 (0x19c000668f8) in binary!
	0x19640  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x13fa400067430 (0x7a400067430) in binary!
	0x1b7e8  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x13fac00065ee8 (0x7ac00065ee8) in binary!
	0x19610  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc52e8  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc4f70  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc5108  @objc IconTextListView.(null) <stripped>

	// Swift methods
	0x11a570  class func IconTextListView.__allocating_init(textStyle:iconSize:interItemSpacingHorizontal:interItemSpacingVertical:hidesIconsForAccessibilityTextSizes:) // init 
	0x11a780  func <stripped> // method 
	0x11a9b0  func <stripped> // method 
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
WARNING: couldn't find address 0x135b800066570 (0x5b800066570) in binary!
	0x198c8  @objc StandardTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x4fffc5120  @objc StandardTableViewCell.(null) <stripped>

	// Swift methods
	0x11ccb0  class func <stripped> // getter 
 }

 class HealthRecordsUI.NoAppTableViewCell : HRStandardTableViewCell {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1359800066550 (0x59800066550) in binary!
	0x198a8  @objc NoAppTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x254fffd0a00  @objc NoAppTableViewCell.(null) <stripped>
 }

 class HealthRecordsUI.SourceTableViewCell : HRStandardTableViewCell {

	// Properties
	var sourceModel : HKSourceDataModel?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x135e8000665a0 (0x5e8000665a0) in binary!
	0x198f8  @objc SourceTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1959c000652b8 (0x59c000652b8) in binary!
	0x28000000c  @objc SourceTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x135b800066570 (0x5b800066570) in binary!
	0x198c8  @objc SourceTableViewCell.(null) <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordUnitCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var units : [HKUnit : NSCountedSet]

	// Swift methods
	0x11e4a0  func <stripped> // method 
	0x11ec60  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureFormatter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit?

	// Swift methods
	0x127f80  func <stripped> // getter 
	0x128020  func <stripped> // getter 
	0x128090  func <stripped> // getter 
	0x128170  func <stripped> // method 
 }

 class HealthRecordsUI.CoverageClassificationFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1450400066468 (0x50400066468) in binary!
	0x19538  @objc CoverageClassificationFormatter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x24fffd2080  @objc CoverageClassificationFormatter.(null) <stripped>

	// Swift methods
	0x1285a0  func <stripped> // method 
	0x1285b0  func <stripped> // method 
	0x128660  class func CoverageClassificationFormatter.__allocating_init(store:context:) // init 
	0x128700  func <stripped> // method 
	0x128750  func <stripped> // method 
 }

 class HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var lastCachedNumberOfChartPoints : Int? // +0x8 (0x9)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19874000659b8 (0x74000659b8) in binary!
	0x14e78  @objc SingleValueCurrentValueViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x16fdc00066c20 (0x7dc00066c20) in binary!
	0x144c0  @objc SingleValueCurrentValueViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x42cfffd9a38  @objc SingleValueCurrentValueViewDataSource.(null) <stripped>
	0x1e4fffda6d0  @objc SingleValueCurrentValueViewDataSource.58 <stripped>

	// Swift methods
	0x129e40  func <stripped> // method 
 }

 enum HealthRecordsUI.AccountIconViewError {

	// Properties
	case missingAccount  
 }

 struct HealthRecordsUI.AccountIconViewData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : m/
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
WARNING: couldn't find address 0x1983c00067788 (0x3c00067788) in binary!
	0x16adb  @objc HealthRecordsMigrator.(null) <stripped>
WARNING: couldn't find address 0x14494000663f8 (0x494000663f8) in binary!
	0x194c8  @objc HealthRecordsMigrator.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0xcfffdd200  @objc HealthRecordsMigrator.(null) <stripped>
	0x73cfffdd328  @objc HealthRecordsMigrator.ËπD <stripped>

	// Swift methods
 }

 struct HealthRecordsUI.ViewMetrics { }

 class HealthRecordsUI.ConceptListViewController {
 class HealthRecordsUI.ConceptListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let categoryPredicate : NSPredicate
WARNING: couldn't find address 0x0 (0x0) in binary!
	var store : Î5
WARNING: couldn't find address 0x0 (0x0) in binary!
	let categoryViewDataSourceProvider : Å
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sourceProfile : √1

	// Swift methods
	0x133880  func <stripped> // getter 
	0x1338c0  func <stripped> // setter 
	0x133910  func <stripped> // modifyCoroutine 
	0x132e30  class func ConceptListViewDataSourceProvider.__allocating_init(categoryPredicate:sourceProfile:store:) // init 
	0x133a60  func <stripped> // method 
	0x133ad0  func <stripped> // method 
	0x134290  func <stripped> // method 
 }

 class HealthRecordsUI.ClinicalOnboardingLearnMoreViewController : TextViewController {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x194b400065b80 (0x4b400065b80) in binary!
	0x1b668  @objc ClinicalOnboardingLearnMoreViewController.(null) <stripped>
WARNING: couldn't find address 0x12e4c000665a8 (0x64c000665a8) in binary!
	0x197e0  @objc ClinicalOnboardingLearnMoreViewController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x18cfffdd858  @objc ClinicalOnboardingLearnMoreViewController.(null) <stripped>
	0x60c00066568  @objc ClinicalOnboardingLearnMoreViewController.HâÂHã5>W <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicationDispenseFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1443c000663a0 (0x43c000663a0) in binary!
	0x19470  @objc MedicationDispenseFormatter.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x6fcfffde988  @objc MedicationDispenseFormatter.(null) <stripped>

	// Swift methods
	0x1353e0  func <stripped> // getter 
	0x1354c0  func <stripped> // method 
	0x135380  class func MedicationDispenseFormatter.__allocating_init(store:context:) // init 
	0x135620  func <stripped> // method 
 }

 class HealthRecordsUI.HealthRecordsNotAvailableViewController : UIAlertController /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x12e0c00066568 (0x60c00066568) in binary!
	0x197a0  @objc HealthRecordsNotAvailableViewController.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe4ec8  @objc HealthRecordsNotAvailableViewController.(null) <stripped>

	// Swift methods
	0x1364f0  class func <stripped> // method 
 }

 enum HealthRecordsUI.BrowseCategoryError {

	// Properties
	case decodeFailure : (rawValue: String)
 }

 enum HealthRecordsUI.BrowseCategory {

	// Properties
	case subcategory : Kind
WARNING: couldn't find address 0x0 (0x0) in binary!
	case account : O
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
WARNING: couldn't find address 0x143e4000658c0 (0x3e4000658c0) in binary!
	0x1b5d8  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x143cc00065c48 (0x3cc00065c48) in binary!
	0x1b5c0  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x143b400065898 (0x3b400065898) in binary!
	0x1b5a8  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x193dc00065928 (0x3dc00065928) in binary!
	0x193d0  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x1325400069758 (0x25400069758) in binary!
	0x1ae6f  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x193ac00066420 (0x3ac00066420) in binary!
	0x1b560  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x133c800066380 (0x3c800066380) in binary!
	0x196d8  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x1937c00065098 (0x37c00065098) in binary!
	0x28000000c  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x18d0400069420 (0x50400069420) in binary!
	0x14318  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x5e4fffe72c0  @objc ConceptHeaderCell.(null) <stripped>
	0xfffe79a8  @objc ConceptHeaderCell.ƒHã0¯ <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x7b4fffeabf0  @objc ConceptHeaderCell.(null) <stripped>
	0x2d4fffeacb8  @objc ConceptHeaderCell. <stripped>
	0x29c00066200  @objc ConceptHeaderCell.â«Ëù— <stripped>
WARNING: couldn't find address 0xfffea758 (0xfffea758) in binary!
	0x28400066138  @objc ConceptHeaderCell.(null) <stripped>

	// Swift methods
	0x13c570  func <stripped> // getter 
	0x13c6c0  func <stripped> // getter 
	0x13c700  func <stripped> // setter 
	0x13c7b0  func <stripped> // modifyCoroutine 
	0x13c8a0  func <stripped> // getter 
	0x13c950  func <stripped> // setter 
	0x13ca00  func <stripped> // modifyCoroutine 
	0x13caf0  func <stripped> // getter 
	0x13cbe0  func <stripped> // setter 
	0x13ccd0  func <stripped> // modifyCoroutine 
	0x13d700  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartSeries : HKBloodPressureSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x18d0400069420 (0x50400069420) in binary!
	0x14318  @objc BloodPressureChartSeries.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x5e4fffe72c0  @objc BloodPressureChartSeries.(null) <stripped>
 }

 class HealthRecordsUI.ProfileOnboardingActionViewController {
 class HealthRecordsUI.OnboardingTableViewCell {
 class HealthRecordsUI.ProviderNotFoundView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let glyphView : UIView
	let providerStatusLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x13cd400065c10 (0x4d400065c10) in binary!
	0x19688  @objc ProviderNotFoundView.(null) <stripped>
WARNING: couldn't find address 0x1932c00065048 (0x32c00065048) in binary!
	0x48000000c  @objc ProviderNotFoundView.(null) <stripped>
WARNING: couldn't find address 0x12b44000662f8 (0x344000662f8) in binary!
	0x13d9e  @objc ProviderNotFoundView.(null) <stripped>

	// Swift methods
	0x13f2f0  func <stripped> // method 
 }

 class HealthRecordsUI.RecordKindDataProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RecordKindDataProviderProtocol {

	// Properties
	let healthStore : HKHealthStore
	let queue : OS_dispatch_queue

	// Swift methods
	0x13fa10  class func RecordKindDataProvider.__allocating_init(healthStore:) // init 
	0x13fbe0  func <stripped> // method 
	0x140370  func <stripped> // method 
	0x141350  func <stripped> // method 
 }

 class HealthRecordsUI.CategoryViewControllerManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var activeCategoryViewController : weak UIViewController?

	// Swift methods
	0x141bc0  func <stripped> // method 
	0x142290  func <stripped> // method 
 }

 class HealthRecordsUI.Features : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1429c00066200 (0x29c00066200) in binary!
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
	0x143d50  class func <stripped> // method 
	0x143e00  class func <stripped> // method 
	0x143e10  class func <stripped> // method 
 }

 struct HealthRecordsUI.RecordKindFeedItemIdentifierFactory { }

 enum HealthRecordsUI.PrivacyInteractionType { }

 enum HealthRecordsUI.PrivacyInteractionContext { }

 class HealthRecordsUI.RecordPrimaryTitleCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let recordTitleLabel : UILabel
	let recordDateLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x141a4000664f8 (0x1a4000664f8) in binary!
	0x14198  @objc RecordPrimaryTitleCell.(null) <stripped>
	0x19510  -[HKMedicalRecord(Displayable) titleDisplayStringForDetailViewController]
WARNING: couldn't find address 0x191b400064ed0 (0x1b400064ed0) in binary!
	0x58000000c  @objc RecordPrimaryTitleCell.(null) <stripped>
WARNING: couldn't find address 0x1415c00065160 (0x15c00065160) in binary!
	0x1b350  @objc RecordPrimaryTitleCell.(null) <stripped>
WARNING: couldn't find address 0x131b800066170 (0x1b800066170) in binary!
	0x194c8  @objc RecordPrimaryTitleCell.(null) <stripped>

	// Swift methods
	0x144d60  func <stripped> // method 
 }

 class HealthRecordsUI.RecordDetailItemCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let bodyLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x141ec00065820 (0x1ec00065820) in binary!
	0x141e0  @objc RecordDetailItemCell.(null) <stripped>
WARNING: couldn't find address 0x1324800066200 (0x24800066200) in binary!
	0x19558  @objc RecordDetailItemCell.(null) <stripped>
WARNING: couldn't find address 0x191fc00064f18 (0x1fc00064f18) in binary!
	0x58000000c  @objc RecordDetailItemCell.(null) <stripped>
WARNING: couldn't find address 0x141a4000664f8 (0x1a4000664f8) in binary!
	0x14198  @objc RecordDetailItemCell.(null) <stripped>
	0x19510  -[HKMedicalRecord(Displayable) titleDisplayStringForDetailViewController]

	// Swift methods
	0x145470  func <stripped> // method 
 }

 class HealthRecordsUI.RecordReferenceRangeCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let referenceRangeView : HKReferenceRangeView // +0x8 (0x8)
	var valueInRange : HKInspectableValueInRange? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1415c00065160 (0x15c00065160) in binary!
	0x1b350  @objc RecordReferenceRangeCell.(null) <stripped>
WARNING: couldn't find address 0x131b800066170 (0x1b800066170) in binary!
	0x194c8  @objc RecordReferenceRangeCell.(null) <stripped>
WARNING: couldn't find address 0x1916c00064e88 (0x16c00064e88) in binary!
	0x18000000c  @objc RecordReferenceRangeCell.(null) <stripped>
WARNING: couldn't find address 0x1411400065fa8 (0x11400065fa8) in binary!
	0x88000000c  @objc RecordReferenceRangeCell.(null) <stripped>
WARNING: couldn't find address 0x140fc00069528 (0xfc00069528) in binary!
	0x140f0  @objc RecordReferenceRangeCell.(null) <stripped>

	// Swift methods
	0x145ac0  func <stripped> // getter 
	0x145b50  func <stripped> // setter 
	0x145c00  func <stripped> // modifyCoroutine 
 }

 class HealthRecordsUI.RecordDataSourceCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let brandView : WDMedicalRecordBrandView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1329800066250 (0x29800066250) in binary!
	0x195a8  @objc RecordDataSourceCell.(null) <stripped>
WARNING: couldn't find address 0x1715c00066588 (0x15c00066588) in binary!
	0x19240  @objc RecordDataSourceCell.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x544fffed298  @objc RecordDataSourceCell.(null) <stripped>
	0x4b4fffed330  @objc RecordDataSourceCell.Hã5	ú <stripped>

	// Swift methods
	0x146070  func <stripped> // method 
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
	let lock : K

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x140fc00069528 (0xfc00069528) in binary!
	0x140f0  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x1b2e4000655e0 (0x2e4000655e0) in binary!
	0x140d8  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x1b2cc00068778 (0x2cc00068778) in binary!
	0x19450  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x19444000655c0 (0x444000655c0) in binary!
	0x190e8  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x5e4ffff24a0  @objc ProfileManager.(null) <stripped>
	0x0  @objc ProfileManager.â«Aˇ◊Hâ«ËÔk <stripped>
WARNING: couldn't find address 0x3fd3333333333333 (0x33333333333) in binary!
	0x0  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x0  @objc ProfileManager.(null) <stripped>

	// Swift methods
	0x148e40  func <stripped> // getter 
	0x149000  func <stripped> // getter 
	0x1490a0  func <stripped> // setter 
	0x1491a0  func <stripped> // modifyCoroutine 
	0x149770  func <stripped> // method 
	0x149890  func <stripped> // method 
	0x149a80  func <stripped> // method 
	0x149c50  func <stripped> // method 
 }

 class HealthRecordsUI.ProcedureRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1409400065ff8 (0x9400065ff8) in binary!
	0x190c8  @objc ProcedureRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x4014000000000000 (0x0) in binary!
	0x33333333333  @objc ProcedureRecordFormatter.(null) <stripped>

	// Swift methods
	0x14a510  class func ProcedureRecordFormatter.__allocating_init(store:context:) // init 
	0x14a610  func <stripped> // method 
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
