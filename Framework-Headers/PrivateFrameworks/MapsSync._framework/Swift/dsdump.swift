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
WARNING: couldn't find address 0x954400029cb0 (0x54400029cb0) in binary!
	0x18000000c  @objc MapsSyncManagedCollectionItem.(null) <stripped>
 }

 class MapsSync.MapsSyncCollectionPlaceItem : MapsSyncCollectionItem {

	// Properties
	var _customName : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _droppedPinCoordinate : q≥ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _droppedPinFloorOrdinal : ©∑ // +0x0 (0x4)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapItemStorage : q≥ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _origin : ã∑ // +0x0 (0x2)
	var _latitude : NSNumber? // +0x0 (0x8)
	var _longitude : NSNumber? // +0x0 (0x8)
	var _muid : NSNumber? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xc0be00029c30 (0xbe00029c30) in binary!
	0xa330  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa32400029ca0 (0x32400029ca0) in binary!
	0xa318  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa2fc00029cb0 (0x2fc00029cb0) in binary!
	0xa300  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xcc5400029d10 (0x45400029d10) in binary!
	0xa2e8  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa2dc00029d10 (0x2dc00029d10) in binary!
	0xa2d0  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xcf8400029bb0 (0x78400029bb0) in binary!
	0xcf78  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x973c00029b90 (0x73c00029b90) in binary!
	0x8d40  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x8d3400029b68 (0x53400029b68) in binary!
	0xb0b0  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
	0xbe50  MapsSyncHistoryItemQuery.__allocating_init(delegate:)
WARNING: couldn't find address 0xa33400029b20 (0x33400029b20) in binary!
	0xc8000000c  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xbe2c00029af8 (0x62c00029af8) in binary!
	0xa240  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x96c400029bb8 (0x6c400029bb8) in binary!
	0xa228  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x96ac00029bb0 (0x6ac00029bb0) in binary!
	0xa200  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa4e000029bb0 (0x4e000029bb0) in binary!
	0xa1f8  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x967c00029bb0 (0x67c00029bb0) in binary!
	0xcb40  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xcc3a00029bf8 (0x43a00029bf8) in binary!
	0xa298  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff75b50  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x7d4fff764b8  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
	0xfff76df0  @objc MapsSyncCollectionPlaceItem. <stripped>

	// Swift methods
	0x2910  func <stripped> // getter 
	0x29f0  func <stripped> // getter 
	0x2a90  func <stripped> // getter 
	0x2af0  func <stripped> // getter 
	0x2ba0  func <stripped> // getter 
	0x2bf0  func <stripped> // getter 
	0x2c50  func <stripped> // getter 
	0x2cb0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCollectionPlaceItem : MapsSyncMutableCollectionItem {

	// Properties
	var _proxyCollectionPlaceItem : MapsSyncManagedCollectionPlaceItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbe2c00029af8 (0x62c00029af8) in binary!
	0xa240  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x96c400029bb8 (0x6c400029bb8) in binary!
	0xa228  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x96ac00029bb0 (0x6ac00029bb0) in binary!
	0xa200  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa4e000029bb0 (0x4e000029bb0) in binary!
	0xa1f8  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x967c00029bb0 (0x67c00029bb0) in binary!
	0xcb40  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xcc3a00029bf8 (0x43a00029bf8) in binary!
	0xa298  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff75b50  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x7d4fff764b8  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
	0xfff76df0  @objc MapsSyncMutableCollectionPlaceItem. <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff79288  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x1e4fff784d0  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
	0x1bcfff78908  @objc MapsSyncMutableCollectionPlaceItem.Hæ <stripped>

	// Swift methods
	0x4400  func <stripped> // getter 
	0x4560  func <stripped> // setter 
	0x4720  func <stripped> // modifyCoroutine 
	0x48a0  func <stripped> // getter 
	0x49b0  func <stripped> // setter 
	0x4af0  func <stripped> // modifyCoroutine 
	0x4c10  func <stripped> // getter 
	0x4c50  func <stripped> // setter 
	0x4cd0  func <stripped> // modifyCoroutine 
	0x4d70  func <stripped> // getter 
	0x4f40  func <stripped> // setter 
	0x53c0  func <stripped> // modifyCoroutine 
	0x5430  func <stripped> // getter 
	0x5470  func <stripped> // setter 
	0x5500  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedCollectionPlaceItem : MapsSyncManagedCollectionItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x938c00029af8 (0x38c00029af8) in binary!
	0x38000000c  @objc MapsSyncManagedCollectionPlaceItem.(null) <stripped>
 }

 class MapsSync.MapsSyncHistoryItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbd34000299f8 (0x534000299f8) in binary!
	0xaf70  @objc MapsSyncHistoryItemQuery.(null) <stripped>
WARNING: couldn't find address 0x9442000299d0 (0x442000299d0) in binary!
	0xaf58  @objc MapsSyncHistoryItemQuery.(null) <stripped>
WARNING: couldn't find address 0x92fc000299a8 (0x2fc000299a8) in binary!
	0xa1e8  @objc MapsSyncHistoryItemQuery.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x5ecfff7a4b0  @objc MapsSyncHistoryItemQuery.(null) <stripped>
	0xfff7a628  @objc MapsSyncHistoryItemQuery.Ñ <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x134fff7b6d0  @objc MapsSyncHistoryItemQuery.(null) <stripped>

	// Swift methods
	0xbe50  class func MapsSyncHistoryItemQuery.__allocating_init(delegate:) // init 
	0xbf00  func <stripped> // method 
	0xc010  func <stripped> // method 
 }

 class MapsSync.MapsSyncDataValidator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa09c00029a10 (0x9c00029a10) in binary!
	0x18000000c  @objc MapsSyncDataValidator.(null) <stripped>

	// Swift methods
	0xf120  class func <stripped> // method 
	0xf1b0  class func <stripped> // method 
	0xf1d0  class func <stripped> // method 
	0xf1f0  class func <stripped> // method 
 }

 class MapsSync.MapsSyncManagedCachedCuratedCollection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x925c000299c8 (0x25c000299c8) in binary!
	0x18000000c  @objc MapsSyncManagedCachedCuratedCollection.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedAnonymousCredential : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9244000299b0 (0x244000299b0) in binary!
	0xd8000000c  @objc MapsSyncManagedAnonymousCredential.(null) <stripped>
 }

 class MapsSync.MapsSyncCollectionTransitItem : MapsSyncCollectionItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _transitLineStorage : q≥ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _muid : ø≤ // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xae74000298a8 (0x674000298a8) in binary!
	0xa048  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xa03c00029888 (0x3c00029888) in binary!
	0xb380  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xcce400029910 (0x4e400029910) in binary!
	0xccd8  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x949c000298f0 (0x49c000298f0) in binary!
	0x8aa0  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x8a94000298c8 (0x294000298c8) in binary!
	0xae10  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xbbbc000298a0 (0x3bc000298a0) in binary!
	0xbbb0  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xa09400029880 (0x9400029880) in binary!
	0x68000000c  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xbb8c00029858 (0x38c00029858) in binary!
	0x9fa0  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x9424000297d0 (0x424000297d0) in binary!
	0xb2d8  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xb33c00029958 (0x33c00029958) in binary!
	0xa040  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff801e8  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff80280  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7fc28  @objc MapsSyncCollectionTransitItem.(null) <stripped>

	// Swift methods
	0x104c0  func <stripped> // getter 
	0x10510  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCollectionTransitItem : MapsSyncMutableCollectionItem {

	// Properties
	var _proxyCollectionTransitItem : MapsSyncManagedCollectionTransitItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbb8c00029858 (0x38c00029858) in binary!
	0x9fa0  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x9424000297d0 (0x424000297d0) in binary!
	0xb2d8  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xb33c00029958 (0x33c00029958) in binary!
	0xa040  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff801e8  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff80280  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7fc28  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>

	// Swift methods
	0x11360  func <stripped> // getter 
	0x11490  func <stripped> // setter 
	0x11610  func <stripped> // modifyCoroutine 
	0x11780  func <stripped> // getter 
	0x117c0  func <stripped> // setter 
	0x11840  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncDataContainer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x11e60  func <stripped> // method 
	0x12230  func <stripped> // method 
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
	0x12bf0  func <stripped> // method 
	0x12f50  func <stripped> // method 
 }

 class MapsSync.MapsSyncDataContainerXPCDelegate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x963c00029760 (0x63c00029760) in binary!
	0x28000000c  @objc MapsSyncDataContainerXPCDelegate.(null) <stripped>

	// Swift methods
 }

 class MapsSync.MapsSyncPersistentContainer : NSPersistentContainer /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x911c00029a68 (0x11c00029a68) in binary!
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
WARNING: couldn't find address 0x90cc00029838 (0xcc00029838) in binary!
	0xa8000000c  @objc MapsSyncManagedReviewedPlace.(null) <stripped>
 }

 enum MapsSync.MapsSyncReviewRating { }

 class MapsSync.MapsSyncCachedUserReview : MapsSyncBaseItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _muid : ø≤ // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _numberPhotosUploaded : ©∑ // +0x0 (0x4)
	var _rating : MapsSyncReviewRating // +0x0 (0x2)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb22c00029918 (0x22c00029918) in binary!
	0x9ec0  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xc82400029b50 (0x2400029b50) in binary!
	0x9eb8  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xcb6c00029810 (0x36c00029810) in binary!
	0x9330  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0x893400029770 (0x13400029770) in binary!
	0x8928  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xaca400029748 (0x4a400029748) in binary!
	0xba50  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x8cfff8d088  @objc MapsSyncCachedUserReview.(null) <stripped>
	0x2b4fff8d140  @objc MapsSyncCachedUserReview.ˇËû{ <stripped>
	0x2acfff8d268  @objc MapsSyncCachedUserReview.« <stripped>
	0x6c4fff8d3f0  @objc MapsSyncCachedUserReview.Eê <stripped>
	0x71300029a90  @objc MapsSyncCachedUserReview.Lã%a%
 <stripped>

	// Swift methods
	0x203f0  func <stripped> // getter 
	0x20420  func <stripped> // getter 
	0x20460  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCachedUserReview : MapsSyncMutableBaseItem {

	// Properties
	var _proxy : MapsSyncManagedCachedUserReview // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xba3c00029708 (0x23c00029708) in binary!
	0xb1a0  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xb20400029820 (0x20400029820) in binary!
	0x9e28  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xa10800029ab0 (0x10800029ab0) in binary!
	0xc780  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xc87a00029aa8 (0x7a00029aa8) in binary!
	0x9ed8  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0x178000000c (0x178000000c) in binary!
	0x60cfff8dcf0  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
	0x5ecfff8df48  @objc MapsSyncMutableCachedUserReview.”Lâ˜Hâ∆Lâ·MâËËØâ <stripped>
	0x26cfff8dfd0  @objc MapsSyncMutableCachedUserReview.=
 <stripped>
	0x274fff8e098  @objc MapsSyncMutableCachedUserReview.5CbˇˇHç¨,	 <stripped>

	// Swift methods
	0x20e20  func <stripped> // getter 
	0x20e60  func <stripped> // setter 
	0x20ee0  func <stripped> // modifyCoroutine 
	0x20f60  func <stripped> // getter 
	0x20fa0  func <stripped> // setter 
	0x21020  func <stripped> // modifyCoroutine 
	0x210e0  func <stripped> // getter 
	0x21140  func <stripped> // setter 
	0x211f0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncCachedCuratedCollection : MapsSyncBaseItem {

	// Properties
	var _collectionDescription : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _image : q≥ // +0x0 (0x10)
	var _imageUrl : String? // +0x0 (0x10)
	var _title : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _curatedCollectionIdentifier : ø≤ // +0x0 (0x8)
	var _isTombstone : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastFetchedDate : Q± // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastSignificantChangeDate : Q± // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _placesCount : ©∑ // +0x0 (0x4)
	var _publisherAttribution : String? // +0x0 (0x10)
	var _titleLocale : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _resultProviderIdentifier : ©∑ // +0x0 (0x4)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9f1300029a90 (0x71300029a90) in binary!
	0x9f15  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xb9bc00029d68 (0x1bc00029d68) in binary!
	0x8868  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9dc400029a68 (0x5c400029a68) in binary!
	0x9db8  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9dac00029a70 (0x5ac00029a70) in binary!
	0x9da0  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xb0e400029a78 (0xe400029a78) in binary!
	0xaba8  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9d7c00029a80 (0x57c00029a80) in binary!
	0x9d70  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9d5400029a88 (0x55400029a88) in binary!
	0x9d58  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9d4c00029a90 (0x54c00029a90) in binary!
	0x9d30  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9d3400029560 (0x53400029560) in binary!
	0xc9e8  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x91ac00029600 (0x1ac00029600) in binary!
	0x87b0  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x87a4000295d8 (0x7a4000295d8) in binary!
	0xab20  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9dbc000295a8 (0x5bc000295a8) in binary!
	0x1a8000000c  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xb8b400029580 (0xb400029580) in binary!
	0x9cc8  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x914c00029968 (0x14c00029968) in binary!
	0x9cb0  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x913400029960 (0x13400029960) in binary!
	0x9c98  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x911c00029958 (0x11c00029958) in binary!
	0x9c80  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x910400029950 (0x10400029950) in binary!
	0xafb8  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xb01c00029948 (0x1c00029948) in binary!
	0xaa70  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xbfe800029940 (0x7e800029940) in binary!
	0x9c38  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x90bc00029938 (0xbc00029938) in binary!
	0x9c20  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x90a400029930 (0xa400029930) in binary!
	0x9bf8  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9ed800029928 (0x6d800029928) in binary!
	0x9bf0  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x907400029920 (0x7400029920) in binary!
	0x9bd8  @objc MapsSyncCachedCuratedCollection.(null) <stripped>

	// Swift methods
	0x216d0  class func MapsSyncCachedCuratedCollection.__allocating_init(curatedCollectionIdentifier:resultProviderIdentifier:) // init 
	0x21d70  func <stripped> // getter 
	0x21e00  func <stripped> // getter 
	0x21e50  func <stripped> // getter 
	0x21e90  func <stripped> // getter 
	0x21ed0  func <stripped> // getter 
	0x21f00  func <stripped> // getter 
	0x21f40  func <stripped> // getter 
	0x22030  func <stripped> // getter 
	0x220a0  func <stripped> // getter 
	0x220e0  func <stripped> // getter 
	0x22170  func <stripped> // getter 
	0x221d0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCachedCuratedCollection : MapsSyncMutableBaseItem {

	// Properties
	var _proxy : MapsSyncManagedCachedCuratedCollection

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb8b400029580 (0xb400029580) in binary!
	0x9cc8  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x914c00029968 (0x14c00029968) in binary!
	0x9cb0  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x913400029960 (0x13400029960) in binary!
	0x9c98  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x911c00029958 (0x11c00029958) in binary!
	0x9c80  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x910400029950 (0x10400029950) in binary!
	0xafb8  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xb01c00029948 (0x1c00029948) in binary!
	0xaa70  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xbfe800029940 (0x7e800029940) in binary!
	0x9c38  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x90bc00029938 (0xbc00029938) in binary!
	0x9c20  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x90a400029930 (0xa400029930) in binary!
	0x9bf8  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9ed800029928 (0x6d800029928) in binary!
	0x9bf0  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x907400029920 (0x7400029920) in binary!
	0x9bd8  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x905c00029918 (0x5c00029918) in binary!
	0x9bb0  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9e9000029910 (0x69000029910) in binary!
	0x9c78  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0xecfff91eb0  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
	0x4d4fff92138  @objc MapsSyncMutableCachedCuratedCollection.Kå <stripped>
	0x434fff925e0  @objc MapsSyncMutableCachedCuratedCollection. <stripped>
	0x40cfff92648  @objc MapsSyncMutableCachedCuratedCollection.HâD$0HâD$8HâD$@HçL$Lçá‡ <stripped>
	0x3e4fff929d0  @objc MapsSyncMutableCachedCuratedCollection.LãuòLâÁLã%2
 <stripped>
	0x6f4000293c0  @objc MapsSyncMutableCachedCuratedCollection.ﬂËÄê <stripped>
WARNING: couldn't find address 0x2986cfff92ba0 (0x6cfff92ba0) in binary!
	0x72200029868  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x29864fff92bf8 (0x64fff92bf8) in binary!
	0x77400029860  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x29394fff92e40 (0x394fff92e40) in binary!
	0xd8000000c  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9b9400029260 (0x39400029260) in binary!
	0x9b88  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa8cc00029238 (0xcc00029238) in binary!
	0xbe44  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9b6400029210 (0x36400029210) in binary!
	0x9b58  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9a7c000291e8 (0x27c000291e8) in binary!
	0x9a70  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>

	// Swift methods
	0x233b0  func <stripped> // getter 
	0x233f0  func <stripped> // setter 
	0x23450  func <stripped> // modifyCoroutine 
	0x235e0  func <stripped> // getter 
	0x23790  func <stripped> // setter 
	0x23970  func <stripped> // modifyCoroutine 
	0x23ad0  func <stripped> // getter 
	0x23b10  func <stripped> // setter 
	0x23b70  func <stripped> // modifyCoroutine 
	0x23c60  func <stripped> // getter 
	0x23ca0  func <stripped> // setter 
	0x23d00  func <stripped> // modifyCoroutine 
	0x23df0  func <stripped> // getter 
	0x23e30  func <stripped> // setter 
	0x23eb0  func <stripped> // modifyCoroutine 
	0x23f30  func <stripped> // getter 
	0x23f70  func <stripped> // setter 
	0x24000  func <stripped> // modifyCoroutine 
	0x24080  func <stripped> // getter 
	0x240c0  func <stripped> // setter 
	0x24120  func <stripped> // modifyCoroutine 
	0x24320  func <stripped> // getter 
	0x24570  func <stripped> // setter 
	0x24760  func <stripped> // modifyCoroutine 
	0x24a30  func <stripped> // getter 
	0x24a70  func <stripped> // setter 
	0x24ad0  func <stripped> // modifyCoroutine 
	0x24b50  func <stripped> // getter 
	0x24b90  func <stripped> // setter 
	0x24bf0  func <stripped> // modifyCoroutine 
	0x24da0  func <stripped> // getter 
	0x24f40  func <stripped> // setter 
	0x25160  func <stripped> // modifyCoroutine 
	0x252e0  func <stripped> // getter 
	0x25340  func <stripped> // setter 
	0x25410  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncHistoryEvDirectionsItem : MapsSyncHistoryDirectionsItem {

	// Properties
	var _requiredCharge : Double // +0x0 (0x8)
	var _vehicleIdentifier : String? // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9b94000294e8 (0x394000294e8) in binary!
	0x9f0f  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x9b7c000298f0 (0x37c000298f0) in binary!
	0xc830  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x8ff400029448 (0x7f400029448) in binary!
	0x85f8  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x85ec00029420 (0x5ec00029420) in binary!
	0xa968  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0xb71400029ac0 (0x71400029ac0) in binary!
	0x9bf8  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x6cfff92ba0  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
	0x64fff92bf8  @objc MapsSyncHistoryEvDirectionsItem. <stripped>
	0x394fff92e40  @objc MapsSyncHistoryEvDirectionsItem. <stripped>
	0x39400029260  @objc MapsSyncHistoryEvDirectionsItem. <stripped>
WARNING: couldn't find address 0x2924cfff93ad0 (0x24cfff93ad0) in binary!
	0xcc00029238  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>

	// Swift methods
	0x260e0  func <stripped> // getter 
	0x26150  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryEvDirectionsItem : MapsSyncMutableHistoryDirectionsItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryEvDirectionsItem // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb6f4000293c0 (0x6f4000293c0) in binary!
	0x9e8f  @objc MapsSyncMutableHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x9f2200029868 (0x72200029868) in binary!
	0x9af0  @objc MapsSyncMutableHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x8f7400029860 (0x77400029860) in binary!
	0x9ba8  @objc MapsSyncMutableHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0xd8000000c (0xd8000000c) in binary!
	0x24cfff93ad0  @objc MapsSyncMutableHistoryEvDirectionsItem.(null) <stripped>
	0x224fff93b58  @objc MapsSyncMutableHistoryEvDirectionsItem.§'
 <stripped>
	0x1fcfff93be0  @objc MapsSyncMutableHistoryEvDirectionsItem.]È&˛ˇˇêêêêêêUHâÂAVAUSPHâ˚LâÔË°m <stripped>

	// Swift methods
	0x26c20  func <stripped> // getter 
	0x26c60  func <stripped> // setter 
	0x26ce0  func <stripped> // modifyCoroutine 
	0x26e10  func <stripped> // getter 
	0x26f70  func <stripped> // setter 
	0x27130  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncPositionOrdering {
 class MapsSync.MapsSyncDataSession : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _dataContainer : MapsSyncDataContainer // +0x8 (0x8)
	var _containerQueue : OS_dispatch_queue // +0x10 (0x8)
	var _storeLoadInterval : Double // +0x18 (0x8)
	var _readContext : NSManagedObjectContext? // +0x20 (0x8)
	var _backgroundReadContext : NSManagedObjectContext? // +0x28 (0x8)
	var _writeContext : NSManagedObjectContext? // +0x30 (0x8)
	var _localOnly : Bool // +0x38 (0x1)
	let _loadSemaphore : OS_dispatch_semaphore // +0x40 (0x8)
	var _hasLoadedStores : Bool // +0x48 (0x1)
	var _pendingReadContextFetches : [(_:_:)] // +0x50 (0x8)
	var _pendingBackgroundReadContextFetches : [(_:_:)] // +0x58 (0x8)
	var _pendingWriteContextFetches : [(_:_:)] // +0x60 (0x8)
	var _contextFetchLock : NSLock // +0x68 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa03400029218 (0x3400029218) in binary!
	0xa838  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xa036000291f0 (0x36000291f0) in binary!
	0xa820  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xa01e000291c8 (0x1e000291c8) in binary!
	0xa808  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xa006000291a0 (0x6000291a0) in binary!
	0x9a98  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x9a8c00029178 (0x28c00029178) in binary!
	0xa7d0  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x99a400029150 (0x1a400029150) in binary!
	0xa7c0  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x8e1c00029748 (0x61c00029748) in binary!
	0x8e10  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x9974000292e8 (0x174000292e8) in binary!
	0x9a38  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff9a660  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x1ccfff9a128  @objc MapsSyncDataSession.(null) <stripped>
	0x19cfff9a560  @objc MapsSyncDataSession.ˇAˇ‘IâƒLâˇLâˆHãU»HâŸˇULã=*
 <stripped>
	0xfff9a738  @objc MapsSyncDataSession.ˇ <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x24cfff9bcd0  @objc MapsSyncDataSession.(null) <stripped>
	0x244fff9c2b8  @objc MapsSyncDataSession.I¡ÁHç‹ <stripped>
	0xfff9c3b0  @objc MapsSyncDataSession.UHâÂAWAVAUATSHÅÏà <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff9f988  @objc MapsSyncDataSession.(null) <stripped>

	// Swift methods
	0x286d0  func <stripped> // method 
	0x289d0  func <stripped> // method 
	0x28c00  func <stripped> // getter 
	0x28cb0  func <stripped> // getter 
	0x28d30  func <stripped> // method 
	0x29e10  func <stripped> // method 
 }

 class MapsSync.MapsSyncCollectionQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb51c000291e0 (0x51c000291e0) in binary!
	0xa758  @objc MapsSyncCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x8c2a000291b8 (0x42a000291b8) in binary!
	0x8af0  @objc MapsSyncCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x99dc000291c8 (0x1dc000291c8) in binary!
	0x58000000c  @objc MapsSyncCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0xb676000291e8 (0x676000291e8) in binary!
	0xc5a8  @objc MapsSyncCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x837400029708 (0x37400029708) in binary!
	0x98d0  @objc MapsSyncCollectionQuery.(null) <stripped>

	// Swift methods
	0x2e2c0  class func MapsSyncCollectionQuery.__allocating_init(delegate:) // init 
	0x2e370  func <stripped> // method 
	0x2e480  func <stripped> // method 
 }

 class MapsSync.MapsSyncObjectWrapper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _managedObjectID : NSManagedObjectID?
	var _entityName : String?
	var _editContext : NSManagedObjectContext?
	var _callbackQueue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb676000291e8 (0x676000291e8) in binary!
	0xc5a8  @objc MapsSyncObjectWrapper.(null) <stripped>
WARNING: couldn't find address 0x837400029708 (0x37400029708) in binary!
	0x98d0  @objc MapsSyncObjectWrapper.(null) <stripped>
WARNING: couldn't find address 0x999400029180 (0x19400029180) in binary!
	0x18000000c  @objc MapsSyncObjectWrapper.(null) <stripped>
WARNING: couldn't find address 0x98ac00029128 (0xac00029128) in binary!
	0x208000000c  @objc MapsSyncObjectWrapper.(null) <stripped>
WARNING: couldn't find address 0x989400028fb0 (0x9400028fb0) in binary!
	0x8d18  @objc MapsSyncObjectWrapper.(null) <stripped>

	// Swift methods
	0x2fb60  class func <stripped> // init 
	0x2fe40  func <stripped> // method 
	0x2f620  func <stripped> // getter 
	0x2f650  func <stripped> // getter 
	0x2f680  func <stripped> // getter 
	0x2f6f0  func <stripped> // method 
	0x2f860  func <stripped> // method 
 }

 enum MapsSync.MapsSyncObjectChangeType { }

 class MapsSync.MapsSyncFetchedResultsControllerDelegate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _baseQuery : MapsSyncBaseQuery // +0x8 (0x8)
	var _delegate : weak MapsSyncFetchedResultsChangeDelegate? // +0x10 (0x8)
	var _contentPredicate : NSPredicate? // +0x18 (0x8)
	var _otherWatchedContentPredicate : NSPredicate? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8b6c00029548 (0x36c00029548) in binary!
	0x8b60  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0x8b5400028df8 (0x35400028df8) in binary!
	0x8b48  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0x7abc00028dd0 (0x2bc00028dd0) in binary!
	0x96a0  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0x976400028f50 (0x76400028f50) in binary!
	0xc8000000c  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0x979b00029318 (0x79b00029318) in binary!
	0x979d  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0xb244000295f0 (0x244000295f0) in binary!
	0x80f0  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0xa99c00029330 (0x19c00029330) in binary!
	0x9630  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>

	// Swift methods
	0x321d0  func <stripped> // setter 
	0x327e0  func <stripped> // method 
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
WARNING: couldn't find address 0x989400028fb0 (0x9400028fb0) in binary!
	0x8d18  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x987c00028f88 (0x7c00028f88) in binary!
	0x8d00  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x986400028f60 (0x6400028f60) in binary!
	0x8ce8  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x984c000292d0 (0x4c000292d0) in binary!
	0x8cd0  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x983400028f28 (0x3400028f28) in binary!
	0x8cb8  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x89f4000290a0 (0x1f4000290a0) in binary!
	0x98e0  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0xa62400028ee0 (0x62400028ee0) in binary!
	0xa620  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0xb3cc00029450 (0x3cc00029450) in binary!
	0xa608  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8ada00028ea0 (0x2da00028ea0) in binary!
	0x80ce  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0xa5e400029608 (0x5e400029608) in binary!
	0x8c40  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8c3400029418 (0x43400029418) in binary!
	0x8c28  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8c1c00028e40 (0x41c00028e40) in binary!
	0x8c10  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x7b8400028e18 (0x38400028e18) in binary!
	0x8bf8  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8bec000295e8 (0x3ec000295e8) in binary!
	0x8be0  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x7b54000295e0 (0x354000295e0) in binary!
	0xb318  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x972c000290a0 (0x72c000290a0) in binary!
	0x97f0  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x784fffa0e78  @objc MapsSyncBaseQuery.(null) <stripped>
	0xfffa0f10  @objc MapsSyncBaseQuery. <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x48cfff9ed08  @objc MapsSyncBaseQuery.(null) <stripped>
	0x5e4fff9ed90  @objc MapsSyncBaseQuery.\A]A^A_]ÈUü <stripped>
	0x14fff9ee58  @objc MapsSyncBaseQuery.Ë1° <stripped>
	0xfff9f020  @objc MapsSyncBaseQuery.í <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x694fffa2da8  @objc MapsSyncBaseQuery.(null) <stripped>
	0x674fffa2e60  @objc MapsSyncBaseQuery.æH <stripped>
	0x394fffa2ef8  @objc MapsSyncBaseQuery.¿HãM»Hã<Hã5òT <stripped>
	0x70cfffa30e0  @objc MapsSyncBaseQuery.ï <stripped>
	0x6e4fffa3298  @objc MapsSyncBaseQuery.Iâ≈Mâ˜fêLâˇIˇ«HâﬁLâÍËµü <stripped>
	0x48cfffa34a0  @objc MapsSyncBaseQuery.IãHãXHãHLçsH—ÈH9ŸÜò <stripped>
	0x1c400028e90  @objc MapsSyncBaseQuery.«Ë‡á <stripped>
