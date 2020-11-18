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
	var width : Ñ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : Ñ
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
WARNING: couldn't find address 0x55040001e2d8 (0x5040001e2d8) in binary!
	0x7570  @objc PrimitiveCreator.(null) <stripped>
WARNING: couldn't find address 0x79cc0001dda0 (0x1cc0001dda0) in binary!
	0x148000000c  @objc PrimitiveCreator.(null) <stripped>
WARNING: couldn't find address 0x754c0001e170 (0x54c0001e170) in binary!
	0x7548  @objc PrimitiveCreator.(null) <stripped>

	// Swift methods
	0x21a0  func <stripped> // method 
 }

 enum PromotedContent.Placement { }

 enum PromotedContent.ActionStatus { }

 class PromotedContent.ContextBuilder : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var identifier : ≠Ç // +0xfeedfacf (0x0)
	var maxSize : CGSize // +0x3 (0x10)
	var current : APPCPromotableContentDepiction? // +0x2c (0x8)
	var next : [APPCPromotableContentDepiction] // +0x6100085 (0x8)
	var requestedAd : String? // +0x19 (0x10)
	var newsContext : NewsSupplementalContext // +0x45545f5f (0x8)
	let resourceLock : APUnfairLock // +0x0 (0x8)
	var adjacentInternal : [APPCPromotableContentDepiction] // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x754c0001e170 (0x54c0001e170) in binary!
	0x7548  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x5c1c0001dd80 (0x41c0001dd80) in binary!
	0x6b40  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x751c0001dd78 (0x51c0001dd78) in binary!
	0x7518  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x75040001dd70 (0x5040001dd70) in binary!
	0x7500  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x74ec0001dd68 (0x4ec0001dd68) in binary!
	0x74e0  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x74dc0001dd60 (0x4dc0001dd60) in binary!
	0x74c8  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x74c40001dd58 (0x4c40001dd58) in binary!
	0x74b0  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x6adc0001dd50 (0x2dc0001dd50) in binary!
	0x6b00  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x6b120001dd48 (0x3120001dd48) in binary!
	0x7488  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x74740001e090 (0x4740001e090) in binary!
	0x78d0  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x68000000c (0x68000000c) in binary!
	0xb4fffc6588  @objc ContextBuilder.(null) <stripped>
	0xacfffc65f0  @objc ContextBuilder.]√HâM∏LâÎH!”I∫Â?IB›Hâ]»LâÔËïÈ <stripped>
	0x454fffc6868  @objc ContextBuilder.æÈ <stripped>
	0x4040001dfe0  @objc ContextBuilder.â˜ËkÂ <stripped>
WARNING: couldn't find address 0x1dcccfffc6b08 (0x4ccfffc6b08) in binary!
	0x2340001dcc8  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x1dc1cfffc6bd0 (0x41cfffc6bd0) in binary!
	0x48000000c  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x73ac0001dcb0 (0x3ac0001dcb0) in binary!
	0x73a0  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0x72e90001dca8 (0x2e90001dca8) in binary!
	0x73a8  @objc ContextBuilder.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x7d4fffc7e88  @objc ContextBuilder.(null) <stripped>
	0x7ccfffc7ef0  @objc ContextBuilder.œËÍ∏ˇˇJç4ı  <stripped>

	// Swift methods
	0x4ad0  func <stripped> // getter 
	0x4be0  func <stripped> // setter 
	0x4d20  func <stripped> // modifyCoroutine 
	0x4da0  func <stripped> // getter 
	0x4e40  func <stripped> // setter 
	0x4f20  func <stripped> // modifyCoroutine 
	0x4fb0  func <stripped> // getter 
	0x5040  func <stripped> // setter 
	0x50e0  func <stripped> // modifyCoroutine 
	0x5230  func <stripped> // getter 
	0x52d0  func <stripped> // setter 
	0x53d0  func <stripped> // modifyCoroutine 
	0x54c0  func <stripped> // getter 
	0x55a0  func <stripped> // getter 
	0x5660  func <stripped> // setter 
	0x5770  func <stripped> // modifyCoroutine 
	0x5800  func <stripped> // getter 
	0x58a0  func <stripped> // setter 
	0x59a0  func <stripped> // modifyCoroutine 
	0x5a30  func <stripped> // getter 
	0x5c20  class func ContextBuilder.__allocating_init(maxSize:current:next:newsContext:requestedAd:) // init 
	0x5de0  class func ContextBuilder.__allocating_init(maxSize:current:newsContext:requestedAd:) // init 
	0x5f60  func <stripped> // method 
	0x6490  func <stripped> // method 
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
WARNING: couldn't find address 0x74540001e0b8 (0x4540001e0b8) in binary!
	0x7448  @objc NativeRepresentation.(null) <stripped>
WARNING: couldn't find address 0x743c0001e0b0 (0x43c0001e0b0) in binary!
	0x7430  @objc NativeRepresentation.(null) <stripped>
WARNING: couldn't find address 0x71ac0001dcf0 (0x1ac0001dcf0) in binary!
	0x7880  @objc NativeRepresentation.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x4ccfffc6b08  @objc NativeRepresentation.(null) <stripped>
	0x41cfffc6bd0  @objc NativeRepresentation.3Hã∏ <stripped>
	0x3ac0001dcb0  @objc NativeRepresentation.¡Aˆƒu¨HãA¯∂pPçF ˜÷!∆Hç<3LˆLâ˙ËmÂ <stripped>

	// Swift methods
 }

 class PromotedContent.BannerRepresentation : APPCContentRepresentation {

	// Properties
	let adTag : String?
	let outstreamVideoInfo : OutstreamVideoInfo

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x74040001dfe0 (0x4040001dfe0) in binary!
	0x73f8  @objc BannerRepresentation.(null) <stripped>
WARNING: couldn't find address 0x72340001dcc8 (0x2340001dcc8) in binary!
	0x7848  @objc BannerRepresentation.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x4acfffc78c0  @objc BannerRepresentation.(null) <stripped>
	0x7c4fffc7a58  @objc BannerRepresentation.H‡HÉ¿ÁHÖ…HI¡H¡¯HçD <stripped>

	// Swift methods
 }

 struct PromotedContent.PlaceholderRequest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let uuid : ≠Ç
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
WARNING: couldn't find address 0x73ac0001dcb0 (0x3ac0001dcb0) in binary!
	0x73a0  @objc DesiredPlacement.(null) <stripped>
WARNING: couldn't find address 0x72e90001dca8 (0x2e90001dca8) in binary!
	0x73a8  @objc DesiredPlacement.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x7d4fffc7e88  @objc DesiredPlacement.(null) <stripped>
	0x7ccfffc7ef0  @objc DesiredPlacement.œËÍ∏ˇˇJç4ı  <stripped>

	// Swift methods
	0xe130  func <stripped> // getter 
	0xe1a0  class func DesiredPlacement.__allocating_init(type:count:) // init 
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
	var $__lazy_storage_$_videoURL : ˝Ç // +0x0 (0x0)
	let duration : Double // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var originalVideoURL :  // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x73740001dc90 (0x3740001dc90) in binary!
	0x7370  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x736c0001dfd0 (0x36c0001dfd0) in binary!
	0x7360  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x734c0001df68 (0x34c0001df68) in binary!
	0x7350  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x732c0001df58 (0x32c0001df58) in binary!
	0x7340  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x733c0001dc38 (0x33c0001dc38) in binary!
	0x7340  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x77840001db58 (0x7840001db58) in binary!
	0xd8000000c  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x73040001e020 (0x3040001e020) in binary!
	0x7520  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x72ec0001df10 (0x2ec0001df10) in binary!
	0x72e0  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x72b40001df00 (0x2b40001df00) in binary!
	0x72a8  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x729c0001dfc8 (0x29c0001dfc8) in binary!
	0x87f8  @objc VideoRepresentation.(null) <stripped>
