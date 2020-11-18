//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/MKAnnotationRepresentation-Protocol.h>
#import <MapKit/MKLocatableObject-Protocol.h>

@class GEORouteMatch, MKAnnotationManager, MKUserLocationAnnotationViewProxy, NSString, UICalloutView, UIColor, UIImage, VKAnchorWrapper, _MKAnnotationViewAnchor;
@protocol MKAnnotation;

@interface MKAnnotationView : UIView <MKAnnotationRepresentation, MKLocatableObject>
{
    BOOL _customTransformApplied;
    BOOL _internalTransformApplied;
    BOOL _animatingToCoordinate;
    BOOL _tracking;
    struct CLLocationCoordinate2D _presentationCoordinate;
    double _presentationCourse;
    CDUnknownBlockType _presentationCoordinateChangedCallback;
    struct CLLocationCoordinate2D _coordinate;
    MKUserLocationAnnotationViewProxy *_userLocationProxy;
    double _rotationRadians;
    _MKAnnotationViewAnchor *_anchor;
    GEORouteMatch *_routeMatch;
    double _mapRotationRadians;
    BOOL _explicitlyHidden;
    BOOL _hiddenForOffscreen;
    BOOL _hiddenForInvalidPoint;
    double _mapPitchRadians;
    CDStruct_80aa614a _mapDisplayStyle;
    MKAnnotationManager *_annotationManager;
    id<MKAnnotation> _annotation;
    UICalloutView *_calloutView;
    UIView *_leftCalloutAccessoryView;
    UIView *_rightCalloutAccessoryView;
    UIView *_detailCalloutAccessoryView;
    NSString *_reuseIdentifier;
    UIImage *_image;
    unsigned long long _mapType;
    unsigned long long _zIndex;
    struct CGPoint _centerOffset;
    struct CGPoint _calloutOffset;
    unsigned long long _dragState;
    CDUnknownBlockType _calloutHitTest;
    BOOL _pendingSelectionAnimated;
    struct {
        unsigned int disabled:1;
        unsigned int selected:1;
        unsigned int canShowCallout:1;
        unsigned int isHighlighted:1;
        unsigned int canDisplayDisclosureInCallout:1;
        unsigned int canDisplayPlacemarkInCallout:1;
        unsigned int draggable:1;
        unsigned int useBalloonCallouts:1;
    } _flags;
    double _direction;
    struct CGPoint _leftCalloutOffset;
    struct CGPoint _rightCalloutOffset;
}