WARNING: couldn't find address 0x292bcfffa3b40 (0x2bcfffa3b40) in binary!
	0x18c000292b8  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x29314fffa3bf8 (0x314fffa3bf8) in binary!
	0x9000029310  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x28e64fffa3d20 (0x664fffa3d20) in binary!
	0x18000000c  @objc MapsSyncBaseQuery.(null) <stripped>

	// Swift methods
	0x31000  func <stripped> // getter 
	0x31040  func <stripped> // setter 
	0x31090  func <stripped> // modifyCoroutine 
	0x31160  func <stripped> // method 
	0x320c0  func <stripped> // method 
	0x33c90  class func <stripped> // getter 
	0x311d0  func <stripped> // method 
	0x31270  func <stripped> // method 
	0x312d0  func <stripped> // method 
	0x31330  func <stripped> // method 
	0x317f0  func <stripped> // method 
	0x319d0  func <stripped> // method 
	0x31a30  func <stripped> // method 
	0x31e70  func <stripped> // method 
 }

 class MapsSync.MapsSyncDataQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery // +0x58 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb2ec00028fb0 (0x2ec00028fb0) in binary!
	0x88d8  @objc MapsSyncDataQuery.(null) <stripped>
WARNING: couldn't find address 0x97c400028fb0 (0x7c400028fb0) in binary!
	0x78000000c  @objc MapsSyncDataQuery.(null) <stripped>