WARNING: couldn't find address 0x72940001dfc8 (0x2940001dfc8) in binary!
	0x74d4  @objc VideoRepresentation.(null) <stripped>

	// Swift methods
	0xe8c0  func <stripped> // getter 
	0xeb20  func <stripped> // setter 
	0xee70  func <stripped> // modifyCoroutine 
 }

 class PromotedContent.PromotedContentInfo : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let promotedContent : APPCPromotableContent // +0x8 (0x8)
	let metricsHelper : APPCLifecycleMetricsHelping // +0x10 (0x8)
	let ready : PromotedContentInfo // +0x18 (0x10)
	var unfilledReason : UnfilledReason // +0x28 (0x8)
	var placeholder : Bool // +0x30 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x73040001e020 (0x3040001e020) in binary!
	0x7520  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x72ec0001df10 (0x2ec0001df10) in binary!
	0x72e0  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x72b40001df00 (0x2b40001df00) in binary!
	0x72a8  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x729c0001dfc8 (0x29c0001dfc8) in binary!
	0x87f8  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x72940001dfc8 (0x2940001dfc8) in binary!
	0x74d4  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x76f40001de60 (0x6f40001de60) in binary!
	0x7280  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x76dc0001dab0 (0x6dc0001dab0) in binary!
	0x128000000c  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x76a40001db90 (0x6a40001db90) in binary!
	0x6a88  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x76ac0001db88 (0x6ac0001db88) in binary!
	0x76a0  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x97b40001db80 (0x7b40001db80) in binary!
	0x6430  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x64240001db78 (0x4240001db78) in binary!
	0x6418  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x64170001db70 (0x4170001db70) in binary!
	0x6419  @objc PromotedContentInfo.(null) <stripped>
WARNING: couldn't find address 0x640d0001db68 (0x40d0001db68) in binary!
	0x63e8  @objc PromotedContentInfo.(null) <stripped>

	// Swift methods
	0xf740  func <stripped> // getter 
	0xf830  func <stripped> // getter 
	0xf910  func <stripped> // getter 
	0xf990  func <stripped> // getter 
	0xfac0  func <stripped> // getter 
	0xfbb0  class func PromotedContentInfo.__allocating_init(promotedContent:placeholder:ready:) // init 
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
	var videoURL : ˝Ç // +0x0 (0x0)
	var videoQuality : VideoQuality // +0x0 (0x8)
	var mediaHasStarted : Bool // +0x0 (0x1)
	var promotedContent : weak APPCPromotableContent? // +0x0 (0x8)
	var $__lazy_storage_$_initialVolumeSender : Bool? // +0x0 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x76a40001db90 (0x6a40001db90) in binary!
	0x6a88  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x76ac0001db88 (0x6ac0001db88) in binary!
	0x76a0  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x97b40001db80 (0x7b40001db80) in binary!
	0x6430  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x64240001db78 (0x4240001db78) in binary!
	0x6418  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x64170001db70 (0x4170001db70) in binary!
	0x6419  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x640d0001db68 (0x40d0001db68) in binary!
	0x63e8  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x76340001db60 (0x6340001db60) in binary!
	0x7628  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x86fc0001db58 (0x6fc0001db58) in binary!
	0x86f0  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x719c0001ddb8 (0x19c0001ddb8) in binary!
	0x75f8  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffcbf80  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x294fffcd3e8  @objc MediaMetricsHelper.(null) <stripped>
	0x7bcfffcd6e0  @objc MediaMetricsHelper.Lâˆ1“MâÂHç¡R <stripped>
	0x2e4fffce518  @objc MediaMetricsHelper.H9«sILâ˙Ë≤Â <stripped>
	0x14cfffce810  @objc MediaMetricsHelper. <stripped>
	0xfc0001dac0  @objc MediaMetricsHelper.pM9ÙMLÊMÖ‰ÑÉ <stripped>
WARNING: couldn't find address 0x1dabcfffcf3e0 (0x2bcfffcf3e0) in binary!
	0xe40001dab8  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x1dab4fffcf4c8 (0x2b4fffcf4c8) in binary!
	0xcc0001dab0  @objc MediaMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x1daacfffcf5c0 (0x2acfffcf5c0) in binary!
	0xb40001d500  @objc MediaMetricsHelper.(null) <stripped>

	// Swift methods
	0x10340  func <stripped> // getter 
	0x10380  class func MediaMetricsHelper.__allocating_init(contextIdentifier:promotedContentIdentifier:primitiveCreator:notificationOwner:) // init 
	0x104d0  func <stripped> // method 
	0x10690  func <stripped> // method 
	0x10790  func <stripped> // method 
	0x10c20  func <stripped> // method 
	0x10e20  func <stripped> // method 
	0x11110  func <stripped> // method 
	0x11160  func <stripped> // method 
	0x113f0  func <stripped> // method 
	0x11730  func <stripped> // method 
	0x11780  func <stripped> // method 
	0x11ac0  func <stripped> // method 
	0x11db0  func <stripped> // method 
	0x11f10  func <stripped> // method 
	0x11f50  func <stripped> // method 
	0x122a0  func <stripped> // method 
	0x122f0  func <stripped> // method 
 }

 class PromotedContent.DiagnosticMetricsHelper : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var contextIdentifier : String
	var promotedContentIdentifier : String
	var primitiveCreator : APMetricPrimitiveCreating
	var notificationOwner : APMetricNotificationRegisterOwner

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x75ac0001da98 (0x5ac0001da98) in binary!
	0x6990  @objc DiagnosticMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x75b40001da90 (0x5b40001da90) in binary!
	0x7820  @objc DiagnosticMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x78220001dae8 (0x220001dae8) in binary!
	0x7130  @objc DiagnosticMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x711c0001dd38 (0x11c0001dd38) in binary!
	0x7578  @objc DiagnosticMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x2bcfffcf3e0  @objc DiagnosticMetricsHelper.(null) <stripped>
	0x2b4fffcf4c8  @objc DiagnosticMetricsHelper.D <stripped>
	0x2acfffcf5c0  @objc DiagnosticMetricsHelper. <stripped>
	0x2a4fffcf6a8  @objc DiagnosticMetricsHelper.¿x
L9uÿç-ˇˇˇø <stripped>

	// Swift methods
	0x13d80  class func DiagnosticMetricsHelper.__allocating_init(contextIdentifier:promotedContentIdentifier:primitiveCreator:notificationOwner:) // init 
	0x13ef0  func <stripped> // method 
	0x14080  func <stripped> // method 
	0x14180  func <stripped> // method 
	0x14e60  func <stripped> // method 
	0x15050  func <stripped> // method 
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
WARNING: couldn't find address 0x70fc0001dac0 (0xfc0001dac0) in binary!
	0x70f8  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x70e40001dab8 (0xe40001dab8) in binary!
	0x70e0  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x70cc0001dab0 (0xcc0001dab0) in binary!
	0x70c8  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x70b40001d500 (0xb40001d500) in binary!
	0x70b0  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x74e40001daa0 (0x4e40001daa0) in binary!
	0x7090  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x74ec0001d8c0 (0x4ec0001d8c0) in binary!
	0x18000000c  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x706c0001dc88 (0x6c0001dc88) in binary!
	0x38000000c  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x7c4c0001d4a8 (0x44c0001d4a8) in binary!
	0x7d50  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x7d440001dde0 (0x5440001dde0) in binary!
	0xc8000000c  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x685c0001d960 (0x5c0001d960) in binary!
	0x7480  @objc BlacklistReasonCharacteristic.(null) <stripped>
