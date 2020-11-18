 protocol PromotedContent.ContextMetricsNotificationOwnerable // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol PromotedContent.MediaMetricsUpdating // 1 requirements
 {
	// method
 }
 protocol PromotedContent.UnfilledReasonDelegate // 1 requirements
 {
	// method
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ˚~
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ˚~
 }

 class PromotedContent.PrimitiveCreator : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let promotedContentIdentifier : String
	let contextIdentifier : String
	let journeyIdentifier : String
	let placeholder : Bool
	let receiver : APMetricReceiving
	var pendingMetrics : [APMetricProtocol]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x4cac00021310 (0x4ac00021310) in binary!
	0x6cd8  @objc PrimitiveCreator.(null) <stripped>
WARNING: couldn't find address 0x70f400020bb8 (0xf400020bb8) in binary!
	0x148000000c  @objc PrimitiveCreator.(null) <stripped>
WARNING: couldn't find address 0x6cb400020fc8 (0x4b400020fc8) in binary!
	0x6cb0  @objc PrimitiveCreator.(null) <stripped>

	// Swift methods
	0x1fe0  func <stripped> // method 
 }

 enum PromotedContent.Placement { }

 enum PromotedContent.ActionStatus { }

 class PromotedContent.ContextBuilder : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : ~ // +0xfeedfacf (0x0)
	var maxSize : CGSize // +0x3 (0x10)
	var current : APPCPromotableContentDepiction? // +0x24 (0x8)
	var next : [APPCPromotableContentDepiction] // +0x6100085 (0x8)
	var requestedAd : String? // +0x19 (0x10)
	var newsContext : NewsSupplementalContext // +0x45545f5f (0x8)
	let resourceLock : APUnfairLock // +0x0 (0x8)
	var adjacentInternal : [APPCPromotableContentDepiction] // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6cb400020fc8 (0x4b400020fc8) in binary!
	0x6cb0  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x538400020b98 (0x38400020b98) in binary!
	0x62e8  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x6c8400020b90 (0x48400020b90) in binary!
	0x6c80  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x6c6c00020b88 (0x46c00020b88) in binary!
	0x6c68  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x6c5400020b80 (0x45400020b80) in binary!
	0x6c48  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x6c4400020b78 (0x44400020b78) in binary!
	0x6c30  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x6c2c00020b70 (0x42c00020b70) in binary!
	0x6c18  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x628400020b68 (0x28400020b68) in binary!
	0x62a8  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x62ba00020b60 (0x2ba00020b60) in binary!
	0x6bf0  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x6bdc00020ee8 (0x3dc00020ee8) in binary!
	0x6ff8  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x70cfffca8f0  @objc ContextBuilder.(null) <stripped>
	0x6ecfffca958  @objc ContextBuilder.HÉ}ÿ <stripped>
	0x26cfffcaba0  @objc ContextBuilder.LâˇË~¢ <stripped>
	0x36c00020e38  @objc ContextBuilder.Ù
 <stripped>
WARNING: couldn't find address 0x20ae4fffcae00 (0x2e4fffcae00) in binary!
	0x19c00020ae0  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x20a34fffcaec8 (0x234fffcaec8) in binary!
	0x48000000c  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x6b1400020ac8 (0x31400020ac8) in binary!
	0x6b08  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x6a5100020ac0 (0x25100020ac0) in binary!
	0x6b10  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x624fffcbff0  @objc ContextBuilder.(null) <stripped>
	0x61cfffcc058  @objc ContextBuilder.‡H¡Ë>u4Iˇ∆Ä <stripped>

	// Swift methods
	0x4540  func <stripped> // getter 
	0x4650  func <stripped> // setter 
	0x4790  func <stripped> // modifyCoroutine 
	0x4810  func <stripped> // getter 
	0x48b0  func <stripped> // setter 
	0x4990  func <stripped> // modifyCoroutine 
	0x4a20  func <stripped> // getter 
	0x4ab0  func <stripped> // setter 
	0x4b50  func <stripped> // modifyCoroutine 
	0x4ca0  func <stripped> // getter 
	0x4d40  func <stripped> // setter 
	0x4e40  func <stripped> // modifyCoroutine 
	0x4f30  func <stripped> // getter 
	0x5010  func <stripped> // getter 
	0x50d0  func <stripped> // setter 
	0x51e0  func <stripped> // modifyCoroutine 
	0x5270  func <stripped> // getter 
	0x5310  func <stripped> // setter 
	0x5410  func <stripped> // modifyCoroutine 
	0x54a0  func <stripped> // getter 
	0x5690  class func ContextBuilder.__allocating_init(maxSize:current:next:newsContext:requestedAd:) // init 
	0x5850  class func ContextBuilder.__allocating_init(maxSize:current:newsContext:requestedAd:) // init 
	0x59d0  func <stripped> // method 
	0x5f00  func <stripped> // method 
 }

 enum PromotedContent.InvalidContentDepictionError {

	// Properties
	case currentContainNonCurrentAdjacency  
	case adjacentContainCurrentAdjacency  
 }

 enum PromotedContent.VideoQuality { }

 class PromotedContent.NativeRepresentation : APPCContentRepresentation {

	// Properties
	let articleID : String
	let articleTitle : String?
	let advertiserName : String?
	let campaignData : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6bbc00020f08 (0x3bc00020f08) in binary!
	0x6bb0  @objc NativeRepresentation.(null) <stripped>
WARNING: couldn't find address 0x6ba400020f08 (0x3a400020f08) in binary!
	0x6b98  @objc NativeRepresentation.(null) <stripped>
WARNING: couldn't find address 0x691400020b08 (0x11400020b08) in binary!
	0x6fa8  @objc NativeRepresentation.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x2e4fffcae00  @objc NativeRepresentation.(null) <stripped>
	0x234fffcaec8  @objc NativeRepresentation. <stripped>
	0x31400020ac8  @objc NativeRepresentation.ü <stripped>

	// Swift methods
 }

 class PromotedContent.BannerRepresentation : APPCContentRepresentation {

	// Properties
	let adTag : String?
	let outstreamVideoInfo : OutstreamVideoInfo

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6b6c00020e38 (0x36c00020e38) in binary!
	0x6b60  @objc BannerRepresentation.(null) <stripped>
WARNING: couldn't find address 0x699c00020ae0 (0x19c00020ae0) in binary!
	0x6f70  @objc BannerRepresentation.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x2c4fffcba08  @objc BannerRepresentation.(null) <stripped>
	0x61cfffcbba0  @objc BannerRepresentation.ƒ[A\A^A_]√Iø¯ˇˇˇˇˇˇ <stripped>

	// Swift methods
 }

 struct PromotedContent.PlaceholderRequest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let uuid : ~
	let adType : PlacementType
	let adSize : CGSize
	let promotedContent : APPCPromotableContent
	let placeholderReplacement : (_:)
 }

 enum PromotedContent.BannerType {

	// Properties
	case any  
	case standard  
	case double  
	case mediumRectangle  
	case large  
 }

 enum PromotedContent.DesiredPlacementType {

	// Properties
	case banner : BannerType
	case interstitial : (count: Int)
	case audio : (count: Int)
	case video : (count: Int)
	case native : (count: Int)
 }

 class PromotedContent.DesiredPlacement : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let type : PlacementType
	let count : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6b1400020ac8 (0x31400020ac8) in binary!
	0x6b08  @objc DesiredPlacement.(null) <stripped>
