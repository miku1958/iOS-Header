 protocol PromotedContent.ContextMetricsNotificationOwnerable // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol PromotedContent.ClientExpansionMetricsHelping // 1 requirements
 {
	// method
 }
 protocol PromotedContent.MediaMetricsUpdating // 1 requirements
 {
	// method
 }
 protocol PromotedContent.MediaMetricsCompleting // 1 requirements
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
	var width : AÖ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : AÖ
 }

 struct __C.APMetricOptions {

	// Properties
	let rawValue : Int
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
WARNING: couldn't find address 0x57840001e888 (0x7840001e888) in binary!
	0x78d0  @objc PrimitiveCreator.(null) <stripped>
WARNING: couldn't find address 0x7d3c0001e338 (0x53c0001e338) in binary!
	0x38000000c  @objc PrimitiveCreator.(null) <stripped>
WARNING: couldn't find address 0x788c0001e780 (0x8c0001e780) in binary!
	0x6a30  @objc PrimitiveCreator.(null) <stripped>

	// Swift methods
	0x1710  func <stripped> // method 
 }

 enum PromotedContent.Placement { }

 enum PromotedContent.ActionStatus { }

 class PromotedContent.ContextKey : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var key : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x788c0001e780 (0x8c0001e780) in binary!
	0x6a30  @objc ContextKey.(null) <stripped>
WARNING: couldn't find address 0x78940001e6e0 (0x940001e6e0) in binary!
	0x148000000c  @objc ContextKey.(null) <stripped>
WARNING: couldn't find address 0x787c0001e6d0 (0x7c0001e6d0) in binary!
	0x7878  @objc ContextKey.(null) <stripped>

	// Swift methods
 }

 class PromotedContent.ContextBuilder : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : œÉ // +0xfeedfacf (0x0)
	var maxSize : CGSize // +0x3 (0x10)
	var current : APPCPromotableContentDepiction? // +0x2d (0x8)
	var next : [APPCPromotableContentDepiction] // +0x6100085 (0x8)
	var requestedAd : String? // +0x19 (0x10)
	var newsContext : NewsSupplementalContext // +0x45545f5f (0x8)
	let resourceLock : APUnfairLock // +0x0 (0x8)
	var adjacentInternal : [APPCPromotableContentDepiction] // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x787c0001e6d0 (0x7c0001e6d0) in binary!
	0x7878  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x5e6c0001e2f0 (0x66c0001e2f0) in binary!
	0x6e60  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x784c0001e2e8 (0x4c0001e2e8) in binary!
	0x7848  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x78340001e2e0 (0x340001e2e0) in binary!
	0x7830  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x781c0001e2d8 (0x1c0001e2d8) in binary!
	0x7810  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x780c0001e2d0 (0xc0001e2d0) in binary!
	0x77f8  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x77f40001e2c8 (0x7f40001e2c8) in binary!
	0x77e0  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x6dfc0001e2c0 (0x5fc0001e2c0) in binary!
	0x6e20  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x6e320001e2b8 (0x6320001e2b8) in binary!
	0x77b8  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x77a40001e5f0 (0x7a40001e5f0) in binary!
	0x7c10  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x614fffc5be8  @objc ContextBuilder.(null) <stripped>
	0x60cfffc5c50  @objc ContextBuilder. <stripped>
	0x1bcfffc5ec8  @objc ContextBuilder.ãÇg <stripped>
	0x7340001e540  @objc ContextBuilder. <stripped>
WARNING: couldn't find address 0x1e23cfffc6168 (0x23cfffc6168) in binary!
	0x5640001e238  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x1e184fffc6230 (0x184fffc6230) in binary!
	0x48000000c  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x76dc0001e220 (0x6dc0001e220) in binary!
	0x76d0  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x76190001e218 (0x6190001e218) in binary!
	0x76d8  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x534fffc74e8  @objc ContextBuilder.(null) <stripped>
	0x52cfffc7550  @objc ContextBuilder.UHâÂAWAVAUATSPIâœHâ”Iâ˝ˇK= <stripped>

	// Swift methods
	0x5ba0  func <stripped> // getter 
	0x5cb0  func <stripped> // setter 
	0x5df0  func <stripped> // modifyCoroutine 
	0x5e70  func <stripped> // getter 
	0x5f10  func <stripped> // setter 
	0x5ff0  func <stripped> // modifyCoroutine 
	0x6080  func <stripped> // getter 
	0x6110  func <stripped> // setter 
	0x61b0  func <stripped> // modifyCoroutine 
	0x6300  func <stripped> // getter 
	0x63a0  func <stripped> // setter 
	0x64a0  func <stripped> // modifyCoroutine 
	0x6590  func <stripped> // getter 
	0x6670  func <stripped> // getter 
	0x6730  func <stripped> // setter 
	0x6840  func <stripped> // modifyCoroutine 
	0x68d0  func <stripped> // getter 
	0x6970  func <stripped> // setter 
	0x6a70  func <stripped> // modifyCoroutine 
	0x6b00  func <stripped> // getter 
	0x6ed0  class func ContextBuilder.__allocating_init(maxSize:current:next:newsContext:requestedAd:) // init 
	0x7090  class func ContextBuilder.__allocating_init(maxSize:current:newsContext:requestedAd:) // init 
	0x7210  func <stripped> // method 
	0x7740  func <stripped> // method 
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
WARNING: couldn't find address 0x77840001e618 (0x7840001e618) in binary!
	0x7778  @objc NativeRepresentation.(null) <stripped>
WARNING: couldn't find address 0x776c0001e610 (0x76c0001e610) in binary!
	0x7760  @objc NativeRepresentation.(null) <stripped>
WARNING: couldn't find address 0x74dc0001e260 (0x4dc0001e260) in binary!
	0x7bc0  @objc NativeRepresentation.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x23cfffc6168  @objc NativeRepresentation.(null) <stripped>
	0x184fffc6230  @objc NativeRepresentation.A\A]A^A_]√f.Ñ <stripped>
	0x6dc0001e220  @objc NativeRepresentation. <stripped>

	// Swift methods
 }

 class PromotedContent.BannerRepresentation : APPCContentRepresentation {

	// Properties
	let adTag : String?
	let outstreamVideoInfo : OutstreamVideoInfo

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x77340001e540 (0x7340001e540) in binary!
	0x7728  @objc BannerRepresentation.(null) <stripped>
WARNING: couldn't find address 0x75640001e238 (0x5640001e238) in binary!
	0x7b88  @objc BannerRepresentation.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x21cfffc6f20  @objc BannerRepresentation.(null) <stripped>
	0x524fffc70b8  @objc BannerRepresentation.˚ˇˇMÖ‰t8MÖˇtLâÁË7˛ <stripped>

	// Swift methods
 }

 struct PromotedContent.PlaceholderRequest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let uuid : œÉ
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
	case nativeAppAd : (count: Int)
 }

 class PromotedContent.DesiredPlacement : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let type : PlacementType
	let count : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x76dc0001e220 (0x6dc0001e220) in binary!
	0x76d0  @objc DesiredPlacement.(null) <stripped>
