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
WARNING: couldn't find address 0x99240002ab88 (0x1240002ab88) in binary!
	0x18000000c  @objc MapsSyncManagedCollectionItem.(null) <stripped>
 }

 class MapsSync.MapsSyncCollectionPlaceItem : MapsSyncCollectionItem {

	// Properties
	var _customName : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _droppedPinCoordinate : aΩ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _droppedPinFloorOrdinal : ô¡ // +0x0 (0x4)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapItemStorage : aΩ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _origin : {¡ // +0x0 (0x2)
	var _latitude : NSNumber? // +0x0 (0x8)
	var _longitude : NSNumber? // +0x0 (0x8)
	var _muid : NSNumber? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xc4be0002aa60 (0x4be0002aa60) in binary!
	0xa710  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa7040002ab78 (0x7040002ab78) in binary!
	0xa6f8  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa6dc0002ab88 (0x6dc0002ab88) in binary!
	0xa6e0  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xd0540002abe8 (0x540002abe8) in binary!
	0xa6c8  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa6bc0002abe8 (0x6bc0002abe8) in binary!
	0xa6b0  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xd3840002a9e0 (0x3840002a9e0) in binary!
	0xd378  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x9b1c0002a9c0 (0x31c0002a9c0) in binary!
	0x9120  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x91140002a998 (0x1140002a998) in binary!
	0xb480  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xc25c0002a970 (0x25c0002a970) in binary!
	0xc250  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa7140002a950 (0x7140002a950) in binary!
	0xc8000000c  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xc22c0002a928 (0x22c0002a928) in binary!
	0xa620  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x9aa40002aa90 (0x2a40002aa90) in binary!
	0xa608  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x9a8c0002aa88 (0x28c0002aa88) in binary!
	0xa5e0  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa8c00002aa88 (0xc00002aa88) in binary!
	0xa5d8  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x9a5c0002aa88 (0x25c0002aa88) in binary!
	0xcf40  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xd03a0002aad0 (0x3a0002aad0) in binary!
	0xa678  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff6d760  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x5c4fff6e0c8  @objc MapsSyncCollectionPlaceItem.(null) <stripped>
	0xfff6ea00  @objc MapsSyncCollectionPlaceItem.	 <stripped>

	// Swift methods
	0x26c0  func <stripped> // getter 
	0x27a0  func <stripped> // getter 
	0x2840  func <stripped> // getter 
	0x28a0  func <stripped> // getter 
	0x2950  func <stripped> // getter 
	0x29a0  func <stripped> // getter 
	0x2a00  func <stripped> // getter 
	0x2a60  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCollectionPlaceItem : MapsSyncMutableCollectionItem {

	// Properties
	var _proxyCollectionPlaceItem : MapsSyncManagedCollectionPlaceItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xc22c0002a928 (0x22c0002a928) in binary!
	0xa620  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x9aa40002aa90 (0x2a40002aa90) in binary!
	0xa608  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x9a8c0002aa88 (0x28c0002aa88) in binary!
	0xa5e0  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa8c00002aa88 (0xc00002aa88) in binary!
	0xa5d8  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x9a5c0002aa88 (0x25c0002aa88) in binary!
	0xcf40  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xd03a0002aad0 (0x3a0002aad0) in binary!
	0xa678  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff6d760  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x5c4fff6e0c8  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
	0xfff6ea00  @objc MapsSyncMutableCollectionPlaceItem.	 <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff712f8  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x14fff700e0  @objc MapsSyncMutableCollectionPlaceItem.(null) <stripped>
	0x7ecfff70428  @objc MapsSyncMutableCollectionPlaceItem.e∏H∏ˇˇˇˇˇˇˇ?I9≈á© <stripped>

	// Swift methods
	0x41b0  func <stripped> // getter 
	0x4310  func <stripped> // setter 
	0x44d0  func <stripped> // modifyCoroutine 
	0x4650  func <stripped> // getter 
	0x4760  func <stripped> // setter 
	0x48a0  func <stripped> // modifyCoroutine 
	0x49c0  func <stripped> // getter 
	0x4a00  func <stripped> // setter 
	0x4a80  func <stripped> // modifyCoroutine 
	0x4b20  func <stripped> // getter 
	0x4cf0  func <stripped> // setter 
	0x5170  func <stripped> // modifyCoroutine 
	0x51e0  func <stripped> // getter 
	0x5220  func <stripped> // setter 
	0x52b0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedCollectionPlaceItem : MapsSyncManagedCollectionItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x976c0002a9d0 (0x76c0002a9d0) in binary!
	0x38000000c  @objc MapsSyncManagedCollectionPlaceItem.(null) <stripped>
 }

 class MapsSync.MapsSyncHistoryItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xc1340002a828 (0x1340002a828) in binary!
	0xb340  @objc MapsSyncHistoryItemQuery.(null) <stripped>
WARNING: couldn't find address 0x98220002a800 (0x220002a800) in binary!
	0xb328  @objc MapsSyncHistoryItemQuery.(null) <stripped>
WARNING: couldn't find address 0x980a0002a7d8 (0xa0002a7d8) in binary!
	0xb310  @objc MapsSyncHistoryItemQuery.(null) <stripped>
WARNING: couldn't find address 0x96c40002a7b0 (0x6c40002a7b0) in binary!
	0xa5b0  @objc MapsSyncHistoryItemQuery.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x3c4fff726f8  @objc MapsSyncHistoryItemQuery.(null) <stripped>
	0xfff72870  @objc MapsSyncHistoryItemQuery.Lâ`LâÁË~Ó <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x73cfff73918  @objc MapsSyncHistoryItemQuery.(null) <stripped>
	0x714fff739a0  @objc MapsSyncHistoryItemQuery.(öE	 <stripped>

	// Swift methods
	0xbc70  class func MapsSyncHistoryItemQuery.__allocating_init(delegate:) // init 
	0xbd20  func <stripped> // method 
	0xbd80  func <stripped> // method 
	0xc070  func <stripped> // method 
	0xc1f0  func <stripped> // method 
 }

 class MapsSync.MapsSyncDataValidator : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa4640002a8d0 (0x4640002a8d0) in binary!
	0x18000000c  @objc MapsSyncDataValidator.(null) <stripped>

	// Swift methods
	0xf590  class func <stripped> // method 
	0xf620  class func <stripped> // method 
	0xf640  class func <stripped> // method 
	0xf660  class func <stripped> // method 
 }

 class MapsSync.MapsSyncManagedCachedCuratedCollection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x96240002a888 (0x6240002a888) in binary!
	0x18000000c  @objc MapsSyncManagedCachedCuratedCollection.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedAnonymousCredential : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x960c0002a870 (0x60c0002a870) in binary!
	0xd8000000c  @objc MapsSyncManagedAnonymousCredential.(null) <stripped>
 }

 class MapsSync.MapsSyncCollectionTransitItem : MapsSyncCollectionItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _transitLineStorage : aΩ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _muid : uº // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb22c0002a6b0 (0x22c0002a6b0) in binary!
	0xa410  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xa4040002a690 (0x4040002a690) in binary!
	0x8ef8  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xd0cc0002a728 (0xcc0002a728) in binary!
	0xd0c0  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x98640002a708 (0x640002a708) in binary!
	0x8e68  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x8e5c0002a6e0 (0x65c0002a6e0) in binary!
	0xb1c8  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xbfa40002a6b8 (0x7a40002a6b8) in binary!
	0xbf98  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xa45c0002a698 (0x45c0002a698) in binary!
	0x68000000c  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xbf740002a670 (0x7740002a670) in binary!
	0xa368  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x97ec0002a5d8 (0x7ec0002a5d8) in binary!
	0x8e50  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xb6e40002a818 (0x6e40002a818) in binary!
	0xa408  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff78460  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff784f8  @objc MapsSyncCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff77ea0  @objc MapsSyncCollectionTransitItem.(null) <stripped>

	// Swift methods
	0x10950  func <stripped> // getter 
	0x109a0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCollectionTransitItem : MapsSyncMutableCollectionItem {

	// Properties
	var _proxyCollectionTransitItem : MapsSyncManagedCollectionTransitItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbf740002a670 (0x7740002a670) in binary!
	0xa368  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x97ec0002a5d8 (0x7ec0002a5d8) in binary!
	0x8e50  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0xb6e40002a818 (0x6e40002a818) in binary!
	0xa408  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff78460  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff784f8  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff77ea0  @objc MapsSyncMutableCollectionTransitItem.(null) <stripped>

	// Swift methods
	0x117f0  func <stripped> // getter 
	0x11920  func <stripped> // setter 
	0x11aa0  func <stripped> // modifyCoroutine 
	0x11c10  func <stripped> // getter 
	0x11c50  func <stripped> // setter 
	0x11cd0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncDataContainer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x12300  func <stripped> // method 
	0x126d0  func <stripped> // method 
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
	0x13090  func <stripped> // method 
	0x133f0  func <stripped> // method 
 }

 class MapsSync.MapsSyncDataContainerXPCDelegate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9a040002a568 (0x2040002a568) in binary!
	0x28000000c  @objc MapsSyncDataContainerXPCDelegate.(null) <stripped>

	// Swift methods
 }

 class MapsSync.MapsSyncPersistentContainer : NSPersistentContainer /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x94e40002a910 (0x4e40002a910) in binary!
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
WARNING: couldn't find address 0x94940002a6f8 (0x4940002a6f8) in binary!
	0xa8000000c  @objc MapsSyncManagedReviewedPlace.(null) <stripped>
 }

 enum MapsSync.MapsSyncReviewRating { }

 class MapsSync.MapsSyncCachedUserReview : MapsSyncBaseItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _muid : uº // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _numberPhotosUploaded : ô¡ // +0x0 (0x4)
	var _rating : MapsSyncReviewRating // +0x0 (0x2)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8da40002a688 (0x5a40002a688) in binary!
	0xa288  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xcc0c0002aa00 (0x40c0002aa00) in binary!
	0xa280  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xcf540002a6d0 (0x7540002a6d0) in binary!
	0x96f8  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0x8cfc0002a588 (0x4fc0002a588) in binary!
	0x8cf0  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xb05c0002a560 (0x5c0002a560) in binary!
	0xbe38  @objc MapsSyncCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x5fcfff85860  @objc MapsSyncCachedUserReview.(null) <stripped>
	0x164fff85918  @objc MapsSyncCachedUserReview.Ë!"	 <stripped>
	0x15cfff85a40  @objc MapsSyncCachedUserReview.A∂˛Hç5^ˇˇHç^Æ	 <stripped>
	0x4dcfff85bc8  @objc MapsSyncCachedUserReview.Ë—„ <stripped>
	0x2db0002a940  @objc MapsSyncCachedUserReview.ÈÒ <stripped>

	// Swift methods
	0x20df0  func <stripped> // getter 
	0x20e20  func <stripped> // getter 
	0x20e60  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCachedUserReview : MapsSyncMutableBaseItem {

	// Properties
	var _proxy : MapsSyncManagedCachedUserReview // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbe240002a520 (0x6240002a520) in binary!
	0x8d18  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xb5ac0002a6e0 (0x5ac0002a6e0) in binary!
	0xa1f0  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xa4d00002a960 (0x4d00002a960) in binary!
	0xcb68  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0xcc620002a958 (0x4620002a958) in binary!
	0xa2a0  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
WARNING: couldn't find address 0x178000000c (0x178000000c) in binary!
	0x414fff864c8  @objc MapsSyncMutableCachedUserReview.(null) <stripped>
	0x3f4fff86720  @objc MapsSyncMutableCachedUserReview.Ëû		 <stripped>
	0x11cfff867a8  @objc MapsSyncMutableCachedUserReview.âp8Lâ`@Ú@ Lâp`Lâ`hÚHHHFÒHø. <stripped>
	0x124fff86870  @objc MapsSyncMutableCachedUserReview.‚		 <stripped>

	// Swift methods
	0x21820  func <stripped> // getter 
	0x21860  func <stripped> // setter 
	0x218e0  func <stripped> // modifyCoroutine 
	0x21960  func <stripped> // getter 
	0x219a0  func <stripped> // setter 
	0x21a20  func <stripped> // modifyCoroutine 
	0x21ae0  func <stripped> // getter 
	0x21b40  func <stripped> // setter 
	0x21bf0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncCachedCuratedCollection : MapsSyncBaseItem {

	// Properties
	var _collectionDescription : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _image : aΩ // +0x0 (0x10)
	var _imageUrl : String? // +0x0 (0x10)
	var _title : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _curatedCollectionIdentifier : uº // +0x0 (0x8)
	var _isTombstone : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastFetchedDate : Aª // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastSignificantChangeDate : Aª // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _placesCount : ô¡ // +0x0 (0x4)
	var _publisherAttribution : String? // +0x0 (0x10)
	var _titleLocale : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _resultProviderIdentifier : ô¡ // +0x0 (0x4)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa2db0002a940 (0x2db0002a940) in binary!
	0xa2dd  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xbda40002ac20 (0x5a40002ac20) in binary!
	0x8c30  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa18c0002a918 (0x18c0002a918) in binary!
	0xa180  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa1740002a920 (0x1740002a920) in binary!
	0xa168  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x8c5c0002a928 (0x45c0002a928) in binary!
	0xaf60  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa1440002a930 (0x1440002a930) in binary!
	0xa138  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa11c0002a938 (0x11c0002a938) in binary!
	0xa120  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa1140002a940 (0x1140002a940) in binary!
	0xa0f8  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa0fc0002a368 (0xfc0002a368) in binary!
	0xcdd0  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x95740002a418 (0x5740002a418) in binary!
	0x8b78  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x8b6c0002a3f0 (0x36c0002a3f0) in binary!
	0xaed8  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa1840002a3c0 (0x1840002a3c0) in binary!
	0x1a8000000c  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xbc9c0002a398 (0x49c0002a398) in binary!
	0xa090  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x95140002a818 (0x5140002a818) in binary!
	0xa078  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x94fc0002a810 (0x4fc0002a810) in binary!
	0xa060  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x94e40002a808 (0x4e40002a808) in binary!
	0xa048  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x94cc0002a800 (0x4cc0002a800) in binary!
	0x8b30  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xb3c40002a7f8 (0x3c40002a7f8) in binary!
	0xae28  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xc3d00002a7f0 (0x3d00002a7f0) in binary!
	0xa000  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x94840002a7e8 (0x4840002a7e8) in binary!
	0x9fe8  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x946c0002a7e0 (0x46c0002a7e0) in binary!
	0x9fc0  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa2a00002a7d8 (0x2a00002a7d8) in binary!
	0x9fb8  @objc MapsSyncCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x943c0002a7d0 (0x43c0002a7d0) in binary!
	0x9fa0  @objc MapsSyncCachedCuratedCollection.(null) <stripped>

	// Swift methods
	0x220d0  class func MapsSyncCachedCuratedCollection.__allocating_init(curatedCollectionIdentifier:resultProviderIdentifier:) // init 
	0x22770  func <stripped> // getter 
	0x22800  func <stripped> // getter 
	0x22850  func <stripped> // getter 
	0x22890  func <stripped> // getter 
	0x228d0  func <stripped> // getter 
	0x22900  func <stripped> // getter 
	0x22940  func <stripped> // getter 
	0x22a30  func <stripped> // getter 
	0x22aa0  func <stripped> // getter 
	0x22ae0  func <stripped> // getter 
	0x22b70  func <stripped> // getter 
	0x22bd0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCachedCuratedCollection : MapsSyncMutableBaseItem {

	// Properties
	var _proxy : MapsSyncManagedCachedCuratedCollection

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbc9c0002a398 (0x49c0002a398) in binary!
	0xa090  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x95140002a818 (0x5140002a818) in binary!
	0xa078  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x94fc0002a810 (0x4fc0002a810) in binary!
	0xa060  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x94e40002a808 (0x4e40002a808) in binary!
	0xa048  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x94cc0002a800 (0x4cc0002a800) in binary!
	0x8b30  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xb3c40002a7f8 (0x3c40002a7f8) in binary!
	0xae28  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xc3d00002a7f0 (0x3d00002a7f0) in binary!
	0xa000  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x94840002a7e8 (0x4840002a7e8) in binary!
	0x9fe8  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x946c0002a7e0 (0x46c0002a7e0) in binary!
	0x9fc0  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa2a00002a7d8 (0x2a00002a7d8) in binary!
	0x9fb8  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x943c0002a7d0 (0x43c0002a7d0) in binary!
	0x9fa0  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x94240002a7c8 (0x4240002a7c8) in binary!
	0x9f78  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa2580002a7c0 (0x2580002a7c0) in binary!
	0xa040  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x79cfff8a698  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
	0x394fff8a920  @objc MapsSyncMutableCachedCuratedCollection.¿ø, <stripped>
	0x24cfff8adc8  @objc MapsSyncMutableCachedCuratedCollection.É«Ò1ˇËûà <stripped>
	0x224fff8ae30  @objc MapsSyncMutableCachedCuratedCollection.UHâÂHç%◊
 <stripped>
	0x1fcfff8b1b8  @objc MapsSyncMutableCachedCuratedCollection.\ˇ <stripped>
	0x2dc0002a1d8  @objc MapsSyncMutableCachedCuratedCollection._]√Hç=∆i <stripped>
WARNING: couldn't find address 0x2a71cfff8b388 (0x71cfff8b388) in binary!
	0x2ea0002a718  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x2a714fff8b3e0 (0x714fff8b3e0) in binary!
	0x33c0002a710  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x2a1acfff8b628 (0x1acfff8b628) in binary!
	0xe8000000c  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9f5c0002a050 (0x75c0002a050) in binary!
	0x9f50  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xac840002a028 (0x4840002a028) in binary!
	0xc22c  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9f2c0002a000 (0x72c0002a000) in binary!
	0x9f20  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9e4400029fd8 (0x64400029fd8) in binary!
	0x9e38  @objc MapsSyncMutableCachedCuratedCollection.(null) <stripped>

	// Swift methods
	0x23db0  func <stripped> // getter 
	0x23df0  func <stripped> // setter 
	0x23e50  func <stripped> // modifyCoroutine 
	0x23fe0  func <stripped> // getter 
	0x24190  func <stripped> // setter 
	0x24370  func <stripped> // modifyCoroutine 
	0x244d0  func <stripped> // getter 
	0x24510  func <stripped> // setter 
	0x24570  func <stripped> // modifyCoroutine 
	0x24660  func <stripped> // getter 
	0x246a0  func <stripped> // setter 
	0x24700  func <stripped> // modifyCoroutine 
	0x247f0  func <stripped> // getter 
	0x24830  func <stripped> // setter 
	0x248b0  func <stripped> // modifyCoroutine 
	0x24930  func <stripped> // getter 
	0x24970  func <stripped> // setter 
	0x24a00  func <stripped> // modifyCoroutine 
	0x24a80  func <stripped> // getter 
	0x24ac0  func <stripped> // setter 
	0x24b20  func <stripped> // modifyCoroutine 
	0x24d20  func <stripped> // getter 
	0x24f70  func <stripped> // setter 
	0x25160  func <stripped> // modifyCoroutine 
	0x25430  func <stripped> // getter 
	0x25470  func <stripped> // setter 
	0x254d0  func <stripped> // modifyCoroutine 
	0x25550  func <stripped> // getter 
	0x25590  func <stripped> // setter 
	0x255f0  func <stripped> // modifyCoroutine 
	0x257a0  func <stripped> // getter 
	0x25940  func <stripped> // setter 
	0x25b60  func <stripped> // modifyCoroutine 
	0x25ce0  func <stripped> // getter 
	0x25d40  func <stripped> // setter 
	0x25e10  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncHistoryEvDirectionsItem : MapsSyncHistoryDirectionsItem {

	// Properties
	var _requiredCharge : Double // +0x0 (0x8)
	var _vehicleIdentifier : String? // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9f5c0002a3a8 (0x75c0002a3a8) in binary!
	0xa2d7  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x9f440002a7a0 (0x7440002a7a0) in binary!
	0xcc18  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x93bc0002a260 (0x3bc0002a260) in binary!
	0x89c0  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x89b40002a238 (0x1b40002a238) in binary!
	0xad20  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0xbafc0002a978 (0x2fc0002a978) in binary!
	0x9fc0  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x71cfff8b388  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>
	0x714fff8b3e0  @objc MapsSyncHistoryEvDirectionsItem.æError <stripped>
	0x1acfff8b628  @objc MapsSyncHistoryEvDirectionsItem.Hâ«Ëj	 <stripped>
	0x75c0002a050  @objc MapsSyncHistoryEvDirectionsItem.LâˇË“	 <stripped>
WARNING: couldn't find address 0x2a03cfff8c2b8 (0x3cfff8c2b8) in binary!
	0x4840002a028  @objc MapsSyncHistoryEvDirectionsItem.(null) <stripped>

	// Swift methods
	0x26af0  func <stripped> // getter 
	0x26b60  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryEvDirectionsItem : MapsSyncMutableHistoryDirectionsItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryEvDirectionsItem // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xbadc0002a1d8 (0x2dc0002a1d8) in binary!
	0xa257  @objc MapsSyncMutableHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0xa2ea0002a718 (0x2ea0002a718) in binary!
	0x9eb8  @objc MapsSyncMutableHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x933c0002a710 (0x33c0002a710) in binary!
	0x9f70  @objc MapsSyncMutableHistoryEvDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0xe8000000c (0xe8000000c) in binary!
	0x3cfff8c2b8  @objc MapsSyncMutableHistoryEvDirectionsItem.(null) <stripped>
	0x14fff8c340  @objc MapsSyncMutableHistoryEvDirectionsItem.Ë'	 <stripped>
	0x7ecfff8c3c8  @objc MapsSyncMutableHistoryEvDirectionsItem.æ  <stripped>

	// Swift methods
	0x27630  func <stripped> // getter 
	0x27670  func <stripped> // setter 
	0x276f0  func <stripped> // modifyCoroutine 
	0x27820  func <stripped> // getter 
	0x27980  func <stripped> // setter 
	0x27b40  func <stripped> // modifyCoroutine 
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
WARNING: couldn't find address 0xa3f40002a018 (0x3f40002a018) in binary!
	0xabe8  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xa3ea00029ff0 (0x3ea00029ff0) in binary!
	0xabd0  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xa3d200029fc8 (0x3d200029fc8) in binary!
	0xabb8  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xa3ba00029fa0 (0x3ba00029fa0) in binary!
	0x9e58  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xab9400029f78 (0x39400029f78) in binary!
	0xab88  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xab7c00029f50 (0x37c00029f50) in binary!
	0x9e28  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xab5c00029f28 (0x35c00029f28) in binary!
	0x9d40  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xab4c00029f00 (0x34c00029f00) in binary!
	0x91b8  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x91ac0002a5c8 (0x1ac0002a5c8) in binary!
	0x9d10  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x9dd40002a010 (0x5d40002a010) in binary!
	0x18000000c  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x9cec00029fa8 (0x4ec00029fa8) in binary!
	0x78000000c  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xb8d400029fc8 (0xd400029fc8) in binary!
	0xaae0  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x8fc200029fa0 (0x7c200029fa0) in binary!
	0xaac8  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x8faa00029f78 (0x7aa00029f78) in binary!
	0x8e70  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x9d5c00029f98 (0x55c00029f98) in binary!
	0x58000000c  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0xba1600029fb8 (0x21600029fb8) in binary!
	0xc948  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x86f40002a048 (0x6f40002a048) in binary!
	0x9c50  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x9d1400029f50 (0x51400029f50) in binary!
	0x18000000c  @objc MapsSyncDataSession.(null) <stripped>
WARNING: couldn't find address 0x9c2c00029ee8 (0x42c00029ee8) in binary!
	0x248000000c  @objc MapsSyncDataSession.(null) <stripped>

	// Swift methods
	0x291b0  func <stripped> // method 
	0x294b0  func <stripped> // method 
	0x29700  func <stripped> // method 
	0x299d0  func <stripped> // method 
	0x29c00  func <stripped> // getter 
	0x29cb0  func <stripped> // getter 
	0x29d30  func <stripped> // method 
	0x2ae10  func <stripped> // method 
 }

 class MapsSync.MapsSyncCollectionQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb8d400029fc8 (0xd400029fc8) in binary!
	0xaae0  @objc MapsSyncCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x8fc200029fa0 (0x7c200029fa0) in binary!
	0xaac8  @objc MapsSyncCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x8faa00029f78 (0x7aa00029f78) in binary!
	0x8e70  @objc MapsSyncCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x9d5c00029f98 (0x55c00029f98) in binary!
	0x58000000c  @objc MapsSyncCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0xba1600029fb8 (0x21600029fb8) in binary!
	0xc948  @objc MapsSyncCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x86f40002a048 (0x6f40002a048) in binary!
	0x9c50  @objc MapsSyncCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x9d1400029f50 (0x51400029f50) in binary!
	0x18000000c  @objc MapsSyncCollectionQuery.(null) <stripped>

	// Swift methods
	0x2f7e0  class func MapsSyncCollectionQuery.__allocating_init(delegate:) // init 
	0x2f890  func <stripped> // method 
	0x2f8f0  func <stripped> // method 
	0x2fbe0  func <stripped> // method 
	0x2fd60  func <stripped> // method 
 }

 class MapsSync.MapsSyncObjectWrapper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _managedObjectID : NSManagedObjectID?
	var _entityName : String?
	var _editContext : NSManagedObjectContext?
	var _callbackQueue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xba1600029fb8 (0x21600029fb8) in binary!
	0xc948  @objc MapsSyncObjectWrapper.(null) <stripped>
WARNING: couldn't find address 0x86f40002a048 (0x6f40002a048) in binary!
	0x9c50  @objc MapsSyncObjectWrapper.(null) <stripped>
WARNING: couldn't find address 0x9d1400029f50 (0x51400029f50) in binary!
	0x18000000c  @objc MapsSyncObjectWrapper.(null) <stripped>
WARNING: couldn't find address 0x9c2c00029ee8 (0x42c00029ee8) in binary!
	0x248000000c  @objc MapsSyncObjectWrapper.(null) <stripped>
WARNING: couldn't find address 0x9c1400029d50 (0x41400029d50) in binary!
	0x9098  @objc MapsSyncObjectWrapper.(null) <stripped>

	// Swift methods
	0x316d0  class func <stripped> // init 
	0x319b0  func <stripped> // method 
	0x31190  func <stripped> // getter 
	0x311c0  func <stripped> // getter 
	0x311f0  func <stripped> // getter 
	0x31260  func <stripped> // method 
	0x313d0  func <stripped> // method 
 }

 enum MapsSync.MapsSyncObjectChangeType { }

 class MapsSync.MapsSyncFetchedResultsControllerDelegate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _baseQuery : MapsSyncBaseQuery // +0x8 (0x8)
	var _delegate : weak MapsSyncFetchedResultsChangeDelegate? // +0x10 (0x8)
	var _contentPredicate : NSPredicate? // +0x18 (0x8)
	var _otherWatchedContentPredicate : NSPredicate? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8ebc0002a388 (0x6bc0002a388) in binary!
	0x8eb0  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0x8ea400029b68 (0x6a400029b68) in binary!
	0x8e98  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0x7dfc00029b40 (0x5fc00029b40) in binary!
	0x99f0  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0x9ab400029cf0 (0x2b400029cf0) in binary!
	0xc8000000c  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0x9aeb0002a150 (0x2eb0002a150) in binary!
	0x9aed  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0xb5b40002a430 (0x5b40002a430) in binary!
	0x8440  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>
