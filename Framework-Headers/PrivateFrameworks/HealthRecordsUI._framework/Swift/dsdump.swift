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
	var width : ›7
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ›7
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : ›7
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ›7
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
	let conceptId : ;B
	let title : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let meaningfulDate : I7
 }

 class HealthRecordsUI.SingleValueAnnotationViewDataSource : MedicalRecordAnnotationViewDataSource {

	// Properties
	let referenceRangeView : HKReferenceRangeView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15be400069158 (0x3e400069158) in binary!
	0x1b2a8  @objc SingleValueAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x1cffc00069958 (0x7fc00069958) in binary!
	0x14a50  @objc SingleValueAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x1ae2400067f10 (0x62400067f10) in binary!
	0x28000000c  @objc SingleValueAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x15b9c00069110 (0x39c00069110) in binary!
	0x1ae00  @objc SingleValueAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x1acfff0bb88  @objc SingleValueAnnotationViewDataSource.(null) <stripped>

	// Swift methods
	0x60e10  func <stripped> // method 
	0x60ec0  func <stripped> // method 
	0x60f10  func <stripped> // method 
	0x61620  func <stripped> // method 
 }

 class HealthRecordsUI.SingleValueChartData : HKInteractiveChartSinglePointData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let chartableQuantitySet : HKChartableCodedQuantitySet // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : 55 // +0x3 (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x3e (0x8)
	let hasTime : Bool // +0x6100085 (0x1)
	let partOfOutOfRangeSeries : Bool // +0xfeedfacf (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15b9c00069110 (0x39c00069110) in binary!
	0x1ae00  @objc SingleValueChartData.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x1acfff0bb88  @objc SingleValueChartData.(null) <stripped>

	// Swift methods
	0x61fa0  class func SingleValueChartData.__allocating_init(chartableQuantitySet:date:dateFormat:hasTime:partOfOutOfRangeSeries:) // init 
	0x62030  func <stripped> // method 
 }

 class HealthRecordsUI.LoadingTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containerView : UIView
	let spinner : UIActivityIndicatorView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15b7c000690f0 (0x37c000690f0) in binary!
	0x14be4  @objc LoadingTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1b12400069460 (0x12400069460) in binary!
	0x1adc8  @objc LoadingTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x17cfff0d440  @objc LoadingTableViewCell.(null) <stripped>
	0x174fff0d518  @objc LoadingTableViewCell. <stripped>

	// Swift methods
	0x63c10  class func <stripped> // getter 
	0x63ec0  func <stripped> // method 
	0x63ee0  func <stripped> // method 
	0x63f00  func <stripped> // method 
 }

 class HealthRecordsUI.Box {
 enum HealthRecordsUI.IconStyle {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case opaque : O5
	case template : UIColor
	case default  
 }

 class HealthRecordsUI.InternalAllFeedForProfileViewController {
 class HealthRecordsUI.AllFeedForProfileDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var store : √9
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sourceProfile : ì5

	// Swift methods
	0x65f40  func <stripped> // getter 
	0x65f80  func <stripped> // setter 
	0x65fd0  func <stripped> // modifyCoroutine 
	0x65d90  class func AllFeedForProfileDataSourceProvider.__allocating_init(sourceProfile:store:) // init 
	0x66150  func <stripped> // method 
	0x66230  func <stripped> // method 
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
	case custom : )4
	case small  
	case medium  
	case large  
 }

 struct HealthRecordsUI.AccountErrorFeedItemViewData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let accountId : =3
	let title : String
	let subtitle : String
	let state : HKClinicalAccountState
 }

 class HealthRecordsUI.TapToRadarManager : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15ac400069038 (0x2c400069038) in binary!
	0x28000000c  @objc TapToRadarManager.(null) <stripped>
 }

 struct HealthRecordsUI.SyncTaskScheduler: TaskScheduler { }

 class HealthRecordsUI.DiagnosticTestResultFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15aac00069020 (0x2ac00069020) in binary!
	0x1ad10  @objc DiagnosticTestResultFormatter.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff15518  @objc DiagnosticTestResultFormatter.(null) <stripped>

	// Swift methods
	0x6a920  class func DiagnosticTestResultFormatter.__allocating_init(store:context:) // init 
	0x6a9e0  func <stripped> // method 
 }

 class HealthRecordsUI.InternalConceptsFeedViewController {
 struct HealthRecordsUI.AccountViewData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let accountId : =3
	let title : String
	let subtitle : String?
 }

 class HealthRecordsUI.AccountView {
 class HealthRecordsUI.ClinicalSourcesDataProvider : WDClinicalSourcesDataProvider {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1b04c0006b830 (0x4c0006b830) in binary!
	0x78000000c  @objc ClinicalSourcesDataProvider.(null) <stripped>
 }

 class HealthRecordsUI.InternalStateViewController : UITableViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var dataProvider : InternalStateProvider
	var sections : InternalStateSection
	var profile : HRProfile

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1b03400069370 (0x3400069370) in binary!
	0x1acd8  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x1accc00068778 (0x4cc00068778) in binary!
	0x15526  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x16af4000686c8 (0x2f4000686c8) in binary!
	0x14428  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x1ac9c00067d88 (0x49c00067d88) in binary!
	0x58000000c  @objc InternalStateViewController.(null) <stripped>
	0x1af2c  -[HKDiagnosticTestReport(Displayable) title]
WARNING: couldn't find address 0x16a800006a5f0 (0x2800006a5f0) in binary!
	0x1ad4c  @objc InternalStateViewController.(null) <stripped>
WARNING: couldn't find address 0x143d400067db8 (0x3d400067db8) in binary!
	0x28000000c  @objc InternalStateViewController.(null) <stripped>

	// Swift methods
	0x6dd00  func <stripped> // method 
 }

 class HealthRecordsUI.Cell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14a4000069008 (0x24000069008) in binary!
	0x1af80  @objc Cell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x674fff1b808  @objc Cell.(null) <stripped>

	// Swift methods
	0x6d780  class func <stripped> // getter 
	0x6d8a0  func <stripped> // method 
 }

 class HealthRecordsUI.FeedItemListViewController {
 class HealthRecordsUI.FeedItemListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
	let sortDescriptors : [NSSortDescriptor]
WARNING: couldn't find address 0x0 (0x0) in binary!
	let store : √9

	// Swift methods
	0x6fe20  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateSection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let title : String
	let items : InternalStateItem

	// Swift methods
	0x72740  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let title : String
	let value : String

	// Swift methods
	0x72c80  func <stripped> // method 
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
WARNING: couldn't find address 0x144ac0006bee8 (0x4ac0006bee8) in binary!
	0x1af60  @objc SingleValueDataTransformer.(null) <stripped>
WARNING: couldn't find address 0x144b40006be88 (0x4b40006be88) in binary!
	0x18000000c  @objc SingleValueDataTransformer.(null) <stripped>
WARNING: couldn't find address 0x141ec0006c198 (0x1ec0006c198) in binary!
	0x18000000c  @objc SingleValueDataTransformer.(null) <stripped>

	// Swift methods
	0x73990  func <stripped> // method 
	0x73c70  func <stripped> // method 
	0x73cd0  func <stripped> // method 
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
WARNING: couldn't find address 0x1594c00068ec0 (0x14c00068ec0) in binary!
	0x1abb0  @objc ConditionRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff27cb8  @objc ConditionRecordFormatter.(null) <stripped>

	// Swift methods
	0x7e5e0  class func ConditionRecordFormatter.__allocating_init(store:context:) // init 
	0x7e6a0  func <stripped> // method 
 }

 class HealthRecordsUI.TimelineHeaderView : UITableViewHeaderFooterView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : weak HRTimelineHeaderViewDelegate?
	var $__lazy_storage_$_titleLabel : UILabel?
	var $__lazy_storage_$_subtitleLabel : UILabel?
	var $__lazy_storage_$_backgroundEffectView : UIVisualEffectView?
	var $__lazy_storage_$_separatorView : UIView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x159140006a328 (0x1140006a328) in binary!
	0x1cd38  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1aebc0006a678 (0x6bc0006a678) in binary!
	0x1aeb0  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x19abe0006a838 (0x2be0006a838) in binary!
	0x1cd08  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1ab3c000684e8 (0x33c000684e8) in binary!
	0x14130  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1538a0006ba60 (0x38a0006ba60) in binary!
	0x1ab18  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1524c00069d00 (0x24c00069d00) in binary!
	0x1ccc0  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1aaf400067be0 (0x2f400067be0) in binary!
	0x28000000c  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1586c00068de0 (0x6c00068de0) in binary!
	0x1aad0  @objc TimelineHeaderView.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x404fff2aa08  @objc TimelineHeaderView.(null) <stripped>
	0x3fcfff2aa80  @objc TimelineHeaderView.d∞ <stripped>
	0x3ccfff2ab38  @objc TimelineHeaderView. <stripped>
	0x56cfff2ac50  @objc TimelineHeaderView.ˆAˇ‘Hâ«Ë¯º <stripped>
	0xfff2af18  @objc TimelineHeaderView.5À¡ <stripped>

	// Swift methods
	0x80090  class func <stripped> // getter 
	0x80100  func <stripped> // getter 
	0x80180  func <stripped> // setter 
	0x80250  func <stripped> // modifyCoroutine 
	0x80320  func <stripped> // getter 
	0x80340  func <stripped> // getter 
	0x80470  func <stripped> // getter 
	0x80520  func <stripped> // getter 
	0x80780  func <stripped> // method 
	0x808b0  func <stripped> // method 
	0x80a30  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartabilityResult : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let configuration : MedicalRecordChartConfiguration // +0x8 (0x8)
	let masterDataSource : MedicalRecordChartDataSource // +0x10 (0x8)
	let seriesDataSources : MedicalRecordChartDataSource // +0x18 (0x8)
	let outOfRangeDataSource : MedicalRecordChartDataSource // +0x20 (0x8)
	let noRangeDataSource : MedicalRecordChartDataSource // +0x28 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let latestChartableDate : I7 // +0x19a000 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1584c00068c00 (0x4c00068c00) in binary!
	0x15840  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x1583400068c00 (0x3400068c00) in binary!
	0x15828  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x1581c00068bf8 (0x1c00068bf8) in binary!
	0x15810  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x1407400068bb0 (0x7400068bb0) in binary!
	0x157f8  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x1aa5c00067b48 (0x25c00067b48) in binary!
	0x28000000c  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x1575400068bc0 (0x75400068bc0) in binary!
	0x157c8  @objc MedicalRecordChartabilityResult.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x18cfff39020  @objc MedicalRecordChartabilityResult.(null) <stripped>
	0x504fff39088  @objc MedicalRecordChartabilityResult.˜ËÃ‘ <stripped>
	0x6a370  @objc MedicalRecordChartabilityResult. <stripped>

	// Swift methods
	0x831a0  func <stripped> // getter 
	0x83220  class func MedicalRecordChartabilityResult.__allocating_init(configuration:masterDataSource:seriesDataSources:outOfRangeDataSource:noRangeDataSource:latestChartableDate:) // init 
 }

 class HealthRecordsUI.MedicalRecordChartabilityDeterminer : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1575400068bc0 (0x75400068bc0) in binary!
	0x157c8  @objc MedicalRecordChartabilityDeterminer.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x18cfff39020  @objc MedicalRecordChartabilityDeterminer.(null) <stripped>

	// Swift methods
	0x834b0  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeriesCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let concept : HKConcept // +0x10 (0x8)
	var preferredColors : HKUIMetricColors? // +0x18 (0x8)
	var chartableQuantitySets : [HKChartableCodedQuantitySet] // +0x20 (0x8)

	// Swift methods
	0x85240  class func MedicalRecordChartableSeriesCollector.__allocating_init(concept:) // init 
	0x85370  func <stripped> // method 
	0x855f0  func <stripped> // getter 
	0x85880  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartableSeries : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let concept : HKConcept
	let chartableQuantitySets : [HKChartableCodedQuantitySet]
	let preferredColors : HKUIMetricColors?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1586c00068de0 (0x6c00068de0) in binary!
	0x1aad0  @objc MedicalRecordChartableSeries.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x404fff2aa08  @objc MedicalRecordChartableSeries.(null) <stripped>

	// Swift methods
	0x85ff0  func <stripped> // getter 
	0x85ed0  class func MedicalRecordChartableSeries.__allocating_init(concept:chartableQuantities:unit:preferredColors:) // init 
	0x86270  func <stripped> // method 
	0x86370  func <stripped> // method 
	0x86390  func <stripped> // method 
 }

 struct HealthRecordsUI.UnboundedCache: Cache {

	// Properties
	let storageBox : Box
	let lowMemoryWarnings : Any
	let didEnterBackground : Any
 }

 class HealthRecordsUI.SingleValueChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1b43400068bb8 (0x43400068bb8) in binary!
	0x14018  @objc SingleValueChartConfiguration.(null) <stripped>