WARNING: couldn't find address 0x68440001da18 (0x440001da18) in binary!
	0x6638  @objc BlacklistReasonCharacteristic.(null) <stripped>

	// Swift methods
	0x15ec0  func <stripped> // getter 
	0x15f00  func <stripped> // setter 
	0x15f60  func <stripped> // modifyCoroutine 
	0x15fc0  func <stripped> // getter 
	0x16000  func <stripped> // setter 
	0x16060  func <stripped> // modifyCoroutine 
	0x160d0  func <stripped> // getter 
	0x16110  func <stripped> // setter 
	0x16170  func <stripped> // modifyCoroutine 
	0x16230  func <stripped> // getter 
	0x16310  func <stripped> // setter 
	0x16450  func <stripped> // modifyCoroutine 
	0x15d50  class func BlacklistReasonCharacteristic.__allocating_init(globalCategories:globalKeywords:campaignCategories:campaignKeywords:) // init 
 }

 enum PromotedContent.SubscriptionType { }

 class PromotedContent.SubscriptionEvent : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x706c0001dc88 (0x6c0001dc88) in binary!
	0x38000000c  @objc SubscriptionEvent.(null) <stripped>
 }

 class PromotedContent.Context : APPCBaseContext {

	// Properties
	let inventoryLock : APUnfairLock // +0x45545f5f (0x8)
	var inventory : [APPCPromotableContent] // +0x0 (0x8)
	let placeholdersLock : APUnfairLock // +0x21a0 (0x8)
	var placeholders : PlaceholderRequest // +0x43940 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastError : 1~ // +0x21a0 (0x8)
	var requester : APPCControllerRequester? // +0x0 (0x8)
	var blacklistEvaluator : BlacklistReason // +0x0 (0x10)
	let pendingPrefetchedTypesLock : APUnfairLock // +0x80000400 (0x8)
	var pendingPrefetchedTypes : PlacementType // +0x0 (0x8)
	var newsContext : NewsSupplementalContext // +0x65745f5f (0x8)
	var contextQueue : OS_dispatch_queue // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x685c0001d960 (0x5c0001d960) in binary!
	0x7480  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x68440001da18 (0x440001da18) in binary!
	0x6638  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x665c0001ddc8 (0x65c0001ddc8) in binary!
	0x6620  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x66440001dda8 (0x6440001dda8) in binary!
	0x7438  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x6fcc0001d9e8 (0x7cc0001d9e8) in binary!
	0x7bb0  @objc Context.(null) <stripped>
WARNING: couldn't find address 0x60c40001d9e0 (0xc40001d9e0) in binary!
	0x7408  @objc Context.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x7ccfffe0330  @objc Context.(null) <stripped>
	0x7d4fffe03f8  @objc Context.SHÉÏIâˆIâˇHãó <stripped>
	0x7d4fffe0470  @objc Context.ˇˇ <stripped>
	0x50cfffe0558  @objc Context.âˆ∫ <stripped>
	0x33cfffe07b0  @objc Context.Hâ«Ë¯ <stripped>
	0xfffe0b68  @objc Context.w?H∏¯ˇˇˇˇˇˇ <stripped>

	// Swift methods
	0x18ed0  func <stripped> // getter 
	0x19f90  func <stripped> // method 
	0x1a470  func <stripped> // method 
	0x1a530  func <stripped> // method 
	0x1a5e0  func <stripped> // method 
 }

 class PromotedContent.BaseContext : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var adjacentInternal : [APPCPromotableContentDepiction] // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : ≠Ç // +0x0 (0x0)
	let maxSize : CGSize // +0x45545f5f (0x10)
	let current : APPCPromotableContentDepiction? // +0x0 (0x8)
	let next : [APPCPromotableContentDepiction] // +0x45ae0 (0x8)
	let adjacent : [APPCPromotableContentDepiction] // +0x438 (0x8)
	var requestedAd : String? // +0x74735f5f (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6f8c0001dbb0 (0x78c0001dbb0) in binary!
	0x5668  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x6f740001d7d0 (0x7740001d7d0) in binary!
	0x6f68  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x6f5c0001d7d8 (0x75c0001d7d8) in binary!
	0x6f50  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x6f4c0001d7d0 (0x74c0001d7d0) in binary!
	0x65a0  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x65940001dcf8 (0x5940001dcf8) in binary!
	0x6f20  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x737c0001d750 (0x37c0001d750) in binary!
	0x18000000c  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x56e40001d948 (0x6e40001d948) in binary!
	0x48000000c  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x6ec40001dd40 (0x6c40001dd40) in binary!
	0x8201  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x67040001d910 (0x7040001d910) in binary!
	0x6ec0  @objc BaseContext.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x6dcfffe2ba0  @objc BaseContext.(null) <stripped>
	0x1b50001d8c8  @objc BaseContext.Ä∞ <stripped>

	// Swift methods
	0x26f10  func <stripped> // getter 
	0x27300  class func BaseContext.__allocating_init(maxSize:requestedAd:current:next:) // init 
	0x273a0  class func BaseContext.__allocating_init(maxSize:requestedAd:current:adjacent:) // init 
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
WARNING: couldn't find address 0x6ec40001dd40 (0x6c40001dd40) in binary!
	0x8201  @objc TapAction.(null) <stripped>
WARNING: couldn't find address 0x67040001d910 (0x7040001d910) in binary!
	0x6ec0  @objc TapAction.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x6dcfffe2ba0  @objc TapAction.(null) <stripped>
	0x1b50001d8c8  @objc TapAction.Ä∞ <stripped>

	// Swift methods
	0x29450  class func TapAction.__allocating_init(actionType:) // init 
	0x29510  func <stripped> // method 
	0x29520  func <stripped> // method 
 }

 class PromotedContent.WebTapAction : APPCTapAction {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let destinationURL : 

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x81d50001d8e8 (0x1d50001d8e8) in binary!
	0x7308  @objc WebTapAction.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x6bcfffe2e90  @objc WebTapAction.(null) <stripped>

	// Swift methods
	0x29550  class func WebTapAction.__allocating_init(destinationURL:actionType:) // init 
 }

 class PromotedContent.CalendarTapAction : APPCTapAction {

	// Properties
	let eventInfo : [String : Any]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x81750001d888 (0x1750001d888) in binary!
	0x72a8  @objc CalendarTapAction.(null) <stripped>
WARNING: couldn't find address 0x128000000c (0x128000000c) in binary!
	0x74fffe3f40  @objc CalendarTapAction.(null) <stripped>

	// Swift methods
	0x29900  class func CalendarTapAction.__allocating_init(info:) // init 
 }

 class PromotedContent.StoreTapAction : APPCTapAction {

	// Properties
	let adamIdentifier : NSNumber
	let iTunesMetadata : [String : String]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x81b50001d8c8 (0x1b50001d8c8) in binary!
	0x72e8  @objc StoreTapAction.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x69cfffe3440  @objc StoreTapAction.(null) <stripped>

	// Swift methods
	0x295e0  class func StoreTapAction.__allocating_init(adamIdentifier:iTunesMetadata:) // init 
 }

 class PromotedContent.ExpandTapAction : APPCTapAction {

	// Properties
	let adIdentifier : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let expandedDestinationURL : 
	let maximumExpandedSize : CGSize
	var delegate : weak APWebProcessDelegate & WKNavigationDelegate?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x81950001d8a8 (0x1950001d8a8) in binary!
	0x72c8  @objc ExpandTapAction.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x67cfffe2cd0  @objc ExpandTapAction.(null) <stripped>

	// Swift methods
	0x29d10  func <stripped> // getter 
	0x29d50  func <stripped> // setter 
	0x29da0  func <stripped> // modifyCoroutine 
	0x29e70  class func ExpandTapAction.__allocating_init(adIdentifier:expandedDestinationURL:maximumExpandedSize:delegate:) // init 
 }

 enum PromotedContent.LoadFailed { }

 class PromotedContent.PromotedContentMetric : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var route : Int // +0x8 (0x8)
	var metric : Int // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timestamp : gx // +0x74735f5f (0x0)
	var contentId : String? // +0x65706c65 (0x10)
	var clientBundleIdentifier : String? // +0x45545f5f (0x10)
	var deviceIdentifier : String? // +0x0 (0x10)
	var userIdentifier : String? // +0x45f18 (0x10)
	var properties : [String : Any]? // +0x718 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6e0c0001dcb0 (0x60c0001dcb0) in binary!
	0x8368  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x6df40001dca0 (0x5f40001dca0) in binary!
	0x8350  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x6dfc0001dc90 (0x5fc0001dc90) in binary!
	0x6df8  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x6de40001d850 (0x5e40001d850) in binary!
	0x6de0  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x6dcc0001dc70 (0x5cc0001dc70) in binary!
	0x6dc8  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x6db40001dc60 (0x5b40001dc60) in binary!
	0x6db0  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x6d9c0001dc50 (0x59c0001dc50) in binary!
	0x6d98  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x6d840001dc40 (0x5840001dc40) in binary!
	0x6d80  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x6d6c0001d988 (0x56c0001d988) in binary!
	0x71c8  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x1ecfffe92a0  @objc PromotedContentMetric.(null) <stripped>
	0x15cfffe9348  @objc PromotedContentMetric. <stripped>
	0x154fffe93b0  @objc PromotedContentMetric.Éƒ]√ <stripped>
	0x114fffe94f8  @objc PromotedContentMetric.UHâÂAVSHâ˚Lã5?Ä <stripped>
	0xfffe9650  @objc PromotedContentMetric.ã5ä⁄ <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x504fffe9838  @objc PromotedContentMetric.(null) <stripped>
	0x4b40001d8d8  @objc PromotedContentMetric. <stripped>
