 protocol HealthExperience.MedicalIDAvailabilityProvider // 1 requirements
 {
	// getter
 }
 protocol HealthExperience.FeatureStatusSortHint // 3 requirements
 {
	// class base protocol
	// getter
	// getter
 }
 protocol HealthExperience.SectionedDataSourceItem // 2 requirements
 {
	// getter
	// getter
 }
 protocol HealthExperience.SectionedDataSourceItemTitleProviding // 1 requirements
 {
	// getter
 }
 protocol HealthExperience.SectionedDataSourceIdentifying // 2 requirements
 {
	// getter
	// getter
 }
 protocol HealthExperience.SectionedDataSource // 15 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// method
	// method
	// method
	// method
	// method
	// method
	// getter
	// getter
	// method
	// method
	// method
 }
 protocol HealthExperience.SupplementaryItemDataSource // 1 requirements
 {
	// method
 }
 protocol HealthExperience.SectionedDataSourceEventHandler // 1 requirements
 {
	// method
 }
 protocol HealthExperience.FavoritablesProvider // 1 requirements
 {
	// getter
 }
 protocol HealthExperience.CycleTrackingFavoritesProviderObserver // 1 requirements
 {
	// method
 }
 protocol HealthExperience.ObservableConvertible // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol HealthExperience.ManagedObjectContextOperating // 1 requirements
 {
	// getter
 }
 protocol HealthExperience.RunLoopObserving // 1 requirements
 {
	// method
 }
 protocol HealthExperience.AsyncPrecondition // 1 requirements
 {
	// method
 }
 protocol HealthExperience.HealthKitType // 3 requirements
 {
	// class associated type access function
	// class getter
	// class getter
 }
 protocol HealthExperience.AnalyticsDictionaryProviding // 1 requirements
 {
	// getter
 }
 protocol HealthExperience.AnalyticsEventProviding // 1 requirements
 {
	// class getter
 }
 protocol HealthExperience.AnalyticsSubmitting // 2 requirements
 {
	// class base protocol
	// class base protocol
 }
 protocol HealthExperience.AnalyticsTransforming // 0 requirements
 {
 }
 protocol HealthExperience.ObjectTypeConvertable // 1 requirements
 {
	// getter
 }
 protocol HealthExperience.Queryable // 1 requirements
 {
	// getter
 }
 protocol HealthExperience.SuggestedActionDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol HealthExperience.FamilyMemberPhotoFetcher // 1 requirements
 {
	// method
 }
 protocol HealthExperience.MonogramRenderer // 1 requirements
 {
	// method
 }
 protocol HealthExperience.ProfileInformation // 3 requirements
 {
	// getter
	// getter
	// getter
 }
 protocol HealthExperience.Displayable // 3 requirements
 {
	// getter
	// method
	// method
 }

 struct __C_Synthesized.HKError {

	// Properties
	let _nsError : NSError
 }

 class __C.CFRunLoopObserver {
 enum __C.HKWheelchairUse { }

 enum __C.HKActivityMoveMode { }

 class __C.CFData {
 enum __C.HKProfileType { }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 enum __C._HKDataTypeCode { }

 enum __C.Code { }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : œ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : œ
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : œ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : œ
 }

 class HealthExperience.MedicationRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BloodGlucose : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.Diarrhea : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryFatPolyunsaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.SignalListener : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let stateDumpSignalSource : OS_dispatch_source_signal // +0x10 (0x8)

	// Swift methods
	0x4e20  func <stripped> // method 
 }

 class HealthExperience.Acne : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.VitalSignRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MoodChanges : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryWater : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryChloride : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MindfulSession : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.WheelchairUseChange : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ActivityMoveModeChange : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.WaistCircumference : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DataSourceWithSectionItemLimit {
 class HealthExperience.DietaryBiotin : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryVitaminD : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ProfileIdentifiersPublisher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let profileStore : HKProfileStore

	// Swift methods
	0xa6b0  class func HKProfileStore.ProfileIdentifiersPublisher.__allocating_init(profileStore:) // init 
 }

 class HealthExperience.Inner {
 struct HealthExperience.DefaultMedicalIDAvailabilityProvider: MedicalIDAvailabilityProvider { }

 class HealthExperience.DietaryCopper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AsynchronousProgressOperation : AsynchronousOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timeout : 1 // +0xfeedfacf (0x0)
	var operationTimedOut : Bool // +0x3 (0x1)
	var progress : NSProgress? // +0x87 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe1cc00035848 (0x1cc00035848) in binary!
	0xe1c8  @objc AsynchronousProgressOperation.(null) <stripped>
WARNING: couldn't find address 0xe1b4000356b0 (0x1b4000356b0) in binary!
	0xa8000000c  @objc AsynchronousProgressOperation.(null) <stripped>
WARNING: couldn't find address 0xdfea00035688 (0x7ea00035688) in binary!
	0xdfde  @objc AsynchronousProgressOperation.(null) <stripped>

	// Swift methods
	0xc870  func <stripped> // getter 
	0xc8c0  func <stripped> // setter 
	0xc920  func <stripped> // modifyCoroutine 
	0xc9e0  func <stripped> // getter 
	0xca10  func <stripped> // setter 
	0xca50  func <stripped> // modifyCoroutine 
	0xcb50  func <stripped> // getter 
	0xcb90  func <stripped> // setter 
	0xcc00  func <stripped> // modifyCoroutine 
	0xcc70  func <stripped> // method 
	0xcd60  func <stripped> // method 
	0xd1d0  func <stripped> // method 
 }

 struct HealthExperience.FeatureStatusConfiguration {

	// Properties
	let titleName : String // +0x0
	var featureStatusKind : FeatureStatusKind // +0x10
	let imageData : ImageData // +0x18
	let accessoryTitle : String? // +0x38
	let primaryDescriptionContent : [String]? // +0x48
	let secondaryDescription : String? // +0x50
 }

 struct HealthExperience.ImageData {

	// Properties
	let name : String // +0x0
	let bundleIdentifier : String? // +0x10
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case titleName  
	case featureStatusKind  
	case imageData  
	case accessoryTitle  
	case primaryDescriptionContent  
	case secondaryDescription  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case name  
	case bundleIdentifier  
 }

 class HealthExperience.AsynchronousOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var _autoFinishesOnCancel : Bool // +0x8 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let operationState : eÌ // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let workLock : ÈÓ // +0x18 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdfea00035688 (0x7ea00035688) in binary!
	0xdfde  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0xdfd2000357f8 (0x7d2000357f8) in binary!
	0xdfc6  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0xe16c00035650 (0x16c00035650) in binary!
	0xe160  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0xe154000357d0 (0x154000357d0) in binary!
	0xe150  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0xe14400035670 (0x14400035670) in binary!
	0xe130  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x644fff99c38  @objc AsynchronousOperation.(null) <stripped>
	0xfff99ee0  @objc AsynchronousOperation.Hâ√Lã=ñ
 <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x5dcfff9d558  @objc AsynchronousOperation.(null) <stripped>
	0xcc000356b8  @objc AsynchronousOperation.UHâÂ]Èf˘ˇˇfD <stripped>