WARNING: couldn't find address 0x1579c0006b978 (0x79c0006b978) in binary!
	0x15790  @objc SingleValueChartConfiguration.(null) <stripped>
WARNING: couldn't find address 0x138000000c (0x138000000c) in binary!
	0x36cfffa9278  @objc SingleValueChartConfiguration.(null) <stripped>
	0x4acfffa9390  @objc SingleValueChartConfiguration.Aˇ÷HãE–Hã@(HâE–Lã=.ü <stripped>

	// Swift methods
	0x91540  func <stripped> // getter 
	0x91590  func <stripped> // getter 
	0x915d0  func <stripped> // getter 
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
	0x1aacc  @objc SettingsViewController.ã5Íj <stripped>
WARNING: couldn't find address 0x1ac8800067b30 (0x48800067b30) in binary!
	0x1ac7c  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1413c00067b20 (0x13c00067b20) in binary!
	0x187d0  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x187c4000680f0 (0x7c4000680f0) in binary!
	0x19902  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1527d00067c98 (0x27d00067c98) in binary!
	0x1acd0  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a97400069d00 (0x17400069d00) in binary!
	0x1a968  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x151c200069010 (0x1c200069010) in binary!
	0x1cb10  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1607400067d88 (0x7400067d88) in binary!
	0x16079  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1676c00068340 (0x76c00068340) in binary!
	0x140a0  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a91400067a00 (0x11400067a00) in binary!
	0x28000000c  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1cabc000681b0 (0x2bc000681b0) in binary!
	0x1a8f0  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x44fff3faa8  @objc SettingsViewController.(null) <stripped>
	0x3bcfff3fb10  @objc SettingsViewController.tcHã5?Œ <stripped>
	0x1540006a638  @objc SettingsViewController.ã=⁄Û <stripped>
WARNING: couldn't find address 0x68f24fff3fd40 (0x724fff3fd40) in binary!
	0x8c00068338  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x6a204fff40588 (0x204fff40588) in binary!
	0x32800067b50  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x6a1f4fff40830 (0x1f4fff40830) in binary!
	0x7dc000679c0  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x679ccfff41468 (0x1ccfff41468) in binary!
	0x66b00067998  @objc SettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x67b24fff41680 (0x324fff41680) in binary!
	0x2c0006b850  @objc SettingsViewController.(null) <stripped>

	// Swift methods
	0x920e0  class func SettingsViewController.__allocating_init(with:) // init 
	0x93240  func <stripped> // method 
	0x93fd0  func <stripped> // getter 
	0x94000  func <stripped> // getter 
	0x94060  func <stripped> // method 
 }

 class HealthRecordsUI.AccountErrorManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x96cb0  func <stripped> // method 
	0x97420  func <stripped> // method 
 }

 enum HealthRecordsUI.OnboardingFunnelSteps { }

 enum HealthRecordsUI.OnboardingFunnelContext { }

 class HealthRecordsUI.BloodPressureChartConfiguration : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1b2ec00068a70 (0x2ec00068a70) in binary!
	0x13ed0  @objc BloodPressureChartConfiguration.(null) <stripped>
WARNING: couldn't find address 0x156540006b830 (0x6540006b830) in binary!
	0x15648  @objc BloodPressureChartConfiguration.(null) <stripped>
WARNING: couldn't find address 0xf8000000c (0xf8000000c) in binary!
	0x724fff3fd40  @objc BloodPressureChartConfiguration.(null) <stripped>
	0x204fff40588  @objc BloodPressureChartConfiguration.~ Hã5üf <stripped>

	// Swift methods
	0x98110  func <stripped> // getter 
	0x98160  func <stripped> // getter 
	0x981b0  func <stripped> // getter 
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
	let defaultSectionContentInset : ›7
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultSectionCornerRadius : ›7

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x141540006a638 (0x1540006a638) in binary!
	0x1abe8  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a88c00068338 (0x8c00068338) in binary!
	0x16694  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1ab2800067b50 (0x32800067b50) in binary!
	0x1a954  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x13fdc000679c0 (0x7dc000679c0) in binary!
	0x197ba  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1666b00067998 (0x66b00067998) in binary!
	0x1665f  @objc FilterSettingsViewController.(null) <stripped>
	0x15f61  -[WDMedicalRecordBrandLogoCell dataProvider]
WARNING: couldn't find address 0x1665400068228 (0x65400068228) in binary!
	0x13f88  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1a7fc000678e8 (0x7fc000678e8) in binary!
	0x28000000c  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x1557400068ae8 (0x57400068ae8) in binary!
	0x1a7d8  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff47f50  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x62cfff47f98  @objc FilterSettingsViewController.(null) <stripped>
	0xfff482b0  @objc FilterSettingsViewController.âƒHçâ <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff483a8  @objc FilterSettingsViewController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x44fff4c5d0  @objc FilterSettingsViewController.(null) <stripped>
	0x4d400068a48  @objc FilterSettingsViewController.ˇˇHâ∏ <stripped>

	// Swift methods
	0x98310  class func FilterSettingsViewController.__allocating_init(withDelegate:selectedCategories:selectedAccounts:) // init 
	0x99d80  func <stripped> // method 
	0x99fc0  func <stripped> // method 
	0x9a200  func <stripped> // method 
	0x9a230  func <stripped> // method 
	0x9a440  func <stripped> // method 
	0x9a460  func <stripped> // method 
	0x9a5e0  func <stripped> // method 
 }

 class HealthRecordsUI.CoverageRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_classificationFormatter : CoverageClassificationFormatter
	var $__lazy_storage_$_identifierFormatter : CoverageIdentifierFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1557400068ae8 (0x57400068ae8) in binary!
	0x1a7d8  @objc CoverageRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff47f50  @objc CoverageRecordFormatter.(null) <stripped>

	// Swift methods
	0x9cb80  func <stripped> // getter 
	0x9cc60  func <stripped> // getter 
	0x9cd70  func <stripped> // method 
	0x9d530  class func CoverageRecordFormatter.__allocating_init(store:context:) // init 
	0x9d610  func <stripped> // method 
 }

 class HealthRecordsUI.AddAccountTableViewCell : HRStandardTableViewCell {

	// Properties
	var alignWithAccountTitle : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x145b000068b78 (0x5b000068b78) in binary!
	0x1aaf0  @objc AddAccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a79400069a28 (0x79400069a28) in binary!
	0x18000000c  @objc AddAccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x13d7c0006b810 (0x57c0006b810) in binary!
	0x28000000c  @objc AddAccountTableViewCell.(null) <stripped>

	// Swift methods
	0xa0870  func <stripped> // method 
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
	0xa2b30  class func CategoryCountDataProvider.__allocating_init(healthStore:) // init 
	0xa2b70  func <stripped> // method 
 }

 class HealthRecordsUI.AllergyRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_reactionFormatter : AllergyReactionFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x154f400068a68 (0x4f400068a68) in binary!
	0x1a758  @objc AllergyRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x24fff4e560  @objc AllergyRecordFormatter.(null) <stripped>

	// Swift methods
	0xa45c0  func <stripped> // getter 
	0xa46a0  func <stripped> // method 
	0xa47b0  class func AllergyRecordFormatter.__allocating_init(store:context:) // init 
	0xa4870  func <stripped> // method 
	0xa48d0  func <stripped> // method 
 }

 struct HealthRecordsUI.CategorySummaryFeedItemIdentifierFactory { }

 class HealthRecordsUI.MedicationOrderFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x154d400068a48 (0x4d400068a48) in binary!
	0x1a738  @objc MedicationOrderFormatter.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x114fff50140  @objc MedicationOrderFormatter.(null) <stripped>

	// Swift methods
	0xa6630  func <stripped> // getter 
	0xa6710  func <stripped> // method 
	0xa6810  class func MedicationOrderFormatter.__allocating_init(store:context:) // init 
	0xa68d0  func <stripped> // method 
	0xa6930  func <stripped> // method 
 }

 class HealthRecordsUI.InternalAllHealthRecordsFeedViewController {
 class HealthRecordsUI.HealthRecordsFeedDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var store : √9
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sourceProfile : ì5

	// Swift methods
	0xa8060  func <stripped> // getter 
	0xa80a0  func <stripped> // setter 
	0xa80f0  func <stripped> // modifyCoroutine 
	0xa7eb0  class func HealthRecordsFeedDataSourceProvider.__allocating_init(sourceProfile:store:) // init 
	0xa81a0  func <stripped> // method 
	0xa81f0  func <stripped> // method 
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
WARNING: couldn't find address 0x1547c000689f0 (0x47c000689f0) in binary!
	0x1a6e0  @objc MedicationDosageFormatter.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x24cfff58858  @objc MedicationDosageFormatter.(null) <stripped>

	// Swift methods
	0xac320  func <stripped> // method 
	0xac330  func <stripped> // method 
	0xac2d0  class func MedicationDosageFormatter.__allocating_init(store:context:) // init 
	0xac460  func <stripped> // method 
 }

 enum HealthRecordsUI.HealthRecordsURLParsingResult {

	// Properties
	case onboarding : (gatewayID: String, batchID: String)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case onboardingParsingError : c0
WARNING: couldn't find address 0x0 (0x0) in binary!
	case loginRedirectSuccess :  first-element-marker 
WARNING: couldn't find address 0x0 (0x0) in binary!
	case loginRedirectError : c0
	case unrecognized  
	case viewHealthRecords  
	case startProviderSearch  
	case loginRedirectAccessNotGranted  
 }

 class HealthRecordsUI.HealthRecordsURLHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xaf140  class func HealthRecordsURLHandler.__allocating_init() // init 
	0xaf170  func <stripped> // method 
 }

 class HealthRecordsUI.RecordCategoryViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let category : DisplayCategory
	let healthRecordsStore : HKHealthRecordsStore
	var preferredSegment : ModeSegment
	let factory : HRCategoryViewControllerFactory
	let countProvider : CategoryCountProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var recordCanceller : +
