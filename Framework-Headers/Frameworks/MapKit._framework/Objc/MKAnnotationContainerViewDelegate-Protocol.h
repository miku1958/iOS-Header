//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKAnnotationContainerView, MKAnnotationView, UIControl, UIView;

@protocol MKAnnotationContainerViewDelegate <NSObject>
- (void)annotationContainer:(MKAnnotationContainerView *)arg1 annotationView:(MKAnnotationView *)arg2 calloutAccessoryControlTapped:(UIControl *)arg3;
- (void)annotationContainer:(MKAnnotationContainerView *)arg1 calloutPrimaryActionTriggeredForAnnotationView:(MKAnnotationView *)arg2;
- (double)annotationContainer:(MKAnnotationContainerView *)arg1 pinDropDistanceForCoordinate:(struct CLLocationCoordinate2D)arg2 maxDistance:(double *)arg3;
- (void)annotationContainer:(MKAnnotationContainerView *)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint)arg2 annotationCoordinate:(struct CLLocationCoordinate2D)arg3 completionHandler:(void (^)(void))arg4;
- (void)annotationContainerDidAnimateBubble:(MKAnnotationContainerView *)arg1;
- (void)annotationContainerDidDropPins:(MKAnnotationContainerView *)arg1;
- (BOOL)annotationContainerIsRotated:(MKAnnotationContainerView *)arg1;
- (BOOL)annotationContainerShouldAlignToPixels:(MKAnnotationContainerView *)arg1;
- (struct CGRect)annotationContainerVisibleRect:(MKAnnotationContainerView *)arg1;
- (void)annotationContainerWillAnimateBubble:(MKAnnotationContainerView *)arg1;
- (void)annotationContainerWillDropPins:(MKAnnotationContainerView *)arg1;
- (double)annotationContainerZoomScale:(MKAnnotationContainerView *)arg1;
- (void)calloutDidAppearForAnnotationView:(MKAnnotationView *)arg1 inContainer:(MKAnnotationContainerView *)arg2;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(UIView *)arg2;
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(UIView *)arg2;
- (struct CGRect)visibleCenteringRectInView:(UIView *)arg1;
- (struct CGRect)visibleRectInView:(UIView *)arg1;

@optional
- (void)annotationContainerDidFinishMapsTransitionExpanding:(MKAnnotationContainerView *)arg1;
@end

