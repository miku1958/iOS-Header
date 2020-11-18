//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKOverlay-Protocol.h>

@class GEOMapRegion, NSMutableSet, NSSet, NSString, VKPolylineOverlay;

@interface VKPolylineGroupOverlay : NSObject <VKOverlay>
{
    NSMutableSet *_polylines;
    GEOMapRegion *_boundingMapRegion;
    struct __CFSet *_observers;
    VKPolylineOverlay *_selectedPolyline;
    BOOL _containsTransit;
    BOOL _showTraffic;
}

@property (readonly, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property (readonly, nonatomic) BOOL containsTransit; // @synthesize containsTransit=_containsTransit;
@property (readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSSet *polylines; // @synthesize polylines=_polylines;
@property (strong, nonatomic) VKPolylineOverlay *selectedPolyline; // @synthesize selectedPolyline=_selectedPolyline;
@property (nonatomic) BOOL showTraffic; // @synthesize showTraffic=_showTraffic;
@property (readonly) Class superclass;

- (void)_updateBoundingMapRegion;
- (void)_updateContainsTransit;
- (void)addObserver:(id)arg1;
- (void)addPolyline:(id)arg1;
- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (void)removePolyline:(id)arg1;

@end