WARNING: couldn't find address 0x0 (0x0) in binary!
	var aToZCanceller : +
	var recordCount : Int
	var currentViewController : UIViewController?
	var displayMode : DisplayMode
	var isModePickerHidden : Bool
	var $__lazy_storage_$_modePicker : UISegmentedControl?
	var $__lazy_storage_$_navigationPalette : _UINavigationBarPalette?
	var $__lazy_storage_$_lastUpdatedViewController : UIViewController?
	var $__lazy_storage_$_alphabeticalViewController : UIViewController?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1aa1c00068d58 (0x21c00068d58) in binary!
	0x1a6c0  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x1a6b400068160 (0x6b400068160) in binary!
	0x1a6a8  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x1c85c0006b848 (0x5c0006b848) in binary!
	0x1c850  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x13e0400068b70 (0x60400068b70) in binary!
	0x1a678  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x74fff5c650  @objc RecordCategoryViewController.(null) <stripped>
	0xfff5c778  @objc RecordCategoryViewController.◊Iâ˛Hâ˜ˇ{ <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff5eb60  @objc RecordCategoryViewController.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x49cfff5ec48  @objc RecordCategoryViewController.(null) <stripped>

	// Swift methods
	0xb16e0  func <stripped> // method 
	0xb1950  func <stripped> // method 
	0xb21e0  func <stripped> // method 
	0xb22a0  func <stripped> // method 
	0xb2380  func <stripped> // method 
	0xb2990  func <stripped> // method 
	0xb2c50  func <stripped> // getter 
	0xb2cb0  func <stripped> // getter 
	0xb2d90  func <stripped> // getter 
	0xb2f50  func <stripped> // getter 
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
WARNING: couldn't find address 0x1a9b400068cf0 (0x1b400068cf0) in binary!
	0x1a658  @objc NoDataViewController.(null) <stripped>
WARNING: couldn't find address 0x13dcc00068b38 (0x5cc00068b38) in binary!
	0x18000000c  @objc NoDataViewController.(null) <stripped>
WARNING: couldn't find address 0x153c400068888 (0x3c400068888) in binary!
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
	0xb5ff0  func <stripped> // getter 
	0xb6120  func <stripped> // getter 
	0xb6160  func <stripped> // setter 
	0xb61a0  func <stripped> // modifyCoroutine 
	0xb5f00  class func CancellationToken.__allocating_init(cancelBlock:) // init 
	0xb64a0  func <stripped> // method 
 }

 class HealthRecordsUI.PromotionListViewController {
 class HealthRecordsUI.PromotionListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let predicate : NSPredicate
WARNING: couldn't find address 0x0 (0x0) in binary!
	var store : √9

	// Swift methods
	0xb6880  func <stripped> // getter 
	0xb68c0  func <stripped> // setter 
	0xb6910  func <stripped> // modifyCoroutine 
	0xb6700  class func PromotionListViewDataSourceProvider.__allocating_init(predicate:store:) // init 
	0xb6990  func <stripped> // method 
	0xb69f0  func <stripped> // method 
 }

 class HealthRecordsUI.AccountErrorTableViewCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let accountErrorView : AccountErrorFeedItemView // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14420000689e8 (0x420000689e8) in binary!
	0x1a960  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a60400069178 (0x60400069178) in binary!
	0x14d38  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1c7ac00068e58 (0x7ac00068e58) in binary!
	0x1a5e0  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a5d400067f80 (0x5d400067f80) in binary!
	0x179e2  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a5bc000676a8 (0x5bc000676a8) in binary!
	0x18000000c  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1c7640006a2b8 (0x7640006a2b8) in binary!
	0x68000000c  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a8dc00069c20 (0xdc00069c20) in binary!
	0x1a8d0  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a57400069900 (0x57400069900) in binary!
	0x17a03  @objc AccountErrorTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x152ec00068860 (0x2ec00068860) in binary!
	0x1a550  @objc AccountErrorTableViewCell.(null) <stripped>

	// Swift methods
	0xb7480  class func <stripped> // getter 
	0xb75e0  func <stripped> // method 
 }

 class HealthRecordsUI.InternalStateProvider : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let conceptStore : HKConceptStore
	let healthRecordsStore : HKHealthRecordsStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	let healthExperienceStore : √9
	var recordCounts : DisplayCategory
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sub : +
	var loadState : LoadState
	var changeHandler : InternalStateProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var isObserving : o%

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a8dc00069c20 (0xdc00069c20) in binary!
	0x1a8d0  @objc InternalStateProvider.(null) <stripped>
WARNING: couldn't find address 0x1a57400069900 (0x57400069900) in binary!
	0x17a03  @objc InternalStateProvider.(null) <stripped>
WARNING: couldn't find address 0x152ec00068860 (0x2ec00068860) in binary!
	0x1a550  @objc InternalStateProvider.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x16cfff63748  @objc InternalStateProvider.(null) <stripped>
	0x68c00069020  @objc InternalStateProvider.ÉÏHãSü <stripped>
WARNING: couldn't find address 0x68814fff66e78 (0x14fff66e78) in binary!
	0x18000000c  @objc InternalStateProvider.(null) <stripped>

	// Swift methods
	0xb87a0  func <stripped> // method 
	0xb9c10  func <stripped> // method 
	0xba1a0  func <stripped> // method 
	0xbb510  func <stripped> // method 
 }

 class HealthRecordsUI.SuggestedActionTileViewControllerShim {
 class HealthRecordsUI.OnboardingSuggestedActionViewController {
 class HealthRecordsUI.BloodPressureCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x17e8c00069020 (0x68c00069020) in binary!
	0x152a0  @objc BloodPressureCurrentValueViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff688d8  @objc BloodPressureCurrentValueViewDataSource.(null) <stripped>
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
WARNING: couldn't find address 0x15274000686f8 (0x274000686f8) in binary!
	0x18078  @objc MedicalRecordChartDataSource.(null) <stripped>
WARNING: couldn't find address 0x1808c00067c30 (0x8c00067c30) in binary!
	0x1a810  @objc MedicalRecordChartDataSource.(null) <stripped>
WARNING: couldn't find address 0x15244000687b8 (0x244000687b8) in binary!
	0x1a4a8  @objc MedicalRecordChartDataSource.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x734fff76910  @objc MedicalRecordChartDataSource.(null) <stripped>
	0x424fff770b8  @objc MedicalRecordChartDataSource.<n <stripped>
	0x5bcfff77150  @objc MedicalRecordChartDataSource.Hã©Ë <stripped>

	// Swift methods
	0xc6770  func <stripped> // getter 
	0xc67f0  func <stripped> // getter 
	0xc6850  func <stripped> // getter 
	0xc6950  func <stripped> // getter 
	0xc6a70  func <stripped> // getter 
	0xc64f0  class func MedicalRecordChartDataSource.__allocating_init(concept:dataTransformer:unit:preferredColors:collapseIntoRangePoints:type:) // init 
	0xc6f70  func <stripped> // method 
	0xc7470  func <stripped> // method 
	0xc7740  func <stripped> // method 
	0xc7a70  func <stripped> // method 
	0xc7c80  func <stripped> // method 
	0xc83a0  func <stripped> // method 
 }

 class HealthRecordsUI.CategoryRecordQueryDescription : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SampleQueryDescription {

	// Properties
	let category : BrowseCategory // +0x24a0 (0x0)
	let sampleQueryDescription : HKSampleQueryDescription // +0x0 (0x8)

	// Swift methods
	0xce800  func <stripped> // getter 
	0xce830  func <stripped> // getter 
	0xce870  func <stripped> // method 
	0xce950  func <stripped> // getter 
 }

 enum HealthRecordsUI.ResultError {

	// Properties
	case unspecified  
 }

 class HealthRecordsUI.OnboardingTileViewController : HKTableViewController /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	let profile : HRProfile // +0x8 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a7e400068b20 (0x7e400068b20) in binary!
	0x1a488  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x1a47c0006b498 (0x47c0006b498) in binary!
	0x1c630  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x1a55000069df0 (0x55000069df0) in binary!
	0x13bd8  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x1826c00067a98 (0x26c00067a98) in binary!
	0x18260  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x15b750006b410 (0x3750006b410) in binary!
	0x16268  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x13b9c00068908 (0x39c00068908) in binary!
	0x1a410  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x4dcfff77ad8  @objc OnboardingTileViewController.(null) <stripped>
	0xec00067b48  @objc OnboardingTileViewController.¿ˇ—
 <stripped>
WARNING: couldn't find address 0x67b44fff79c48 (0x344fff79c48) in binary!
	0x154000686c8  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0xfff7a290 (0xfff7a290) in binary!
	0x13c00068eb8  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x67b1cfff7af18 (0x31cfff7af18) in binary!
	0x12400067b18  @objc OnboardingTileViewController.(null) <stripped>
WARNING: couldn't find address 0x67b14fff7b160 (0x314fff7b160) in binary!
	0x10c00067b10  @objc OnboardingTileViewController.(null) <stripped>

	// Swift methods
	0xcf2f0  class func OnboardingTileViewController.__allocating_init(with:) // init 
	0xcf920  func <stripped> // method 
 }

 class HealthRecordsUI.VaccinationRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1518c00068700 (0x18c00068700) in binary!
	0x1a3f0  @objc VaccinationRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x344fff79c48  @objc VaccinationRecordFormatter.(null) <stripped>

	// Swift methods
	0xd0440  class func VaccinationRecordFormatter.__allocating_init(store:context:) // init 
	0xd0500  func <stripped> // method 
 }

 class HealthRecordsUI.NotificationPolicy : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x150ec00067b48 (0xec00067b48) in binary!
	0x150e0  @objc NotificationPolicy.(null) <stripped>
