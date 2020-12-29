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

 class __C.CFData {
 enum __C.HKActivityMoveMode { }

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
	var width : ·
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ·
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : ·
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : ·
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
	0x4b00  func <stripped> // method 
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
	0xa3c0  class func HKProfileStore.ProfileIdentifiersPublisher.__allocating_init(profileStore:) // init 
 }

 class HealthExperience.Inner {
 struct HealthExperience.DefaultMedicalIDAvailabilityProvider: MedicalIDAvailabilityProvider { }

 class HealthExperience.DietaryCopper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AsynchronousProgressOperation : AsynchronousOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timeout : ·‡ // +0xfeedfacf (0x0)
	var operationTimedOut : Bool // +0x3 (0x1)
	var progress : NSProgress? // +0x87 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe45c00032ba8 (0x45c00032ba8) in binary!
	0xe458  @objc AsynchronousProgressOperation.(null) <stripped>
WARNING: couldn't find address 0xe44400032a10 (0x44400032a10) in binary!
	0xa8000000c  @objc AsynchronousProgressOperation.(null) <stripped>
WARNING: couldn't find address 0xe27a000329e8 (0x27a000329e8) in binary!
	0xe26e  @objc AsynchronousProgressOperation.(null) <stripped>

	// Swift methods
	0xc5c0  func <stripped> // getter 
	0xc610  func <stripped> // setter 
	0xc670  func <stripped> // modifyCoroutine 
	0xc730  func <stripped> // getter 
	0xc760  func <stripped> // setter 
	0xc7a0  func <stripped> // modifyCoroutine 
	0xc8a0  func <stripped> // getter 
	0xc8e0  func <stripped> // setter 
	0xc950  func <stripped> // modifyCoroutine 
	0xc9c0  func <stripped> // method 
	0xcab0  func <stripped> // method 
	0xcf20  func <stripped> // method 
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
	let operationState : ﬁ // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let workLock : ôﬂ // +0x18 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe27a000329e8 (0x27a000329e8) in binary!
	0xe26e  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0xe26200032b58 (0x26200032b58) in binary!
	0xe256  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0xe3fc000329b0 (0x3fc000329b0) in binary!
	0xe3f0  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0xe3e400032b30 (0x3e400032b30) in binary!
	0xe3e0  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0xe3d4000329d0 (0x3d4000329d0) in binary!
	0xe3c0  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x1a4fff99078  @objc AsynchronousOperation.(null) <stripped>
	0xfff99320  @objc AsynchronousOperation.E∞Hâ]¿HâﬂLâˆËW <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x13cfff9c9a8  @objc AsynchronousOperation.(null) <stripped>
	0x35c00032a18  @objc AsynchronousOperation.ãj	 <stripped>