WARNING: couldn't find address 0x8b6c00029548 (0x36c00029548) in binary!
	0x8b60  @objc MapsSyncDataQuery.(null) <stripped>

	// Swift methods
	0x35240  class func MapsSyncDataQuery.__allocating_init(delegate:) // init 
 }

 class MapsSync.MapsSyncCuratedCollection : MapsSyncBaseItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _curatedCollectionIdentifier : ø≤ // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _resultProviderIdentifier : ©∑ // +0x0 (0x4)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x979b00029318 (0x79b00029318) in binary!
	0x979d  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xb244000295f0 (0x244000295f0) in binary!
	0x80f0  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa99c00029330 (0x19c00029330) in binary!
	0x9630  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xc2f400028f98 (0x2f400028f98) in binary!
	0x8ab8  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x80bc00028ef8 (0xbc00028ef8) in binary!
	0x80b0  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa42c00028ed0 (0x42c00028ed0) in binary!
	0xa420  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x2bcfffa3b40  @objc MapsSyncCuratedCollection.(null) <stripped>
	0x314fffa3bf8  @objc MapsSyncCuratedCollection.}òHã?
 <stripped>
	0x664fffa3d20  @objc MapsSyncCuratedCollection.Lâ˜1ˆHâ⁄Lâ·MâËËì <stripped>
	0x9a00028c20  @objc MapsSyncCuratedCollection. <stripped>
WARNING: couldn't find address 0xfffa5f10 (0xfffa5f10) in binary!
	0x57c00028ef0  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x28e2cfffa6038 (0x62cfffa6038) in binary!
	0x18000000c  @objc MapsSyncCuratedCollection.(null) <stripped>

	// Swift methods
	0x37070  class func MapsSyncCuratedCollection.__allocating_init(curatedCollectionIdentifier:resultProviderIdentifier:) // init 
	0x37410  func <stripped> // getter 
	0x37440  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCuratedCollection : MapsSyncMutableBaseItem {

	// Properties
	var _proxy : MapsSyncManagedCuratedCollection // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb1c400028e90 (0x1c400028e90) in binary!
	0xa928  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa98c000292b8 (0x18c000292b8) in binary!
	0x95b0  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x989000029310 (0x9000029310) in binary!
	0x9678  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa5f10  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x62cfffa6038  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
	0x73400028ea0  @objc MapsSyncMutableCuratedCollection.â«Ë}í <stripped>

	// Swift methods
	0x38150  func <stripped> // getter 
	0x38190  func <stripped> // setter 
	0x38210  func <stripped> // modifyCoroutine 
	0x38290  func <stripped> // getter 
	0x382d0  func <stripped> // setter 
	0x38350  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncBatch : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x957c00028ef0 (0x57c00028ef0) in binary!
	0x9640  @objc MapsSyncBatch.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa93e8  @objc MapsSyncBatch.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedCachedUserReview : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x873400028ea0 (0x73400028ea0) in binary!
	0x18000000c  @objc MapsSyncManagedCachedUserReview.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedMixinMapItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x871c00028e88 (0x71c00028e88) in binary!
	0xa8000000c  @objc MapsSyncManagedMixinMapItem.(null) <stripped>
 }

 class MapsSync.MapsSyncPredicate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class MapsSync.MapsSyncHistoryTransitItem : MapsSyncHistoryItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _transitLineStorage : q≥ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _muid : ø≤ // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x952c00028e80 (0x52c00028e80) in binary!
	0x9520  @objc MapsSyncHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0xa86400028f50 (0x6400028f50) in binary!
	0xc1c8  @objc MapsSyncHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x898c00028de0 (0x18c00028de0) in binary!
	0x7f90  @objc MapsSyncHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x7f8400028db8 (0x78400028db8) in binary!
	0xa300  @objc MapsSyncHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0xb0ac00029458 (0xac00029458) in binary!
	0x9590  @objc MapsSyncHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x324fffaa268  @objc MapsSyncHistoryTransitItem.(null) <stripped>
	0x6c4fffaa460  @objc MapsSyncHistoryTransitItem.UHâÂ]ÈÌˇˇêêêêêêUHâÂHÉÏËs <stripped>
	0x52cfffaa7e8  @objc MapsSyncHistoryTransitItem.¿HÉ‡H)√Hâ‹HâÿLâˇËQÄ <stripped>
	0x63400028da0  @objc MapsSyncHistoryTransitItem.√êêêêêêêêêêêêêêêUHâÂAWAVAUATSHÉÏxLâm–HâçpˇˇˇHâUÄHâµxˇˇˇIâˇH«Eê <stripped>