WARNING: couldn't find address 0x76190001e218 (0x6190001e218) in binary!
	0x76d8  @objc DesiredPlacement.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x534fffc74e8  @objc DesiredPlacement.(null) <stripped>
	0x52cfffc7550  @objc DesiredPlacement.UHâÂAWAVAUATSPIâœHâ”Iâ˝ˇK= <stripped>

	// Swift methods
	0xf250  func <stripped> // getter 
	0xf2c0  class func DesiredPlacement.__allocating_init(type:count:) // init 
 }

 class PromotedContent.VideoRepresentation : APPCContentRepresentation {

	// Properties
	let fileSize : Int // +0x48 (0x8)
	let skipThreshold : Double // +0x50 (0x8)
	let skipEnabled : Bool // +0x58 (0x1)
	let unbranded : Bool // +0x59 (0x1)
	let bitrate : Double // +0x60 (0x8)
	let signalStrength : UInt // +0x68 (0x8)
	let connectionType : Int // +0x70 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_videoURL : =Ñ // +0x0 (0x0)
	let duration : Double // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var originalVideoURL : GÄ // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x76a40001e200 (0x6a40001e200) in binary!
	0x76a0  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x769c0001e530 (0x69c0001e530) in binary!
	0x7690  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x767c0001e4c8 (0x67c0001e4c8) in binary!
	0x7680  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x765c0001e4b8 (0x65c0001e4b8) in binary!
	0x7670  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x766c0001e1a8 (0x66c0001e1a8) in binary!
	0x7670  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x7ac40001e0c0 (0x2c40001e0c0) in binary!
	0xd8000000c  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x76340001e5a0 (0x6340001e5a0) in binary!
	0x7850  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x761c0001e470 (0x61c0001e470) in binary!
	0x7610  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x75e40001e460 (0x5e40001e460) in binary!
	0x75d8  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x75cc0001e548 (0x5cc0001e548) in binary!
	0x8b48  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x75c40001e548 (0x5c40001e548) in binary!
	0x7804  @objc VideoRepresentation.(null) <stripped>

	// Swift methods
	0xf9e0  func <stripped> // getter 
	0xfc40  func <stripped> // setter 
	0xff90  func <stripped> // modifyCoroutine 
 }

 class PromotedContent.PromotedContentInfo : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let promotedContent : APPCPromotableContent // +0x8 (0x8)
	let metricsHelper : APPCLifecycleMetricsHelping // +0x10 (0x8)
	let ready : PromotedContentInfo // +0x18 (0x10)
	var unfilledReason : UnfilledReason // +0x28 (0x8)
	var placeholder : Bool // +0x30 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x76340001e5a0 (0x6340001e5a0) in binary!
	0x7850  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x761c0001e470 (0x61c0001e470) in binary!
	0x7610  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x75e40001e460 (0x5e40001e460) in binary!
	0x75d8  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x75cc0001e548 (0x5cc0001e548) in binary!
	0x8b48  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x75c40001e548 (0x5c40001e548) in binary!
	0x7804  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x7a340001e3c0 (0x2340001e3c0) in binary!
	0x75b0  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x7a1c0001e018 (0x21c0001e018) in binary!
	0x128000000c  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x79e40001e100 (0x1e40001e100) in binary!
	0x6d4c  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x79ec0001e0f8 (0x1ec0001e0f8) in binary!
	0x79e0  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x9ba40001e0f0 (0x3a40001e0f0) in binary!
	0x66b0  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x66a40001e0e8 (0x6a40001e0e8) in binary!
	0x6698  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x66970001e0e0 (0x6970001e0e0) in binary!
	0x6699  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x668d0001e0d8 (0x68d0001e0d8) in binary!
	0x6668  @objc PromotedContentInfo.(null) <stripped>

	// Swift methods
	0x10860  func <stripped> // getter 
	0x10950  func <stripped> // getter 
	0x10a30  func <stripped> // getter 
	0x10ab0  func <stripped> // getter 
	0x10be0  func <stripped> // getter 
	0x10cd0  class func PromotedContentInfo.__allocating_init(promotedContent:placeholder:ready:) // init 
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
	var videoURL : =Ñ // +0x0 (0x0)
	var videoQuality : VideoQuality // +0x0 (0x8)
	var mediaHasStarted : Bool // +0x0 (0x1)
	var promotedContent : weak APPCPromotableContent? // +0x0 (0x8)
	var $__lazy_storage_$_initialVolumeSender : Bool? // +0x0 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x79e40001e100 (0x1e40001e100) in binary!
	0x6d4c  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x79ec0001e0f8 (0x1ec0001e0f8) in binary!
	0x79e0  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x9ba40001e0f0 (0x3a40001e0f0) in binary!
	0x66b0  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x66a40001e0e8 (0x6a40001e0e8) in binary!
	0x6698  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x66970001e0e0 (0x6970001e0e0) in binary!
	0x6699  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x668d0001e0d8 (0x68d0001e0d8) in binary!
	0x6668  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x79740001e0d0 (0x1740001e0d0) in binary!
	0x7968  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x8a4c0001e0c8 (0x24c0001e0c8) in binary!
	0x8a40  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x74cc0001e318 (0x4cc0001e318) in binary!
	0x7938  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffcb5e0  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x4fffcc928  @objc MediaMetricsHelper.(null) <stripped>
	0x54cfffccc20  @objc MediaMetricsHelper.ËÁ <stripped>
	0x54fffcda58  @objc MediaMetricsHelper. <stripped>
	0x6b4fffcdd50  @objc MediaMetricsHelper.$ <stripped>
	0x42c0001e030  @objc MediaMetricsHelper.âﬂËáˇ <stripped>