WARNING: couldn't find address 0xfff9c9d8 (0xfff9c9d8) in binary!
	0x6ac000328f0  @objc AsynchronousOperation.(null) <stripped>

	// Swift methods
	0x10c80  func <stripped> // getter 
	0x10cb0  func <stripped> // setter 
	0x10cf0  func <stripped> // modifyCoroutine 
	0x10d40  func <stripped> // getter 
	0x10d80  func <stripped> // setter 
	0x11170  func <stripped> // modifyCoroutine 
	0x111f0  func <stripped> // method 
	0x11280  func <stripped> // method 
	0x112f0  func <stripped> // method 
	0x11e90  func <stripped> // method 
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
	case cardioFitness  
 }

 enum HealthExperience.Respiratory {

	// Properties
	case bloodOxygen  
 }

 enum HealthExperience.Hearing {

	// Properties
	case noiseNotifications  
	case headphoneNotifications  
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
	var fetchError : ô‚
	let medicalIDStore : HKMedicalIDStore

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe3ac00032af8 (0x3ac00032af8) in binary!
	0xe3a8  @objc MedicalIDFetchOperation.(null) <stripped>
WARNING: couldn't find address 0xe39400032960 (0x39400032960) in binary!
	0x28000000c  @objc MedicalIDFetchOperation.(null) <stripped>
WARNING: couldn't find address 0xe38400032980 (0x38400032980) in binary!
	0xe370  @objc MedicalIDFetchOperation.(null) <stripped>

	// Swift methods
	0x147a0  func <stripped> // method 
 }

 class HealthExperience.DebouncedDispatchItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var block : ()
	var queue : OS_dispatch_queue
	var debounceInterval : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var workItem : ›

	// Swift methods
	0x14d10  func <stripped> // getter 
	0x14d50  func <stripped> // setter 
	0x14d90  func <stripped> // modifyCoroutine 
	0x14e50  func <stripped> // getter 
	0x14e80  func <stripped> // setter 
	0x14ec0  func <stripped> // modifyCoroutine 
	0x14f70  func <stripped> // getter 
	0x14fa0  func <stripped> // setter 
	0x14fe0  func <stripped> // modifyCoroutine 
	0x15020  func <stripped> // method 
	0x15090  func <stripped> // method 
	0x15490  class func DebouncedDispatchItem.__allocating_init(queue:debounceLength:block:) // init 
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
	var _medicalIDDataResult : ßﬁ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let medicalIDFetchOperation : ì‹ // +0x0 (0x8)
	var medicalIDChangeObserver : MedicalIDChangeObserver // +0x0 (0x8)
	let medicalIDStore : HKMedicalIDStore // +0x6100085 (0x8)
	var medicalIDFetchQueue : NSOperationQueue // +0x19 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe38400032980 (0x38400032980) in binary!
	0xe370  @objc MedicalIDCache.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff9c9d8  @objc MedicalIDCache.(null) <stripped>

	// Swift methods
	0x16b00  func <stripped> // getter 
	0x16b60  func <stripped> // setter 
	0x16bc0  func <stripped> // modifyCoroutine 
	0x16d80  func <stripped> // getter 
	0x16de0  func <stripped> // setter 
	0x16e40  func <stripped> // modifyCoroutine 
	0x16fd0  func <stripped> // getter 
	0x17110  func <stripped> // getter 
	0x17150  func <stripped> // setter 
	0x171a0  func <stripped> // modifyCoroutine 
	0x17240  class func MedicalIDCache.__allocating_init(medicalIDStore:) // init 
	0x175f0  func <stripped> // method 
	0x17870  func <stripped> // method 
	0x17cd0  func <stripped> // method 
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
	case backedUp : ⁄
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
	let publisher : ë⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subject : ø⁄

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xf6ac000328f0 (0x6ac000328f0) in binary!
	0xf6a0  @objc CloudSyncEventPublisherObserver.(null) <stripped>
WARNING: couldn't find address 0xece0000328c8 (0x4e0000328c8) in binary!
	0xf688  @objc CloudSyncEventPublisherObserver.(null) <stripped>