WARNING: couldn't find address 0x6a5100020ac0 (0x25100020ac0) in binary!
	0x6b10  @objc DesiredPlacement.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x624fffcbff0  @objc DesiredPlacement.(null) <stripped>
	0x61cfffcc058  @objc DesiredPlacement.‡H¡Ë>u4Iˇ∆Ä <stripped>

	// Swift methods
	0xd400  func <stripped> // getter 
	0xd470  class func DesiredPlacement.__allocating_init(type:count:) // init 
 }

 class PromotedContent.VideoRepresentation : APPCContentRepresentation {

	// Properties
	let fileSize : Int // +0x40 (0x8)
	let skipThreshold : Double // +0x48 (0x8)
	let skipEnabled : Bool // +0x50 (0x1)
	let unbranded : Bool // +0x51 (0x1)
	let bitrate : Double // +0x58 (0x8)
	let signalStrength : UInt // +0x60 (0x8)
	let connectionType : Int // +0x68 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_videoURL : _~ // +0x0 (0x0)
	let duration : Double // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var originalVideoURL : yz // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6adc00020aa8 (0x2dc00020aa8) in binary!
	0x6ad8  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x6ad400020e20 (0x2d400020e20) in binary!
	0x6ac8  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x6ab400020dc0 (0x2b400020dc0) in binary!
	0x6ab8  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x6a9400020db0 (0x29400020db0) in binary!
	0x6aa8  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x6aa400020a50 (0x2a400020a50) in binary!
	0x6aa8  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x6eac00020970 (0x6ac00020970) in binary!
	0xc8000000c  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x6a6c00020e70 (0x26c00020e70) in binary!
	0x6c88  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x6a5400020d68 (0x25400020d68) in binary!
	0x6a48  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x6a1c00020a10 (0x21c00020a10) in binary!
	0x6a10  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x7cbc00020e20 (0x4bc00020e20) in binary!
	0x6a08  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x6c48000209e8 (0x448000209e8) in binary!
	0x6e28  @objc VideoRepresentation.(null) <stripped>

	// Swift methods
	0xdbb0  func <stripped> // getter 
	0xde10  func <stripped> // setter 
	0xe160  func <stripped> // modifyCoroutine 
 }

 class PromotedContent.PromotedContentInfo : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let promotedContent : APPCPromotableContent // +0x8 (0x8)
	let metricsHelper : APPCLifecycleMetricsHelping // +0x10 (0x8)
	let ready : PromotedContentInfo // +0x18 (0x10)
	var unfilledReason : UnfilledReason // +0x28 (0x8)
	var placeholder : Bool // +0x30 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6a6c00020e70 (0x26c00020e70) in binary!
	0x6c88  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x6a5400020d68 (0x25400020d68) in binary!
	0x6a48  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x6a1c00020a10 (0x21c00020a10) in binary!
	0x6a10  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x7cbc00020e20 (0x4bc00020e20) in binary!
	0x6a08  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x6c48000209e8 (0x448000209e8) in binary!
	0x6e28  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x69f400020d00 (0x1f400020d00) in binary!
	0x6e10  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x128000000c (0x128000000c) in binary!
	0x1b4fffcda78  @objc PromotedContentInfo.(null) <stripped>
	0x1acfffcdd80  @objc PromotedContentInfo.E¿Hâ«Ë⁄™ <stripped>
	0x1a4fffce278  @objc PromotedContentInfo. <stripped>
	0x19cfffce560  @objc PromotedContentInfo. <stripped>
	0x194fffce868  @objc PromotedContentInfo.ˇˇHâC@IÉ«Lâ{ Hçã <stripped>
	0x18cfffceb90  @objc PromotedContentInfo.ˇHâC@IÉ«Lâ{ Hçã <stripped>

	// Swift methods
	0xea10  func <stripped> // getter 
	0xeb00  func <stripped> // getter 
	0xeb80  func <stripped> // getter 
	0xecb0  func <stripped> // getter 
	0xeda0  class func PromotedContentInfo.__allocating_init(promotedContent:placeholder:ready:) // init 
 }

 enum PromotedContent.MetricsVideoQuality { }

 enum PromotedContent.DownloadButtonState { }

 class PromotedContent.MediaMetricsHelper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var visiblePercentage : Float // +0x8 (0x4)
	var contextIdentifier : String // +0x10 (0x10)
	var promotedContentIdentifier : String // +0x20 (0x10)
	var primitiveCreator : APMetricPrimitiveCreating // +0x30 (0x8)
	var notificationOwner : APMetricNotificationRegisterOwner // +0x38 (0x8)
	var videoDuration : Double // +0x40 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var videoURL : _~ // +0x0 (0x0)
	var videoQuality : VideoQuality // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6ddc000209b8 (0x5dc000209b8) in binary!
	0x6220  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x6de4000209b0 (0x5e4000209b0) in binary!
	0x6dd8  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x8bcc000209a8 (0x3cc000209a8) in binary!
	0x5bd8  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5bcc000209a0 (0x3cc000209a0) in binary!
	0x5bc0  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5bbf00020998 (0x3bf00020998) in binary!
	0x5bc1  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5bb500020990 (0x3b500020990) in binary!
	0x5b90  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x6d6c00020988 (0x56c00020988) in binary!
	0x6d60  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x7bc400020980 (0x3c400020980) in binary!
	0x7bb8  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x691400020c20 (0x11400020c20) in binary!
	0x6d30  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0xd4fffd05e8  @objc MediaMetricsHelper.(null) <stripped>
	0x5fcfffd08e0  @objc MediaMetricsHelper.Æ <stripped>
	0x124fffd1718  @objc MediaMetricsHelper.† <stripped>
	0x78cfffd1a10  @objc MediaMetricsHelper.ˇIºˇˇˇˇˇˇˇ?Iã} <stripped>
	0x8c00020900  @objc MediaMetricsHelper.!–LãxM9˛ML˜MÖˆÑã <stripped>