WARNING: couldn't find address 0x15154000686c8 (0x154000686c8) in binary!
	0xc8000000c  @objc NotificationPolicy.(null) <stripped>
WARNING: couldn't find address 0x1513c00068eb8 (0x13c00068eb8) in binary!
	0x15130  @objc NotificationPolicy.(null) <stripped>

	// Swift methods
	0xd25b0  func <stripped> // method 
	0xd2810  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartPoint : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let chartableSet : HKChartableCodedQuantitySet
	let blockCoordinateInfo : SingleValueChartData
	let sortedYValues : [Double]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1513c00068eb8 (0x13c00068eb8) in binary!
	0x15130  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x1512400067b18 (0x12400067b18) in binary!
	0x15118  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x1510c00067b10 (0x10c00067b10) in binary!
	0x1a6c0  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x150f400067b08 (0xf400067b08) in binary!
	0x150e8  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x150dc00067b00 (0xdc00067b00) in binary!
	0x150d0  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0x150c400068638 (0xc400068638) in binary!
	0x1a328  @objc MedicalRecordChartPoint.(null) <stripped>
WARNING: couldn't find address 0xf8000000c (0xf8000000c) in binary!
	0x3ecfff7d550  @objc MedicalRecordChartPoint.(null) <stripped>
	0x35cfff7d698  @objc MedicalRecordChartPoint.ˇHã8^ <stripped>
	0x35cfff7d820  @objc MedicalRecordChartPoint.⁄Aˇ’Lâ˜ˇK^ <stripped>
	0x34cfff7d8c8  @objc MedicalRecordChartPoint.ˇ’Hâ«Ë¢ƒ <stripped>
	0x31cfff7da50  @objc MedicalRecordChartPoint. <stripped>
	0x2dcfff7daf8  @objc MedicalRecordChartPoint. <stripped>

	// Swift methods
	0xd3950  class func MedicalRecordChartPoint.__allocating_init(chartableSet:unit:blockCoordinateInfo:) // init 
	0xd3a60  func <stripped> // method 
	0xd3ac0  func <stripped> // method 
	0xd3c50  func <stripped> // method 
	0xd56e0  func <stripped> // method 
	0xd3de0  func <stripped> // method 
	0xd3e40  func <stripped> // method 
	0xd4040  func <stripped> // method 
	0xd56c0  func <stripped> // method 
	0xd4230  func <stripped> // method 
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
	let interItemSpacing : ›7 // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a5a4000688e0 (0x5a4000688e0) in binary!
	0x1a248  @objc LabelStackView.(null) <stripped>
WARNING: couldn't find address 0x1497c00069430 (0x17c00069430) in binary!
	0x14990  @objc LabelStackView.(null) <stripped>
WARNING: couldn't find address 0x1a22400067310 (0x22400067310) in binary!
	0x18000000c  @objc LabelStackView.(null) <stripped>
WARNING: couldn't find address 0x14f9c000682f0 (0x79c000682f0) in binary!
	0x28000000c  @objc LabelStackView.(null) <stripped>
WARNING: couldn't find address 0x14f8400068660 (0x78400068660) in binary!
	0x14f78  @objc LabelStackView.(null) <stripped>

	// Swift methods
	0xd78b0  class func LabelStackView.__allocating_init(textStyle:) // init 
	0xd7b80  func <stripped> // method 
	0xd7d10  func <stripped> // method 
 }

 class HealthRecordsUI.BrowseIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var iconCache : UnboundedCache
	var placeholderCache : UnboundedCache
	let accountIconProvider : AccountIconProvider

	// Swift methods
	0xdabc0  class func BrowseIconProvider.__allocating_init(accountIconProvider:) // init 
	0xdad30  func <stripped> // method 
	0xdb340  func <stripped> // method 
	0xdc0a0  func <stripped> // method 
 }

 class HealthRecordsUI.OAuthViewControllerNotificationUserInfoKeys : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14f64000684d8 (0x764000684d8) in binary!
	0x1a1c8  @objc OAuthViewControllerNotificationUserInfoKeys.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff858a0  @objc OAuthViewControllerNotificationUserInfoKeys.(null) <stripped>
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
WARNING: couldn't find address 0x14f2c000684a0 (0x72c000684a0) in binary!
	0x1a190  @objc AnalyticsManager.(null) <stripped>
WARNING: couldn't find address 0x18d94000696b8 (0x594000696b8) in binary!
	0x18da8  @objc AnalyticsManager.(null) <stripped>
WARNING: couldn't find address 0x18dbc000696a8 (0x5bc000696a8) in binary!
	0x1a160  @objc AnalyticsManager.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x444fff883b8  @objc AnalyticsManager.(null) <stripped>
	0xfff887d0  @objc AnalyticsManager.Aˇ’HÉƒ[A\A]A^A_]√UHâÂAWAVAUATSHÉÏLã=é  <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x1fcfff8af38  @objc AnalyticsManager.(null) <stripped>

	// Swift methods
	0xde9e0  func <stripped> // method 
	0xdeb00  func <stripped> // method 
	0xdef70  func <stripped> // method 
	0xdf1d0  func <stripped> // method 
	0xdf350  func <stripped> // method 
	0xdf450  func <stripped> // method 
	0xdf9a0  func <stripped> // method 
 }

 class HealthRecordsUI.AllergyReactionFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x138cc00067908 (0xcc00067908) in binary!
	0x14ed0  @objc AllergyReactionFormatter.(null) <stripped>
WARNING: couldn't find address 0x1a13400067220 (0x13400067220) in binary!
	0x28000000c  @objc AllergyReactionFormatter.(null) <stripped>
WARNING: couldn't find address 0x14eac00068420 (0x6ac00068420) in binary!
	0x1a110  @objc AllergyReactionFormatter.(null) <stripped>

	// Swift methods
	0xe0fe0  func <stripped> // method 
	0xe0ff0  func <stripped> // method 
	0xe10a0  class func AllergyReactionFormatter.__allocating_init(store:context:) // init 
	0xe1140  func <stripped> // method 
	0xe1270  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartData : HKInteractiveChartBloodPressureData /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : 55 // +0x80000400 (0x0)
	let dateFormat : HKDateFormatUtilitiesDateTemplate // +0x0 (0x8)
	let hasTime : Bool // +0x74735f5f (0x1)
	let partOfOutOfRangeSeries : Bool // +0x0 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14eac00068420 (0x6ac00068420) in binary!
	0x1a110  @objc BloodPressureChartData.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff8bcc8  @objc BloodPressureChartData.(null) <stripped>

	// Swift methods
	0xe3a70  class func BloodPressureChartData.__allocating_init(date:dateFormat:hasTime:systolicRange:diastolicRange:) // init 
 }

 class HealthRecordsUI.AccountTableViewCell : HRSourceTableViewCell {

	// Properties
	let brandView : WDMedicalRecordBrandView // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x13ee8000684b0 (0x6e8000684b0) in binary!
	0x1a428  @objc AccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1903600068380 (0x3600068380) in binary!
	0x1a0c0  @objc AccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1a0b400068c28 (0xb400068c28) in binary!
	0x1a0a8  @objc AccountTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x4cfff8fc20  @objc AccountTableViewCell.(null) <stripped>
	0x44fff90008  @objc AccountTableViewCell.ÏIâ˛Hç}»Lâ7Hã• <stripped>
	0x35cfff90180  @objc AccountTableViewCell.A]A^A_]ˇ‡UHâÂAWAVAUATSHÉÏIâ˛Hç}»Lâ7Hã• <stripped>

	// Swift methods
	0xe4c80  func <stripped> // method 
	0xe4d90  func <stripped> // method 
	0xe4e10  func <stripped> // method 
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
WARNING: couldn't find address 0x191b400068298 (0x1b400068298) in binary!
	0x14e18  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x191bc00067848 (0x1bc00067848) in binary!
	0x14e00  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x15ea400067840 (0x6a400067840) in binary!
	0x14de8  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x1a04c00067138 (0x4c00067138) in binary!
	0x38000000c  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x1576400067478 (0x76400067478) in binary!
	0x14db8  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x1a01c00067108 (0x1c00067108) in binary!
	0x18000000c  @objc MedicalRecordChartOverlayContext.(null) <stripped>
