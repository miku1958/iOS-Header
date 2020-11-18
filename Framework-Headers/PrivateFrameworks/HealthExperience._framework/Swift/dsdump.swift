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
	var width : O·
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : O·
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : O·
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : O·
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
	0x4a70  func <stripped> // method 
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
	0xa330  class func HKProfileStore.ProfileIdentifiersPublisher.__allocating_init(profileStore:) // init 
 }

 class HealthExperience.Inner {
 struct HealthExperience.DefaultMedicalIDAvailabilityProvider: MedicalIDAvailabilityProvider { }

 class HealthExperience.DietaryCopper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.AsynchronousProgressOperation : AsynchronousOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timeout : ±‡ // +0xfeedfacf (0x0)
	var operationTimedOut : Bool // +0x3 (0x1)
	var progress : NSProgress? // +0x87 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe44c00032b68 (0x44c00032b68) in binary!
	0xe448  @objc AsynchronousProgressOperation.(null) <stripped>
WARNING: couldn't find address 0xe434000329d0 (0x434000329d0) in binary!
	0xa8000000c  @objc AsynchronousProgressOperation.(null) <stripped>
WARNING: couldn't find address 0xe26a000329a8 (0x26a000329a8) in binary!
	0xe25e  @objc AsynchronousProgressOperation.(null) <stripped>

	// Swift methods
	0xc530  func <stripped> // getter 
	0xc580  func <stripped> // setter 
	0xc5e0  func <stripped> // modifyCoroutine 
	0xc6a0  func <stripped> // getter 
	0xc6d0  func <stripped> // setter 
	0xc710  func <stripped> // modifyCoroutine 
	0xc810  func <stripped> // getter 
	0xc850  func <stripped> // setter 
	0xc8c0  func <stripped> // modifyCoroutine 
	0xc930  func <stripped> // method 
	0xca20  func <stripped> // method 
	0xce90  func <stripped> // method 
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
	let operationState : Â› // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let workLock : iﬂ // +0x18 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe26a000329a8 (0x26a000329a8) in binary!
	0xe25e  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0xe25200032b18 (0x25200032b18) in binary!
	0xe246  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0xe3ec00032970 (0x3ec00032970) in binary!
	0xe3e0  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0xe3d400032af0 (0x3d400032af0) in binary!
	0xe3d0  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0xe3c400032990 (0x3c400032990) in binary!
	0xe3b0  @objc AsynchronousOperation.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x164fff990d8  @objc AsynchronousOperation.(null) <stripped>
	0xfff99380  @objc AsynchronousOperation.A]A^A_]√HâE∞∆EÿHâU∏Hâ◊Ë§æ <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0xfcfff9ca08  @objc AsynchronousOperation.(null) <stripped>
	0x34c000329d8  @objc AsynchronousOperation. <stripped>
WARNING: couldn't find address 0xfff9ca38 (0xfff9ca38) in binary!
	0x69c000328b0  @objc AsynchronousOperation.(null) <stripped>

	// Swift methods
	0x10bf0  func <stripped> // getter 
	0x10c20  func <stripped> // setter 
	0x10c60  func <stripped> // modifyCoroutine 
	0x10cb0  func <stripped> // getter 
	0x10cf0  func <stripped> // setter 
	0x110e0  func <stripped> // modifyCoroutine 
	0x11160  func <stripped> // method 
	0x111f0  func <stripped> // method 
	0x11260  func <stripped> // method 
	0x11e00  func <stripped> // method 
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
	var fetchError : i‚
	let medicalIDStore : HKMedicalIDStore

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe39c00032ab8 (0x39c00032ab8) in binary!
	0xe398  @objc MedicalIDFetchOperation.(null) <stripped>
WARNING: couldn't find address 0xe38400032920 (0x38400032920) in binary!
	0x28000000c  @objc MedicalIDFetchOperation.(null) <stripped>