WARNING: couldn't find address 0x1e02cfffce930 (0x2cfffce930) in binary!
	0x4140001e028  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x1e024fffcea18 (0x24fffcea18) in binary!
	0x3fc0001e020  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x1da4cfffceb10 (0x24cfffceb10) in binary!
	0x3e40001e018  @objc MediaMetricsHelper.(null) <stripped>

	// Swift methods
	0x11460  func <stripped> // getter 
	0x114a0  class func MediaMetricsHelper.__allocating_init(contextIdentifier:promotedContentIdentifier:primitiveCreator:notificationOwner:) // init 
	0x115f0  func <stripped> // method 
	0x117b0  func <stripped> // method 
	0x118b0  func <stripped> // method 
	0x11d40  func <stripped> // method 
	0x11f40  func <stripped> // method 
	0x12230  func <stripped> // method 
	0x12280  func <stripped> // method 
	0x12510  func <stripped> // method 
	0x12850  func <stripped> // method 
	0x128a0  func <stripped> // method 
	0x12be0  func <stripped> // method 
	0x12ed0  func <stripped> // method 
	0x13030  func <stripped> // method 
	0x13070  func <stripped> // method 
	0x133c0  func <stripped> // method 
	0x13410  func <stripped> // method 
 }

 class PromotedContent.DiagnosticMetricsHelper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var contextIdentifier : String
	var promotedContentIdentifier : String
	var primitiveCreator : APMetricPrimitiveCreating
	var notificationOwner : APMetricNotificationRegisterOwner

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x78ec0001e008 (0xec0001e008) in binary!
	0x6c54  @objc DiagnosticMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x78f40001e000 (0xf40001e000) in binary!
	0x7b60  @objc DiagnosticMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5dd80001e058 (0x5d80001e058) in binary!
	0x7460  @objc DiagnosticMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x744c0001e298 (0x44c0001e298) in binary!
	0x78b8  @objc DiagnosticMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x2cfffce930  @objc DiagnosticMetricsHelper.(null) <stripped>
	0x24fffcea18  @objc DiagnosticMetricsHelper.$E∂ÕHç=¨ <stripped>
	0x24cfffceb10  @objc DiagnosticMetricsHelper.˚z <stripped>
	0x14fffcebf8  @objc DiagnosticMetricsHelper. <stripped>

	// Swift methods
	0x14d80  class func DiagnosticMetricsHelper.__allocating_init(contextIdentifier:promotedContentIdentifier:primitiveCreator:notificationOwner:) // init 
	0x14ef0  func <stripped> // method 
	0x15080  func <stripped> // method 
	0x15180  func <stripped> // method 
	0x15e60  func <stripped> // method 
	0x16050  func <stripped> // method 
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
WARNING: couldn't find address 0x742c0001e030 (0x42c0001e030) in binary!
	0x7428  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x74140001e028 (0x4140001e028) in binary!
	0x7410  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x73fc0001e020 (0x3fc0001e020) in binary!
	0x73f8  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x73e40001e018 (0x3e40001e018) in binary!
	0x73e0  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x78240001e010 (0x240001e010) in binary!
	0x73c0  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x782c0001de28 (0x2c0001de28) in binary!
	0x18000000c  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x739c0001e1e8 (0x39c0001e1e8) in binary!
	0x38000000c  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x7f7c0001d9e8 (0x77c0001d9e8) in binary!
	0x8080  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x80740001e360 (0x740001e360) in binary!
	0xd8000000c  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x6b200001ded0 (0x3200001ded0) in binary!
	0x77c0  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x6b080001df88 (0x3080001df88) in binary!
	0x7310  @objc BlacklistReasonCharacteristic.(null) <stripped>

	// Swift methods
	0x16ed0  func <stripped> // getter 
	0x16f10  func <stripped> // setter 
	0x16f70  func <stripped> // modifyCoroutine 
	0x16fd0  func <stripped> // getter 
	0x17010  func <stripped> // setter 
	0x17070  func <stripped> // modifyCoroutine 
	0x170e0  func <stripped> // getter 
	0x17120  func <stripped> // setter 
	0x17180  func <stripped> // modifyCoroutine 
	0x17240  func <stripped> // getter 
	0x17320  func <stripped> // setter 
	0x17460  func <stripped> // modifyCoroutine 
	0x16d60  class func BlacklistReasonCharacteristic.__allocating_init(globalCategories:globalKeywords:campaignCategories:campaignKeywords:) // init 
 }

 enum PromotedContent.SubscriptionType { }

 class PromotedContent.SubscriptionEvent : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x739c0001e1e8 (0x39c0001e1e8) in binary!
	0x38000000c  @objc SubscriptionEvent.(null) <stripped>
 }

 class PromotedContent.Context : APPCBaseContext {

	// Properties
	let inventoryLock : APUnfairLock // +0x0 (0x8)
	var inventory : [APPCPromotableContent] // +0x1710 (0x8)
	let placeholdersLock : APUnfairLock // +0x45e00 (0x8)
	var placeholders : PlaceholderRequest // +0x1710 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastError : } // +0x0 (0x8)
	var requester : APPCControllerRequester? // +0x45545f5f (0x8)
	var blacklistEvaluator : BlacklistReason // +0x80000400 (0x10)
	var newsContext : NewsSupplementalContext // +0x0 (0x8)
	var contextQueue : OS_dispatch_queue // +0x0 (0x8)
	let limit : Int // +0x0 (0x8)
	var fetchingLock : APUnfairLock // +0x74735f5f (0x8)
	var fetching : PlacementType // +0x0 (0x8)
	var waitingLock : APUnfairLock // +0x45545f5f (0x8)
	var waiting : PlacementType // +0x0 (0x8)
	var prefetchLock : APUnfairLock // +0x47510 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6b200001ded0 (0x3200001ded0) in binary!
	0x77c0  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x6b080001df88 (0x3080001df88) in binary!
	0x7310  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x694c0001df78 (0x14c0001df78) in binary!
	0x6970  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x69340001df68 (0x1340001df68) in binary!
	0x6958  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x776c0001e0f8 (0x76c0001e0f8) in binary!
	0x72f0  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x7ed40001df48 (0x6d40001df48) in binary!
	0x6338  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x773c0001dd38 (0x73c0001dd38) in binary!
	0xb8000000c  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x72ac0001e100 (0x2ac0001e100) in binary!
	0x58a8  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x72940001dd30 (0x2940001dd30) in binary!
	0x7288  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x727c0001dd38 (0x27c0001dd38) in binary!
	0x7270  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x726c0001dd30 (0x26c0001dd30) in binary!
	0x68b0  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x68a40001e270 (0xa40001e270) in binary!
	0x7240  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x76ac0001dca8 (0x6ac0001dca8) in binary!
	0x18000000c  @objc Context.(null) <stripped>

	// Swift methods
	0x19940  func <stripped> // getter 
	0x1aa60  func <stripped> // method 
	0x1ae00  func <stripped> // method 
	0x1aec0  func <stripped> // method 
	0x1af70  func <stripped> // method 
 }

 class PromotedContent.BaseContext : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var adjacentInternal : [APPCPromotableContentDepiction] // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : œÉ // +0x47510 (0x0)
	let maxSize : CGSize // +0x0 (0x10)
	let current : APPCPromotableContentDepiction? // +0x80000408 (0x8)
	let next : [APPCPromotableContentDepiction] // +0x6 (0x8)
	let adjacent : [APPCPromotableContentDepiction] // +0x74735f5f (0x8)
	var requestedAd : String? // +0x45c (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x72ac0001e100 (0x2ac0001e100) in binary!
	0x58a8  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x72940001dd30 (0x2940001dd30) in binary!
	0x7288  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x727c0001dd38 (0x27c0001dd38) in binary!
	0x7270  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x726c0001dd30 (0x26c0001dd30) in binary!
	0x68b0  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x68a40001e270 (0xa40001e270) in binary!
	0x7240  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x76ac0001dca8 (0x6ac0001dca8) in binary!
	0x18000000c  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x59240001dea8 (0x1240001dea8) in binary!
	0x48000000c  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x71e40001e2c0 (0x1e40001e2c0) in binary!
	0x8531  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x69b80001de70 (0x1b80001de70) in binary!
	0x71e0  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x434fffe2740  @objc BaseContext.(null) <stripped>
	0x4e50001de28  @objc BaseContext.HãM¿Hã<Hã5)Ú <stripped>

	// Swift methods
	0x28580  func <stripped> // getter 
	0x28970  class func BaseContext.__allocating_init(maxSize:requestedAd:current:next:) // init 
	0x28a10  class func BaseContext.__allocating_init(maxSize:requestedAd:current:adjacent:) // init 
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
WARNING: couldn't find address 0x71e40001e2c0 (0x1e40001e2c0) in binary!
	0x8531  @objc TapAction.(null) <stripped>
WARNING: couldn't find address 0x69b80001de70 (0x1b80001de70) in binary!
	0x71e0  @objc TapAction.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x434fffe2740  @objc TapAction.(null) <stripped>
	0x4e50001de28  @objc TapAction.HãM¿Hã<Hã5)Ú <stripped>

	// Swift methods
	0x2aac0  class func TapAction.__allocating_init(actionType:) // init 
	0x2ab80  func <stripped> // method 
	0x2ab90  func <stripped> // method 
 }

 class PromotedContent.WebTapAction : APPCTapAction {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let destinationURL : GÄ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x85050001de48 (0x5050001de48) in binary!
	0x7638  @objc WebTapAction.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x414fffe2a30  @objc WebTapAction.(null) <stripped>

	// Swift methods
	0x2abc0  class func WebTapAction.__allocating_init(destinationURL:actionType:) // init 
 }

 class PromotedContent.CalendarTapAction : APPCTapAction {

	// Properties
	let eventInfo : [String : Any]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x84a50001dde8 (0x4a50001dde8) in binary!
	0x75d8  @objc CalendarTapAction.(null) <stripped>
WARNING: couldn't find address 0x128000000c (0x128000000c) in binary!
	0x5d4fffe3b40  @objc CalendarTapAction.(null) <stripped>

	// Swift methods
	0x2af70  class func CalendarTapAction.__allocating_init(info:) // init 
 }

 class PromotedContent.StoreTapAction : APPCTapAction {

	// Properties
	let adamIdentifier : NSNumber
	let iTunesMetadata : [String : String]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x84e50001de28 (0x4e50001de28) in binary!
	0x7618  @objc StoreTapAction.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x3f4fffe2fe0  @objc StoreTapAction.(null) <stripped>

	// Swift methods
	0x2ac50  class func StoreTapAction.__allocating_init(adamIdentifier:iTunesMetadata:) // init 
 }

 class PromotedContent.ExpandTapAction : APPCTapAction {

	// Properties
	let adIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let expandedDestinationURL : GÄ
	let maximumExpandedSize : CGSize
	var delegate : weak APWebProcessDelegate & WKNavigationDelegate?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x84c50001de08 (0x4c50001de08) in binary!
	0x75f8  @objc ExpandTapAction.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x3d4fffe2870  @objc ExpandTapAction.(null) <stripped>

	// Swift methods
	0x2b380  func <stripped> // getter 
	0x2b3c0  func <stripped> // setter 
	0x2b410  func <stripped> // modifyCoroutine 
	0x2b4e0  class func ExpandTapAction.__allocating_init(adIdentifier:expandedDestinationURL:maximumExpandedSize:delegate:) // init 
 }

 enum PromotedContent.LoadFailed { }

 class PromotedContent.PromotedContentMetric : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var route : Int // +0x8 (0x8)
	var metric : Int // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : °y // +0x754 (0x0)
	var contentId : String? // +0x4796c (0x10)
	var clientBundleIdentifier : String? // +0x0 (0x10)
	var deviceIdentifier : String? // +0x80000400 (0x10)
	var userIdentifier : String? // +0x0 (0x10)
	var properties : [String : Any]? // +0x626f5f5f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x712c0001e230 (0x12c0001e230) in binary!
	0x86a8  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x71140001e220 (0x1140001e220) in binary!
	0x8690  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x711c0001e210 (0x11c0001e210) in binary!
	0x7118  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x71040001ddb0 (0x1040001ddb0) in binary!
	0x7100  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x70ec0001e1f0 (0xec0001e1f0) in binary!
	0x70e8  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x70d40001e1e0 (0xd40001e1e0) in binary!
	0x70d0  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x70bc0001e1d0 (0xbc0001e1d0) in binary!
	0x70b8  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x70a40001e1c0 (0xa40001e1c0) in binary!
	0x70a0  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x708c0001ded8 (0x8c0001ded8) in binary!
	0x74f8  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x75cfffe8800  @objc PromotedContentMetric.(null) <stripped>
	0x6acfffe88a8  @objc PromotedContentMetric.˜Lâ˛LâÍHâŸMâ‡Lãm∏ËJ# <stripped>
	0x6a4fffe8910  @objc PromotedContentMetric.HâE–Lâ˜Ëˆ <stripped>
	0x664fffe8a58  @objc PromotedContentMetric.ˆ <stripped>
	0xfffe8bb0  @objc PromotedContentMetric.Î1€E1‰LâÔˇ‡C <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x25cfffe8d98  @objc PromotedContentMetric.(null) <stripped>
	0x7d40001de28  @objc PromotedContentMetric.$ <stripped>
