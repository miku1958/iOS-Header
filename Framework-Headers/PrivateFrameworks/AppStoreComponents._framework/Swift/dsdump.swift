 protocol AppStoreComponents.SignpostExtractor // 1 requirements
 {
	// method
 }
 protocol AppStoreComponents.Alignable // 2 requirements
 {
	// class base protocol
	// method
 }

 struct AppStoreComponents.TVTextPillOverlayLayout {

	// Properties
	let metrics : Metrics // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let backgroundView : Ϣ // +0x48
WARNING: couldn't find address 0x0 (0x0) in binary!
	let textView : Ϣ // +0x70
 }

 struct AppStoreComponents.Metrics {

	// Properties
	var backgroundPadding : UIEdgeInsets // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var backgroundMinimumHeight : �� // +0x20
 }

 class AppStoreComponents.ASCLayoutProxy : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let base : ��

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x597400025378 (0x17400025378) in binary!
	0x5998  @objc ASCLayoutProxy.(null) <stripped>
WARNING: couldn't find address 0x59ac00025370 (0x1ac00025370) in binary!
	0x59cd  @objc ASCLayoutProxy.(null) <stripped>
WARNING: couldn't find address 0x59c1000241b0 (0x1c1000241b0) in binary!
	0x59bd  @objc ASCLayoutProxy.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x74365726f74  @objc ASCLayoutProxy.(null) <stripped>
WARNING: couldn't find address 0x202073746e656e6f (0x3746e656e6f) in binary!
	0x77453707041  @objc ASCLayoutProxy.(null) <stripped>
WARNING: couldn't find address 0x6e656e6f706d6f43 (0x66f706d6f43) in binary!
	0x0  @objc ASCLayoutProxy.(null) <stripped>

	// Swift methods
 }

 class AppStoreComponents.Storage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let metrics : Metrics // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleBackgroundView : Ϣ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleView : Ţ // +0x412a0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subtitleView : �� // +0x0
	let hasTrailingSubtitle : Bool // +0x412d0

	// Swift methods
 }

 struct AppStoreComponents.OfferTextLayout {

	// Properties
	let storage : Storage // +0x0
 }

 struct AppStoreComponents.Metrics {

	// Properties
	var titleBackgroundMaxPadding : UIEdgeInsets // +0x0
	var titleBackgroundMinPadding : UIEdgeInsets // +0x20
	var titleBackgroundMinSize : CGSize // +0x40
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleTopSpace : �� // +0x50
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleBottomSpace : �� // +0x78
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleTrailingMaxWidth : �� // +0xa0
 }

 struct AppStoreComponents.CenteringLayout {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let view : Ϣ // +0x0
	let axes : Axis // +0x28
 }

 struct AppStoreComponents.Axis {

	// Properties
	let rawValue : Int // +0x0
 }

 class AppStoreComponents.Storage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let imageView : Ϣ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleView : ��
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subtitleView : ��

	// Swift methods
 }

 struct AppStoreComponents.OfferEmptyLayout {

	// Properties
	let storage : Storage // +0x0
 }

 struct AppStoreComponents.AppShowcaseLockupLayout {

	// Properties
	let metrics : Metrics // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let artworkView : Ϣ // +0x128
WARNING: couldn't find address 0x0 (0x0) in binary!
	let headingText : �� // +0x150
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleText : Ţ // +0x178
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subtitleText : Ţ // +0x1a0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let offerText : �� // +0x1c8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let offerButton : Ϣ // +0x1f0
 }

 struct AppStoreComponents.Metrics {

	// Properties
	var artworkSize : CGSize // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headingSpace : �� // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleSpace : �� // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleWithHeadingSpace : �� // +0x60
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleSpace : �� // +0x88
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleBottomSpace : �� // +0xb0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offerLabelSpace : �� // +0xd8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offerLabelBottomSpace : �� // +0x100
 }

 struct AppStoreComponents.SmallLockupLayout {

	// Properties
	let metrics : Metrics // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let artworkView : Ϣ // +0x1c8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let headingText : �� // +0x1f0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleText : Ţ // +0x218
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subtitleText : Ţ // +0x240
WARNING: couldn't find address 0x0 (0x0) in binary!
	let offerText : �� // +0x268
WARNING: couldn't find address 0x0 (0x0) in binary!
	let offerButton : Ϣ // +0x290
 }

 struct AppStoreComponents.Metrics {

	// Properties
	var artworkSize : CGSize // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var artworkMargin : �� // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headingSpace : �� // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleRegularSpace : �� // +0x60
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleCompressedSpace : �� // +0x88
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleWithOfferSpace : �� // +0xb0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleWithHeadingSpace : �� // +0xd8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleSpace : �� // +0x100
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offerTextSpace : �� // +0x128
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottomSpace : �� // +0x150
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offerButtonMargin : �� // +0x178
WARNING: couldn't find address 0x0 (0x0) in binary!
	var axOfferButtonHeight : �� // +0x1a0
 }

 struct AppStoreComponents.MediumLockupLayout {

	// Properties
	let metrics : Metrics // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let artworkView : Ϣ // +0x158
WARNING: couldn't find address 0x0 (0x0) in binary!
	let headingText : �� // +0x180
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleText : Ţ // +0x1a8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subtitleText : Ţ // +0x1d0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let offerText : �� // +0x1f8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let offerButton : Ϣ // +0x220
 }

 struct AppStoreComponents.Metrics {

	// Properties
	var artworkSize : CGSize // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var artworkMargin : �� // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headingSpace : �� // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleSpace : �� // +0x40
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleWithHeadingSpace : �� // +0x68
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleRegularSpace : �� // +0x90
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleShortSpace : �� // +0xb8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offerTextSpace : �� // +0xe0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offerButtonTopMargin : �� // +0x108
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offerButtonHeight : �� // +0x130
 }

 class AppStoreComponents.Storage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let metrics : Metrics // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let imageView : Ϣ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleView : �� // +0x3c0d0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subtitleView : �� // +0x0

	// Swift methods
 }

 struct AppStoreComponents.OfferIconLayout {

	// Properties
	let storage : Storage // +0x0
 }

 struct AppStoreComponents.Metrics {

	// Properties
	var minimumSize : CGSize // +0x0
 }

 struct __C.Size {

	// Properties
	var _rawValue : NSString
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ��
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ��
 }

 struct __C.UIEdgeInsets {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var top : ��
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : ��
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : ��
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : ��
 }
