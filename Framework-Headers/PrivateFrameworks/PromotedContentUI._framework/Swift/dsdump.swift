 protocol PromotedContentUI.FrameWatchable // 3 requirements
 {
	// getter
	// setter
	// modify coroutine
 }
 protocol PromotedContentUI.DebugViewUpdates // 1 requirements
 {
	// method
 }
 protocol PromotedContentUI.ActionViewControllerDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol PromotedContentUI.InteractionDelegate // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol PromotedContentUI.PresentableActions // 2 requirements
 {
	// method
	// method
 }
 protocol PromotedContentUI.WebConsoleLogging // 1 requirements
 {
	// method
 }
 protocol PromotedContentUI.ActionViewController // 1 requirements
 {
	// class init
 }
 protocol PromotedContentUI.MetricsViewReportable // 3 requirements
 {
	// method
	// method
	// method
 }

 enum __C.Phase { }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : —e
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : —e
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : —e
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : —e
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.OpenURLOptionsKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.OpenExternalURLOptionsKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.AutoresizingMask {

	// Properties
	let rawValue : UInt
 }

 struct __C.Options {

	// Properties
	let rawValue : UInt
 }

 struct PromotedContentUI.VisibilityTiming {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var startTime : ôe
WARNING: couldn't find address 0x0 (0x0) in binary!
	var endTime : øe
 }

 class PromotedContentUI.ExpandViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var webView : PromotedContentWebView // +0x8 (0x8)
	var closeButton : UIButton // +0x10 (0x8)
	var maximumExpandedSize : CGSize // +0x18 (0x11)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var expandedDestinationURL : 3d // +0x0 (0x0)
	var tapGestureRecognizer : TapGestureRecognizer // +0x0 (0x8)
	var webProcessDelegate : weak APWebProcessDelegate? // +0x0 (0x8)
	var actionDelegate : ActionViewControllerDelegate // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_closeButtonPadding : #d // +0x0 (0x9)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x447c00015c48 (0x47c00015c48) in binary!
	0x7d48  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x7d3c00015920 (0x53c00015920) in binary!
	0x71fc  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x71f0000158f8 (0x1f0000158f8) in binary!
	0x7d18  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x401800015980 (0x1800015980) in binary!
	0x400c  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x71ce00015948 (0x1ce00015948) in binary!
	0x7ce8  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x14fffb8370  @objc ExpandViewController.(null) <stripped>
	0xfcfffb8688  @objc ExpandViewController.¶{ <stripped>
	0x49c00015880  @objc ExpandViewController.ãE»HãM¿HãU∞Hãu∏PQVRËàÄ <stripped>
WARNING: couldn't find address 0x1592cfffb9978 (0x12cfffb9978) in binary!
	0x3ac00015b78  @objc ExpandViewController.(null) <stripped>
WARNING: couldn't find address 0x158ccfffb9a80 (0xccfffb9a80) in binary!
	0x46c000157a8  @objc ExpandViewController.(null) <stripped>

	// Swift methods
 }

 class PromotedContentUI.CalendarEventViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var actionResult : 5d // +0x0 (0x0)
	var calendarEvent : CalendarEvent // +0x0 (0x8)
	var eventStore : EKEventStore // +0x0 (0x8)
	var notificationObserver : NSObject? // +0x0 (0x8)
	var actionDelegate : ActionViewControllerDelegate // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7c9c00015880 (0x49c00015880) in binary!
	0x715c  @objc CalendarEventViewController.(null) <stripped>
WARNING: couldn't find address 0x43ac00015b78 (0x3ac00015b78) in binary!
	0x7152  @objc CalendarEventViewController.(null) <stripped>
WARNING: couldn't find address 0x7c6c000157a8 (0x46c000157a8) in binary!
	0x18000000c  @objc CalendarEventViewController.(null) <stripped>
WARNING: couldn't find address 0x43d8000156b8 (0x3d8000156b8) in binary!
	0x68000000c  @objc CalendarEventViewController.(null) <stripped>
