 protocol MapsSync.MapsSyncPlaceProtocol // 3 requirements
 {
	// getter
	// getter
	// getter
 }
 protocol MapsSync.MapsSyncManagedProtocol // 12 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
 }
 protocol MapsSync.MapsSyncDataBase // 6 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// class getter
	// class getter
 }

 class MapsSync.MapsSyncManagedCollectionItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x97e40002a640 (0x7e40002a640) in binary!
	0x18000000c  @objc MapsSyncManagedCollectionItem.(null) <stripped>
 }

 class MapsSync.MapsSyncCollectionPlaceItem : MapsSyncCollectionItem {

	// Properties
	var _customName : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _droppedPinCoordinate : ¡π // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _droppedPinFloorOrdinal : ˘Ω // +0x0 (0x4)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapItemStorage : ¡π // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _origin : €Ω // +0x0 (0x2)
	var _latitude : NSNumber? // +0x0 (0x8)
	var _longitude : NSNumber? // +0x0 (0x8)
	var _muid : NSNumber? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xc31e0002a520 (0x31e0002a520) in binary!
	0xa5d0  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa5c40002a630 (0x5c40002a630) in binary!
	0xa5b8  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa59c0002a640 (0x59c0002a640) in binary!
	0xa5a0  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xceb40002a6a0 (0x6b40002a6a0) in binary!
	0xa588  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa57c0002a6a0 (0x57c0002a6a0) in binary!
	0xa570  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xd1e40002a4a0 (0x1e40002a4a0) in binary!
	0xd1d8  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x99dc0002a480 (0x1dc0002a480) in binary!
	0x8fe0  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x8fd40002a458 (0x7d40002a458) in binary!
	0xb340  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xc0bc0002a430 (0xbc0002a430) in binary!
	0xc0b0  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa5d40002a410 (0x5d40002a410) in binary!
	0xc8000000c  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xc08c0002a3e8 (0x8c0002a3e8) in binary!
	0xa4e0  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x99640002a548 (0x1640002a548) in binary!
	0xa4c8  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x994c0002a540 (0x14c0002a540) in binary!
	0xa4a0  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa7800002a540 (0x7800002a540) in binary!
	0xa498  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x991c0002a540 (0x11c0002a540) in binary!
	0xcda0  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xce9a0002a588 (0x69a0002a588) in binary!
	0xa538  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff6fd60  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x84fff706c8  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
	0xfff71000  @objc MapsSyncCollectionPlaceItem.1 <stripped>

	// Swift methods
	0x2200  func <stripped> // getter 
	0x22e0  func <stripped> // getter 
	0x2380  func <stripped> // getter 
	0x23e0  func <stripped> // getter 
	0x2490  func <stripped> // getter 
	0x24e0  func <stripped> // getter 
	0x2540  func <stripped> // getter 
	0x25a0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCollectionPlaceItem : MapsSyncMutableCollectionItem {

	// Properties
	var _proxyCollectionPlaceItem : MapsSyncManagedCollectionPlaceItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xc08c0002a3e8 (0x8c0002a3e8) in binary!
	0xa4e0  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x99640002a548 (0x1640002a548) in binary!
	0xa4c8  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x994c0002a540 (0x14c0002a540) in binary!
	0xa4a0  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa7800002a540 (0x7800002a540) in binary!
	0xa498  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x991c0002a540 (0x11c0002a540) in binary!
	0xcda0  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xce9a0002a588 (0x69a0002a588) in binary!
	0xa538  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff6fd60  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x84fff706c8  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
	0xfff71000  @objc MapsSyncMutableCollectionPlaceItem.1 <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff738f8  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x2d4fff726e0  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
	0x2acfff72a28  @objc MapsSyncMutableCollectionPlaceItem.(Hâ}–1ˇËdg <stripped>

	// Swift methods
	0x3cf0  func <stripped> // getter 
	0x3e50  func <stripped> // setter 
	0x4010  func <stripped> // modifyCoroutine 
	0x4190  func <stripped> // getter 
	0x42a0  func <stripped> // setter 
	0x43e0  func <stripped> // modifyCoroutine 
	0x4500  func <stripped> // getter 
	0x4540  func <stripped> // setter 
	0x45c0  func <stripped> // modifyCoroutine 
	0x4660  func <stripped> // getter 
	0x4830  func <stripped> // setter 
	0x4cb0  func <stripped> // modifyCoroutine 
	0x4d20  func <stripped> // getter 
	0x4d60  func <stripped> // setter 
	0x4df0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedCollectionPlaceItem : MapsSyncManagedCollectionItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x962c0002a488 (0x62c0002a488) in binary!
	0x38000000c  @objc MapsSyncManagedCollectionPlaceItem.(null) <stripped>
 }

 class MapsSync.MapsSyncHistoryItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbf940002a2e8 (0x7940002a2e8) in binary!
	0xb200  @objc MapsSyncHistoryItemQuery.(null) <stripped>
WARNING: couldn't find address 0x96e20002a2c0 (0x6e20002a2c0) in binary!
	0xb1e8  @objc MapsSyncHistoryItemQuery.(null) <stripped>
WARNING: couldn't find address 0x96ca0002a298 (0x6ca0002a298) in binary!
	0xb1d0  @objc MapsSyncHistoryItemQuery.(null) <stripped>
WARNING: couldn't find address 0x95840002a270 (0x5840002a270) in binary!
	0xa470  @objc MapsSyncHistoryItemQuery.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x684fff74cf8  @objc MapsSyncHistoryItemQuery.(null) <stripped>
	0xfff74e70  @objc MapsSyncHistoryItemQuery.Lã}–Îµø <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x1fcfff75f18  @objc MapsSyncHistoryItemQuery.(null) <stripped>
	0x1d4fff75fa0  @objc MapsSyncHistoryItemQuery.âE»Hãã
 <stripped>

	// Swift methods
	0xb7b0  class func MapsSyncHistoryItemQuery.__allocating_init(delegate:) // init 
	0xb860  func <stripped> // method 
	0xb8c0  func <stripped> // method 
	0xbbb0  func <stripped> // method 
	0xbd30  func <stripped> // method 
 }

 class MapsSync.MapsSyncDataValidator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa3240002a388 (0x3240002a388) in binary!
	0x18000000c  @objc MapsSyncDataValidator.(null) <stripped>

	// Swift methods
	0xf0d0  class func <stripped> // method 
	0xf160  class func <stripped> // method 
	0xf180  class func <stripped> // method 
	0xf1a0  class func <stripped> // method 
 }

 class MapsSync.MapsSyncManagedCachedCuratedCollection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x94e40002a340 (0x4e40002a340) in binary!
	0x18000000c  @objc MapsSyncManagedCachedCuratedCollection.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedAnonymousCredential : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x94cc0002a328 (0x4cc0002a328) in binary!
	0xd8000000c  @objc MapsSyncManagedAnonymousCredential.(null) <stripped>
 }

 class MapsSync.MapsSyncCollectionTransitItem : MapsSyncCollectionItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _transitLineStorage : ¡π // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _muid : ’∏ // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb0ec0002a170 (0xec0002a170) in binary!
	0xa2d0  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xa2c40002a150 (0x2c40002a150) in binary!
	0x8db8  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xcf2c0002a1e8 (0x72c0002a1e8) in binary!
	0xcf20  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x97240002a1c8 (0x7240002a1c8) in binary!
	0x8d28  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x8d1c0002a1a0 (0x51c0002a1a0) in binary!
	0xb088  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xbe040002a178 (0x6040002a178) in binary!
	0xbdf8  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xa31c0002a158 (0x31c0002a158) in binary!
	0x68000000c  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xbdd40002a130 (0x5d40002a130) in binary!
	0xa228  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x96ac0002a098 (0x6ac0002a098) in binary!
	0x8d10  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xb5a40002a2d0 (0x5a40002a2d0) in binary!
	0xa2c8  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7aa60  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7aaf8  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7a4a0  @objc MapsSyncCollectionTransitItem.(null) <stripped>

	// Swift methods
	0x10490  func <stripped> // getter 
	0x104e0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCollectionTransitItem : MapsSyncMutableCollectionItem {

	// Properties
	var _proxyCollectionTransitItem : MapsSyncManagedCollectionTransitItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbdd40002a130 (0x5d40002a130) in binary!
	0xa228  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x96ac0002a098 (0x6ac0002a098) in binary!
	0x8d10  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xb5a40002a2d0 (0x5a40002a2d0) in binary!
	0xa2c8  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7aa60  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7aaf8  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7a4a0  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>

	// Swift methods
	0x11330  func <stripped> // getter 
	0x11460  func <stripped> // setter 
	0x115e0  func <stripped> // modifyCoroutine 
	0x11750  func <stripped> // getter 
	0x11790  func <stripped> // setter 
	0x11810  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncDataContainer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x11e40  func <stripped> // method 
	0x12210  func <stripped> // method 
 }

 class MapsSync.MapsSyncMemoryOnlyDataContainer : MapsSyncDataContainer { }

 class MapsSync.MapsSyncCloudKitDataContainer : MapsSyncDataContainer {

	// Properties
	let containerIdentifier : String
 }

 class MapsSync.MapsSyncXPCDataContainer : MapsSyncDataContainer {
	// Swift methods
 }

 class MapsSync.MapsSyncXPCServer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _xpcServer : NSXPCStoreServer?
	var _lock : NSLock
	var _started : Bool
	var _starting : Bool

	// Swift methods
	0x12bd0  func <stripped> // method 
	0x12f30  func <stripped> // method 
 }

 class MapsSync.MapsSyncDataContainerXPCDelegate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x98c40002a028 (0xc40002a028) in binary!
	0x28000000c  @objc MapsSyncDataContainerXPCDelegate.(null) <stripped>

	// Swift methods
 }

 class MapsSync.MapsSyncPersistentContainer : NSPersistentContainer /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x93a40002a3c8 (0x3a40002a3c8) in binary!
	0x18000000c  @objc MapsSyncPersistentContainer.(null) <stripped>
 }

 class MapsSync.MapsSyncGenericQuery {
 enum MapsSync.MapsSyncCachedCuratedCollectionAttribute { }

 enum MapsSync.MapsSyncReviewedPlaceAttribute { }

 enum MapsSync.MapsSyncFavoriteItemAttribute { }

 enum MapsSync.MapsSyncVehicleAttribute { }

 enum MapsSync.MapsSyncHistoryItemAttribute { }

 enum MapsSync.MapsSyncFetchBinaryOperator { }

 class MapsSync.MapsSyncFetch {
 class MapsSync.MapsSyncManagedReviewedPlace : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x93540002a1b0 (0x3540002a1b0) in binary!
	0xa8000000c  @objc MapsSyncManagedReviewedPlace.(null) <stripped>
 }

 enum MapsSync.MapsSyncReviewRating { }

 class MapsSync.MapsSyncCachedUserReview : MapsSyncBaseItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _muid : ’∏ // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _numberPhotosUploaded : ˘Ω // +0x0 (0x4)
	var _rating : MapsSyncReviewRating // +0x0 (0x2)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8c640002a148 (0x4640002a148) in binary!
	0xa148  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xca6c0002a4b8 (0x26c0002a4b8) in binary!
	0xa140  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xcdb40002a188 (0x5b40002a188) in binary!
	0x95b8  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0x8bbc0002a048 (0x3bc0002a048) in binary!
	0x8bb0  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xaf1c0002a020 (0x71c0002a020) in binary!
	0xbc98  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0xbcfff87cf0  @objc MapsSyncCachedUserReview.(null) <stripped>
	0x41cfff87da8  @objc MapsSyncCachedUserReview.ˇˇfD <stripped>
	0x414fff87ed0  @objc MapsSyncCachedUserReview.Aˇ‘Iâ∆LâˇAˇ‘IâƒLâˇLâˆHãU»HâŸˇULã= Ñ
 <stripped>
	0x79cfff88058  @objc MapsSyncCachedUserReview.Hç=Òm
 <stripped>
	0x19b0002a3f8  @objc MapsSyncCachedUserReview. <stripped>

	// Swift methods
	0x207c0  func <stripped> // getter 
	0x207f0  func <stripped> // getter 
	0x20830  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCachedUserReview : MapsSyncMutableBaseItem {

	// Properties
	var _proxy : MapsSyncManagedCachedUserReview // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbc8400029fe0 (0x48400029fe0) in binary!
	0x8bd8  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xb46c0002a198 (0x46c0002a198) in binary!
	0xa0b0  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xa3900002a418 (0x3900002a418) in binary!
	0xc9c8  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xcac20002a410 (0x2c20002a410) in binary!
	0xa160  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0x178000000c (0x178000000c) in binary!
	0x6d4fff88958  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
	0x6b4fff88bb0  @objc MapsSyncMutableCachedUserReview.HÉÏhIâÙIâˇHç=6 <stripped>
	0x3d4fff88c38  @objc MapsSyncMutableCachedUserReview.UHâÂSPHâ˚Hâ˜Ë?≈ˇˇHãH¯HâﬂHâ∆ˇQHâÿHÉƒ[]√Ñ <stripped>
	0x3dcfff88d00  @objc MapsSyncMutableCachedUserReview. <stripped>

	// Swift methods
	0x211f0  func <stripped> // getter 
	0x21230  func <stripped> // setter 
	0x212b0  func <stripped> // modifyCoroutine 
	0x21330  func <stripped> // getter 
	0x21370  func <stripped> // setter 
	0x213f0  func <stripped> // modifyCoroutine 
	0x214b0  func <stripped> // getter 
	0x21510  func <stripped> // setter 
	0x215c0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncCachedCuratedCollection : MapsSyncBaseItem {

	// Properties
	var _collectionDescription : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _image : ¡π // +0x0 (0x10)
	var _imageUrl : String? // +0x0 (0x10)
	var _title : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _curatedCollectionIdentifier : ’∏ // +0x0 (0x8)
	var _isTombstone : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastFetchedDate : °∑ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastSignificantChangeDate : °∑ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _placesCount : ˘Ω // +0x0 (0x4)
	var _publisherAttribution : String? // +0x0 (0x10)
	var _titleLocale : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _resultProviderIdentifier : ˘Ω // +0x0 (0x4)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa19b0002a3f8 (0x19b0002a3f8) in binary!
	0xa19d  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xbc040002a6d8 (0x4040002a6d8) in binary!
	0x8af0  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa04c0002a3d0 (0x4c0002a3d0) in binary!
	0xa040  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa0340002a3d8 (0x340002a3d8) in binary!
	0xa028  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x8b1c0002a3e0 (0x31c0002a3e0) in binary!
	0xae20  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
	0x9ff8  @objc MapsSyncCachedCuratedCollection.â«HçµˇˇˇLâÔ1“1…Ëøﬂ <stripped>
WARNING: couldn't find address 0x9fdc0002a3f0 (0x7dc0002a3f0) in binary!
	0x9fe0  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9fd40002a3f8 (0x7d40002a3f8) in binary!
	0x9fb8  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9fbc00029e28 (0x7bc00029e28) in binary!
	0xcc30  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x943400029ed8 (0x43400029ed8) in binary!
	0x8a38  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x8a2c00029eb0 (0x22c00029eb0) in binary!
	0xad98  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa04400029e80 (0x4400029e80) in binary!
	0x1a8000000c  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xbafc00029e58 (0x2fc00029e58) in binary!
	0x9f50  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x93d40002a2d0 (0x3d40002a2d0) in binary!
	0x9f38  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x93bc0002a2c8 (0x3bc0002a2c8) in binary!
	0x9f20  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x93a40002a2c0 (0x3a40002a2c0) in binary!
	0x9f08  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x938c0002a2b8 (0x38c0002a2b8) in binary!
	0x89f0  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xb2840002a2b0 (0x2840002a2b0) in binary!
	0xace8  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xc2300002a2a8 (0x2300002a2a8) in binary!
	0x9ec0  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x93440002a2a0 (0x3440002a2a0) in binary!
	0x9ea8  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x932c0002a298 (0x32c0002a298) in binary!
	0x9e80  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa1600002a290 (0x1600002a290) in binary!
	0x9e78  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x92fc0002a288 (0x2fc0002a288) in binary!
	0x9e60  @objc MapsSyncCachedCuratedCollection.(null) <stripped>

	// Swift methods
	0x21aa0  class func MapsSyncCachedCuratedCollection.__allocating_init(curatedCollectionIdentifier:resultProviderIdentifier:) // init 
	0x22140  func <stripped> // getter 
	0x221d0  func <stripped> // getter 
	0x22220  func <stripped> // getter 
	0x22260  func <stripped> // getter 
	0x222a0  func <stripped> // getter 
	0x222d0  func <stripped> // getter 
	0x22310  func <stripped> // getter 
	0x22400  func <stripped> // getter 
	0x22470  func <stripped> // getter 
	0x224b0  func <stripped> // getter 
	0x22540  func <stripped> // getter 
	0x225a0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCachedCuratedCollection : MapsSyncMutableBaseItem {

	// Properties
	var _proxy : MapsSyncManagedCachedCuratedCollection

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbafc00029e58 (0x2fc00029e58) in binary!
	0x9f50  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x93d40002a2d0 (0x3d40002a2d0) in binary!
	0x9f38  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x93bc0002a2c8 (0x3bc0002a2c8) in binary!
	0x9f20  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x93a40002a2c0 (0x3a40002a2c0) in binary!
	0x9f08  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x938c0002a2b8 (0x38c0002a2b8) in binary!
	0x89f0  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xb2840002a2b0 (0x2840002a2b0) in binary!
	0xace8  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xc2300002a2a8 (0x2300002a2a8) in binary!
	0x9ec0  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x93440002a2a0 (0x3440002a2a0) in binary!
	0x9ea8  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x932c0002a298 (0x32c0002a298) in binary!
	0x9e80  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa1600002a290 (0x1600002a290) in binary!
	0x9e78  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x92fc0002a288 (0x2fc0002a288) in binary!
	0x9e60  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x92e40002a280 (0x2e40002a280) in binary!
	0x9e38  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa1180002a278 (0x1180002a278) in binary!
	0x9f00  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x254fff8cb28  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
	0x64cfff8cdb0  @objc MapsSyncMutableCachedCuratedCollection.VAUATSHÉÏhIâÙIâˇHç=6 <stripped>
	0x50cfff8d258  @objc MapsSyncMutableCachedCuratedCollection.«HÉƒA]]È›∏ <stripped>
	0x4e4fff8d2c0  @objc MapsSyncMutableCachedCuratedCollection.UHâÂAUPLâËMãmHãx ˇPHÉƒA]]√ <stripped>
	0x4bcfff8d648  @objc MapsSyncMutableCachedCuratedCollection. <stripped>
	0x13c00029c98  @objc MapsSyncMutableCachedCuratedCollection. <stripped>