WARNING: couldn't find address 0xe31c00032918 (0x31c00032918) in binary!
	0xe308  @objc CloudSyncEventPublisherObserver.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x1acfffb7570  @objc CloudSyncEventPublisherObserver.(null) <stripped>
	0x1acfffb7b08  @objc CloudSyncEventPublisherObserver.]√fD <stripped>
	0x3cfffb8140  @objc CloudSyncEventPublisherObserver.´ <stripped>

	// Swift methods
	0x299b0  class func CloudSyncEventPublisherObserver.__allocating_init(healthStore:makeCloudSyncObserver:) // init 
	0x29a50  func <stripped> // method 
	0x29a70  func <stripped> // method 
	0x29b40  func <stripped> // method 
	0x29bf0  func <stripped> // method 
 }

 enum HealthExperience.CloudSyncEvent {

	// Properties
	case syncStarted : NSProgress
WARNING: couldn't find address 0x0 (0x0) in binary!
	case syncFailed : ô‚
	case statusUpdated : HKCloudSyncObserverStatus
	case syncCompleted  
 }

 class HealthExperience.DietarySugar : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DataTypesHaveSomeDataPublisher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _haveSomeData : ≥⁄ // +0x0 (0x0)
	let healthStore : HKHealthStore // +0x45545f5f (0x8)
	var query : _HKDatabaseChangesQuery? // +0x0 (0x8)

	// Swift methods
	0x2a6c0  func <stripped> // getter 
	0x2a720  func <stripped> // setter 
	0x2a780  func <stripped> // modifyCoroutine 
	0x2a940  func <stripped> // getter 
	0x2a9a0  func <stripped> // setter 
	0x2aa00  func <stripped> // modifyCoroutine 
	0x2abe0  class func DataTypesHaveSomeDataPublisher.__allocating_init(healthStore:types:anchor:) // init 
	0x2b000  func <stripped> // method 
	0x2b170  func <stripped> // method 
 }

 enum HealthExperience.Data {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case error : ô‚
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
	var lock : ôﬂ

	// Swift methods
	0x2c900  func <stripped> // getter 
	0x2c930  func <stripped> // setter 
	0x2c980  func <stripped> // modifyCoroutine 
	0x2cae0  func <stripped> // getter 
	0x2cba0  func <stripped> // getter 
	0x2cbd0  func <stripped> // setter 
	0x2cc10  func <stripped> // modifyCoroutine 
	0x2cca0  func <stripped> // getter 
	0x2ce30  func <stripped> // setter 
	0x2ce50  func <stripped> // modifyCoroutine 
	0x2cea0  func <stripped> // getter 
	0x2cf10  class func MutableArrayDataSource.__allocating_init(arrangedSections:) // init 
	0x2cf90  func <stripped> // method 
	0x2d050  func <stripped> // method 
	0x2d200  func <stripped> // method 
	0x2d3c0  func <stripped> // method 
	0x2d880  func <stripped> // method 
	0x2dd20  func <stripped> // method 
	0x2e1d0  func <stripped> // method 
	0x2e510  func <stripped> // method 
	0x2e880  func <stripped> // method 
	0x2eae0  func <stripped> // getter 
	0x2eb10  func <stripped> // method 
	0x2ebc0  func <stripped> // method 
	0x2ec50  func <stripped> // method 
	0x2ee10  func <stripped> // method 
	0x2f070  func <stripped> // method 
	0x2f110  func <stripped> // method 
 }

 class HealthExperience.UVExposure : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.USR1SignalDebuggingResponderListener : SignalListener {

	// Properties
	let notificationCenter : NSNotificationCenter

	// Swift methods
	0x318e0  class func USR1SignalDebuggingResponderListener.__allocating_init() // init 
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
	let nonspecificUpdatesDisabled : o÷

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe2fc00032880 (0x2fc00032880) in binary!
	0xe2e8  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xec9000032c80 (0x49000032c80) in binary!
	0xec84  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xec7800032c60 (0x47800032c60) in binary!
	0xe106  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xd4c800032828 (0x4c800032828) in binary!
	0xe0ee  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xe29c00032898 (0x29c00032898) in binary!
	0xe288  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x7ccfffb8810  @objc FavoritesProvider.(null) <stripped>
	0x254000329a0  @objc FavoritesProvider.ˇˇHç=ªı <stripped>
WARNING: couldn't find address 0x3284cfffbda30 (0x4cfffbda30) in binary!
	0x23c00032808  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xfffbe148 (0xfffbe148) in binary!
	0x3d800032b90  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0x32b8cfffbe680 (0x38cfffbe680) in binary!
	0x35c00032b98  @objc FavoritesProvider.(null) <stripped>

	// Swift methods
	0x32e50  func <stripped> // getter 
	0x32f20  class func FavoritesProvider.__allocating_init(controller:healthStore:) // init 
	0x33280  func <stripped> // method 
	0x332f0  func <stripped> // method 
	0x33370  func <stripped> // method 
	0x33490  func <stripped> // method 
	0x33a00  func <stripped> // getter 
	0x33a40  func <stripped> // method 
	0x33b50  func <stripped> // getter 
	0x33b70  func <stripped> // method 
	0x33be0  func <stripped> // method 
	0x33f80  func <stripped> // method 
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
	var timeoutWork : 	ÿ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe254000329a0 (0x254000329a0) in binary!
	0xe250  @objc SetDefaultFavoritesOperation.(null) <stripped>
WARNING: couldn't find address 0xe23c00032808 (0x23c00032808) in binary!
	0x38000000c  @objc SetDefaultFavoritesOperation.(null) <stripped>
WARNING: couldn't find address 0xebd800032b90 (0x3d800032b90) in binary!
	0xebcc  @objc SetDefaultFavoritesOperation.(null) <stripped>

	// Swift methods
	0x38c70  func <stripped> // getter 
	0x38d90  func <stripped> // getter 
	0x39180  class func SetDefaultFavoritesOperation.__allocating_init(favoritesProvider:healthStore:precondition:timeout:) // init 
	0x39370  func <stripped> // method 
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
	0x3b1f0  func <stripped> // getter 
	0x3b2c0  func <stripped> // getter 
	0x3b320  func <stripped> // getter 
	0x3b3c0  func <stripped> // getter 
	0x3b4f0  func <stripped> // getter 
	0x3b520  class func AppStoreDataProvider.__allocating_init() // init 
	0x3b810  func <stripped> // method 
	0x3b870  func <stripped> // method 
	0x3b8c0  func <stripped> // method 
	0x3b950  func <stripped> // method 
	0x3c040  func <stripped> // method 
	0x3e4e0  func <stripped> // method 
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
WARNING: couldn't find address 0xe1f400032940 (0x1f400032940) in binary!
	0xe1f0  @objc SaveManagedObjectContextOperation.(null) <stripped>
WARNING: couldn't find address 0xe1dc000327a8 (0x1dc000327a8) in binary!
	0x48000000c  @objc SaveManagedObjectContextOperation.(null) <stripped>
WARNING: couldn't find address 0xe1c400032910 (0x1c400032910) in binary!
	0xe1c0  @objc SaveManagedObjectContextOperation.(null) <stripped>

	// Swift methods
	0x42590  class func SaveManagedObjectContextOperation.__allocating_init(context:) // init 
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
WARNING: couldn't find address 0xe1c400032910 (0x1c400032910) in binary!
	0xe1c0  @objc AsynchronousBlockOperation.(null) <stripped>
WARNING: couldn't find address 0xe1b4000327b0 (0x1b4000327b0) in binary!
	0xe1a0  @objc AsynchronousBlockOperation.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x2f4fffc8ab8  @objc AsynchronousBlockOperation.(null) <stripped>
	0xfffc8af0  @objc AsynchronousBlockOperation.» <stripped>

	// Swift methods
	0x42f20  class func AsynchronousBlockOperation.__allocating_init(debugIdentifier:_:) // init 
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
	0x43be0  func <stripped> // method 
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
WARNING: couldn't find address 0xeb4000032af8 (0x34000032af8) in binary!
	0xeb34  @objc HasNoFavoritesPrecondition.(null) <stripped>
WARNING: couldn't find address 0xd2c400032b00 (0x2c400032b00) in binary!
	0x18000000c  @objc HasNoFavoritesPrecondition.(null) <stripped>
WARNING: couldn't find address 0xeb1000032a40 (0x31000032a40) in binary!
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
	case insertItem : •–
WARNING: couldn't find address 0x0 (0x0) in binary!
	case removeItem : •–
WARNING: couldn't find address 0x0 (0x0) in binary!
	case moveItem : ü–
WARNING: couldn't find address 0x0 (0x0) in binary!
	case reloadItem : •–
	case initialData  
 }

 class HealthExperience.OperationQueueObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : NSOperationQueue
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lock : ôﬂ
	var currentOperations : Set<NSOperation>

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xeb1000032a40 (0x31000032a40) in binary!
	0x48000000c  @objc OperationQueueObserver.(null) <stripped>

	// Swift methods
	0x47b20  class func OperationQueueObserver.__allocating_init(queue:) // init 
	0x47c40  func <stripped> // method 
	0x47d40  func <stripped> // method 
	0x483b0  func <stripped> // getter 
	0x484a0  func <stripped> // getter 
	0x48530  func <stripped> // method 
	0x48590  func <stripped> // method 
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
	0x4e910  func <stripped> // getter 
	0x4e940  func <stripped> // setter 
	0x4e990  func <stripped> // modifyCoroutine 
	0x4eab0  func <stripped> // getter 
	0x4ec30  func <stripped> // setter 
	0x4ec50  func <stripped> // modifyCoroutine 
	0x4ecf0  func <stripped> // getter 
	0x4ee80  func <stripped> // setter 
	0x4eea0  func <stripped> // modifyCoroutine 
	0x4eef0  func <stripped> // getter 
	0x4ef00  func <stripped> // method 
	0x4e7f0  class func ArrayDataSource.__allocating_init(arrangedSections:) // init 
	0x4efa0  class func ArrayDataSource.__allocating_init(_:) // init 
	0x4f020  func <stripped> // getter 
	0x4f030  func <stripped> // getter 
	0x4f080  func <stripped> // method 
	0x4f0f0  func <stripped> // method 
	0x4f2a0  func <stripped> // method 
	0x4f300  func <stripped> // method 
	0x4f540  func <stripped> // method 
	0x4f5d0  func <stripped> // method 
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
WARNING: couldn't find address 0xe14400032808 (0x14400032808) in binary!
	0xe140  @objc FirstRestoreNotInProgressPrecondition.(null) <stripped>
