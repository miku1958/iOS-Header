//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPolylineRenderer.h>

@class NSArray;

@interface MKGradientPolylineRenderer : MKPolylineRenderer
{
    NSArray *_colors;
    NSArray *_externallySetColors;
    NSArray *_locations;
    NSArray *_externallySetLocations;
}

@property (readonly, copy, nonatomic) NSArray *colors;
@property (readonly, copy, nonatomic) NSArray *locations;

+ (Class)_mapkitLeafClass;
- (void).cxx_destruct;
- (BOOL)_canProvideVectorGeometry;
- (void)_updateColorStops;
- (void)_updateVectorGeometry:(id)arg1;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (void)setColors:(id)arg1 atLocations:(id)arg2;

@end