WARNING: couldn't find address 0x2a1d4fff8d818 (0x1d4fff8d818) in binary!
	0x1aa0002a1d0  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x2a1ccfff8d870 (0x1ccfff8d870) in binary!
	0x1fc0002a1c8  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x29c6cfff8dab8 (0x46cfff8dab8) in binary!
	0xe8000000c  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9e1c00029b10 (0x61c00029b10) in binary!
	0x9e10  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xab4400029ae8 (0x34400029ae8) in binary!
	0xc08c  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9dec00029ac0 (0x5ec00029ac0) in binary!
	0x9de0  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9d0400029a98 (0x50400029a98) in binary!
	0x9cf8  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>

	// Swift methods
	0x23780  func <stripped> // getter 
	0x237c0  func <stripped> // setter 
	0x23820  func <stripped> // modifyCoroutine 
	0x239b0  func <stripped> // getter 
	0x23b60  func <stripped> // setter 
	0x23d40  func <stripped> // modifyCoroutine 
	0x23ea0  func <stripped> // getter 
	0x23ee0  func <stripped> // setter 
	0x23f40  func <stripped> // modifyCoroutine 
	0x24030  func <stripped> // getter 
	0x24070  func <stripped> // setter 
	0x240d0  func <stripped> // modifyCoroutine 
	0x241c0  func <stripped> // getter 
	0x24200  func <stripped> // setter 
	0x24280  func <stripped> // modifyCoroutine 
	0x24300  func <stripped> // getter 
	0x24340  func <stripped> // setter 
	0x243d0  func <stripped> // modifyCoroutine 
	0x24450  func <stripped> // getter 
	0x24490  func <stripped> // setter 
	0x244f0  func <stripped> // modifyCoroutine 
	0x246f0  func <stripped> // getter 
	0x24940  func <stripped> // setter 
	0x24b30  func <stripped> // modifyCoroutine 
	0x24e00  func <stripped> // getter 
	0x24e40  func <stripped> // setter 
	0x24ea0  func <stripped> // modifyCoroutine 
	0x24f20  func <stripped> // getter 
	0x24f60  func <stripped> // setter 
	0x24fc0  func <stripped> // modifyCoroutine 
	0x25170  func <stripped> // getter 
	0x25310  func <stripped> // setter 
	0x25530  func <stripped> // modifyCoroutine 
	0x256b0  func <stripped> // getter 
	0x25710  func <stripped> // setter 
	0x257e0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncHistoryEvDirectionsItem : MapsSyncHistoryDirectionsItem {

	// Properties
	var _requiredCharge : Double // +0x0 (0x8)
	var _vehicleIdentifier : String? // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9e1c00029e60 (0x61c00029e60) in binary!
	0xa197  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x9e040002a258 (0x6040002a258) in binary!
	0xca78  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x927c00029d20 (0x27c00029d20) in binary!
	0x8880  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x887400029cf8 (0x7400029cf8) in binary!
	0xabe0  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0xb95c0002a430 (0x15c0002a430) in binary!
	0x9e80  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x1d4fff8d818  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
	0x1ccfff8d870  @objc MapsSyncHistoryEvDirectionsItem.VAUATSPIâ◊1ˇËtﬁ <stripped>
	0x46cfff8dab8  @objc MapsSyncHistoryEvDirectionsItem.å <stripped>
	0x61c00029b10  @objc MapsSyncHistoryEvDirectionsItem. <stripped>
WARNING: couldn't find address 0x29afcfff8e748 (0x2fcfff8e748) in binary!
	0x34400029ae8  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>

	// Swift methods
	0x264c0  func <stripped> // getter 
	0x26530  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryEvDirectionsItem : MapsSyncMutableHistoryDirectionsItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryEvDirectionsItem // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb93c00029c98 (0x13c00029c98) in binary!
	0xa117  @objc MapsSyncMutableHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0xa1aa0002a1d0 (0x1aa0002a1d0) in binary!
	0x9d78  @objc MapsSyncMutableHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x91fc0002a1c8 (0x1fc0002a1c8) in binary!
	0x9e30  @objc MapsSyncMutableHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0xe8000000c (0xe8000000c) in binary!
	0x2fcfff8e748  @objc MapsSyncMutableHistoryEvDirectionsItem.(null) <stripped>
	0x2d4fff8e7d0  @objc MapsSyncMutableHistoryEvDirectionsItem.Lâ}»Lçm¿ø, <stripped>
	0x2acfff8e858  @objc MapsSyncMutableHistoryEvDirectionsItem.@ <stripped>

	// Swift methods
	0x27000  func <stripped> // getter 
	0x27040  func <stripped> // setter 
	0x270c0  func <stripped> // modifyCoroutine 
	0x271f0  func <stripped> // getter 
	0x27350  func <stripped> // setter 
	0x27510  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncPositionOrdering {
 class MapsSync.MapsSyncDataSession : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _dataContainer : MapsSyncDataContainer
	var _containerQueue : OS_dispatch_queue
	var _storeLoadInterval : Double
	var _readContext : NSManagedObjectContext?
	var _backgroundReadContext : NSManagedObjectContext?
	var _writeContext : NSManagedObjectContext?
	var _localOnly : Bool
	let _loadSemaphore : OS_dispatch_semaphore
	var _hasLoadedStores : Bool
	var _pendingReadContextFetches : [(_:_:)]
	var _pendingBackgroundReadContextFetches : [(_:_:)]
	var _pendingWriteContextFetches : [(_:_:)]
	var _contextFetchLock : NSLock

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa2b400029ad8 (0x2b400029ad8) in binary!
	0xaaa8  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xa2aa00029ab0 (0x2aa00029ab0) in binary!
	0xaa90  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xa29200029a88 (0x29200029a88) in binary!
	0xaa78  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xa27a00029a60 (0x27a00029a60) in binary!
	0x9d18  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xaa5400029a38 (0x25400029a38) in binary!
	0xaa48  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xaa3c00029a10 (0x23c00029a10) in binary!
	0x9ce8  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xaa1c000299e8 (0x21c000299e8) in binary!
	0x9c00  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xaa0c000299c0 (0x20c000299c0) in binary!
	0x9078  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x906c0002a080 (0x6c0002a080) in binary!
	0x9bd0  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x9c9400029ad0 (0x49400029ad0) in binary!
	0x18000000c  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x9bac00029a68 (0x3ac00029a68) in binary!
	0x78000000c  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xb73400029a88 (0x73400029a88) in binary!
	0xa9a0  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x8e8200029a60 (0x68200029a60) in binary!
	0xa988  @objc MapsSyncDataSession.(null) <stripped>
	0x8d30  _block_destroy_helper.45
WARNING: couldn't find address 0x9c1c00029a58 (0x41c00029a58) in binary!
	0x58000000c  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xb87600029a78 (0x7600029a78) in binary!
	0xc7a8  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x85b400029b08 (0x5b400029b08) in binary!
	0x9b10  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x9bd400029a10 (0x3d400029a10) in binary!
	0x18000000c  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x9aec000299a8 (0x2ec000299a8) in binary!
	0x248000000c  @objc MapsSyncDataSession.(null) <stripped>

	// Swift methods
	0x28b80  func <stripped> // method 
	0x28e80  func <stripped> // method 
	0x290d0  func <stripped> // method 
	0x293a0  func <stripped> // method 
	0x295d0  func <stripped> // getter 
	0x29680  func <stripped> // getter 
	0x29700  func <stripped> // method 
	0x2a7e0  func <stripped> // method 
 }

 class MapsSync.MapsSyncCollectionQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb73400029a88 (0x73400029a88) in binary!
	0xa9a0  @objc MapsSyncCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x8e8200029a60 (0x68200029a60) in binary!
	0xa988  @objc MapsSyncCollectionQuery.(null) <stripped>
	0x8d30  _block_destroy_helper.45