WARNING: couldn't find address 0x1de84fffe9308 (0x684fffe9308) in binary!
	0x79c0001e048  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x1e044fffe9370 (0x44fffe9370) in binary!
	0x7a40001e040  @objc PromotedContentMetric.(null) <stripped>

	// Swift methods
	0x2c3c0  func <stripped> // getter 
	0x2c490  func <stripped> // getter 
	0x2c680  func <stripped> // getter 
	0x2c890  func <stripped> // getter 
	0x2c930  func <stripped> // getter 
	0x2c9d0  func <stripped> // getter 
	0x2cae0  func <stripped> // getter 
	0x2cd50  func <stripped> // getter 
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

 enum PromotedContent.DesiredPosition { }

 class PromotedContent.ContentRepresentation : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String
	let adType : PlacementType
	let desiredPosition : DesiredPosition
	let privacyMarkerPosition : PrivacyMarkerPosition
	let adSize : CGSize
	let tapAction : TapAction

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x706c0001dec0 (0x6c0001dec0) in binary!
	0x7040  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x70340001deb0 (0x340001deb0) in binary!
	0x7028  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x56440001df48 (0x6440001df48) in binary!
	0x7030  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x67f00001dca8 (0x7f00001dca8) in binary!
	0x7018  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x74840001da80 (0x4840001da80) in binary!
	0x28000000c  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x6ff40001de40 (0x7f40001de40) in binary!
	0x7460  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x684fffe9308  @objc ContentRepresentation.(null) <stripped>
	0x44fffe9370  @objc ContentRepresentation.UHâÂAWAVAUATSHÉÏ(MâÃMâ≈HâÀIâ÷ÚM¿ÚE»Hâ}∏Hç=Ón <stripped>
	0x3cfffe93d8  @objc ContentRepresentation.^A_]√f.Ñ <stripped>

	// Swift methods
	0x31320  class func ContentRepresentation.__allocating_init(identifier:adType:desiredPosition:privacyMarkerPosition:adSize:tapAction:) // init 
	0x31010  func <stripped> // method 
 }

 class PromotedContent.OutstreamVideoInfo : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let videoAssetURL : =Ñ // +0x6c687465 (0x0)
	let videoDuration : NSNumber // +0x45545f5f (0x8)
	let bitrate : Double // +0x0 (0x8)
	let signalStrength : UInt // +0x480c0 (0x8)
	let connectionType : Int // +0x13e4 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6ff40001de40 (0x7f40001de40) in binary!
	0x7460  @objc OutstreamVideoInfo.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x684fffe9308  @objc OutstreamVideoInfo.(null) <stripped>

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
WARNING: couldn't find address 0x6fd40001de28 (0x7d40001de28) in binary!
	0x6fc0  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x6f9c0001e048 (0x79c0001e048) in binary!
	0x6fb0  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x6fa40001e040 (0x7a40001e040) in binary!
	0x6f98  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x6f8c0001e038 (0x78c0001e038) in binary!
	0x6f80  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x8a3c0001dc50 (0x23c0001dc50) in binary!
	0x8a50  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x6f5c0001dda8 (0x75c0001dda8) in binary!
	0x73c8  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe9d60  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0x66cfffeaac8  @objc ContentDepiction.(null) <stripped>
	0x3fcfffeac90  @objc ContentDepiction.	ŒIø <stripped>
	0x15cfffeaf28  @objc ContentDepiction.HâﬂË  <stripped>
	0x6d40001dbd8  @objc ContentDepiction.Ë <stripped>