WARNING: couldn't find address 0xfff9d588 (0xfff9d588) in binary!
	0x41c00035590  @objc AsynchronousOperation.(null) <stripped>

	// Swift methods
	0x10f00  func <stripped> // getter 
	0x10f30  func <stripped> // setter 
	0x10f70  func <stripped> // modifyCoroutine 
	0x10fc0  func <stripped> // getter 
	0x11000  func <stripped> // setter 
	0x113f0  func <stripped> // modifyCoroutine 
	0x11470  func <stripped> // method 
	0x11500  func <stripped> // method 
	0x11570  func <stripped> // method 
	0x120d0  func <stripped> // method 
 }

 enum HealthExperience.ExecutionState {

	// Properties
	case ready  
	case executing  
	case finished  
 }

 struct HealthExperience.OperationState {

	// Properties
	let cancelled : Bool // +0x0
	let didBeginExecution : Bool // +0x1
	let didCleanUp : Bool // +0x2
	let executionState : ExecutionState // +0x3
 }

 class HealthExperience.IntermenstrualBleeding : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryMolybdenum : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum HealthExperience.FeatureStatusDomain {

	// Properties
	case safety  
	case heart  
	case respiratory  
	case hearing  
	case cleanliness  
 }

 enum HealthExperience.Safety {

	// Properties
	case medicalID  
	case emergencySOS  
	case fallDetection  
 }

 enum HealthExperience.Heart {

	// Properties
	case lowHeartRateNotifications  
	case highHeartRateNotifications  
	case irregularRhythmNotifications  
	case ecgApp  
 }

 enum HealthExperience.Respiratory {

	// Properties
	case bloodOxygen  
 }

 enum HealthExperience.Hearing {

	// Properties
	case noiseNotifications  
 }

 enum HealthExperience.Cleanliness {

	// Properties
	case handwashing  
 }

 class HealthExperience.BloodPressureSystolic : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MedicalIDFetchOperation : AsynchronousOperation {

	// Properties
	var medicalIDData : _HKMedicalIDData?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var fetchError : ÈÒ
	let medicalIDStore : HKMedicalIDStore

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe11c00035798 (0x11c00035798) in binary!
	0xe118  @objc MedicalIDFetchOperation.(null) <stripped>
WARNING: couldn't find address 0xe10400035600 (0x10400035600) in binary!
	0x28000000c  @objc MedicalIDFetchOperation.(null) <stripped>
	0xe0e0  _block_destroy_helper.14

	// Swift methods
	0x146c0  func <stripped> // method 
 }

 class HealthExperience.DebouncedDispatchItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var block : ()
	var queue : OS_dispatch_queue
	var debounceInterval : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var workItem : SÏ

	// Swift methods
	0x14c30  func <stripped> // getter 
	0x14c70  func <stripped> // setter 
	0x14cb0  func <stripped> // modifyCoroutine 
	0x14d70  func <stripped> // getter 
	0x14da0  func <stripped> // setter 
	0x14de0  func <stripped> // modifyCoroutine 
	0x14e90  func <stripped> // getter 
	0x14ec0  func <stripped> // setter 
	0x14f00  func <stripped> // modifyCoroutine 
	0x14f40  func <stripped> // method 
	0x14fb0  func <stripped> // method 
	0x153b0  class func DebouncedDispatchItem.__allocating_init(queue:debounceLength:block:) // init 
 }

 class HealthExperience.InsulinDelivery : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.WristEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.WatchActivation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum HealthExperience.UserDefaultsKeys { }

 enum HealthExperience.MedicalIDDataResult {

	// Properties
	case setup : _HKMedicalIDData
	case unknown  
	case unsupported  
	case notSetup  
 }

 class HealthExperience.MedicalIDCache : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _medicalIDDataResult : ˜Ì // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let medicalIDFetchOperation : „Î // +0x0 (0x8)
	var medicalIDChangeObserver : MedicalIDChangeObserver // +0x0 (0x8)
	let medicalIDStore : HKMedicalIDStore // +0x6100085 (0x8)
	var medicalIDFetchQueue : NSOperationQueue // +0x19 (0x8)

	// ObjC -> Swift bridged methods
	0xe0e0  _block_destroy_helper.14
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff9d588  @objc MedicalIDCache.(null) <stripped>

	// Swift methods
	0x16a10  func <stripped> // getter 
	0x16a70  func <stripped> // setter 
	0x16ad0  func <stripped> // modifyCoroutine 
	0x16c90  func <stripped> // getter 
	0x16cf0  func <stripped> // setter 
	0x16d50  func <stripped> // modifyCoroutine 
	0x16ee0  func <stripped> // getter 
	0x17020  func <stripped> // getter 
	0x17060  func <stripped> // setter 
	0x170b0  func <stripped> // modifyCoroutine 
	0x17150  class func MedicalIDCache.__allocating_init(medicalIDStore:) // init 
	0x17500  func <stripped> // method 
	0x17780  func <stripped> // method 
	0x17be0  func <stripped> // method 
 }

 class HealthExperience.RestingHeartRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryFolate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthExperience.CodableImage {

	// Properties
	var wrappedValue : UIImage? // +0x0
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case imageData  
 }

 class HealthExperience.DietaryMagnesium : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryVitaminK : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.FetchedResultsControllerDataSource {
 class HealthExperience.DietaryCholesterol : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryIron : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.SexualActivity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryPantothenicAcid : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.Height : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum HealthExperience.CloudSyncRestoreState {

	// Properties
	case inProgress  
	case failed  
	case completed  
 }

 enum HealthExperience.CloudSyncState {

	// Properties
	case error : CloudSyncError
WARNING: couldn't find address 0x0 (0x0) in binary!
	case backedUp : eÈ
	case disabled  
	case notBackedUp  
 }

 enum HealthExperience.CloudSyncError {

	// Properties
	case iCloudStorageFull  
	case iCloudCFU  
	case iCloudFutureProtocolVersion  
	case unknown  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case disabled  
	case error  
	case cloudSyncError  
	case backedUp  
	case lastBackedUpDate  
	case notBackedUp  
 }

 class HealthExperience.BloodAlcoholContent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AppetiteChanges : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthExperience.SectionedDataSourceSectionIdentifier: SectionedDataSourceIdentifying {

	// Properties
	let dataSourceIdentifer : String // +0x0
	let identifier : String // +0x10
 }

 struct HealthExperience.SectionedDataSourceItemIdentifier: SectionedDataSourceIdentifying {

	// Properties
	let dataSourceIdentifer : String // +0x0
	let identifier : String // +0x10
 }

 enum HealthExperience.DataSourceError {

	// Properties
	case invalid : (error: String)
 }

 class HealthExperience.CloudSyncEventPublisherObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let healthStore : HKHealthStore
	var observer : HKCloudSyncObserver?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publisher : ·È
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subject : Í

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xf41c00035590 (0x41c00035590) in binary!
	0xf410  @objc CloudSyncEventPublisherObserver.(null) <stripped>
WARNING: couldn't find address 0xea5000035568 (0x25000035568) in binary!
	0xf3f8  @objc CloudSyncEventPublisherObserver.(null) <stripped>
WARNING: couldn't find address 0xe08c000355b8 (0x8c000355b8) in binary!
	0xe078  @objc CloudSyncEventPublisherObserver.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x64cfffb7f70  @objc CloudSyncEventPublisherObserver.(null) <stripped>
	0x64cfffb8508  @objc CloudSyncEventPublisherObserver.÷Lâ˜Hâ∆Ë˛µ <stripped>
	0x4dcfffb8b40  @objc CloudSyncEventPublisherObserver.à <stripped>

	// Swift methods
	0x29750  class func CloudSyncEventPublisherObserver.__allocating_init(healthStore:makeCloudSyncObserver:) // init 
	0x297f0  func <stripped> // method 
	0x29810  func <stripped> // method 
	0x298e0  func <stripped> // method 
	0x29990  func <stripped> // method 
 }

 enum HealthExperience.CloudSyncEvent {

	// Properties
	case syncStarted : NSProgress
WARNING: couldn't find address 0x0 (0x0) in binary!
	case syncFailed : ÈÒ
	case statusUpdated : HKCloudSyncObserverStatus
	case syncCompleted  
 }

 class HealthExperience.DietarySugar : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DataTypesHaveSomeDataPublisher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _haveSomeData : Í // +0x0 (0x0)
	let healthStore : HKHealthStore // +0x45545f5f (0x8)
	var query : _HKDatabaseChangesQuery? // +0x0 (0x8)

	// Swift methods
	0x2a450  func <stripped> // getter 
	0x2a4b0  func <stripped> // setter 
	0x2a510  func <stripped> // modifyCoroutine 
	0x2a6d0  func <stripped> // getter 
	0x2a730  func <stripped> // setter 
	0x2a790  func <stripped> // modifyCoroutine 
	0x2a970  class func DataTypesHaveSomeDataPublisher.__allocating_init(healthStore:types:anchor:) // init 
	0x2ad90  func <stripped> // method 
	0x2af00  func <stripped> // method 
 }

 enum HealthExperience.Data {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case error : ÈÒ
	case some  
	case none  
	case unknown  
 }

 class HealthExperience.DietaryManganese : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.PeripheralPerfusionIndex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BodyTemperature : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.StorageLocations : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BasalEnergyBurned : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AppleStandHourGoal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MutableArrayDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var eventHandler : SectionedDataSourceEventHandler
	var promise : Promise
	let changes : Observable
	var arrangedSections : ArrayDataSourceSection
	var $__lazy_storage_$_identifier : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : ÈÓ

	// Swift methods
	0x2c690  func <stripped> // getter 
	0x2c6c0  func <stripped> // setter 
	0x2c710  func <stripped> // modifyCoroutine 
	0x2c870  func <stripped> // getter 
	0x2c930  func <stripped> // getter 
	0x2c960  func <stripped> // setter 
	0x2c9a0  func <stripped> // modifyCoroutine 
	0x2ca30  func <stripped> // getter 
	0x2cbc0  func <stripped> // setter 
	0x2cbe0  func <stripped> // modifyCoroutine 
	0x2cc30  func <stripped> // getter 
	0x2cca0  class func MutableArrayDataSource.__allocating_init(arrangedSections:) // init 
	0x2cd20  func <stripped> // method 
	0x2cde0  func <stripped> // method 
	0x2cf90  func <stripped> // method 
	0x2d150  func <stripped> // method 
	0x2d610  func <stripped> // method 
	0x2dab0  func <stripped> // method 
	0x2df60  func <stripped> // method 
	0x2e2a0  func <stripped> // method 
	0x2e610  func <stripped> // method 
	0x2e870  func <stripped> // getter 
	0x2e8a0  func <stripped> // method 
	0x2e950  func <stripped> // method 
	0x2e9e0  func <stripped> // method 
	0x2eba0  func <stripped> // method 
	0x2ee00  func <stripped> // method 
	0x2eea0  func <stripped> // method 
 }

 class HealthExperience.UVExposure : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.USR1SignalDebuggingResponderListener : SignalListener {

	// Properties
	let notificationCenter : NSNotificationCenter

	// Swift methods
	0x31650  class func USR1SignalDebuggingResponderListener.__allocating_init() // init 
 }

 struct HealthExperience.DefaultFavoritablesProvider: FavoritablesProvider {

	// Properties
	let wheelchairUse : HKWheelchairUse // +0x0
	let hasPairedWatch : Bool // +0x8
 }

 class HealthExperience.DistanceCycling : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AbdominalCramps : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.CoachingEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.FavoritesProvider : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let observers : HKObserverSet<FavoritesProviderObserver>
	let favoriteDisplayTypesController : WDFavoriteDisplayTypesController
	let healthStore : HKHealthStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	let nonspecificUpdatesDisabled : øÂ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe06c00035520 (0x6c00035520) in binary!
	0xe058  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xea0000035920 (0x20000035920) in binary!
	0xe9f4  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xe9e800035900 (0x1e800035900) in binary!
	0xde76  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xd238000354c8 (0x238000354c8) in binary!
	0xde5e  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xe00c00035538 (0xc00035538) in binary!
	0xdff8  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x46cfffb9210  @objc FavoritesProvider.(null) <stripped>
	0x7c400035640  @objc FavoritesProvider.@ <stripped>