WARNING: couldn't find address 0xfffaaee8 (0xfffaaee8) in binary!
	0x61c00028d88  @objc MapsSyncHistoryTransitItem.(null) <stripped>

	// Swift methods
	0x3deb0  func <stripped> // getter 
	0x3df00  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryTransitItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryTransitItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb08c00028d58 (0x8c00028d58) in binary!
	0x94a0  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x892400028b10 (0x12400028b10) in binary!
	0xa7d8  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0xa83c00028e58 (0x3c00028e58) in binary!
	0x9540  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffaaee8  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffab0e0  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffab148  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>

	// Swift methods
	0x3ea70  func <stripped> // getter 
	0x3eba0  func <stripped> // setter 
	0x3ed20  func <stripped> // modifyCoroutine 
	0x3ee90  func <stripped> // getter 
	0x3eed0  func <stripped> // setter 
	0x3ef50  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedHistoryPlaceItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x863400028da0 (0x63400028da0) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryPlaceItem.(null) <stripped>
 }

 class MapsSync.MapsSyncGeo : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class MapsSync.MapsSyncGeoUtil {
 class MapsSync.MapsSyncManagedFavoriteItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x861c00028d88 (0x61c00028d88) in binary!
	0x18000000c  @objc MapsSyncManagedFavoriteItem.(null) <stripped>
 }

 class MapsSync.MapsSyncDataBase_initial : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x3fbd0  func <stripped> // getter 
	0x400d0  func <stripped> // getter 
	0x40200  func <stripped> // getter 
 }

 class MapsSync.MapsSyncCollectionTransitItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xafdc00028ca0 (0x7dc00028ca0) in binary!
	0xa218  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x86ea00028c78 (0x6ea00028c78) in binary!
	0x85b0  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x949c00028c88 (0x49c00028c88) in binary!
	0x18000000c  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x858c00028cf8 (0x58c00028cf8) in binary!
	0x18000000c  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x857400028ce0 (0x57400028ce0) in binary!
	0x18000000c  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>

	// Swift methods
	0x404d0  class func MapsSyncCollectionTransitItemQuery.__allocating_init(delegate:) // init 
	0x40580  func <stripped> // method 
	0x40690  func <stripped> // method 
 }

 class MapsSync.MapsSyncManagedHistoryRideShareItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x858c00028cf8 (0x58c00028cf8) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryRideShareItem.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedHistoryDirectionsItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x857400028ce0 (0x57400028ce0) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryDirectionsItem.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedHistoryItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x855c00028cc8 (0x55c00028cc8) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryItem.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedCuratedCollection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x854400028cb0 (0x54400028cb0) in binary!
	0xc8000000c  @objc MapsSyncManagedCuratedCollection.(null) <stripped>
 }

 class MapsSync.MapsSyncCollectionItem : MapsSyncBaseItem {

	// Properties
	var _collections : MapsSyncCollection // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xaf3400028c18 (0x73400028c18) in binary!
	0xb0ca  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x87cc000289b0 (0x7cc000289b0) in binary!
	0xaf10  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0xa14400028b78 (0x14400028b78) in binary!
	0x9318  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0xbfcc00028c70 (0x7cc00028c70) in binary!
	0x8790  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x7d9400028bd0 (0x59400028bd0) in binary!
	0x7d88  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0xa10400028ba8 (0x10400028ba8) in binary!
	0x93a0  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x4f4fffaeb68  @objc MapsSyncCollectionItem.(null) <stripped>
	0x354fffaec60  @objc MapsSyncCollectionItem.UHâÂ]Èñ˘ˇˇfD <stripped>
	0x45c00028bc8  @objc MapsSyncCollectionItem.ˇˇfD <stripped>
WARNING: couldn't find address 0xfffb2810 (0xfffb2810) in binary!
	0x66c00028b20  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0xfffb2dc8 (0xfffb2dc8) in binary!
	0x25400028ba8  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x28c04fffb2850 (0x404fffb2850) in binary!
	0x23c00029138  @objc MapsSyncCollectionItem.(null) <stripped>

	// Swift methods
	0x420c0  class func MapsSyncCollectionItem.__allocating_init(collection:) // init 
	0x41c20  func <stripped> // getter 
	0x41c30  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCollectionItem : MapsSyncMutableBaseItem {

	// Properties
	var _proxyCollectionItem : MapsSyncManagedCollectionItem

	// ObjC -> Swift bridged methods
	0x92b0  _block_copy_helper.63
WARNING: couldn't find address 0x873400029188 (0x73400029188) in binary!
	0x9368  @objc MapsSyncMutableCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffb2810  @objc MapsSyncMutableCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffb2dc8  @objc MapsSyncMutableCollectionItem.(null) <stripped>

	// Swift methods
	0x41d00  func <stripped> // getter 
	0x41e00  func <stripped> // setter 
	0x41f20  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedContactHandle : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x845c00028bc8 (0x45c00028bc8) in binary!
	0x18000000c  @objc MapsSyncManagedContactHandle.(null) <stripped>
 }

 class MapsSync.MapsSyncHistoryPlaceItem : MapsSyncHistoryItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapItemStorage : q≥ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _supersededSearchId : ¥ // +0x0 (0x0)
	var _latitude : NSNumber? // +0x0 (0x8)
	var _longitude : NSNumber? // +0x0 (0x8)
	var _muid : NSNumber? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x925400028ba8 (0x25400028ba8) in binary!
	0x9248  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x923c00029138 (0x23c00029138) in binary!
	0x9230  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x922400028c58 (0x22400028c58) in binary!
	0x9218  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xbecc00028b70 (0x6cc00028b70) in binary!
	0x8690  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x7c9400028ad0 (0x49400028ad0) in binary!
	0x7c88  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
	0xadb0  @objc MapsSyncHistoryPlaceItem.‰Ë	 <stripped>
WARNING: couldn't find address 0x929400028a80 (0x29400028a80) in binary!
	0x68000000c  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xad8c00028a58 (0x58c00028a58) in binary!
	0x91a0  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x862400028b58 (0x62400028b58) in binary!
	0x9188  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x860c00029080 (0x60c00029080) in binary!
	0x9240  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x5cfffb4e88  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
	0x64fffb52b0  @objc MapsSyncHistoryPlaceItem.UHâÂHç=Ãˇˇ]È <stripped>
	0x284fffb5318  @objc MapsSyncHistoryPlaceItem.MãE0]Èn∆ˇˇf.Ñ <stripped>

	// Swift methods
	0x473d0  func <stripped> // getter 
	0x47530  func <stripped> // getter 
	0x475a0  func <stripped> // getter 
	0x47600  func <stripped> // getter 
	0x47660  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryPlaceItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryPlaceItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xad8c00028a58 (0x58c00028a58) in binary!
	0x91a0  @objc MapsSyncMutableHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x862400028b58 (0x62400028b58) in binary!
	0x9188  @objc MapsSyncMutableHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x860c00029080 (0x60c00029080) in binary!
	0x9240  @objc MapsSyncMutableHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x5cfffb4e88  @objc MapsSyncMutableHistoryPlaceItem.(null) <stripped>
	0x64fffb52b0  @objc MapsSyncMutableHistoryPlaceItem.UHâÂHç=Ãˇˇ]È <stripped>
	0x284fffb5318  @objc MapsSyncMutableHistoryPlaceItem.MãE0]Èn∆ˇˇf.Ñ <stripped>

	// Swift methods
	0x48600  func <stripped> // getter 
	0x487d0  func <stripped> // setter 
	0x48c50  func <stripped> // modifyCoroutine 
	0x48d30  func <stripped> // getter 
	0x48ec0  func <stripped> // setter 
	0x49090  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncHistorySearchItem : MapsSyncHistoryItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _geoMapRegion : q≥ // +0x0 (0x10)
	var _language : String? // +0x0 (0x10)
	var _locationDisplay : String? // +0x0 (0x10)
	var _query : String? // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x915c00028ab0 (0x15c00028ab0) in binary!
	0x9150  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x914400029060 (0x14400029060) in binary!
	0x9138  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x912c00029068 (0x12c00029068) in binary!
	0xbde0  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x85a4000289f8 (0x5a4000289f8) in binary!
	0x7ba8  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x7b9c000289d0 (0x39c000289d0) in binary!
	0x9f18  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0xacc400029070 (0x4c400029070) in binary!
	0x91a8  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x7c4fffb60c0  @objc MapsSyncHistorySearchItem.(null) <stripped>
	0x7bcfffb62d8  @objc MapsSyncHistorySearchItem.Ë”…ˇˇHÉƒ]√f.Ñ <stripped>
	0x7b4fffb64d0  @objc MapsSyncHistorySearchItem.IãMÚAE ÚAM(MãE0PARË”…ˇˇHÉƒ]√f.Ñ <stripped>
	0x7acfffb6648  @objc MapsSyncHistorySearchItem. <stripped>
	0x114fffb6910  @objc MapsSyncHistorySearchItem.UHâÂHç•A
 <stripped>
	0x44000288c0  @objc MapsSyncHistorySearchItem.IãMÚAE ÚAM(MãE0]Èn∆ˇˇf.Ñ <stripped>

	// Swift methods
	0x49c00  func <stripped> // getter 
	0x49cd0  func <stripped> // getter 
	0x49d10  func <stripped> // getter 
	0x49da0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistorySearchItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistorySearchItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xaca400028970 (0x4a400028970) in binary!
	0x90b8  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x853c00028fc0 (0x53c00028fc0) in binary!
	0x90a0  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x852400028fb8 (0x52400028fb8) in binary!
	0x9088  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x850c00028fb0 (0x50c00028fb0) in binary!
	0x9070  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x84f400028fa8 (0x4f400028fa8) in binary!
	0x9128  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffb77b0  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0xbcfffb7278  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
	0x8cfffb76b0  @objc MapsSyncMutableHistorySearchItem. <stripped>
	0xfffb7888  @objc MapsSyncMutableHistorySearchItem.1“1…E1¿Ë∂™ <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffb80a0  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>

	// Swift methods
	0x4ac30  func <stripped> // getter 
	0x4adb0  func <stripped> // setter 
	0x4aef0  func <stripped> // modifyCoroutine 
	0x4af60  func <stripped> // getter 
	0x4afa0  func <stripped> // setter 
	0x4b000  func <stripped> // modifyCoroutine 
	0x4b0f0  func <stripped> // getter 
	0x4b130  func <stripped> // setter 
	0x4b190  func <stripped> // modifyCoroutine 
	0x4b340  func <stripped> // getter 
	0x4b4e0  func <stripped> // setter 
	0x4b700  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncCollectionPlaceItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xac0c000288d0 (0x40c000288d0) in binary!
	0x9e48  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0x831a000288a8 (0x31a000288a8) in binary!
	0x81e0  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0x90cc000288b8 (0xcc000288b8) in binary!
	0x18000000c  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0xabc400028828 (0x3c400028828) in binary!
	0x18000000c  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0x8fcc00028848 (0x7cc00028848) in binary!
	0x68000000c  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>

	// Swift methods
	0x4bd20  class func MapsSyncCollectionPlaceItemQuery.__allocating_init(delegate:) // init 
	0x4bdd0  func <stripped> // method 
	0x4bee0  func <stripped> // method 
 }

 class MapsSync.MapsSyncFavoriteItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xab9400028858 (0x39400028858) in binary!
	0x9dd0  @objc MapsSyncFavoriteItemQuery.(null) <stripped>
WARNING: couldn't find address 0x82a200028830 (0x2a200028830) in binary!
	0xab70  @objc MapsSyncFavoriteItemQuery.(null) <stripped>
WARNING: couldn't find address 0x815c00028808 (0x15c00028808) in binary!
	0x9048  @objc MapsSyncFavoriteItemQuery.(null) <stripped>