WARNING: couldn't find address 0x1dbd4fffeb1b8 (0x3d4fffeb1b8) in binary!
	0x6bc0001dbd0  @objc ContentDepiction.(null) <stripped>

	// Swift methods
	0x31f90  class func ContentDepiction.__allocating_init(identifier:placement:language:locale:searchTerms:keywords:categories:) // init 
	0x31b20  class func ContentDepiction.__allocating_init(identifier:adjacentPosition:placement:language:locale:searchTerms:keywords:categories:) // init 
 }

 class PromotedContent.NativeAppAdRepresentation : APPCContentRepresentation {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8b840001dc28 (0x3840001dc28) in binary!
	0x68000000c  @objc NativeAppAdRepresentation.(null) <stripped>

	// Swift methods
 }

 struct PromotedContent.ClientPolicyExclusion {

	// Properties
	let rawValue : Int // +0x0
 }

 class PromotedContent.LifecycleMetricsHelper : NSObject /usr/lib/libobjc.A.dylib, ClientExpansionMetricsHelping {

	// Properties
	var metricsHelper : APPCJourneyMetricsHelping
	var placeholder : Bool
	var wasOnScreen : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x739c0001dc18 (0x39c0001dc18) in binary!
	0x7390  @objc LifecycleMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x73840001e090 (0x3840001e090) in binary!
	0x5874  @objc LifecycleMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x6ef40001dd40 (0x6f40001dd40) in binary!
	0x7360  @objc LifecycleMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x7e8000000c (0x7e8000000c) in binary!
	0x3d4fffeb1b8  @objc LifecycleMetricsHelper.(null) <stripped>
	0x3ccfffeb2a0  @objc LifecycleMetricsHelper.UHâÂAWAVAUATSHÉÏMâƒHâM¿Iâ◊HâÛIâ˛ÚM»ÚE–LâÔË› <stripped>
	0x3c4fffeb628  @objc LifecycleMetricsHelper.T* <stripped>

	// Swift methods
	0x33030  class func LifecycleMetricsHelper.__allocating_init(metricsHelper:placeholder:) // init 
	0x333f0  func <stripped> // method 
	0x33580  func <stripped> // method 
	0x33600  func <stripped> // method 
	0x33760  func <stripped> // method 
	0x337e0  func <stripped> // method 
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
	var referralCampaignId : String?
	var referralLocation : String?
	var referralPublisherInventory : NSNumber?
	var numOfArticlesSeenSinceLastInterstitial : NSNumber?
	var playerAspectRatio : NSNumber?
	var subscriptionType : String?
	var currentIssueId : String?
	var anfComponentMetadataInternal : [String : Any]?
	var currentIssueIsDraftInternal : NSNumber?
	var currentIssueIsCurrentInternal : NSNumber?

	// ObjC -> Swift bridged methods
	0x6ed0  ContextBuilder.__allocating_init(maxSize:current:next:newsContext:requestedAd:)
WARNING: couldn't find address 0x6ebc0001dbd0 (0x6bc0001dbd0) in binary!
	0x6eb8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6ea40001dbc8 (0x6a40001dbc8) in binary!
	0x6ea0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6e8c0001dbc0 (0x68c0001dbc0) in binary!
	0x6e88  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6e740001dbb8 (0x6740001dbb8) in binary!
	0x6e70  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6e5c0001dbb0 (0x65c0001dbb0) in binary!
	0x6e58  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6e440001dba8 (0x6440001dba8) in binary!
	0x6e40  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6e2c0001dba0 (0x62c0001dba0) in binary!
	0x6e28  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6e140001db98 (0x6140001db98) in binary!
	0x6e10  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6dfc0001db90 (0x5fc0001db90) in binary!
	0x6df8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6de40001db88 (0x5e40001db88) in binary!
	0x6de0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6dcc0001db80 (0x5cc0001db80) in binary!
	0x6dc8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6db40001db78 (0x5b40001db78) in binary!
	0x6db0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6d9c0001db70 (0x59c0001db70) in binary!
	0x6d98  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6d840001d7f0 (0x5840001d7f0) in binary!
	0x6d80  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6d6c0001d7c8 (0x56c0001d7c8) in binary!
	0x6d68  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6d540001d7a0 (0x5540001d7a0) in binary!
	0x6d50  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6d3c0001d778 (0x53c0001d778) in binary!
	0x6d38  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6d240001d750 (0x5240001d750) in binary!
	0x6d20  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6d0c0001d728 (0x50c0001d728) in binary!
	0x6d08  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6cf40001d700 (0x4f40001d700) in binary!
	0x6cf0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6cdc0001d6d8 (0x4dc0001d6d8) in binary!
	0x6cd8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6cc40001d6b0 (0x4c40001d6b0) in binary!
	0x6cc0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6cac0001d688 (0x4ac0001d688) in binary!
	0x6ca8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6c940001d660 (0x4940001d660) in binary!
	0x6c90  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6c7c0001d638 (0x47c0001d638) in binary!
	0x6c78  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6c640001d610 (0x4640001d610) in binary!
	0x6c60  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6c4c0001d5e8 (0x44c0001d5e8) in binary!
	0x6c48  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6c340001d5c0 (0x4340001d5c0) in binary!
	0x6c30  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6c1c0001d598 (0x41c0001d598) in binary!
	0x6c18  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6c040001d570 (0x4040001d570) in binary!
	0x6c00  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6bec0001d548 (0x3ec0001d548) in binary!
	0x6be8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6bd40001d520 (0x3d40001d520) in binary!
	0x6bd0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6bbc0001d4f8 (0x3bc0001d4f8) in binary!
	0x6bb8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6ba40001d4d0 (0x3a40001d4d0) in binary!
	0x6ba0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6b8c0001d4a8 (0x38c0001d4a8) in binary!
	0x6b88  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6b740001d480 (0x3740001d480) in binary!
	0x6b70  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6b5c0001d458 (0x35c0001d458) in binary!
	0x6b58  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6b440001d430 (0x3440001d430) in binary!
	0x6b40  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6b2c0001d408 (0x32c0001d408) in binary!
	0x6b28  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6b140001d3e0 (0x3140001d3e0) in binary!
	0x6b10  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6afc0001d3b8 (0x2fc0001d3b8) in binary!
	0x6af8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6ae40001d390 (0x2e40001d390) in binary!
	0x6ae0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6acc0001d368 (0x2cc0001d368) in binary!
	0x6ac8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6ab40001d340 (0x2b40001d340) in binary!
	0x6ab0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6a9c0001d318 (0x29c0001d318) in binary!
	0x6a98  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6a840001d2f0 (0x2840001d2f0) in binary!
	0x6a80  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6a6c0001d2c8 (0x26c0001d2c8) in binary!
	0x6a68  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6a540001d2a0 (0x2540001d2a0) in binary!
	0x6a50  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6a3c0001d278 (0x23c0001d278) in binary!
	0x6a38  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6a240001d250 (0x2240001d250) in binary!
	0x6a20  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6a0c0001d228 (0x20c0001d228) in binary!
	0x6a08  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69f40001da80 (0x1f40001da80) in binary!
	0x69f0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69dc0001d1e0 (0x1dc0001d1e0) in binary!
	0x69d8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69c40001d1b8 (0x1c40001d1b8) in binary!
	0x69c0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69ac0001d190 (0x1ac0001d190) in binary!
	0x69a8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69940001d168 (0x1940001d168) in binary!
	0x6990  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x697c0001d140 (0x17c0001d140) in binary!
	0x6978  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69640001d118 (0x1640001d118) in binary!
	0x6960  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x692c0001d0f0 (0x12c0001d0f0) in binary!
	0x7ea8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69140001d0c8 (0x1140001d0c8) in binary!
	0x7e90  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x691c0001d0a0 (0x11c0001d0a0) in binary!
	0x8fca  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69040001d750 (0x1040001d750) in binary!
	0x6d70  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x338000000c (0x338000000c) in binary!
	0x44ffff3ef8  @objc NewsSupplementalContext.(null) <stripped>
	0x714ffff3fa0  @objc NewsSupplementalContext.Hã® <stripped>
	0x244ffff4068  @objc NewsSupplementalContext. <stripped>
	0x374ffff41a0  @objc NewsSupplementalContext.HâﬂˇVK <stripped>
	0x7ccffff4388  @objc NewsSupplementalContext.S® <stripped>
	0x20cffff44d0  @objc NewsSupplementalContext. <stripped>
	0x1fcffff4668  @objc NewsSupplementalContext.HçŸ= <stripped>
	0x1ecffff4830  @objc NewsSupplementalContext.â˛L-è® <stripped>
	0x1dcffff48b8  @objc NewsSupplementalContext. <stripped>
	0x1ccffff4980  @objc NewsSupplementalContext.H~«Ë1 <stripped>
	0x70cffff4ac8  @objc NewsSupplementalContext. <stripped>
	0x71cffff4d00  @objc NewsSupplementalContext.ãÚ® <stripped>
	0x6e4ffff4e78  @objc NewsSupplementalContext.UHâÂAWAVSHÉÏ8)E–Lã>HãÚ® <stripped>
	0x714ffff5020  @objc NewsSupplementalContext.p¿NfH~«Ëç <stripped>
	0x69cffff51d8  @objc NewsSupplementalContext.Lã?HãF© <stripped>
	0x67cffff5430  @objc NewsSupplementalContext.Lã?HãF© <stripped>
	0x65cffff56b8  @objc NewsSupplementalContext.9√áB <stripped>
	0x774ffff58b0  @objc NewsSupplementalContext.ã|Mâ| <stripped>
	0x61cffff59a8  @objc NewsSupplementalContext.â˛Hãcß <stripped>
	0x5fcffff5ce0  @objc NewsSupplementalContext.]√f.Ñ <stripped>
	0x5dcffff5dc8  @objc NewsSupplementalContext.∏J <stripped>
	0x5bcffff6010  @objc NewsSupplementalContext. <stripped>
	0x7fcffff61f8  @objc NewsSupplementalContext.â¸HÖ“tHâ◊ËÎ <stripped>
	0x584ffff6590  @objc NewsSupplementalContext.ATSHÉÏ Iâ¸HÖ“tHâ◊ËÎ <stripped>
	0x4e4ffff6ba8  @objc NewsSupplementalContext.[A^]√f.Ñ <stripped>
	0xffff6ca0  @objc NewsSupplementalContext. <stripped>