WARNING: couldn't find address 0x9c1c00029a58 (0x41c00029a58) in binary!
	0x58000000c  @objc MapsSyncCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0xb87600029a78 (0x7600029a78) in binary!
	0xc7a8  @objc MapsSyncCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x85b400029b08 (0x5b400029b08) in binary!
	0x9b10  @objc MapsSyncCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x9bd400029a10 (0x3d400029a10) in binary!
	0x18000000c  @objc MapsSyncCollectionQuery.(null) <stripped>

	// Swift methods
	0x2f1b0  class func MapsSyncCollectionQuery.__allocating_init(delegate:) // init 
	0x2f260  func <stripped> // method 
	0x2f2c0  func <stripped> // method 
	0x2f5b0  func <stripped> // method 
	0x2f730  func <stripped> // method 
 }

 class MapsSync.MapsSyncObjectWrapper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _managedObjectID : NSManagedObjectID?
	var _entityName : String?
	var _editContext : NSManagedObjectContext?
	var _callbackQueue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb87600029a78 (0x7600029a78) in binary!
	0xc7a8  @objc MapsSyncObjectWrapper.(null) <stripped>
WARNING: couldn't find address 0x85b400029b08 (0x5b400029b08) in binary!
	0x9b10  @objc MapsSyncObjectWrapper.(null) <stripped>
WARNING: couldn't find address 0x9bd400029a10 (0x3d400029a10) in binary!
	0x18000000c  @objc MapsSyncObjectWrapper.(null) <stripped>
WARNING: couldn't find address 0x9aec000299a8 (0x2ec000299a8) in binary!
	0x248000000c  @objc MapsSyncObjectWrapper.(null) <stripped>
WARNING: couldn't find address 0x9ad400029810 (0x2d400029810) in binary!
	0x8f58  @objc MapsSyncObjectWrapper.(null) <stripped>

	// Swift methods
	0x310a0  class func <stripped> // init 
	0x31380  func <stripped> // method 
	0x30b60  func <stripped> // getter 
	0x30b90  func <stripped> // getter 
	0x30bc0  func <stripped> // getter 
	0x30c30  func <stripped> // method 
	0x30da0  func <stripped> // method 
 }

 enum MapsSync.MapsSyncObjectChangeType { }

 class MapsSync.MapsSyncFetchedResultsControllerDelegate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _baseQuery : MapsSyncBaseQuery // +0x8 (0x8)
	var _delegate : weak MapsSyncFetchedResultsChangeDelegate? // +0x10 (0x8)
	var _contentPredicate : NSPredicate? // +0x18 (0x8)
	var _otherWatchedContentPredicate : NSPredicate? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x8d70  _block_destroy_helper.84
WARNING: couldn't find address 0x8d6400029628 (0x56400029628) in binary!
	0x8d58  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0x7cbc00029600 (0x4bc00029600) in binary!
	0x98b0  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0x9974000297b0 (0x174000297b0) in binary!
	0xc8000000c  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0x99ab00029c08 (0x1ab00029c08) in binary!
	0x99ad  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0xb41400029ee8 (0x41400029ee8) in binary!
	0x8300  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0x835c00029c20 (0x35c00029c20) in binary!
	0x9840  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>

	// Swift methods
	0x33840  func <stripped> // setter 
	0x33e50  func <stripped> // method 
 }

 class MapsSync.MapsSyncBaseQuery : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var mergeDelegate : weak MapsSyncDataQueryMergeDelegate?
	var genericQuery : MapsSyncQueryProtocol?
	var delegate : weak MapsSyncDataQueryDelegate?
	var predicate : NSPredicate?
	var mapsSyncFetchedResultsControllerDelegate : MapsSyncFetchedResultsControllerDelegate
	var _historyToken : NSPersistentHistoryToken?
	let _tokenLock : NSLock
	let _didChangeDebouncer : MapsSyncEventDebouncer
	var _isInitCompleteLock : NSLock
	var _isInitComplete : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9ad400029810 (0x2d400029810) in binary!
	0x8f58  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x9abc000297e8 (0x2bc000297e8) in binary!
	0x8f40  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x9aa4000297c0 (0x2a4000297c0) in binary!
	0x8f28  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x9a8c00029bf8 (0x28c00029bf8) in binary!
	0x8f10  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x9a7400029788 (0x27400029788) in binary!
	0x8ef8  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8c3400029920 (0x43400029920) in binary!
	0x9b20  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0xa85400029740 (0x5400029740) in binary!
	0xa850  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0xa83c00029f48 (0x3c00029f48) in binary!
	0xb5c0  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0xa82c00029708 (0x2c00029708) in binary!
	0x8d0e  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0xa814000296e0 (0x14000296e0) in binary!
	0x8cf6  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x82da00029f88 (0x2da00029f88) in binary!
	0xa7f0  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8e5c000296a0 (0x65c000296a0) in binary!
	0x9a90  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8e4400029d08 (0x64400029d08) in binary!
	0x8e38  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8e2c00029660 (0x62c00029660) in binary!
	0x8e20  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x7d8400029638 (0x58400029638) in binary!
	0x8e08  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8dfc00029ee0 (0x5fc00029ee0) in binary!
	0x8df0  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x7d5400029ed8 (0x55400029ed8) in binary!
	0xb4e8  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x993c000299a0 (0x13c000299a0) in binary!
	0x9a00  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x7d4fff9d278  @objc MapsSyncBaseQuery.(null) <stripped>
	0xfff9d310  @objc MapsSyncBaseQuery.Ñ <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x57cfff9ab98  @objc MapsSyncBaseQuery.(null) <stripped>
	0x614fff9ac20  @objc MapsSyncBaseQuery.UHâÂ]ÈF¯ˇˇfD <stripped>
	0x114fff9ace8  @objc MapsSyncBaseQuery.ˇˇfD <stripped>
	0xfff9aeb0  @objc MapsSyncBaseQuery.Lâ·MâËËkÁ <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x6e4fff9f428  @objc MapsSyncBaseQuery.(null) <stripped>
	0x6c4fff9f4e0  @objc MapsSyncBaseQuery.∂˛Hç5IfˇˇHç¢ä	 <stripped>
	0x484fff9f578  @objc MapsSyncBaseQuery.LâˇIˇ«HâﬁLâÍË≈˛ <stripped>
	0x76cfff9f760  @objc MapsSyncBaseQuery.ã-å
 <stripped>
	0x744fff9f918  @objc MapsSyncBaseQuery.ˇˇfD <stripped>
	0x4acfff9fb20  @objc MapsSyncBaseQuery.LâE»HâÀHâU–IâÙIâ˛H∏ <stripped>
	0x394000296f0  @objc MapsSyncBaseQuery.Hã=Y
 <stripped>
WARNING: couldn't find address 0x29bacfffa01c0 (0x3acfffa01c0) in binary!
	0x37c00029ba8  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x29c04fffa0278 (0x404fffa0278) in binary!
	0x2a000029c00  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x296c4fffa03a0 (0x6c4fffa03a0) in binary!
	0x18000000c  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8aaa00029440 (0x2aa00029440) in binary!
	0x28000000c  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x978c000297f0 (0x78c000297f0) in binary!
	0x9850  @objc MapsSyncBaseQuery.(null) <stripped>

	// Swift methods
	0x32540  func <stripped> // getter 
	0x32580  func <stripped> // setter 
	0x325d0  func <stripped> // modifyCoroutine 
	0x33730  func <stripped> // method 
	0x35330  class func <stripped> // getter 
	0x326a0  func <stripped> // method 
	0x32710  func <stripped> // method 
	0x327b0  func <stripped> // method 
	0x327d0  func <stripped> // method 
	0x327f0  func <stripped> // method 
	0x32870  func <stripped> // method 
	0x32900  func <stripped> // method 
	0x32e40  func <stripped> // method 
	0x33020  func <stripped> // method 
	0x33080  func <stripped> // method 
	0x334c0  func <stripped> // method 
 }

 class MapsSync.MapsSyncDataQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery // +0x58 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb4bc00029810 (0x4bc00029810) in binary!
	0x8ae8  @objc MapsSyncDataQuery.(null) <stripped>
WARNING: couldn't find address 0x99d400029810 (0x1d400029810) in binary!
	0x78000000c  @objc MapsSyncDataQuery.(null) <stripped>
	0x8d70  _block_destroy_helper.84

	// Swift methods
	0x36e20  class func MapsSyncDataQuery.__allocating_init(delegate:) // init 
 }

 class MapsSync.MapsSyncCuratedCollection : MapsSyncBaseItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _curatedCollectionIdentifier : ’∏ // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _resultProviderIdentifier : ˘Ω // +0x0 (0x4)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x99ab00029c08 (0x1ab00029c08) in binary!
	0x99ad  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xb41400029ee8 (0x41400029ee8) in binary!
	0x8300  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x835c00029c20 (0x35c00029c20) in binary!
	0x9840  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xc4c400029898 (0x4c400029898) in binary!
	0x8cc8  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x82cc00029758 (0x2cc00029758) in binary!
	0x82c0  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa62c00029730 (0x62c00029730) in binary!
	0xa620  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x3acfffa01c0  @objc MapsSyncCuratedCollection.(null) <stripped>
	0x404fffa0278  @objc MapsSyncCuratedCollection. <stripped>
	0x6c4fffa03a0  @objc MapsSyncCuratedCollection.UHâÂHçÂˆˇˇLç <stripped>
	0x2aa00029440  @objc MapsSyncCuratedCollection.âﬂË3Î <stripped>
WARNING: couldn't find address 0xfffa2590 (0xfffa2590) in binary!
	0x78c000297f0  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x2968cfffa26b8 (0x68cfffa26b8) in binary!
	0x18000000c  @objc MapsSyncCuratedCollection.(null) <stripped>

	// Swift methods
	0x38ed0  class func MapsSyncCuratedCollection.__allocating_init(curatedCollectionIdentifier:resultProviderIdentifier:) // init 
	0x39270  func <stripped> // getter 
	0x392a0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCuratedCollection : MapsSyncMutableBaseItem {

	// Properties
	var _proxy : MapsSyncManagedCuratedCollection // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb394000296f0 (0x394000296f0) in binary!
	0x82e8  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xab7c00029ba8 (0x37c00029ba8) in binary!
	0x97c0  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9aa000029c00 (0x2a000029c00) in binary!
	0x9888  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa2590  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x68cfffa26b8  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
	0x144000297a0  @objc MapsSyncMutableCuratedCollection.â⁄Lâ·MâËË…Á <stripped>

	// Swift methods
	0x39fb0  func <stripped> // getter 
	0x39ff0  func <stripped> // setter 
	0x3a070  func <stripped> // modifyCoroutine 
	0x3a0f0  func <stripped> // getter 
	0x3a130  func <stripped> // setter 
	0x3a1b0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncBatch : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x978c000297f0 (0x78c000297f0) in binary!
	0x9850  @objc MapsSyncBatch.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa5a68  @objc MapsSyncBatch.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedCachedUserReview : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8944000297a0 (0x144000297a0) in binary!
	0x18000000c  @objc MapsSyncManagedCachedUserReview.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedMixinMapItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x892c00029788 (0x12c00029788) in binary!
	0xa8000000c  @objc MapsSyncManagedMixinMapItem.(null) <stripped>
 }

 class MapsSync.MapsSyncPredicate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class MapsSync.MapsSyncHistoryTransitItem : MapsSyncHistoryItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _transitLineStorage : ¡π // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _muid : ’∏ // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x973c00029780 (0x73c00029780) in binary!
	0x9730  @objc MapsSyncHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x822400029708 (0x22400029708) in binary!
	0xc398  @objc MapsSyncHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x8b9c00029640 (0x39c00029640) in binary!
	0x81a0  @objc MapsSyncHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x819400029618 (0x19400029618) in binary!
	0xa500  @objc MapsSyncHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0xb27c00029d50 (0x27c00029d50) in binary!
	0x97a0  @objc MapsSyncHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x344fffa68e8  @objc MapsSyncHistoryTransitItem.(null) <stripped>
	0x67cfffa6ae0  @objc MapsSyncHistoryTransitItem.ˇÖÂ <stripped>
	0x58cfffa6e68  @objc MapsSyncHistoryTransitItem.§
 <stripped>
	0x44000296a0  @objc MapsSyncHistoryTransitItem.âﬂË=Ì <stripped>