WARNING: couldn't find address 0x849c0002a168 (0x49c0002a168) in binary!
	0x9980  @objc MapsSyncFetchedResultsControllerDelegate.(null) <stripped>

	// Swift methods
	0x33e70  func <stripped> // setter 
	0x34480  func <stripped> // method 
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
WARNING: couldn't find address 0x9c1400029d50 (0x41400029d50) in binary!
	0x9098  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x9bfc00029d28 (0x3fc00029d28) in binary!
	0x9080  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x9be400029d00 (0x3e400029d00) in binary!
	0x9068  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x9bcc0002a140 (0x3cc0002a140) in binary!
	0x9050  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x9bb400029cc8 (0x3b400029cc8) in binary!
	0x9038  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8d7400029e60 (0x57400029e60) in binary!
	0x9c60  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0xa99400029c80 (0x19400029c80) in binary!
	0xa990  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0xa97c0002a490 (0x17c0002a490) in binary!
	0xb760  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0xa96c00029c48 (0x16c00029c48) in binary!
	0x8e4e  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0xa95400029c20 (0x15400029c20) in binary!
	0x8e36  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x841a0002a4d0 (0x41a0002a4d0) in binary!
	0xa930  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8f9c00029be0 (0x79c00029be0) in binary!
	0x9bd0  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8f840002a250 (0x7840002a250) in binary!
	0x8f78  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8f6c00029ba0 (0x76c00029ba0) in binary!
	0x8f60  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x7ec400029b78 (0x6c400029b78) in binary!
	0x8f48  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8f3c0002a428 (0x73c0002a428) in binary!
	0x8f30  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x7e940002a420 (0x6940002a420) in binary!
	0xb688  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x9a7c00029ee8 (0x27c00029ee8) in binary!
	0x9b40  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x514fff9ade8  @objc MapsSyncBaseQuery.(null) <stripped>
	0xfff9ae80  @objc MapsSyncBaseQuery.U	 <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x2c4fff98708  @objc MapsSyncBaseQuery.(null) <stripped>
	0x354fff98790  @objc MapsSyncBaseQuery.IãMÚAE ÚAM(MãE0PARË£…ˇˇHÉƒ]√f.Ñ <stripped>
	0x65cfff98858  @objc MapsSyncBaseQuery. <stripped>
	0xfff98a20  @objc MapsSyncBaseQuery.	 <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x424fff9cf98  @objc MapsSyncBaseQuery.(null) <stripped>
	0x404fff9d050  @objc MapsSyncBaseQuery.m∞LâÔ1ˆHâ⁄Lâ·Mâ¯Ë‘	 <stripped>
	0x1ccfff9d0e8  @objc MapsSyncBaseQuery.ƒH√f.Ñ <stripped>
	0x4acfff9d2d0  @objc MapsSyncBaseQuery.Ë{ªˇˇæH <stripped>
	0x484fff9d488  @objc MapsSyncBaseQuery.çÍ‡ <stripped>
	0x1ecfff9d690  @objc MapsSyncBaseQuery.(Hç®_	 <stripped>
	0x53400029c30  @objc MapsSyncBaseQuery. <stripped>
WARNING: couldn't find address 0x2a0f4fff9dd30 (0xf4fff9dd30) in binary!
	0x4bc0002a0f0  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x2a14cfff9dde8 (0x14cfff9dde8) in binary!
	0x3e00002a148  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x29c04fff9df10 (0x404fff9df10) in binary!
	0x18000000c  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x8bea00029980 (0x3ea00029980) in binary!
	0x28000000c  @objc MapsSyncBaseQuery.(null) <stripped>
WARNING: couldn't find address 0x98cc00029d38 (0xcc00029d38) in binary!
	0x9990  @objc MapsSyncBaseQuery.(null) <stripped>

	// Swift methods
	0x32b70  func <stripped> // getter 
	0x32bb0  func <stripped> // setter 
	0x32c00  func <stripped> // modifyCoroutine 
	0x33d60  func <stripped> // method 
	0x35960  class func <stripped> // getter 
	0x32cd0  func <stripped> // method 
	0x32d40  func <stripped> // method 
	0x32de0  func <stripped> // method 
	0x32e00  func <stripped> // method 
	0x32e20  func <stripped> // method 
	0x32ea0  func <stripped> // method 
	0x32f30  func <stripped> // method 
	0x33470  func <stripped> // method 
	0x33650  func <stripped> // method 
	0x336b0  func <stripped> // method 
	0x33af0  func <stripped> // method 
 }

 class MapsSync.MapsSyncDataQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery // +0x58 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb65c00029d50 (0x65c00029d50) in binary!
	0x8c28  @objc MapsSyncDataQuery.(null) <stripped>
WARNING: couldn't find address 0x9b1400029d50 (0x31400029d50) in binary!
	0x78000000c  @objc MapsSyncDataQuery.(null) <stripped>
WARNING: couldn't find address 0x8ebc0002a388 (0x6bc0002a388) in binary!
	0x8eb0  @objc MapsSyncDataQuery.(null) <stripped>

	// Swift methods
	0x37450  class func MapsSyncDataQuery.__allocating_init(delegate:) // init 
 }

 class MapsSync.MapsSyncCuratedCollection : MapsSyncBaseItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _curatedCollectionIdentifier : uº // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _resultProviderIdentifier : ô¡ // +0x0 (0x4)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9aeb0002a150 (0x2eb0002a150) in binary!
	0x9aed  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xb5b40002a430 (0x5b40002a430) in binary!
	0x8440  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x849c0002a168 (0x49c0002a168) in binary!
	0x9980  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xc66400029de0 (0x66400029de0) in binary!
	0x8e08  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x840c00029c98 (0x40c00029c98) in binary!
	0x8400  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xa76c00029c70 (0x76c00029c70) in binary!
	0xa760  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0xf4fff9dd30  @objc MapsSyncCuratedCollection.(null) <stripped>
	0x14cfff9dde8  @objc MapsSyncCuratedCollection.∫ <stripped>
	0x404fff9df10  @objc MapsSyncCuratedCollection.ﬂË~	 <stripped>
	0x3ea00029980  @objc MapsSyncCuratedCollection. <stripped>
