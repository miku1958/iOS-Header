 protocol _MapKit_SwiftUI.MapAnnotationProtocol // 1 requirements
 {
	// getter
 }

 enum __C.MKUserTrackingMode { }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : 3(
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : 3(
 }

 struct __C.CLLocationCoordinate2D {

	// Properties
	var latitude : Double
	var longitude : Double
 }

 struct __C.MKCoordinateRegion {

	// Properties
	var center : CLLocationCoordinate2D
	var span : MKCoordinateSpan
 }

 struct __C.MKMapRect {

	// Properties
	var origin : MKMapPoint
	var size : MKMapSize
 }

 struct __C.MKCoordinateSpan {

	// Properties
	var latitudeDelta : Double
	var longitudeDelta : Double
 }

 struct __C.MKMapSize {

	// Properties
	var width : Double
	var height : Double
 }

 struct __C.MKMapPoint {

	// Properties
	var x : Double
	var y : Double
 }

 struct _MapKit_SwiftUI.MapAnnotation: MapAnnotationProtocol {

	// Properties
	var coordinate : CLLocationCoordinate2D
	var anchorPoint : CGPoint
	var content : A
 }

 struct _MapKit_SwiftUI.MapPin: MapAnnotationProtocol {

	// Properties
	var coordinate : CLLocationCoordinate2D // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tintColor : {) // +0x10
 }

 struct _MapKit_SwiftUI.MapMarker: MapAnnotationProtocol {

	// Properties
	var coordinate : CLLocationCoordinate2D // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tintColor : {) // +0x10
 }

 struct _MapKit_SwiftUI._MapAnnotationData {

	// Properties
	var coordinate : CLLocationCoordinate2D // +0x0
	var viewType : ViewType // +0x10
	var viewConfiguration : _MapAnnotationData // +0x18
 }

 enum _MapKit_SwiftUI.ViewType {

	// Properties
	case pin  
	case marker  
	case custom  
 }

 struct _MapKit_SwiftUI.Map {

	// Properties
	var provider : A
 }

 enum _MapKit_SwiftUI.MapUserTrackingMode {

	// Properties
	case none  
	case follow  
 }

 struct _MapKit_SwiftUI.MapInteractionModes {

	// Properties
	let rawValue : Int // +0x0
 }

 class _MapKit_SwiftUI.AnnotationBridge {
 class _MapKit_SwiftUI.MapViewCoordinator {
 class _MapKit_SwiftUI._SwiftUIMKMapView : MKMapView /System/Library/Frameworks/MapKit.framework/MapKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x23fc00005ae8 (0x3fc00005ae8) in binary!
	0x2830  @objc _SwiftUIMKMapView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffff318  @objc _SwiftUIMKMapView.(null) <stripped>
 }

 struct _MapKit_SwiftUI._MapView {

	// Properties
	var region : Region
	var annotationProvider : _DefaultAnnotatedMapContent
	var interactions : MapInteractionModes
	var showsUserLocation : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var userTrackingMode : (
 }

 enum _MapKit_SwiftUI.Region {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case rect : ≥'
WARNING: couldn't find address 0x0 (0x0) in binary!
	case region : •'
 }

 struct _MapKit_SwiftUI._DefaultAnnotatedMapContent {

	// Properties
	let region : Region
	let interactionModes : MapInteractionModes
	let showsUserLocation : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userTrackingMode : ≈&
	let items : A?
	let content : _MapAnnotationData
 }

 struct _MapKit_SwiftUI._DefaultMapContent {

	// Properties
	let region : Region // +0x0
	let interactionModes : MapInteractionModes // +0x30
	let showsUserLocation : Bool // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userTrackingMode : ≈& // +0x40
 }

 struct _MapKit_SwiftUI.AnnotationData { }

 class _MapKit_SwiftUI.SwiftUIAnnotationView : MKAnnotationView /System/Library/Frameworks/MapKit.framework/MapKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var wrappedView : 3&
	var anchorPoint : CGPoint
	let model : Model
	let hostView : UIView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x27f600005b20 (0x7f600005b20) in binary!
	0x27f8  @objc SwiftUIAnnotationView.(null) <stripped>
WARNING: couldn't find address 0x22d600005ad0 (0x2d600005ad0) in binary!
	0x27f0  @objc SwiftUIAnnotationView.(null) <stripped>
WARNING: couldn't find address 0x22be00005990 (0x2be00005990) in binary!
	0x0  @objc SwiftUIAnnotationView.(null) <stripped>
WARNING: couldn't find address 0x3fe0000000000000 (0x0) in binary!
	0x8400000058  @objc SwiftUIAnnotationView.(null) <stripped>
	0x4040  @objc SwiftUIAnnotationView.â√Hã@¯HâEêHã@@HÉ¿HÉ‡IâÂI)≈LâÏLcs8MÓHãE»Hã <stripped>

	// Swift methods
 }

 class _MapKit_SwiftUI.Model {
 struct _MapKit_SwiftUI.RootContent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _model : Y%
 }