WARNING: couldn't find address 0x354ecfffbe3e0 (0x4ecfffbe3e0) in binary!
	0x7ac000354a8  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xfffbeaf8 (0xfffbeaf8) in binary!
	0x14800035830  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0x3582cfffbf030 (0x2cfffbf030) in binary!
	0xcc00035838  @objc FavoritesProvider.(null) <stripped>

	// Swift methods
	0x32bb0  func <stripped> // getter 
	0x32c80  class func FavoritesProvider.__allocating_init(controller:healthStore:) // init 
	0x32fe0  func <stripped> // method 
	0x33050  func <stripped> // method 
	0x330d0  func <stripped> // method 
	0x331f0  func <stripped> // method 
	0x33760  func <stripped> // getter 
	0x337a0  func <stripped> // method 
	0x338b0  func <stripped> // getter 
	0x338d0  func <stripped> // method 
	0x33940  func <stripped> // method 
	0x33ce0  func <stripped> // method 
 }

 class HealthExperience.HideableDataSource {
 enum HealthExperience.Visibility {

	// Properties
	case hidden  
	case visible  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case activityMoveMode  
 }

 class HealthExperience.DietaryFatSaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.SetDefaultFavoritesOperation : AsynchronousOperation {

	// Properties
	let favoritesProvider : FavoritesProvider
	let healthStore : HKHealthStore
	let precondition : AsyncPrecondition
	let timeout : Int
	var $__lazy_storage_$_defaultFavoritablesProvider : FavoritablesProvider
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timeoutWork : YÁ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdfc400035640 (0x7c400035640) in binary!
	0xdfc0  @objc SetDefaultFavoritesOperation.(null) <stripped>
WARNING: couldn't find address 0xdfac000354a8 (0x7ac000354a8) in binary!
	0x38000000c  @objc SetDefaultFavoritesOperation.(null) <stripped>
WARNING: couldn't find address 0xe94800035830 (0x14800035830) in binary!
	0xe93c  @objc SetDefaultFavoritesOperation.(null) <stripped>

	// Swift methods
	0x38980  func <stripped> // getter 
	0x38aa0  func <stripped> // getter 
	0x38e90  class func SetDefaultFavoritesOperation.__allocating_init(favoritesProvider:healthStore:precondition:timeout:) // init 
	0x39080  func <stripped> // method 
 }

 class HealthExperience.ImmunizationRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryEnergyConsumed : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryVitaminB12 : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AppStoreDataProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let bag : AMSBag
	var $__lazy_storage_$_tokenService : AMSMediaTokenService?
	var $__lazy_storage_$_currentStoreFront : NSString??
	var $__lazy_storage_$_session : AMSURLSession?
	var $__lazy_storage_$_encoder : AMSMediaRequestEncoder?

	// Swift methods
	0x3aef0  func <stripped> // getter 
	0x3afc0  func <stripped> // getter 
	0x3b020  func <stripped> // getter 
	0x3b0c0  func <stripped> // getter 
	0x3b1f0  func <stripped> // getter 
	0x3b220  class func AppStoreDataProvider.__allocating_init() // init 
	0x3b510  func <stripped> // method 
	0x3b570  func <stripped> // method 
	0x3b5c0  func <stripped> // method 
	0x3b650  func <stripped> // method 
	0x3bd40  func <stripped> // method 
	0x3e200  func <stripped> // method 
 }

 enum HealthExperience.AMSError {

	// Properties
	case incorrectCast  
	case tokenFetch  
	case urlComponent  
	case decode  
	case unknown  
	case noData  
 }

 class HealthExperience.LowHeartRateEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthExperience.ArrayDataSourceSection {

	// Properties
	let title : String? // +0x0
	var arrangedItems : SectionedDataSourceItem // +0x10
	var identifier : String // +0x18
 }

 class HealthExperience.DietaryVitaminA : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ElectrodermalActivity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryFatTotal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum HealthExperience.FavoritesChangeLocation {

	// Properties
	case none  
	case editFavorites  
	case dataTypeDetailRoom  
 }

 class HealthExperience.DietaryCaffeine : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BriskMinuteGoal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.Distance : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryZinc : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.HeartStudyEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.SaveManagedObjectContextOperation : AsynchronousOperation {

	// Properties
	let context : NSManagedObjectContext

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdf64000355e0 (0x764000355e0) in binary!
	0xdf60  @objc SaveManagedObjectContextOperation.(null) <stripped>
WARNING: couldn't find address 0xdf4c00035448 (0x74c00035448) in binary!
	0x48000000c  @objc SaveManagedObjectContextOperation.(null) <stripped>
WARNING: couldn't find address 0xdf34000355b0 (0x734000355b0) in binary!
	0xdf30  @objc SaveManagedObjectContextOperation.(null) <stripped>

	// Swift methods
	0x423c0  class func SaveManagedObjectContextOperation.__allocating_init(context:) // init 
 }

 class HealthExperience.AppleMoveTime : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.Headache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BasalBodyTemperature : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BodyMassIndex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryPotassium : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AsynchronousBlockOperation : AsynchronousOperation {

	// Properties
	let workBlock : AsynchronousBlockOperation
	let debugIdentifier : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdf34000355b0 (0x734000355b0) in binary!
	0xdf30  @objc AsynchronousBlockOperation.(null) <stripped>
WARNING: couldn't find address 0xdf2400035450 (0x72400035450) in binary!
	0xdf10  @objc AsynchronousBlockOperation.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x794fffc9568  @objc AsynchronousBlockOperation.(null) <stripped>
	0xfffc95a0  @objc AsynchronousBlockOperation.®HãMòIâŒIâ›LãeêËå™ <stripped>

	// Swift methods
	0x42d50  class func AsynchronousBlockOperation.__allocating_init(debugIdentifier:_:) // init 
 }

 class HealthExperience.BodyMass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.RunLoopObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var useMockUnitTestCompletion : Bool
	var $__lazy_storage_$_mockCompletion : ()?
	var mainRunLoopObserver : CFRunLoopObserver
	var observerDelegate : RunLoopObserving

	// Swift methods
 }

 struct HealthExperience.CompoundAsyncPrecondition: AsyncPrecondition {

	// Properties
	let asyncPreconditions : AsyncPrecondition // +0x0
 }

 class HealthExperience.UserDefaultsQueryPrecondition : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let userDefaults : WDUserDefaults
	let key : String
	let shouldProceedIfNoValue : Bool
	let evaluate : (_:)

	// Swift methods
	0x439f0  func <stripped> // method 
 }

 class HealthExperience.HasUpgradedFavoritesPrecondition : UserDefaultsQueryPrecondition {
	// Swift methods
 }

 class HealthExperience.HasNotChangedFavoritesPrecondition : UserDefaultsQueryPrecondition {
	// Swift methods
 }

 class HealthExperience.HasNoFavoritesPrecondition : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let favoritesProvider : FavoritesProvider
	var preconditionCompletion : (_:)?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe8b000035798 (0xb000035798) in binary!
	0xe8a4  @objc HasNoFavoritesPrecondition.(null) <stripped>