WARNING: couldn't find address 0xe37400032940 (0x37400032940) in binary!
	0xe360  @objc MedicalIDFetchOperation.(null) <stripped>

	// Swift methods
	0x14840  func <stripped> // method 
 }

 class HealthExperience.DebouncedDispatchItem : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var block : ()
	var queue : OS_dispatch_queue
	var debounceInterval : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var workItem : ”‹

	// Swift methods
	0x14db0  func <stripped> // getter 
	0x14df0  func <stripped> // setter 
	0x14e30  func <stripped> // modifyCoroutine 
	0x14ef0  func <stripped> // getter 
	0x14f20  func <stripped> // setter 
	0x14f60  func <stripped> // modifyCoroutine 
	0x15010  func <stripped> // getter 
	0x15040  func <stripped> // setter 
	0x15080  func <stripped> // modifyCoroutine 
	0x150c0  func <stripped> // method 
	0x15130  func <stripped> // method 
	0x15530  class func DebouncedDispatchItem.__allocating_init(queue:debounceLength:block:) // init 
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
	var _medicalIDDataResult : wﬁ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let medicalIDFetchOperation : c‹ // +0x0 (0x8)
	var medicalIDChangeObserver : MedicalIDChangeObserver // +0x0 (0x8)
	let medicalIDStore : HKMedicalIDStore // +0x6100085 (0x8)
	var medicalIDFetchQueue : NSOperationQueue // +0x19 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe37400032940 (0x37400032940) in binary!
	0xe360  @objc MedicalIDCache.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff9ca38  @objc MedicalIDCache.(null) <stripped>

	// Swift methods
	0x16ba0  func <stripped> // getter 
	0x16c00  func <stripped> // setter 
	0x16c60  func <stripped> // modifyCoroutine 
	0x16e20  func <stripped> // getter 
	0x16e80  func <stripped> // setter 
	0x16ee0  func <stripped> // modifyCoroutine 
	0x17070  func <stripped> // getter 
	0x171b0  func <stripped> // getter 
	0x171f0  func <stripped> // setter 
	0x17240  func <stripped> // modifyCoroutine 
	0x172e0  class func MedicalIDCache.__allocating_init(medicalIDStore:) // init 
	0x17690  func <stripped> // method 
	0x17910  func <stripped> // method 
	0x17d70  func <stripped> // method 
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
	case backedUp : ÂŸ
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
	let publisher : a⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subject : è⁄

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xf69c000328b0 (0x69c000328b0) in binary!
	0xf690  @objc CloudSyncEventPublisherObserver.(null) <stripped>
WARNING: couldn't find address 0xecd000032888 (0x4d000032888) in binary!
	0xf678  @objc CloudSyncEventPublisherObserver.(null) <stripped>