WARNING: couldn't find address 0x59d400015770 (0x1d400015770) in binary!
	0x70fc  @objc CalendarEventViewController.(null) <stripped>

	// Swift methods
 }

 class PromotedContentUI.SafariViewController : SFSafariViewController /System/Library/Frameworks/SafariServices.framework/SafariServices {

	// Properties
	var notificationObserver : NSObject?
	var actionDelegate : ActionViewControllerDelegate

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x59d400015770 (0x1d400015770) in binary!
	0x70fc  @objc SafariViewController.(null) <stripped>
WARNING: couldn't find address 0x70f0000158c0 (0xf0000158c0) in binary!
	0x70f2  @objc SafariViewController.(null) <stripped>
WARNING: couldn't find address 0x47eb00015918 (0x7eb00015918) in binary!
	0x7c00  @objc SafariViewController.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x1ccfffbfb58  @objc SafariViewController.(null) <stripped>
	0x19cfffc0210  @objc SafariViewController.Hã=ª/ <stripped>
	0x144fffc09c8  @objc SafariViewController.ã@¯Hã@@Hâ„HÉ¿HÉ‡H)√Hâ‹Hã=ª/ <stripped>
 }

 class PromotedContentUI.TapGestureRecognizer : UIGestureRecognizer /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let kMaximumTimeSinceTap : Double
	var touchDownHandler : TapGestureHandlerArguments
	var touchMovedHandler : TapGestureHandlerArguments
	var touchUpHandler : TapGestureHandlerArguments
	var shouldBlockNavigation : Bool
	var mostRecentTapLocation : CGPoint
	var lastTrackedTouch : Phase
	var mostRecentTapTimestamp : Double?
	var location : CGPoint
	var pointIsInsideView : Bool
	var preventedTouches : Set<UIView>
	var $__lazy_storage_$_scrollableAncestor : UIScrollView??

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x58d000015828 (0xd000015828) in binary!
	0x48c6  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x48ba000159b0 (0xba000159b0) in binary!
	0x48ae  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x48a200015960 (0xa200015960) in binary!
	0x7bb0  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x48a0000156d0 (0xa0000156d0) in binary!
	0x5da8  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x5d9c000156a8 (0x59c000156a8) in binary!
	0x487c  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x488900015968 (0x8900015968) in binary!
	0x7b68  @objc TapGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x1f8000000c (0x1f8000000c) in binary!
	0x654fffc2750  @objc TapGestureRecognizer.(null) <stripped>
	0x1bcfffc29e8  @objc TapGestureRecognizer.âËLâˇË4; <stripped>
	0x61cfffc2cf0  @objc TapGestureRecognizer.: <stripped>
	0x1dcfffc52a8  @objc TapGestureRecognizer.Y√Hã=jZ <stripped>
	0x5dcfffc5980  @objc TapGestureRecognizer.HÉ‡H)√Hâ‹HâÿLâÁË#f <stripped>
	0x5b4fffc5dd8  @objc TapGestureRecognizer.Hã=‘ <stripped>

	// Swift methods
	0xc330  func <stripped> // getter 
 }

 struct PromotedContentUI.TapGestureHandlerArguments {

	// Properties
	let recognizer : TapGestureRecognizer // +0x0
	let point : CGPoint // +0x8
	let inside : Bool // +0x18
 }

 struct PromotedContentUI.TranslatesOff {

	// Properties
	var value : A
 }

 enum PromotedContentUI.SizeChangeError { }

 class PromotedContentUI.MetricsView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let startsCollapsed : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var frameObserver : Å`
	var currentlyViewable : Bool
	var context : APPCPromotableContext?
	var promotedContent : APPCPromotableContent
	var debugView : PromotedContentDebugView
	var forcedReadiness : Bool
	var wasTapped : Bool
	var isBackgrounded : Bool
	var timingTracking : VisibilityTiming
	var visibilityChecker : VisibilityChecker
	var needToSendOnScreen : Bool
	var interactionPresentationDelegate : weak APPCMetricsInteractionPresentationDelegate?
	var visbilityCheckingView : weak UIView?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var offsetObserver : Å`
	var _isCollapsed : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var readinessObserver : Å`
	var visibleThresholds : [Int]
	var contentView : PromotedContentView
	var ready : Bool
	var readyDelegate : weak APPCMetricsViewReadyDelegate?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var promotedContentInfo : `

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7b54000159f0 (0x354000159f0) in binary!
	0x7b48  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x3e48000159b8 (0x648000159b8) in binary!
	0x3e3c  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x3e30000159b8 (0x630000159b8) in binary!
	0x57fc  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x3e1800015608 (0x61800015608) in binary!
	0x504e  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x6fc000015950 (0x7c000015950) in binary!
	0x57cc  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x503c000155c8 (0x3c000155c8) in binary!
	0x57b4  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x3dd0000155a0 (0x5d0000155a0) in binary!
	0x579c  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x500c00015618 (0xc00015618) in binary!
	0x5030  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x5778000158f8 (0x778000158f8) in binary!
	0x3d94  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x41a400015970 (0x1a400015970) in binary!
	0x7a70  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x7a6400015538 (0x26400015538) in binary!
	0x5015  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x7a4c00015510 (0x24c00015510) in binary!
	0x4ffd  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x3d4000015980 (0x54000015980) in binary!
	0x7a28  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x7a1c00015978 (0x21c00015978) in binary!
	0x6440  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x7a0400015970 (0x20400015970) in binary!
	0x4fc8  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x79ec00015528 (0x1ec00015528) in binary!
	0x38000000c  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x40fc000158c8 (0xfc000158c8) in binary!
	0x4f98  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x79bc000154f8 (0x1bc000154f8) in binary!
	0x18000000c  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x79a400015b20 (0x1a400015b20) in binary!
	0x18000000c  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x5670000155c8 (0x670000155c8) in binary!
	0x298000000c  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x3c80000155f8 (0x480000155f8) in binary!
	0x7968  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x464200015db0 (0x64200015db0) in binary!
	0x7950  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x36f400015d90 (0x6f400015d90) in binary!
	0x3c44  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x3c3800015478 (0x43800015478) in binary!
	0x6350  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x791400015d48 (0x11400015d48) in binary!
	0x6ae0  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x6ad400015d20 (0x2d400015d20) in binary!
	0x6ac8  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x6abc00015cf8 (0x2bc00015cf8) in binary!
	0x6abe  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x369c00015cd0 (0x69c00015cd0) in binary!
	0x6a98  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x6a9a00015ca8 (0x29a00015ca8) in binary!
	0x6a80  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x6a7400015c80 (0x27400015c80) in binary!
	0x6a68  @objc MetricsView.(null) <stripped>
