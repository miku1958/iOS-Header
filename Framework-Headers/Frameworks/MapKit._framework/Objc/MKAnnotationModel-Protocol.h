//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@protocol MKAnnotationRepresentation;

@protocol MKAnnotationModel <NSObject>
- (void)addAnnotationRepresentation:(id<MKAnnotationRepresentation>)arg1 allowAnimation:(BOOL)arg2;
- (void)deselectAnnotationRepresentation:(id<MKAnnotationRepresentation>)arg1 animated:(BOOL)arg2;
- (void)moveAnnotationRepresentation:(id<MKAnnotationRepresentation>)arg1 fromCoordinate:(struct CLLocationCoordinate2D)arg2 animated:(BOOL)arg3 duration:(double)arg4;
- (void)removeAnnotationRepresentation:(id<MKAnnotationRepresentation>)arg1;
- (void)selectAnnotationRepresentation:(id<MKAnnotationRepresentation>)arg1 animated:(BOOL)arg2;
@end