WARNING: couldn't find address 0xe30c000328d8 (0x30c000328d8) in binary!
	0xe2f8  @objc CloudSyncEventPublisherObserver.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x16cfffb75d0  @objc CloudSyncEventPublisherObserver.(null) <stripped>
	0x16cfffb7b68  @objc CloudSyncEventPublisherObserver.HçY	 <stripped>
	0x7fcfffb81a0  @objc CloudSyncEventPublisherObserver. <stripped>

	// Swift methods
	0x29a50  class func CloudSyncEventPublisherObserver.__allocating_init(healthStore:makeCloudSyncObserver:) // init 
	0x29af0  func <stripped> // method 
	0x29b10  func <stripped> // method 
	0x29be0  func <stripped> // method 
	0x29c90  func <stripped> // method 
 }

 enum HealthExperience.CloudSyncEvent {

	// Properties
	case syncStarted : NSProgress
WARNING: couldn't find address 0x0 (0x0) in binary!
	case syncFailed : i‚
	case statusUpdated : HKCloudSyncObserverStatus
	case syncCompleted  
 }

 class HealthExperience.DietarySugar : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.DataTypesHaveSomeDataPublisher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _haveSomeData : É⁄ // +0x0 (0x0)
	let healthStore : HKHealthStore // +0x45545f5f (0x8)
	var query : _HKDatabaseChangesQuery? // +0x0 (0x8)

	// Swift methods
	0x2a760  func <stripped> // getter 
	0x2a7c0  func <stripped> // setter 
	0x2a820  func <stripped> // modifyCoroutine 
	0x2a9e0  func <stripped> // getter 
	0x2aa40  func <stripped> // setter 
	0x2aaa0  func <stripped> // modifyCoroutine 
	0x2ac80  class func DataTypesHaveSomeDataPublisher.__allocating_init(healthStore:types:anchor:) // init 
	0x2b0a0  func <stripped> // method 
	0x2b210  func <stripped> // method 
 }

 enum HealthExperience.Data {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case error : i‚
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
	var lock : iﬂ

	// Swift methods
	0x2c9a0  func <stripped> // getter 
	0x2c9d0  func <stripped> // setter 
	0x2ca20  func <stripped> // modifyCoroutine 
	0x2cb80  func <stripped> // getter 
	0x2cc40  func <stripped> // getter 
	0x2cc70  func <stripped> // setter 
	0x2ccb0  func <stripped> // modifyCoroutine 
	0x2cd40  func <stripped> // getter 
	0x2ced0  func <stripped> // setter 
	0x2cef0  func <stripped> // modifyCoroutine 
	0x2cf40  func <stripped> // getter 
	0x2cfb0  class func MutableArrayDataSource.__allocating_init(arrangedSections:) // init 
	0x2d030  func <stripped> // method 
	0x2d0f0  func <stripped> // method 
	0x2d2a0  func <stripped> // method 
	0x2d460  func <stripped> // method 
	0x2d920  func <stripped> // method 
	0x2ddc0  func <stripped> // method 
	0x2e270  func <stripped> // method 
	0x2e5b0  func <stripped> // method 
	0x2e920  func <stripped> // method 
	0x2eb80  func <stripped> // getter 
	0x2ebb0  func <stripped> // method 
	0x2ec60  func <stripped> // method 
	0x2ecf0  func <stripped> // method 
	0x2eeb0  func <stripped> // method 
	0x2f110  func <stripped> // method 
	0x2f1b0  func <stripped> // method 
 }

 class HealthExperience.UVExposure : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.USR1SignalDebuggingResponderListener : SignalListener {

	// Properties
	let notificationCenter : NSNotificationCenter

	// Swift methods
	0x31980  class func USR1SignalDebuggingResponderListener.__allocating_init() // init 
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
	let nonspecificUpdatesDisabled : ?÷

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe2ec00032840 (0x2ec00032840) in binary!
	0xe2d8  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xec8000032c40 (0x48000032c40) in binary!
	0xec74  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xec6800032c20 (0x46800032c20) in binary!
	0xe0f6  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xd4b8000327e8 (0x4b8000327e8) in binary!
	0xe0de  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xe28c00032858 (0x28c00032858) in binary!
	0xe278  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x78cfffb8870  @objc FavoritesProvider.(null) <stripped>
	0x24400032960  @objc FavoritesProvider. <stripped>
WARNING: couldn't find address 0x3280cfffbda90 (0xcfffbda90) in binary!
	0x22c000327c8  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0xfffbe1a8 (0xfffbe1a8) in binary!
	0x3c800032b50  @objc FavoritesProvider.(null) <stripped>
WARNING: couldn't find address 0x32b4cfffbe6e0 (0x34cfffbe6e0) in binary!
	0x34c00032b58  @objc FavoritesProvider.(null) <stripped>

	// Swift methods
	0x32ef0  func <stripped> // getter 
	0x32fc0  class func FavoritesProvider.__allocating_init(controller:healthStore:) // init 
	0x33320  func <stripped> // method 
	0x33390  func <stripped> // method 
	0x33410  func <stripped> // method 
	0x33530  func <stripped> // method 
	0x33aa0  func <stripped> // getter 
	0x33ae0  func <stripped> // method 
	0x33bf0  func <stripped> // getter 
	0x33c10  func <stripped> // method 
	0x33c80  func <stripped> // method 
	0x34020  func <stripped> // method 
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
	var timeoutWork : Ÿ◊

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe24400032960 (0x24400032960) in binary!
	0xe240  @objc SetDefaultFavoritesOperation.(null) <stripped>
WARNING: couldn't find address 0xe22c000327c8 (0x22c000327c8) in binary!
	0x38000000c  @objc SetDefaultFavoritesOperation.(null) <stripped>
WARNING: couldn't find address 0xebc800032b50 (0x3c800032b50) in binary!
	0xebbc  @objc SetDefaultFavoritesOperation.(null) <stripped>

	// Swift methods
	0x38d10  func <stripped> // getter 
	0x38e30  func <stripped> // getter 
	0x39220  class func SetDefaultFavoritesOperation.__allocating_init(favoritesProvider:healthStore:precondition:timeout:) // init 
	0x39410  func <stripped> // method 
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
	0x3b290  func <stripped> // getter 
	0x3b360  func <stripped> // getter 
	0x3b3c0  func <stripped> // getter 
	0x3b460  func <stripped> // getter 
	0x3b590  func <stripped> // getter 
	0x3b5c0  class func AppStoreDataProvider.__allocating_init() // init 
	0x3b8b0  func <stripped> // method 
	0x3b910  func <stripped> // method 
	0x3b960  func <stripped> // method 
	0x3b9f0  func <stripped> // method 
	0x3c0e0  func <stripped> // method 
	0x3e580  func <stripped> // method 
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
WARNING: couldn't find address 0xe1e400032900 (0x1e400032900) in binary!
	0xe1e0  @objc SaveManagedObjectContextOperation.(null) <stripped>
WARNING: couldn't find address 0xe1cc00032768 (0x1cc00032768) in binary!
	0x48000000c  @objc SaveManagedObjectContextOperation.(null) <stripped>
WARNING: couldn't find address 0xe1b4000328d0 (0x1b4000328d0) in binary!
	0xe1b0  @objc SaveManagedObjectContextOperation.(null) <stripped>

	// Swift methods
	0x42630  class func SaveManagedObjectContextOperation.__allocating_init(context:) // init 
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
WARNING: couldn't find address 0xe1b4000328d0 (0x1b4000328d0) in binary!
	0xe1b0  @objc AsynchronousBlockOperation.(null) <stripped>
WARNING: couldn't find address 0xe1a400032770 (0x1a400032770) in binary!
	0xe190  @objc AsynchronousBlockOperation.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x2b4fffc8b18  @objc AsynchronousBlockOperation.(null) <stripped>
	0xfffc8b50  @objc AsynchronousBlockOperation.ˇˇˇHæ- <stripped>

	// Swift methods
	0x42fc0  class func AsynchronousBlockOperation.__allocating_init(debugIdentifier:_:) // init 
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
	0x43c80  func <stripped> // method 
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
WARNING: couldn't find address 0xeb3000032ab8 (0x33000032ab8) in binary!
	0xeb24  @objc HasNoFavoritesPrecondition.(null) <stripped>
WARNING: couldn't find address 0xd2b400032ac0 (0x2b400032ac0) in binary!
	0x18000000c  @objc HasNoFavoritesPrecondition.(null) <stripped>
WARNING: couldn't find address 0xeb0000032a00 (0x30000032a00) in binary!
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
	case insertItem : u–
WARNING: couldn't find address 0x0 (0x0) in binary!
	case removeItem : u–
WARNING: couldn't find address 0x0 (0x0) in binary!
	case moveItem : o–
WARNING: couldn't find address 0x0 (0x0) in binary!
	case reloadItem : u–
	case initialData  
 }

 class HealthExperience.OperationQueueObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : NSOperationQueue
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lock : iﬂ
	var currentOperations : Set<NSOperation>

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xeb0000032a00 (0x30000032a00) in binary!
	0x48000000c  @objc OperationQueueObserver.(null) <stripped>

	// Swift methods
	0x47bc0  class func OperationQueueObserver.__allocating_init(queue:) // init 
	0x47ce0  func <stripped> // method 
	0x47de0  func <stripped> // method 
	0x48450  func <stripped> // getter 
	0x48540  func <stripped> // getter 
	0x485d0  func <stripped> // method 
	0x48630  func <stripped> // method 
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
	0x4e9b0  func <stripped> // getter 
	0x4e9e0  func <stripped> // setter 
	0x4ea30  func <stripped> // modifyCoroutine 
	0x4eb50  func <stripped> // getter 
	0x4ecd0  func <stripped> // setter 
	0x4ecf0  func <stripped> // modifyCoroutine 
	0x4ed90  func <stripped> // getter 
	0x4ef20  func <stripped> // setter 
	0x4ef40  func <stripped> // modifyCoroutine 
	0x4ef90  func <stripped> // getter 
	0x4efa0  func <stripped> // method 
	0x4e890  class func ArrayDataSource.__allocating_init(arrangedSections:) // init 
	0x4f040  class func ArrayDataSource.__allocating_init(_:) // init 
	0x4f0c0  func <stripped> // getter 
	0x4f0d0  func <stripped> // getter 
	0x4f120  func <stripped> // method 
	0x4f190  func <stripped> // method 
	0x4f340  func <stripped> // method 
	0x4f3a0  func <stripped> // method 
	0x4f5e0  func <stripped> // method 
	0x4f670  func <stripped> // method 
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
WARNING: couldn't find address 0xe134000327c8 (0x134000327c8) in binary!
	0xe130  @objc FirstRestoreNotInProgressPrecondition.(null) <stripped>