WARNING: couldn't find address 0x138000000c (0x138000000c) in binary!
	0x5b4fffbae40  @objc MapsSyncFavoriteItemQuery.(null) <stripped>
	0x94fffbb518  @objc MapsSyncFavoriteItemQuery.÷Hç58‰ <stripped>
	0x3dcfffbb890  @objc MapsSyncFavoriteItemQuery.x ˇPHÉƒA]]√ <stripped>

	// Swift methods
	0x4cf70  class func MapsSyncFavoriteItemQuery.__allocating_init(delegate:) // init 
	0x4d020  func <stripped> // method 
	0x4d180  func <stripped> // method 
 }

 class MapsSync.MapsSyncDataBase_0_0_1 : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x4f0b0  func <stripped> // method 
	0x4f740  func <stripped> // getter 
 }

 class MapsSync.MapsSyncCollection : MapsSyncBaseItem {

	// Properties
	var _collectionDescription : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _image : q≥ // +0x0 (0x10)
	var _imageUrl : String? // +0x0 (0x10)
	var _title : String? // +0x0 (0x10)
	var _places : MapsSyncCollectionItem // +0x0 (0x8)
	var _placesUnstored : MapsSyncCollectionItem // +0x45545f5f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8f64000285c8 (0x764000285c8) in binary!
	0x83e8  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0xacce00028840 (0x4ce00028840) in binary!
	0x8f40  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x8f3400028bd8 (0x73400028bd8) in binary!
	0x8f28  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x8f1c00028be0 (0x71c00028be0) in binary!
	0x8f10  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x8f0400028e58 (0x70400028e58) in binary!
	0xbbb8  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0xbbac00028540 (0x3ac00028540) in binary!
	0x8370  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x8364000287b8 (0x364000287b8) in binary!
	0x7968  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x795c00028790 (0x15c00028790) in binary!
	0x9cd8  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x9ccc00028538 (0x4cc00028538) in binary!
	0xaa78  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x8f5c00028748 (0x75c00028748) in binary!
	0xe8000000c  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0xaa5400028720 (0x25400028720) in binary!
	0x8e68  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x82ec00028b08 (0x2ec00028b08) in binary!
	0x8e50  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x82d400028b00 (0x2d400028b00) in binary!
	0x8e38  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x82bc00028af8 (0x2bc00028af8) in binary!
	0x8e20  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x82a400028af0 (0x2a400028af0) in binary!
	0x8e08  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x828c00028d58 (0x28c00028d58) in binary!
	0x8280  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x827400028410 (0x27400028410) in binary!
	0x8ea8  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc0930  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x334fffc3ce8  @objc MapsSyncCollection.(null) <stripped>

	// Swift methods
	0x504c0  func <stripped> // getter 
	0x50550  func <stripped> // getter 
	0x505a0  func <stripped> // getter 
	0x50630  func <stripped> // getter 
	0x506a0  func <stripped> // getter 
	0x50d90  func <stripped> // method 
 }

 class MapsSync.MapsSyncMutableCollection : MapsSyncMutableBaseItem {

	// Properties
	var _proxyCollection : MapsSyncManagedCollection

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xaa5400028720 (0x25400028720) in binary!
	0x8e68  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x82ec00028b08 (0x2ec00028b08) in binary!
	0x8e50  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x82d400028b00 (0x2d400028b00) in binary!
	0x8e38  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x82bc00028af8 (0x2bc00028af8) in binary!
	0x8e20  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x82a400028af0 (0x2a400028af0) in binary!
	0x8e08  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x828c00028d58 (0x28c00028d58) in binary!
	0x8280  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x827400028410 (0x27400028410) in binary!
	0x8ea8  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc0930  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x334fffc3ce8  @objc MapsSyncMutableCollection.(null) <stripped>
	0x58c000283b0  @objc MapsSyncMutableCollection. <stripped>
WARNING: couldn't find address 0x2839cfffc3ed8 (0x39cfffc3ed8) in binary!
	0x57400028388  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x28374fffc4050 (0x374fffc4050) in binary!
	0x55c00028360  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x2834cfffc4078 (0x34cfffc4078) in binary!
	0x7dc00028338  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x28324fffc41f0 (0x324fffc41f0) in binary!
	0x52c00028310  @objc MapsSyncMutableCollection.(null) <stripped>

	// Swift methods
	0x52ae0  func <stripped> // getter 
	0x52b20  func <stripped> // setter 
	0x52b80  func <stripped> // modifyCoroutine 
	0x52d10  func <stripped> // getter 
	0x52ec0  func <stripped> // setter 
	0x530a0  func <stripped> // modifyCoroutine 
	0x53200  func <stripped> // getter 
	0x53240  func <stripped> // setter 
	0x532a0  func <stripped> // modifyCoroutine 
	0x53450  func <stripped> // getter 
	0x535f0  func <stripped> // setter 
	0x53810  func <stripped> // modifyCoroutine 
	0x53a10  func <stripped> // getter 
	0x53bc0  func <stripped> // setter 
	0x53d20  func <stripped> // modifyCoroutine 
	0x53e90  func <stripped> // method 
	0x54000  func <stripped> // method 
 }

 class MapsSync.MapsSyncManagedHistorySearchItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7f9c00028708 (0x79c00028708) in binary!
	0x28000000c  @objc MapsSyncManagedHistorySearchItem.(null) <stripped>
 }

 class MapsSync.MapsSyncBaseItem : MapsSyncObjectWrapper {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _identifier : ¥ // +0xac000 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _createTime : ˚° // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _modificationTime : ˚° // +0xac000 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _positionIndex : ¶ // +0x5 (0x8)
	var _editBlocks : MapsSyncMutableBaseItem // +0x13 (0x8)
	var _readContext : NSManagedObjectContext? // +0x65745f5f (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _saveObjectSignpost : [¶ // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8d8c000283b0 (0x58c000283b0) in binary!
	0x8210  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8d7400028388 (0x57400028388) in binary!
	0x81f8  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8d5c00028360 (0x55c00028360) in binary!
	0x81e0  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x77dc00028338 (0x7dc00028338) in binary!
	0xaaa4  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8d2c00028310 (0x52c00028310) in binary!
	0x81b0  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0xa8f400028ca0 (0xf400028ca0) in binary!
	0xaa8a  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8cfc00028670 (0x4fc00028670) in binary!
	0x8cf0  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0xb9a4000285d0 (0x1a4000285d0) in binary!
	0x8cd8  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8ccc000285f8 (0x4cc000285f8) in binary!
	0x8cc0  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x774c000285c0 (0x74c000285c0) in binary!
	0x8138  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x812c00028270 (0x12c00028270) in binary!
	0xaa20  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x9aac00028550 (0x2ac00028550) in binary!
	0x9aa0  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0xaa1a00028228 (0x21a00028228) in binary!
	0xb920  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x9a7c000282e8 (0x27c000282e8) in binary!
	0x76e8  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x76dc00028510 (0x6dc00028510) in binary!
	0xa810  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x80b400028508 (0xb400028508) in binary!
	0xa7f8  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8c0c000281b0 (0x40c000281b0) in binary!
	0x8cd0  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x16cfffc6e38  @objc MapsSyncBaseItem.(null) <stripped>
	0x504fffc6ed0  @objc MapsSyncBaseItem. <stripped>
	0x4dcfffc6f48  @objc MapsSyncBaseItem. <stripped>
	0x4a4fffc7170  @objc MapsSyncBaseItem.UHâÂHç%E
 <stripped>
	0x4f4fffc74f8  @objc MapsSyncBaseItem.˜LâÓHãE–ˇPHç5.Ú <stripped>
	0xfffc77f0  @objc MapsSyncBaseItem.UHâÂIã}Ë´° <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc9448  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc9770  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc97f8  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x314fffcb190  @objc MapsSyncBaseItem.(null) <stripped>
	0xfffcc578  @objc MapsSyncBaseItem.Lâ˜Hâ∆ËÆ <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x5cfffcf260  @objc MapsSyncBaseItem.(null) <stripped>
	0x424fffcf518  @objc MapsSyncBaseItem.â÷Ë1 <stripped>
	0x384fffcf830  @objc MapsSyncBaseItem. <stripped>
	0x35cfffcf898  @objc MapsSyncBaseItem.ÑÒ <stripped>
	0x334fffcfb60  @objc MapsSyncBaseItem. <stripped>
	0x64400028310  @objc MapsSyncBaseItem.Ë1° <stripped>

	// Swift methods
	0x55720  func <stripped> // method 
	0x55880  func <stripped> // getter 
	0x558c0  func <stripped> // getter 
	0x558e0  func <stripped> // getter 
	0x55960  func <stripped> // getter 
	0x583a0  func <stripped> // method 
	0x55980  func <stripped> // method 
	0x58050  func <stripped> // method 
	0x55c80  func <stripped> // method 
	0x55e70  func <stripped> // method 
	0x56080  func <stripped> // method 
	0x56700  func <stripped> // method 
	0x5b9a0  func <stripped> // method 
	0x5b9c0  func <stripped> // method 
	0x56ba0  func <stripped> // method 
	0x57b70  func <stripped> // method 
	0x56d50  func <stripped> // method 
 }

 class MapsSync.MapsSyncMutableBaseItem : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _proxyObject : NSManagedObject

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa7cc00028498 (0x7cc00028498) in binary!
	0x8be0  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8bd400028158 (0x3d400028158) in binary!
	0x8bc8  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x804c000284f0 (0x4c000284f0) in binary!
	0x8bb0  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8034000284c8 (0x34000284c8) in binary!
	0x7630  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0xa8f800028490 (0xf800028490) in binary!
	0x8b80  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8c4400028430 (0x44400028430) in binary!
	0x18000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x7d34000284a0 (0x534000284a0) in binary!
	0x18000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x7d1c00028488 (0x51c00028488) in binary!
	0x18000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x7d0400028470 (0x50400028470) in binary!
	0x38000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x7df400028328 (0x5f400028328) in binary!
	0x7a58  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x7e0200028300 (0x60200028300) in binary!
	0xa8000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>

	// Swift methods
	0x5bd50  class func MapsSyncMutableBaseItem.__allocating_init(proxyObject:) // init 
	0x56e60  func <stripped> // getter 
	0x56e90  func <stripped> // getter 
	0x56fc0  func <stripped> // setter 
	0x570c0  func <stripped> // modifyCoroutine 
	0x57450  func <stripped> // getter 
	0x57500  func <stripped> // setter 
	0x575b0  func <stripped> // modifyCoroutine 
	0x57800  func <stripped> // getter 
	0x578b0  func <stripped> // setter 
	0x57960  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedHistoryEvDirectionsItem : MapsSyncManagedHistoryDirectionsItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7d34000284a0 (0x534000284a0) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryEvDirectionsItem.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedCollection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7d1c00028488 (0x51c00028488) in binary!
	0x18000000c  @objc MapsSyncManagedCollection.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedCollectionTransitItem : MapsSyncManagedCollectionItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7d0400028470 (0x50400028470) in binary!
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
	var lastNotified : ø≤
	var lock : NSLock

	// Swift methods
	0x62890  func <stripped> // getter 
	0x628c0  func <stripped> // setter 
	0x62900  func <stripped> // modifyCoroutine 
	0x62930  func <stripped> // method 
	0x62a80  func <stripped> // method 
	0x632d0  func <stripped> // method 
	0x635b0  func <stripped> // method 
 }

 class MapsSync.MapsSyncHistoryDirectionsItem : MapsSyncHistoryItem {

	// Properties
	var _navigationInterrupted : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _routeRequestStorage : q≥ // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8ae400028438 (0x2e400028438) in binary!
	0x98f8  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x8acc00028858 (0x2cc00028858) in binary!
	0xb780  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x7f4400028398 (0x74400028398) in binary!
	0x7548  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x753c00028370 (0x53c00028370) in binary!
	0x98b8  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0xa66400028a10 (0x66400028a10) in binary!
	0x8b48  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x7dcfffcfca0  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
	0x7ccfffcfd58  @objc MapsSyncHistoryDirectionsItem.LâÁLâ˙Ë°ì <stripped>
	0x2e4fffcfe00  @objc MapsSyncHistoryDirectionsItem.[A\A]A^A_]Ès† <stripped>
	0x214000289d8  @objc MapsSyncHistoryDirectionsItem.Û 1ˇHãu»HãU¿Ë <stripped>
