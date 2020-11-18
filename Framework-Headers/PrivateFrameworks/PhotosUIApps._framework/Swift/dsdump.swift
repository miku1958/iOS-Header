 protocol PhotosUIApps.PhotosReliveWidgetFontProviding // 5 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
 }
 protocol PhotosUIApps.PhotosReliveWidgetContent // 8 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// getter
	// getter
	// getter
	// getter
	// getter
 }
 protocol PhotosUIApps.PhotosReliveWidgetMemoryContentProviding // 4 requirements
 {
	// class base protocol
	// class base protocol
	// getter
	// getter
 }
 protocol PhotosUIApps.PhotosReliveWidgetMemoryStyleFontProviding // 1 requirements
 {
	// class base protocol
 }

 class __C.CGImage {
 enum __C.PXTimelineContentType { }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : ÝH
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : ÝH
 }

 class PhotosUIApps.PhotosReliveWidgetViewModel : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contentType : PXTimelineContentType // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let widgetFamily : ‰M // +0x33 (0x0)
	var layoutDescription : LayoutDescription // +0x2100085 (0x20)
	let asset : PHAsset? // +0x19 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let destination : ÛH // +0x45545f5f (0x0)
	var title : String? // +0x0 (0x10)
	var subtitle : String? // +0x0 (0x10)
	var image : CGImage // +0x1e000 (0x8)
	var imageIsDegraded : Bool // +0x0 (0x1)

	// Swift methods
	0x25b0  class func PhotosReliveWidgetViewModel.__allocating_init(contentType:widgetFamily:asset:destination:title:subtitle:image:imageIsDegraded:) // init 
 }

 class PhotosUIApps.PhotosReliveWidgetPlaceholderViewModel : PhotosReliveWidgetViewModel { }

 class PhotosUIApps.PhotosReliveWidgetFallbackViewModel : PhotosReliveWidgetViewModel { }

 struct PhotosUIApps.LayoutDescription {

	// Properties
	var image : CGImage // +0x0
	var expandedDisplaySize : CGSize // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scale : ÝH // +0x18
 }

 class PhotosUIApps.HelloWorld : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let text : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x45e8000094e0 (0x5e8000094e0) in binary!
	0x45dc  @objc HelloWorld.(null) <stripped>
WARNING: couldn't find address 0x3eca00009300 (0x6ca00009300) in binary!
	0x68000000c  @objc HelloWorld.(null) <stripped>
WARNING: couldn't find address 0x45b800009360 (0x5b800009360) in binary!
	0x45b4  @objc HelloWorld.(null) <stripped>
 }

 struct PhotosUIApps.PhotosReliveWidgetEntry {

	// Properties
	let rawEntry : PXTimelineEntry // +0x0
	let role : PhotosReliveWidgetEntryRole // +0x8
	var viewModel : PhotosReliveWidgetViewModel // +0x10
 }

 struct PhotosUIApps.PhotosReliveWidgetEntryProvider {

	// Properties
	var library : PHPhotoLibrary? // +0x0
 }

 struct PhotosUIApps.PhotosReliveWidget { }

 enum PhotosUIApps.PhotosReliveWidgetEntryRole {

	// Properties
	case content  
	case fallback  
	case placeholder  
 }

 struct PhotosUIApps.PhotosReliveWidgetScheduledReloadConfiguration {

	// Properties
	var entryIdentifier : String?
	var delay : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var scheduledDate : ÏF
 }

 struct PhotosUIApps.PhotosReliveWidgetSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let widgetFamily : ‰M
	let displaySize : CGSize
 }

 enum PhotosUIApps.CodingKeys {

	// Properties
	case entryIdentifier  
	case delay  
	case scheduledDate  
 }

 struct PhotosUIApps.PhotosReliveWidgetTesterTabView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _selection : ÝG // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _sliderPosition : ÓG // +0x10
 }

 class PhotosUIApps.PhotosReliveWidgetUITesterViewController : UIViewController /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tabView : IG

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x45b800009360 (0x5b800009360) in binary!
	0x45b4  @objc PhotosReliveWidgetUITesterViewController.(null) <stripped>
WARNING: couldn't find address 0x3e9a00009438 (0x69a00009438) in binary!
	0x3e8e  @objc PhotosReliveWidgetUITesterViewController.(null) <stripped>
WARNING: couldn't find address 0x45a300009418 (0x5a300009418) in binary!
	0x3e76  @objc PhotosReliveWidgetUITesterViewController.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffffe7d5  @objc PhotosReliveWidgetUITesterViewController.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x23cffffec95  @objc PhotosReliveWidgetUITesterViewController.(null) <stripped>
	0x1cd00009420  @objc PhotosReliveWidgetUITesterViewController.H¹ <stripped>
 }

 struct PhotosUIApps.TestWidget {

	// Properties
	let content : A
	let widgetSize : PhotosReliveWidgetSize
 }

 struct PhotosUIApps.ScaleTextToFitWithLineHeight {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let targetLineHeight : ÝH // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let minimumScaleFactor : ÝH // +0x8
	let lineLimit : Int? // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _unscaledNaturalLineHeight : iD // +0x20
 }

 struct PhotosUIApps.ViewSizingKey { }

 struct PhotosUIApps.PhotosReliveWidgetPlaceholderContent: PhotosReliveWidgetFontProviding,  PhotosReliveWidgetMemoryStyleFontProviding,  PhotosReliveWidgetContent,  PhotosReliveWidgetMemoryContentProviding {

	// Properties
	let viewModel : PhotosReliveWidgetViewModel // +0x0
 }

 struct PhotosUIApps.PhotosReliveWidgetFallbackContent: PhotosReliveWidgetContent {

	// Properties
	let viewModel : PhotosReliveWidgetViewModel // +0x0
 }

 struct PhotosUIApps.PhotosReliveWidgetFeaturedPhotoContent: PhotosReliveWidgetContent {

	// Properties
	let viewModel : PhotosReliveWidgetViewModel // +0x0
 }

 struct PhotosUIApps.PhotosReliveWidgetMemoryContent: PhotosReliveWidgetFontProviding,  PhotosReliveWidgetMemoryStyleFontProviding,  PhotosReliveWidgetContent,  PhotosReliveWidgetMemoryContentProviding {

	// Properties
	let viewModel : PhotosReliveWidgetViewModel // +0x0
 }

 struct PhotosUIApps.PhotosReliveWidgetPaddingVStack {

	// Properties
	let content : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	var widgetFamily : ‰M
	var contentType : PhotosReliveWidgetContentType
 }

 enum PhotosUIApps.PhotosReliveWidgetContentType {

	// Properties
	case memory  
	case featuredPhoto  
	case fallback  
 }

 struct PhotosUIApps.PhotosReliveWidgetView {

	// Properties
	var entry : PhotosReliveWidgetEntry
	let viewModel : PhotosReliveWidgetViewModel
	let role : PhotosReliveWidgetEntryRole
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _widgetFamily : ‰,
 }