WARNING: couldn't find address 0x14d9400068258 (0x59400068258) in binary!
	0x68000000c  @objc MedicalRecordChartOverlayContext.(null) <stripped>

	// Swift methods
	0xe8940  class func MedicalRecordChartOverlayContext.__allocating_init(title:dataSource:defaultColors:selectedColors:verticalAxis:) // init 
	0xe8b40  func <stripped> // method 
	0xe8c30  func <stripped> // method 
	0xe8f80  func <stripped> // method 
	0xe9030  func <stripped> // method 
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
	var _latestChange : ”" // +0x0 (0x0)
	let handler : AccountStateChange // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1576400067478 (0x76400067478) in binary!
	0x14db8  @objc AccountStateChangeListener.(null) <stripped>
WARNING: couldn't find address 0x1a01c00067108 (0x1c00067108) in binary!
	0x18000000c  @objc AccountStateChangeListener.(null) <stripped>
WARNING: couldn't find address 0x14d9400068258 (0x59400068258) in binary!
	0x68000000c  @objc AccountStateChangeListener.(null) <stripped>

	// Swift methods
	0xe98b0  func <stripped> // getter 
	0xe9910  func <stripped> // setter 
	0xe9980  func <stripped> // modifyCoroutine 
	0xe9b50  func <stripped> // getter 
	0xe9bf0  func <stripped> // setter 
	0xe9c60  func <stripped> // modifyCoroutine 
	0xe9e00  class func AccountStateChangeListener.__allocating_init(handler:) // init 
	0xea070  func <stripped> // method 
 }

 struct HealthRecordsUI.AddAccountFeedItemIdentifierFactory { }

 class HealthRecordsUI.ExplainerTextFooterCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let label : UILabel
	var content : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14d7c0006b2f0 (0x57c0006b2f0) in binary!
	0x1c1a0  @objc ExplainerTextFooterCell.(null) <stripped>
WARNING: couldn't find address 0x1a32400069ae0 (0x32400069ae0) in binary!
	0x13dcc  @objc ExplainerTextFooterCell.(null) <stripped>
WARNING: couldn't find address 0x1a30c00068648 (0x30c00068648) in binary!
	0x19fb0  @objc ExplainerTextFooterCell.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x7cfff969e8  @objc ExplainerTextFooterCell.(null) <stripped>
	0x50c00068280  @objc ExplainerTextFooterCell.s <stripped>
WARNING: couldn't find address 0x6705cfff97938 (0x5cfff97938) in binary!
	0x68000000c  @objc ExplainerTextFooterCell.(null) <stripped>

	// Swift methods
	0xeacc0  func <stripped> // getter 
	0xead70  func <stripped> // setter 
	0xeae20  func <stripped> // modifyCoroutine 
	0xeb0a0  func <stripped> // method 
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
	0xee9d0  func <stripped> // getter 
	0xeea30  func <stripped> // setter 
	0xeeae0  func <stripped> // modifyCoroutine 
	0xeed30  class func CountFormatter.__allocating_init(style:) // init 
	0xeefe0  func <stripped> // method 
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
WARNING: couldn't find address 0x14d2c000682a0 (0x52c000682a0) in binary!
	0x19f90  @objc DiagnosticTestReportFormatter.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x5cfff97938  @objc DiagnosticTestReportFormatter.(null) <stripped>

	// Swift methods
	0xef7b0  class func DiagnosticTestReportFormatter.__allocating_init(store:context:) // init 
	0xef870  func <stripped> // method 
 }

 class HealthRecordsUI.CoverageIdentifierFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext
	var displayValue : String?
	var identifierTitle : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14d0c00068280 (0x50c00068280) in binary!
	0x19f70  @objc CoverageIdentifierFormatter.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x124fff9d4e8  @objc CoverageIdentifierFormatter.(null) <stripped>

	// Swift methods
	0xf0660  func <stripped> // method 
	0xf0670  func <stripped> // method 
	0xf0720  class func CoverageIdentifierFormatter.__allocating_init(store:context:) // init 
	0xf0830  func <stripped> // method 
	0xf0880  func <stripped> // method 
 }

 class HealthRecordsUI.AccountIconProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var monogramProvider : MonogramProvider
	var brandImageManager : HKBrandImageManager
	var iconCache : UnboundedCache

	// Swift methods
	0xf36a0  class func AccountIconProvider.__allocating_init(brandImageManager:monogramProvider:) // init 
	0xf3780  func <stripped> // method 
	0xf3880  func <stripped> // method 
	0xf3e00  func <stripped> // method 
 }

 class HealthRecordsUI.ContentStatusCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let spinner : UIActivityIndicatorView
	let titleLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14cec00069b90 (0x4ec00069b90) in binary!
	0x14ce0  @objc ContentStatusCell.(null) <stripped>
WARNING: couldn't find address 0x14cd400068248 (0x4d400068248) in binary!
	0x1a288  @objc ContentStatusCell.(null) <stripped>
WARNING: couldn't find address 0x13d30000682f8 (0x530000682f8) in binary!
	0x19f20  @objc ContentStatusCell.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x134fff9de08  @objc ContentStatusCell.(null) <stripped>
	0x3ecfff9df30  @objc ContentStatusCell.ˇ”Iâ‹Hâ«ËGT <stripped>
	0x73cfff9e3b8  @objc ContentStatusCell.LâÛHâ«ËaT <stripped>

	// Swift methods
	0xf6760  func <stripped> // method 
 }

 class HealthRecordsUI.SideBySideLabelCell : WDMedicalRecordGroupableCell {

	// Properties
	let titleLabel : UILabel
	let detailLabel : UILabel
	let chevronView : UIView
	var title : String?
	var detail : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14c9c00067b28 (0x49c00067b28) in binary!
	0x1c0c0  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x14c8400067270 (0x48400067270) in binary!
	0x1c0a8  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x1a22c000699e8 (0x22c000699e8) in binary!
	0x1c090  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x13cc800068290 (0x4c800068290) in binary!
	0x1a208  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x19eac00066f98 (0x6ac00066f98) in binary!
	0xa8000000c  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x198340006b378 (0x340006b378) in binary!
	0x19858  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x1986c00067668 (0x6c00067668) in binary!
	0x13470  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x198c400067660 (0xc400067660) in binary!
	0x198e8  @objc SideBySideLabelCell.(null) <stripped>
WARNING: couldn't find address 0x198dc00067658 (0xdc00067658) in binary!
	0x198d0  @objc SideBySideLabelCell.(null) <stripped>

	// Swift methods
	0xf6e40  func <stripped> // getter 
	0xf6e80  func <stripped> // setter 
	0xf6ef0  func <stripped> // modifyCoroutine 
	0xf6ff0  func <stripped> // getter 
	0xf70f0  func <stripped> // setter 
	0xf7200  func <stripped> // modifyCoroutine 
	0xf74a0  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordChartSeries : HKGraphSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var selectedStrokeStyle : HKStrokeStyle?
	var unselectedStrokeStyle : HKStrokeStyle?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x198340006b378 (0x340006b378) in binary!
	0x19858  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x1986c00067668 (0x6c00067668) in binary!
	0x13470  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x198c400067660 (0xc400067660) in binary!
	0x198e8  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x198dc00067658 (0xdc00067658) in binary!
	0x198d0  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x14bc400068138 (0x3c400068138) in binary!
	0x19e28  @objc MedicalRecordChartSeries.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x62cfffa03a0  @objc MedicalRecordChartSeries.(null) <stripped>
	0x61cfffa0448  @objc MedicalRecordChartSeries.â˚Hâ}–Lã=G <stripped>
	0x6c4fffa0580  @objc MedicalRecordChartSeries.÷Lã}–Lãu∞Î]E1ÌÎtHã=— <stripped>
	0x354000679e0  @objc MedicalRecordChartSeries.◊Hã5¿t <stripped>
WARNING: couldn't find address 0x677ecfffa1f40 (0x7ecfffa1f40) in binary!
	0x33c000679d0  @objc MedicalRecordChartSeries.(null) <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordChartCoordinate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let pointValuesAscending : CGPoint
	let blockCoordinateInfo : HKGraphSeriesBlockCoordinateInfo

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1999800067630 (0x19800067630) in binary!
	0x1998c  @objc MedicalRecordChartCoordinate.(null) <stripped>
WARNING: couldn't find address 0x14b8c00068908 (0x38c00068908) in binary!
	0x13810  @objc MedicalRecordChartCoordinate.(null) <stripped>
WARNING: couldn't find address 0x14b74000680e8 (0x374000680e8) in binary!
	0x19dd8  @objc MedicalRecordChartCoordinate.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x7ecfffa1f40  @objc MedicalRecordChartCoordinate.(null) <stripped>
	0x134fffa2068  @objc MedicalRecordChartCoordinate.\Ô <stripped>
	0x414fffa24b0  @objc MedicalRecordChartCoordinate.LâÔˇoÔ <stripped>

	// Swift methods
	0xf83e0  class func MedicalRecordChartCoordinate.__allocating_init(sortedPointValues:blockCoordinateInfo:) // init 
	0xf9290  func <stripped> // getter 
	0xf92c0  func <stripped> // getter 
	0xf92f0  func <stripped> // getter 
	0xf9330  func <stripped> // method 
	0xf94e0  func <stripped> // getter 
	0xf9540  func <stripped> // getter 
	0xfb060  func <stripped> // getter 
	0xf95a0  func <stripped> // method 
 }

 class HealthRecordsUI.ContentStatusView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let subtitleLabel : UILabel // +0x10 (0x8)
	let spinnerView : UIActivityIndicatorView // +0x18 (0x8)
	var title : String? // +0x20 (0x10)
	var subtitle : String? // +0x30 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14b54000679e0 (0x354000679e0) in binary!
	0x1bf78  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x14b3c000679d0 (0x33c000679d0) in binary!
	0x1bf60  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x1351400069608 (0x51400069608) in binary!
	0x1a0d8  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x144dc00067a28 (0x4dc00067a28) in binary!
	0x19d70  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x19d6400068008 (0x56400068008) in binary!
	0x1bf18  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x19d4c000688c0 (0x54c000688c0) in binary!
	0x19d40  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x60cfffa4558  @objc ContentStatusView.(null) <stripped>
	0x5c00067c30  @objc ContentStatusView. <stripped>