WARNING: couldn't find address 0x289dcfffd01e0 (0x1dcfffd01e0) in binary!
	0x1fc000289e0  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>

	// Swift methods
	0x63e30  func <stripped> // getter 
	0x63e50  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryDirectionsItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryDirectionsItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa64400028310 (0x64400028310) in binary!
	0x9878  @objc MapsSyncMutableHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0xadf000028a00 (0x5f000028a00) in binary!
	0x8a40  @objc MapsSyncMutableHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x7ec4000289f0 (0x6c4000289f0) in binary!
	0x8af8  @objc MapsSyncMutableHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x1b8000000c (0x1b8000000c) in binary!
	0x1dcfffd01e0  @objc MapsSyncMutableHistoryDirectionsItem.(null) <stripped>
	0x1e4fffd0248  @objc MapsSyncMutableHistoryDirectionsItem.[A\A]A^A_]√Iø¯ˇˇˇˇˇˇ <stripped>
	0x1ecfffd02b0  @objc MapsSyncMutableHistoryDirectionsItem.âﬂLâˆLâ‚Hâ¡Ëf¢ <stripped>

	// Swift methods
	0x63f90  func <stripped> // getter 
	0x63fb0  func <stripped> // setter 
	0x63fe0  func <stripped> // modifyCoroutine 
	0x64040  func <stripped> // getter 
	0x64180  func <stripped> // setter 
	0x64270  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncVehicle : MapsSyncBaseItem {

	// Properties
	var _colorHex : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentVehicleState : q≥ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _dateOfVehicleIngestion : Q± // +0x0 (0x0)
	var _displayName : String? // +0x0 (0x10)
	var _headUnitBluetoothIdentifier : String? // +0x0 (0x10)
	var _headUnitMacAddress : String? // +0x0 (0x10)
	var _iapIdentifier : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastStateUpdateDate : Q± // +0x0 (0x0)
	var _licensePlate : String? // +0x0 (0x10)
	var _lprPowerType : String? // +0x0 (0x10)
	var _lprVehicleType : String? // +0x0 (0x10)
	var _manufacturer : String? // +0x0 (0x10)
	var _model : String? // +0x0 (0x10)
	var _pairedAppIdentifier : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _powerByConnector : q≥ // +0x0 (0x10)
	var _siriIntentsIdentifier : String? // +0x0 (0x10)
	var _supportedConnectors : NSNumber? // +0x0 (0x8)
	var _vehicleIdentifier : String? // +0x0 (0x10)
	var _vehicleType : NSNumber? // +0x0 (0x8)
	var _year : NSNumber? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8a14000289d8 (0x214000289d8) in binary!
	0x8a08  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x89fc000289e0 (0x1fc000289e0) in binary!
	0x89f0  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x89e4000289e8 (0x1e4000289e8) in binary!
	0x89d8  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x89cc000289f0 (0x1cc000289f0) in binary!
	0x89c0  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x89b4000289f8 (0x1b4000289f8) in binary!
	0x89a8  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x899c00028a00 (0x19c00028a00) in binary!
	0x8990  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x898400028a08 (0x18400028a08) in binary!
	0x8978  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x896c00028a10 (0x16c00028a10) in binary!
	0x8960  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x895400028a18 (0x15400028a18) in binary!
	0x8948  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x893c00028a10 (0x13c00028a10) in binary!
	0x8930  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0xb5e400028288 (0x5e400028288) in binary!
	0x7da8  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x73ac000281e8 (0x3ac000281e8) in binary!
	0x73a0  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x971c000281c0 (0x71c000281c0) in binary!
	0xa4c8  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x89ac00028198 (0x1ac00028198) in binary!
	0x2a8000000c  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0xa4a400028170 (0x4a400028170) in binary!
	0x88b8  @objc MapsSyncVehicle.(null) <stripped>
	0x88a0  dispatch thunk of MapsSyncMutableCollectionPlaceItem.mapItemStorage.getter
WARNING: couldn't find address 0x7d2400028870 (0x52400028870) in binary!
	0x8888  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7d0c00028868 (0x50c00028868) in binary!
	0x8870  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7cf400028860 (0x4f400028860) in binary!
	0x8858  @objc MapsSyncVehicle.(null) <stripped>
	0x8840  dispatch thunk of MapsSyncMutableCollectionPlaceItem.droppedPinFloorOrdinal.getter
WARNING: couldn't find address 0x7cc400028850 (0x4c400028850) in binary!
	0x8828  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7cac00028848 (0x4ac00028848) in binary!
	0x8810  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7c9400028840 (0x49400028840) in binary!
	0x87f8  @objc MapsSyncVehicle.(null) <stripped>
	0x87e0  dispatch thunk of MapsSyncMutableCollectionPlaceItem.droppedPinCoordinate.getter
WARNING: couldn't find address 0x7c6400028830 (0x46400028830) in binary!
	0x87c8  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7c4c00028828 (0x44c00028828) in binary!
	0x87b0  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7c3400028820 (0x43400028820) in binary!
	0x8798  @objc MapsSyncVehicle.(null) <stripped>

	// Swift methods
	0x65330  func <stripped> // getter 
	0x65370  func <stripped> // getter 
	0x653b0  func <stripped> // getter 
	0x653f0  func <stripped> // getter 
	0x65430  func <stripped> // getter 
	0x65470  func <stripped> // getter 
	0x654b0  func <stripped> // getter 
	0x655a0  func <stripped> // getter 
	0x65620  func <stripped> // getter 
	0x65660  func <stripped> // getter 
	0x656a0  func <stripped> // getter 
	0x656e0  func <stripped> // getter 
	0x65720  func <stripped> // getter 
	0x65760  func <stripped> // getter 
	0x65800  func <stripped> // getter 
	0x65870  func <stripped> // getter 
	0x658c0  func <stripped> // getter 
	0x65960  func <stripped> // getter 
	0x659e0  func <stripped> // getter 
	0x65a40  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableVehicle : MapsSyncMutableBaseItem {

	// Properties
	var _proxy : MapsSyncManagedVehicle

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa4a400028170 (0x4a400028170) in binary!
	0x88b8  @objc MapsSyncMutableVehicle.(null) <stripped>
	0x88a0  dispatch thunk of MapsSyncMutableCollectionPlaceItem.mapItemStorage.getter
WARNING: couldn't find address 0x7d2400028870 (0x52400028870) in binary!
	0x8888  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7d0c00028868 (0x50c00028868) in binary!
	0x8870  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7cf400028860 (0x4f400028860) in binary!
	0x8858  @objc MapsSyncMutableVehicle.(null) <stripped>
	0x8840  dispatch thunk of MapsSyncMutableCollectionPlaceItem.droppedPinFloorOrdinal.getter
WARNING: couldn't find address 0x7cc400028850 (0x4c400028850) in binary!
	0x8828  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7cac00028848 (0x4ac00028848) in binary!
	0x8810  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7c9400028840 (0x49400028840) in binary!
	0x87f8  @objc MapsSyncMutableVehicle.(null) <stripped>
	0x87e0  dispatch thunk of MapsSyncMutableCollectionPlaceItem.droppedPinCoordinate.getter
WARNING: couldn't find address 0x7c6400028830 (0x46400028830) in binary!
	0x87c8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7c4c00028828 (0x44c00028828) in binary!
	0x87b0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7c3400028820 (0x43400028820) in binary!
	0x8798  @objc MapsSyncMutableVehicle.(null) <stripped>
	0x8780  dispatch thunk of MapsSyncMutableCollectionPlaceItem.customName.getter
WARNING: couldn't find address 0x7c0400028810 (0x40400028810) in binary!
	0x8768  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7bec00028808 (0x3ec00028808) in binary!
	0x8750  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7bd400028800 (0x3d400028800) in binary!
	0x8738  @objc MapsSyncMutableVehicle.(null) <stripped>
	0x8720  dispatch thunk of MapsSyncCollectionPlaceItem.longitude.getter
WARNING: couldn't find address 0x7ba400028490 (0x3a400028490) in binary!
	0x8708  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7b8c000287d8 (0x38c000287d8) in binary!
	0x86f0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7b74000287d0 (0x374000287d0) in binary!
	0x87a8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x414fffd6270  @objc MapsSyncMutableVehicle.(null) <stripped>
	0x6a400027c18  @objc MapsSyncMutableVehicle.m¿LâÔˇ#
 <stripped>
WARNING: couldn't find address 0x27c04fffd6140 (0x404fffd6140) in binary!
	0x68c00028780  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28784fffd62b8 (0x784fffd62b8) in binary!
	0x67400028788  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x2878cfffd63b0 (0x78cfffd63b0) in binary!
	0x65c00028798  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x27fb4fffd64c8 (0x7b4fffd64c8) in binary!
	0x2d400027cb8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x27f1cfffd72c0 (0x71cfffd72c0) in binary!
	0xcc00027f08  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x27ef4fffd7568 (0x6f4fffd7568) in binary!
	0x43c00027ee0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28594fffd76c0 (0x594fffd76c0) in binary!
	0x6cc00027eb8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0xfffd78c8 (0xfffd78c8) in binary!
	0x1c400027e90  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x286ccfffd7b90 (0x6ccfffd7b90) in binary!
	0x25c000286c8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x286c4fffd7c48 (0x6c4fffd7c48) in binary!
	0x244000286c0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x286bcfffd7f20 (0x6bcfffd7f20) in binary!
	0x22c000286b8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x286b4fffd8568 (0x6b4fffd8568) in binary!
	0x144000286b0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x27e34fffd8ae0 (0x634fffd8ae0) in binary!
	0x38000000c  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0xa144000286a8 (0x144000286a8) in binary!
	0xae28  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x861c00027e08 (0x61c00027e08) in binary!
	0x48000000c  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x781400027d48 (0x1400027d48) in binary!
	0xa108  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0xa0fc00027a68 (0xfc00027a68) in binary!
	0x7110  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x148000000c (0x148000000c) in binary!
	0x644fffdabe8  @objc MapsSyncMutableVehicle.(null) <stripped>
	0x654fffdb250  @objc MapsSyncMutableVehicle.ÿ <stripped>

	// Swift methods
	0x67980  func <stripped> // getter 
	0x679c0  func <stripped> // setter 
	0x67a20  func <stripped> // modifyCoroutine 
	0x67b10  func <stripped> // getter 
	0x67b50  func <stripped> // setter 
	0x67bb0  func <stripped> // modifyCoroutine 
	0x67ca0  func <stripped> // getter 
	0x67ce0  func <stripped> // setter 
	0x67d40  func <stripped> // modifyCoroutine 
	0x67ea0  func <stripped> // getter 
	0x67ee0  func <stripped> // setter 
	0x67f40  func <stripped> // modifyCoroutine 
	0x68030  func <stripped> // getter 
	0x68070  func <stripped> // setter 
	0x680d0  func <stripped> // modifyCoroutine 
	0x681c0  func <stripped> // getter 
	0x68200  func <stripped> // setter 
	0x68260  func <stripped> // modifyCoroutine 
	0x68350  func <stripped> // getter 
	0x68390  func <stripped> // setter 
	0x683f0  func <stripped> // modifyCoroutine 
	0x68580  func <stripped> // getter 
	0x687d0  func <stripped> // setter 
	0x689c0  func <stripped> // modifyCoroutine 
	0x68c90  func <stripped> // getter 
	0x68cd0  func <stripped> // setter 
	0x68d30  func <stripped> // modifyCoroutine 
	0x68e20  func <stripped> // getter 
	0x68e60  func <stripped> // setter 
	0x68ec0  func <stripped> // modifyCoroutine 
	0x68fb0  func <stripped> // getter 
	0x68ff0  func <stripped> // setter 
	0x69050  func <stripped> // modifyCoroutine 
	0x69140  func <stripped> // getter 
	0x69180  func <stripped> // setter 
	0x691e0  func <stripped> // modifyCoroutine 
	0x692d0  func <stripped> // getter 
	0x69310  func <stripped> // setter 
	0x69370  func <stripped> // modifyCoroutine 
	0x69460  func <stripped> // getter 
	0x694a0  func <stripped> // setter 
	0x69500  func <stripped> // modifyCoroutine 
	0x696b0  func <stripped> // getter 
	0x698b0  func <stripped> // setter 
	0x69af0  func <stripped> // modifyCoroutine 
	0x69c70  func <stripped> // getter 
	0x69cb0  func <stripped> // setter 
	0x69d10  func <stripped> // modifyCoroutine 
	0x69e00  func <stripped> // getter 
	0x69e40  func <stripped> // setter 
	0x69ea0  func <stripped> // modifyCoroutine 
	0x69ff0  func <stripped> // getter 
	0x6a190  func <stripped> // setter 
	0x6a3b0  func <stripped> // modifyCoroutine 
	0x6a530  func <stripped> // getter 
	0x6a570  func <stripped> // setter 
	0x6a5d0  func <stripped> // modifyCoroutine 
	0x6a690  func <stripped> // getter 
	0x6a720  func <stripped> // setter 
	0x6a820  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncAnonymousCredential : MapsSyncBaseItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _anonymousId : q≥ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapsToken : q≥ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapsTokenCreatedAt : Q± // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapsTokenTTL : ø≤ // +0x0 (0x8)
	var _reviewedPlaces : MapsSyncReviewedPlace // +0x0 (0x8)
	var _reviewedPlacesUnstored : MapsSyncReviewedPlace // +0x45545f5f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x86a400027c18 (0x6a400027c18) in binary!
	0x7b28  @objc MapsSyncAnonymousCredential.(null) <stripped>
	0x8680  dispatch thunk of MapsSyncCollectionPlaceItem.droppedPinCoordinate.getter
WARNING: couldn't find address 0x867400028788 (0x67400028788) in binary!
	0x99b8  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x865c00028798 (0x65c00028798) in binary!
	0xb310  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7ad400027cb8 (0x2d400027cb8) in binary!
	0x7ac8  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x70cc00027f08 (0xcc00027f08) in binary!
	0x70c0  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x943c00027ee0 (0x43c00027ee0) in binary!
	0xa1e8  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x86cc00027eb8 (0x6cc00027eb8) in binary!
	0xa8000000c  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0xa1c400027e90 (0x1c400027e90) in binary!
	0x85d8  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7a5c000286c8 (0x25c000286c8) in binary!
	0x85c0  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7a44000286c0 (0x244000286c0) in binary!
	0x85a8  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7a2c000286b8 (0x22c000286b8) in binary!
	0x98e0  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x9944000286b0 (0x144000286b0) in binary!
	0x8648  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x7fcfffda080  @objc MapsSyncAnonymousCredential.(null) <stripped>
	0xfffda468  @objc MapsSyncAnonymousCredential.Ñ¿uHH∏ˇˇˇˇˇˇˇ?I9∆H∏¯ˇˇˇˇˇˇ <stripped>

	// Swift methods
	0x6b790  func <stripped> // getter 
	0x6b830  func <stripped> // getter 
	0x6b930  func <stripped> // getter 
	0x6b990  func <stripped> // getter 
	0x6ba70  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableAnonymousCredential : MapsSyncMutableBaseItem {

	// Properties
	var _proxyObject : MapsSyncManagedAnonymousCredential

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa1c400027e90 (0x1c400027e90) in binary!
	0x85d8  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7a5c000286c8 (0x25c000286c8) in binary!
	0x85c0  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7a44000286c0 (0x244000286c0) in binary!
	0x85a8  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7a2c000286b8 (0x22c000286b8) in binary!
	0x98e0  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x9944000286b0 (0x144000286b0) in binary!
	0x8648  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x7fcfffda080  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
	0xfffda468  @objc MapsSyncMutableAnonymousCredential.Ñ¿uHH∏ˇˇˇˇˇˇˇ?I9∆H∏¯ˇˇˇˇˇˇ <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x27cfffe2a30  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
	0x5c4fffe2b68  @objc MapsSyncMutableAnonymousCredential.
 <stripped>
	0xdc00028488  @objc MapsSyncMutableAnonymousCredential.Lâ‚H¡Í>Hç5Ú <stripped>

	// Swift methods
	0x6d1a0  func <stripped> // getter 
	0x6d1e0  func <stripped> // setter 
	0x6d240  func <stripped> // modifyCoroutine 
	0x6d3f0  func <stripped> // getter 
	0x6d5f0  func <stripped> // setter 
	0x6d830  func <stripped> // modifyCoroutine 
	0x6da20  func <stripped> // getter 
	0x6dc30  func <stripped> // setter 
	0x6ddd0  func <stripped> // modifyCoroutine 
	0x6e080  func <stripped> // getter 
	0x6e0c0  func <stripped> // setter 
	0x6e140  func <stripped> // modifyCoroutine 
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
WARNING: couldn't find address 0xa144000286a8 (0x144000286a8) in binary!
	0xae28  @objc MapsSyncError.(null) <stripped>
WARNING: couldn't find address 0x861c00027e08 (0x61c00027e08) in binary!
	0x48000000c  @objc MapsSyncError.(null) <stripped>
WARNING: couldn't find address 0x781400027d48 (0x1400027d48) in binary!
	0xa108  @objc MapsSyncError.(null) <stripped>

	// Swift methods
	0x6f6c0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncFavoriteItem : MapsSyncBaseItem {

	// Properties
	var _contactHandles : Set<String>? // +0x0 (0x8)
	var _customName : String? // +0x0 (0x10)
	var _hidden : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapItemStorage : q≥ // +0x0 (0x10)
	var _originatingAddressString : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _type : ã∑ // +0x0 (0x2)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _source : ã∑ // +0x0 (0x2)
	var _shortcutIdentifier : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _version : ã∑ // +0x0 (0x2)
	var _latitude : NSNumber? // +0x0 (0x8)
	var _longitude : NSNumber? // +0x0 (0x8)
	var _muid : NSNumber? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa0dc00028488 (0xdc00028488) in binary!
	0x84f0  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x84e400028630 (0x4e400028630) in binary!
	0x84d8  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x92ec00028640 (0x2ec00028640) in binary!
	0x84c0  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x84b400028638 (0x4b400028638) in binary!
	0xae08  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xadfc00028638 (0x5fc00028638) in binary!
	0x8490  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xade400028640 (0x5e400028640) in binary!
	0x8478  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x846c00027ea0 (0x46c00027ea0) in binary!
	0x8460  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xb11400027db8 (0x11400027db8) in binary!
	0x78d8  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x6edc00027d18 (0x6dc00027d18) in binary!
	0x6ed0  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x924c00027cf0 (0x24c00027cf0) in binary!
	0x84e8  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x1c8000000c (0x1c8000000c) in binary!
	0x134fff97a40  @objc MapsSyncFavoriteItem.(null) <stripped>
	0x10cfff97d28  @objc MapsSyncFavoriteItem.ˇËí <stripped>
	0xe4fffdc630  @objc MapsSyncFavoriteItem.æ) <stripped>
	0x4fcfffdc768  @objc MapsSyncFavoriteItem.¥ <stripped>
	0xacfffdc910  @objc MapsSyncFavoriteItem.§<
 <stripped>
	0x4fcfffdd2d8  @objc MapsSyncFavoriteItem. <stripped>
	0x4dcfffdd380  @objc MapsSyncFavoriteItem.˜LâÓHãE–ˇPHç5û‰ <stripped>
	0x50cfffdd4f8  @objc MapsSyncFavoriteItem.ãu(IãU0IãM8]ˇ‡f.Ñ <stripped>
	0x4bcfffdd7c0  @objc MapsSyncFavoriteItem. <stripped>
	0x4b4fffddcf8  @objc MapsSyncFavoriteItem.âÍAˇ‘É¯uIHç5ﬂ‰ <stripped>

	// Swift methods
	0x70910  func <stripped> // getter 
	0x70950  func <stripped> // getter 
	0x70980  func <stripped> // getter 
	0x709e0  func <stripped> // getter 
	0x70ab0  func <stripped> // getter 
	0x70af0  func <stripped> // getter 
	0x70b60  func <stripped> // getter 
	0x70bf0  func <stripped> // getter 
	0x70c60  func <stripped> // getter 
	0x70ce0  func <stripped> // getter 
	0x70d40  func <stripped> // getter 
	0x70da0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableFavoriteItem : MapsSyncMutableBaseItem {

	// Properties
	var _proxyFavorite : MapsSyncManagedFavoriteItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x84d400027948 (0x4d400027948) in binary!
	0x84c8  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x9fcc00027920 (0x7cc00027920) in binary!
	0x9fc0  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x83d4000278f8 (0x3d4000278f8) in binary!
	0x7858  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x9f9c00027c68 (0x79c00027c68) in binary!
	0x83b0  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x783400028570 (0x3400028570) in binary!
	0x9f78  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x9f6c00027898 (0x76c00027898) in binary!
	0x8380  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
	0x9188  @objc MapsSyncMutableFavoriteItem.Hç=˘
 <stripped>
WARNING: couldn't find address 0xa700000284d8 (0x700000284d8) in binary!
	0x8350  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x77d400027d08 (0x7d400027d08) in binary!
	0x8338  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x77bc000284b8 (0x7bc000284b8) in binary!
	0xac80  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xad7a00027e78 (0x57a00027e78) in binary!
	0xac68  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xad62000284a0 (0x562000284a0) in binary!
	0x82f0  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x777400028498 (0x77400028498) in binary!
	0xac38  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xad3200028490 (0x53200028490) in binary!
	0x8390  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe0fe8  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x324fffe0ab0  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
	0x2f4fffe0ee8  @objc MapsSyncMutableFavoriteItem.(MãE0PARË”…ˇˇHÉƒ]√f.Ñ <stripped>
	0xfffe10c0  @objc MapsSyncMutableFavoriteItem.ˇˇLâ˜LâÊË[‚ˇˇLâ˜LâÊËP‚ˇˇHÖ€tzIﬂLâ˜LâÊËª·ˇˇHâﬂLâ˛ÎMÖˇtdL˚Lâ˜LâÊË†·ˇˇLâˇHâﬁLâÚLâ·Ëﬂ˘ˇˇâ√Lâ˜LâÊË‚ˇˇLâ˜LâÊË˜·ˇˇLâ˜LâÊËÏ·ˇˇLâ˜LâÊË··ˇˇLâ˜LâÊË÷·ˇˇâÿÈH˛ˇˇE1ˇÎÑ1€Îõfê¸ˇˇ'¸ˇˇ;¸ˇˇI¸ˇˇP¸ˇˇ=˝ˇˇd¸ˇˇ2˝ˇˇá¸ˇˇ˛ˇˇW˝ˇˇÕ˝ˇˇUHâÂAWAVAUATSPHâu–Iâ¸Lç-ÑÒ <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x414fffe5de8  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
	0x38cfffe6130  @objc MapsSyncMutableFavoriteItem.UHâÂHâ˛Iã}HãG]ˇ‡f.Ñ <stripped>
	0x2ecfffe67b8  @objc MapsSyncMutableFavoriteItem.H∏ <stripped>
	0x2c4fffe6820  @objc MapsSyncMutableFavoriteItem.L9Û}GH€Ä∞ <stripped>
	0x29cfffe6c58  @objc MapsSyncMutableFavoriteItem.ú <stripped>
	0x5ac00027a78  @objc MapsSyncMutableFavoriteItem.É¿HÉ‡I)∆LâÙHç=lÂ <stripped>
WARNING: couldn't find address 0x28394fffe6de8 (0x394fffe6de8) in binary!
	0x64400028390  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x2838cfffe6ee0 (0x38cfffe6ee0) in binary!
	0x62c00028388  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x27a4cfffe71a8 (0x24cfffe71a8) in binary!
	0x18000000c  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x735400027ac0 (0x35400027ac0) in binary!
	0xe8000000c  @objc MapsSyncMutableFavoriteItem.(null) <stripped>

	// Swift methods
	0x71ff0  func <stripped> // getter 
	0x72120  func <stripped> // setter 
	0x72190  func <stripped> // modifyCoroutine 
	0x722a0  func <stripped> // method 
	0x72540  func <stripped> // method 
	0x72b30  func <stripped> // getter 
	0x72b70  func <stripped> // setter 
	0x72bd0  func <stripped> // modifyCoroutine 
	0x72cc0  func <stripped> // getter 
	0x72d00  func <stripped> // setter 
	0x72d90  func <stripped> // modifyCoroutine 
	0x72e30  func <stripped> // getter 
	0x73000  func <stripped> // setter 
	0x73480  func <stripped> // modifyCoroutine 
	0x734f0  func <stripped> // getter 
	0x73530  func <stripped> // setter 
	0x73590  func <stripped> // modifyCoroutine 
	0x73680  func <stripped> // getter 
	0x736c0  func <stripped> // setter 
	0x73720  func <stripped> // modifyCoroutine 
	0x737a0  func <stripped> // getter 
	0x737e0  func <stripped> // setter 
	0x73840  func <stripped> // modifyCoroutine 
	0x73980  func <stripped> // getter 
	0x73b20  func <stripped> // setter 
	0x73d40  func <stripped> // modifyCoroutine 
	0x73ec0  func <stripped> // getter 
	0x73f20  func <stripped> // setter 
	0x73ff0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncCollectionItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9e7400027b38 (0x67400027b38) in binary!
	0x90b0  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x758200027b10 (0x58200027b10) in binary!
	0x7448  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x833400027b20 (0x33400027b20) in binary!
	0xa8000000c  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x824c00027ba0 (0x24c00027ba0) in binary!
	0x8240  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x823400028418 (0x23400028418) in binary!
	0xaee8  @objc MapsSyncCollectionItemQuery.(null) <stripped>

	// Swift methods
	0x762f0  class func MapsSyncCollectionItemQuery.__allocating_init(delegate:) // init 
	0x763a0  func <stripped> // method 
	0x764b0  func <stripped> // method 
 }

 class MapsSync.MapsSyncHistoryRideShareItem : MapsSyncHistoryItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _startWaypoint : q≥ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _endWaypoint : q≥ // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x824c00027ba0 (0x24c00027ba0) in binary!
	0x8240  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x823400028418 (0x23400028418) in binary!
	0xaee8  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x76ac00027b00 (0x6ac00027b00) in binary!
	0x6cb0  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x6ca400027ad8 (0x4a400027ad8) in binary!
	0x9020  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x9dcc00028178 (0x5cc00028178) in binary!
	0x82b0  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x394fffe6de8  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
	0x38cfffe6ee0  @objc MapsSyncHistoryRideShareItem.UHâÂAVAUSPHâ˚MãuMãmË¶ <stripped>
	0x24cfffe71a8  @objc MapsSyncHistoryRideShareItem.∞H9Œu]√1¿]√E1¿]È?© <stripped>
	0x35400027ac0  @objc MapsSyncHistoryRideShareItem.UHâÂIã}ËÀ™ <stripped>