@property (nonatomic, getter=_isAnimatingToCoordinate, setter=_setAnimatingToCoordinate:) BOOL _animatingToCoordinate; // @synthesize _animatingToCoordinate;
@property (weak, nonatomic, setter=_setAnnotationManager:) MKAnnotationManager *_annotationManager; // @synthesize _annotationManager;
@property (copy, nonatomic) CDUnknownBlockType _calloutHitTest; // @synthesize _calloutHitTest;
@property (nonatomic, setter=_setDirection:) double _direction; // @synthesize _direction;
@property (nonatomic, setter=_setPresentationCoordinate:) struct CLLocationCoordinate2D _presentationCoordinate; // @synthesize _presentationCoordinate;
@property (copy, nonatomic, setter=_setPresentationCoordinateChangedCallback:) CDUnknownBlockType _presentationCoordinateChangedCallback; // @synthesize _presentationCoordinateChangedCallback;
@property (nonatomic, setter=_setPresentationCourse:) double _presentationCourse; // @synthesize _presentationCourse;
@property (strong, nonatomic, setter=_setRouteMatch:) GEORouteMatch *_routeMatch; // @synthesize _routeMatch;
@property (readonly, nonatomic) struct CGRect _significantFrame;
@property (nonatomic, getter=_isTracking, setter=_setTracking:) BOOL _tracking; // @synthesize _tracking;
@property (readonly, nonatomic) MKUserLocationAnnotationViewProxy *_userLocationProxy;
@property (readonly, nonatomic) VKAnchorWrapper *anchor;
@property (strong, nonatomic) id<MKAnnotation> annotation;
@property (readonly, nonatomic, getter=_balloonCalloutStyle) long long balloonCalloutStyle;
@property (readonly, nonatomic, getter=_balloonContentView) UIView *balloonContentView;
@property (readonly, nonatomic, getter=_balloonImage) UIImage *balloonImage;
@property (readonly, nonatomic, getter=_balloonInnerStrokeColor) UIColor *balloonInnerStrokeColor;
@property (readonly, nonatomic, getter=_balloonStrokeColor) UIColor *balloonStrokeColor;
@property (readonly, nonatomic, getter=_balloonTintColor) UIColor *balloonTintColor;
@property (nonatomic) struct CGPoint calloutOffset;
@property (nonatomic) BOOL canShowCallout;
@property (nonatomic) struct CGPoint centerOffset;
@property (readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIView *detailCalloutAccessoryView; // @synthesize detailCalloutAccessoryView=_detailCalloutAccessoryView;
@property (nonatomic) unsigned long long dragState;
@property (nonatomic, getter=isDraggable) BOOL draggable;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_isHiddenForInvalidPoint, setter=_setHiddenForInvalidPoint:) BOOL hiddenForInvalidPoint; // @synthesize hiddenForInvalidPoint=_hiddenForInvalidPoint;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (strong, nonatomic) UIImage *image;
@property (strong, nonatomic) UIView *leftCalloutAccessoryView; // @synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView;
@property (nonatomic) struct CGPoint leftCalloutOffset; // @synthesize leftCalloutOffset=_leftCalloutOffset;
@property (nonatomic, getter=_mapDisplayStyle, setter=_setMapDisplayStyle:) CDStruct_80aa614a mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
@property (nonatomic, getter=_mapPitchRadians, setter=_setMapPitchRadians:) double mapPitchRadians; // @synthesize mapPitchRadians=_mapPitchRadians;
@property (nonatomic, getter=_mapRotationRadians, setter=_setMapRotationRadians:) double mapRotationRadians; // @synthesize mapRotationRadians=_mapRotationRadians;
@property (nonatomic, getter=_isPendingSelectionAnimated, setter=_setPendingSelectionAnimated:) BOOL pendingSelectionAnimated; // @synthesize pendingSelectionAnimated=_pendingSelectionAnimated;
@property (readonly, nonatomic) NSString *reuseIdentifier;
@property (strong, nonatomic) UIView *rightCalloutAccessoryView; // @synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView;
@property (nonatomic) struct CGPoint rightCalloutOffset; // @synthesize rightCalloutOffset=_rightCalloutOffset;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic, getter=_significantBounds) struct CGRect significantBounds;
@property (readonly) Class superclass;
@property (nonatomic, getter=_useBalloonCallouts, setter=_setUseBalloonCallouts:) BOOL useBalloonCallouts;

+ (id)_disclosureCalloutButton;
+ (BOOL)_followsTerrain;
+ (unsigned long long)_selectedZIndex;
+ (unsigned long long)_zIndex;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentLocationTitle;
- (void).cxx_destruct;
- (void)_addBalloonCalloutView:(id)arg1;
- (id)_annotationContainer;
- (BOOL)_balloonCalloutShouldOriginateFromSmallSize:(double *)arg1;
- (id)_calloutView;
- (BOOL)_canChangeOrientation;
- (BOOL)_canDisplayDisclosureInCallout;
- (BOOL)_canDisplayPlacemarkInCallout;
- (id)_containerView;
- (id)_contentLayer;
- (void)_didHideBalloonCalloutView:(id)arg1;
- (void)_didUpdatePosition;
- (struct CGPoint)_draggingDropOffset;
- (void)_enableRotationForHeadingMode:(double)arg1;
- (id)_getPopover:(id)arg1;
- (BOOL)_hasAlternateOrientation;
- (void)_invalidateCachedCoordinate;
- (unsigned long long)_mapType;
- (struct CGRect)_mapkit_visibleRect;
- (unsigned long long)_orientationCount;
- (double)_pointsForDistance:(double)arg1;
- (void)_removePopover;
- (void)_resetZIndex;
- (void)_resetZIndexNotify:(BOOL)arg1;
- (void)_setCalloutView:(id)arg1;
- (void)_setCanDisplayDisclosureInCallout:(BOOL)arg1;
- (void)_setCanDisplayPlacemarkInCallout:(BOOL)arg1;
- (void)_setHiddenForOffscreen:(BOOL)arg1;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2;
- (void)_setZIndex:(unsigned long long)arg1;
- (void)_setZIndex:(unsigned long long)arg1 notify:(BOOL)arg2;
- (void)_transitionFrom:(long long)arg1 to:(long long)arg2 duration:(double)arg3;
- (void)_updateFromMap;
- (void)_userTrackingModeDidChange:(id)arg1;
- (id)_vkMarker;
- (unsigned long long)_zIndex;
- (void)commonInit;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isPersistent;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setHidden:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)viewRepresentation;

@end

