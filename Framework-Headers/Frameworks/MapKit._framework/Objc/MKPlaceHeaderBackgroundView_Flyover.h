//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceHeaderBackgroundView.h>

@class GEOPDFlyover, MKMapView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface MKPlaceHeaderBackgroundView_Flyover : MKPlaceHeaderBackgroundView
{
    BOOL _animationPaused;
    BOOL _animationPrepared;
    UITapGestureRecognizer *_interactionTapRecognizer;
    MKMapView *_mapView;
    GEOPDFlyover *_flyover;
}

- (void).cxx_destruct;
- (void)_pauseTour;
- (id)flyover;
- (id)initWithFrame:(struct CGRect)arg1 mapItem:(id)arg2;
- (id)mapView;
- (void)pause;
- (void)prepareForPresentation;
- (void)present;
- (void)reset;
- (void)resume;
- (void)setFlyover:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setMapView:(id)arg1;

@end