WARNING: couldn't find address 0x1f8000000c (0x1f8000000c) in binary!
	0x7fcffff99c8  @objc NewsSupplementalContext.(null) <stripped>
	0x514ffff9c10  @objc NewsSupplementalContext.UHâÂAVSHÉÏ Hã^™ <stripped>
	0x59cffff9c98  @objc NewsSupplementalContext. <stripped>
	0x4dcffff9de0  @objc NewsSupplementalContext.Ë <stripped>
	0x4b4ffffa0d8  @objc NewsSupplementalContext.“1…Ë <stripped>
	0x174ffffa5e0  @objc NewsSupplementalContext.AUPHâ˛L-è® <stripped>
	0x4ccffffa788  @objc NewsSupplementalContext.Ñ <stripped>
	0x634ffffabb0  @objc NewsSupplementalContext.Lãm∏HãU»L9ÍLãe∞Iø¯ˇˇˇˇˇˇ <stripped>
	0x44cffffb548  @objc NewsSupplementalContext.∏HãM–HãU»È+ <stripped>
	0xe4ffffb970  @objc NewsSupplementalContext.ã?Lã&Hãº¶ <stripped>
	0x40cffffbdf8  @objc NewsSupplementalContext. <stripped>
	0x3ecffffc2b0  @objc NewsSupplementalContext.ƒLâˇËM$ <stripped>
	0x3c4ffffc688  @objc NewsSupplementalContext.Hâ√MãgL9„IL‹HÖ€t\Hç=éS <stripped>
	0x39cffffcb60  @objc NewsSupplementalContext.UHâÂAWAVSHÉÏIâ∆Lã?Hãß <stripped>
	0x364ffffce98  @objc NewsSupplementalContext. <stripped>
	0xffffd200  @objc NewsSupplementalContext.ã“y <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x2503a4d4152  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x746e6f436465746f (0x7436465746f) in binary!
	0x3a5443454a  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6e6f436465746f6d (0x36465746f6d) in binary!
	0x0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x1 (0x1) in binary!
	0x46f6d6f7250  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x746e65746e6f43 (0x665746e6f43) in binary!
	0xffffffe8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x766974696d697250 (0x4696d697250) in binary!
	0x6ed40  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find offset 0xffffffd8 in binary!
WARNING: couldn't find offset 0xffffffd8 in binary!
WARNING: couldn't find address 0xffffffe4ffffffd8 (0x0) in binary!
	0x200009536  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0xd00000017 (0xd00000017) in binary!
	0x700000010  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x12 (0x12) in binary!
	0x14  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x1 (0x1) in binary!
	0x10  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x10 (0x10) in binary!
	0x6ed40  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find offset 0xfffffff0 in binary!
WARNING: couldn't find offset 0xfffffff0 in binary!
WARNING: couldn't find address 0x657a69534743 (0x57a69534743) in binary!
	0x0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x20000bb0c (0x20000bb0c) in binary!
	0x274654d5041  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find offset 0xffffffe8 in binary!