WARNING: couldn't find address 0x208fcfffd2350 (0xfcfffd2350) in binary!
	0x74000208f8  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x208f4fffd2438 (0xf4fffd2438) in binary!
	0x5c000208f0  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x208ecfffd2530 (0xecfffd2530) in binary!
	0x44000208e8  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x208e4fffd2618 (0xe4fffd2618) in binary!
	0x434000208e0  @objc MediaMetricsHelper.(null) <stripped>

	// Swift methods
	0xf490  class func MediaMetricsHelper.__allocating_init(contextIdentifier:promotedContentIdentifier:primitiveCreator:notificationOwner:) // init 
	0xf5e0  func <stripped> // method 
	0xf7a0  func <stripped> // method 
	0xf8a0  func <stripped> // method 
	0xfc20  func <stripped> // method 
	0xfdd0  func <stripped> // method 
	0xfe20  func <stripped> // method 
	0x100c0  func <stripped> // method 
	0x10110  func <stripped> // method 
	0x103f0  func <stripped> // method 
	0x10440  func <stripped> // method 
	0x10720  func <stripped> // method 
	0x10770  func <stripped> // method 
	0x107b0  func <stripped> // method 
	0x107f0  func <stripped> // method 
	0x10b30  func <stripped> // method 
	0x10b80  func <stripped> // method 
 }

 class PromotedContent.DiagnosticMetricsHelper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var contextIdentifier : String
	var promotedContentIdentifier : String
	var primitiveCreator : APMetricPrimitiveCreating
	var notificationOwner : APMetricNotificationRegisterOwner

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6cfc000208d8 (0x4fc000208d8) in binary!
	0x6140  @objc DiagnosticMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x6d04000208d0 (0x504000208d0) in binary!
	0x6ed0  @objc DiagnosticMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x6ed200020928 (0x6d200020928) in binary!
	0x68c0  @objc DiagnosticMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x68ac00020bb8 (0xac00020bb8) in binary!
	0x6cc8  @objc DiagnosticMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0xfcfffd2350  @objc DiagnosticMetricsHelper.(null) <stripped>
	0xf4fffd2438  @objc DiagnosticMetricsHelper.Ñ <stripped>
	0xecfffd2530  @objc DiagnosticMetricsHelper. <stripped>
	0xe4fffd2618  @objc DiagnosticMetricsHelper.Ñ <stripped>

	// Swift methods
	0x120e0  class func DiagnosticMetricsHelper.__allocating_init(contextIdentifier:promotedContentIdentifier:primitiveCreator:notificationOwner:) // init 
	0x12250  func <stripped> // method 
	0x123e0  func <stripped> // method 
	0x124e0  func <stripped> // method 
	0x131c0  func <stripped> // method 
	0x133b0  func <stripped> // method 
 }

 enum PromotedContent.UnfilledReason { }

 enum PromotedContent.BlacklistReason { }

 class PromotedContent.BlacklistReasonCharacteristic : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var globalCategories : [String] // +0x8 (0x8)
	var globalKeywords : [String] // +0x10 (0x8)
	var campaignCategories : [String] // +0x18 (0x8)
	var campaignKeywords : [String] // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x688c00020900 (0x8c00020900) in binary!
	0x6888  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x6874000208f8 (0x74000208f8) in binary!
	0x6870  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x685c000208f0 (0x5c000208f0) in binary!
	0x6858  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x6844000208e8 (0x44000208e8) in binary!
	0x6840  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x6c34000208e0 (0x434000208e0) in binary!
	0x6820  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x6c3c00020700 (0x43c00020700) in binary!
	0x38000000c  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x714400020360 (0x14400020360) in binary!
	0x7248  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x723c00020c40 (0x23c00020c40) in binary!
	0xc8000000c  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x6024000207b8 (0x24000207b8) in binary!
	0x6be8  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x600c00020870 (0xc00020870) in binary!
	0x5e20  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x5e4400020c28 (0x64400020c28) in binary!
	0x5e08  @objc BlacklistReasonCharacteristic.(null) <stripped>

	// Swift methods
	0x13f90  func <stripped> // getter 
	0x13fd0  func <stripped> // setter 
	0x14030  func <stripped> // modifyCoroutine 
	0x14090  func <stripped> // getter 
	0x140d0  func <stripped> // setter 
	0x14130  func <stripped> // modifyCoroutine 
	0x141a0  func <stripped> // getter 
	0x141e0  func <stripped> // setter 
	0x14240  func <stripped> // modifyCoroutine 
	0x14300  func <stripped> // getter 
	0x143e0  func <stripped> // setter 
	0x14520  func <stripped> // modifyCoroutine 
	0x13e20  class func BlacklistReasonCharacteristic.__allocating_init(globalCategories:globalKeywords:campaignCategories:campaignKeywords:) // init 
 }

 class PromotedContent.Context : APPCBaseContext {

	// Properties
	let inventoryLock : APUnfairLock // +0x0 (0x8)
	var inventory : [APPCPromotableContent] // +0x45545f5f (0x8)
	let placeholdersLock : APUnfairLock // +0x0 (0x8)
	var placeholders : PlaceholderRequest // +0x1fe0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastError : Òx // +0x3ec70 (0x8)
	var requester : APPCControllerRequester? // +0x65745f5f (0x8)
	var blacklistEvaluator : BlacklistReason // +0x1fe0 (0x10)
	let pendingPrefetchedTypesLock : APUnfairLock // +0x0 (0x8)
	var pendingPrefetchedTypes : PlacementType // +0x80000400 (0x8)
	var newsContext : NewsSupplementalContext // +0x12 (0x8)
	var contextQueue : OS_dispatch_queue // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6024000207b8 (0x24000207b8) in binary!
	0x6be8  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x600c00020870 (0xc00020870) in binary!
	0x5e20  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x5e4400020c28 (0x64400020c28) in binary!
	0x5e08  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x5e2c00020c08 (0x62c00020c08) in binary!
	0x6ba0  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x677400020840 (0x77400020840) in binary!
	0x70a8  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x589c00020838 (0x9c00020838) in binary!
	0x6b70  @objc Context.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x624fffe0138  @objc Context.(null) <stripped>
	0x62cfffe0200  @objc Context.Mã4Mâ<LâˇËT¡ <stripped>
	0x62cfffe0278  @objc Context.ˇ≤À <stripped>
	0x36cfffe0360  @objc Context.Ñ <stripped>
	0x1d4fffe05b8  @objc Context. <stripped>
	0xfffe0970  @objc Context. <stripped>

	// Swift methods
	0x14c10  func <stripped> // getter 
	0x15cb0  func <stripped> // method 
	0x16190  func <stripped> // method 
	0x16250  func <stripped> // method 
	0x16300  func <stripped> // method 
 }

 class PromotedContent.BaseContext : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var adjacentInternal : [APPCPromotableContentDepiction] // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : ~ // +0x74735f5f (0x0)
	let maxSize : CGSize // +0x0 (0x10)
	let current : APPCPromotableContentDepiction? // +0x45545f5f (0x8)
	let next : [APPCPromotableContentDepiction] // +0x0 (0x8)
	let adjacent : [APPCPromotableContentDepiction] // +0x40c50 (0x8)
	var requestedAd : String? // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x673400020a48 (0x73400020a48) in binary!
	0x4e10  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x671c00020628 (0x71c00020628) in binary!
	0x6710  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x670400020630 (0x70400020630) in binary!
	0x66f8  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x66f400020628 (0x6f400020628) in binary!
	0x5d88  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x5d7c00020b58 (0x57c00020b58) in binary!
	0x66c8  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x6ae4000205a8 (0x2e4000205a8) in binary!
	0x18000000c  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x4e8c000207a0 (0x68c000207a0) in binary!
	0x48000000c  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x666c00020b98 (0x66c00020b98) in binary!
	0x76f9  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x5ecc00020768 (0x6cc00020768) in binary!
	0x6668  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x534fffe28e8  @objc BaseContext.(null) <stripped>
	0x6ad00020720  @objc BaseContext.âEÿHâﬂËÌ§ <stripped>

	// Swift methods
	0x21e60  func <stripped> // getter 
	0x22250  class func BaseContext.__allocating_init(maxSize:requestedAd:current:next:) // init 
	0x222f0  class func BaseContext.__allocating_init(maxSize:requestedAd:current:adjacent:) // init 
 }

 enum PromotedContent.ActionResult {

	// Properties
	case cancelled  
	case success  
	case failed  
 }

 enum PromotedContent.TapActionType { }

 class PromotedContent.TapAction : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let actionType : TapActionType

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x666c00020b98 (0x66c00020b98) in binary!
	0x76f9  @objc TapAction.(null) <stripped>
WARNING: couldn't find address 0x5ecc00020768 (0x6cc00020768) in binary!
	0x6668  @objc TapAction.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x534fffe28e8  @objc TapAction.(null) <stripped>
	0x6ad00020720  @objc TapAction.âEÿHâﬂËÌ§ <stripped>

	// Swift methods
	0x242e0  class func TapAction.__allocating_init(actionType:) // init 
	0x243a0  func <stripped> // method 
	0x243b0  func <stripped> // method 
 }

 class PromotedContent.WebTapAction : APPCTapAction {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let destinationURL : yz

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x76cd00020740 (0x6cd00020740) in binary!
	0x6a70  @objc WebTapAction.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x514fffe2bd8  @objc WebTapAction.(null) <stripped>

	// Swift methods
	0x243e0  class func WebTapAction.__allocating_init(destinationURL:actionType:) // init 
 }

 class PromotedContent.CalendarTapAction : APPCTapAction {

	// Properties
	let eventInfo : [String : Any]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x766d000206e0 (0x66d000206e0) in binary!
	0x6a10  @objc CalendarTapAction.(null) <stripped>
WARNING: couldn't find address 0x128000000c (0x128000000c) in binary!
	0x6ccfffe3ca8  @objc CalendarTapAction.(null) <stripped>

	// Swift methods
	0x24790  class func CalendarTapAction.__allocating_init(info:) // init 
 }

 class PromotedContent.StoreTapAction : APPCTapAction {

	// Properties
	let adamIdentifier : NSNumber
	let iTunesMetadata : [String : String]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x76ad00020720 (0x6ad00020720) in binary!
	0x6a50  @objc StoreTapAction.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x4f4fffe3188  @objc StoreTapAction.(null) <stripped>

	// Swift methods
	0x24470  class func StoreTapAction.__allocating_init(adamIdentifier:iTunesMetadata:) // init 
 }

 class PromotedContent.ExpandTapAction : APPCTapAction {

	// Properties
	let adIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let expandedDestinationURL : yz
	let maximumExpandedSize : CGSize
	var delegate : weak APWebProcessDelegate & WKNavigationDelegate?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x768d00020700 (0x68d00020700) in binary!
	0x6a30  @objc ExpandTapAction.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x4d4fffe2a18  @objc ExpandTapAction.(null) <stripped>

	// Swift methods
	0x24ba0  func <stripped> // getter 
	0x24be0  func <stripped> // setter 
	0x24c30  func <stripped> // modifyCoroutine 
	0x24d00  class func ExpandTapAction.__allocating_init(adIdentifier:expandedDestinationURL:maximumExpandedSize:delegate:) // init 
 }

 enum PromotedContent.LoadFailed { }

 class PromotedContent.PromotedContentMetric : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var route : Int // +0x8 (0x8)
	var metric : Int // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : t // +0x6 (0x0)
	var contentId : String? // +0x74735f5f (0x10)
	var clientBundleIdentifier : String? // +0x65706c65 (0x10)
	var deviceIdentifier : String? // +0x45545f5f (0x10)
	var userIdentifier : String? // +0x0 (0x10)
	var properties : [String : Any]? // +0x41090 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x65b400020b08 (0x5b400020b08) in binary!
	0x7860  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x659c00020af8 (0x59c00020af8) in binary!
	0x7848  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x65a400020ae8 (0x5a400020ae8) in binary!
	0x65a0  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x658c000206a8 (0x58c000206a8) in binary!
	0x6588  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x657400020ac8 (0x57400020ac8) in binary!
	0x6570  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x655c00020ab8 (0x55c00020ab8) in binary!
	0x6558  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x654400020aa8 (0x54400020aa8) in binary!
	0x6540  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x652c00020a98 (0x52c00020a98) in binary!
	0x6528  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x651400020820 (0x51400020820) in binary!
	0x6930  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x7cfffe8e08  @objc PromotedContentMetric.(null) <stripped>
	0x7cfffe8eb0  @objc PromotedContentMetric.Lãm∏HãE–HãU»Hπ <stripped>
	0x5acfffe8f18  @objc PromotedContentMetric.cIãFIãN Hã<HÖˇtHã5?‹ <stripped>
	0x38cfffe9080  @objc PromotedContentMetric. <stripped>
	0x48c00020798  @objc PromotedContentMetric.ˇˇ?Iã} <stripped>