WARNING: couldn't find address 0x1d92cfffe9da8 (0x12cfffe9da8) in binary!
	0x47c0001dac8  @objc PromotedContentMetric.(null) <stripped>
WARNING: couldn't find address 0x1dac4fffe9e10 (0x2c4fffe9e10) in binary!
	0x4840001dac0  @objc PromotedContentMetric.(null) <stripped>

	// Swift methods
	0x2acf0  func <stripped> // getter 
	0x2adc0  func <stripped> // getter 
	0x2afb0  func <stripped> // getter 
	0x2b1c0  func <stripped> // getter 
	0x2b260  func <stripped> // getter 
	0x2b300  func <stripped> // getter 
	0x2b410  func <stripped> // getter 
	0x2b680  func <stripped> // getter 
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
WARNING: couldn't find address 0x6d4c0001d970 (0x54c0001d970) in binary!
	0x6d20  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x6d140001d960 (0x5140001d960) in binary!
	0x6d08  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x54040001d9d8 (0x4040001d9d8) in binary!
	0x6d10  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x653c0001d748 (0x53c0001d748) in binary!
	0x6cf8  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x71540001d528 (0x1540001d528) in binary!
	0x28000000c  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0x6cd40001d8f0 (0x4d40001d8f0) in binary!
	0x7130  @objc ContentRepresentation.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x12cfffe9da8  @objc ContentRepresentation.(null) <stripped>
	0x2c4fffe9e10  @objc ContentRepresentation.ˇb' <stripped>
	0x2bcfffe9e78  @objc ContentRepresentation.UHâÂAVAUSPHâ”Iâ˝ˇb' <stripped>

	// Swift methods
	0x302f0  class func ContentRepresentation.__allocating_init(identifier:adType:desiredPosition:privacyMarkerPosition:adSize:tapAction:) // init 
	0x2ffe0  func <stripped> // method 
 }

 class PromotedContent.OutstreamVideoInfo : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let videoAssetURL : ˝Ç // +0x45f18 (0x0)
	let videoDuration : NSNumber // +0x0 (0x8)
	let bitrate : Double // +0x80000400 (0x8)
	let signalStrength : UInt // +0x0 (0x8)
	let connectionType : Int // +0x626f5f5f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6cd40001d8f0 (0x4d40001d8f0) in binary!
	0x7130  @objc OutstreamVideoInfo.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x12cfffe9da8  @objc OutstreamVideoInfo.(null) <stripped>

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
WARNING: couldn't find address 0x6cb40001d8d8 (0x4b40001d8d8) in binary!
	0x6ca0  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x6c7c0001dac8 (0x47c0001dac8) in binary!
	0x6c90  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x6c840001dac0 (0x4840001dac0) in binary!
	0x6c78  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x6c6c0001dab8 (0x46c0001dab8) in binary!
	0x6c60  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x86cc0001d6f0 (0x6cc0001d6f0) in binary!
	0x86e0  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x6c3c0001d858 (0x43c0001d858) in binary!
	0x7098  @objc ContentDepiction.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x114fffeb400  @objc ContentDepiction.(null) <stripped>
	0x14fffeb5c8  @objc ContentDepiction. <stripped>
	0xfffeb710  @objc ContentDepiction. <stripped>