WARNING: couldn't find address 0xfffa57a8 (0xfffa57a8) in binary!
	0x28400069498  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x67864fffa57d0 (0x64fffa57d0) in binary!
	0x6000067510  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x69824fffa5a18 (0x24fffa5a18) in binary!
	0x254000678e0  @objc ContentStatusView.(null) <stripped>
WARNING: couldn't find address 0x676ecfffa5bd0 (0x6ecfffa5bd0) in binary!
	0x23c000674e8  @objc ContentStatusView.(null) <stripped>

	// Swift methods
	0xfb0c0  func <stripped> // getter 
	0xfb100  func <stripped> // setter 
	0xfb170  func <stripped> // modifyCoroutine 
	0xfb270  func <stripped> // getter 
	0xfb370  func <stripped> // setter 
	0xfb480  func <stripped> // modifyCoroutine 
	0xfb5a0  class func ContentStatusView.__allocating_init(title:subtitle:) // init 
	0xfba30  func <stripped> // method 
	0xfbc50  func <stripped> // method 
	0xfbc90  func <stripped> // method 
	0xfc500  func <stripped> // method 
 }

 class HealthRecordsUI.MedicationRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14abc00068030 (0x2bc00068030) in binary!
	0x19d20  @objc MedicationRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa57a8  @objc MedicationRecordFormatter.(null) <stripped>

	// Swift methods
	0xfceb0  func <stripped> // getter 
	0xfcf90  func <stripped> // method 
	0xfd090  class func MedicationRecordFormatter.__allocating_init(store:context:) // init 
	0xfd150  func <stripped> // method 
	0xfd1b0  func <stripped> // method 
 }

 class HealthRecordsUI.ClinicalOnboardingManager : WDClinicalOnboardingManager {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a05c00067c30 (0x5c00067c30) in binary!
	0xe8000000c  @objc ClinicalOnboardingManager.(null) <stripped>
 }

 class HealthRecordsUI.ConceptTitleTableHeaderView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel // +0x8 (0x8)
	let actionButton : UIButton // +0x10 (0x8)
	let fontChoices : [UIFont] // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var widthCache : ›7 // +0x20 (0x8)
	var titleCache : NSString // +0x28 (0x8)
	var delegate : weak HRConceptTitleTableHeaderViewDelegate? // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottomExtraSpace : ›7 // +0x38 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x14a8400069498 (0x28400069498) in binary!
	0x1bea8  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1986000067510 (0x6000067510) in binary!
	0x19b49  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x14a54000678e0 (0x254000678e0) in binary!
	0x1be78  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x14a3c000674e8 (0x23c000674e8) in binary!
	0x1be60  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x143f400067940 (0x3f400067940) in binary!
	0x19fd8  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x19c7c000687f0 (0x47c000687f0) in binary!
	0x143b0  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x1be240006b1c0 (0x6240006b1c0) in binary!
	0x19c58  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x3d4fffa7bd0  @objc ConceptTitleTableHeaderView.(null) <stripped>
	0x50cfffa7ea8  @objc ConceptTitleTableHeaderView.ã}–ˇ◊ <stripped>
	0x38c00067cf8  @objc ConceptTitleTableHeaderView.Aà\$HHã}∞Lã5∞ <stripped>
WARNING: couldn't find address 0xfffa8208 (0xfffa8208) in binary!
	0x74400068840  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x68824fffaa4b0 (0x24fffaa4b0) in binary!
	0x72c00068820  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0x67ed4fffabd98 (0x6d4fffabd98) in binary!
	0x3c400066cb0  @objc ConceptTitleTableHeaderView.(null) <stripped>
WARNING: couldn't find address 0xfffabdf0 (0xfffabdf0) in binary!
	0x13c00067df0  @objc ConceptTitleTableHeaderView.(null) <stripped>

	// Swift methods
	0xfea40  func <stripped> // getter 
	0xfeac0  func <stripped> // setter 
	0xfeb90  func <stripped> // modifyCoroutine 
	0xfeca0  func <stripped> // getter 
	0xfed20  func <stripped> // setter 
	0xfede0  func <stripped> // modifyCoroutine 
	0xfeed0  func <stripped> // getter 
	0xfeff0  func <stripped> // setter 
	0xff130  func <stripped> // modifyCoroutine 
	0xff2c0  func <stripped> // getter 
	0xff390  func <stripped> // setter 
	0xff460  func <stripped> // modifyCoroutine 
	0xff8b0  func <stripped> // method 
	0x1000d0  func <stripped> // method 
 }

 class HealthRecordsUI.WeakNotificationObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let scheduler : TaskScheduler
WARNING: couldn't find address 0x0 (0x0) in binary!
	let block :  empty-list 
	var center : weak NSNotificationCenter?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19c4400068fd0 (0x44400068fd0) in binary!
	0x1bdf8  @objc WeakNotificationObserver.(null) <stripped>
WARNING: couldn't find address 0x149bc00067f30 (0x1bc00067f30) in binary!
	0x19c20  @objc WeakNotificationObserver.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa8208  @objc WeakNotificationObserver.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x24fffaa4b0  @objc WeakNotificationObserver.(null) <stripped>

	// Swift methods
	0x100d40  class func WeakNotificationObserver.__allocating_init(forName:object:scheduler:center:block:) // init 
	0x100f80  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19f4400068840 (0x74400068840) in binary!
	0x19e9c  @objc MedicalRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x19f2c00068820 (0x72c00068820) in binary!
	0x14960  @objc MedicalRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x19bc400066cb0 (0x3c400066cb0) in binary!
	0x18000000c  @objc MedicalRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x1493c00067df0 (0x13c00067df0) in binary!
	0x68000000c  @objc MedicalRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x19ee400069a28 (0x6e400069a28) in binary!
	0x19ed8  @objc MedicalRecordFormatter.(null) <stripped>

	// Swift methods
	0x103510  func <stripped> // method 
	0x1038b0  func <stripped> // method 
	0x103a10  func <stripped> // method 
	0x103ae0  func <stripped> // method 
	0x103c30  func <stripped> // method 
	0x103d80  func <stripped> // method 
	0x103f20  func <stripped> // method 
	0x104020  func <stripped> // method 
	0x104110  func <stripped> // method 
	0x104220  func <stripped> // method 
	0x104310  func <stripped> // method 
	0x1043f0  func <stripped> // method 
	0x1044f0  func <stripped> // method 
	0x1045f0  func <stripped> // method 
	0x1046f0  func <stripped> // method 
	0x1047e0  func <stripped> // method 
	0x104910  class func MedicalRecordFormatter.__allocating_init(store:context:) // init 
	0x104a10  func <stripped> // method 
 }

 class HealthRecordsUI.ViewControllerFactory : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19ee400069a28 (0x6e400069a28) in binary!
	0x19ed8  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x132fc000698d0 (0x2fc000698d0) in binary!
	0x132f0  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x148f400067e68 (0xf400067e68) in binary!
	0x19b58  @objc ViewControllerFactory.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0xbcfffae460  @objc ViewControllerFactory.(null) <stripped>
	0x4acfffadf78  @objc ViewControllerFactory.8ˇˇˇË)‚ <stripped>
	0x9c00067e10  @objc ViewControllerFactory. <stripped>

	// Swift methods
	0x105c00  func <stripped> // method 
	0x105cf0  func <stripped> // method 
	0x105e50  func <stripped> // method 
	0x105e60  func <stripped> // method 
	0x105e70  func <stripped> // method 
	0x105eb0  func <stripped> // method 
	0x105f20  func <stripped> // method 
	0x105f90  func <stripped> // method 
	0x106140  func <stripped> // method 
	0x1065d0  func <stripped> // method 
	0x1065f0  func <stripped> // method 
	0x106780  func <stripped> // method 
	0x106b20  func <stripped> // method 
 }

 class HealthRecordsUI.MedicalRecordAnnotationViewDataSource : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let dateGroup : UIStackView // +0x8 (0x8)
	let monthYearLabel : UILabel // +0x10 (0x8)
	let timeLabel : UILabel // +0x18 (0x8)
	let dividerLabel : UILabel // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1489c00067e10 (0x9c00067e10) in binary!
	0x15914  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x19f5400067238 (0x75400067238) in binary!
	0x130e8  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x1591c00067338 (0x11c00067338) in binary!
	0x15910  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x19ac400066bb0 (0x2c400066bb0) in binary!
	0x48000000c  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x19aac000674c8 (0x2ac000674c8) in binary!
	0x13220  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x19de400068120 (0x5e400068120) in binary!
	0x19a88  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x36cfffbdfc0  @objc MedicalRecordAnnotationViewDataSource.(null) <stripped>

	// Swift methods
	0x1084d0  func <stripped> // method 
	0x108d80  func <stripped> // method 
	0x1084e0  func <stripped> // method 
	0x1084f0  func <stripped> // method 
	0x108520  func <stripped> // method 
	0x108530  func <stripped> // method 
	0x108560  func <stripped> // method 
 }

 class HealthRecordsUI.DisplayItemProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthRecordsUI.TextViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var $__lazy_storage_$_textView : UITextView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19aac000674c8 (0x2ac000674c8) in binary!
	0x13220  @objc TextViewController.(null) <stripped>