WARNING: couldn't find address 0xfffa7568 (0xfffa7568) in binary!
	0x2c00029688  @objc MapsSyncHistoryTransitItem.(null) <stripped>

	// Swift methods
	0x3fd10  func <stripped> // getter 
	0x3fd60  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryTransitItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryTransitItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb25c000295b8 (0x25c000295b8) in binary!
	0x96b0  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x8b3400029330 (0x33400029330) in binary!
	0x8198  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0xaa2c00029758 (0x22c00029758) in binary!
	0x9750  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa7568  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa7760  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa77c8  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>

	// Swift methods
	0x408d0  func <stripped> // getter 
	0x40a00  func <stripped> // setter 
	0x40b80  func <stripped> // modifyCoroutine 
	0x40cf0  func <stripped> // getter 
	0x40d30  func <stripped> // setter 
	0x40db0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedHistoryPlaceItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8844000296a0 (0x44000296a0) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryPlaceItem.(null) <stripped>
 }

 class MapsSync.MapsSyncGeo : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class MapsSync.MapsSyncGeoUtil {
 class MapsSync.MapsSyncManagedFavoriteItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x882c00029688 (0x2c00029688) in binary!
	0x18000000c  @objc MapsSyncManagedFavoriteItem.(null) <stripped>
 }

 class MapsSync.MapsSyncDataBase_initial : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x41a30  func <stripped> // getter 
	0x41f30  func <stripped> // getter 
	0x42060  func <stripped> // getter 
 }

 class MapsSync.MapsSyncCollectionTransitItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb1ac00029500 (0x1ac00029500) in binary!
	0xa418  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x88fa000294d8 (0xfa000294d8) in binary!
	0xa400  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x88e2000294b0 (0xe2000294b0) in binary!
	0x87a8  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x9694000294d0 (0x694000294d0) in binary!
	0x18000000c  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x8784000295e0 (0x784000295e0) in binary!
	0x18000000c  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x876c000295c8 (0x76c000295c8) in binary!
	0x18000000c  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x8754000295b0 (0x754000295b0) in binary!
	0x18000000c  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>

	// Swift methods
	0x42330  class func MapsSyncCollectionTransitItemQuery.__allocating_init(delegate:) // init 
	0x423e0  func <stripped> // method 
	0x42440  func <stripped> // method 
	0x42730  func <stripped> // method 
	0x428b0  func <stripped> // method 
 }

 class MapsSync.MapsSyncManagedHistoryRideShareItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8784000295e0 (0x784000295e0) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryRideShareItem.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedHistoryDirectionsItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x876c000295c8 (0x76c000295c8) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryDirectionsItem.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedHistoryItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8754000295b0 (0x754000295b0) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryItem.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedCuratedCollection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x873c00029598 (0x73c00029598) in binary!
	0xc8000000c  @objc MapsSyncManagedCuratedCollection.(null) <stripped>
 }

 class MapsSync.MapsSyncCollectionItem : MapsSyncBaseItem {

	// Properties
	var _collections : MapsSyncCollection // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb0ec00029460 (0xec00029460) in binary!
	0xb282  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x89c4000291b8 (0x1c4000291b8) in binary!
	0xb0c8  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0xa32c000293b0 (0x32c000293b0) in binary!
	0x9510  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0xc18400029558 (0x18400029558) in binary!
	0x8988  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x7f8c00029418 (0x78c00029418) in binary!
	0x7f80  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0xa2ec000293f0 (0x2ec000293f0) in binary!
	0x9598  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x5d4fffab820  @objc MapsSyncCollectionItem.(null) <stripped>
	0x39cfffab918  @objc MapsSyncCollectionItem.B <stripped>
	0x654000294b0  @objc MapsSyncCollectionItem.5˚/ <stripped>
WARNING: couldn't find address 0xfffaf4c8 (0xfffaf4c8) in binary!
	0x6400029368  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0xfffafa80 (0xfffafa80) in binary!
	0x44c00029490  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x294ecfffaf508 (0x4ecfffaf508) in binary!
	0x43400029a18  @objc MapsSyncCollectionItem.(null) <stripped>

	// Swift methods
	0x44570  class func MapsSyncCollectionItem.__allocating_init(collection:) // init 
	0x440d0  func <stripped> // getter 
	0x440e0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCollectionItem : MapsSyncMutableBaseItem {

	// Properties
	var _proxyCollectionItem : MapsSyncManagedCollectionItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb054000293b0 (0x54000293b0) in binary!
	0x94a8  @objc MapsSyncMutableCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x892c00029a68 (0x12c00029a68) in binary!
	0x9560  @objc MapsSyncMutableCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffaf4c8  @objc MapsSyncMutableCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffafa80  @objc MapsSyncMutableCollectionItem.(null) <stripped>

	// Swift methods
	0x441b0  func <stripped> // getter 
	0x442b0  func <stripped> // setter 
	0x443d0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedContactHandle : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8654000294b0 (0x654000294b0) in binary!
	0x18000000c  @objc MapsSyncManagedContactHandle.(null) <stripped>
 }

 class MapsSync.MapsSyncHistoryPlaceItem : MapsSyncHistoryItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapItemStorage : ¡π // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _supersededSearchId : e∫ // +0x0 (0x0)
	var _latitude : NSNumber? // +0x0 (0x8)
	var _longitude : NSNumber? // +0x0 (0x8)
	var _muid : NSNumber? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x944c00029490 (0x44c00029490) in binary!
	0x9440  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x943400029a18 (0x43400029a18) in binary!
	0x9428  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x941c00029540 (0x41c00029540) in binary!
	0x9410  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xc08400029458 (0x8400029458) in binary!
	0x8888  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x7e8c00029318 (0x68c00029318) in binary!
	0x7e80  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa1ec000292f0 (0x1ec000292f0) in binary!
	0xaf68  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x948c000292c8 (0x48c000292c8) in binary!
	0x68000000c  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xaf44000292a0 (0x744000292a0) in binary!
	0x9398  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x881c00029440 (0x1c00029440) in binary!
	0x9380  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
	0x9438  @objc MapsSyncHistoryPlaceItem.Hâ·HÉ¿HÉ‡H)¡Hâç8ˇˇˇHâÃ1ˇËeÊ <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x13cfffb1b50  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
	0x144fffb1f78  @objc MapsSyncHistoryPlaceItem.Tí
 <stripped>
	0x36cfffb1fe0  @objc MapsSyncHistoryPlaceItem. <stripped>

	// Swift methods
	0x49880  func <stripped> // getter 
	0x499e0  func <stripped> // getter 
	0x49a50  func <stripped> // getter 
	0x49ab0  func <stripped> // getter 
	0x49b10  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryPlaceItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryPlaceItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xaf44000292a0 (0x744000292a0) in binary!
	0x9398  @objc MapsSyncMutableHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x881c00029440 (0x1c00029440) in binary!
	0x9380  @objc MapsSyncMutableHistoryPlaceItem.(null) <stripped>
	0x9438  @objc MapsSyncMutableHistoryPlaceItem.Hâ·HÉ¿HÉ‡H)¡Hâç8ˇˇˇHâÃ1ˇËeÊ <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x13cfffb1b50  @objc MapsSyncMutableHistoryPlaceItem.(null) <stripped>
	0x144fffb1f78  @objc MapsSyncMutableHistoryPlaceItem.Tí
 <stripped>
	0x36cfffb1fe0  @objc MapsSyncMutableHistoryPlaceItem. <stripped>

	// Swift methods
	0x4aab0  func <stripped> // getter 
	0x4ac80  func <stripped> // setter 
	0x4b100  func <stripped> // modifyCoroutine 
	0x4b1e0  func <stripped> // getter 
	0x4b370  func <stripped> // setter 
	0x4b540  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncHistorySearchItem : MapsSyncHistoryItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _geoMapRegion : ¡π // +0x0 (0x10)
	var _language : String? // +0x0 (0x10)
	var _locationDisplay : String? // +0x0 (0x10)
	var _query : String? // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x935400029398 (0x35400029398) in binary!
	0x9348  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x933c00029940 (0x33c00029940) in binary!
	0x9330  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x932400029948 (0x32400029948) in binary!
	0xbf98  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x879c00029240 (0x79c00029240) in binary!
	0x7da0  @objc MapsSyncHistorySearchItem.(null) <stripped>
	0xa100  static MapsSyncCollection.fetchCollectionForIdentifier(_:)
WARNING: couldn't find address 0xae7c00029950 (0x67c00029950) in binary!
	0x93a0  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0xa4fffb2d88  @objc MapsSyncHistorySearchItem.(null) <stripped>
	0x9cfffb2fa0  @objc MapsSyncHistorySearchItem.æ) <stripped>
	0x94fffb3198  @objc MapsSyncHistorySearchItem.Ñ <stripped>
	0x8cfffb3310  @objc MapsSyncHistorySearchItem.§ <stripped>
	0x15cfffb35d8  @objc MapsSyncHistorySearchItem. <stripped>
	0x23c000290f8  @objc MapsSyncHistorySearchItem.âÁËŸﬁ <stripped>

	// Swift methods
	0x4c0c0  func <stripped> // getter 
	0x4c190  func <stripped> // getter 
	0x4c1d0  func <stripped> // getter 
	0x4c260  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistorySearchItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistorySearchItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xae5c000291b8 (0x65c000291b8) in binary!
	0x92b0  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x8734000298a0 (0x734000298a0) in binary!
	0x9298  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x871c00029898 (0x71c00029898) in binary!
	0x9280  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x870400029890 (0x70400029890) in binary!
	0x9268  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x86ec00029888 (0x6ec00029888) in binary!
	0x9320  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffb48d8  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x104fffb3f40  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
	0xdcfffb4288  @objc MapsSyncMutableHistorySearchItem. <stripped>
	0xacfffb4780  @objc MapsSyncMutableHistorySearchItem. <stripped>
	0xfffb4998  @objc MapsSyncMutableHistorySearchItem.LâM¿LâE»HâÀHâU–IâÙIâ˛H∏ <stripped>

	// Swift methods
	0x4d0f0  func <stripped> // getter 
	0x4d270  func <stripped> // setter 
	0x4d3b0  func <stripped> // modifyCoroutine 
	0x4d420  func <stripped> // getter 
	0x4d460  func <stripped> // setter 
	0x4d4c0  func <stripped> // modifyCoroutine 
	0x4d5b0  func <stripped> // getter 
	0x4d5f0  func <stripped> // setter 
	0x4d650  func <stripped> // modifyCoroutine 
	0x4d800  func <stripped> // getter 
	0x4d9a0  func <stripped> // setter 
	0x4dbc0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncCollectionPlaceItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xadc400029118 (0x5c400029118) in binary!
	0xa030  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0x8512000290f0 (0x512000290f0) in binary!
	0xa018  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0x84fa000290c8 (0x4fa000290c8) in binary!
	0x83c0  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0x92ac000290e8 (0x2ac000290e8) in binary!
	0x18000000c  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0xad6400029048 (0x56400029048) in binary!
	0x18000000c  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0x91ac00029068 (0x1ac00029068) in binary!
	0x88000000c  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0xad3400029088 (0x53400029088) in binary!
	0x9fa0  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>

	// Swift methods
	0x4e1e0  class func MapsSyncCollectionPlaceItemQuery.__allocating_init(delegate:) // init 
	0x4e290  func <stripped> // method 
	0x4e2f0  func <stripped> // method 
	0x4e5e0  func <stripped> // method 
	0x4e760  func <stripped> // method 
 }

 class MapsSync.MapsSyncFavoriteItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xad3400029088 (0x53400029088) in binary!
	0x9fa0  @objc MapsSyncFavoriteItemQuery.(null) <stripped>