WARNING: couldn't find address 0xfffa0100 (0xfffa0100) in binary!
	0xcc00029d38  @objc MapsSyncCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x29bccfffa0228 (0x3ccfffa0228) in binary!
	0x18000000c  @objc MapsSyncCuratedCollection.(null) <stripped>

	// Swift methods
	0x39500  class func MapsSyncCuratedCollection.__allocating_init(curatedCollectionIdentifier:resultProviderIdentifier:) // init 
	0x398a0  func <stripped> // getter 
	0x398d0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCuratedCollection : MapsSyncMutableBaseItem {

	// Properties
	var _proxy : MapsSyncManagedCuratedCollection // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb53400029c30 (0x53400029c30) in binary!
	0x8428  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0xacbc0002a0f0 (0x4bc0002a0f0) in binary!
	0x9900  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x9be00002a148 (0x3e00002a148) in binary!
	0x99c8  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa0100  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x3ccfffa0228  @objc MapsSyncMutableCuratedCollection.(null) <stripped>
	0xac00029b68  @objc MapsSyncMutableCuratedCollection.â«Ë√	 <stripped>

	// Swift methods
	0x3a5e0  func <stripped> // getter 
	0x3a620  func <stripped> // setter 
	0x3a6a0  func <stripped> // modifyCoroutine 
	0x3a720  func <stripped> // getter 
	0x3a760  func <stripped> // setter 
	0x3a7e0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncBatch : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x98cc00029d38 (0xcc00029d38) in binary!
	0x9990  @objc MapsSyncBatch.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa3fb8  @objc MapsSyncBatch.(null) <stripped>
 }

 class MapsSync.MapsSyncReviewedPlaceQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb49400029b88 (0x49400029b88) in binary!
	0xa6a0  @objc MapsSyncReviewedPlaceQuery.(null) <stripped>
WARNING: couldn't find address 0x8b8200029b60 (0x38200029b60) in binary!
	0xa688  @objc MapsSyncReviewedPlaceQuery.(null) <stripped>
WARNING: couldn't find address 0x8b6a00029b38 (0x36a00029b38) in binary!
	0x8a30  @objc MapsSyncReviewedPlaceQuery.(null) <stripped>
WARNING: couldn't find address 0x991c00029b58 (0x11c00029b58) in binary!
	0x18000000c  @objc MapsSyncReviewedPlaceQuery.(null) <stripped>
WARNING: couldn't find address 0x8a0c00029c70 (0x20c00029c70) in binary!
	0x18000000c  @objc MapsSyncReviewedPlaceQuery.(null) <stripped>
WARNING: couldn't find address 0x89f400029c58 (0x1f400029c58) in binary!
	0xa8000000c  @objc MapsSyncReviewedPlaceQuery.(null) <stripped>
	0x97f8  @objc MapsSyncReviewedPlaceQuery.â∆ËK <stripped>

	// Swift methods
	0x3fe50  class func MapsSyncReviewedPlaceQuery.__allocating_init(delegate:) // init 
	0x3ff00  func <stripped> // method 
	0x3ff60  func <stripped> // method 
	0x40250  func <stripped> // method 
	0x403d0  func <stripped> // method 
 }

 class MapsSync.MapsSyncManagedCachedUserReview : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8a0c00029c70 (0x20c00029c70) in binary!
	0x18000000c  @objc MapsSyncManagedCachedUserReview.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedMixinMapItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x89f400029c58 (0x1f400029c58) in binary!
	0xa8000000c  @objc MapsSyncManagedMixinMapItem.(null) <stripped>
 }

 class MapsSync.MapsSyncPredicate : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class MapsSync.MapsSyncHistoryTransitItem : MapsSyncHistoryItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _transitLineStorage : aΩ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _muid : uº // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x97f8  @objc MapsSyncHistoryTransitItem.â∆ËK <stripped>