WARNING: couldn't find address 0x2036cfffe92c0 (0x36cfffe92c0) in binary!
	0xc8000000c  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x646c00020780 (0x46c00020780) in binary!
	0x6458  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x643400020930 (0x43400020930) in binary!
	0x6448  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x643c00020928 (0x43c00020928) in binary!
	0x6430  @objc PromotedContentMetric.(null) <stripped>

	// Swift methods
	0x25ba0  func <stripped> // getter 
	0x25c70  func <stripped> // getter 
	0x25e60  func <stripped> // getter 
	0x26070  func <stripped> // getter 
	0x26110  func <stripped> // getter 
	0x261b0  func <stripped> // getter 
	0x262c0  func <stripped> // getter 
	0x26530  func <stripped> // getter 
 }

 enum PromotedContent.PlacementType { }

 enum PromotedContent.OptionalBoolean { }

 class PromotedContent.ContextMetricContainer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var contextHandler : (_:)?
	var promotedContentHandlers : [String : (_:)]

	// Swift methods
 }

 class PromotedContent.ContextMetricsNotificationOwner : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ContextMetricsNotificationOwnerable {

	// Properties
	var unfairLock : APUnfairLock
	let metricNotification : APMetricNotificationRegisterOwner
	var handlers : ContextMetricContainer

	// Swift methods
 }

 enum PromotedContent.JourneyMetricDiscardReasonCode { }

 enum PromotedContent.PrivacyMarkerPosition { }

 class PromotedContent.ContentRepresentation : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String
	let adType : PlacementType
	let privacyMarkerPosition : PrivacyMarkerPosition
	let adSize : CGSize
	let tapAction : TapAction

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x64f400020808 (0x4f400020808) in binary!
	0x64c8  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x64bc000207f8 (0x4bc000207f8) in binary!
	0x4bb8  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x64c4000207f0 (0x4c4000207f0) in binary!
	0x5d10  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x64ac000207b8 (0x4ac000207b8) in binary!
	0x68c8  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x36cfffe92c0  @objc ContentRepresentation.(null) <stripped>
	0x46c00020780  @objc ContentRepresentation.Ñ <stripped>
WARNING: couldn't find address 0x207ccfffe9830 (0x7ccfffe9830) in binary!
	0x43400020930  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x2092cfffe9898 (0x12cfffe9898) in binary!
	0x43c00020928  @objc ContentRepresentation.(null) <stripped>

	// Swift methods
	0x2af60  class func ContentRepresentation.__allocating_init(identifier:adType:privacyMarkerPosition:adSize:tapAction:) // init 
	0x2acd0  func <stripped> // method 
 }

 class PromotedContent.OutstreamVideoInfo : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let videoAssetURL : _~ // +0x722 (0x0)
	let videoDuration : NSNumber // +0x41090 (0x8)
	let bitrate : Double // +0x0 (0x8)
	let signalStrength : UInt // +0x80000400 (0x8)
	let connectionType : Int // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x648c00020798 (0x48c00020798) in binary!
	0x68a8  @objc OutstreamVideoInfo.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x7ccfffe9830  @objc OutstreamVideoInfo.(null) <stripped>

	// Swift methods
 }

 enum PromotedContent.AdjacentPosition { }

 class PromotedContent.ContentDepiction : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String // +0x8 (0x10)
	let adjacentPosition : AdjacentPosition // +0x18 (0x8)
	let placement : Placement // +0x20 (0x8)
	let language : String // +0x28 (0x10)
	let locale : String // +0x38 (0x10)
	let searchTerms : [String] // +0x48 (0x8)
	let keywords : [String] // +0x50 (0x8)
	let categories : [String] // +0x58 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x646c00020780 (0x46c00020780) in binary!
	0x6458  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x643400020930 (0x43400020930) in binary!
	0x6448  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x643c00020928 (0x43c00020928) in binary!
	0x6430  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x642400020920 (0x42400020920) in binary!
	0x6418  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x7b6400020558 (0x36400020558) in binary!
	0x7b78  @objc ContentDepiction.(null) <stripped>
	0x6810  ContextBuilder.__allocating_init()
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x7b4fffeab68  @objc ContentDepiction.(null) <stripped>
	0x6bcfffead20  @objc ContentDepiction.˚Ì <stripped>
	0xfffeade8  @objc ContentDepiction. <stripped>