WARNING: couldn't find address 0x6a5c00015c58 (0x25c00015c58) in binary!
	0x6a50  @objc MetricsView.(null) <stripped>

	// Swift methods
	0x11da0  func <stripped> // getter 
	0x11de0  func <stripped> // setter 
	0x11e40  func <stripped> // modifyCoroutine 
	0x12150  func <stripped> // getter 
	0x12180  func <stripped> // setter 
	0x121d0  func <stripped> // getter 
	0x128d0  func <stripped> // getter 
	0x129f0  func <stripped> // getter 
	0x12b10  func <stripped> // getter 
	0x12bd0  func <stripped> // setter 
	0x12cb0  func <stripped> // modifyCoroutine 
	0x12e00  func <stripped> // getter 
	0x13280  func <stripped> // method 
	0x136f0  func <stripped> // method 
	0x13740  func <stripped> // method 
	0x139d0  func <stripped> // method 
	0x13c80  func <stripped> // method 
	0x13d80  func <stripped> // method 
	0x141b0  func <stripped> // method 
	0x14910  func <stripped> // method 
	0x14aa0  func <stripped> // method 
	0x14c30  func <stripped> // method 
 }

 class PromotedContentUI.PromotedContentDebugView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var _debugLabel : TranslatesOff
	var context : weak APPCPromotableContext?
	var promotedContent : APPCPromotableContent?
	var readiness : Readiness
	var updateDelegate : DebugViewUpdates

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x40fc000158c8 (0xfc000158c8) in binary!
	0x4f98  @objc PromotedContentDebugView.(null) <stripped>
WARNING: couldn't find address 0x79bc000154f8 (0x1bc000154f8) in binary!
	0x18000000c  @objc PromotedContentDebugView.(null) <stripped>
