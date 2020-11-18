//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MDLVolumeGrid : NSObject
{
    struct unique_ptr<ModelIO::SCNOctree, std::__1::default_delete<ModelIO::SCNOctree>> _octree;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2;
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorWidth:(float)arg3 exteriorWidth:(float)arg4 patchRadius:(float)arg5;
- (id)initWithObject:(id)arg1 divisions:(int)arg2;
- (id)meshWithStyle:(unsigned long long)arg1;
- (unsigned long long *)trianglesIntersectingRayWithOrigin:(unsigned long long *)arg1 direction:count: /* Error: Ran out of types for this method. */;

@end

