//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class MKMapView;

__attribute__((visibility("hidden")))
@interface _MKLabelMarkerView : MKAnnotationView
{
    MKMapView *_mapView;
}

@property (weak, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;

+ (BOOL)_followsTerrain;
- (void).cxx_destruct;
- (void)_deregisterObserver;
- (void)_registerObserver;
- (void)_updateAnchorOffset;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setAnnotation:(id)arg1;
- (BOOL)shouldShowCallout;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1;

@end
