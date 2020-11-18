 protocol _MapKit_SwiftUI.MapAnnotationProtocol // 1 requirements
 {
	// getter
 }

 enum __C.MKUserTrackingMode { }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : £)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : £)
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
	var tintColor : ë* // +0x10
 }

 struct _MapKit_SwiftUI.MapMarker: MapAnnotationProtocol {

	// Properties
	var coordinate : CLLocationCoordinate2D // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tintColor : ë* // +0x10
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
WARNING: couldn't find address 0x23ec00006c30 (0x3ec00006c30) in binary!
	0x240a  @objc _SwiftUIMKMapView.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x3fcfffff208  @objc _SwiftUIMKMapView.(null) <stripped>
 }

 struct _MapKit_SwiftUI._MapView {

	// Properties
	var region : Region
	var annotationProvider : _DefaultAnnotatedMapContent
	var interactions : MapInteractionModes
	var showsUserLocation : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var userTrackingMode : )
 }

 enum _MapKit_SwiftUI.Region {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case rect : #)
WARNING: couldn't find address 0x0 (0x0) in binary!
	case region : )
 }

 struct _MapKit_SwiftUI._DefaultAnnotatedMapContent {

	// Properties
	let region : Region
	let interactionModes : MapInteractionModes
	let showsUserLocation : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userTrackingMode : 5(
	let items : A?
	let content : _MapAnnotationData
 }

 struct _MapKit_SwiftUI._DefaultMapContent {

	// Properties
	let region : Region // +0x0
	let interactionModes : MapInteractionModes // +0x30
	let showsUserLocation : Bool // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	let userTrackingMode : 5( // +0x40
 }

 struct _MapKit_SwiftUI.AnnotationData { }

 class _MapKit_SwiftUI.SwiftUIAnnotationView : MKAnnotationView /System/Library/Frameworks/MapKit.framework/MapKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var wrappedView : £'
	var anchorPoint : CGPoint
	let model : Model
	let hostView : UIView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x22fd00006c80 (0x2fd00006c80) in binary!
	0x23ea  @objc SwiftUIAnnotationView.(null) <stripped>
WARNING: couldn't find address 0x22ce00006c30 (0x2ce00006c30) in binary!
	0x27c8  @objc SwiftUIAnnotationView.(null) <stripped>
WARNING: couldn't find address 0x22b600006af0 (0x2b600006af0) in binary!
	0x0  @objc SwiftUIAnnotationView.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x41b0  @objc SwiftUIAnnotationView.(null) <stripped>
WARNING: couldn't find address 0xd400000048 (0xd400000048) in binary!
	0xec00000038  @objc SwiftUIAnnotationView.(null) <stripped>

	// Swift methods
 }

 class _MapKit_SwiftUI.Model {
 struct _MapKit_SwiftUI.RootContent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _model : É&
 }