WARNING: couldn't find address 0xe124000326f0 (0x124000326f0) in binary!
	0xe110  @objc FirstRestoreNotInProgressPrecondition.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x664fffe04b8  @objc FirstRestoreNotInProgressPrecondition.(null) <stripped>
	0x63cfffe04e0  @objc FirstRestoreNotInProgressPrecondition.u?LãµPˇˇˇäE◊àE†∆EÿË0 <stripped>

	// Swift methods
	0x5b730  class func FirstRestoreNotInProgressPrecondition.__allocating_init(healthStore:waitUntilShouldProceed:completionQueue:) // init 
	0x5ba00  func <stripped> // method 
	0x5bab0  func <stripped> // method 
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
WARNING: couldn't find address 0xe0cc00032698 (0xcc00032698) in binary!
	0xe0b8  @objc ComposableAsyncOperation.(null) <stripped>
WARNING: couldn't find address 0xe0ac00032648 (0xac00032648) in binary!
	0x25029232840  @objc ComposableAsyncOperation.(null) <stripped>
WARNING: couldn't find address 0x6c6165483a4d4152 (0x5483a4d4152) in binary!
	0x2065636e65  @objc ComposableAsyncOperation.(null) <stripped>

	// Swift methods
	0x5ebf0  func <stripped> // getter 
	0x5ec20  func <stripped> // setter 
	0x5ec60  func <stripped> // modifyCoroutine 
	0x5ed60  func <stripped> // getter 
	0x5eda0  func <stripped> // setter 
	0x5edf0  func <stripped> // modifyCoroutine 
	0x5ef60  func <stripped> // method 
	0x5f270  func <stripped> // method 
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
	var lock : iﬂ
	var currentRunLoopObserver : RunLoopObserver
	var identifier : String

	// Swift methods
	0x60850  func <stripped> // getter 
	0x60920  func <stripped> // getter 
	0x60950  func <stripped> // setter 
	0x609a0  func <stripped> // modifyCoroutine 
	0x60b00  func <stripped> // getter 
	0x60bd0  func <stripped> // getter 
	0x60c10  func <stripped> // setter 
	0x60c50  func <stripped> // modifyCoroutine 
	0x60c90  func <stripped> // getter 
	0x60fb0  class func CompoundSectionedDataSource.__allocating_init(_:) // init 
	0x61810  func <stripped> // method 
	0x61880  func <stripped> // method 
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
	0x683a0  class func ManagedProfileConnection.__allocating_init() // init 
	0x68400  func <stripped> // getter 
	0x68420  func <stripped> // getter 
	0x68440  func <stripped> // getter 
	0x68500  func <stripped> // method 
	0x68520  func <stripped> // method 
	0x685b0  func <stripped> // method 
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
	0x768e0  class func _HKDateRangeQuery.Publisher.__allocating_init(healthStore:) // init 
 }

 class HealthExperience.Inner {
 class HealthExperience.DietaryVitaminC : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class HealthExperience.NotifydObserver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let notificationName : NotificationName
WARNING: couldn't find address 0x0 (0x0) in binary!
	var notifyToken : ˇ»
	var eventHandler : NotifydObserver

	// Swift methods
	0x786e0  class func NotifydObserver.__allocating_init(queue:notificationName:eventHandler:) // init 
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