WARNING: couldn't find address 0x82ec00029bd0 (0x2ec00029bd0) in binary!
	0xc4c0  @objc MapsSyncHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x8c6400029b08 (0x46400029b08) in binary!
	0x8268  @objc MapsSyncHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x825c00029ae0 (0x25c00029ae0) in binary!
	0xa5c8  @objc MapsSyncHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0xb3a40002a220 (0x3a40002a220) in binary!
	0x9868  @objc MapsSyncHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0xcfffa58c0  @objc MapsSyncHistoryTransitItem.(null) <stripped>
	0x344fffa5ab8  @objc MapsSyncHistoryTransitItem.–Hâ«ˇ&æ
 <stripped>
	0x254fffa5e40  @objc MapsSyncHistoryTransitItem.≥á <stripped>
	0x10c00029b70  @objc MapsSyncHistoryTransitItem.\	 <stripped>
WARNING: couldn't find address 0xfffa6540 (0xfffa6540) in binary!
	0xf400029b58  @objc MapsSyncHistoryTransitItem.(null) <stripped>

	// Swift methods
	0x41820  func <stripped> // getter 
	0x41870  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryTransitItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryTransitItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb38400029a80 (0x38400029a80) in binary!
	0x9778  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x8bfc000297f8 (0x3fc000297f8) in binary!
	0x8260  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0xaaf400029c28 (0x2f400029c28) in binary!
	0x9818  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa6540  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa6738  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa67a0  @objc MapsSyncMutableHistoryTransitItem.(null) <stripped>

	// Swift methods
	0x423e0  func <stripped> // getter 
	0x42510  func <stripped> // setter 
	0x42690  func <stripped> // modifyCoroutine 
	0x42800  func <stripped> // getter 
	0x42840  func <stripped> // setter 
	0x428c0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedHistoryPlaceItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x890c00029b70 (0x10c00029b70) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryPlaceItem.(null) <stripped>
 }

 class MapsSync.MapsSyncGeo : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class MapsSync.MapsSyncGeoUtil {
 class MapsSync.MapsSyncManagedFavoriteItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x88f400029b58 (0xf400029b58) in binary!
	0x18000000c  @objc MapsSyncManagedFavoriteItem.(null) <stripped>
 }

 class MapsSync.MapsSyncDataBase_initial : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x43540  func <stripped> // getter 
	0x43a40  func <stripped> // getter 
	0x43b70  func <stripped> // getter 
 }

 class MapsSync.MapsSyncCollectionTransitItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb2d4000299c8 (0x2d4000299c8) in binary!
	0xa4e0  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x89c2000299a0 (0x1c2000299a0) in binary!
	0xa4c8  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x89aa00029978 (0x1aa00029978) in binary!
	0x8870  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x975c00029998 (0x75c00029998) in binary!
	0x18000000c  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x884c00029ab0 (0x4c00029ab0) in binary!
	0x18000000c  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x883400029a98 (0x3400029a98) in binary!
	0x18000000c  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>
WARNING: couldn't find address 0x881c00029a80 (0x1c00029a80) in binary!
	0x18000000c  @objc MapsSyncCollectionTransitItemQuery.(null) <stripped>

	// Swift methods
	0x43e40  class func MapsSyncCollectionTransitItemQuery.__allocating_init(delegate:) // init 
	0x43ef0  func <stripped> // method 
	0x43f50  func <stripped> // method 
	0x44240  func <stripped> // method 
	0x443c0  func <stripped> // method 
 }

 class MapsSync.MapsSyncManagedHistoryRideShareItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x884c00029ab0 (0x4c00029ab0) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryRideShareItem.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedHistoryDirectionsItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x883400029a98 (0x3400029a98) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryDirectionsItem.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedHistoryItem : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x881c00029a80 (0x1c00029a80) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryItem.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedCuratedCollection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
	0xc8000000c  @objc MapsSyncManagedCuratedCollection.ÈˇˇË¬ <stripped>
 }

 class MapsSync.MapsSyncCollectionItem : MapsSyncBaseItem {

	// Properties
	var _collections : MapsSyncCollection // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb21400029928 (0x21400029928) in binary!
	0xb3aa  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x8a8c00029680 (0x28c00029680) in binary!
	0xb1f0  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0xa3f400029878 (0x3f400029878) in binary!
	0x95d8  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0xc2ac00029a28 (0x2ac00029a28) in binary!
	0x8a50  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x8054000298e0 (0x54000298e0) in binary!
	0x8048  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0xa3b4000298b8 (0x3b4000298b8) in binary!
	0x9660  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x2a4fffaa818  @objc MapsSyncCollectionItem.(null) <stripped>
	0x64fffaa910  @objc MapsSyncCollectionItem.d	 <stripped>
	0x71c00029980  @objc MapsSyncCollectionItem.4 <stripped>
WARNING: couldn't find address 0xfffae520 (0xfffae520) in binary!
	0x12c00029830  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0xfffaead8 (0xfffaead8) in binary!
	0x51400029960  @objc MapsSyncCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x299bcfffae560 (0x1bcfffae560) in binary!
	0x4fc00029ee8  @objc MapsSyncCollectionItem.(null) <stripped>

	// Swift methods
	0x46080  class func MapsSyncCollectionItem.__allocating_init(collection:) // init 
	0x45be0  func <stripped> // getter 
	0x45bf0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableCollectionItem : MapsSyncMutableBaseItem {

	// Properties
	var _proxyCollectionItem : MapsSyncManagedCollectionItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb17c00029878 (0x17c00029878) in binary!
	0x9570  @objc MapsSyncMutableCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x89f400029f38 (0x1f400029f38) in binary!
	0x9628  @objc MapsSyncMutableCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffae520  @objc MapsSyncMutableCollectionItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffaead8  @objc MapsSyncMutableCollectionItem.(null) <stripped>

	// Swift methods
	0x45cc0  func <stripped> // getter 
	0x45dc0  func <stripped> // setter 
	0x45ee0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedContactHandle : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x871c00029980 (0x71c00029980) in binary!
	0x18000000c  @objc MapsSyncManagedContactHandle.(null) <stripped>
 }

 class MapsSync.MapsSyncHistoryPlaceItem : MapsSyncHistoryItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapItemStorage : aΩ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _supersededSearchId : æ // +0x0 (0x0)
	var _latitude : NSNumber? // +0x0 (0x8)
	var _longitude : NSNumber? // +0x0 (0x8)
	var _muid : NSNumber? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x951400029960 (0x51400029960) in binary!
	0x9508  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x94fc00029ee8 (0x4fc00029ee8) in binary!
	0x94f0  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x94e400029a10 (0x4e400029a10) in binary!
	0x94d8  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xc1ac00029928 (0x1ac00029928) in binary!
	0x8950  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x7f54000297e0 (0x754000297e0) in binary!
	0x7f48  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xa2b4000297b8 (0x2b4000297b8) in binary!
	0xb090  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x955400029790 (0x55400029790) in binary!
	0x68000000c  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xb06c00029768 (0x6c00029768) in binary!
	0x9460  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x88e400029910 (0xe400029910) in binary!
	0x9448  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x88cc00029e30 (0xcc00029e30) in binary!
	0x9500  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x60cfffb0ba8  @objc MapsSyncHistoryPlaceItem.(null) <stripped>
	0x614fffb0fd0  @objc MapsSyncHistoryPlaceItem.Ëc	 <stripped>
	0x3cfffb1038  @objc MapsSyncHistoryPlaceItem. <stripped>

	// Swift methods
	0x4b410  func <stripped> // getter 
	0x4b570  func <stripped> // getter 
	0x4b5e0  func <stripped> // getter 
	0x4b640  func <stripped> // getter 
	0x4b6a0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryPlaceItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryPlaceItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xb06c00029768 (0x6c00029768) in binary!
	0x9460  @objc MapsSyncMutableHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x88e400029910 (0xe400029910) in binary!
	0x9448  @objc MapsSyncMutableHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0x88cc00029e30 (0xcc00029e30) in binary!
	0x9500  @objc MapsSyncMutableHistoryPlaceItem.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x60cfffb0ba8  @objc MapsSyncMutableHistoryPlaceItem.(null) <stripped>
	0x614fffb0fd0  @objc MapsSyncMutableHistoryPlaceItem.Ëc	 <stripped>
	0x3cfffb1038  @objc MapsSyncMutableHistoryPlaceItem. <stripped>

	// Swift methods
	0x4c640  func <stripped> // getter 
	0x4c810  func <stripped> // setter 
	0x4cc90  func <stripped> // modifyCoroutine 
	0x4cd70  func <stripped> // getter 
	0x4cf00  func <stripped> // setter 
	0x4d0d0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncHistorySearchItem : MapsSyncHistoryItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _geoMapRegion : aΩ // +0x0 (0x10)
	var _language : String? // +0x0 (0x10)
	var _locationDisplay : String? // +0x0 (0x10)
	var _query : String? // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x941c00029868 (0x41c00029868) in binary!
	0x9410  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x940400029e10 (0x40400029e10) in binary!
	0x93f8  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x93ec00029e18 (0x3ec00029e18) in binary!
	0xc0c0  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x886400029708 (0x6400029708) in binary!
	0x7e68  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x7e5c000296e0 (0x65c000296e0) in binary!
	0xa1c8  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0xafa400029e20 (0x7a400029e20) in binary!
	0x9468  @objc MapsSyncHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x574fffb1de0  @objc MapsSyncHistorySearchItem.(null) <stripped>
	0x56cfffb1ff8  @objc MapsSyncHistorySearchItem.AUATSHÉÏxLâm–HâçpˇˇˇHâUÄHâµxˇˇˇIâˇH«Eê <stripped>
	0x564fffb21f0  @objc MapsSyncHistorySearchItem.√êêêêêêêêêêêêêêêUHâÂAWAVAUATSHÉÏxLâm–HâçpˇˇˇHâUÄHâµxˇˇˇIâˇH«Eê <stripped>
	0x55cfffb2368  @objc MapsSyncHistorySearchItem.Ñ <stripped>
	0x624fffb2630  @objc MapsSyncHistorySearchItem.˙LâÒË˜	 <stripped>
	0x304000295c0  @objc MapsSyncHistorySearchItem. <stripped>

	// Swift methods
	0x4dc50  func <stripped> // getter 
	0x4dd20  func <stripped> // getter 
	0x4dd60  func <stripped> // getter 
	0x4ddf0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistorySearchItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistorySearchItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xaf8400029680 (0x78400029680) in binary!
	0x9378  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x87fc00029d70 (0x7fc00029d70) in binary!
	0x9360  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x87e400029d68 (0x7e400029d68) in binary!
	0x9348  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x87cc00029d60 (0x7cc00029d60) in binary!
	0x9330  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x87b400029d58 (0x7b400029d58) in binary!
	0x93e8  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffb3930  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x5ccfffb2f98  @objc MapsSyncMutableHistorySearchItem.(null) <stripped>
	0x5a4fffb32e0  @objc MapsSyncMutableHistorySearchItem.ã-B≥
 <stripped>
	0x574fffb37d8  @objc MapsSyncMutableHistorySearchItem.»Lçm¿ø. <stripped>
	0xfffb39f0  @objc MapsSyncMutableHistorySearchItem. <stripped>

	// Swift methods
	0x4ec80  func <stripped> // getter 
	0x4ee00  func <stripped> // setter 
	0x4ef40  func <stripped> // modifyCoroutine 
	0x4efb0  func <stripped> // getter 
	0x4eff0  func <stripped> // setter 
	0x4f050  func <stripped> // modifyCoroutine 
	0x4f140  func <stripped> // getter 
	0x4f180  func <stripped> // setter 
	0x4f1e0  func <stripped> // modifyCoroutine 
	0x4f390  func <stripped> // getter 
	0x4f530  func <stripped> // setter 
	0x4f750  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncCollectionPlaceItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xaeec000295e0 (0x6ec000295e0) in binary!
	0xa0f8  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0x85da000295b8 (0x5da000295b8) in binary!
	0xa0e0  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0x85c200029590 (0x5c200029590) in binary!
	0x8488  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0x9374000295b0 (0x374000295b0) in binary!
	0x18000000c  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0xae8c00029510 (0x68c00029510) in binary!
	0x18000000c  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0x927400029530 (0x27400029530) in binary!
	0x88000000c  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>
WARNING: couldn't find address 0xae5c00029550 (0x65c00029550) in binary!
	0xa068  @objc MapsSyncCollectionPlaceItemQuery.(null) <stripped>

	// Swift methods
	0x4fd70  class func MapsSyncCollectionPlaceItemQuery.__allocating_init(delegate:) // init 
	0x4fe20  func <stripped> // method 
	0x4fe80  func <stripped> // method 
	0x50170  func <stripped> // method 
	0x502f0  func <stripped> // method 
 }

 class MapsSync.MapsSyncFavoriteItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xae5c00029550 (0x65c00029550) in binary!
	0xa068  @objc MapsSyncFavoriteItemQuery.(null) <stripped>
