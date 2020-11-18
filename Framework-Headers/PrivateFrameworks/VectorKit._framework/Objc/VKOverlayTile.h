//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKTile.h>

@class NSArray, NSMapTable, NSMutableArray, VKVectorTile;

__attribute__((visibility("hidden")))
@interface VKOverlayTile : VKTile
{
    NSMutableArray *_overlays;
    VKVectorTile *_roadTile;
    NSMapTable *_tileForOverlay;
    float _maximumStyleZ;
}

@property (readonly, nonatomic) float maximumStyleZ; // @synthesize maximumStyleZ=_maximumStyleZ;
@property (readonly, nonatomic) NSArray *overlays; // @synthesize overlays=_overlays;
@property (strong, nonatomic) VKVectorTile *roadTile; // @synthesize roadTile=_roadTile;

- (void)addOverlay:(id)arg1;
- (void)dealloc;
- (void)setTile:(id)arg1 forOverlay:(id)arg2;
- (id)tileForOverlay:(id)arg1;
- (void)updateViewDependentStateWithContext:(struct LayoutContext *)arg1;

@end

