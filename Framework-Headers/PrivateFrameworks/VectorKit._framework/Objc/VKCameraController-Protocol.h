//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class GEOMapRegion, VKViewportInfo;

@protocol VKCameraController <NSObject>

@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) struct AnimationRunner *animationRunner;
@property (nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property (nonatomic) double distanceFromCenterCoordinate;
@property (nonatomic) double heading;
@property (readonly, nonatomic) BOOL isFullyPitched;
@property (readonly, nonatomic) BOOL isPitched;
@property (readonly, nonatomic) BOOL isRotated;
@property (readonly, nonatomic) struct MapDataAccess *mapDataAccess;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) double maxPitch;
@property (readonly, nonatomic) double minPitch;
@property (nonatomic) double pitch;
@property (readonly, nonatomic) struct RunLoopController *runLoopController;

- (BOOL)canZoomInForTileSize:(long long)arg1;
- (BOOL)canZoomOutForTileSize:(long long)arg1;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (BOOL)restoreViewportFromInfo:(VKViewportInfo *)arg1;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (VKViewportInfo *)viewportInfo;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
@end