WARNING: couldn't find address 0x7c8000000c (0x7c8000000c) in binary!
	0x4ecfffeae80  @objc ContentDepiction.(null) <stripped>
	0x4e4fffeaf68  @objc ContentDepiction.!¯Hã@I9≈É\ <stripped>
	0x4dcfffeb050  @objc ContentDepiction.⁄Ë: <stripped>

	// Swift methods
	0x2bb20  class func ContentDepiction.__allocating_init(identifier:placement:language:locale:searchTerms:keywords:categories:) // init 
	0x2b6b0  class func ContentDepiction.__allocating_init(identifier:adjacentPosition:placement:language:locale:searchTerms:keywords:categories:) // init 
 }

 class PromotedContent.LifecycleMetricsHelper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var metricsHelper : APPCJourneyMetricsHelping
	var wasOnScreen : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x67fc00020530 (0x7fc00020530) in binary!
	0x67f0  @objc LifecycleMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x67e400020970 (0x7e400020970) in binary!
	0x63b0  @objc LifecycleMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x67cc00020290 (0x7cc00020290) in binary!
	0x7c8000000c  @objc LifecycleMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x638c000204f0 (0x38c000204f0) in binary!
	0x6388  @objc LifecycleMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x6374000204e8 (0x374000204e8) in binary!
	0x6370  @objc LifecycleMetricsHelper.(null) <stripped>

	// Swift methods
	0x2ca20  class func LifecycleMetricsHelper.__allocating_init(metricsHelper:) // init 
	0x2cae0  func <stripped> // method 
	0x2cc70  func <stripped> // method 
	0x2cce0  func <stripped> // method 
 }

 class PromotedContent.NewsSupplementalContext : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var advertisementType : String?
	var creativeType : String?
	var currentArticleArticleId : String?
	var nextArticleArticleId : String?
	var currentArticleIsSponsored : NSNumber?
	var nextArticleIsSponsored : NSNumber?
	var currentArticlePublicationMetadata : [String : [String]]?
	var nextArticlePublicationMetadata : [String : [String]]?
	var currentArticleRating : String?
	var nextArticleRating : String?
	var currentArticleSourceChannel : String?
	var nextArticleSourceChannel : String?
	var currentArticleSourceChannelRating : String?
	var nextArticleSourceChannelRating : String?
	var currentArticleSourceContentProviderId : NSNumber?
	var nextArticleSourceContentProviderId : NSNumber?
	var currentArticleSourceSections : [String]?
	var nextArticleSourceSections : [String]?
	var feedMetadataCategories : [String]?
	var feedMetadataChannelId : String?
	var feedMetadataTagId : String?
	var feedMetadataContentProviderID : NSNumber?
	var feedMetadataKeywords : [String]?
	var feedMetadataLanguages : [String]?
	var feedMetadataRating : String?
	var feedMetadataSectionId : String?
	var groupContextCategories : [String]?
	var groupContextAboveCategories : [String]?
	var groupContextBelowCategories : [String]?
	var groupContextId : String?
	var groupContextAboveId : String?
	var groupContextBelowId : String?
	var groupContextKeywords : [String]?
	var groupContextAboveKeywords : [String]?
	var groupContextBelowKeywords : [String]?
	var groupContextLanguages : [String]?
	var groupContextAboveLanguages : [String]?
	var groupContextBelowLanguages : [String]?
	var groupContextAboveChannelId : String?
	var groupContextAboveTagId : String?
	var groupContextBelowChannelId : String?
	var groupContextBelowTagId : String?
	var groupContextContentProviderId : NSNumber?
	var groupContextAboveContentProviderId : NSNumber?
	var groupContextBelowContentProviderId : NSNumber?
	var groupContextType : String?
	var groupContextAboveType : String?
	var groupContextBelowType : String?
	var contentEnvironment : String?
	var isDraft : NSNumber?
	var placement : String?
	var referralLocation : String?
	var referralPublisherInventory : NSNumber?
	var numOfArticlesSeenSinceLastInterstitial : NSNumber?
	var playerAspectRatio : NSNumber?
	var subscriptionType : String?
	var currentIssueId : String?
	var currentIssueIsDraftNumber : NSNumber?
	var currentIssueIsCurrentNumber : NSNumber?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x638c000204f0 (0x38c000204f0) in binary!
	0x6388  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6374000204e8 (0x374000204e8) in binary!
	0x6370  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x635c000204e0 (0x35c000204e0) in binary!
	0x6358  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6344000204d8 (0x344000204d8) in binary!
	0x6340  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x632c000204d0 (0x32c000204d0) in binary!
	0x6328  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6314000204c8 (0x314000204c8) in binary!
	0x6310  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x62fc000204c0 (0x2fc000204c0) in binary!
	0x62f8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x62e4000204b8 (0x2e4000204b8) in binary!
	0x62e0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x62cc000204b0 (0x2cc000204b0) in binary!
	0x62c8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x62b4000204a8 (0x2b4000204a8) in binary!
	0x62b0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x629c000204a0 (0x29c000204a0) in binary!
	0x6298  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x628400020498 (0x28400020498) in binary!
	0x6280  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x626c00020490 (0x26c00020490) in binary!
	0x6268  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x625400020488 (0x25400020488) in binary!
	0x6250  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x623c00020480 (0x23c00020480) in binary!
	0x6238  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x622400020478 (0x22400020478) in binary!
	0x6220  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x620c00020470 (0x20c00020470) in binary!
	0x6208  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x61f400020468 (0x1f400020468) in binary!
	0x61f0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x61dc00020460 (0x1dc00020460) in binary!
	0x61d8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x61c400020458 (0x1c400020458) in binary!
	0x61c0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x61ac00020090 (0x1ac00020090) in binary!
	0x61a8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x619400020068 (0x19400020068) in binary!
	0x6190  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x617c00020040 (0x17c00020040) in binary!
	0x6178  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x616400020018 (0x16400020018) in binary!
	0x6160  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x614c0001fff0 (0x14c0001fff0) in binary!
	0x6148  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x61340001ffc8 (0x1340001ffc8) in binary!
	0x6130  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x611c0001ffa0 (0x11c0001ffa0) in binary!
	0x6118  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x61040001ff78 (0x1040001ff78) in binary!
	0x6100  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x60ec0001ff50 (0xec0001ff50) in binary!
	0x60e8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x60d40001ff28 (0xd40001ff28) in binary!
	0x60d0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x60bc0001ff00 (0xbc0001ff00) in binary!
	0x60b8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x60a40001fed8 (0xa40001fed8) in binary!
	0x60a0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x608c0001feb0 (0x8c0001feb0) in binary!
	0x6088  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x60740001fe88 (0x740001fe88) in binary!
	0x6070  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x605c0001fe60 (0x5c0001fe60) in binary!
	0x6058  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x60440001fe38 (0x440001fe38) in binary!
	0x6040  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x602c0001fe10 (0x2c0001fe10) in binary!
	0x6028  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x60140001fde8 (0x140001fde8) in binary!
	0x6010  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5ffc0001fdc0 (0x7fc0001fdc0) in binary!
	0x5ff8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5fe40001fd98 (0x7e40001fd98) in binary!
	0x5fe0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5fcc0001fd70 (0x7cc0001fd70) in binary!
	0x5fc8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5fb40001fd48 (0x7b40001fd48) in binary!
	0x5fb0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5f9c0001fd20 (0x79c0001fd20) in binary!
	0x5f98  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5f840001fcf8 (0x7840001fcf8) in binary!
	0x5f80  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5f6c0001fcd0 (0x76c0001fcd0) in binary!
	0x5f68  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5f540001fca8 (0x7540001fca8) in binary!
	0x5f50  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5f3c0001fc80 (0x73c0001fc80) in binary!
	0x5f38  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5f240001fc58 (0x7240001fc58) in binary!
	0x5f20  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5f0c0001fc30 (0x70c0001fc30) in binary!
	0x5f08  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5ef40001fc08 (0x6f40001fc08) in binary!
	0x5ef0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5edc0001fbe0 (0x6dc0001fbe0) in binary!
	0x5ed8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5ec4000203a0 (0x6c4000203a0) in binary!
	0x5ec0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5eac0001fb98 (0x6ac0001fb98) in binary!
	0x5ea8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5e940001fb70 (0x6940001fb70) in binary!
	0x5e90  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5e7c0001fb48 (0x67c0001fb48) in binary!
	0x5e78  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5e640001fb20 (0x6640001fb20) in binary!
	0x5e60  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5e4c0001faf8 (0x64c0001faf8) in binary!
	0x5e48  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5e340001fad0 (0x6340001fad0) in binary!
	0x5e30  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5dfc0001faa8 (0x5fc0001faa8) in binary!
	0x70a8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5de40001fa80 (0x5e40001fa80) in binary!
	0x7090  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5dec0001fa58 (0x5ec0001fa58) in binary!
	0x803a  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x5dd4000200e0 (0x5d4000200e0) in binary!
	0x61f0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x2f8000000c (0x2f8000000c) in binary!
	0x204ffff3568  @objc NewsSupplementalContext.(null) <stripped>
	0x484ffff35f0  @objc NewsSupplementalContext.LãsHç5˝¯ <stripped>
	0x1ccffff3678  @objc NewsSupplementalContext. <stripped>
	0x1acffff38d0  @objc NewsSupplementalContext. <stripped>
	0x184ffff39f8  @objc NewsSupplementalContext.LâÔ1…Ë± <stripped>
	0x164ffff3b40  @objc NewsSupplementalContext. <stripped>
	0x144ffff3db8  @objc NewsSupplementalContext.≤ <stripped>
	0x124ffff3e40  @objc NewsSupplementalContext. <stripped>
	0x104ffff3f08  @objc NewsSupplementalContext.IâˇIã] <stripped>
	0xe4ffff3f90  @objc NewsSupplementalContext.Ë'≥ <stripped>
	0xc4ffff41f8  @objc NewsSupplementalContext. <stripped>
	0x3cffff43a0  @objc NewsSupplementalContext.≥ <stripped>
	0x14cffff44f8  @objc NewsSupplementalContext.ÔIâ≈Ë„∞ <stripped>
	0x274ffff4710  @objc NewsSupplementalContext. <stripped>
	0xcffff47f8  @objc NewsSupplementalContext.1ˇË˘. <stripped>
	0x7e4ffff4a20  @objc NewsSupplementalContext.â√∆IâƒËC¥ <stripped>
	0x14ffff4cc8  @objc NewsSupplementalContext.ËC¥ <stripped>
	0x7fcffff4e40  @objc NewsSupplementalContext.˜ˇ°÷ <stripped>
	0x7d4ffff4f38  @objc NewsSupplementalContext. <stripped>
	0x7acffff5080  @objc NewsSupplementalContext.$E∂ÕHç=º <stripped>
	0x75cffff5368  @objc NewsSupplementalContext.ã <stripped>
	0x64ffff55c0  @objc NewsSupplementalContext.(2œ <stripped>
	0x6a4ffff58e8  @objc NewsSupplementalContext.ö≥ <stripped>
	0xffff5e20  @objc NewsSupplementalContext. <stripped>
WARNING: couldn't find address 0x1e8000000c (0x1e8000000c) in binary!
	0x12cffff8a08  @objc NewsSupplementalContext.(null) <stripped>
	0x70cffff8c50  @objc NewsSupplementalContext.LâˇIâ≈Ë≤ <stripped>
	0x78cffff8cd8  @objc NewsSupplementalContext. <stripped>
	0x6d4ffff8e20  @objc NewsSupplementalContext.5õ	 <stripped>
	0x6acffff9118  @objc NewsSupplementalContext. <stripped>
	0x2e4ffff9620  @objc NewsSupplementalContext.Hâﬂæ <stripped>
	0x664ffff97c8  @objc NewsSupplementalContext.ˇˇˇˇˇˇ <stripped>
	0x764ffff9b50  @objc NewsSupplementalContext.HâﬂË∞¢ <stripped>
	0x644ffffa3c8  @objc NewsSupplementalContext.˙Ëò° <stripped>
	0x254ffffa700  @objc NewsSupplementalContext.HâﬂËh± <stripped>
	0x604ffffaa58  @objc NewsSupplementalContext.∞ <stripped>
	0x5e4ffffaed0  @objc NewsSupplementalContext. <stripped>
	0x5bcffffb258  @objc NewsSupplementalContext. <stripped>
	0x7e4ffffb6d0  @objc NewsSupplementalContext.œHâ”Iâ˝ˇK‘ <stripped>
	0x104ffffb8e8  @objc NewsSupplementalContext.D <stripped>
	0x25029232840  @objc NewsSupplementalContext.Ø <stripped>
WARNING: couldn't find address 0x6d6f72503a4d4152 (0x2503a4d4152) in binary!
	0x2020746e65  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6f72503a5443454a (0x3a5443454a) in binary!
	0x12d746e6574  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x3ff0000000000000 (0x0) in binary!
	0x2  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6465746f6d6f7250 (0x46f6d6f7250) in binary!
	0x0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0xffffffe8 (0xffffffe8) in binary!
	0x46165724365  @objc NewsSupplementalContext.(null) <stripped>
	0x114fffbf9a0  @objc NewsSupplementalContext.œ˙Ì˛ <stripped>
WARNING: couldn't find address 0x200008596 (0x200008596) in binary!
	0xa00000006  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x700000010 (0x700000010) in binary!
	0x13  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x14 (0x14) in binary!
	0x663b0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x10 (0x10) in binary!
	0x435f5f  @objc NewsSupplementalContext.(null) <stripped>
	0x20011  @objc NewsSupplementalContext.œ˙Ì˛ <stripped>
WARNING: couldn't find offset 0xfffffff0 in binary!
WARNING: couldn't find offset 0xfffffff0 in binary!
WARNING: couldn't find address 0xfffbf9bcfffffff0 (0x0) in binary!
	0x2  @objc NewsSupplementalContext.(null) <stripped>
	0x45000000000  @objc NewsSupplementalContext.˙Ì˛ <stripped>
WARNING: couldn't find offset 0xffffffec in binary!
WARNING: couldn't find offset 0xffffffec in binary!
WARNING: couldn't find address 0x746e656d65 (0x746e656d65) in binary!
	0x0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0xffffffe0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x100030000 (0x100030000) in binary!
	0x10000  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x1052500023778 (0x52500023778) in binary!
	0x30000  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x857500010519 (0x57500010519) in binary!
	0x104f1  @objc NewsSupplementalContext.(null) <stripped>
	0x535000237b8  @objc NewsSupplementalContext. <stripped>
WARNING: couldn't find address 0xffffff78 (0xffffff78) in binary!
	0x53d00010491  @objc NewsSupplementalContext.(null) <stripped>
	0x10000  @objc NewsSupplementalContext.[, <stripped>
	0x73757461  @objc NewsSupplementalContext.ﬂËöâ˛ˇIâ∆Hç»G <stripped>

	// Swift methods
	0x2cfc0  func <stripped> // getter 
	0x2d000  func <stripped> // setter 
	0x2d060  func <stripped> // modifyCoroutine 
	0x2d0c0  func <stripped> // getter 
	0x2d100  func <stripped> // setter 
	0x2d160  func <stripped> // modifyCoroutine 
	0x2d1c0  func <stripped> // getter 
	0x2d200  func <stripped> // setter 
	0x2d260  func <stripped> // modifyCoroutine 
	0x2d2c0  func <stripped> // getter 
	0x2d300  func <stripped> // setter 
	0x2d360  func <stripped> // modifyCoroutine 
	0x2d3d0  func <stripped> // getter 
	0x2d410  func <stripped> // setter 
	0x2d470  func <stripped> // modifyCoroutine 
	0x2d4d0  func <stripped> // getter 
	0x2d510  func <stripped> // setter 
	0x2d570  func <stripped> // modifyCoroutine 
	0x2d5d0  func <stripped> // getter 
	0x2d610  func <stripped> // setter 
	0x2d670  func <stripped> // modifyCoroutine 
	0x2d750  func <stripped> // getter 
	0x2d810  func <stripped> // setter 
	0x2d870  func <stripped> // modifyCoroutine 
	0x2d8d0  func <stripped> // getter 
	0x2d910  func <stripped> // setter 
	0x2d970  func <stripped> // modifyCoroutine 
	0x2d9d0  func <stripped> // getter 
	0x2da10  func <stripped> // setter 
	0x2da70  func <stripped> // modifyCoroutine 
	0x2dad0  func <stripped> // getter 
	0x2db10  func <stripped> // setter 
	0x2db70  func <stripped> // modifyCoroutine 
	0x2dbd0  func <stripped> // getter 
	0x2dc10  func <stripped> // setter 
	0x2dc70  func <stripped> // modifyCoroutine 
	0x2dcd0  func <stripped> // getter 
	0x2dd10  func <stripped> // setter 
	0x2dd70  func <stripped> // modifyCoroutine 
	0x2ddd0  func <stripped> // getter 
	0x2de10  func <stripped> // setter 
	0x2de70  func <stripped> // modifyCoroutine 
	0x2ded0  func <stripped> // getter 
	0x2df10  func <stripped> // setter 
	0x2df70  func <stripped> // modifyCoroutine 
	0x2dfd0  func <stripped> // getter 
	0x2e010  func <stripped> // setter 
	0x2e070  func <stripped> // modifyCoroutine 
	0x2e0d0  func <stripped> // getter 
	0x2e110  func <stripped> // setter 
	0x2e170  func <stripped> // modifyCoroutine 
	0x2e1d0  func <stripped> // getter 
	0x2e210  func <stripped> // setter 
	0x2e270  func <stripped> // modifyCoroutine 
	0x2e2d0  func <stripped> // getter 
	0x2e310  func <stripped> // setter 
	0x2e370  func <stripped> // modifyCoroutine 
	0x2e3d0  func <stripped> // getter 
	0x2e410  func <stripped> // setter 
	0x2e470  func <stripped> // modifyCoroutine 
	0x2e4d0  func <stripped> // getter 
	0x2e510  func <stripped> // setter 
	0x2e570  func <stripped> // modifyCoroutine 
	0x2e5d0  func <stripped> // getter 
	0x2e610  func <stripped> // setter 
	0x2e670  func <stripped> // modifyCoroutine 
	0x2e6d0  func <stripped> // getter 
	0x2e710  func <stripped> // setter 
	0x2e770  func <stripped> // modifyCoroutine 
	0x2e7d0  func <stripped> // getter 
	0x2e810  func <stripped> // setter 
	0x2e870  func <stripped> // modifyCoroutine 
	0x2e8d0  func <stripped> // getter 
	0x2e910  func <stripped> // setter 
	0x2e970  func <stripped> // modifyCoroutine 
	0x2e9d0  func <stripped> // getter 
	0x2ea10  func <stripped> // setter 
	0x2ea70  func <stripped> // modifyCoroutine 
	0x2ead0  func <stripped> // getter 
	0x2eb10  func <stripped> // setter 
	0x2eb70  func <stripped> // modifyCoroutine 
	0x2ebd0  func <stripped> // getter 
	0x2ec10  func <stripped> // setter 
	0x2ec70  func <stripped> // modifyCoroutine 
	0x2ecd0  func <stripped> // getter 
	0x2ed10  func <stripped> // setter 
	0x2ed70  func <stripped> // modifyCoroutine 
	0x2edd0  func <stripped> // getter 
	0x2ee10  func <stripped> // setter 
	0x2ee70  func <stripped> // modifyCoroutine 
	0x2eed0  func <stripped> // getter 
	0x2ef10  func <stripped> // setter 
	0x2ef70  func <stripped> // modifyCoroutine 
	0x2efd0  func <stripped> // getter 
	0x2f010  func <stripped> // setter 
	0x2f070  func <stripped> // modifyCoroutine 
	0x2f0d0  func <stripped> // getter 
	0x2f110  func <stripped> // setter 
	0x2f170  func <stripped> // modifyCoroutine 
	0x2f1d0  func <stripped> // getter 
	0x2f210  func <stripped> // setter 
	0x2f270  func <stripped> // modifyCoroutine 
	0x2f2d0  func <stripped> // getter 
	0x2f310  func <stripped> // setter 
	0x2f370  func <stripped> // modifyCoroutine 
	0x2f3d0  func <stripped> // getter 
	0x2f410  func <stripped> // setter 
	0x2f470  func <stripped> // modifyCoroutine 
	0x2f4d0  func <stripped> // getter 
	0x2f510  func <stripped> // setter 
	0x2f570  func <stripped> // modifyCoroutine 
	0x2f640  func <stripped> // getter 
	0x2f730  func <stripped> // setter 
	0x2f870  func <stripped> // modifyCoroutine 
	0x2f8d0  func <stripped> // getter 
	0x2f910  func <stripped> // setter 
	0x2f970  func <stripped> // modifyCoroutine 
	0x2f9d0  func <stripped> // getter 
	0x2fa10  func <stripped> // setter 
	0x2fa70  func <stripped> // modifyCoroutine 
	0x2fad0  func <stripped> // getter 
	0x2fb10  func <stripped> // setter 
	0x2fb70  func <stripped> // modifyCoroutine 
	0x2fbd0  func <stripped> // getter 
	0x2fc10  func <stripped> // setter 
	0x2fc70  func <stripped> // modifyCoroutine 
	0x2fcd0  func <stripped> // getter 
	0x2fd10  func <stripped> // setter 
	0x2fd70  func <stripped> // modifyCoroutine 
	0x2fdd0  func <stripped> // getter 
	0x2fe10  func <stripped> // setter 
	0x2fe70  func <stripped> // modifyCoroutine 
	0x2fed0  func <stripped> // getter 
	0x2ff10  func <stripped> // setter 
	0x2ff70  func <stripped> // modifyCoroutine 
	0x2ffd0  func <stripped> // getter 
	0x30010  func <stripped> // setter 
	0x30070  func <stripped> // modifyCoroutine 
	0x300d0  func <stripped> // getter 
	0x30110  func <stripped> // setter 
	0x30170  func <stripped> // modifyCoroutine 
	0x301d0  func <stripped> // getter 
	0x30210  func <stripped> // setter 
	0x30270  func <stripped> // modifyCoroutine 
	0x302d0  func <stripped> // getter 
	0x30310  func <stripped> // setter 
	0x30370  func <stripped> // modifyCoroutine 
	0x303d0  func <stripped> // getter 
	0x30410  func <stripped> // setter 
	0x30470  func <stripped> // modifyCoroutine 
	0x304c0  func <stripped> // getter 
	0x304e0  func <stripped> // setter 
	0x30510  func <stripped> // modifyCoroutine 
	0x30560  func <stripped> // getter 
	0x305a0  func <stripped> // setter 
	0x30600  func <stripped> // modifyCoroutine 
	0x30660  func <stripped> // getter 
	0x306a0  func <stripped> // setter 
	0x30700  func <stripped> // modifyCoroutine 
	0x30760  func <stripped> // getter 
	0x307a0  func <stripped> // setter 
	0x30800  func <stripped> // modifyCoroutine 
	0x30860  func <stripped> // getter 
	0x308a0  func <stripped> // setter 
	0x30900  func <stripped> // modifyCoroutine 
	0x309a0  func <stripped> // getter 
	0x30a80  func <stripped> // setter 
	0x30bc0  func <stripped> // modifyCoroutine 
	0x30c20  func <stripped> // getter 
	0x30c60  func <stripped> // setter 
	0x30cc0  func <stripped> // modifyCoroutine 
	0x30d90  func <stripped> // getter 
	0x30e90  func <stripped> // setter 
	0x30ff0  func <stripped> // modifyCoroutine 
	0x31050  func <stripped> // getter 
	0x310b0  func <stripped> // setter 
	0x31110  func <stripped> // modifyCoroutine 
	0x311d0  func <stripped> // getter 
	0x31260  func <stripped> // setter 
	0x31360  func <stripped> // modifyCoroutine 
	0x31440  func <stripped> // getter 
	0x316e0  func <stripped> // method 
 }

 class PromotedContent.PromotedContent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let metricsHelper : APPCJourneyMetricsHelping // +0x8 (0x8)
	let diagnosticMetricHelper : APPCDiagnosticMetricsHelping // +0x10 (0x8)
	var identifier : String // +0x18 (0x10)
	var journeyIdentifier : String // +0x28 (0x10)
	var context : weak APPCPromotableContext? // +0x38 (0x8)
	var metaData : [String : [String : String]]? // +0x40 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var disclosureURL : _~ // +0x626f5f5f (0x0)
	var disclosureRendererPayload : String? // +0x6c687465 (0x10)
	var minimumTimeBetweenPresentation : UInt // +0x45545f5f (0x8)
	var brandName : String? // +0x0 (0x10)
	var campaignText : String? // +0x417b8 (0x10)
	var representations : [APPCPromotableContentRepresentation] // +0x12e0 (0x8)
	var bestRepresentation : APPCPromotableContentRepresentation? // +0x417b8 (0x8)
	var error : NSError? // +0x0 (0x8)
	let placeholder : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var expirationDate : t // +0x0 (0x0)
	var serverUnfilledReason : UnfilledReason // +0x6f635f5f (0x8)
	var mediaMetricHelper : APPCMediaMetricsHelping? // +0x45545f5f (0x8)
	var attachedToView : Bool // +0x0 (0x1)
	var discarded : Bool // +0x42aa0 (0x1)
	var consumed : Bool // +0x31f0 (0x1)
	var unfilledReasonDelegate : UnfilledReasonDelegate // +0x0 (0x10)
	var overriddenAdType : PlacementType // +0x0 (0x9)
	var discardReason : JourneyMetricDiscardReasonCode // +0x42aa0 (0x9)
	let primitiveCreator : APMetricPrimitiveCreating // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5db4000201b8 (0x5b4000201b8) in binary!
	0x5da8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5d9c000200b0 (0x59c000200b0) in binary!
	0x5d98  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5d8400020350 (0x58400020350) in binary!
	0x5d80  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5d6c0001fcc0 (0x56c0001fcc0) in binary!
	0x5d68  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5d540001f998 (0x5540001f998) in binary!
	0x5d50  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5d3c00020318 (0x53c00020318) in binary!
	0x5d38  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5d2400020308 (0x52400020308) in binary!
	0x5d20  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5d04000202f8 (0x504000202f8) in binary!
	0x82b7  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5cf4000202e8 (0x4f4000202e8) in binary!
	0x5cf0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5cdc000202d8 (0x4dc000202d8) in binary!
	0x5cd8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5cc400020080 (0x4c400020080) in binary!
	0x5cc0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5cac00020090 (0x4ac00020090) in binary!
	0x5ca8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5c9400020058 (0x49400020058) in binary!
	0x5c90  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5c6c000200d0 (0x46c000200d0) in binary!
	0x5c70  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5c6c0001f868 (0x46c0001f868) in binary!
	0x5c38  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x6ee40001f848 (0x6e40001f848) in binary!
	0x5c40  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5c3c0001f828 (0x43c0001f828) in binary!
	0x5c18  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5e58000200c8 (0x658000200c8) in binary!
	0x5c00  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5e400001f7e8 (0x6400001f7e8) in binary!
	0x5be8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5e280001f7c0 (0x6280001f7c0) in binary!
	0x5bd0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5bc40001f7a0 (0x3c40001f7a0) in binary!
	0x5ba8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5bbc00020140 (0x3bc00020140) in binary!
	0x5ba0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5ba40001f768 (0x3a40001f768) in binary!
	0x5b98  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5fb40001fa78 (0x7b40001fa78) in binary!
	0x1e8000000c  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5b7400020110 (0x37400020110) in binary!
	0x5b70  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5b5c00020168 (0x35c00020168) in binary!
	0x5b58  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5b4400020110 (0x34400020110) in binary!
	0x5b40  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5b2c00020140 (0x32c00020140) in binary!
	0x5b28  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5b040001f6c0 (0x3040001f6c0) in binary!
	0x5d44  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x53540001fae8 (0x3540001fae8) in binary!
	0x5f18  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5f0c0001ffb8 (0x70c0001ffb8) in binary!
	0x6d70  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x6d640001ff10 (0x5640001ff10) in binary!
	0x6d58  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5abc0001ff18 (0x2bc0001ff18) in binary!
	0x5ed0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5dcc0001f630 (0x5cc0001f630) in binary!
	0x5eb8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5cc000020028 (0x4c000020028) in binary!
	0x49a0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5ca800020018 (0x4a800020018) in binary!
	0x7c88  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5e7c0001f5d0 (0x67c0001f5d0) in binary!
	0x5e70  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x497b0001f5a8 (0x17b0001f5a8) in binary!
	0x5e58  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5a240001fd30 (0x2240001fd30) in binary!
	0x5e40  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x2503a4d4152  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x746e6f436465746f (0x7436465746f) in binary!
	0x3a5443454a  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x6e6f436465746f6d (0x36465746f6d) in binary!
	0x0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x1 (0x1) in binary!
	0x46f6d6f7250  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x746e65746e6f43 (0x665746e6f43) in binary!
	0xffffffe8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x766974696d697250 (0x4696d697250) in binary!
	0x663a0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find offset 0xffffffd8 in binary!
WARNING: couldn't find offset 0xffffffd8 in binary!
WARNING: couldn't find address 0xffffffe4ffffffd8 (0x0) in binary!
	0x200008596  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0xd00000017 (0xd00000017) in binary!
	0x700000010  @objc PromotedContent.(null) <stripped>

	// Swift methods
	0x35d20  func <stripped> // getter 
	0x35e20  func <stripped> // getter 
	0x36050  func <stripped> // getter 
	0x361d0  func <stripped> // getter 
	0x36360  func <stripped> // getter 
	0x36560  func <stripped> // getter 
	0x36600  func <stripped> // getter 
	0x366e0  func <stripped> // getter 
	0x367f0  func <stripped> // getter 
	0x36a50  func <stripped> // getter 
	0x36bc0  func <stripped> // getter 
	0x36c40  func <stripped> // setter 
	0x36cd0  func <stripped> // modifyCoroutine 
	0x36d60  func <stripped> // getter 
	0x36e00  func <stripped> // setter 
	0x36f00  func <stripped> // modifyCoroutine 
	0x36ff0  func <stripped> // getter 
	0x37230  func <stripped> // getter 
	0x372c0  func <stripped> // setter 
	0x373c0  func <stripped> // modifyCoroutine 
	0x374e0  func <stripped> // getter 
	0x376b0  func <stripped> // getter 
	0x376f0  func <stripped> // setter 
	0x37750  func <stripped> // modifyCoroutine 
	0x377c0  func <stripped> // getter 
	0x37800  func <stripped> // setter 
	0x37860  func <stripped> // modifyCoroutine 
	0x378f0  func <stripped> // getter 
	0x379a0  func <stripped> // setter 
	0x37ac0  func <stripped> // modifyCoroutine 
	0x37bb0  func <stripped> // getter 
	0x37cb0  func <stripped> // getter 
	0x37d40  func <stripped> // getter 
	0x37ff0  func <stripped> // getter 
	0x380f0  func <stripped> // getter 
	0x38250  func <stripped> // getter 
	0x38510  func <stripped> // getter 
	0x38550  func <stripped> // setter 
	0x385d0  func <stripped> // modifyCoroutine 
 }

 class PromotedContent.JourneyMetricsHelper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var promotedContent : weak APPCPromotableContent? // +0x8 (0x8)
	var promotedContentIdentifier : String // +0x10 (0x10)
	var journeyIdentifier : String // +0x20 (0x10)
	var primitiveCreator : APMetricPrimitiveCreating // +0x30 (0x8)
	var contextIdentifier : String // +0x38 (0x10)
	var hasBeenOnScreen : Bool // +0x48 (0x1)
	var isCurrentlyOnScreen : Bool // +0x49 (0x1)
	var notificationOwner : APMetricNotificationRegisterOwner // +0x50 (0x8)
	var interactionThreshold : Double // +0x58 (0x8)
	var interactionTime : Double? // +0x60 (0x9)
	var viewReady : Bool // +0x69 (0x1)
	var wasCreated : Bool // +0x6a (0x1)
	var hasBeenPlaced : Bool // +0x6b (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5b7400020110 (0x37400020110) in binary!
	0x5b70  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5b5c00020168 (0x35c00020168) in binary!
	0x5b58  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5b4400020110 (0x34400020110) in binary!
	0x5b40  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5b2c00020140 (0x32c00020140) in binary!
	0x5b28  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5b040001f6c0 (0x3040001f6c0) in binary!
	0x5d44  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x53540001fae8 (0x3540001fae8) in binary!
	0x5f18  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5f0c0001ffb8 (0x70c0001ffb8) in binary!
	0x6d70  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x6d640001ff10 (0x5640001ff10) in binary!
	0x6d58  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5abc0001ff18 (0x2bc0001ff18) in binary!
	0x5ed0  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5dcc0001f630 (0x5cc0001f630) in binary!
	0x5eb8  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5cc000020028 (0x4c000020028) in binary!
	0x49a0  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5ca800020018 (0x4a800020018) in binary!
	0x7c88  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5e7c0001f5d0 (0x67c0001f5d0) in binary!
	0x5e70  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x497b0001f5a8 (0x17b0001f5a8) in binary!
	0x5e58  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5a240001fd30 (0x2240001fd30) in binary!
	0x5e40  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x2503a4d4152  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x746e6f436465746f (0x7436465746f) in binary!
	0x3a5443454a  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x6e6f436465746f6d (0x36465746f6d) in binary!
	0x0  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x1 (0x1) in binary!
	0x46f6d6f7250  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x746e65746e6f43 (0x665746e6f43) in binary!
	0xffffffe8  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x766974696d697250 (0x4696d697250) in binary!
	0x663a0  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find offset 0xffffffd8 in binary!
