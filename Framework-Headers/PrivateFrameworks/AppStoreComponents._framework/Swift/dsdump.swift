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
	let backgroundView : _¥ // +0x48
WARNING: couldn't find address 0x0 (0x0) in binary!
	let textView : _¥ // +0x70
 }

 struct AppStoreComponents.Metrics {

	// Properties
	var backgroundPadding : UIEdgeInsets // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var backgroundMinimumHeight : …¥ // +0x20
 }

 class AppStoreComponents.ASCLayoutProxy : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let base : =¦

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x586c00025428 (0x6c00025428) in binary!
	0x5890  @objc ASCLayoutProxy.(null) <stripped>
WARNING: couldn't find address 0x58a400025420 (0xa400025420) in binary!
	0x58c5  @objc ASCLayoutProxy.(null) <stripped>
WARNING: couldn't find address 0x58b9000242b0 (0xb9000242b0) in binary!
	0x58b5  @objc ASCLayoutProxy.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x413a4d4152  @objc ASCLayoutProxy.(null) <stripped>
WARNING: couldn't find address 0x706d6f4365726f74 (0x74365726f74) in binary!
	0x3454a4f5250  @objc ASCLayoutProxy.(null) <stripped>
WARNING: couldn't find address 0x65726f7453707041 (0x77453707041) in binary!
	0xa312d7374  @objc ASCLayoutProxy.(null) <stripped>

	// Swift methods
 }

 class AppStoreComponents.Storage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let metrics : Metrics // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleBackgroundView : _¥ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleView : U¥ // +0x40360
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subtitleView : M¥ // +0x0
	let hasTrailingSubtitle : Bool // +0x40390

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
	var subtitleTopSpace : …¥ // +0x50
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleBottomSpace : …¥ // +0x78
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleTrailingMaxWidth : …¥ // +0xa0
 }

 struct AppStoreComponents.CenteringLayout {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let view : _¥ // +0x0
	let axes : Axis // +0x28
 }

 struct AppStoreComponents.Axis {

	// Properties
	let rawValue : Int // +0x0
 }

 class AppStoreComponents.Storage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let imageView : _¥
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleView : 7¥
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subtitleView : 7¥

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
	let artworkView : _¥ // +0x128
WARNING: couldn't find address 0x0 (0x0) in binary!
	let headingText : 7¥ // +0x150
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleText : U¥ // +0x178
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subtitleText : U¥ // +0x1a0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let offerText : M¥ // +0x1c8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let offerButton : _¥ // +0x1f0
 }

 struct AppStoreComponents.Metrics {

	// Properties
	var artworkSize : CGSize // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headingSpace : …¥ // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleSpace : …¥ // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleWithHeadingSpace : …¥ // +0x60
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleSpace : …¥ // +0x88
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleBottomSpace : …¥ // +0xb0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offerLabelSpace : …¥ // +0xd8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offerLabelBottomSpace : …¥ // +0x100
 }

 struct AppStoreComponents.SmallLockupLayout {

	// Properties
	let metrics : Metrics // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let artworkView : _¥ // +0x1c8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let headingText : M¥ // +0x1f0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleText : U¥ // +0x218
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subtitleText : U¥ // +0x240
WARNING: couldn't find address 0x0 (0x0) in binary!
	let offerText : M¥ // +0x268
WARNING: couldn't find address 0x0 (0x0) in binary!
	let offerButton : _¥ // +0x290
 }

 struct AppStoreComponents.Metrics {

	// Properties
	var artworkSize : CGSize // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var artworkMargin : …¥ // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headingSpace : …¥ // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleRegularSpace : …¥ // +0x60
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleCompressedSpace : …¥ // +0x88
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleWithOfferSpace : …¥ // +0xb0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleWithHeadingSpace : …¥ // +0xd8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleSpace : …¥ // +0x100
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offerTextSpace : …¥ // +0x128
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottomSpace : …¥ // +0x150
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offerButtonMargin : …¥ // +0x178
WARNING: couldn't find address 0x0 (0x0) in binary!
	var axOfferButtonHeight : …¥ // +0x1a0
 }

 struct AppStoreComponents.MediumLockupLayout {

	// Properties
	let metrics : Metrics // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let artworkView : _¥ // +0x158
WARNING: couldn't find address 0x0 (0x0) in binary!
	let headingText : M¥ // +0x180
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleText : U¥ // +0x1a8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subtitleText : U¥ // +0x1d0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let offerText : M¥ // +0x1f8
WARNING: couldn't find address 0x0 (0x0) in binary!
	let offerButton : _¥ // +0x220
 }

 struct AppStoreComponents.Metrics {

	// Properties
	var artworkSize : CGSize // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var artworkMargin : ‰¥ // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var headingSpace : …¥ // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleSpace : …¥ // +0x40
WARNING: couldn't find address 0x0 (0x0) in binary!
	var titleWithHeadingSpace : …¥ // +0x68
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleRegularSpace : …¥ // +0x90
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subtitleShortSpace : …¥ // +0xb8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offerTextSpace : …¥ // +0xe0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offerButtonTopMargin : …¥ // +0x108
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offerButtonHeight : …¥ // +0x130
 }

 class AppStoreComponents.Storage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let metrics : Metrics // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let imageView : _¥ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleView : 7¥ // +0x3b2a0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let subtitleView : 7¥ // +0x0

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
	var width : ‰¥
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ‰¥
 }

 struct __C.UIEdgeInsets {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var top : ‰¥
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : ‰¥
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : ‰¥
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : ‰¥
 }