WARNING: couldn't find address 0x848200029060 (0x48200029060) in binary!
	0x9f88  @objc MapsSyncFavoriteItemQuery.(null) <stripped>
WARNING: couldn't find address 0x846a00029038 (0x46a00029038) in binary!
	0xacf8  @objc MapsSyncFavoriteItemQuery.(null) <stripped>
WARNING: couldn't find address 0x832400029010 (0x32400029010) in binary!
	0x9210  @objc MapsSyncFavoriteItemQuery.(null) <stripped>
WARNING: couldn't find address 0x138000000c (0x138000000c) in binary!
	0x58cfffb8768  @objc MapsSyncFavoriteItemQuery.(null) <stripped>
	0x14cfffb8e20  @objc MapsSyncFavoriteItemQuery.HâG(Hâ«]È◊˛ <stripped>
	0x484fffb91c8  @objc MapsSyncFavoriteItemQuery.òÚ <stripped>
	0x48cfffb9290  @objc MapsSyncFavoriteItemQuery.
 <stripped>

	// Swift methods
	0x4fa70  class func MapsSyncFavoriteItemQuery.__allocating_init(delegate:) // init 
	0x4fb20  func <stripped> // method 
	0x4fbd0  func <stripped> // method 
	0x4fec0  func <stripped> // method 
	0x50040  func <stripped> // method 
 }

 class MapsSync.MapsSyncDataBase_0_0_1 : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x52200  func <stripped> // method 
	0x52890  func <stripped> // getter 
 }

 class MapsSync.MapsSyncCollection : MapsSyncBaseItem {

	// Properties
	var _collectionDescription : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _image : ¡π // +0x0 (0x10)
	var _imageUrl : String? // +0x0 (0x10)
	var _title : String? // +0x0 (0x10)
	var _places : MapsSyncCollectionItem // +0x0 (0x8)
	var _placesUnstored : MapsSyncCollectionItem // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x912c00028da0 (0x12c00028da0) in binary!
	0x85b0  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0xae5600029058 (0x65600029058) in binary!
	0x9108  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x90fc00029480 (0xfc00029480) in binary!
	0x90f0  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x90e400029488 (0xe400029488) in binary!
	0x90d8  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x90cc00029708 (0xcc00029708) in binary!
	0xbd40  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0xbd3400028d18 (0x53400028d18) in binary!
	0x8538  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x852c00028fd0 (0x52c00028fd0) in binary!
	0x7b30  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x7b2400028fa8 (0x32400028fa8) in binary!
	0x9e90  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x9e8400028d10 (0x68400028d10) in binary!
	0xac00  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x912400028f60 (0x12400028f60) in binary!
	0xe8000000c  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0xabdc00028f38 (0x3dc00028f38) in binary!
	0x9030  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x84b4000293b0 (0x4b4000293b0) in binary!
	0x9018  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x849c000293a8 (0x49c000293a8) in binary!
	0x9000  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x8484000293a0 (0x484000293a0) in binary!
	0x8fe8  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x846c00029398 (0x46c00029398) in binary!
	0x8fd0  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x845400029608 (0x45400029608) in binary!
	0x8448  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x843c00028be8 (0x43c00028be8) in binary!
	0x9070  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffbe2a8  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x30cfffc1660  @objc MapsSyncCollection.(null) <stripped>

	// Swift methods
	0x53620  func <stripped> // getter 
	0x536b0  func <stripped> // getter 
	0x53700  func <stripped> // getter 
	0x53790  func <stripped> // getter 
	0x53800  func <stripped> // getter 
	0x53ed0  func <stripped> // method 
 }

 class MapsSync.MapsSyncMutableCollection : MapsSyncMutableBaseItem {

	// Properties
	var _proxyCollection : MapsSyncManagedCollection

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xabdc00028f38 (0x3dc00028f38) in binary!
	0x9030  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x84b4000293b0 (0x4b4000293b0) in binary!
	0x9018  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x849c000293a8 (0x49c000293a8) in binary!
	0x9000  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x8484000293a0 (0x484000293a0) in binary!
	0x8fe8  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x846c00029398 (0x46c00029398) in binary!
	0x8fd0  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x845400029608 (0x45400029608) in binary!
	0x8448  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x843c00028be8 (0x43c00028be8) in binary!
	0x9070  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffbe2a8  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x30cfffc1660  @objc MapsSyncMutableCollection.(null) <stripped>
	0x75400028b88  @objc MapsSyncMutableCollection.¬Hæ/ <stripped>
WARNING: couldn't find address 0x28b74fffc1850 (0x374fffc1850) in binary!
	0x73c00028b60  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x28b4cfffc19c8 (0x34cfffc19c8) in binary!
	0x72400028b38  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x28b24fffc19f0 (0x324fffc19f0) in binary!
	0x1a400028b10  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x28afcfffc1b68 (0x2fcfffc1b68) in binary!
	0x6f400028ae8  @objc MapsSyncMutableCollection.(null) <stripped>

	// Swift methods
	0x55c50  func <stripped> // getter 
	0x55c90  func <stripped> // setter 
	0x55cf0  func <stripped> // modifyCoroutine 
	0x55e80  func <stripped> // getter 
	0x56030  func <stripped> // setter 
	0x56210  func <stripped> // modifyCoroutine 
	0x56370  func <stripped> // getter 
	0x563b0  func <stripped> // setter 
	0x56410  func <stripped> // modifyCoroutine 
	0x565c0  func <stripped> // getter 
	0x56760  func <stripped> // setter 
	0x56980  func <stripped> // modifyCoroutine 
	0x56b80  func <stripped> // getter 
	0x56d30  func <stripped> // setter 
	0x56e90  func <stripped> // modifyCoroutine 
	0x57000  func <stripped> // method 
	0x57170  func <stripped> // method 
 }

 class MapsSync.MapsSyncManagedHistorySearchItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x816400028fc0 (0x16400028fc0) in binary!
	0x28000000c  @objc MapsSyncManagedHistorySearchItem.(null) <stripped>
 }

 class MapsSync.MapsSyncBaseItem : MapsSyncObjectWrapper {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _identifier : e∫ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _createTime : ß± // +0xb2000 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _modificationTime : ß± // +0x5 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _positionIndex : ù´ // +0x13 (0x8)
	var _editBlocks : MapsSyncMutableBaseItem // +0x65745f5f (0x8)
	var _readContext : NSManagedObjectContext? // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _saveObjectSignpost : ¨ // +0x45545f5f (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8f5400028b88 (0x75400028b88) in binary!
	0x83d8  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8f3c00028b60 (0x73c00028b60) in binary!
	0x83c0  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8f2400028b38 (0x72400028b38) in binary!
	0x83a8  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x79a400028b10 (0x1a400028b10) in binary!
	0xac2c  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8ef400028ae8 (0x6f400028ae8) in binary!
	0x8378  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0xaa7c00029550 (0x27c00029550) in binary!
	0xac12  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8ec400028f28 (0x6c400028f28) in binary!
	0x8eb8  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0xbb2c00028de8 (0x32c00028de8) in binary!
	0x8ea0  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8e9400028eb0 (0x69400028eb0) in binary!
	0x8e88  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x791400028e78 (0x11400028e78) in binary!
	0x8300  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x82f400028a48 (0x2f400028a48) in binary!
	0xaba8  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x9c6400028d68 (0x46400028d68) in binary!
	0x9c58  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0xaba200028a00 (0x3a200028a00) in binary!
	0xbaa8  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x9c3400028ac0 (0x43400028ac0) in binary!
	0x78b0  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x78a400028d28 (0xa400028d28) in binary!
	0xa998  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x827c00028d20 (0x27c00028d20) in binary!
	0xa980  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8dd400028988 (0x5d400028988) in binary!
	0x8e98  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x144fffc47b0  @objc MapsSyncBaseItem.(null) <stripped>
	0x5bcfffc4848  @objc MapsSyncBaseItem.ˇˇfD <stripped>
	0x594fffc48c0  @objc MapsSyncBaseItem.UHâÂ]È&¯ˇˇfD <stripped>
	0x55cfffc4ae8  @objc MapsSyncBaseItem.ˇˇfD <stripped>
	0x5acfffc4e70  @objc MapsSyncBaseItem.∫ <stripped>
	0xfffc5168  @objc MapsSyncBaseItem.ˇˇfD <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc6dd0  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc70f8  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc7180  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x31cfffc8b18  @objc MapsSyncBaseItem.(null) <stripped>
	0xfffc9f00  @objc MapsSyncBaseItem.@Hâ„HÉ¡HÉ·H)ÀHâ‹Lcx0IﬂLâÁHâﬁLâÍË˘ <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x104fffccbe8  @objc MapsSyncBaseItem.(null) <stripped>
	0x4dcfffccea0  @objc MapsSyncBaseItem.LâˇË‹È <stripped>
	0x39cfffcd1b8  @objc MapsSyncBaseItem.H∏¯ˇˇˇˇˇˇ <stripped>
	0x374fffcd220  @objc MapsSyncBaseItem.A^A_]√Hç=£_ <stripped>
	0x34cfffcd4e8  @objc MapsSyncBaseItem.E® <stripped>
	0x7cc00028b28  @objc MapsSyncBaseItem.UHâÂ]Èf˚ˇˇfD <stripped>

	// Swift methods
	0x588c0  func <stripped> // method 
	0x58a20  func <stripped> // getter 
	0x58a60  func <stripped> // getter 
	0x58a80  func <stripped> // getter 
	0x58b00  func <stripped> // getter 
	0x5b540  func <stripped> // method 
	0x58b20  func <stripped> // method 
	0x5b1f0  func <stripped> // method 
	0x58e20  func <stripped> // method 
	0x59010  func <stripped> // method 
	0x59220  func <stripped> // method 
	0x598a0  func <stripped> // method 
	0x5eb40  func <stripped> // method 
	0x5eb60  func <stripped> // method 
	0x59d40  func <stripped> // method 
	0x5ad10  func <stripped> // method 
	0x59ef0  func <stripped> // method 
 }

 class MapsSync.MapsSyncMutableBaseItem : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _proxyObject : NSManagedObject

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa95400028cb0 (0x15400028cb0) in binary!
	0x8da8  @objc MapsSyncMutableBaseItem.(null) <stripped>
	0x8d90  _block_destroy_helper.97