WARNING: couldn't find offset 0xffffffd8 in binary!
WARNING: couldn't find address 0xffffffe4ffffffd8 (0x0) in binary!
	0x200008596  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0xd00000017 (0xd00000017) in binary!
	0x700000010  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x12 (0x12) in binary!
	0x14  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x1 (0x1) in binary!
	0x10  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x10 (0x10) in binary!
	0x663a0  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find offset 0xfffffff0 in binary!
WARNING: couldn't find offset 0xfffffff0 in binary!
WARNING: couldn't find address 0x657a69534743 (0x57a69534743) in binary!
	0x0  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x20000a8e8 (0x20000a8e8) in binary!
	0x663a1  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x43e0000000000000 (0x0) in binary!
	0x746e656d65  @objc JourneyMetricsHelper.(null) <stripped>
	0x0  @objc JourneyMetricsHelper. <stripped>

	// Swift methods
	0x3b380  func <stripped> // getter 
	0x3b400  func <stripped> // setter 
	0x3b4d0  func <stripped> // modifyCoroutine 
	0x3b5c0  func <stripped> // getter 
	0x3b6c0  func <stripped> // getter 
	0x3b7f0  func <stripped> // getter 
	0x3ba40  func <stripped> // getter 
	0x3baf0  func <stripped> // getter 
	0x3bc50  func <stripped> // getter 
	0x3bca0  func <stripped> // getter 
	0x3b2d0  class func JourneyMetricsHelper.__allocating_init(promotedContentIdentifier:contextIdentifier:journeyIdentifier:primitiveCreator:notificationOwner:) // init 
	0x3be70  func <stripped> // method 
	0x3c040  func <stripped> // method 
	0x3c170  func <stripped> // method 
	0x3c1b0  func <stripped> // method 
	0x3c310  func <stripped> // method 
	0x3c570  func <stripped> // method 
	0x3c710  func <stripped> // method 
	0x3ce10  func <stripped> // method 
	0x3ce50  func <stripped> // method 
	0x3d150  func <stripped> // method 
	0x3d250  func <stripped> // method 
	0x3d4c0  func <stripped> // method 
	0x3d7c0  func <stripped> // method 
	0x3d950  func <stripped> // method 
	0x3db20  func <stripped> // method 
	0x3dce0  func <stripped> // method 
	0x3df90  func <stripped> // method 
	0x3dfd0  func <stripped> // method 
	0x3e180  func <stripped> // method 
 }