WARNING: couldn't find address 0x7e8000000c (0x7e8000000c) in binary!
	0x684fffeb928  @objc ContentDepiction.(null) <stripped>
	0x67cfffeba10  @objc ContentDepiction.Èü˙ˇˇI!ﬂHÖ€LH˚HâﬂËÚ <stripped>
	0x674fffebd98  @objc ContentDepiction.Ï <stripped>

	// Swift methods
	0x30f60  class func ContentDepiction.__allocating_init(identifier:placement:language:locale:searchTerms:keywords:categories:) // init 
	0x30af0  class func ContentDepiction.__allocating_init(identifier:adjacentPosition:placement:language:locale:searchTerms:keywords:categories:) // init 
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
WARNING: couldn't find address 0x70840001d6c8 (0x840001d6c8) in binary!
	0x7078  @objc LifecycleMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x706c0001db28 (0x6c0001db28) in binary!
	0x6bf8  @objc LifecycleMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x70540001d428 (0x540001d428) in binary!
	0x7e8000000c  @objc LifecycleMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x6bd40001d688 (0x3d40001d688) in binary!
	0x6bd0  @objc LifecycleMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x6bbc0001d680 (0x3bc0001d680) in binary!
	0x6bb8  @objc LifecycleMetricsHelper.(null) <stripped>

	// Swift methods
	0x31e80  class func LifecycleMetricsHelper.__allocating_init(metricsHelper:placeholder:) // init 
	0x32240  func <stripped> // method 
	0x323d0  func <stripped> // method 
	0x32450  func <stripped> // method 
	0x325b0  func <stripped> // method 
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
WARNING: couldn't find address 0x6bd40001d688 (0x3d40001d688) in binary!
	0x6bd0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6bbc0001d680 (0x3bc0001d680) in binary!
	0x6bb8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6ba40001d678 (0x3a40001d678) in binary!
	0x6ba0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6b8c0001d670 (0x38c0001d670) in binary!
	0x6b88  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6b740001d668 (0x3740001d668) in binary!
	0x6b70  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6b5c0001d660 (0x35c0001d660) in binary!
	0x6b58  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6b440001d658 (0x3440001d658) in binary!
	0x6b40  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6b2c0001d650 (0x32c0001d650) in binary!
	0x6b28  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6b140001d648 (0x3140001d648) in binary!
	0x6b10  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6afc0001d640 (0x2fc0001d640) in binary!
	0x6af8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6ae40001d638 (0x2e40001d638) in binary!
	0x6ae0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6acc0001d630 (0x2cc0001d630) in binary!
	0x6ac8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6ab40001d628 (0x2b40001d628) in binary!
	0x6ab0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6a9c0001d620 (0x29c0001d620) in binary!
	0x6a98  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6a840001d618 (0x2840001d618) in binary!
	0x6a80  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6a6c0001d610 (0x26c0001d610) in binary!
	0x6a68  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6a540001d288 (0x2540001d288) in binary!
	0x6a50  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6a3c0001d260 (0x23c0001d260) in binary!
	0x6a38  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6a240001d238 (0x2240001d238) in binary!
	0x6a20  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x6a0c0001d210 (0x20c0001d210) in binary!
	0x6a08  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69f40001d1e8 (0x1f40001d1e8) in binary!
	0x69f0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69dc0001d1c0 (0x1dc0001d1c0) in binary!
	0x69d8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69c40001d198 (0x1c40001d198) in binary!
	0x69c0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69ac0001d170 (0x1ac0001d170) in binary!
	0x69a8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69940001d148 (0x1940001d148) in binary!
	0x6990  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x697c0001d120 (0x17c0001d120) in binary!
	0x6978  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69640001d0f8 (0x1640001d0f8) in binary!
	0x6960  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x694c0001d0d0 (0x14c0001d0d0) in binary!
	0x6948  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69340001d0a8 (0x1340001d0a8) in binary!
	0x6930  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x691c0001d080 (0x11c0001d080) in binary!
	0x6918  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x69040001d058 (0x1040001d058) in binary!
	0x6900  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x68ec0001d030 (0xec0001d030) in binary!
	0x68e8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x68d40001d008 (0xd40001d008) in binary!
	0x68d0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x68bc0001cfe0 (0xbc0001cfe0) in binary!
	0x68b8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x68a40001cfb8 (0xa40001cfb8) in binary!
	0x68a0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x688c0001cf90 (0x8c0001cf90) in binary!
	0x6888  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x68740001cf68 (0x740001cf68) in binary!
	0x6870  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x685c0001cf40 (0x5c0001cf40) in binary!
	0x6858  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x68440001cf18 (0x440001cf18) in binary!
	0x6840  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x682c0001cef0 (0x2c0001cef0) in binary!
	0x6828  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x68140001cec8 (0x140001cec8) in binary!
	0x6810  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x67fc0001cea0 (0x7fc0001cea0) in binary!
	0x67f8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x67e40001ce78 (0x7e40001ce78) in binary!
	0x67e0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x67cc0001ce50 (0x7cc0001ce50) in binary!
	0x67c8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x67b40001ce28 (0x7b40001ce28) in binary!
	0x67b0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x679c0001ce00 (0x79c0001ce00) in binary!
	0x6798  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x67840001cdd8 (0x7840001cdd8) in binary!
	0x6780  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x676c0001cdb0 (0x76c0001cdb0) in binary!
	0x6768  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x67540001cd88 (0x7540001cd88) in binary!
	0x6750  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x673c0001cd60 (0x73c0001cd60) in binary!
	0x6738  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x67240001cd38 (0x7240001cd38) in binary!
	0x6720  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x670c0001cd10 (0x70c0001cd10) in binary!
	0x6708  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x66f40001d520 (0x6f40001d520) in binary!
	0x66f0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x66dc0001ccc8 (0x6dc0001ccc8) in binary!
	0x66d8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x66c40001cca0 (0x6c40001cca0) in binary!
	0x66c0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x66ac0001cc78 (0x6ac0001cc78) in binary!
	0x66a8  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x66940001cc50 (0x6940001cc50) in binary!
	0x6690  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x667c0001cc28 (0x67c0001cc28) in binary!
	0x6678  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x66640001cc00 (0x6640001cc00) in binary!
	0x6660  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x662c0001cbd8 (0x62c0001cbd8) in binary!
	0x7b88  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x66140001cbb0 (0x6140001cbb0) in binary!
	0x7b70  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x661c0001cb88 (0x61c0001cb88) in binary!
	0x8c0a  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x66040001d220 (0x6040001d220) in binary!
	0x6a60  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x318000000c (0x318000000c) in binary!
	0x2f4ffff4668  @objc NewsSupplementalContext.(null) <stripped>
	0x1e4ffff4710  @objc NewsSupplementalContext.Ë∑ı <stripped>
	0x4ecffff47d8  @objc NewsSupplementalContext. <stripped>
	0x634ffff4910  @objc NewsSupplementalContext.HâE¿Hâ«Ë‡ı <stripped>
	0x2b4ffff4af8  @objc NewsSupplementalContext.D‚ <stripped>
	0x4b4ffff4c40  @objc NewsSupplementalContext. <stripped>
	0x4a4ffff4dd8  @objc NewsSupplementalContext.Ë <stripped>
	0x494ffff4fa0  @objc NewsSupplementalContext.–t5Lâ˜Ë´¯ <stripped>
	0x484ffff5028  @objc NewsSupplementalContext.Ñ <stripped>
	0x474ffff50f0  @objc NewsSupplementalContext. <stripped>
	0x1bcffff5238  @objc NewsSupplementalContext. <stripped>
	0x1ccffff5470  @objc NewsSupplementalContext.Ëˇ¯ <stripped>
	0x194ffff55e8  @objc NewsSupplementalContext. <stripped>
	0x1c4ffff5790  @objc NewsSupplementalContext.EêIã| <stripped>
	0x184ffff5948  @objc NewsSupplementalContext.UHâÂAWAVAUATSHÉÏhHâ}òIø¯ˇˇˇˇˇˇ <stripped>
	0x164ffff5ba0  @objc NewsSupplementalContext.UHâÂAWAVAUATSHÉÏhHâ}òIø¯ˇˇˇˇˇˇ <stripped>
	0x144ffff5e28  @objc NewsSupplementalContext.¸MÖˇÑâ <stripped>
	0x21cffff6020  @objc NewsSupplementalContext.HâﬂËb˙ <stripped>
	0x104ffff6118  @objc NewsSupplementalContext.ˇˇˇˇˇ?H9√áz <stripped>
	0xe4ffff6200  @objc NewsSupplementalContext.ˇˇˇˇˇ <stripped>
	0xc4ffff6448  @objc NewsSupplementalContext.ãe∞HãE–Ö <stripped>
	0x2b4ffff6630  @objc NewsSupplementalContext.D <stripped>
	0x8cffff69c8  @objc NewsSupplementalContext.m»ÈUˇˇˇD <stripped>
	0x7ccffff6fe0  @objc NewsSupplementalContext.˙ <stripped>
	0xffff70d8  @objc NewsSupplementalContext.∏¯ˇˇˇˇˇˇ <stripped>
WARNING: couldn't find address 0x1f8000000c (0x1f8000000c) in binary!
	0x2bcffff9d70  @objc NewsSupplementalContext.(null) <stripped>
	0x1cffff9fb8  @objc NewsSupplementalContext.HãM¿Hã<Hã5±‰ <stripped>
	0x9cffffa040  @objc NewsSupplementalContext.AHãEÿJâDÒ Hç}òË∞˙ <stripped>
	0x7e4ffffa188  @objc NewsSupplementalContext.Hˇ¿Äà <stripped>
	0x7bcffffa480  @objc NewsSupplementalContext.Y <stripped>
	0x44cffffa988  @objc NewsSupplementalContext.¯Â <stripped>
	0x794ffffab30  @objc NewsSupplementalContext.»Hâ]†Öj <stripped>
	0xc4ffffaf58  @objc NewsSupplementalContext.âﬂËsÊ <stripped>
	0x754ffffb8c0  @objc NewsSupplementalContext.H9«sILâ˙Ë≤Â <stripped>
	0x3bcffffbcd8  @objc NewsSupplementalContext.ˇˇ <stripped>
	0x714ffffc160  @objc NewsSupplementalContext.ˇˇˇˇˇˇˇ?I9«á <stripped>
	0x6f4ffffc618  @objc NewsSupplementalContext.Ñ <stripped>
	0x6ccffffc9f0  @objc NewsSupplementalContext.BI¡‰Iâ˝Hâ«HâÛLâ˛Lâ‚Ëg’ <stripped>
	0x6a4ffffcec8  @objc NewsSupplementalContext.çΩpˇˇˇËa˜ <stripped>
	0x64cffffd200  @objc NewsSupplementalContext.M9ÓåJ <stripped>
	0xffffd2f8  @objc NewsSupplementalContext.πContentÔIâ≈Ë◊˘ <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x7436465746f  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x4f52502020746e65 (0x2020746e65) in binary!
	0x36465746f6d  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0xa312d746e6574 (0x12d746e6574) in binary!
	0x1  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x2 (0x2) in binary!
	0x665746e6f43  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x4696d697250  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find offset 0xffffffd8 in binary!