WARNING: couldn't find address 0x821400028da8 (0x21400028da8) in binary!
	0x8d78  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x81fc00028d80 (0x1fc00028d80) in binary!
	0x77f8  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0xaa8000028d48 (0x28000028d48) in binary!
	0x8d48  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8e0c00028c48 (0x60c00028c48) in binary!
	0x18000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x7efc00028d58 (0x6fc00028d58) in binary!
	0x18000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x7ee400028d40 (0x6e400028d40) in binary!
	0x18000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x7ecc00028d28 (0x6cc00028d28) in binary!
	0x38000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x7fbc00028b30 (0x7bc00028b30) in binary!
	0x7c20  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x7fca00028b08 (0x7ca00028b08) in binary!
	0xa8000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>

	// Swift methods
	0x5eef0  class func MapsSyncMutableBaseItem.__allocating_init(proxyObject:) // init 
	0x5a000  func <stripped> // getter 
	0x5a030  func <stripped> // getter 
	0x5a160  func <stripped> // setter 
	0x5a260  func <stripped> // modifyCoroutine 
	0x5a5f0  func <stripped> // getter 
	0x5a6a0  func <stripped> // setter 
	0x5a750  func <stripped> // modifyCoroutine 
	0x5a9a0  func <stripped> // getter 
	0x5aa50  func <stripped> // setter 
	0x5ab00  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedHistoryEvDirectionsItem : MapsSyncManagedHistoryDirectionsItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7efc00028d58 (0x6fc00028d58) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryEvDirectionsItem.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedCollection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7ee400028d40 (0x6e400028d40) in binary!
	0x18000000c  @objc MapsSyncManagedCollection.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedCollectionTransitItem : MapsSyncManagedCollectionItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7ecc00028d28 (0x6cc00028d28) in binary!
	0x38000000c  @objc MapsSyncManagedCollectionTransitItem.(null) <stripped>
 }

 class MapsSync.MapsSyncWrapperFactoryGeneric {
 class MapsSync.MapsSyncWrapperFactory : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class MapsSync.MapsSyncSetWrapperUtil {
 class MapsSync.MapsSyncSetTransformUtil {
 class MapsSync.MapsSyncLazyLoad {
 class MapsSync.MapsSyncRetrieveObject {
 class MapsSync.MapsSyncRetrieveItem {
 class MapsSync.MapsSyncEventDebouncer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var queue : OS_dispatch_queue
	var listeners : [()]
	var waiting : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastNotified : ’∏
	var lock : NSLock

	// Swift methods
	0x65a40  func <stripped> // getter 
	0x65a70  func <stripped> // setter 
	0x65ab0  func <stripped> // modifyCoroutine 
	0x65ae0  func <stripped> // method 
	0x65c30  func <stripped> // method 
	0x66480  func <stripped> // method 
	0x66760  func <stripped> // method 
 }

 class MapsSync.MapsSyncHistoryDirectionsItem : MapsSyncHistoryItem {

	// Properties
	var _navigationInterrupted : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _routeRequestStorage : ¡π // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8cac00028cf0 (0x4ac00028cf0) in binary!
	0x9ab0  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x8c9400029100 (0x49400029100) in binary!
	0xb908  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x810c00028bb0 (0x10c00028bb0) in binary!
	0x7710  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x770400028b88 (0x70400028b88) in binary!
	0x9a70  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0xa7ec000292c0 (0x7ec000292c0) in binary!
	0x8d10  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x84fffcd628  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
	0x74fffcd6e0  @objc MapsSyncHistoryDirectionsItem.LâpHã]àHâX HãMêHâH(Lã}ÄLâx0HãM–HâH8Hç’ <stripped>
	0x2fcfffcd788  @objc MapsSyncHistoryDirectionsItem.ˇˇfD <stripped>
	0x3dc00029288  @objc MapsSyncHistoryDirectionsItem.UHâÂ]È¯ˇˇfD <stripped>
WARNING: couldn't find address 0x2928cfffcdb68 (0x28cfffcdb68) in binary!
	0x3c400029290  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>

	// Swift methods
	0x66fe0  func <stripped> // getter 
	0x67000  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryDirectionsItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryDirectionsItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa7cc00028b28 (0x7cc00028b28) in binary!
	0x9a30  @objc MapsSyncMutableHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0xaf78000292b0 (0x778000292b0) in binary!
	0x8c08  @objc MapsSyncMutableHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x808c000292a0 (0x8c000292a0) in binary!
	0x8cc0  @objc MapsSyncMutableHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x1b8000000c (0x1b8000000c) in binary!
	0x28cfffcdb68  @objc MapsSyncMutableHistoryDirectionsItem.(null) <stripped>
	0x294fffcdbd0  @objc MapsSyncMutableHistoryDirectionsItem.UHâÂ]È÷ÔˇˇfD <stripped>
	0x29cfffcdc38  @objc MapsSyncMutableHistoryDirectionsItem.ˇˇfD <stripped>

	// Swift methods
	0x67140  func <stripped> // getter 
	0x67160  func <stripped> // setter 
	0x67190  func <stripped> // modifyCoroutine 
	0x671f0  func <stripped> // getter 
	0x67330  func <stripped> // setter 
	0x67420  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncVehicle : MapsSyncBaseItem {

	// Properties
	var _colorHex : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentVehicleState : ¡π // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _dateOfVehicleIngestion : °∑ // +0x0 (0x0)
	var _displayName : String? // +0x0 (0x10)
	var _headUnitBluetoothIdentifier : String? // +0x0 (0x10)
	var _headUnitMacAddress : String? // +0x0 (0x10)
	var _iapIdentifier : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastStateUpdateDate : °∑ // +0x0 (0x0)
	var _licensePlate : String? // +0x0 (0x10)
	var _lprPowerType : String? // +0x0 (0x10)
	var _lprVehicleType : String? // +0x0 (0x10)
	var _manufacturer : String? // +0x0 (0x10)
	var _model : String? // +0x0 (0x10)
	var _pairedAppIdentifier : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _powerByConnector : ¡π // +0x0 (0x10)
	var _siriIntentsIdentifier : String? // +0x0 (0x10)
	var _supportedConnectors : NSNumber? // +0x0 (0x8)
	var _vehicleIdentifier : String? // +0x0 (0x10)
	var _vehicleType : NSNumber? // +0x0 (0x8)
	var _year : NSNumber? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8bdc00029288 (0x3dc00029288) in binary!
	0x8bd0  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8bc400029290 (0x3c400029290) in binary!
	0x8bb8  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8bac00029298 (0x3ac00029298) in binary!
	0x8ba0  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8b94000292a0 (0x394000292a0) in binary!
	0x8b88  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8b7c000292a8 (0x37c000292a8) in binary!
	0x8b70  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8b64000292b0 (0x364000292b0) in binary!
	0x8b58  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8b4c000292b8 (0x34c000292b8) in binary!
	0x8b40  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8b34000292c0 (0x334000292c0) in binary!
	0x8b28  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8b1c000292c8 (0x31c000292c8) in binary!
	0x8b10  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8b04000292c0 (0x304000292c0) in binary!
	0x8af8  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0xb76c00028b40 (0x76c00028b40) in binary!
	0x7f70  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x757400028a00 (0x57400028a00) in binary!
	0x7568  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x98d4000289d8 (0xd4000289d8) in binary!
	0xa650  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8b74000289b0 (0x374000289b0) in binary!
	0x2a8000000c  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0xa62c00028988 (0x62c00028988) in binary!
	0x8a80  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f0400029128 (0x70400029128) in binary!
	0x8a68  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7eec00029120 (0x6ec00029120) in binary!
	0x8a50  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7ed400029118 (0x6d400029118) in binary!
	0x8a38  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7ebc00029110 (0x6bc00029110) in binary!
	0x8a20  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7ea400029108 (0x6a400029108) in binary!
	0x8a08  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e8c00029100 (0x68c00029100) in binary!
	0x89f0  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e74000290f8 (0x674000290f8) in binary!
	0x89d8  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e5c000290f0 (0x65c000290f0) in binary!
	0x89c0  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e44000290e8 (0x644000290e8) in binary!
	0x89a8  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e2c000290e0 (0x62c000290e0) in binary!
	0x8990  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e14000290d8 (0x614000290d8) in binary!
	0x8978  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7dfc000290d0 (0x5fc000290d0) in binary!
	0x8960  @objc MapsSyncVehicle.(null) <stripped>

	// Swift methods
	0x684e0  func <stripped> // getter 
	0x68520  func <stripped> // getter 
	0x68560  func <stripped> // getter 
	0x685a0  func <stripped> // getter 
	0x685e0  func <stripped> // getter 
	0x68620  func <stripped> // getter 
	0x68660  func <stripped> // getter 
	0x68750  func <stripped> // getter 
	0x687d0  func <stripped> // getter 
	0x68810  func <stripped> // getter 
	0x68850  func <stripped> // getter 
	0x68890  func <stripped> // getter 
	0x688d0  func <stripped> // getter 
	0x68910  func <stripped> // getter 
	0x689b0  func <stripped> // getter 
	0x68a20  func <stripped> // getter 
	0x68a70  func <stripped> // getter 
	0x68b10  func <stripped> // getter 
	0x68b90  func <stripped> // getter 
	0x68bf0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableVehicle : MapsSyncMutableBaseItem {

	// Properties
	var _proxy : MapsSyncManagedVehicle

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa62c00028988 (0x62c00028988) in binary!
	0x8a80  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f0400029128 (0x70400029128) in binary!
	0x8a68  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7eec00029120 (0x6ec00029120) in binary!
	0x8a50  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7ed400029118 (0x6d400029118) in binary!
	0x8a38  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7ebc00029110 (0x6bc00029110) in binary!
	0x8a20  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7ea400029108 (0x6a400029108) in binary!
	0x8a08  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e8c00029100 (0x68c00029100) in binary!
	0x89f0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e74000290f8 (0x674000290f8) in binary!
	0x89d8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e5c000290f0 (0x65c000290f0) in binary!
	0x89c0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e44000290e8 (0x644000290e8) in binary!
	0x89a8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e2c000290e0 (0x62c000290e0) in binary!
	0x8990  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e14000290d8 (0x614000290d8) in binary!
	0x8978  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7dfc000290d0 (0x5fc000290d0) in binary!
	0x8960  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7de4000290c8 (0x5e4000290c8) in binary!
	0x8948  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7dcc000290c0 (0x5cc000290c0) in binary!
	0x8930  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7db4000290b8 (0x5b4000290b8) in binary!
	0x8918  @objc MapsSyncMutableVehicle.(null) <stripped>
	0x8900  ___swift_instantiateConcreteTypeFromMangledNameAbstract
WARNING: couldn't find address 0x7d84000290a8 (0x584000290a8) in binary!
	0x88e8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7d6c00028d38 (0x56c00028d38) in binary!
	0x88d0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7d5400029088 (0x55400029088) in binary!
	0x88b8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7d3c00029080 (0x53c00029080) in binary!
	0x8970  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x3ecfffd3c08  @objc MapsSyncMutableVehicle.(null) <stripped>
	0x6c000283f0  @objc MapsSyncMutableVehicle.ë <stripped>
WARNING: couldn't find address 0x283dcfffd3ad8 (0x3dcfffd3ad8) in binary!
	0x5400029030  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x29034fffd3c50 (0x34fffd3c50) in binary!
	0x3c00029038  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x2903cfffd3d48 (0x3cfffd3d48) in binary!
	0x2400029048  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x2886cfffd3e60 (0x6cfffd3e60) in binary!
	0x49c00028490  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28734fffd4c58 (0x734fffd4c58) in binary!
	0x29400028720  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x2870cfffd4f00 (0x70cfffd4f00) in binary!
	0x5f4000286f8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28e44fffd5058 (0x644fffd5058) in binary!
	0x94000286d0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0xfffd5260 (0xfffd5260) in binary!
	0x34c000286a8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28f7cfffd5528 (0x77cfffd5528) in binary!
	0x42400028f78  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28f74fffd55e0 (0x774fffd55e0) in binary!
	0x40c00028f70  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28f6cfffd58b8 (0x76cfffd58b8) in binary!
	0x3f400028f68  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28f64fffd5f00 (0x764fffd5f00) in binary!
	0x2ec00028f60  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x2864cfffd6478 (0x64cfffd6478) in binary!
	0x38000000c  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0xa2cc00028f58 (0x2cc00028f58) in binary!
	0xafb0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x87e400028620 (0x7e400028620) in binary!
	0x48000000c  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x79dc00028550 (0x1dc00028550) in binary!
	0xa290  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0xa28400028240 (0x28400028240) in binary!
	0x72d8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x148000000c (0x148000000c) in binary!
	0x6fcfffd8590  @objc MapsSyncMutableVehicle.(null) <stripped>
	0x70cfffd8c18  @objc MapsSyncMutableVehicle.	 <stripped>

	// Swift methods
	0x6ab30  func <stripped> // getter 
	0x6ab70  func <stripped> // setter 
	0x6abd0  func <stripped> // modifyCoroutine 
	0x6acc0  func <stripped> // getter 
	0x6ad00  func <stripped> // setter 
	0x6ad60  func <stripped> // modifyCoroutine 
	0x6ae50  func <stripped> // getter 
	0x6ae90  func <stripped> // setter 
	0x6aef0  func <stripped> // modifyCoroutine 
	0x6b050  func <stripped> // getter 
	0x6b090  func <stripped> // setter 
	0x6b0f0  func <stripped> // modifyCoroutine 
	0x6b1e0  func <stripped> // getter 
	0x6b220  func <stripped> // setter 
	0x6b280  func <stripped> // modifyCoroutine 
	0x6b370  func <stripped> // getter 
	0x6b3b0  func <stripped> // setter 
	0x6b410  func <stripped> // modifyCoroutine 
	0x6b500  func <stripped> // getter 
	0x6b540  func <stripped> // setter 
	0x6b5a0  func <stripped> // modifyCoroutine 
	0x6b730  func <stripped> // getter 
	0x6b980  func <stripped> // setter 
	0x6bb70  func <stripped> // modifyCoroutine 
	0x6be40  func <stripped> // getter 
	0x6be80  func <stripped> // setter 
	0x6bee0  func <stripped> // modifyCoroutine 
	0x6bfd0  func <stripped> // getter 
	0x6c010  func <stripped> // setter 
	0x6c070  func <stripped> // modifyCoroutine 
	0x6c160  func <stripped> // getter 
	0x6c1a0  func <stripped> // setter 
	0x6c200  func <stripped> // modifyCoroutine 
	0x6c2f0  func <stripped> // getter 
	0x6c330  func <stripped> // setter 
	0x6c390  func <stripped> // modifyCoroutine 
	0x6c480  func <stripped> // getter 
	0x6c4c0  func <stripped> // setter 
	0x6c520  func <stripped> // modifyCoroutine 
	0x6c610  func <stripped> // getter 
	0x6c650  func <stripped> // setter 
	0x6c6b0  func <stripped> // modifyCoroutine 
	0x6c860  func <stripped> // getter 
	0x6ca60  func <stripped> // setter 
	0x6cca0  func <stripped> // modifyCoroutine 
	0x6ce20  func <stripped> // getter 
	0x6ce60  func <stripped> // setter 
	0x6cec0  func <stripped> // modifyCoroutine 
	0x6cfb0  func <stripped> // getter 
	0x6cff0  func <stripped> // setter 
	0x6d050  func <stripped> // modifyCoroutine 
	0x6d1a0  func <stripped> // getter 
	0x6d340  func <stripped> // setter 
	0x6d560  func <stripped> // modifyCoroutine 
	0x6d6e0  func <stripped> // getter 
	0x6d720  func <stripped> // setter 
	0x6d780  func <stripped> // modifyCoroutine 
	0x6d840  func <stripped> // getter 
	0x6d8d0  func <stripped> // setter 
	0x6d9d0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncAnonymousCredential : MapsSyncBaseItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _anonymousId : ¡π // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapsToken : ¡π // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapsTokenCreatedAt : °∑ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapsTokenTTL : ’∏ // +0x0 (0x8)
	var _reviewedPlaces : MapsSyncReviewedPlace // +0x0 (0x8)
	var _reviewedPlacesUnstored : MapsSyncReviewedPlace // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x886c000283f0 (0x6c000283f0) in binary!
	0x7cf0  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x885400029030 (0x5400029030) in binary!
	0x8848  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x883c00029038 (0x3c00029038) in binary!
	0x7330  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x882400029048 (0x2400029048) in binary!
	0xb498  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7c9c00028490 (0x49c00028490) in binary!
	0x7c90  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x729400028720 (0x29400028720) in binary!
	0x7288  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x95f4000286f8 (0x5f4000286f8) in binary!
	0xa370  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x8894000286d0 (0x94000286d0) in binary!
	0xa8000000c  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0xa34c000286a8 (0x34c000286a8) in binary!
	0x87a0  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7c2400028f78 (0x42400028f78) in binary!
	0x8788  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7c0c00028f70 (0x40c00028f70) in binary!
	0x8770  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7bf400028f68 (0x3f400028f68) in binary!
	0x7258  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x9aec00028f60 (0x2ec00028f60) in binary!
	0x8810  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0xacfffd7a28  @objc MapsSyncAnonymousCredential.(null) <stripped>
	0xfffd7e10  @objc MapsSyncAnonymousCredential.ç=) <stripped>

	// Swift methods
	0x6e950  func <stripped> // getter 
	0x6e9f0  func <stripped> // getter 
	0x6eaf0  func <stripped> // getter 
	0x6eb50  func <stripped> // getter 
	0x6ec30  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableAnonymousCredential : MapsSyncMutableBaseItem {

	// Properties
	var _proxyObject : MapsSyncManagedAnonymousCredential

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa34c000286a8 (0x34c000286a8) in binary!
	0x87a0  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7c2400028f78 (0x42400028f78) in binary!
	0x8788  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7c0c00028f70 (0x40c00028f70) in binary!
	0x8770  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7bf400028f68 (0x3f400028f68) in binary!
	0x7258  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x9aec00028f60 (0x2ec00028f60) in binary!
	0x8810  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0xacfffd7a28  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
	0xfffd7e10  @objc MapsSyncMutableAnonymousCredential.ç=) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x254fffe0a48  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
	0x5dcfffe0b80  @objc MapsSyncMutableAnonymousCredential. <stripped>
	0x26400028d38  @objc MapsSyncMutableAnonymousCredential.=„c <stripped>

	// Swift methods
	0x70360  func <stripped> // getter 
	0x703a0  func <stripped> // setter 
	0x70400  func <stripped> // modifyCoroutine 
	0x705b0  func <stripped> // getter 
	0x707b0  func <stripped> // setter 
	0x709f0  func <stripped> // modifyCoroutine 
	0x70be0  func <stripped> // getter 
	0x70df0  func <stripped> // setter 
	0x70f90  func <stripped> // modifyCoroutine 
	0x71240  func <stripped> // getter 
	0x71280  func <stripped> // setter 
	0x71300  func <stripped> // modifyCoroutine 
 }

 enum MapsSync.MapsSyncErrorCode {

	// Properties
	case Unknown  
	case ObjectAlreadyExists  
	case ObjectAlreadyDeleted  
	case ObjectNotFound  
	case ObjectIsDuplicate  
	case CoreDataError  
	case XPCError  
	case ObjectNotSaved  
	case FetchInvalidValueTypeForAttribute  
	case StoreNotLoaded  
 }

 class MapsSync.MapsSyncError : NSError /System/Library/Frameworks/Foundation.framework/Foundation {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa2cc00028f58 (0x2cc00028f58) in binary!
	0xafb0  @objc MapsSyncError.(null) <stripped>
WARNING: couldn't find address 0x87e400028620 (0x7e400028620) in binary!
	0x48000000c  @objc MapsSyncError.(null) <stripped>
WARNING: couldn't find address 0x79dc00028550 (0x1dc00028550) in binary!
	0xa290  @objc MapsSyncError.(null) <stripped>

	// Swift methods
	0x72890  func <stripped> // getter 
 }

 class MapsSync.MapsSyncFavoriteItem : MapsSyncBaseItem {

	// Properties
	var _contactHandles : Set<String>? // +0x0 (0x8)
	var _customName : String? // +0x0 (0x10)
	var _hidden : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapItemStorage : ¡π // +0x0 (0x10)
	var _originatingAddressString : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _type : €Ω // +0x0 (0x2)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _source : €Ω // +0x0 (0x2)
	var _shortcutIdentifier : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _version : €Ω // +0x0 (0x2)
	var _latitude : NSNumber? // +0x0 (0x8)
	var _longitude : NSNumber? // +0x0 (0x8)
	var _muid : NSNumber? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa26400028d38 (0x26400028d38) in binary!
	0x86b8  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x86ac00028ee0 (0x6ac00028ee0) in binary!
	0x86a0  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x94a400028ef0 (0x4a400028ef0) in binary!
	0x8688  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x867c00028ee8 (0x67c00028ee8) in binary!
	0xaf90  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xaf8400028ee8 (0x78400028ee8) in binary!
	0x8658  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xaf6c00028ef0 (0x76c00028ef0) in binary!
	0x8640  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x863400028758 (0x63400028758) in binary!
	0x8628  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xb29c00028670 (0x29c00028670) in binary!
	0x7aa0  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x70a400028530 (0xa400028530) in binary!
	0x7098  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x940400028508 (0x40400028508) in binary!
	0x86b0  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x1c8000000c (0x1c8000000c) in binary!
	0x10cfff93108  @objc MapsSyncFavoriteItem.(null) <stripped>
	0xe4fff933f0  @objc MapsSyncFavoriteItem.â≈Hç=/R <stripped>
	0xbcfffd9ff8  @objc MapsSyncFavoriteItem.âˇËAﬁ <stripped>
	0x5acfffda130  @objc MapsSyncFavoriteItem.¡„Hçˆ
 <stripped>
	0x84fffda2d8  @objc MapsSyncFavoriteItem. <stripped>
	0x5b4fffdaca0  @objc MapsSyncFavoriteItem.UHâÂ]ÈÊ <stripped>
	0x58cfffdad48  @objc MapsSyncFavoriteItem.} HãO†
 <stripped>
	0x5c4fffdaec0  @objc MapsSyncFavoriteItem.Mâ>HâﬂˇTí
 <stripped>
	0x56cfffdb188  @objc MapsSyncFavoriteItem. <stripped>
	0x564fffdb6c0  @objc MapsSyncFavoriteItem.UHâÂHç’´
 <stripped>

	// Swift methods
	0x73b00  func <stripped> // getter 
	0x73b40  func <stripped> // getter 
	0x73b70  func <stripped> // getter 
	0x73bd0  func <stripped> // getter 
	0x73ca0  func <stripped> // getter 
	0x73ce0  func <stripped> // getter 
	0x73d50  func <stripped> // getter 
	0x73de0  func <stripped> // getter 
	0x73e50  func <stripped> // getter 
	0x73ed0  func <stripped> // getter 
	0x73f30  func <stripped> // getter 
	0x73f90  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableFavoriteItem : MapsSyncMutableBaseItem {

	// Properties
	var _proxyFavorite : MapsSyncManagedFavoriteItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x869c00028120 (0x69c00028120) in binary!
	0x8690  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xa154000280f8 (0x154000280f8) in binary!
	0xa148  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x859c000280d0 (0x59c000280d0) in binary!
	0x7a20  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xa12400028480 (0x12400028480) in binary!
	0x8578  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
	0xa100  static MapsSyncCollection.fetchCollectionForIdentifier(_:)
WARNING: couldn't find address 0xa0f400028070 (0xf400028070) in binary!
	0x8548  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x79cc000285b0 (0x1cc000285b0) in binary!
	0x9340  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xa88800028d88 (0x8800028d88) in binary!
	0x8518  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x799c000285c0 (0x19c000285c0) in binary!
	0x8500  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x798400028d68 (0x18400028d68) in binary!
	0xae08  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xaf0200028718 (0x70200028718) in binary!
	0xadf0  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xaeea00028d50 (0x6ea00028d50) in binary!
	0x84b8  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x793c00028d48 (0x13c00028d48) in binary!
	0xadc0  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xaeba00028d40 (0x6ba00028d40) in binary!
	0x8558  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffdee10  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x33cfffde478  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
	0x314fffde7c0  @objc MapsSyncMutableFavoriteItem. <stripped>
	0x2e4fffdecb8  @objc MapsSyncMutableFavoriteItem.◊Iâ¸Hâ˜Hâ÷Ë1 <stripped>
	0xfffdeed0  @objc MapsSyncMutableFavoriteItem.Hão <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x4acfffe3e08  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
	0x42cfffe4150  @objc MapsSyncMutableFavoriteItem.Êt3ç» <stripped>
	0x2ecfffe47d8  @objc MapsSyncMutableFavoriteItem.— <stripped>
	0x2c4fffe4840  @objc MapsSyncMutableFavoriteItem.u–Iâ¸Lç-Ti <stripped>
	0x29cfffe4c78  @objc MapsSyncMutableFavoriteItem.â∆Hã}»ˇ”Hã}–Ë∑Ú <stripped>
	0x71c00028278  @objc MapsSyncMutableFavoriteItem.LâˆLâ‚Hâ¡ËHˇ <stripped>
WARNING: couldn't find address 0x28c2cfffe4e08 (0x42cfffe4e08) in binary!
	0x7f400028c28  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x28c24fffe4f00 (0x424fffe4f00) in binary!
	0x7dc00028c20  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x2824cfffe51c8 (0x24cfffe51c8) in binary!
	0x18000000c  @objc MapsSyncMutableFavoriteItem.(null) <stripped>

	// Swift methods
	0x751e0  func <stripped> // getter 
	0x75310  func <stripped> // setter 
	0x75380  func <stripped> // modifyCoroutine 
	0x75490  func <stripped> // method 
	0x75730  func <stripped> // method 
	0x75d20  func <stripped> // getter 
	0x75d60  func <stripped> // setter 
	0x75dc0  func <stripped> // modifyCoroutine 
	0x75eb0  func <stripped> // getter 
	0x75ef0  func <stripped> // setter 
	0x75f80  func <stripped> // modifyCoroutine 
	0x76020  func <stripped> // getter 
	0x761f0  func <stripped> // setter 
	0x76670  func <stripped> // modifyCoroutine 
	0x766e0  func <stripped> // getter 
	0x76720  func <stripped> // setter 
	0x76780  func <stripped> // modifyCoroutine 
	0x76870  func <stripped> // getter 
	0x768b0  func <stripped> // setter 
	0x76910  func <stripped> // modifyCoroutine 
	0x76990  func <stripped> // getter 
	0x769d0  func <stripped> // setter 
	0x76a30  func <stripped> // modifyCoroutine 
	0x76b70  func <stripped> // getter 
	0x76d10  func <stripped> // setter 
	0x76f30  func <stripped> // modifyCoroutine 
	0x770b0  func <stripped> // getter 
	0x77110  func <stripped> // setter 
	0x771e0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncCollectionItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9ffc00028350 (0x7fc00028350) in binary!
	0x9268  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x774a00028328 (0x74a00028328) in binary!
	0x9250  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x773200028300 (0x73200028300) in binary!
	0x75f8  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x84e400028320 (0x4e400028320) in binary!
	0xa8000000c  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x83fc00028440 (0x3fc00028440) in binary!
	0x83f0  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x83e400028cb0 (0x3e400028cb0) in binary!
	0xb058  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x785c00028300 (0x5c00028300) in binary!
	0x6e60  @objc MapsSyncCollectionItemQuery.(null) <stripped>

	// Swift methods
	0x794e0  class func MapsSyncCollectionItemQuery.__allocating_init(delegate:) // init 
	0x79590  func <stripped> // method 
	0x795f0  func <stripped> // method 
	0x798e0  func <stripped> // method 
	0x79a60  func <stripped> // method 
 }

 class MapsSync.MapsSyncHistoryRideShareItem : MapsSyncHistoryItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _startWaypoint : ¡π // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _endWaypoint : ¡π // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x83fc00028440 (0x3fc00028440) in binary!
	0x83f0  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x83e400028cb0 (0x3e400028cb0) in binary!
	0xb058  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x785c00028300 (0x5c00028300) in binary!
	0x6e60  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x6e54000282d8 (0x654000282d8) in binary!
	0x91c0  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x9f3c00028a10 (0x73c00028a10) in binary!
	0x8460  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x42cfffe4e08  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
	0x424fffe4f00  @objc MapsSyncHistoryRideShareItem.HÖ€LH˚HâﬂËO <stripped>
	0x24cfffe51c8  @objc MapsSyncHistoryRideShareItem.[A\A]A^A_]√Iø¯ˇˇˇˇˇˇ <stripped>
	0x50400028360  @objc MapsSyncHistoryRideShareItem.LâˇIˇ«HâﬁLâÍËµ˝ <stripped>