WARNING: couldn't find address 0x19de400068120 (0x5e400068120) in binary!
	0x19a88  @objc TextViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x36cfffbdfc0  @objc TextViewController.(null) <stripped>
	0xdcfffbe108  @objc TextViewController.A∏ <stripped>

	// Swift methods
	0x112080  func <stripped> // getter 
	0x1121f0  func <stripped> // getter 
	0x112270  func <stripped> // setter 
	0x1122e0  func <stripped> // modifyCoroutine 
 }

 struct HealthRecordsUI.AccountErrorFeedItemData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let accountId : =3
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
	var $__lazy_storage_$_sampleCountDebouncer :  // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _sampleCount : c // +0x0 (0x0)

	// Swift methods
	0x115070  func <stripped> // getter 
	0x115150  func <stripped> // getter 
	0x1155f0  func <stripped> // method 
 }

 class HealthRecordsUI.CategoryCountProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let category : DisplayCategory
	let healthStore : HKHealthStore
	var sampleTypeCountProviders : SampleTypeCountProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_categoryRecordCountPublisher : 

	// Swift methods
	0x1159d0  func <stripped> // getter 
	0x116040  func <stripped> // getter 
	0x1161b0  func <stripped> // method 
 }

 struct HealthRecordsUI.AccountErrorFeedItemIdentifierFactory { }

 class HealthRecordsUI.ImprovementDataCollectionAboutPrivacyViewController : TextViewController {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19a7400067520 (0x27400067520) in binary!
	0x13528  @objc ImprovementDataCollectionAboutPrivacyViewController.(null) <stripped>
WARNING: couldn't find address 0x131dc00067f48 (0x1dc00067f48) in binary!
	0x19da0  @objc ImprovementDataCollectionAboutPrivacyViewController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x534fffbee78  @objc ImprovementDataCollectionAboutPrivacyViewController.(null) <stripped>
	0xfffbeef0  @objc ImprovementDataCollectionAboutPrivacyViewController.â«ËMÕ <stripped>
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
	var _latestChange :  // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1a3ad000672a8 (0x3ad000672a8) in binary!
	0x147c0  @objc HealthRecordsSupportedStateChangeListener.(null) <stripped>
WARNING: couldn't find address 0x19a2400066b10 (0x22400066b10) in binary!
	0x28000000c  @objc HealthRecordsSupportedStateChangeListener.(null) <stripped>
WARNING: couldn't find address 0x1300c000672d8 (0xc000672d8) in binary!
	0x14790  @objc HealthRecordsSupportedStateChangeListener.(null) <stripped>

	// Swift methods
	0x117890  func <stripped> // getter 
	0x1178f0  func <stripped> // setter 
	0x117960  func <stripped> // modifyCoroutine 
	0x117b30  func <stripped> // getter 
	0x117bd0  func <stripped> // setter 
	0x117c40  func <stripped> // modifyCoroutine 
	0x117de0  class func HealthRecordsSupportedStateChangeListener.__allocating_init(handler:) // init 
	0x118050  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureDataTransformer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit?
	var $__lazy_storage_$_displayType : HKDisplayType?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1327c0006acb8 (0x27c0006acb8) in binary!
	0x19d30  @objc BloodPressureDataTransformer.(null) <stripped>
WARNING: couldn't find address 0x132840006ac58 (0x2840006ac58) in binary!
	0x68000000c  @objc BloodPressureDataTransformer.(null) <stripped>
WARNING: couldn't find address 0x19d0c00068048 (0x50c00068048) in binary!
	0x199b0  @objc BloodPressureDataTransformer.(null) <stripped>

	// Swift methods
	0x118d80  func <stripped> // getter 
	0x118e20  func <stripped> // getter 
	0x118f00  func <stripped> // method 
	0x119360  func <stripped> // method 
	0x119610  func <stripped> // method 
	0x119770  func <stripped> // method 
 }

 class HealthRecordsUI.CountProviderCollection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var countProviders : DisplayCategory
	var healthStore : HKHealthStore

	// Swift methods
	0x11bcc0  func <stripped> // method 
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
	let interItemSpacingVertical : ›7
WARNING: couldn't find address 0x0 (0x0) in binary!
	let interItemSpacingHorizontal : ›7
	let hidesIconsForAccessibilityTextSizes : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19d0c00068048 (0x50c00068048) in binary!
	0x199b0  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x140e400068b98 (0xe400068b98) in binary!
	0x1bb58  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x140ec00067638 (0xec00067638) in binary!
	0x19980  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc6828  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc64b0  @objc IconTextListView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc6648  @objc IconTextListView.(null) <stripped>

	// Swift methods
	0x11d370  class func IconTextListView.__allocating_init(textStyle:iconSize:interItemSpacingHorizontal:interItemSpacingVertical:hidesIconsForAccessibilityTextSizes:) // init 
	0x11d580  func <stripped> // method 
	0x11d7b0  func <stripped> // method 
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
WARNING: couldn't find address 0x136f800067cc0 (0x6f800067cc0) in binary!
	0x19c38  @objc StandardTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x754fffc6660  @objc StandardTableViewCell.(null) <stripped>

	// Swift methods
	0x11fab0  class func <stripped> // getter 
 }

 class HealthRecordsUI.NoAppTableViewCell : HRStandardTableViewCell {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x136d800067ca0 (0x6d800067ca0) in binary!
	0x19c18  @objc NoAppTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x194fffd1f40  @objc NoAppTableViewCell.(null) <stripped>
 }

 class HealthRecordsUI.SourceTableViewCell : HRStandardTableViewCell {

	// Properties
	var sourceModel : HKSourceDataModel?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1372800067cf0 (0x72800067cf0) in binary!
	0x19c68  @objc SourceTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x1990c000669f8 (0x10c000669f8) in binary!
	0x28000000c  @objc SourceTableViewCell.(null) <stripped>
WARNING: couldn't find address 0x136f800067cc0 (0x6f800067cc0) in binary!
	0x19c38  @objc SourceTableViewCell.(null) <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicalRecordUnitCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var units : [HKUnit : NSCountedSet]

	// Swift methods
	0x1212a0  func <stripped> // method 
	0x121a60  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureFormatter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var $__lazy_storage_$_mmHgUnit : HKUnit?

	// Swift methods
	0x12ad80  func <stripped> // getter 
	0x12ae20  func <stripped> // getter 
	0x12ae90  func <stripped> // getter 
	0x12af70  func <stripped> // method 
 }

 class HealthRecordsUI.CoverageClassificationFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1464400067bb8 (0x64400067bb8) in binary!
	0x198a8  @objc CoverageClassificationFormatter.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x7bcfffd35c0  @objc CoverageClassificationFormatter.(null) <stripped>

	// Swift methods
	0x12b3a0  func <stripped> // method 
	0x12b3b0  func <stripped> // method 
	0x12b460  class func CoverageClassificationFormatter.__allocating_init(store:context:) // init 
	0x12b500  func <stripped> // method 
	0x12b550  func <stripped> // method 
 }

 class HealthRecordsUI.SingleValueCurrentValueViewDataSource : HKCurrentValueViewDataSource /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {

	// Properties
	var lastCachedNumberOfChartPoints : Int? // +0x8 (0x9)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19be400067108 (0x3e400067108) in binary!
	0x14fb8  @objc SingleValueCurrentValueViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x171ec00068380 (0x1ec00068380) in binary!
	0x14600  @objc SingleValueCurrentValueViewDataSource.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x39cfffdaf78  @objc SingleValueCurrentValueViewDataSource.(null) <stripped>
	0x124fffdbc10  @objc SingleValueCurrentValueViewDataSource.â«Ë"® <stripped>

	// Swift methods
	0x12cc40  func <stripped> // method 
 }

 enum HealthRecordsUI.AccountIconViewError {

	// Properties
	case missingAccount  
 }

 struct HealthRecordsUI.AccountIconViewData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : =3
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
WARNING: couldn't find address 0x19bac00068ef0 (0x3ac00068ef0) in binary!
	0x16ceb  @objc HealthRecordsMigrator.(null) <stripped>