WARNING: couldn't find address 0x79a400015b20 (0x1a400015b20) in binary!
	0x18000000c  @objc PromotedContentDebugView.(null) <stripped>

	// Swift methods
	0x16e80  func <stripped> // getter 
	0x177e0  func <stripped> // method 
	0x178b0  func <stripped> // method 
 }

 class PromotedContentUI.PromotedContentUIModule : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5670000155c8 (0x670000155c8) in binary!
	0x298000000c  @objc PromotedContentUIModule.(null) <stripped>
 }

 class PromotedContentUI.PromotedContentView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let webView : PromotedContentWebView // +0x8 (0x8)
	let privacyMarkerView : PrivacyMarker // +0x10 (0x8)
	let dimmerView : DimmerView // +0x18 (0x8)
	let videoProgressMetricThresholds : [Int] // +0x20 (0x8)
	let customPrivacyHandling : Bool // +0x28 (0x1)
	let outstreamVisibleThreshold : Int // +0x30 (0x8)
	let nonOutstreamVisibleThreshold : Int // +0x38 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let mraidActionTypes :  empty-list  // +0x40 (0x8)
	var tapGestureRecognizer : TapGestureRecognizer // +0x48 (0x8)
	var expandedAdTapGestureRecognizer : TapGestureRecognizer // +0x50 (0x8)
	var expandedAdFrame : CGRect // +0x58 (0x21)
	var videoProgressMetricStatus : [Int : Bool] // +0x80 (0x8)
	var visiblePercentage : Int // +0x88 (0x8)
	var unfairLock : APUnfairLock // +0x90 (0x8)
	var promotedContent : APPCPromotableContent // +0x98 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastPerformedAction : [^ // +0xa0 (0x8)
	var shouldBlockNavigation : Bool // +0xa8 (0x1)
	var tapWasRecognized : Bool // +0xa9 (0x1)
	var nativeArticleOnDisplay : Bool // +0xaa (0x1)
	var interactionDelegate : InteractionDelegate // +0xb0 (0x10)
	var interactionPresentationDelegate : weak APPCMetricsInteractionPresentationDelegate? // +0xc0 (0x8)
	var readiness : Readiness // +0xc8 (0x8)
	var nativeView : UIView? // +0xd0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var oldPercentageTimestamp : Y_ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var newPercentageTimestamp : Y_ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var overriddenPrivacyMarkerPosition : ^ // +0x3 (0x9)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3c80000155f8 (0x480000155f8) in binary!
	0x7968  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x464200015db0 (0x64200015db0) in binary!
	0x7950  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x36f400015d90 (0x6f400015d90) in binary!
	0x3c44  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x3c3800015478 (0x43800015478) in binary!
	0x6350  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x791400015d48 (0x11400015d48) in binary!
	0x6ae0  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6ad400015d20 (0x2d400015d20) in binary!
	0x6ac8  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6abc00015cf8 (0x2bc00015cf8) in binary!
	0x6abe  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x369c00015cd0 (0x69c00015cd0) in binary!
	0x6a98  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6a9a00015ca8 (0x29a00015ca8) in binary!
	0x6a80  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6a7400015c80 (0x27400015c80) in binary!
	0x6a68  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6a5c00015c58 (0x25c00015c58) in binary!
	0x6a50  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x6a4400015c30 (0x24400015c30) in binary!
	0x3b6c  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x453a00015308 (0x53a00015308) in binary!
	0x5b78  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x5b6c000152e0 (0x36c000152e0) in binary!
	0x4516  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x3b30000152b8 (0x330000152b8) in binary!
	0x5b68  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x3b1800015290 (0x31800015290) in binary!
	0x3b0c  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x558c00015788 (0x58c00015788) in binary!
	0x5588  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x4d3c00015348 (0x53c00015348) in binary!
	0x4d60  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x3eec000156b8 (0x6ec000156b8) in binary!
	0x77b8  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x77ac00015810 (0x7ac00015810) in binary!
	0x4d70  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x7794000152d0 (0x794000152d0) in binary!
	0x28000000c  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x3a8800015160 (0x28800015160) in binary!
	0x7770  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x17cfffde158  @objc PromotedContentView.(null) <stripped>
	0x154fffddc70  @objc PromotedContentView.)U¿HãE»HãM¿HãU∞Hãu∏PQVRËàÄ <stripped>
	0x134fffdb808  @objc PromotedContentView. <stripped>
	0x10cfffdc4a0  @objc PromotedContentView.«Hç}ÄLâˆËﬂ¨ <stripped>
	0xe4fffdd538  @objc PromotedContentView. <stripped>
	0xfffdd9e0  @objc PromotedContentView. <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x2fcfffe2418  @objc PromotedContentView.(null) <stripped>
	0xfffe24e0  @objc PromotedContentView.ã5ÆŒ <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x26cfffedf68  @objc PromotedContentView.(null) <stripped>
	0xf4fffee0b0  @objc PromotedContentView.- <stripped>
	0x2b4fffee2c8  @objc PromotedContentView.UHâÂAWAVAUATSHÉÏIº <stripped>
	0xfffee330  @objc PromotedContentView.Q <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffee448  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x114fffef220  @objc PromotedContentView.(null) <stripped>
	0x13cfffefbb8  @objc PromotedContentView.⁄f⁄ÈQ <stripped>
	0x3bc00015560  @objc PromotedContentView.∫ <stripped>