WARNING: couldn't find offset 0xffffffd8 in binary!
WARNING: couldn't find address 0x726f746165724365 (0x46165724365) in binary!
	0x0  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0xb76cfffbac60 (0x76cfffbac60) in binary!
	0xd00000017  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0xa00000006 (0xa00000006) in binary!
	0x12  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x13 (0x13) in binary!
	0x1  @objc NewsSupplementalContext.(null) <stripped>
	0x10  @objc NewsSupplementalContext., <stripped>
WARNING: couldn't find address 0x435f5f (0x435f5f) in binary!
	0x57a69534743  @objc NewsSupplementalContext.(null) <stripped>
	0x20000b75c  @objc NewsSupplementalContext.Ë‹] <stripped>
WARNING: couldn't find address 0x2 (0x2) in binary!
	0x66f6974704f  @objc NewsSupplementalContext.(null) <stripped>
	0x10000b710  @objc NewsSupplementalContext.Ë‹] <stripped>
WARNING: couldn't find address 0x2 (0x2) in binary!
	0x8000000000  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x115fd00000002 (0x5fd00000002) in binary!
	0xfffbae48  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x24ebc00000000 (0x6bc00000000) in binary!
	0x8000000000  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x1164500000001 (0x64500000001) in binary!
	0x71400000000  @objc NewsSupplementalContext.(null) <stripped>
	0x5cd00000003  @objc NewsSupplementalContext.ﬁHâ¬ËZG <stripped>
WARNING: couldn't find address 0x1164d000090ad (0x64d000090ad) in binary!
	0xfffbae38  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x24f5c00000000 (0x75c00000000) in binary!
	0x8000000000  @objc NewsSupplementalContext.(null) <stripped>