WARNING: couldn't find address 0xfffe7818 (0xfffe7818) in binary!
	0x54400027668  @objc MapsSyncHistoryRideShareItem.(null) <stripped>

	// Swift methods
	0x7ba20  func <stripped> // getter 
	0x7bb10  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryRideShareItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryRideShareItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9dac00027a78 (0x5ac00027a78) in binary!
	0x81c0  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x764400028390 (0x64400028390) in binary!
	0x81a8  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x762c00028388 (0x62c00028388) in binary!
	0x8260  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe7818  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0xe8000000c (0xe8000000c) in binary!
	0xe4fffe7c40  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
	0x334fffe7e58  @objc MapsSyncMutableHistoryRideShareItem. <stripped>

	// Swift methods
	0x7c850  func <stripped> // getter 
	0x7c8b0  func <stripped> // setter 
	0x7c920  func <stripped> // modifyCoroutine 
	0x7ca60  func <stripped> // getter 
	0x7cb90  func <stripped> // setter 
	0x7cd00  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedHistoryTransitItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x735400027ac0 (0x35400027ac0) in binary!
	0xe8000000c  @objc MapsSyncManagedHistoryTransitItem.(null) <stripped>
 }

 class MapsSync.MapsSyncReviewedPlace : MapsSyncBaseItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _muid : ø≤ // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastSuggestedReviewDate : Q± // +0x0 (0x0)
	var _hasUserReviewed : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _uploadedPhotosCount : ©∑ // +0x0 (0x4)
	var _anonymousCredential : MapsSyncAnonymousCredential // +0x0 (0x8)
	var _anonymousCredentialUnstored : MapsSyncAnonymousCredential // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9d4400027668 (0x54400027668) in binary!
	0x9d38  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x949c00027b88 (0x49c00027b88) in binary!
	0x8140  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x8f5400028338 (0x75400028338) in binary!
	0x8118  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x811c00028330 (0x11c00028330) in binary!
	0xadd0  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x759400027778 (0x59400027778) in binary!
	0x7588  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x6b8c000279c8 (0x38c000279c8) in binary!
	0x6b80  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x8efc000279a0 (0x6fc000279a0) in binary!
	0x8198  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x2e4fffe8b40  @objc MapsSyncReviewedPlace.(null) <stripped>
	0x284fffe8bf8  @objc MapsSyncReviewedPlace.ˇˇfD <stripped>
	0x27cfffe8e60  @objc MapsSyncReviewedPlace.âˇË≠¨ <stripped>
	0x274fffe93c8  @objc MapsSyncReviewedPlace.Hã=iO <stripped>
	0x104fffe9580  @objc MapsSyncReviewedPlace.çJ <stripped>
	0x41400027518  @objc MapsSyncReviewedPlace.ÉƒX[A\A]A^A_]√Hç=£‰ <stripped>
