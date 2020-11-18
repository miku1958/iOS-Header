//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKOverlayRenderer.h>

@class GEOTileKeyList, NSObject;
@protocol OS_dispatch_queue;

@interface MKTileOverlayRenderer : MKOverlayRenderer
{
    GEOTileKeyList *_pendingRequests;
    NSObject<OS_dispatch_queue> *_pendingRequestsLock;
}

- (void).cxx_destruct;
- (BOOL)_mayExtendOutsideBounds;
- (BOOL)canDrawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2;
- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;
- (id)initWithOverlay:(id)arg1;
- (id)initWithTileOverlay:(id)arg1;
- (void)reloadData;

@end