WARNING: couldn't find address 0x1174500000015 (0x74500000015) in binary!
	0x56500009085  @objc NewsSupplementalContext.(null) <stripped>

	// Swift methods
	0x32930  func <stripped> // getter 
	0x32970  func <stripped> // setter 
	0x329d0  func <stripped> // modifyCoroutine 
	0x32a70  func <stripped> // getter 
	0x32b00  func <stripped> // setter 
	0x32d50  func <stripped> // modifyCoroutine 
	0x32dd0  func <stripped> // getter 
	0x32e10  func <stripped> // setter 
	0x32e70  func <stripped> // modifyCoroutine 
	0x32ed0  func <stripped> // getter 
	0x32f10  func <stripped> // setter 
	0x32f70  func <stripped> // modifyCoroutine 
	0x32fd0  func <stripped> // getter 
	0x33010  func <stripped> // setter 
	0x33070  func <stripped> // modifyCoroutine 
	0x330e0  func <stripped> // getter 
	0x33120  func <stripped> // setter 
	0x33180  func <stripped> // modifyCoroutine 
	0x331e0  func <stripped> // getter 
	0x33220  func <stripped> // setter 
	0x33280  func <stripped> // modifyCoroutine 
	0x332e0  func <stripped> // getter 
	0x33320  func <stripped> // setter 
	0x33380  func <stripped> // modifyCoroutine 
	0x33460  func <stripped> // getter 
	0x33520  func <stripped> // setter 
	0x33580  func <stripped> // modifyCoroutine 
	0x335e0  func <stripped> // getter 
	0x33620  func <stripped> // setter 
	0x33680  func <stripped> // modifyCoroutine 
	0x336e0  func <stripped> // getter 
	0x33720  func <stripped> // setter 
	0x33780  func <stripped> // modifyCoroutine 
	0x337e0  func <stripped> // getter 
	0x33820  func <stripped> // setter 
	0x33880  func <stripped> // modifyCoroutine 
	0x338e0  func <stripped> // getter 
	0x33920  func <stripped> // setter 
	0x33980  func <stripped> // modifyCoroutine 
	0x339e0  func <stripped> // getter 
	0x33a20  func <stripped> // setter 
	0x33a80  func <stripped> // modifyCoroutine 
	0x33ae0  func <stripped> // getter 
	0x33b20  func <stripped> // setter 
	0x33b80  func <stripped> // modifyCoroutine 
	0x33be0  func <stripped> // getter 
	0x33c20  func <stripped> // setter 
	0x33c80  func <stripped> // modifyCoroutine 
	0x33ce0  func <stripped> // getter 
	0x33d20  func <stripped> // setter 
	0x33d80  func <stripped> // modifyCoroutine 
	0x33de0  func <stripped> // getter 
	0x33e20  func <stripped> // setter 
	0x33e80  func <stripped> // modifyCoroutine 
	0x33ee0  func <stripped> // getter 
	0x33f20  func <stripped> // setter 
	0x33f80  func <stripped> // modifyCoroutine 
	0x33fe0  func <stripped> // getter 
	0x34020  func <stripped> // setter 
	0x34080  func <stripped> // modifyCoroutine 
	0x340e0  func <stripped> // getter 
	0x34120  func <stripped> // setter 
	0x34180  func <stripped> // modifyCoroutine 
	0x341e0  func <stripped> // getter 
	0x34220  func <stripped> // setter 
	0x34280  func <stripped> // modifyCoroutine 
	0x342e0  func <stripped> // getter 
	0x34320  func <stripped> // setter 
	0x34380  func <stripped> // modifyCoroutine 
	0x343e0  func <stripped> // getter 
	0x34420  func <stripped> // setter 
	0x34480  func <stripped> // modifyCoroutine 
	0x344e0  func <stripped> // getter 
	0x34520  func <stripped> // setter 
	0x34580  func <stripped> // modifyCoroutine 
	0x345e0  func <stripped> // getter 
	0x34620  func <stripped> // setter 
	0x34680  func <stripped> // modifyCoroutine 
	0x346e0  func <stripped> // getter 
	0x34720  func <stripped> // setter 
	0x34780  func <stripped> // modifyCoroutine 
	0x347e0  func <stripped> // getter 
	0x34820  func <stripped> // setter 
	0x34880  func <stripped> // modifyCoroutine 
	0x348e0  func <stripped> // getter 
	0x34920  func <stripped> // setter 
	0x34980  func <stripped> // modifyCoroutine 
	0x349e0  func <stripped> // getter 
	0x34a20  func <stripped> // setter 
	0x34a80  func <stripped> // modifyCoroutine 
	0x34ae0  func <stripped> // getter 
	0x34b20  func <stripped> // setter 
	0x34b80  func <stripped> // modifyCoroutine 
	0x34be0  func <stripped> // getter 
	0x34c20  func <stripped> // setter 
	0x34c80  func <stripped> // modifyCoroutine 
	0x34ce0  func <stripped> // getter 
	0x34d20  func <stripped> // setter 
	0x34d80  func <stripped> // modifyCoroutine 
	0x34de0  func <stripped> // getter 
	0x34e20  func <stripped> // setter 
	0x34e80  func <stripped> // modifyCoroutine 
	0x34ee0  func <stripped> // getter 
	0x34f20  func <stripped> // setter 
	0x34f80  func <stripped> // modifyCoroutine 
	0x34fe0  func <stripped> // getter 
	0x35020  func <stripped> // setter 
	0x35080  func <stripped> // modifyCoroutine 
	0x350e0  func <stripped> // getter 
	0x35120  func <stripped> // setter 
	0x35180  func <stripped> // modifyCoroutine 
	0x351e0  func <stripped> // getter 
	0x35220  func <stripped> // setter 
	0x35280  func <stripped> // modifyCoroutine 
	0x35350  func <stripped> // getter 
	0x35440  func <stripped> // setter 
	0x35580  func <stripped> // modifyCoroutine 
	0x355e0  func <stripped> // getter 
	0x35620  func <stripped> // setter 
	0x35680  func <stripped> // modifyCoroutine 
	0x356e0  func <stripped> // getter 
	0x35720  func <stripped> // setter 
	0x35780  func <stripped> // modifyCoroutine 
	0x357e0  func <stripped> // getter 
	0x35820  func <stripped> // setter 
	0x35880  func <stripped> // modifyCoroutine 
	0x358e0  func <stripped> // getter 
	0x35920  func <stripped> // setter 
	0x35980  func <stripped> // modifyCoroutine 
	0x359e0  func <stripped> // getter 
	0x35a20  func <stripped> // setter 
	0x35a80  func <stripped> // modifyCoroutine 
	0x35ae0  func <stripped> // getter 
	0x35b20  func <stripped> // setter 
	0x35b80  func <stripped> // modifyCoroutine 
	0x35be0  func <stripped> // getter 
	0x35c20  func <stripped> // setter 
	0x35c80  func <stripped> // modifyCoroutine 
	0x35ce0  func <stripped> // getter 
	0x35d20  func <stripped> // setter 
	0x35d80  func <stripped> // modifyCoroutine 
	0x35de0  func <stripped> // getter 
	0x35e20  func <stripped> // setter 
	0x35e80  func <stripped> // modifyCoroutine 
	0x35ee0  func <stripped> // getter 
	0x35f20  func <stripped> // setter 
	0x35f80  func <stripped> // modifyCoroutine 
	0x35fe0  func <stripped> // getter 
	0x36020  func <stripped> // setter 
	0x36080  func <stripped> // modifyCoroutine 
	0x360e0  func <stripped> // getter 
	0x36120  func <stripped> // setter 
	0x36180  func <stripped> // modifyCoroutine 
	0x361d0  func <stripped> // getter 
	0x361f0  func <stripped> // setter 
	0x36220  func <stripped> // modifyCoroutine 
	0x36270  func <stripped> // getter 
	0x362b0  func <stripped> // setter 
	0x36310  func <stripped> // modifyCoroutine 
	0x36390  func <stripped> // getter 
	0x363b0  func <stripped> // setter 
	0x363d0  func <stripped> // modifyCoroutine 
	0x36430  func <stripped> // getter 
	0x36470  func <stripped> // setter 
	0x364d0  func <stripped> // modifyCoroutine 
	0x36530  func <stripped> // getter 
	0x36570  func <stripped> // setter 
	0x365d0  func <stripped> // modifyCoroutine 
	0x36630  func <stripped> // getter 
	0x36670  func <stripped> // setter 
	0x366d0  func <stripped> // modifyCoroutine 
	0x36770  func <stripped> // getter 
	0x36850  func <stripped> // setter 
	0x36990  func <stripped> // modifyCoroutine 
	0x369f0  func <stripped> // getter 
	0x36a30  func <stripped> // setter 
	0x36a90  func <stripped> // modifyCoroutine 
	0x36b60  func <stripped> // getter 
	0x36c60  func <stripped> // setter 
	0x36dc0  func <stripped> // modifyCoroutine 
	0x36e20  func <stripped> // getter 
	0x36e80  func <stripped> // setter 
	0x36f10  func <stripped> // modifyCoroutine 
	0x36fd0  func <stripped> // getter 
	0x37060  func <stripped> // setter 
	0x37170  func <stripped> // modifyCoroutine 
	0x37250  func <stripped> // getter 
	0x374f0  func <stripped> // method 
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
	var disclosureURL : ˝Ç // +0x6c687465 (0x0)
	var disclosureRendererPayload : String? // +0x45545f5f (0x10)
	var minimumTimeBetweenPresentation : UInt // +0x0 (0x8)
	var brandName : String? // +0x46630 (0x10)
	var campaignText : String? // +0x136c (0x10)
	var representations : [APPCPromotableContentRepresentation] // +0x46630 (0x8)
	var bestRepresentation : APPCPromotableContentRepresentation? // +0x0 (0x8)
	var error : NSError? // +0x0 (0x8)
	let placeholder : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var expirationDate : gx // +0x6f635f5f (0x0)
	var serverUnfilledReason : UnfilledReason // +0x0 (0x8)
	var mediaMetricHelper : APPCMediaMetricsHelping? // +0x0 (0x8)
	var attachedToView : Bool // +0x479a0 (0x1)
	var discarded : Bool // +0x3990 (0x1)
	var consumed : Bool // +0x479a0 (0x1)
	var unfilledReasonDelegate : UnfilledReasonDelegate // +0x45545f5f (0x10)
	var overriddenAdType : PlacementType // +0x0 (0x9)
	var discardReason : JourneyMetricDiscardReasonCode // +0x0 (0x9)
	let primitiveCreator : APMetricPrimitiveCreating // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x65e40001cb40 (0x5e40001cb40) in binary!
	0x65d8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x65d40001cb20 (0x5d40001cb20) in binary!
	0x65c0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x65bc0001cdf8 (0x5bc0001cdf8) in binary!
	0x65a8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x65a40001cae8 (0x5a40001cae8) in binary!
	0x6590  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x658c0001cac8 (0x58c0001cac8) in binary!
	0x6578  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x65740001caa0 (0x5740001caa0) in binary!
	0x6560  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x655c0001ca80 (0x55c0001ca80) in binary!
	0x6548  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x65440001ca60 (0x5440001ca60) in binary!
	0x6528  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x8e6b0001ca40 (0x66b0001ca40) in binary!
	0x6518  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x65140001ca20 (0x5140001ca20) in binary!
	0x6500  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x64fc0001ca00 (0x4fc0001ca00) in binary!
	0x64e8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x64e40001c9e0 (0x4e40001c9e0) in binary!
	0x64d0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x64cc0001d178 (0x4cc0001d178) in binary!
	0x64b8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x64b40001d2b8 (0x4b40001d2b8) in binary!
	0x6490  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x64940001d410 (0x4940001d410) in binary!
	0x6490  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x645c0001d148 (0x45c0001d148) in binary!
	0x79b8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x64640001d128 (0x4640001d128) in binary!
	0x6460  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x643c0001c930 (0x43c0001c930) in binary!
	0x667c  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x64240001d138 (0x4240001d138) in binary!
	0x6664  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x640c0001d240 (0x40c0001d240) in binary!
	0x664c  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x63f40001d0e8 (0x3f40001d0e8) in binary!
	0x63e8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x63cc0001d098 (0x3cc0001d098) in binary!
	0x63e0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x63c40001d1b8 (0x3c40001d1b8) in binary!
	0x63c8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x63c40001c878 (0x3c40001c878) in binary!
	0x63b0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x680c0001cbe0 (0xc0001cbe0) in binary!
	0x1f8000000c  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x638c0001d298 (0x38c0001d298) in binary!
	0x6388  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x63740001d300 (0x3740001d300) in binary!
	0x6370  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x635c0001d2a0 (0x35c0001d2a0) in binary!
	0x6358  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x63440001d2d8 (0x3440001d2d8) in binary!
	0x6340  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x631c0001c7d0 (0x31c0001c7d0) in binary!
	0x655c  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x5b4c0001cc50 (0x34c0001cc50) in binary!
	0x6770  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x67640001d118 (0x7640001d118) in binary!
	0x7838  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x66140001d078 (0x6140001d078) in binary!
	0x7820  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x62d40001d078 (0x2d40001d078) in binary!
	0x6728  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x65e40001c740 (0x5e40001c740) in binary!
	0x6710  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x64d80001d1b0 (0x4d80001d1b0) in binary!
	0x51b8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x64c00001d1a0 (0x4c00001d1a0) in binary!
	0x8800  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x66d40001c6e0 (0x6d40001c6e0) in binary!
	0x66c8  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x51930001c6b8 (0x1930001c6b8) in binary!
	0x66b0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x66a40001d160 (0x6a40001d160) in binary!
	0x6230  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x668c0001ca60 (0x68c0001ca60) in binary!
	0x25029232840  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x6d6f72503a4d4152 (0x2503a4d4152) in binary!
	0x2020746e65  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x6f72503a5443454a (0x3a5443454a) in binary!
	0x12d746e6574  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x3ff0000000000000 (0x0) in binary!
	0x2  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x6465746f6d6f7250 (0x46f6d6f7250) in binary!
	0x0  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0xffffffe8 (0xffffffe8) in binary!
	0x46165724365  @objc PromotedContent.(null) <stripped>
	0x76cfffbac60  @objc PromotedContent.œ˙Ì˛ <stripped>