WARNING: couldn't find address 0xfffe5838 (0xfffe5838) in binary!
	0x6b400027e28  @objc MapsSyncHistoryRideShareItem.(null) <stripped>

	// Swift methods
	0x7f280  func <stripped> // getter 
	0x7f370  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryRideShareItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryRideShareItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9f1c00028278 (0x71c00028278) in binary!
	0x8370  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x77f400028c28 (0x7f400028c28) in binary!
	0x8358  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x77dc00028c20 (0x7dc00028c20) in binary!
	0x8410  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe5838  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0xe8000000c (0xe8000000c) in binary!
	0x17cfffe5c60  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
	0x3ccfffe5e78  @objc MapsSyncMutableHistoryRideShareItem.m¿Lãe»Ë	‚ <stripped>

	// Swift methods
	0x800b0  func <stripped> // getter 
	0x80110  func <stripped> // setter 
	0x80180  func <stripped> // modifyCoroutine 
	0x802c0  func <stripped> // getter 
	0x803f0  func <stripped> // setter 
	0x80560  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedHistoryTransitItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x750400028360 (0x50400028360) in binary!
	0xe8000000c  @objc MapsSyncManagedHistoryTransitItem.(null) <stripped>
 }

 class MapsSync.MapsSyncReviewedPlace : MapsSyncBaseItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _muid : ’∏ // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastSuggestedReviewDate : °∑ // +0x0 (0x0)
	var _hasUserReviewed : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _uploadedPhotosCount : ˘Ω // +0x0 (0x4)
	var _anonymousCredential : MapsSyncAnonymousCredential // +0x0 (0x8)
	var _anonymousCredentialUnstored : MapsSyncAnonymousCredential // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9eb400027e28 (0x6b400027e28) in binary!
	0x9ea8  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x6dfc000282e0 (0x5fc000282e0) in binary!
	0x82f0  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x90f400028bd0 (0xf400028bd0) in binary!
	0x82c8  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x82cc00028bc8 (0x2cc00028bc8) in binary!
	0xaf40  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x774400027f38 (0x74400027f38) in binary!
	0x7738  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x6d3c000281c8 (0x53c000281c8) in binary!
	0x6d30  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x909c000281a0 (0x9c000281a0) in binary!
	0x8348  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x23cfffe6b60  @objc MapsSyncReviewedPlace.(null) <stripped>
	0x31cfffe6c18  @objc MapsSyncReviewedPlace.âÊËA‚ˇˇLâ˜LâÊË6‚ˇˇLâ˜LâÊË+‚ˇˇLâ˜LâÊË ‚ˇˇHÖ€tzIﬂLâ˜LâÊËã·ˇˇHâﬂLâ˛ÎMÖˇtdL˚Lâ˜LâÊËp·ˇˇLâˇHâﬁLâÚLâ·Ëﬂ˘ˇˇâ√Lâ˜LâÊË“·ˇˇLâ˜LâÊË«·ˇˇLâ˜LâÊËº·ˇˇLâ˜LâÊË±·ˇˇLâ˜LâÊË¶·ˇˇâÿÈH˛ˇˇE1ˇÎÑ1€Îõfê¸ˇˇ'¸ˇˇ;¸ˇˇI¸ˇˇP¸ˇˇ=˝ˇˇd¸ˇˇ2˝ˇˇá¸ˇˇ˛ˇˇW˝ˇˇÕ˝ˇˇUHâÂAWAVAUATSPHâu–Iâ¸Lç-Ti <stripped>
	0x314fffe6e80  @objc MapsSyncReviewedPlace.E <stripped>
	0x30cfffe73e8  @objc MapsSyncReviewedPlace. <stripped>
	0x104fffe75a0  @objc MapsSyncReviewedPlace.UHâÂHãï£
 <stripped>
	0x58400027cd8  @objc MapsSyncReviewedPlace.HâU–IâÙIâ˛H∏ <stripped>
