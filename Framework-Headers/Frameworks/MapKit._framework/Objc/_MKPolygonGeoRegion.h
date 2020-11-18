//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKGeoJSONCoverageRegion-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MKPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion>
{
    struct CLLocationCoordinate2D *_polygon;
    unsigned long long _vertexCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)_loadWithJSONObject:(id)arg1 error:(id *)arg2;
- (BOOL)coordinateLiesInRegion:(struct CLLocationCoordinate2D)arg1;
- (void)dealloc;
- (id)initWithJSONObject:(id)arg1 error:(id *)arg2;

@end