WARNING: couldn't find address 0xe13400032730 (0x13400032730) in binary!
	0xe120  @objc FirstRestoreNotInProgressPrecondition.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x6a4fffe0458  @objc FirstRestoreNotInProgressPrecondition.(null) <stripped>
	0x67cfffe0480  @objc FirstRestoreNotInProgressPrecondition.HâEàIãEXHâEêIã_IãG HâÖHˇˇˇLâˇHâﬁËÇˇˇIâ≈ËZ <stripped>

	// Swift methods
	0x5b690  class func FirstRestoreNotInProgressPrecondition.__allocating_init(healthStore:waitUntilShouldProceed:completionQueue:) // init 
	0x5b960  func <stripped> // method 
	0x5ba10  func <stripped> // method 
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
WARNING: couldn't find address 0xe0dc000326d8 (0xdc000326d8) in binary!
	0xe0c8  @objc ComposableAsyncOperation.(null) <stripped>
WARNING: couldn't find address 0xe0bc00032688 (0xbc00032688) in binary!
	0x25029232840  @objc ComposableAsyncOperation.(null) <stripped>
WARNING: couldn't find address 0x6c6165483a4d4152 (0x5483a4d4152) in binary!
	0x2065636e65  @objc ComposableAsyncOperation.(null) <stripped>

	// Swift methods
	0x5eb50  func <stripped> // getter 
	0x5eb80  func <stripped> // setter 
	0x5ebc0  func <stripped> // modifyCoroutine 
	0x5ecc0  func <stripped> // getter 
	0x5ed00  func <stripped> // setter 
	0x5ed50  func <stripped> // modifyCoroutine 
	0x5eec0  func <stripped> // method 
	0x5f1d0  func <stripped> // method 
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
	var lock : ôﬂ
	var currentRunLoopObserver : RunLoopObserver
	var identifier : String

	// Swift methods
	0x607b0  func <stripped> // getter 
	0x60880  func <stripped> // getter 
	0x608b0  func <stripped> // setter 
	0x60900  func <stripped> // modifyCoroutine 
	0x60a60  func <stripped> // getter 
	0x60b30  func <stripped> // getter 
	0x60b70  func <stripped> // setter 
	0x60bb0  func <stripped> // modifyCoroutine 
	0x60bf0  func <stripped> // getter 
	0x60f10  class func CompoundSectionedDataSource.__allocating_init(_:) // init 
	0x61770  func <stripped> // method 
	0x617e0  func <stripped> // method 
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
	0x68300  class func ManagedProfileConnection.__allocating_init() // init 
	0x68360  func <stripped> // getter 
	0x68380  func <stripped> // getter 
	0x683a0  func <stripped> // getter 
	0x68460  func <stripped> // method 
	0x68480  func <stripped> // method 
	0x68510  func <stripped> // method 
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
	case needsReview  
 }

 struct HealthExperience.FeatureStatusSupport { }

 class HealthExperience.VO2Max : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.HeartRateVariabilitySDNN : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct HealthExperience.ActivityMoveModeState {

	// Properties
	var activityMoveMode : HKActivityMoveMode // +0x0
	var hasDataInOtherActivityMoveMode : Bool // +0x8
 }

 struct HealthExperience.HealthKitProfileInformation {

	// Properties
	var firstName : String // +0x0
	var lastName : String? // +0x10
	var dsid : Int? // +0x20
	var syncResponse : SyncResponse // +0x30
	var profileImageInformation : ProfileImageInformation // +0x40
	var stopReceivingState : StopReceivingState // +0x80
	var activityMoveModeState : ActivityMoveModeState // +0x88
	var _profileIdentifier : CodableBox // +0x98
	var reuseIdentifier : String // +0xa0
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
	case activityMoveModeState  
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

 enum HealthExperience.CodingKeys {

	// Properties
	case activityMoveMode  
	case hasDataInOtherActivityMoveMode  
 }

 class HealthExperience.SleepChanges : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.MappedDataSource {
 class HealthExperience.Publisher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let healthStore : HKHealthStore

	// Swift methods
	0x768a0  class func _HKDateRangeQuery.Publisher.__allocating_init(healthStore:) // init 
 }

 class HealthExperience.Inner {
 class HealthExperience.DietaryVitaminC : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.NotifydObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let notificationName : NotificationName
WARNING: couldn't find address 0x0 (0x0) in binary!
	var notifyToken : /…
	var eventHandler : NotifydObserver

	// Swift methods
	0x786a0  class func NotifydObserver.__allocating_init(queue:notificationName:eventHandler:) // init 
 }

 enum HealthExperience.NotificationName {

	// Properties
	case mobileKeyBagLockStatus  
	case characteristicChange  
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
