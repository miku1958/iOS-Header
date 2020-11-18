//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VKPolylineOverlayRenderRegion : NSObject
{
    NSSet *_tiles;
    CDStruct_aca18c62 _visibleRect;
    vector_6c1b99c0 _rectsForSnapping;
    struct vector<VKTileKey, std::__1::allocator<VKTileKey>> _snappedTileKeys;
}

@property (readonly, nonatomic) NSSet *tiles; // @synthesize tiles=_tiles;
@property (readonly, nonatomic) CDStruct_d2b197d1 visibleRect; // @synthesize visibleRect=_visibleRect;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initForKeysInView:(id)arg1 tiles:(id)arg2 allowsSnapping:(BOOL)arg3;
- (BOOL)isEquivalentToNewRegion:(id)arg1;
- (const vector_6c1b99c0 *)rectsForSnapping;

@end

