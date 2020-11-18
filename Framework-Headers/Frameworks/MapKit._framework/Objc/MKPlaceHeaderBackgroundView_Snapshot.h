//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceHeaderBackgroundView.h>

#import <MapKit/MKMapViewDelegate-Protocol.h>

@class MKMapCamera, MKMapView, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface MKPlaceHeaderBackgroundView_Snapshot : MKPlaceHeaderBackgroundView <MKMapViewDelegate>
{
    MKMapView *_mapView;
    BOOL _renderingMap;
    BOOL _orbiting;
    BOOL _settingUpOrbitAnimation;
    BOOL _showsPin;
    MKMapCamera *_orbitCamera;
    double _zoomLevel;
    UIColor *_pinTintColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MKMapCamera *orbitCamera; // @synthesize orbitCamera=_orbitCamera;
@property (nonatomic) BOOL orbiting; // @synthesize orbiting=_orbiting;
@property (nonatomic) UIColor *pinTintColor; // @synthesize pinTintColor=_pinTintColor;
@property (nonatomic) BOOL settingUpOrbitAnimation; // @synthesize settingUpOrbitAnimation=_settingUpOrbitAnimation;
@property (nonatomic) BOOL showsPin; // @synthesize showsPin=_showsPin;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useSatellite;
@property (nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;

- (void).cxx_destruct;
- (void)_orbitNextThird;
- (void)beginOrbit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 mapItem:(id)arg2;
- (void)mapFinishedLoading:(BOOL)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (void)pause;
- (void)pauseOrbit;
- (void)prepareForPresentation;
- (void)present;
- (void)requestSnapshot;
- (void)reset;
- (void)resume;
- (void)setMapItem:(id)arg1;

@end