WARNING: couldn't find offset 0xffffffe8 in binary!
WARNING: couldn't find address 0x736e6f6974704f (0x66f6974704f) in binary!
	0x0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x10000bac0 (0x10000bac0) in binary!
	0x11d21  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x3008000000000 (0x8000000000) in binary!
	0x50d000094af  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x10000fffb88a8 (0xfffb88a8) in binary!
	0x11b51  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x3008000000000 (0x8000000000) in binary!
	0xfffb8870  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x2576400000000 (0x76400000000) in binary!
	0x8000000000  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x11abd00000003 (0x2bd00000003) in binary!
	0x32dfffb8890  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x10000fffb8898 (0xfffb8898) in binary!
	0x11bc1  @objc NewsSupplementalContext.(null) <stripped>

	// Swift methods
	0x33cb0  func <stripped> // getter 
	0x33cf0  func <stripped> // setter 
	0x33d50  func <stripped> // modifyCoroutine 
	0x33df0  func <stripped> // getter 
	0x33e80  func <stripped> // setter 
	0x340d0  func <stripped> // modifyCoroutine 
	0x34150  func <stripped> // getter 
	0x34190  func <stripped> // setter 
	0x341f0  func <stripped> // modifyCoroutine 
	0x34250  func <stripped> // getter 
	0x34290  func <stripped> // setter 
	0x342f0  func <stripped> // modifyCoroutine 
	0x34350  func <stripped> // getter 
	0x34390  func <stripped> // setter 
	0x343f0  func <stripped> // modifyCoroutine 
	0x34460  func <stripped> // getter 
	0x344a0  func <stripped> // setter 
	0x34500  func <stripped> // modifyCoroutine 
	0x34560  func <stripped> // getter 
	0x345a0  func <stripped> // setter 
	0x34600  func <stripped> // modifyCoroutine 
	0x34660  func <stripped> // getter 
	0x346a0  func <stripped> // setter 
	0x34700  func <stripped> // modifyCoroutine 
	0x347e0  func <stripped> // getter 
	0x348a0  func <stripped> // setter 
	0x34900  func <stripped> // modifyCoroutine 
	0x34960  func <stripped> // getter 
	0x349a0  func <stripped> // setter 
	0x34a00  func <stripped> // modifyCoroutine 
	0x34a60  func <stripped> // getter 
	0x34aa0  func <stripped> // setter 
	0x34b00  func <stripped> // modifyCoroutine 
	0x34b60  func <stripped> // getter 
	0x34ba0  func <stripped> // setter 
	0x34c00  func <stripped> // modifyCoroutine 
	0x34c60  func <stripped> // getter 
	0x34ca0  func <stripped> // setter 
	0x34d00  func <stripped> // modifyCoroutine 
	0x34d60  func <stripped> // getter 
	0x34da0  func <stripped> // setter 
	0x34e00  func <stripped> // modifyCoroutine 
	0x34e60  func <stripped> // getter 
	0x34ea0  func <stripped> // setter 
	0x34f00  func <stripped> // modifyCoroutine 
	0x34f60  func <stripped> // getter 
	0x34fa0  func <stripped> // setter 
	0x35000  func <stripped> // modifyCoroutine 
	0x35060  func <stripped> // getter 
	0x350a0  func <stripped> // setter 
	0x35100  func <stripped> // modifyCoroutine 
	0x35160  func <stripped> // getter 
	0x351a0  func <stripped> // setter 
	0x35200  func <stripped> // modifyCoroutine 
	0x35260  func <stripped> // getter 
	0x352a0  func <stripped> // setter 
	0x35300  func <stripped> // modifyCoroutine 
	0x35360  func <stripped> // getter 
	0x353a0  func <stripped> // setter 
	0x35400  func <stripped> // modifyCoroutine 
	0x35460  func <stripped> // getter 
	0x354a0  func <stripped> // setter 
	0x35500  func <stripped> // modifyCoroutine 
	0x35560  func <stripped> // getter 
	0x355a0  func <stripped> // setter 
	0x35600  func <stripped> // modifyCoroutine 
	0x35660  func <stripped> // getter 
	0x356a0  func <stripped> // setter 
	0x35700  func <stripped> // modifyCoroutine 
	0x35760  func <stripped> // getter 
	0x357a0  func <stripped> // setter 
	0x35800  func <stripped> // modifyCoroutine 
	0x35860  func <stripped> // getter 
	0x358a0  func <stripped> // setter 
	0x35900  func <stripped> // modifyCoroutine 
	0x35960  func <stripped> // getter 
	0x359a0  func <stripped> // setter 
	0x35a00  func <stripped> // modifyCoroutine 
	0x35a60  func <stripped> // getter 
	0x35aa0  func <stripped> // setter 
	0x35b00  func <stripped> // modifyCoroutine 
	0x35b60  func <stripped> // getter 
	0x35ba0  func <stripped> // setter 
	0x35c00  func <stripped> // modifyCoroutine 
	0x35c60  func <stripped> // getter 
	0x35ca0  func <stripped> // setter 
	0x35d00  func <stripped> // modifyCoroutine 
	0x35d60  func <stripped> // getter 
	0x35da0  func <stripped> // setter 
	0x35e00  func <stripped> // modifyCoroutine 
	0x35e60  func <stripped> // getter 
	0x35ea0  func <stripped> // setter 
	0x35f00  func <stripped> // modifyCoroutine 
	0x35f60  func <stripped> // getter 
	0x35fa0  func <stripped> // setter 
	0x36000  func <stripped> // modifyCoroutine 
	0x36060  func <stripped> // getter 
	0x360a0  func <stripped> // setter 
	0x36100  func <stripped> // modifyCoroutine 
	0x36160  func <stripped> // getter 
	0x361a0  func <stripped> // setter 
	0x36200  func <stripped> // modifyCoroutine 
	0x36260  func <stripped> // getter 
	0x362a0  func <stripped> // setter 
	0x36300  func <stripped> // modifyCoroutine 
	0x36360  func <stripped> // getter 
	0x363a0  func <stripped> // setter 
	0x36400  func <stripped> // modifyCoroutine 
	0x36460  func <stripped> // getter 
	0x364a0  func <stripped> // setter 
	0x36500  func <stripped> // modifyCoroutine 
	0x36560  func <stripped> // getter 
	0x365a0  func <stripped> // setter 
	0x36600  func <stripped> // modifyCoroutine 
	0x366d0  func <stripped> // getter 
	0x367c0  func <stripped> // setter 
	0x36900  func <stripped> // modifyCoroutine 
	0x36960  func <stripped> // getter 
	0x369a0  func <stripped> // setter 
	0x36a00  func <stripped> // modifyCoroutine 
	0x36a60  func <stripped> // getter 
	0x36aa0  func <stripped> // setter 
	0x36b00  func <stripped> // modifyCoroutine 
	0x36b60  func <stripped> // getter 
	0x36ba0  func <stripped> // setter 
	0x36c00  func <stripped> // modifyCoroutine 
	0x36c60  func <stripped> // getter 
	0x36ca0  func <stripped> // setter 
	0x36d00  func <stripped> // modifyCoroutine 
	0x36d60  func <stripped> // getter 
	0x36da0  func <stripped> // setter 
	0x36e00  func <stripped> // modifyCoroutine 
	0x36e60  func <stripped> // getter 
	0x36ea0  func <stripped> // setter 
	0x36f00  func <stripped> // modifyCoroutine 
	0x36f60  func <stripped> // getter 
	0x36fa0  func <stripped> // setter 
	0x37000  func <stripped> // modifyCoroutine 
	0x37060  func <stripped> // getter 
	0x370a0  func <stripped> // setter 
	0x37100  func <stripped> // modifyCoroutine 
	0x37160  func <stripped> // getter 
	0x371a0  func <stripped> // setter 
	0x37200  func <stripped> // modifyCoroutine 
	0x37260  func <stripped> // getter 
	0x372a0  func <stripped> // setter 
	0x37300  func <stripped> // modifyCoroutine 
	0x37360  func <stripped> // getter 
	0x373a0  func <stripped> // setter 
	0x37400  func <stripped> // modifyCoroutine 
	0x37460  func <stripped> // getter 
	0x374a0  func <stripped> // setter 
	0x37500  func <stripped> // modifyCoroutine 
	0x37550  func <stripped> // getter 
	0x37570  func <stripped> // setter 
	0x375a0  func <stripped> // modifyCoroutine 
	0x375f0  func <stripped> // getter 
	0x37630  func <stripped> // setter 
	0x37690  func <stripped> // modifyCoroutine 
	0x37710  func <stripped> // getter 
	0x37730  func <stripped> // setter 
	0x37750  func <stripped> // modifyCoroutine 
	0x377b0  func <stripped> // getter 
	0x377f0  func <stripped> // setter 
	0x37850  func <stripped> // modifyCoroutine 
	0x378b0  func <stripped> // getter 
	0x378f0  func <stripped> // setter 
	0x37950  func <stripped> // modifyCoroutine 
	0x379b0  func <stripped> // getter 
	0x379f0  func <stripped> // setter 
	0x37a50  func <stripped> // modifyCoroutine 
	0x37af0  func <stripped> // getter 
	0x37bd0  func <stripped> // setter 
	0x37d10  func <stripped> // modifyCoroutine 
	0x37d70  func <stripped> // getter 
	0x37db0  func <stripped> // setter 
	0x37e10  func <stripped> // modifyCoroutine 
	0x37ee0  func <stripped> // getter 
	0x37fe0  func <stripped> // setter 
	0x38140  func <stripped> // modifyCoroutine 
	0x381a0  func <stripped> // getter 
	0x38200  func <stripped> // setter 
	0x38290  func <stripped> // modifyCoroutine 
	0x38350  func <stripped> // getter 
	0x383e0  func <stripped> // setter 
	0x384f0  func <stripped> // modifyCoroutine 
	0x385d0  func <stripped> // getter 
	0x38870  func <stripped> // method 
 }

 class PromotedContent.PromotedContent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let diagnosticMetricHelper : APPCDiagnosticMetricsHelping // +0x8 (0x8)
	var metricsHelper : APPCJourneyMetricsHelping // +0x10 (0x8)
	var identifier : String // +0x18 (0x10)
	var journeyIdentifier : String // +0x28 (0x10)
	var context : weak APPCPromotableContext? // +0x38 (0x8)
	var metaData : [String : [String : String]]? // +0x40 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var disclosureURL : =Ñ // +0x480c0 (0x0)
	var disclosureRendererPayload : String? // +0x0 (0x10)
	var minimumTimeBetweenPresentation : UInt // +0x0 (0x8)
	var brandName : String? // +0x0 (0x10)
	var campaignText : String? // +0x6f635f5f (0x10)
	var representations : [APPCPromotableContentRepresentation] // +0x0 (0x8)
	var bestRepresentation : APPCPromotableContentRepresentation? // +0x45545f5f (0x8)
	var error : NSError? // +0x0 (0x8)
	let placeholder : Bool // +0x494b0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var expirationDate : °y // +0x3b88 (0x0)
	var serverUnfilledReason : UnfilledReason // +0x494b0 (0x8)
	var mediaMetricHelper : APPCMediaMetricsHelping? // +0x0 (0x8)
	var attachedToView : Bool // +0x0 (0x1)
	var vended : Bool // +0x73635f5f (0x1)
	var discarded : Bool // +0x67 (0x1)
	var consumed : Bool // +0x45545f5f (0x1)
	var unfilledReasonDelegate : UnfilledReasonDelegate // +0x0 (0x10)
	var overriddenAdType : PlacementType // +0x0 (0x9)
	var discardReason : JourneyMetricDiscardReasonCode // +0x0 (0x9)
	let primitiveCreator : APMetricPrimitiveCreating // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x68e40001d058 (0xe40001d058) in binary!
	0x68d8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x68d40001d038 (0xd40001d038) in binary!
	0x68c0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x68bc0001d338 (0xbc0001d338) in binary!
	0x68a8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x68a40001d000 (0xa40001d000) in binary!
	0x6890  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x688c0001cfe0 (0x8c0001cfe0) in binary!
	0x6878  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x68740001cfb8 (0x740001cfb8) in binary!
	0x6860  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x685c0001cf98 (0x5c0001cf98) in binary!
	0x6848  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x68440001cf78 (0x440001cf78) in binary!
	0x6828  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x922b0001cf58 (0x22b0001cf58) in binary!
	0x6818  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x68140001cf38 (0x140001cf38) in binary!
	0x6800  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x67fc0001cf18 (0x7fc0001cf18) in binary!
	0x67e8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x67e40001cef8 (0x7e40001cef8) in binary!
	0x67d0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x67cc0001d6c8 (0x7cc0001d6c8) in binary!
	0x67b8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x67b40001d808 (0x7b40001d808) in binary!
	0x6790  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x67940001d968 (0x7940001d968) in binary!
	0x6790  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x675c0001d698 (0x75c0001d698) in binary!
	0x7cd8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x67640001d678 (0x7640001d678) in binary!
	0x6760  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x673c0001ce48 (0x73c0001ce48) in binary!
	0x697c  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x67240001d7a0 (0x7240001d7a0) in binary!
	0x6964  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x670c0001d670 (0x70c0001d670) in binary!
	0x694c  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x66f40001d788 (0x6f40001d788) in binary!
	0x6934  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x66dc0001d620 (0x6dc0001d620) in binary!
	0x66d0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x66b40001d5d0 (0x6b40001d5d0) in binary!
	0x66c8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x66ac0001d6f8 (0x6ac0001d6f8) in binary!
	0x66b0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x66ac0001cd70 (0x6ac0001cd70) in binary!
	0x6698  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x6b040001d100 (0x3040001d100) in binary!
	0x1f8000000c  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x66740001d7e0 (0x6740001d7e0) in binary!
	0x6670  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x665c0001d840 (0x65c0001d840) in binary!
	0x6658  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x66440001d7e0 (0x6440001d7e0) in binary!
	0x6640  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x662c0001d818 (0x62c0001d818) in binary!
	0x6628  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x66040001ccc8 (0x6040001ccc8) in binary!
	0x6844  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5dc80001d178 (0x5c80001d178) in binary!
	0x6a68  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x6a5c0001d660 (0x25c0001d660) in binary!
	0x7b40  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x690c0001d5b0 (0x10c0001d5b0) in binary!
	0x7b28  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x65bc0001d5b0 (0x5bc0001d5b0) in binary!
	0x6a20  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x68dc0001cc38 (0xdc0001cc38) in binary!
	0x6a08  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x67c00001d6f8 (0x7c00001d6f8) in binary!
	0x53f0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x67a80001d6e8 (0x7a80001d6e8) in binary!
	0x8ba8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x69cc0001cbd8 (0x1cc0001cbd8) in binary!
	0x69c0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x53cb0001cbb0 (0x3cb0001cbb0) in binary!
	0x69a8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x699c0001d6a8 (0x19c0001d6a8) in binary!
	0x6518  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x69840001cf80 (0x1840001cf80) in binary!
	0x0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x7436465746f  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x4f52502020746e65 (0x2020746e65) in binary!
	0x36465746f6d  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0xa312d746e6574 (0x12d746e6574) in binary!
	0x1  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x2 (0x2) in binary!
	0x665746e6f43  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x4696d697250  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find offset 0xffffffd8 in binary!
