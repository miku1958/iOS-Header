//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKOverlayPathView.h>

@class MKPolyline;

@interface MKPolylineView : MKOverlayPathView
{
}

@property (readonly, nonatomic) MKPolyline *polyline;

- (void)createPath;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (id)initWithPolyline:(id)arg1;

@end