WARNING: couldn't find address 0x200009186 (0x200009186) in binary!
	0xa00000006  @objc PromotedContent.(null) <stripped>
WARNING: couldn't find address 0x700000010 (0x700000010) in binary!
	0x13  @objc PromotedContent.(null) <stripped>

	// Swift methods
	0x3bce0  func <stripped> // getter 
	0x3bdc0  func <stripped> // getter 
	0x3bec0  func <stripped> // getter 
	0x3c0f0  func <stripped> // getter 
	0x3c270  func <stripped> // getter 
	0x3c400  func <stripped> // getter 
	0x3c600  func <stripped> // getter 
	0x3c6a0  func <stripped> // getter 
	0x3c780  func <stripped> // getter 
	0x3c890  func <stripped> // getter 
	0x3caf0  func <stripped> // getter 
	0x3ccc0  func <stripped> // getter 
	0x3cd40  func <stripped> // setter 
	0x3cdd0  func <stripped> // modifyCoroutine 
	0x3ce60  func <stripped> // getter 
	0x3cf00  func <stripped> // setter 
	0x3d000  func <stripped> // modifyCoroutine 
	0x3d0f0  func <stripped> // getter 
	0x3d330  func <stripped> // getter 
	0x3d3c0  func <stripped> // setter 
	0x3d4c0  func <stripped> // modifyCoroutine 
	0x3d5e0  func <stripped> // getter 
	0x3d7b0  func <stripped> // getter 
	0x3d7f0  func <stripped> // setter 
	0x3d850  func <stripped> // modifyCoroutine 
	0x3d8c0  func <stripped> // getter 
	0x3d900  func <stripped> // setter 
	0x3d960  func <stripped> // modifyCoroutine 
	0x3d9f0  func <stripped> // getter 
	0x3daa0  func <stripped> // setter 
	0x3dbc0  func <stripped> // modifyCoroutine 
	0x3dcb0  func <stripped> // getter 
	0x3ddb0  func <stripped> // getter 
	0x3de40  func <stripped> // getter 
	0x3e0f0  func <stripped> // getter 
	0x3e1f0  func <stripped> // getter 
	0x3e350  func <stripped> // getter 
	0x3e610  func <stripped> // getter 
	0x3e650  func <stripped> // setter 
	0x3e6d0  func <stripped> // modifyCoroutine 
	0x3e780  func <stripped> // method 
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
WARNING: couldn't find address 0x638c0001d298 (0x38c0001d298) in binary!
	0x6388  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x63740001d300 (0x3740001d300) in binary!
	0x6370  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x635c0001d2a0 (0x35c0001d2a0) in binary!
	0x6358  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x63440001d2d8 (0x3440001d2d8) in binary!
	0x6340  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x631c0001c7d0 (0x31c0001c7d0) in binary!
	0x655c  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x5b4c0001cc50 (0x34c0001cc50) in binary!
	0x6770  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x67640001d118 (0x7640001d118) in binary!
	0x7838  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x66140001d078 (0x6140001d078) in binary!
	0x7820  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x62d40001d078 (0x2d40001d078) in binary!
	0x6728  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x65e40001c740 (0x5e40001c740) in binary!
	0x6710  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x64d80001d1b0 (0x4d80001d1b0) in binary!
	0x51b8  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x64c00001d1a0 (0x4c00001d1a0) in binary!
	0x8800  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x66d40001c6e0 (0x6d40001c6e0) in binary!
	0x66c8  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x51930001c6b8 (0x1930001c6b8) in binary!
	0x66b0  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x66a40001d160 (0x6a40001d160) in binary!
	0x6230  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x668c0001ca60 (0x68c0001ca60) in binary!
	0x25029232840  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x6d6f72503a4d4152 (0x2503a4d4152) in binary!
	0x2020746e65  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x6f72503a5443454a (0x3a5443454a) in binary!
	0x12d746e6574  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x3ff0000000000000 (0x0) in binary!
	0x2  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x6465746f6d6f7250 (0x46f6d6f7250) in binary!
	0x0  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0xffffffe8 (0xffffffe8) in binary!
	0x46165724365  @objc JourneyMetricsHelper.(null) <stripped>
	0x76cfffbac60  @objc JourneyMetricsHelper.œ˙Ì˛ <stripped>
WARNING: couldn't find address 0x200009186 (0x200009186) in binary!
	0xa00000006  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x700000010 (0x700000010) in binary!
	0x13  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x14 (0x14) in binary!
	0x6c9f0  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x10 (0x10) in binary!
	0x435f5f  @objc JourneyMetricsHelper.(null) <stripped>
	0x20011  @objc JourneyMetricsHelper.œ˙Ì˛ <stripped>
WARNING: couldn't find offset 0xfffffff0 in binary!
WARNING: couldn't find offset 0xfffffff0 in binary!
WARNING: couldn't find address 0xfffbac7cfffffff0 (0x0) in binary!
	0x2  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find address 0x63697274654d5041 (0x274654d5041) in binary!
	0x20011  @objc JourneyMetricsHelper.(null) <stripped>
WARNING: couldn't find offset 0xffffffe8 in binary!
WARNING: couldn't find offset 0xffffffe8 in binary!
WARNING: couldn't find address 0xfffbac6cffffffe8 (0x0) in binary!
	0x2  @objc JourneyMetricsHelper.(null) <stripped>
	0x5fd00000002  @objc JourneyMetricsHelper.«ËëE <stripped>

	// Swift methods
	0x415e0  func <stripped> // getter 
	0x41660  func <stripped> // setter 
	0x41730  func <stripped> // modifyCoroutine 
	0x41820  func <stripped> // getter 
	0x41920  func <stripped> // getter 
	0x41a50  func <stripped> // getter 
	0x41ca0  func <stripped> // getter 
	0x41d50  func <stripped> // getter 
	0x41eb0  func <stripped> // getter 
	0x41f00  func <stripped> // getter 
	0x41530  class func JourneyMetricsHelper.__allocating_init(promotedContentIdentifier:contextIdentifier:journeyIdentifier:primitiveCreator:notificationOwner:) // init 
	0x420d0  func <stripped> // method 
	0x422a0  func <stripped> // method 
	0x423d0  func <stripped> // method 
	0x42420  func <stripped> // method 
	0x425a0  func <stripped> // method 
	0x42870  func <stripped> // method 
	0x42ae0  func <stripped> // method 
	0x43200  func <stripped> // method 
	0x43250  func <stripped> // method 
	0x43620  func <stripped> // method 
	0x43750  func <stripped> // method 
	0x43ac0  func <stripped> // method 
	0x43de0  func <stripped> // method 
	0x43f90  func <stripped> // method 
	0x441b0  func <stripped> // method 
	0x44370  func <stripped> // method 
	0x44650  func <stripped> // method 
	0x446a0  func <stripped> // method 
	0x44870  func <stripped> // method 
	0x449b0  func <stripped> // method 
	0x44bb0  func <stripped> // method 
 }