WARNING: couldn't find address 0x145d400067b48 (0x5d400067b48) in binary!
	0x19838  @objc HealthRecordsMigrator.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x7a4fffde740  @objc HealthRecordsMigrator.(null) <stripped>
	0x68cfffde868  @objc HealthRecordsMigrator.HçŸ| <stripped>

	// Swift methods
 }

 struct HealthRecordsUI.ViewMetrics { }

 class HealthRecordsUI.ConceptListViewController {
 class HealthRecordsUI.ConceptListViewDataSourceProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let categoryPredicate : NSPredicate
WARNING: couldn't find address 0x0 (0x0) in binary!
	var store : √9
WARNING: couldn't find address 0x0 (0x0) in binary!
	let categoryViewDataSourceProvider : -
WARNING: couldn't find address 0x0 (0x0) in binary!
	let sourceProfile : ì5

	// Swift methods
	0x136680  func <stripped> // getter 
	0x1366c0  func <stripped> // setter 
	0x136710  func <stripped> // modifyCoroutine 
	0x135c30  class func ConceptListViewDataSourceProvider.__allocating_init(categoryPredicate:sourceProfile:store:) // init 
	0x136860  func <stripped> // method 
	0x1368d0  func <stripped> // method 
	0x137090  func <stripped> // method 
 }

 class HealthRecordsUI.ClinicalOnboardingLearnMoreViewController : TextViewController {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x19824000672d0 (0x24000672d0) in binary!
	0x1b9d8  @objc ClinicalOnboardingLearnMoreViewController.(null) <stripped>
WARNING: couldn't find address 0x12f8c00067cf8 (0x78c00067cf8) in binary!
	0x19b50  @objc ClinicalOnboardingLearnMoreViewController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0xccfffded98  @objc ClinicalOnboardingLearnMoreViewController.(null) <stripped>
	0x74c00067cb8  @objc ClinicalOnboardingLearnMoreViewController. <stripped>

	// Swift methods
 }

 class HealthRecordsUI.MedicationDispenseFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var $__lazy_storage_$_dosagesFormatter : MedicationDosageFormatter
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1457c00067af0 (0x57c00067af0) in binary!
	0x197e0  @objc MedicationDispenseFormatter.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x64cfffdfec8  @objc MedicationDispenseFormatter.(null) <stripped>

	// Swift methods
	0x1381e0  func <stripped> // getter 
	0x1382c0  func <stripped> // method 
	0x138180  class func MedicationDispenseFormatter.__allocating_init(store:context:) // init 
	0x138420  func <stripped> // method 
 }

 class HealthRecordsUI.HealthRecordsNotAvailableViewController : UIAlertController /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x12f4c00067cb8 (0x74c00067cb8) in binary!
	0x19b10  @objc HealthRecordsNotAvailableViewController.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe4e58  @objc HealthRecordsNotAvailableViewController.(null) <stripped>

	// Swift methods
	0x1392f0  class func <stripped> // method 
 }

 enum HealthRecordsUI.BrowseCategoryError {

	// Properties
	case decodeFailure : (rawValue: String)
 }

 enum HealthRecordsUI.BrowseCategory {

	// Properties
	case subcategory : Kind
WARNING: couldn't find address 0x0 (0x0) in binary!
	case account : Û
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
WARNING: couldn't find address 0x1452400067010 (0x52400067010) in binary!
	0x1b948  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x1450c00067398 (0x50c00067398) in binary!
	0x1b930  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x144f400066fe8 (0x4f400066fe8) in binary!
	0x1b918  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x1974c00067078 (0x74c00067078) in binary!
	0x19740  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x133940006aef0 (0x3940006aef0) in binary!
	0x1b1df  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x1971c00067b70 (0x71c00067b70) in binary!
	0x1b8d0  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x1350800067ad0 (0x50800067ad0) in binary!
	0x19a48  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x196ec000667d8 (0x6ec000667d8) in binary!
	0x28000000c  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x190740006abb8 (0x740006abb8) in binary!
	0x14458  @objc ConceptHeaderCell.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x534fffe7250  @objc ConceptHeaderCell.(null) <stripped>
	0xfffe7938  @objc ConceptHeaderCell. <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x704fffeab80  @objc ConceptHeaderCell.(null) <stripped>
	0x244fffeac48  @objc ConceptHeaderCell.Úˇ„o <stripped>
	0x3dc00067950  @objc ConceptHeaderCell.dÇ <stripped>
WARNING: couldn't find address 0xfffea6e8 (0xfffea6e8) in binary!
	0x3c400067888  @objc ConceptHeaderCell.(null) <stripped>

	// Swift methods
	0x13ddc0  func <stripped> // getter 
	0x13df10  func <stripped> // getter 
	0x13df50  func <stripped> // setter 
	0x13e000  func <stripped> // modifyCoroutine 
	0x13e0f0  func <stripped> // getter 
	0x13e1a0  func <stripped> // setter 
	0x13e250  func <stripped> // modifyCoroutine 
	0x13e340  func <stripped> // getter 
	0x13e430  func <stripped> // setter 
	0x13e520  func <stripped> // modifyCoroutine 
	0x13ef50  func <stripped> // method 
 }

 class HealthRecordsUI.BloodPressureChartSeries : HKBloodPressureSeries /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x190740006abb8 (0x740006abb8) in binary!
	0x14458  @objc BloodPressureChartSeries.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x534fffe7250  @objc BloodPressureChartSeries.(null) <stripped>
 }

 class HealthRecordsUI.ProfileOnboardingActionViewController {
 class HealthRecordsUI.OnboardingTableViewCell {
 class HealthRecordsUI.ProviderNotFoundView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let glyphView : UIView
	let providerStatusLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x13e1400067360 (0x61400067360) in binary!
	0x199f8  @objc ProviderNotFoundView.(null) <stripped>
WARNING: couldn't find address 0x1969c00066788 (0x69c00066788) in binary!
	0x48000000c  @objc ProviderNotFoundView.(null) <stripped>
WARNING: couldn't find address 0x12c8400067a48 (0x48400067a48) in binary!
	0x13ede  @objc ProviderNotFoundView.(null) <stripped>

	// Swift methods
	0x140b40  func <stripped> // method 
 }

 class HealthRecordsUI.RecordKindDataProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, RecordKindDataProviderProtocol {

	// Properties
	let healthStore : HKHealthStore
	let queue : OS_dispatch_queue

	// Swift methods
	0x141260  class func RecordKindDataProvider.__allocating_init(healthStore:) // init 
	0x141430  func <stripped> // method 
	0x141bc0  func <stripped> // method 
	0x142ba0  func <stripped> // method 
 }

 class HealthRecordsUI.CategoryViewControllerManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var activeCategoryViewController : weak UIViewController?

	// Swift methods
	0x143410  func <stripped> // method 
	0x143ae0  func <stripped> // method 
 }

 class HealthRecordsUI.Features : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x143dc00067950 (0x3dc00067950) in binary!
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
	0x1455a0  class func <stripped> // method 
	0x145650  class func <stripped> // method 
	0x145660  class func <stripped> // method 
 }

 struct HealthRecordsUI.RecordKindFeedItemIdentifierFactory { }

 enum HealthRecordsUI.PrivacyInteractionType { }

 enum HealthRecordsUI.PrivacyInteractionContext { }

 class HealthRecordsUI.RecordPrimaryTitleCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let recordTitleLabel : UILabel
	let recordDateLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x142e400067c38 (0x2e400067c38) in binary!
	0x142d8  @objc RecordPrimaryTitleCell.(null) <stripped>
WARNING: couldn't find address 0x1334000067908 (0x34000067908) in binary!
	0x19880  @objc RecordPrimaryTitleCell.(null) <stripped>
WARNING: couldn't find address 0x1952400066610 (0x52400066610) in binary!
	0x58000000c  @objc RecordPrimaryTitleCell.(null) <stripped>
WARNING: couldn't find address 0x1429c000668a0 (0x29c000668a0) in binary!
	0x1b6c0  @objc RecordPrimaryTitleCell.(null) <stripped>
WARNING: couldn't find address 0x132f8000678c0 (0x2f8000678c0) in binary!
	0x19838  @objc RecordPrimaryTitleCell.(null) <stripped>

	// Swift methods
	0x1465b0  func <stripped> // method 
 }

 class HealthRecordsUI.RecordDetailItemCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let titleLabel : UILabel
	let bodyLabel : UILabel

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1432c00066f70 (0x32c00066f70) in binary!
	0x14320  @objc RecordDetailItemCell.(null) <stripped>
WARNING: couldn't find address 0x1338800067950 (0x38800067950) in binary!
	0x198c8  @objc RecordDetailItemCell.(null) <stripped>
WARNING: couldn't find address 0x1956c00066658 (0x56c00066658) in binary!
	0x58000000c  @objc RecordDetailItemCell.(null) <stripped>
WARNING: couldn't find address 0x142e400067c38 (0x2e400067c38) in binary!
	0x142d8  @objc RecordDetailItemCell.(null) <stripped>
WARNING: couldn't find address 0x1334000067908 (0x34000067908) in binary!
	0x19880  @objc RecordDetailItemCell.(null) <stripped>

	// Swift methods
	0x146cc0  func <stripped> // method 
 }

 class HealthRecordsUI.RecordReferenceRangeCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let referenceRangeView : HKReferenceRangeView // +0x8 (0x8)
	var valueInRange : HKInspectableValueInRange? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1429c000668a0 (0x29c000668a0) in binary!
	0x1b6c0  @objc RecordReferenceRangeCell.(null) <stripped>
WARNING: couldn't find address 0x132f8000678c0 (0x2f8000678c0) in binary!
	0x19838  @objc RecordReferenceRangeCell.(null) <stripped>
WARNING: couldn't find address 0x194dc000665c8 (0x4dc000665c8) in binary!
	0x18000000c  @objc RecordReferenceRangeCell.(null) <stripped>
WARNING: couldn't find address 0x14254000676f8 (0x254000676f8) in binary!
	0x88000000c  @objc RecordReferenceRangeCell.(null) <stripped>
WARNING: couldn't find address 0x1423c0006acc0 (0x23c0006acc0) in binary!
	0x14230  @objc RecordReferenceRangeCell.(null) <stripped>

	// Swift methods
	0x147310  func <stripped> // getter 
	0x1473a0  func <stripped> // setter 
	0x147450  func <stripped> // modifyCoroutine 
 }

 class HealthRecordsUI.RecordDataSourceCell : UITableViewCell /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let brandView : WDMedicalRecordBrandView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x133d8000679a0 (0x3d8000679a0) in binary!
	0x19918  @objc RecordDataSourceCell.(null) <stripped>
WARNING: couldn't find address 0x173dc00067cc8 (0x3dc00067cc8) in binary!
	0x195b0  @objc RecordDataSourceCell.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x484fffed228  @objc RecordDataSourceCell.(null) <stripped>
	0x404fffed2c0  @objc RecordDataSourceCell.ãNIãVMãIã^Hâ«Hã5ê» <stripped>

	// Swift methods
	0x1478c0  func <stripped> // method 
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
	let lock : Ô

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1423c0006acc0 (0x23c0006acc0) in binary!
	0x14230  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x1b65400066d30 (0x65400066d30) in binary!
	0x14218  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x1b63c00069ee8 (0x63c00069ee8) in binary!
	0x197c0  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x197b400066d10 (0x7b400066d10) in binary!
	0x19458  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x524ffff2430  @objc ProfileManager.(null) <stripped>
	0x0  @objc ProfileManager.Ë◊Ä <stripped>
WARNING: couldn't find address 0x3fd3333333333333 (0x33333333333) in binary!
	0x0  @objc ProfileManager.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x0  @objc ProfileManager.(null) <stripped>

	// Swift methods
	0x14a690  func <stripped> // getter 
	0x14a850  func <stripped> // getter 
	0x14a8f0  func <stripped> // setter 
	0x14a9f0  func <stripped> // modifyCoroutine 
	0x14afc0  func <stripped> // method 
	0x14b0e0  func <stripped> // method 
	0x14b2d0  func <stripped> // method 
	0x14b4a0  func <stripped> // method 
 }

 class HealthRecordsUI.ProcedureRecordFormatter : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : HKConceptStore
	let context : MedicalRecordFormatterContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x141d400067748 (0x1d400067748) in binary!
	0x19438  @objc ProcedureRecordFormatter.(null) <stripped>
WARNING: couldn't find address 0x4014000000000000 (0x0) in binary!
	0x33333333333  @objc ProcedureRecordFormatter.(null) <stripped>

	// Swift methods
	0x14bd60  class func ProcedureRecordFormatter.__allocating_init(store:context:) // init 
	0x14be60  func <stripped> // method 
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