WARNING: couldn't find offset 0xffffffd8 in binary!
WARNING: couldn't find address 0x726f746165724365 (0x46165724365) in binary!
	0x0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0xbb1cfffb86c0 (0x31cfffb86c0) in binary!
	0xd00000017  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0xa00000006 (0xa00000006) in binary!
	0x12  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x13 (0x13) in binary!
	0x1  @objc PromotedContent.(null) <stripped>

	// Swift methods
	0x3d060  func <stripped> // getter 
	0x3d140  func <stripped> // getter 
	0x3d240  func <stripped> // getter 
	0x3d470  func <stripped> // getter 
	0x3d5f0  func <stripped> // getter 
	0x3d780  func <stripped> // getter 
	0x3d980  func <stripped> // getter 
	0x3da20  func <stripped> // getter 
	0x3db00  func <stripped> // getter 
	0x3dc10  func <stripped> // getter 
	0x3de70  func <stripped> // getter 
	0x3e040  func <stripped> // getter 
	0x3e0c0  func <stripped> // setter 
	0x3e150  func <stripped> // modifyCoroutine 
	0x3e1e0  func <stripped> // getter 
	0x3e280  func <stripped> // setter 
	0x3e380  func <stripped> // modifyCoroutine 
	0x3e470  func <stripped> // getter 
	0x3e6b0  func <stripped> // getter 
	0x3e740  func <stripped> // setter 
	0x3e840  func <stripped> // modifyCoroutine 
	0x3e960  func <stripped> // getter 
	0x3eb30  func <stripped> // getter 
	0x3eb70  func <stripped> // setter 
	0x3ebd0  func <stripped> // modifyCoroutine 
	0x3ec40  func <stripped> // getter 
	0x3eca0  func <stripped> // setter 
	0x3ee00  func <stripped> // modifyCoroutine 
	0x3ef90  func <stripped> // getter 
	0x3efd0  func <stripped> // setter 
	0x3f030  func <stripped> // modifyCoroutine 
	0x3f0c0  func <stripped> // getter 
	0x3f170  func <stripped> // setter 
	0x3f290  func <stripped> // modifyCoroutine 
	0x3f380  func <stripped> // getter 
	0x3f480  func <stripped> // getter 
	0x3f510  func <stripped> // getter 
	0x3f7c0  func <stripped> // getter 
	0x3f8c0  func <stripped> // getter 
	0x3fa20  func <stripped> // getter 
	0x3fce0  func <stripped> // getter 
	0x3fd20  func <stripped> // setter 
	0x3fda0  func <stripped> // modifyCoroutine 
	0x3fe50  func <stripped> // method 
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
	var stop : Bool // +0x6c (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x66740001d7e0 (0x6740001d7e0) in binary!
	0x6670  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x665c0001d840 (0x65c0001d840) in binary!
	0x6658  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x66440001d7e0 (0x6440001d7e0) in binary!
	0x6640  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x662c0001d818 (0x62c0001d818) in binary!
	0x6628  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x66040001ccc8 (0x6040001ccc8) in binary!
	0x6844  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5dc80001d178 (0x5c80001d178) in binary!
	0x6a68  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x6a5c0001d660 (0x25c0001d660) in binary!
	0x7b40  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x690c0001d5b0 (0x10c0001d5b0) in binary!
	0x7b28  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x65bc0001d5b0 (0x5bc0001d5b0) in binary!
	0x6a20  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x68dc0001cc38 (0xdc0001cc38) in binary!
	0x6a08  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x67c00001d6f8 (0x7c00001d6f8) in binary!
	0x53f0  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x67a80001d6e8 (0x7a80001d6e8) in binary!
	0x8ba8  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x69cc0001cbd8 (0x1cc0001cbd8) in binary!
	0x69c0  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x53cb0001cbb0 (0x3cb0001cbb0) in binary!
	0x69a8  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x699c0001d6a8 (0x19c0001d6a8) in binary!
	0x6518  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x69840001cf80 (0x1840001cf80) in binary!
	0x0  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x7436465746f  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x4f52502020746e65 (0x2020746e65) in binary!
	0x36465746f6d  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0xa312d746e6574 (0x12d746e6574) in binary!
	0x1  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x2 (0x2) in binary!
	0x665746e6f43  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x4696d697250  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find offset 0xffffffd8 in binary!
WARNING: couldn't find offset 0xffffffd8 in binary!
WARNING: couldn't find address 0x726f746165724365 (0x46165724365) in binary!
	0x0  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0xbb1cfffb86c0 (0x31cfffb86c0) in binary!
	0xd00000017  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0xa00000006 (0xa00000006) in binary!
	0x12  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x13 (0x13) in binary!
	0x1  @objc JourneyMetricsHelper.(null) <stripped>
	0x10  @objc JourneyMetricsHelper.- <stripped>
WARNING: couldn't find address 0x435f5f (0x435f5f) in binary!
	0x57a69534743  @objc JourneyMetricsHelper.(null) <stripped>
	0x20000bb0c  @objc JourneyMetricsHelper.HøinterstiHçB <stripped>
WARNING: couldn't find address 0x2 (0x2) in binary!
	0x66f6974704f  @objc JourneyMetricsHelper.(null) <stripped>
	0x10000bac0  @objc JourneyMetricsHelper.HøinterstiHçB <stripped>
WARNING: couldn't find address 0x2 (0x2) in binary!
	0x8000000000  @objc JourneyMetricsHelper.(null) <stripped>

	// Swift methods
	0x42d40  func <stripped> // getter 
	0x42dc0  func <stripped> // setter 
	0x42e90  func <stripped> // modifyCoroutine 
	0x42f80  func <stripped> // getter 
	0x43080  func <stripped> // getter 
	0x431b0  func <stripped> // getter 
	0x43400  func <stripped> // getter 
	0x434b0  func <stripped> // getter 
	0x43610  func <stripped> // getter 
	0x43660  func <stripped> // getter 
	0x42c90  class func JourneyMetricsHelper.__allocating_init(promotedContentIdentifier:contextIdentifier:journeyIdentifier:primitiveCreator:notificationOwner:) // init 
	0x43830  func <stripped> // method 
	0x43a00  func <stripped> // method 
	0x43b30  func <stripped> // method 
	0x43b80  func <stripped> // method 
	0x43d00  func <stripped> // method 
	0x43fd0  func <stripped> // method 
	0x44270  func <stripped> // method 
	0x44990  func <stripped> // method 
	0x449e0  func <stripped> // method 
	0x44dc0  func <stripped> // method 
	0x44ef0  func <stripped> // method 
	0x45260  func <stripped> // method 
	0x45580  func <stripped> // method 
	0x45730  func <stripped> // method 
	0x45950  func <stripped> // method 
	0x45b10  func <stripped> // method 
	0x45df0  func <stripped> // method 
	0x45e40  func <stripped> // method 
	0x46010  func <stripped> // method 
	0x46150  func <stripped> // method 
	0x46350  func <stripped> // method 
	0x46380  func <stripped> // method 
 }