WARNING: couldn't find address 0x154d4ffff6408 (0x4d4ffff6408) in binary!
	0x78000000c  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x329c00015698 (0x29c00015698) in binary!
	0x52a4  @objc PromotedContentView.(null) <stripped>
WARNING: couldn't find address 0x4b8400015528 (0x38400015528) in binary!
	0x3cd0  @objc PromotedContentView.(null) <stripped>

	// Swift methods
	0x19040  func <stripped> // getter 
	0x19540  func <stripped> // method 
	0x19620  func <stripped> // method 
	0x19a30  func <stripped> // method 
	0x19db0  func <stripped> // method 
	0x1a060  func <stripped> // method 
	0x1a1c0  func <stripped> // method 
 }

 enum PromotedContentUI.Readiness { }

 class PromotedContentUI.Atomic {
 class PromotedContentUI.VisibilityChecker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let visibilityOperationLimit : Int
	let visibilityWorkQueue : OS_dispatch_queue
	var visibilityOperationCount : Int

	// Swift methods
	0x2dcc0  func <stripped> // method 
 }

 enum PromotedContentUI.TapActionError {

	// Properties
	case unmatchedTapAction  
	case invalidCalendarDescription  
	case invalidCalendarStartDate  
	case invalidCalendarRecurrence  
 }

 class PromotedContentUI.WebViewWarmer : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var finished : ()?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x43b200015168 (0x3b200015168) in binary!
	0x53a4  @objc WebViewWarmer.(null) <stripped>
WARNING: couldn't find address 0x76b4000151f0 (0x6b4000151f0) in binary!
	0x78000000c  @objc WebViewWarmer.(null) <stripped>
WARNING: couldn't find address 0x769c00015280 (0x69c00015280) in binary!
	0x6b5c  @objc WebViewWarmer.(null) <stripped>
 }

 class PromotedContentUI.CalendarEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let description : String // +0x10 (0x10)
	let location : String? // +0x20 (0x10)
	let summary : String? // +0x30 (0x10)
	let url : String? // +0x40 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let start : ôe // +0x34 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let end : øe // +0x6100085 (0x0)
	let allDay : Bool // +0x19 (0x1)
	let recurrence : EKRecurrenceRule? // +0x45545f5f (0x8)
	let workQueue : OS_dispatch_queue // +0x0 (0x8)

	// Swift methods
 }

 class PromotedContentUI.StoreProductViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var actionResult : 5d // +0x0 (0x0)
	var actionDelegate : ActionViewControllerDelegate // +0x0 (0x10)
	var adamIdentifier : NSNumber // +0x0 (0x8)
	var notificationObserver : NSObject? // +0x0 (0x8)
	var storeProductViewController : SKStoreProductViewController // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x769c00015280 (0x69c00015280) in binary!
	0x6b5c  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x6b5000015320 (0x35000015320) in binary!
	0x41f0  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x3d9400015560 (0x59400015560) in binary!
	0x6b3a  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x765400015190 (0x65400015190) in binary!
	0x18000000c  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x3dc000015098 (0x5c000015098) in binary!
	0x48000000c  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x530800015098 (0x30800015098) in binary!
	0x3924  @objc StoreProductViewController.(null) <stripped>
WARNING: couldn't find address 0x760c00015078 (0x60c00015078) in binary!
	0x7600  @objc StoreProductViewController.(null) <stripped>

	// Swift methods
 }

 class PromotedContentUI.MetricsVideoView : APPCMetricsView {

	// Properties
	let privacyMarker : PrivacyMarker
	var representationFetched : (_:)?
	var videoView : UIView?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x530800015098 (0x30800015098) in binary!
	0x3924  @objc MetricsVideoView.(null) <stripped>
WARNING: couldn't find address 0x760c00015078 (0x60c00015078) in binary!
	0x7600  @objc MetricsVideoView.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x4d4ffff6408  @objc MetricsVideoView.(null) <stripped>
	0x29c00015698  @objc MetricsVideoView.ÿÚCD= <stripped>

	// Swift methods
	0x3c710  func <stripped> // getter 
	0x3c740  func <stripped> // method 
	0x3c830  func <stripped> // method 
	0x3caa0  func <stripped> // method 
 }

 class PromotedContentUI.PreloadingMetricView : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var metricsView : MetricsView