WARNING: couldn't find address 0x2802cfff954a0 (0x2cfff954a0) in binary!
	0x78000000c  @objc MapsSyncReviewedPlace.(null) <stripped>

	// Swift methods
	0x80d50  class func MapsSyncReviewedPlace.__allocating_init(anonymousCredential:) // init 
	0x810d0  func <stripped> // getter 
	0x811a0  func <stripped> // getter 
	0x811f0  func <stripped> // getter 
	0x81220  func <stripped> // getter 
	0x812b0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableReviewedPlace : MapsSyncMutableBaseItem {

	// Properties
	var _proxyObject : MapsSyncManagedReviewedPlace // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9e0400028160 (0x60400028160) in binary!
	0x6d58  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x95ec00028318 (0x5ec00028318) in binary!
	0x8240  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x76c400028b18 (0x6c400028b18) in binary!
	0x9038  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
	0x8210  dispatch thunk of MapsSyncMutableCollectionPlaceItem.mapItemStorage.setter
WARNING: couldn't find address 0x769400028b08 (0x69400028b08) in binary!
	0x82c8  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x2cfff954a0  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
	0x54b00028638  @objc MapsSyncMutableReviewedPlace.O ÚE»ÚAG(Iâ_0Hãp <stripped>
WARNING: couldn't find address 0x2820cfffe9a00 (0x20cfffe9a00) in binary!
	0x63c000280e0  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x280ccfffea318 (0xccfffea318) in binary!
	0x434000280b8  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x280a4fffea3d0 (0xa4fffea3d0) in binary!
	0x51c000287f0  @objc MapsSyncMutableReviewedPlace.(null) <stripped>

	// Swift methods
	0x81ee0  func <stripped> // getter 
	0x81f20  func <stripped> // setter 
	0x81fa0  func <stripped> // modifyCoroutine 
	0x82090  func <stripped> // getter 
	0x822a0  func <stripped> // setter 
	0x82440  func <stripped> // modifyCoroutine 
	0x826e0  func <stripped> // getter 
	0x82720  func <stripped> // setter 
	0x827b0  func <stripped> // modifyCoroutine 
	0x82850  func <stripped> // getter 
	0x82910  func <stripped> // setter 
	0x82a50  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncHistoryItem : MapsSyncBaseItem {

	// Properties
	var _position : Double // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x854b00028638 (0x54b00028638) in binary!
	0xae38  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x763c000280e0 (0x63c000280e0) in binary!
	0x6c40  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x6c34000280b8 (0x434000280b8) in binary!
	0x8fa0  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x9d1c000287f0 (0x51c000287f0) in binary!
	0x48000000c  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x9d0400028060 (0x50400028060) in binary!
	0x84df  @objc MapsSyncHistoryItem.(null) <stripped>
	0x8210  dispatch thunk of MapsSyncMutableCollectionPlaceItem.mapItemStorage.setter
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffee848  @objc MapsSyncHistoryItem.(null) <stripped>

	// Swift methods
	0x84a90  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryItem : MapsSyncMutableBaseItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryItem // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9d0400028060 (0x50400028060) in binary!
	0x84df  @objc MapsSyncMutableHistoryItem.(null) <stripped>
	0x8210  dispatch thunk of MapsSyncMutableCollectionPlaceItem.mapItemStorage.setter
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffee848  @objc MapsSyncMutableHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x7f4fffec350  @objc MapsSyncMutableHistoryItem.(null) <stripped>

	// Swift methods
	0x84ab0  func <stripped> // getter 
	0x84ad0  func <stripped> // setter 
	0x84af0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncCuratedCollectionQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9cb400028008 (0x4b400028008) in binary!
	0x8f20  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x740200027fe0 (0x40200027fe0) in binary!
	0x8f08  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x73ea00027fb8 (0x3ea00027fb8) in binary!
	0x8ef0  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
	0x8190  dispatch thunk of MapsSyncMutableCollectionPlaceItem.droppedPinFloorOrdinal.getter
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff9648  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x774ffff8cb0  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
	0x74cffff8ff8  @objc MapsSyncCuratedCollectionQuery.√êêêêêêêêêêêêêêêUHâÂAWAVAUATSHÉÏxLâm–HâçpˇˇˇHâUÄHâµxˇˇˇIâˇH«Eê <stripped>
	0x71cffff94f0  @objc MapsSyncCuratedCollectionQuery.Ñ <stripped>

	// Swift methods
	0x87700  class func MapsSyncCuratedCollectionQuery.__allocating_init(delegate:) // init 
	0x877b0  func <stripped> // method 
	0x87810  func <stripped> // method 
	0x87b30  func <stripped> // method 
	0x87cb0  func <stripped> // method 
 }

 class MapsSync.MapsSyncVehicleQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9c3400027f88 (0x43400027f88) in binary!
	0x8ea0  @objc MapsSyncVehicleQuery.(null) <stripped>
WARNING: couldn't find address 0x738200027f60 (0x38200027f60) in binary!
	0x8e88  @objc MapsSyncVehicleQuery.(null) <stripped>
WARNING: couldn't find address 0x736a00027f38 (0x36a00027f38) in binary!
	0x7230  @objc MapsSyncVehicleQuery.(null) <stripped>
WARNING: couldn't find address 0x811c00027f58 (0x11c00027f58) in binary!
	0x48000000c  @objc MapsSyncVehicleQuery.(null) <stripped>
WARNING: couldn't find address 0x803400027b20 (0x3400027b20) in binary!
	0x8028  @objc MapsSyncVehicleQuery.(null) <stripped>
	0x8010  dispatch thunk of MapsSyncCollectionPlaceItem.mapItemStorage.getter
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffffc6c8  @objc MapsSyncVehicleQuery.(null) <stripped>

	// Swift methods
	0x940e0  class func MapsSyncVehicleQuery.__allocating_init(delegate:) // init 
	0x94190  func <stripped> // method 
	0x941f0  func <stripped> // method 
	0x944e0  func <stripped> // method 
	0x94660  func <stripped> // method 
 }

 class MapsSync.MapsSyncUtil : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7ffc00028060 (0x7fc00028060) in binary!
	0x18000000c  @objc MapsSyncUtil.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedVehicle : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x71bc00028018 (0x1bc00028018) in binary!
	0x0  @objc MapsSyncManagedVehicle.(null) <stripped>
 }
