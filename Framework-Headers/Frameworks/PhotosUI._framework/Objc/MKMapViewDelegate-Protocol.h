//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class MKAnnotationView, MKMapView, MKOverlayRenderer, MKOverlayView, MKUserLocation, NSArray, NSError, UIControl;
@protocol MKAnnotation, MKOverlay;

@protocol MKMapViewDelegate <NSObject>

@optional
- (void)mapView:(MKMapView *)arg1 annotationView:(MKAnnotationView *)arg2 calloutAccessoryControlTapped:(UIControl *)arg3;
- (void)mapView:(MKMapView *)arg1 annotationView:(MKAnnotationView *)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;
- (void)mapView:(MKMapView *)arg1 didAddAnnotationViews:(NSArray *)arg2;
- (void)mapView:(MKMapView *)arg1 didAddOverlayRenderers:(NSArray *)arg2;
- (void)mapView:(MKMapView *)arg1 didAddOverlayViews:(NSArray *)arg2;
- (void)mapView:(MKMapView *)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3;
- (void)mapView:(MKMapView *)arg1 didDeselectAnnotationView:(MKAnnotationView *)arg2;
- (void)mapView:(MKMapView *)arg1 didFailToLocateUserWithError:(NSError *)arg2;
- (void)mapView:(MKMapView *)arg1 didSelectAnnotationView:(MKAnnotationView *)arg2;
- (void)mapView:(MKMapView *)arg1 didUpdateUserLocation:(MKUserLocation *)arg2;
- (void)mapView:(MKMapView *)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(MKMapView *)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (MKOverlayRenderer *)mapView:(MKMapView *)arg1 rendererForOverlay:(id<MKOverlay>)arg2;
- (MKAnnotationView *)mapView:(MKMapView *)arg1 viewForAnnotation:(id<MKAnnotation>)arg2;
- (MKOverlayView *)mapView:(MKMapView *)arg1 viewForOverlay:(id<MKOverlay>)arg2;
- (void)mapViewDidFailLoadingMap:(MKMapView *)arg1 withError:(NSError *)arg2;
- (void)mapViewDidFinishLoadingMap:(MKMapView *)arg1;
- (void)mapViewDidFinishRenderingMap:(MKMapView *)arg1 fullyRendered:(BOOL)arg2;
- (void)mapViewDidStopLocatingUser:(MKMapView *)arg1;
- (void)mapViewWillStartLoadingMap:(MKMapView *)arg1;
- (void)mapViewWillStartLocatingUser:(MKMapView *)arg1;
- (void)mapViewWillStartRenderingMap:(MKMapView *)arg1;
@end

