//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKPolylineOverlayRenderRegion : NSObject
{
    set_8caf8a88 _routeLineDatas;
    Box_3d7e3c2c _visibleRect;
    struct MultiRectRegion _snappingRegion;
}

@property (readonly, nonatomic) const set_8caf8a88 *routeLineDatas; // @synthesize routeLineDatas=_routeLineDatas;
@property (readonly, nonatomic) Box_3d7e3c2c visibleRect; // @synthesize visibleRect=_visibleRect;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initForVisibleRect:(const Box_3d7e3c2c *)arg1 snappingRegion:(const struct MultiRectRegion *)arg2 routeLineDatas:(const set_8caf8a88 *)arg3;
- (BOOL)isEquivalentToNewRegion:(id)arg1;
- (const struct MultiRectRegion *)snappingRegion;

@end