WARNING: couldn't find address 0x854a00029528 (0x54a00029528) in binary!
	0xa050  @objc MapsSyncFavoriteItemQuery.(null) <stripped>
WARNING: couldn't find address 0x853200029500 (0x53200029500) in binary!
	0xae20  @objc MapsSyncFavoriteItemQuery.(null) <stripped>
WARNING: couldn't find address 0x83ec000294d8 (0x3ec000294d8) in binary!
	0x92d8  @objc MapsSyncFavoriteItemQuery.(null) <stripped>
WARNING: couldn't find address 0x138000000c (0x138000000c) in binary!
	0x254fffb77c0  @objc MapsSyncFavoriteItemQuery.(null) <stripped>
	0x61cfffb7e78  @objc MapsSyncFavoriteItemQuery.œ
 <stripped>
	0x154fffb8220  @objc MapsSyncFavoriteItemQuery.UHâÂ]Èf˚ˇˇfD <stripped>
	0x15cfffb82e8  @objc MapsSyncFavoriteItemQuery.ˇˇfD <stripped>

	// Swift methods
	0x51600  class func MapsSyncFavoriteItemQuery.__allocating_init(delegate:) // init 
	0x516b0  func <stripped> // method 
	0x51760  func <stripped> // method 
	0x51a50  func <stripped> // method 
	0x51bd0  func <stripped> // method 
 }

 class MapsSync.MapsSyncDataBase_0_0_1 : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x53d90  func <stripped> // method 
	0x54420  func <stripped> // getter 
 }

 class MapsSync.MapsSyncCollection : MapsSyncBaseItem {

	// Properties
	var _collectionDescription : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _image : aΩ // +0x0 (0x10)
	var _imageUrl : String? // +0x0 (0x10)
	var _title : String? // +0x0 (0x10)
	var _places : MapsSyncCollectionItem // +0x0 (0x8)
	var _placesUnstored : MapsSyncCollectionItem // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x91f400029268 (0x1f400029268) in binary!
	0x8678  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0xaf7e00029520 (0x77e00029520) in binary!
	0x91d0  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x91c400029950 (0x1c400029950) in binary!
	0x91b8  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x91ac00029958 (0x1ac00029958) in binary!
	0x91a0  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x919400029bd8 (0x19400029bd8) in binary!
	0xbe68  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0xbe5c000291e0 (0x65c000291e0) in binary!
	0x8600  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x85f400029498 (0x5f400029498) in binary!
	0x7bf8  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x7bec00029470 (0x3ec00029470) in binary!
	0x9f58  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x9f4c000291d8 (0x74c000291d8) in binary!
	0xad28  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x91ec00029428 (0x1ec00029428) in binary!
	0xe8000000c  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0xad0400029400 (0x50400029400) in binary!
	0x90f8  @objc MapsSyncCollection.(null) <stripped>
	0x90e0  _block_copy_helper.70
WARNING: couldn't find address 0x856400029878 (0x56400029878) in binary!
	0x90c8  @objc MapsSyncCollection.(null) <stripped>
	0x90b0  _block_copy_helper.44
WARNING: couldn't find address 0x853400029868 (0x53400029868) in binary!
	0x9098  @objc MapsSyncCollection.(null) <stripped>
	0x8510  dispatch thunk of MapsSyncCollectionPlaceItem.latitude.getter
WARNING: couldn't find address 0x8504000290b0 (0x504000290b0) in binary!
	0x9138  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffbd530  @objc MapsSyncCollection.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x7d4fffc08e8  @objc MapsSyncCollection.(null) <stripped>

	// Swift methods
	0x551b0  func <stripped> // getter 
	0x55240  func <stripped> // getter 
	0x55290  func <stripped> // getter 
	0x55320  func <stripped> // getter 
	0x55390  func <stripped> // getter 
	0x55be0  func <stripped> // method 
 }

 class MapsSync.MapsSyncMutableCollection : MapsSyncMutableBaseItem {

	// Properties
	var _proxyCollection : MapsSyncManagedCollection

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xad0400029400 (0x50400029400) in binary!
	0x90f8  @objc MapsSyncMutableCollection.(null) <stripped>
	0x90e0  _block_copy_helper.70
WARNING: couldn't find address 0x856400029878 (0x56400029878) in binary!
	0x90c8  @objc MapsSyncMutableCollection.(null) <stripped>
	0x90b0  _block_copy_helper.44
WARNING: couldn't find address 0x853400029868 (0x53400029868) in binary!
	0x9098  @objc MapsSyncMutableCollection.(null) <stripped>
	0x8510  dispatch thunk of MapsSyncCollectionPlaceItem.latitude.getter
WARNING: couldn't find address 0x8504000290b0 (0x504000290b0) in binary!
	0x9138  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffbd530  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x7d4fffc08e8  @objc MapsSyncMutableCollection.(null) <stripped>
	0x1c00029050  @objc MapsSyncMutableCollection.UHâÂ]È∆ÁˇˇfD <stripped>
WARNING: couldn't find address 0x2903cfffc0ad8 (0x3cfffc0ad8) in binary!
	0x29028  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x29014fffc0c50 (0x14fffc0c50) in binary!
	0x7ec00029000  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x28fecfffc0c78 (0x7ecfffc0c78) in binary!
	0x26c00028fd8  @objc MapsSyncMutableCollection.(null) <stripped>
WARNING: couldn't find address 0x28fc4fffc0df0 (0x7c4fffc0df0) in binary!
	0x7bc00028fb0  @objc MapsSyncMutableCollection.(null) <stripped>

	// Swift methods
	0x57960  func <stripped> // getter 
	0x579a0  func <stripped> // setter 
	0x57a00  func <stripped> // modifyCoroutine 
	0x57b90  func <stripped> // getter 
	0x57d40  func <stripped> // setter 
	0x57f20  func <stripped> // modifyCoroutine 
	0x58080  func <stripped> // getter 
	0x580c0  func <stripped> // setter 
	0x58120  func <stripped> // modifyCoroutine 
	0x582d0  func <stripped> // getter 
	0x58470  func <stripped> // setter 
	0x58690  func <stripped> // modifyCoroutine 
	0x58890  func <stripped> // getter 
	0x58a40  func <stripped> // setter 
	0x58ba0  func <stripped> // modifyCoroutine 
	0x58d10  func <stripped> // method 
	0x58e80  func <stripped> // method 
 }

 class MapsSync.MapsSyncManagedHistorySearchItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x822c00029490 (0x22c00029490) in binary!
	0x28000000c  @objc MapsSyncManagedHistorySearchItem.(null) <stripped>
 }

 class MapsSync.MapsSyncBaseItem : MapsSyncObjectWrapper {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _identifier : æ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _createTime : Gµ // +0xb5000 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _modificationTime : Gµ // +0x5 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _positionIndex : ≥Æ // +0x13 (0x8)
	var _editBlocks : MapsSyncMutableBaseItem // +0x65745f5f (0x8)
	var _readContext : NSManagedObjectContext? // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _saveObjectSignpost : üØ // +0x45545f5f (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x901c00029050 (0x1c00029050) in binary!
	0x84a0  @objc MapsSyncBaseItem.(null) <stripped>
	0x8488  @objc MapsSyncBaseItem. <stripped>
	0x8470  dispatch thunk of MapsSyncCollectionPlaceItem.customName.getter
WARNING: couldn't find address 0x7a6c00028fd8 (0x26c00028fd8) in binary!
	0xad54  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8fbc00028fb0 (0x7bc00028fb0) in binary!
	0x8440  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0xaba400029a20 (0x3a400029a20) in binary!
	0xad3a  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8f8c000293f8 (0x78c000293f8) in binary!
	0x8f80  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0xbc54000292b0 (0x454000292b0) in binary!
	0x8f68  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8f5c00029380 (0x75c00029380) in binary!
	0x8f50  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x79dc00029348 (0x1dc00029348) in binary!
	0x83c8  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x83bc00028f10 (0x3bc00028f10) in binary!
	0xacd0  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x9d2c00029230 (0x52c00029230) in binary!
	0x9d20  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0xacca00028ec8 (0x4ca00028ec8) in binary!
	0xbbd0  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x9cfc00028f88 (0x4fc00028f88) in binary!
	0x7978  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x796c000291f0 (0x16c000291f0) in binary!
	0xaac0  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8344000291e8 (0x344000291e8) in binary!
	0xaaa8  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8e9c00028e50 (0x69c00028e50) in binary!
	0x8f60  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x60cfffc3a38  @objc MapsSyncBaseItem.(null) <stripped>
	0x28cfffc3ad0  @objc MapsSyncBaseItem.	 <stripped>
	0x264fffc3b48  @objc MapsSyncBaseItem.HÖ¿tY√Hã=⁄ƒ
 <stripped>
	0x22cfffc3d70  @objc MapsSyncBaseItem.“[√f.Ñ <stripped>
	0x27cfffc40f8  @objc MapsSyncBaseItem.€
 <stripped>
	0xfffc43f0  @objc MapsSyncBaseItem. <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc6058  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc6380  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffc6408  @objc MapsSyncBaseItem.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x7e4fffc7da0  @objc MapsSyncBaseItem.(null) <stripped>
	0xfffc9188  @objc MapsSyncBaseItem.â_0Hãûö <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x5d4fffcbe70  @objc MapsSyncBaseItem.(null) <stripped>
	0x1acfffcc128  @objc MapsSyncBaseItem.ã%bî <stripped>
	0x64fffcc440  @objc MapsSyncBaseItem.UHâÂHÉÏIã}IãuIãU IãM(MãE0MãM8IãE@Hâ$Ëì‹ˇˇHÉƒ]√f.Ñ <stripped>
	0x3cfffcc4a8  @objc MapsSyncBaseItem. <stripped>
	0x14fffcc770  @objc MapsSyncBaseItem.µ	 <stripped>
	0xf400028ff0  @objc MapsSyncBaseItem.HcH˛øˇ <stripped>

	// Swift methods
	0x5a680  func <stripped> // method 
	0x5a7e0  func <stripped> // getter 
	0x5a820  func <stripped> // getter 
	0x5a840  func <stripped> // getter 
	0x5a8c0  func <stripped> // getter 
	0x5d300  func <stripped> // method 
	0x5a8e0  func <stripped> // method 
	0x5cfb0  func <stripped> // method 
	0x5abe0  func <stripped> // method 
	0x5add0  func <stripped> // method 
	0x5afe0  func <stripped> // method 
	0x5b660  func <stripped> // method 
	0x60900  func <stripped> // method 
	0x60920  func <stripped> // method 
	0x5bb00  func <stripped> // method 
	0x5cad0  func <stripped> // method 
	0x5bcb0  func <stripped> // method 
 }

 class MapsSync.MapsSyncMutableBaseItem : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _proxyObject : NSManagedObject

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xaa7c00029178 (0x27c00029178) in binary!
	0x8e70  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8e6400028df8 (0x66400028df8) in binary!
	0x8e58  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x82dc00029278 (0x2dc00029278) in binary!
	0x8e40  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x82c400029250 (0x2c400029250) in binary!
	0x78c0  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0xaba800029218 (0x3a800029218) in binary!
	0x8e10  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x8ed400029110 (0x6d400029110) in binary!
	0x18000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x7fc400029228 (0x7c400029228) in binary!
	0x18000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x7fac00029210 (0x7ac00029210) in binary!
	0x18000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x7f94000291f8 (0x794000291f8) in binary!
	0x38000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x808400028ff8 (0x8400028ff8) in binary!
	0x7ce8  @objc MapsSyncMutableBaseItem.(null) <stripped>