WARNING: couldn't find address 0xd034000357a0 (0x34000357a0) in binary!
	0x18000000c  @objc HasNoFavoritesPrecondition.(null) <stripped>
WARNING: couldn't find address 0xe880000356e0 (0x80000356e0) in binary!
	0x48000000c  @objc HasNoFavoritesPrecondition.(null) <stripped>

	// Swift methods
 }

 class HealthExperience.DietaryCarbohydrates : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthExperience.RecommendedSleepAppUserData {

	// Properties
	let title : String // +0x0
	let bundleID : String // +0x10
	let itunesStoreID : String // +0x20
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case title  
	case bundleID  
	case itunesStoreID  
 }

 enum HealthExperience.SectionedDataSourceChangeset {

	// Properties
	case insertSection : Int
	case removeSection : Int
	case reloadSection : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	case insertItem : ıﬂ
WARNING: couldn't find address 0x0 (0x0) in binary!
	case removeItem : ıﬂ
WARNING: couldn't find address 0x0 (0x0) in binary!
	case moveItem : Ôﬂ
WARNING: couldn't find address 0x0 (0x0) in binary!
	case reloadItem : ıﬂ
	case initialData  
 }

 class HealthExperience.OperationQueueObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : NSOperationQueue
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lock : ÈÓ
	var currentOperations : Set<NSOperation>

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe880000356e0 (0x80000356e0) in binary!
	0x48000000c  @objc OperationQueueObserver.(null) <stripped>

	// Swift methods
	0x47920  class func OperationQueueObserver.__allocating_init(queue:) // init 
	0x47a40  func <stripped> // method 
	0x47b40  func <stripped> // method 
	0x481b0  func <stripped> // getter 
	0x482a0  func <stripped> // getter 
	0x48330  func <stripped> // method 
	0x48390  func <stripped> // method 
 }

 class HealthExperience.SwimmingStrokeCount : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BloodPressure : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ConditionRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BloodPressureDiastolic : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BreastPain : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthExperience.Observable {

	// Properties
	let body : ObservableBody
 }

 class HealthExperience.Promise {
 class HealthExperience.ObservableBody {
 class HealthExperience.ActivityCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthExperience.UserDefault {

	// Properties
	let key : String
	let userDefaults : NSUserDefaults
	let fallbackValue : A
	let isAppleInternalOnly : Bool
 }

 class HealthExperience.ArrayDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var eventHandler : SectionedDataSourceEventHandler
	var $__lazy_storage_$_debugDescription : String?
	var $__lazy_storage_$_identifier : String?
	let arrangedSections : ArrayDataSourceSection

	// Swift methods
	0x4e700  func <stripped> // getter 
	0x4e730  func <stripped> // setter 
	0x4e780  func <stripped> // modifyCoroutine 
	0x4e8a0  func <stripped> // getter 
	0x4ea20  func <stripped> // setter 
	0x4ea40  func <stripped> // modifyCoroutine 
	0x4eae0  func <stripped> // getter 
	0x4ec70  func <stripped> // setter 
	0x4ec90  func <stripped> // modifyCoroutine 
	0x4ece0  func <stripped> // getter 
	0x4ecf0  func <stripped> // method 
	0x4e5e0  class func ArrayDataSource.__allocating_init(arrangedSections:) // init 
	0x4ed90  class func ArrayDataSource.__allocating_init(_:) // init 
	0x4ee10  func <stripped> // getter 
	0x4ee20  func <stripped> // getter 
	0x4ee70  func <stripped> // method 
	0x4eee0  func <stripped> // method 
	0x4f090  func <stripped> // method 
	0x4f0f0  func <stripped> // method 
	0x4f330  func <stripped> // method 
	0x4f3c0  func <stripped> // method 
 }

 class HealthExperience.InhalerUsage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AppleMoveTimeGoal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.LowerBackPain : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MenstrualFlow : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.StepCount : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.OvulationTestResult : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.Bloating : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthExperience.EditorialItemsList {

	// Properties
	let items : EditorialItem // +0x0
 }

 struct HealthExperience.EditorialItem {

	// Properties
	let id : String? // +0x0
	let relationship : Relationship // +0x10
 }

 struct HealthExperience.Relationship {

	// Properties
	let cardContent : CardContent // +0x0
 }

 struct HealthExperience.CardContent {

	// Properties
	let cardItems : CardItem // +0x0
 }

 struct HealthExperience.CardItem {

	// Properties
	let storeIdentifier : String? // +0x0
	let attributes : Attributes // +0x10
 }

 struct HealthExperience.Attributes {

	// Properties
	let artistName : String? // +0x0
	let platform : Platform // +0x10
	let displayName : String? // +0xb0
 }

 struct HealthExperience.Platform {

	// Properties
	let iOS : iOSAttributes // +0x0
 }

 struct HealthExperience.iOSAttributes {

	// Properties
	let subtitle : String? // +0x0
	let bundleId : String? // +0x10
	let artwork : Artwork // +0x20
 }

 struct HealthExperience.Artwork {

	// Properties
	let width : Int? // +0x0
	let height : Int? // +0x10
	let url : String? // +0x20
	let backgroundColor : String? // +0x30
	let textColor1 : String? // +0x40
	let textColor2 : String? // +0x50
	let textColor3 : String? // +0x60
	let textColor4 : String? // +0x70
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case width  
	case height  
	case url  
	case backgroundColor  
	case textColor1  
	case textColor2  
	case textColor3  
	case textColor4  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case subtitle  
	case bundleId  
	case artwork  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case iOS  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case artistName  
	case platform  
	case displayName  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case storeIdentifier  
	case attributes  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case cardItems  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case cardContent  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case id  
	case relationship  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case items  
 }

 class HealthExperience.EnvironmentalAudioExposure : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.PushCount : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.SampleQuery {
 enum HealthExperience.QueryError {

	// Properties
	case invalidArgument : String
 }

 class HealthExperience.FirstRestoreNotInProgressPrecondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var cloudSyncObserver : HKCloudSyncObserver?
	var preconditionCompletion : (_:)?
	let healthStore : HKHealthStore
	let waitUntilShouldProceed : Bool
	var completionQueue : OS_dispatch_queue?

	// ObjC -> Swift bridged methods
	0xdeb0  dispatch thunk of AsynchronousProgressOperation.interceptCancellationHandler()
	0xde90  dispatch thunk of AsynchronousProgressOperation.timeoutOccured()
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x344fffe0ed8  @objc FirstRestoreNotInProgressPrecondition.(null) <stripped>
	0x31cfffe0f00  @objc FirstRestoreNotInProgressPrecondition.Lãm»Mâ¸Ë6° <stripped>

	// Swift methods
	0x5b470  class func FirstRestoreNotInProgressPrecondition.__allocating_init(healthStore:waitUntilShouldProceed:completionQueue:) // init 
	0x5b740  func <stripped> // method 
	0x5b7f0  func <stripped> // method 
 }

 class HealthExperience.DietaryCalcium : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AllergyRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthExperience.CodableBox {

	// Properties
	var wrappedValue : A
 }

 enum HealthExperience.CodableBoxError {

	// Properties
	case decodingError  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case data  
 }

 struct HealthExperience.SuggestedAction {

	// Properties
	let feedItemUniqueIdentifier : String // +0x0
 }

 class HealthExperience.HighHeartRateEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthExperience.FamilyCirclePhotoFetcher: FamilyMemberPhotoFetcher { }

 class HealthExperience.AppleExerciseTime : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthExperience.ContactsProfileInformation {

	// Properties
	let firstName : String // +0x0
	let lastName : String? // +0x10
	var image : UIImage? // +0x20
	let icloudAccount : String? // +0x28
 }

 class HealthExperience.HeartRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.Nausea : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DistanceDownhillSnowSports : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.Food : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietarySodium : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryFiber : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthExperience.ContactsMonogramRenderer: MonogramRenderer { }

 class HealthExperience.DietaryThiamin : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ComposableAsyncOperation : AsynchronousOperation {

	// Properties
	var automaticallyDispatchFinishOperation : Bool
	var childOperations : [NSOperation]
	var currentQueue : weak NSOperationQueue?
	var dispatchChildOperationsCalled : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xde4c00035378 (0x64c00035378) in binary!
	0xde38  @objc ComposableAsyncOperation.(null) <stripped>
WARNING: couldn't find address 0xde2c00035328 (0x62c00035328) in binary!
	0x25029232840  @objc ComposableAsyncOperation.(null) <stripped>
WARNING: couldn't find address 0x6c6165483a4d4152 (0x5483a4d4152) in binary!
	0x2065636e65  @objc ComposableAsyncOperation.(null) <stripped>

	// Swift methods
	0x5e930  func <stripped> // getter 
	0x5e960  func <stripped> // setter 
	0x5e9a0  func <stripped> // modifyCoroutine 
	0x5eaa0  func <stripped> // getter 
	0x5eae0  func <stripped> // setter 
	0x5eb30  func <stripped> // modifyCoroutine 
	0x5eca0  func <stripped> // method 
	0x5efb0  func <stripped> // method 
 }

 class HealthExperience.HotFlashes : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.CoverageRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.WalkingHeartRateAverage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AppleStandHour : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryVitaminB6 : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryVitaminE : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AudioExposureEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.PelvicPain : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryProtein : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.SectionMappingEventHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let childIndex : Int
	var source : CompoundSectionedDataSource

	// Swift methods
 }

 class HealthExperience.CompoundSectionedDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : OS_dispatch_queue
	var childDataSources : SectionedDataSource
	var eventHandler : SectionedDataSourceEventHandler
	let changes : Observable
	var promise : Promise
	var fullChangeSet : SectionedDataSourceChangeset
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lock : ÈÓ
	var currentRunLoopObserver : RunLoopObserver
	var identifier : String

	// Swift methods
	0x60590  func <stripped> // getter 
	0x60660  func <stripped> // getter 
	0x60690  func <stripped> // setter 
	0x606e0  func <stripped> // modifyCoroutine 
	0x60840  func <stripped> // getter 
	0x60910  func <stripped> // getter 
	0x60950  func <stripped> // setter 
	0x60990  func <stripped> // modifyCoroutine 
	0x609d0  func <stripped> // getter 
	0x60cf0  class func CompoundSectionedDataSource.__allocating_init(_:) // init 
	0x61550  func <stripped> // method 
	0x615c0  func <stripped> // method 
 }

 struct HealthExperience.FakeHeaderItem {

	// Properties
	var reuseIdentifier : String // +0x0
 }

 class HealthExperience.ToothbrushingEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryIodine : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.BodyFatPercentage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietarySelenium : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ActiveEnergyBurned : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryPhosphorus : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.CervicalMucusQuality : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.RespiratoryRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DistanceSwimming : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.CDA : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ProcedureRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AppleStandTime : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum HealthExperience.SleepCategories {

	// Properties
	case mindfulness  
	case journaling  
	case whiteNoise  
	case reading  
	case yoga  
	case homeWorkouts  
	case music  
	case podcasts  
	case wrapUpYourDay  
 }

 enum HealthExperience.SectionedDataSourceTransaction {

	// Properties
	case open : SectionedDataSourceChangeset
	case closed  
 }

 class HealthExperience.PeakExpiratoryFlowRate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ManagedProfileConnection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x680e0  class func ManagedProfileConnection.__allocating_init() // init 
	0x68140  func <stripped> // getter 
	0x68160  func <stripped> // getter 
	0x68220  func <stripped> // getter 
	0x68230  func <stripped> // method 
	0x68250  func <stripped> // method 
	0x682e0  func <stripped> // method 
 }

 enum HealthExperience.ProfileCreationError {

	// Properties
	case unexpected  
 }

 class HealthExperience.DietaryChromium : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.Constipation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.NumberOfTimesFallen : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.HeadphoneAudioExposure : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.SleepAnalysis : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ForcedExpiratoryVolume1 : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.LabResultRecord : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.NikeFuel : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryRiboflavin : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.CalorieGoal : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.OxygenSaturation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.FlightsClimbed : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.PrimarySecondaryDataSource {
 class HealthExperience.SectionedDataSourceCallbackEventHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let callback : SectionedDataSourceChangeset

	// Swift methods
 }

 class HealthExperience.DistanceWheelchair : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryNiacin : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.LeanBodyMass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum HealthExperience.FeatureStatusKind {

	// Properties
	case active  
	case inactive  
	case unavailableInvalidSettings  
	case unavailableNotSupported  
 }

 struct HealthExperience.FeatureStatusSupport { }

 class HealthExperience.VO2Max : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.HeartRateVariabilitySDNN : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthExperience.HealthKitProfileInformation {

	// Properties
	var firstName : String // +0x0
	var lastName : String? // +0x10
	var dsid : Int? // +0x20
	var syncResponse : SyncResponse // +0x30
	var profileImageInformation : ProfileImageInformation // +0x40
	var stopReceivingState : StopReceivingState // +0x80
	var activityMoveMode : HKActivityMoveMode // +0x88
	var hasDataInOtherActivityMoveMode : Bool // +0x90
	var _profileIdentifier : CodableBox // +0x98
	let reuseIdentifier : String // +0xa0
 }

 enum HealthExperience.StopReceivingState {

	// Properties
	case deleteInProgress  
	case deleteFailed  
 }

 struct HealthExperience.ProfileImageInformation {

	// Properties
	var firstName : String // +0x0
	var lastName : String? // +0x10
	var _monogramImage : CodableImage // +0x20
	var _photoImage : CodableImage // +0x28
	var reuseIdentifier : String // +0x30
 }

 struct HealthExperience.SyncResponse {

	// Properties
	var _observerStatus : CodableBox // +0x0
	var timedOut : Bool // +0x8
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case observerStatus  
	case timedOut  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case firstName  
	case lastName  
	case dsid  
	case syncResponse  
	case profileImageInformation  
	case stopReceivingState  
	case activityMoveMode  
	case hasDataInOtherActivityMoveMode  
	case profileIdentifier  
	case reuseIdentifier  
 }

 enum HealthExperience.CodingKeys {

	// Properties
	case firstName  
	case lastName  
	case monogramImage  
	case photoImage  
	case reuseIdentifier  
 }

 class HealthExperience.SleepChanges : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MappedDataSource {
 class HealthExperience.Publisher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let healthStore : HKHealthStore

	// Swift methods
	0x75d00  class func _HKDateRangeQuery.Publisher.__allocating_init(healthStore:) // init 
 }

 class HealthExperience.Inner {
 class HealthExperience.DietaryVitaminC : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.NotifydObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let notificationName : NotificationName
WARNING: couldn't find address 0x0 (0x0) in binary!
	var notifyToken : ´ÿ
	var eventHandler : NotifydObserver

	// Swift methods
	0x77aa0  class func NotifydObserver.__allocating_init(queue:notificationName:eventHandler:) // init 
 }

 enum HealthExperience.NotificationName {

	// Properties
	case mobileKeyBagLockStatus  
 }

 class HealthExperience.IrregularHeartRhythmEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.Fatigue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DietaryFatMonounsaturated : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.ForcedVitalCapacity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }
