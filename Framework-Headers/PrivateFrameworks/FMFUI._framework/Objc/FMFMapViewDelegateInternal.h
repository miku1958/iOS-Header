//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMFUI/MKMapViewDelegate-Protocol.h>
#import <FMFUI/UIGestureRecognizerDelegate-Protocol.h>

@class FMAnnotationView, FMFWildcardGestureRecognizer, MKMapView, NSString;
@protocol FMFMapViewDelegateInternalDelegate;

__attribute__((visibility("hidden")))
@interface FMFMapViewDelegateInternal : NSObject <UIGestureRecognizerDelegate, MKMapViewDelegate>
{
    BOOL _isMapCenteringDisabled;
    BOOL _respondingToUserTouch;
    id<FMFMapViewDelegateInternalDelegate> _delegate;
    FMFWildcardGestureRecognizer *_gr;
    FMAnnotationView *_selectedAnnotationView;
    MKMapView *_mapView;
    CDStruct_2c43369c _lastUserLocationCoordinate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FMFMapViewDelegateInternalDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) FMFWildcardGestureRecognizer *gr; // @synthesize gr=_gr;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isMapCenteringDisabled; // @synthesize isMapCenteringDisabled=_isMapCenteringDisabled;
@property (nonatomic) CDStruct_2c43369c lastUserLocationCoordinate; // @synthesize lastUserLocationCoordinate=_lastUserLocationCoordinate;
@property (nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property (nonatomic) BOOL respondingToUserTouch; // @synthesize respondingToUserTouch=_respondingToUserTouch;
@property (nonatomic) FMAnnotationView *selectedAnnotationView; // @synthesize selectedAnnotationView=_selectedAnnotationView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_moveCenterByOffset:(struct CGPoint)arg1 from:(CDStruct_2c43369c)arg2 mapView:(id)arg3;
- (id)accuracyCircleForLocation:(id)arg1;
- (BOOL)canSelectAnnotation:(id)arg1;
- (struct UIEdgeInsets)edgeInsetsWithMinApplied:(struct UIEdgeInsets)arg1;
- (void)endTouches;
- (id)fmfOverlayColor;
- (id)fmfOverlayColorSatellite;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithDelegate:(id)arg1 mapView:(id)arg2;
- (CDStruct_2f492f29)mapRectMakeWithRadialDistanceForCoordinate:(CDStruct_2c43369c)arg1 andRadius:(double)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (BOOL)regionIsValid:(CDStruct_2f492f29)arg1;
- (void)selectAnnotation:(id)arg1;
- (void)slideAnnotation:(id)arg1 intoViewIfNeededForMapView:(id)arg2;
- (void)updateOverlaysForAnnotationMove:(id)arg1 mapView:(id)arg2;
- (void)zoomToFitAnnotationsForMapView:(id)arg1 includeMe:(BOOL)arg2 disallowAnimation:(BOOL)arg3;
- (void)zoomToFitLocation:(id)arg1 forMapView:(id)arg2;

@end