WARNING: couldn't find address 0x809200028fd0 (0x9200028fd0) in binary!
	0xa8000000c  @objc MapsSyncMutableBaseItem.(null) <stripped>

	// Swift methods
	0x60cb0  class func MapsSyncMutableBaseItem.__allocating_init(proxyObject:) // init 
	0x5bdc0  func <stripped> // getter 
	0x5bdf0  func <stripped> // getter 
	0x5bf20  func <stripped> // setter 
	0x5c020  func <stripped> // modifyCoroutine 
	0x5c3b0  func <stripped> // getter 
	0x5c460  func <stripped> // setter 
	0x5c510  func <stripped> // modifyCoroutine 
	0x5c760  func <stripped> // getter 
	0x5c810  func <stripped> // setter 
	0x5c8c0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedHistoryEvDirectionsItem : MapsSyncManagedHistoryDirectionsItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7fc400029228 (0x7c400029228) in binary!
	0x18000000c  @objc MapsSyncManagedHistoryEvDirectionsItem.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedCollection : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7fac00029210 (0x7ac00029210) in binary!
	0x18000000c  @objc MapsSyncManagedCollection.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedCollectionTransitItem : MapsSyncManagedCollectionItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7f94000291f8 (0x794000291f8) in binary!
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
	var lastNotified : uº
	var lock : NSLock

	// Swift methods
	0x67800  func <stripped> // getter 
	0x67830  func <stripped> // setter 
	0x67870  func <stripped> // modifyCoroutine 
	0x678a0  func <stripped> // method 
	0x679f0  func <stripped> // method 
	0x68240  func <stripped> // method 
	0x68520  func <stripped> // method 
 }

 class MapsSync.MapsSyncHistoryDirectionsItem : MapsSyncHistoryItem {

	// Properties
	var _navigationInterrupted : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _routeRequestStorage : aΩ // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8d74000291c0 (0x574000291c0) in binary!
	0x9b78  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x8d5c000295d0 (0x55c000295d0) in binary!
	0xba30  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x81d400029078 (0x1d400029078) in binary!
	0x77d8  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x77cc00029050 (0x7cc00029050) in binary!
	0x9b38  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0xa91400029790 (0x11400029790) in binary!
	0x8dd8  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x554fffcc8b0  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>
	0x544fffcc968  @objc MapsSyncHistoryDirectionsItem.â·Mâ¯Ë‘	 <stripped>
	0x7c4fffcca10  @objc MapsSyncHistoryDirectionsItem.ƒHâﬂËe"	 <stripped>
	0x4a400029758  @objc MapsSyncHistoryDirectionsItem.HÖ¿tY√Hç=™} <stripped>
WARNING: couldn't find address 0x2975cfffccdf0 (0x75cfffccdf0) in binary!
	0x48c00029760  @objc MapsSyncHistoryDirectionsItem.(null) <stripped>

	// Swift methods
	0x68da0  func <stripped> // getter 
	0x68dc0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryDirectionsItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryDirectionsItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa8f400028ff0 (0xf400028ff0) in binary!
	0x9af8  @objc MapsSyncMutableHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0xb0a000029780 (0xa000029780) in binary!
	0x8cd0  @objc MapsSyncMutableHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x815400029770 (0x15400029770) in binary!
	0x8d88  @objc MapsSyncMutableHistoryDirectionsItem.(null) <stripped>