WARNING: couldn't find address 0x0 (0x0) in binary!
	var readyClosure :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var readyListeners : Å`

	// Swift methods
 }

 class PromotedContentUI.WeakMetricsView : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var metricsView : MetricsView

	// Swift methods
 }

 class PromotedContentUI.PreloadedMetricViewHolder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let cleanupTimeout : Double
	var locks : SynchronizedDictionary
	var views : PreloadingMetricView
	var vendedViews : WeakMetricsView
	var cleanupTimers : [String : NSTimer]
	var viewsLock : APUnfairLock
	var cleanupTimersLock : APUnfairLock

	// Swift methods
	0x3daa0  func <stripped> // modifyCoroutine 
	0x3dad0  func <stripped> // modifyCoroutine 
	0x3db10  func <stripped> // method 
	0x3dc70  func <stripped> // method 
	0x3e4b0  func <stripped> // method 
	0x3e750  func <stripped> // method 
	0x3eaf0  func <stripped> // method 
	0x3ecc0  func <stripped> // method 
	0x3ef20  func <stripped> // method 
 }

 enum PromotedContentUI.PrivacyMarkerType {

	// Properties
	case display  
	case native  
	case outstream  
	case preroll  
 }

 class PromotedContentUI.SynchronizedDictionary : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let synchronizedLock : APUnfairLock
	var dict : [String : APUnfairRecursiveLock]

	// Swift methods
	0x411f0  func <stripped> // method 
 }

 class PromotedContentUI.DimmerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var dimmed : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x4bbc00015560 (0x3bc00015560) in binary!
	0x3d08  @objc DimmerView.(null) <stripped>
WARNING: couldn't find address 0x78000000c (0x78000000c) in binary!
	0x1fcffff6ae8  @objc DimmerView.(null) <stripped>

	// Swift methods
 }

 class PromotedContentUI.PrivacyMarker : UIButton /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let titleLabelRegularFontSize : —e // +0x8 (0x8)
	let markerLabel : UILabel // +0x10 (0x8)
	let markerView : UIView // +0x18 (0x8)
	var privacyMarkerType : PrivacyMarkerType // +0x20 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var privacyMarkerPosition : £X // +0x28 (0x8)
	var minimumTappableSize : CGSize // +0x30 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x329c00015698 (0x29c00015698) in binary!
	0x52a4  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x4b8400015528 (0x38400015528) in binary!
	0x3cd0  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x38a8000158f0 (0xa8000158f0) in binary!
	0x389c  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x7584000150c0 (0x584000150c0) in binary!
	0x18000000c  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x525000014fa8 (0x25000014fa8) in binary!
	0x38000000c  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x776400015178 (0x76400015178) in binary!
	0x3c70  @objc PrivacyMarker.(null) <stripped>
WARNING: couldn't find address 0x753c00015078 (0x53c00015078) in binary!
	0x198000000c  @objc PrivacyMarker.(null) <stripped>

	// Swift methods
	0x43660  func <stripped> // getter 
	0x43c00  func <stripped> // getter 
	0x43c40  func <stripped> // setter 
	0x43ca0  func <stripped> // modifyCoroutine 
	0x444f0  func <stripped> // method 
	0x445c0  func <stripped> // method 
	0x448a0  func <stripped> // method 
	0x44af0  func <stripped> // method 
	0x44c00  func <stripped> // method 
	0x44d10  func <stripped> // method 
	0x45110  func <stripped> // method 
 }

 class PromotedContentUI.PromotedContentWebView : WKWebView /System/Library/Frameworks/WebKit.framework/WebKit {

	// Properties
	var _processDelegate : WebConsoleLogging
	var webProcessProxy : APWebProcessProxyProtocol?
	var remoteObjectInterface : Any?
	var browserContextControllerDidLoad : Bool
	var unfairLock : APUnfairLock

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x776400015178 (0x76400015178) in binary!
	0x3c70  @objc PromotedContentWebView.(null) <stripped>
WARNING: couldn't find address 0x753c00015078 (0x53c00015078) in binary!
	0x198000000c  @objc PromotedContentWebView.(null) <stripped>
WARNING: couldn't find address 0x752400014f78 (0x52400014f78) in binary!
	0x7518  @objc PromotedContentWebView.(null) <stripped>

	// Swift methods
	0x45a00  func <stripped> // getter 
	0x45bc0  func <stripped> // method 
	0x45c80  func <stripped> // method 
 }