WARNING: couldn't find address 0x2783cfff997a0 (0x3cfff997a0) in binary!
	0x78000000c  @objc MapsSyncReviewedPlace.(null) <stripped>

	// Swift methods
	0x7d4f0  class func MapsSyncReviewedPlace.__allocating_init(anonymousCredential:) // init 
	0x7d870  func <stripped> // getter 
	0x7d940  func <stripped> // getter 
	0x7d990  func <stripped> // getter 
	0x7d9c0  func <stripped> // getter 
	0x7da50  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableReviewedPlace : MapsSyncMutableBaseItem {

	// Properties
	var _proxyObject : MapsSyncManagedReviewedPlace // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9c9400027960 (0x49400027960) in binary!
	0x93f8  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x945c00027a78 (0x45c00027a78) in binary!
	0x8090  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x751400028280 (0x51400028280) in binary!
	0x8e98  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0xa41000028278 (0x41000028278) in binary!
	0x8060  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x74e400028270 (0x4e400028270) in binary!
	0x8118  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x3cfff997a0  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
	0x39b00027da8  @objc MapsSyncMutableReviewedPlace.Hç}»Hâ˛LâÚLâ·Ëf˚ˇˇâ√Lâ˜LâÊËâ„ˇˇâÿHÉƒ([A\A]A^A_]√Hc√H¡˚ HâE∏H)√å¶ <stripped>
WARNING: couldn't find address 0x2796cfffeb9d0 (0x16cfffeb9d0) in binary!
	0x48c000278e0  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x278ccfffec2e8 (0xccfffec2e8) in binary!
	0x284000278b8  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x278a4fffec3a0 (0xa4fffec3a0) in binary!
	0x3ac00027f58  @objc MapsSyncMutableReviewedPlace.(null) <stripped>

	// Swift methods
	0x7e680  func <stripped> // getter 
	0x7e6c0  func <stripped> // setter 
	0x7e740  func <stripped> // modifyCoroutine 
	0x7e830  func <stripped> // getter 
	0x7ea40  func <stripped> // setter 
	0x7ebe0  func <stripped> // modifyCoroutine 
	0x7ee80  func <stripped> // getter 
	0x7eec0  func <stripped> // setter 
	0x7ef50  func <stripped> // modifyCoroutine 
	0x7eff0  func <stripped> // getter 
	0x7f0b0  func <stripped> // setter 
	0x7f1f0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncHistoryItem : MapsSyncBaseItem {

	// Properties
	var _position : Double // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x839b00027da8 (0x39b00027da8) in binary!
	0xacc8  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x748c000278e0 (0x48c000278e0) in binary!
	0x6a90  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x6a84000278b8 (0x284000278b8) in binary!
	0x8e00  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x9bac00027f58 (0x3ac00027f58) in binary!
	0x48000000c  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x9b9400027860 (0x39400027860) in binary!
	0x832f  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x83c2000281c0 (0x3c2000281c0) in binary!
	0x8060  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff0398  @objc MapsSyncHistoryItem.(null) <stripped>

	// Swift methods
	0x81220  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryItem : MapsSyncMutableBaseItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryItem // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9b9400027860 (0x39400027860) in binary!
	0x832f  @objc MapsSyncMutableHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x83c2000281c0 (0x3c2000281c0) in binary!
	0x8060  @objc MapsSyncMutableHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff0398  @objc MapsSyncMutableHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x7f4fffee320  @objc MapsSyncMutableHistoryItem.(null) <stripped>

	// Swift methods
	0x81240  func <stripped> // getter 
	0x81260  func <stripped> // setter 
	0x81280  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncCuratedCollectionQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9b4400027808 (0x34400027808) in binary!
	0x8d80  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x7252000277e0 (0x252000277e0) in binary!
	0x8d68  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x710c000277b8 (0x10c000277b8) in binary!
	0x7ff8  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff9ae0  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x78cffff95a8  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
	0x75cffff99e0  @objc MapsSyncCuratedCollectionQuery.XM∞Ë¿i <stripped>

	// Swift methods
	0x83e90  class func MapsSyncCuratedCollectionQuery.__allocating_init(delegate:) // init 
	0x83f40  func <stripped> // method 
	0x84050  func <stripped> // method 
 }

 class MapsSync.MapsSyncVehicleQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9adc000277a0 (0x2dc000277a0) in binary!
	0x8d18  @objc MapsSyncVehicleQuery.(null) <stripped>
WARNING: couldn't find address 0x71ea00027778 (0x1ea00027778) in binary!
	0x70b0  @objc MapsSyncVehicleQuery.(null) <stripped>
WARNING: couldn't find address 0x7f9c00027788 (0x79c00027788) in binary!
	0x48000000c  @objc MapsSyncVehicleQuery.(null) <stripped>
WARNING: couldn't find address 0x7eb400027390 (0x6b400027390) in binary!
	0x7ea8  @objc MapsSyncVehicleQuery.(null) <stripped>
WARNING: couldn't find address 0x7e9c00027368 (0x69c00027368) in binary!
	0x7e90  @objc MapsSyncVehicleQuery.(null) <stripped>

	// Swift methods
	0x8f180  class func MapsSyncVehicleQuery.__allocating_init(delegate:) // init 
	0x8f230  func <stripped> // method 
	0x8f340  func <stripped> // method 
 }

 class MapsSync.MapsSyncUtil : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7e7c000277f0 (0x67c000277f0) in binary!
	0x18000000c  @objc MapsSyncUtil.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedVehicle : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x703c000277a8 (0x3c000277a8) in binary!
	0x0  @objc MapsSyncManagedVehicle.(null) <stripped>
 }