WARNING: couldn't find address 0x1b8000000c (0x1b8000000c) in binary!
	0x75cfffccdf0  @objc MapsSyncMutableHistoryDirectionsItem.(null) <stripped>
	0x764fffcce58  @objc MapsSyncMutableHistoryDirectionsItem.s(HâﬂLâÓË=	 <stripped>
	0x76cfffccec0  @objc MapsSyncMutableHistoryDirectionsItem.Hâ√(ÊT	 <stripped>

	// Swift methods
	0x68f00  func <stripped> // getter 
	0x68f20  func <stripped> // setter 
	0x68f50  func <stripped> // modifyCoroutine 
	0x68fb0  func <stripped> // getter 
	0x690f0  func <stripped> // setter 
	0x691e0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncVehicle : MapsSyncBaseItem {

	// Properties
	var _colorHex : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _currentVehicleState : aΩ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _dateOfVehicleIngestion : Aª // +0x0 (0x0)
	var _displayName : String? // +0x0 (0x10)
	var _headUnitBluetoothIdentifier : String? // +0x0 (0x10)
	var _headUnitMacAddress : String? // +0x0 (0x10)
	var _iapIdentifier : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastStateUpdateDate : Aª // +0x0 (0x0)
	var _licensePlate : String? // +0x0 (0x10)
	var _lprPowerType : String? // +0x0 (0x10)
	var _lprVehicleType : String? // +0x0 (0x10)
	var _manufacturer : String? // +0x0 (0x10)
	var _model : String? // +0x0 (0x10)
	var _pairedAppIdentifier : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _powerByConnector : aΩ // +0x0 (0x10)
	var _siriIntentsIdentifier : String? // +0x0 (0x10)
	var _supportedConnectors : NSNumber? // +0x0 (0x8)
	var _vehicleIdentifier : String? // +0x0 (0x10)
	var _vehicleType : NSNumber? // +0x0 (0x8)
	var _year : NSNumber? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8ca400029758 (0x4a400029758) in binary!
	0x8c98  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8c8c00029760 (0x48c00029760) in binary!
	0x8c80  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8c7400029768 (0x47400029768) in binary!
	0x8c68  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8c5c00029770 (0x45c00029770) in binary!
	0x8c50  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8c4400029778 (0x44400029778) in binary!
	0x8c38  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8c2c00029780 (0x42c00029780) in binary!
	0x8c20  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8c1400029788 (0x41400029788) in binary!
	0x8c08  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8bfc00029790 (0x3fc00029790) in binary!
	0x8bf0  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8be400029798 (0x3e400029798) in binary!
	0x8bd8  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8bcc00029790 (0x3cc00029790) in binary!
	0x8bc0  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0xb89400029010 (0x9400029010) in binary!
	0x8038  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x763c00028ec8 (0x63c00028ec8) in binary!
	0x7630  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x999c00028ea0 (0x19c00028ea0) in binary!
	0xa778  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x8c3c00028e78 (0x43c00028e78) in binary!
	0x2a8000000c  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0xa75400028e50 (0x75400028e50) in binary!
	0x8b48  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7fcc000295f8 (0x7cc000295f8) in binary!
	0x8b30  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7fb4000295f0 (0x7b4000295f0) in binary!
	0x8b18  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f9c000295e8 (0x79c000295e8) in binary!
	0x8b00  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f84000295e0 (0x784000295e0) in binary!
	0x8ae8  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f6c000295d8 (0x76c000295d8) in binary!
	0x8ad0  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f54000295d0 (0x754000295d0) in binary!
	0x8ab8  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f3c000295c8 (0x73c000295c8) in binary!
	0x8aa0  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f24000295c0 (0x724000295c0) in binary!
	0x8a88  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f0c000295b8 (0x70c000295b8) in binary!
	0x8a70  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7ef4000295b0 (0x6f4000295b0) in binary!
	0x8a58  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7edc000295a8 (0x6dc000295a8) in binary!
	0x8a40  @objc MapsSyncVehicle.(null) <stripped>
WARNING: couldn't find address 0x7ec4000295a0 (0x6c4000295a0) in binary!
	0x8a28  @objc MapsSyncVehicle.(null) <stripped>

	// Swift methods
	0x6a2a0  func <stripped> // getter 
	0x6a2e0  func <stripped> // getter 
	0x6a320  func <stripped> // getter 
	0x6a360  func <stripped> // getter 
	0x6a3a0  func <stripped> // getter 
	0x6a3e0  func <stripped> // getter 
	0x6a420  func <stripped> // getter 
	0x6a510  func <stripped> // getter 
	0x6a590  func <stripped> // getter 
	0x6a5d0  func <stripped> // getter 
	0x6a610  func <stripped> // getter 
	0x6a650  func <stripped> // getter 
	0x6a690  func <stripped> // getter 
	0x6a6d0  func <stripped> // getter 
	0x6a770  func <stripped> // getter 
	0x6a7e0  func <stripped> // getter 
	0x6a830  func <stripped> // getter 
	0x6a8d0  func <stripped> // getter 
	0x6a950  func <stripped> // getter 
	0x6a9b0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableVehicle : MapsSyncMutableBaseItem {

	// Properties
	var _proxy : MapsSyncManagedVehicle

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa75400028e50 (0x75400028e50) in binary!
	0x8b48  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7fcc000295f8 (0x7cc000295f8) in binary!
	0x8b30  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7fb4000295f0 (0x7b4000295f0) in binary!
	0x8b18  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f9c000295e8 (0x79c000295e8) in binary!
	0x8b00  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f84000295e0 (0x784000295e0) in binary!
	0x8ae8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f6c000295d8 (0x76c000295d8) in binary!
	0x8ad0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f54000295d0 (0x754000295d0) in binary!
	0x8ab8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f3c000295c8 (0x73c000295c8) in binary!
	0x8aa0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f24000295c0 (0x724000295c0) in binary!
	0x8a88  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7f0c000295b8 (0x70c000295b8) in binary!
	0x8a70  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7ef4000295b0 (0x6f4000295b0) in binary!
	0x8a58  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7edc000295a8 (0x6dc000295a8) in binary!
	0x8a40  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7ec4000295a0 (0x6c4000295a0) in binary!
	0x8a28  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7eac00029598 (0x6ac00029598) in binary!
	0x8a10  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e9400029590 (0x69400029590) in binary!
	0x89f8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e7c00029588 (0x67c00029588) in binary!
	0x89e0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e6400029580 (0x66400029580) in binary!
	0x89c8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e4c00029578 (0x64c00029578) in binary!
	0x89b0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e3400029208 (0x63400029208) in binary!
	0x8998  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e1c00029558 (0x61c00029558) in binary!
	0x8980  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7e0400029550 (0x60400029550) in binary!
	0x8a38  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0xb4fffd2e90  @objc MapsSyncMutableVehicle.(null) <stripped>
	0x134000288b8  @objc MapsSyncMutableVehicle. <stripped>
WARNING: couldn't find address 0x288a4fffd2d60 (0xa4fffd2d60) in binary!
	0x11c00029500  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x29504fffd2ed8 (0x504fffd2ed8) in binary!
	0x10400029508  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x2950cfffd2fd0 (0x50cfffd2fd0) in binary!
	0xec00029518  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28d3cfffd30e8 (0x53cfffd30e8) in binary!
	0x56400028958  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28bfcfffd3ee0 (0x3fcfffd3ee0) in binary!
	0x35c00028be8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28bd4fffd4188 (0x3d4fffd4188) in binary!
	0x6bc00028bc0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x29314fffd42e0 (0x314fffd42e0) in binary!
	0x15c00028b98  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0xfffd44e8 (0xfffd44e8) in binary!
	0x47400028b70  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x2944cfffd47b0 (0x44cfffd47b0) in binary!
	0x4ec00029448  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x29444fffd4868 (0x444fffd4868) in binary!
	0x4d400029440  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x2943cfffd4b40 (0x43cfffd4b40) in binary!
	0x4bc00029438  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x29434fffd5188 (0x434fffd5188) in binary!
	0x3b400029430  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x28b14fffd5700 (0x314fffd5700) in binary!
	0x38000000c  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0xa3f400029428 (0x3f400029428) in binary!
	0xb0d8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x88ac00028ae8 (0xac00028ae8) in binary!
	0x48000000c  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x7aa400028a18 (0x2a400028a18) in binary!
	0xa3b8  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0xa3ac00028708 (0x3ac00028708) in binary!
	0x73a0  @objc MapsSyncMutableVehicle.(null) <stripped>
WARNING: couldn't find address 0x148000000c (0x148000000c) in binary!
	0x3ccfffd7bc8  @objc MapsSyncMutableVehicle.(null) <stripped>
	0x3dcfffd8250  @objc MapsSyncMutableVehicle.LâE»HâÀHâU–IâÙIâ˛H∏ <stripped>

	// Swift methods
	0x6c8f0  func <stripped> // getter 
	0x6c930  func <stripped> // setter 
	0x6c990  func <stripped> // modifyCoroutine 
	0x6ca80  func <stripped> // getter 
	0x6cac0  func <stripped> // setter 
	0x6cb20  func <stripped> // modifyCoroutine 
	0x6cc10  func <stripped> // getter 
	0x6cc50  func <stripped> // setter 
	0x6ccb0  func <stripped> // modifyCoroutine 
	0x6ce10  func <stripped> // getter 
	0x6ce50  func <stripped> // setter 
	0x6ceb0  func <stripped> // modifyCoroutine 
	0x6cfa0  func <stripped> // getter 
	0x6cfe0  func <stripped> // setter 
	0x6d040  func <stripped> // modifyCoroutine 
	0x6d130  func <stripped> // getter 
	0x6d170  func <stripped> // setter 
	0x6d1d0  func <stripped> // modifyCoroutine 
	0x6d2c0  func <stripped> // getter 
	0x6d300  func <stripped> // setter 
	0x6d360  func <stripped> // modifyCoroutine 
	0x6d4f0  func <stripped> // getter 
	0x6d740  func <stripped> // setter 
	0x6d930  func <stripped> // modifyCoroutine 
	0x6dc00  func <stripped> // getter 
	0x6dc40  func <stripped> // setter 
	0x6dca0  func <stripped> // modifyCoroutine 
	0x6dd90  func <stripped> // getter 
	0x6ddd0  func <stripped> // setter 
	0x6de30  func <stripped> // modifyCoroutine 
	0x6df20  func <stripped> // getter 
	0x6df60  func <stripped> // setter 
	0x6dfc0  func <stripped> // modifyCoroutine 
	0x6e0b0  func <stripped> // getter 
	0x6e0f0  func <stripped> // setter 
	0x6e150  func <stripped> // modifyCoroutine 
	0x6e240  func <stripped> // getter 
	0x6e280  func <stripped> // setter 
	0x6e2e0  func <stripped> // modifyCoroutine 
	0x6e3d0  func <stripped> // getter 
	0x6e410  func <stripped> // setter 
	0x6e470  func <stripped> // modifyCoroutine 
	0x6e620  func <stripped> // getter 
	0x6e820  func <stripped> // setter 
	0x6ea60  func <stripped> // modifyCoroutine 
	0x6ebe0  func <stripped> // getter 
	0x6ec20  func <stripped> // setter 
	0x6ec80  func <stripped> // modifyCoroutine 
	0x6ed70  func <stripped> // getter 
	0x6edb0  func <stripped> // setter 
	0x6ee10  func <stripped> // modifyCoroutine 
	0x6ef60  func <stripped> // getter 
	0x6f100  func <stripped> // setter 
	0x6f320  func <stripped> // modifyCoroutine 
	0x6f4a0  func <stripped> // getter 
	0x6f4e0  func <stripped> // setter 
	0x6f540  func <stripped> // modifyCoroutine 
	0x6f600  func <stripped> // getter 
	0x6f690  func <stripped> // setter 
	0x6f790  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncAnonymousCredential : MapsSyncBaseItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _anonymousId : aΩ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapsToken : aΩ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapsTokenCreatedAt : Aª // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapsTokenTTL : uº // +0x0 (0x8)
	var _reviewedPlaces : MapsSyncReviewedPlace // +0x0 (0x8)
	var _reviewedPlacesUnstored : MapsSyncReviewedPlace // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8934000288b8 (0x134000288b8) in binary!
	0x7db8  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x891c00029500 (0x11c00029500) in binary!
	0x8910  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x890400029508 (0x10400029508) in binary!
	0x73f8  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x88ec00029518 (0xec00029518) in binary!
	0xb5c0  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7d6400028958 (0x56400028958) in binary!
	0x7d58  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x735c00028be8 (0x35c00028be8) in binary!
	0x7350  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x96bc00028bc0 (0x6bc00028bc0) in binary!
	0xa498  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x895c00028b98 (0x15c00028b98) in binary!
	0xa8000000c  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0xa47400028b70 (0x47400028b70) in binary!
	0x8868  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7cec00029448 (0x4ec00029448) in binary!
	0x8850  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7cd400029440 (0x4d400029440) in binary!
	0x8838  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7cbc00029438 (0x4bc00029438) in binary!
	0x7320  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x9bb400029430 (0x3b400029430) in binary!
	0x88d8  @objc MapsSyncAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x57cfffd6f60  @objc MapsSyncAnonymousCredential.(null) <stripped>
	0xfffd7348  @objc MapsSyncAnonymousCredential.ˇLçx[ <stripped>

	// Swift methods
	0x70710  func <stripped> // getter 
	0x707b0  func <stripped> // getter 
	0x708b0  func <stripped> // getter 
	0x70910  func <stripped> // getter 
	0x709f0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableAnonymousCredential : MapsSyncMutableBaseItem {

	// Properties
	var _proxyObject : MapsSyncManagedAnonymousCredential

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa47400028b70 (0x47400028b70) in binary!
	0x8868  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7cec00029448 (0x4ec00029448) in binary!
	0x8850  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7cd400029440 (0x4d400029440) in binary!
	0x8838  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x7cbc00029438 (0x4bc00029438) in binary!
	0x7320  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x9bb400029430 (0x3b400029430) in binary!
	0x88d8  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x57cfffd6f60  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
	0xfffd7348  @objc MapsSyncMutableAnonymousCredential.ˇLçx[ <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x71cfffe0080  @objc MapsSyncMutableAnonymousCredential.(null) <stripped>
	0x2a4fffe01b8  @objc MapsSyncMutableAnonymousCredential.ãrØ
 <stripped>
	0x38c00029208  @objc MapsSyncMutableAnonymousCredential.Hã@¯HâE–Lã`0Hâﬂæ <stripped>

	// Swift methods
	0x72120  func <stripped> // getter 
	0x72160  func <stripped> // setter 
	0x721c0  func <stripped> // modifyCoroutine 
	0x72370  func <stripped> // getter 
	0x72570  func <stripped> // setter 
	0x727b0  func <stripped> // modifyCoroutine 
	0x729a0  func <stripped> // getter 
	0x72bb0  func <stripped> // setter 
	0x72d50  func <stripped> // modifyCoroutine 
	0x73000  func <stripped> // getter 
	0x73040  func <stripped> // setter 
	0x730c0  func <stripped> // modifyCoroutine 
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
	case ObjCException  
 }

 class MapsSync.MapsSyncError : NSError /System/Library/Frameworks/Foundation.framework/Foundation {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa3f400029428 (0x3f400029428) in binary!
	0xb0d8  @objc MapsSyncError.(null) <stripped>
WARNING: couldn't find address 0x88ac00028ae8 (0xac00028ae8) in binary!
	0x48000000c  @objc MapsSyncError.(null) <stripped>
WARNING: couldn't find address 0x7aa400028a18 (0x2a400028a18) in binary!
	0xa3b8  @objc MapsSyncError.(null) <stripped>

	// Swift methods
	0x74900  func <stripped> // getter 
 }

 class MapsSync.MapsSyncFavoriteItem : MapsSyncBaseItem {

	// Properties
	var _contactHandles : Set<String>? // +0x0 (0x8)
	var _customName : String? // +0x0 (0x10)
	var _hidden : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _mapItemStorage : aΩ // +0x0 (0x10)
	var _originatingAddressString : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _type : {¡ // +0x0 (0x2)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _source : {¡ // +0x0 (0x2)
	var _shortcutIdentifier : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _version : {¡ // +0x0 (0x2)
	var _latitude : NSNumber? // +0x0 (0x8)
	var _longitude : NSNumber? // +0x0 (0x8)
	var _muid : NSNumber? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa38c00029208 (0x38c00029208) in binary!
	0x8780  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x8774000293b0 (0x774000293b0) in binary!
	0x8768  @objc MapsSyncFavoriteItem.(null) <stripped>
	0x8750  dispatch thunk of MapsSyncMutableCollectionPlaceItem.origin.modify
WARNING: couldn't find address 0x8744000293b8 (0x744000293b8) in binary!
	0xb0b8  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xb0ac000293b8 (0xac000293b8) in binary!
	0x8720  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xb094000293c0 (0x94000293c0) in binary!
	0x8708  @objc MapsSyncFavoriteItem.(null) <stripped>
	0x86f0  dispatch thunk of MapsSyncMutableCollectionPlaceItem.mapItemStorage.modify
WARNING: couldn't find address 0xb3c400028b40 (0x3c400028b40) in binary!
	0x7b68  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x716c000289f8 (0x16c000289f8) in binary!
	0x7160  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x94cc000289d0 (0x4cc000289d0) in binary!
	0x8778  @objc MapsSyncFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x1c8000000c (0x1c8000000c) in binary!
	0x5d4fff90c00  @objc MapsSyncFavoriteItem.(null) <stripped>
	0x5acfff90ee8  @objc MapsSyncFavoriteItem.Œ
 <stripped>
	0x584fffd9630  @objc MapsSyncFavoriteItem.â]àHã5Fƒ <stripped>
	0x27cfffd9768  @objc MapsSyncFavoriteItem.ã5ÇÎ <stripped>
	0x54cfffd9910  @objc MapsSyncFavoriteItem.E <stripped>
	0x284fffda2d8  @objc MapsSyncFavoriteItem.Lãm∞ˇU®È^ <stripped>
	0x25cfffda380  @objc MapsSyncFavoriteItem.UHâÂHãùœ
 <stripped>
	0x294fffda4f8  @objc MapsSyncFavoriteItem.Ë…	 <stripped>
	0x23cfffda7c0  @objc MapsSyncFavoriteItem.E <stripped>
	0x234fffdacf8  @objc MapsSyncFavoriteItem. <stripped>

	// Swift methods
	0x75c70  func <stripped> // getter 
	0x75cb0  func <stripped> // getter 
	0x75ce0  func <stripped> // getter 
	0x75d40  func <stripped> // getter 
	0x75e10  func <stripped> // getter 
	0x75e50  func <stripped> // getter 
	0x75ec0  func <stripped> // getter 
	0x75f50  func <stripped> // getter 
	0x75fc0  func <stripped> // getter 
	0x76040  func <stripped> // getter 
	0x760a0  func <stripped> // getter 
	0x76100  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableFavoriteItem : MapsSyncMutableBaseItem {

	// Properties
	var _proxyFavorite : MapsSyncManagedFavoriteItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8764000285e8 (0x764000285e8) in binary!
	0x8758  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xa27c000285c0 (0x27c000285c0) in binary!
	0xa270  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x866400028598 (0x66400028598) in binary!
	0x7ae8  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xa24c00028948 (0x24c00028948) in binary!
	0x8640  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x7ac4000292f0 (0x2c4000292f0) in binary!
	0xa228  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
	0x8610  dispatch thunk of MapsSyncMutableCollectionPlaceItem.droppedPinCoordinate.setter
WARNING: couldn't find address 0x7a9400028a80 (0x29400028a80) in binary!
	0x9408  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xa9b000029258 (0x1b000029258) in binary!
	0x85e0  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x7a6400028a90 (0x26400028a90) in binary!
	0x85c8  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x7a4c00029238 (0x24c00029238) in binary!
	0xaf30  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xb02a00028be8 (0x2a00028be8) in binary!
	0xaf18  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xb01200029220 (0x1200029220) in binary!
	0x8580  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x7a0400029218 (0x20400029218) in binary!
	0xaee8  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0xafe200029210 (0x7e200029210) in binary!
	0x8620  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffde448  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x4fffddab0  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
	0x7dcfffdddf8  @objc MapsSyncMutableFavoriteItem.˙LâÒË˜	 <stripped>
	0x7acfffde2f0  @objc MapsSyncMutableFavoriteItem. <stripped>
	0xfffde508  @objc MapsSyncMutableFavoriteItem. <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x17cfffe3440  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
	0xfcfffe3788  @objc MapsSyncMutableFavoriteItem.–
 <stripped>
	0x7b4fffe3e10  @objc MapsSyncMutableFavoriteItem. <stripped>
	0x78cfffe3e78  @objc MapsSyncMutableFavoriteItem. <stripped>
	0x764fffe42b0  @objc MapsSyncMutableFavoriteItem.ˇˇfD <stripped>
	0x4400028740  @objc MapsSyncMutableFavoriteItem. <stripped>
WARNING: couldn't find address 0x290fcfffe4440 (0xfcfffe4440) in binary!
	0xbc000290f8  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x290f4fffe4538 (0xf4fffe4538) in binary!
	0xa4000290f0  @objc MapsSyncMutableFavoriteItem.(null) <stripped>
WARNING: couldn't find address 0x28714fffe4800 (0x714fffe4800) in binary!
	0x18000000c  @objc MapsSyncMutableFavoriteItem.(null) <stripped>

	// Swift methods
	0x77350  func <stripped> // getter 
	0x77480  func <stripped> // setter 
	0x774f0  func <stripped> // modifyCoroutine 
	0x77600  func <stripped> // method 
	0x778a0  func <stripped> // method 
	0x77e90  func <stripped> // getter 
	0x77ed0  func <stripped> // setter 
	0x77f30  func <stripped> // modifyCoroutine 
	0x78020  func <stripped> // getter 
	0x78060  func <stripped> // setter 
	0x780f0  func <stripped> // modifyCoroutine 
	0x78190  func <stripped> // getter 
	0x78360  func <stripped> // setter 
	0x787e0  func <stripped> // modifyCoroutine 
	0x78850  func <stripped> // getter 
	0x78890  func <stripped> // setter 
	0x788f0  func <stripped> // modifyCoroutine 
	0x789e0  func <stripped> // getter 
	0x78a20  func <stripped> // setter 
	0x78a80  func <stripped> // modifyCoroutine 
	0x78b00  func <stripped> // getter 
	0x78b40  func <stripped> // setter 
	0x78ba0  func <stripped> // modifyCoroutine 
	0x78ce0  func <stripped> // getter 
	0x78e80  func <stripped> // setter 
	0x790a0  func <stripped> // modifyCoroutine 
	0x79220  func <stripped> // getter 
	0x79280  func <stripped> // setter 
	0x79350  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncCollectionItemQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa12400028818 (0x12400028818) in binary!
	0x9330  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x7812000287f0 (0x12000287f0) in binary!
	0x9318  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x77fa000287c8 (0x7fa000287c8) in binary!
	0x76c0  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x85ac000287e8 (0x5ac000287e8) in binary!
	0xa8000000c  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x84c400028910 (0x4c400028910) in binary!
	0x84b8  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x84ac00029180 (0x4ac00029180) in binary!
	0xb180  @objc MapsSyncCollectionItemQuery.(null) <stripped>
WARNING: couldn't find address 0x7924000287c8 (0x124000287c8) in binary!
	0x6f28  @objc MapsSyncCollectionItemQuery.(null) <stripped>

	// Swift methods
	0x7b650  class func MapsSyncCollectionItemQuery.__allocating_init(delegate:) // init 
	0x7b700  func <stripped> // method 
	0x7b760  func <stripped> // method 
	0x7ba50  func <stripped> // method 
	0x7bbd0  func <stripped> // method 
 }

 class MapsSync.MapsSyncHistoryRideShareItem : MapsSyncHistoryItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _startWaypoint : aΩ // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _endWaypoint : aΩ // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x84c400028910 (0x4c400028910) in binary!
	0x84b8  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x84ac00029180 (0x4ac00029180) in binary!
	0xb180  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x7924000287c8 (0x124000287c8) in binary!
	0x6f28  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x6f1c000287a0 (0x71c000287a0) in binary!
	0x9288  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0xa06400028ee0 (0x6400028ee0) in binary!
	0x8528  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0xfcfffe4440  @objc MapsSyncHistoryRideShareItem.(null) <stripped>
	0xf4fffe4538  @objc MapsSyncHistoryRideShareItem.ÉƒH√1“HÉƒH√f.Ñ <stripped>
	0x714fffe4800  @objc MapsSyncHistoryRideShareItem. <stripped>
	0x5cc00028830  @objc MapsSyncHistoryRideShareItem.–
 <stripped>
WARNING: couldn't find address 0xfffe4e70 (0xfffe4e70) in binary!
	0x7dc000282f0  @objc MapsSyncHistoryRideShareItem.(null) <stripped>

	// Swift methods
	0x813f0  func <stripped> // getter 
	0x814e0  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryRideShareItem : MapsSyncMutableHistoryItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryRideShareItem

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa04400028740 (0x4400028740) in binary!
	0x8438  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x78bc000290f8 (0xbc000290f8) in binary!
	0x8420  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x78a4000290f0 (0xa4000290f0) in binary!
	0x84d8  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe4e70  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
WARNING: couldn't find address 0xe8000000c (0xe8000000c) in binary!
	0x64cfffe5298  @objc MapsSyncMutableHistoryRideShareItem.(null) <stripped>
	0x9cfffe54b0  @objc MapsSyncMutableHistoryRideShareItem. <stripped>

	// Swift methods
	0x82220  func <stripped> // getter 
	0x82280  func <stripped> // setter 
	0x822f0  func <stripped> // modifyCoroutine 
	0x82430  func <stripped> // getter 
	0x82560  func <stripped> // setter 
	0x826d0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncManagedHistoryTransitItem : MapsSyncManagedHistoryItem {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x75cc00028830 (0x5cc00028830) in binary!
	0xe8000000c  @objc MapsSyncManagedHistoryTransitItem.(null) <stripped>
 }

 class MapsSync.MapsSyncReviewedPlace : MapsSyncBaseItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _muid : uº // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastSuggestedReviewDate : Aª // +0x0 (0x0)
	var _hasUserReviewed : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _uploadedPhotosCount : ô¡ // +0x0 (0x4)
	var _anonymousCredential : MapsSyncAnonymousCredential // +0x0 (0x8)
	var _anonymousCredentialUnstored : MapsSyncAnonymousCredential // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9fdc000282f0 (0x7dc000282f0) in binary!
	0x9fd0  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x6ec4000287a8 (0x6c4000287a8) in binary!
	0x83b8  @objc MapsSyncReviewedPlace.(null) <stripped>
	0x8390  type metadata accessor for MapsSyncMutableCollectionPlaceItem
WARNING: couldn't find address 0x839400029098 (0x39400029098) in binary!
	0xb068  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x780c00028400 (0xc00028400) in binary!
	0x7800  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x6e0400028690 (0x60400028690) in binary!
	0x6df8  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x916400028668 (0x16400028668) in binary!
	0x8410  @objc MapsSyncReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x704fffe6198  @objc MapsSyncReviewedPlace.(null) <stripped>
	0x7ecfffe6250  @objc MapsSyncReviewedPlace.m¿Ëï;	 <stripped>
	0x7e4fffe64b8  @objc MapsSyncReviewedPlace.âp LâˇAˇ‘Iâ«Lâ˜Aˇ‘Iâ∆HâﬂË€¯ <stripped>
	0x7dcfffe6a20  @objc MapsSyncReviewedPlace.UHâÂ]ÈV˘ˇˇfD <stripped>
	0x5ccfffe6bd8  @objc MapsSyncReviewedPlace.ˇË‚S <stripped>
	0x6ac000281a0  @objc MapsSyncReviewedPlace.PHç=ˆ <stripped>
WARNING: couldn't find address 0x284f4fff92f98 (0x4f4fff92f98) in binary!
	0x78000000c  @objc MapsSyncReviewedPlace.(null) <stripped>

	// Swift methods
	0x82ec0  class func MapsSyncReviewedPlace.__allocating_init(anonymousCredential:) // init 
	0x83240  func <stripped> // getter 
	0x83310  func <stripped> // getter 
	0x83360  func <stripped> // getter 
	0x83390  func <stripped> // getter 
	0x83420  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableReviewedPlace : MapsSyncMutableBaseItem {

	// Properties
	var _proxyObject : MapsSyncManagedReviewedPlace // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9f2c00028628 (0x72c00028628) in binary!
	0x6e20  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x96b4000287e8 (0x6b4000287e8) in binary!
	0x8308  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
	0x9100  _block_copy_helper.89
WARNING: couldn't find address 0xa6a800028fe0 (0x6a800028fe0) in binary!
	0x82d8  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
	0x8390  type metadata accessor for MapsSyncMutableCollectionPlaceItem
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x4f4fff92f98  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
	0x61300028b08  @objc MapsSyncMutableReviewedPlace.E–Ú@ÚE»Ú@Lâh HâX(Lâ`0HãM¿HâH8Hç≤ <stripped>
WARNING: couldn't find address 0x286dcfffe9038 (0x6dcfffe9038) in binary!
	0x704000285a8  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x28594fffe9950 (0x594fffe9950) in binary!
	0x4fc00028580  @objc MapsSyncMutableReviewedPlace.(null) <stripped>
WARNING: couldn't find address 0x2856cfffe9a08 (0x56cfffe9a08) in binary!
	0x64400028cc0  @objc MapsSyncMutableReviewedPlace.(null) <stripped>

	// Swift methods
	0x84050  func <stripped> // getter 
	0x84090  func <stripped> // setter 
	0x84110  func <stripped> // modifyCoroutine 
	0x84200  func <stripped> // getter 
	0x84410  func <stripped> // setter 
	0x845b0  func <stripped> // modifyCoroutine 
	0x84850  func <stripped> // getter 
	0x84890  func <stripped> // setter 
	0x84920  func <stripped> // modifyCoroutine 
	0x849c0  func <stripped> // getter 
	0x84a80  func <stripped> // setter 
	0x84bc0  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncHistoryItem : MapsSyncBaseItem {

	// Properties
	var _position : Double // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x861300028b08 (0x61300028b08) in binary!
	0xaf60  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x7704000285a8 (0x704000285a8) in binary!
	0x6d08  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x6cfc00028580 (0x4fc00028580) in binary!
	0x9068  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x9e4400028cc0 (0x64400028cc0) in binary!
	0x48000000c  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x9e2c00028528 (0x62c00028528) in binary!
	0x85a7  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x863a00028f28 (0x63a00028f28) in binary!
	0x82d8  @objc MapsSyncHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffede80  @objc MapsSyncHistoryItem.(null) <stripped>

	// Swift methods
	0x86c00  func <stripped> // getter 
 }

 class MapsSync.MapsSyncMutableHistoryItem : MapsSyncMutableBaseItem {

	// Properties
	var _proxyHistory : MapsSyncManagedHistoryItem // +0x10 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9e2c00028528 (0x62c00028528) in binary!
	0x85a7  @objc MapsSyncMutableHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x863a00028f28 (0x63a00028f28) in binary!
	0x82d8  @objc MapsSyncMutableHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffede80  @objc MapsSyncMutableHistoryItem.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x4bcfffeb988  @objc MapsSyncMutableHistoryItem.(null) <stripped>

	// Swift methods
	0x86c20  func <stripped> // getter 
	0x86c40  func <stripped> // setter 
	0x86c60  func <stripped> // modifyCoroutine 
 }

 class MapsSync.MapsSyncCuratedCollectionQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9ddc000284d0 (0x5dc000284d0) in binary!
	0x8fe8  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x74ca000284a8 (0x4ca000284a8) in binary!
	0x8fd0  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x74b200028480 (0x4b200028480) in binary!
	0x8fb8  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x736c00028458 (0x36c00028458) in binary!
	0x8258  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff93c0  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x43cffff8a28  @objc MapsSyncCuratedCollectionQuery.(null) <stripped>
	0x414ffff8d70  @objc MapsSyncCuratedCollectionQuery.Àˇˇ]È <stripped>
	0x3e4ffff9268  @objc MapsSyncCuratedCollectionQuery.ˇˇf.Ñ <stripped>

	// Swift methods
	0x89870  class func MapsSyncCuratedCollectionQuery.__allocating_init(delegate:) // init 
	0x89920  func <stripped> // method 
	0x89980  func <stripped> // method 
	0x89ca0  func <stripped> // method 
	0x89e20  func <stripped> // method 
 }

 class MapsSync.MapsSyncVehicleQuery : MapsSyncBaseQuery {

	// Properties
	var _specifiedQuery : MapsSyncGenericQuery

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9d5c00028450 (0x55c00028450) in binary!
	0x8f68  @objc MapsSyncVehicleQuery.(null) <stripped>
WARNING: couldn't find address 0x744a00028428 (0x44a00028428) in binary!
	0x8f50  @objc MapsSyncVehicleQuery.(null) <stripped>
WARNING: couldn't find address 0x743200028400 (0x43200028400) in binary!
	0x72f8  @objc MapsSyncVehicleQuery.(null) <stripped>
WARNING: couldn't find address 0x81e400028420 (0x1e400028420) in binary!
	0x48000000c  @objc MapsSyncVehicleQuery.(null) <stripped>
WARNING: couldn't find address 0x80fc00027fe8 (0xfc00027fe8) in binary!
	0x80f0  @objc MapsSyncVehicleQuery.(null) <stripped>
WARNING: couldn't find address 0x80e400027fc0 (0xe400027fc0) in binary!
	0x80d8  @objc MapsSyncVehicleQuery.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffffc640  @objc MapsSyncVehicleQuery.(null) <stripped>

	// Swift methods
	0x96990  class func MapsSyncVehicleQuery.__allocating_init(delegate:) // init 
	0x96a40  func <stripped> // method 
	0x96aa0  func <stripped> // method 
	0x96d90  func <stripped> // method 
	0x96f10  func <stripped> // method 
 }

 class MapsSync.MapsSyncUtil : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x80c400028530 (0xc400028530) in binary!
	0x18000000c  @objc MapsSyncUtil.(null) <stripped>
 }

 class MapsSync.MapsSyncManagedVehicle : NSManagedObject /System/Library/Frameworks/CoreData.framework/CoreData {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7284000284e8 (0x284000284e8) in binary!
	0x25029232840  @objc MapsSyncManagedVehicle.(null) <stripped>
 }
