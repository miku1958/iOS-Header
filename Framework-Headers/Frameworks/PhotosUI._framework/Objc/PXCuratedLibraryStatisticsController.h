//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXCuratedLibraryStatisticsController : NSObject
{
    struct _PXLayoutGeometry *_resuableLayoutGeometries;
    long long _reusableLayoutGeometriesCapacity;
}

+ (id)defaultController;
- (void)_enumerateDaysSectionsForViewModel:(id)arg1 extendedTraitCollection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct _PXLayoutGeometry *)_layoutGeometryBufferWithCount:(long long)arg1;
- (void)collectStatisticsForViewModel:(id)arg1 extendedTraitCollection:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

