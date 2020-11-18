//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUConcurrentMutableDictionaryCache.h>

__attribute__((visibility("hidden")))
@interface TSTLayoutSpaceBezierPathCache : TSUConcurrentMutableDictionaryCache
{
}

- (id)bezierPathForGridRange:(CDStruct_58eae27c)arg1 transform:(struct CGAffineTransform *)arg2 inset:(double)arg3 reoriginToZero:(BOOL)arg4;
- (void)insertBezierPath:(id)arg1 gridRange:(CDStruct_58eae27c)arg2 transform:(struct CGAffineTransform *)arg3 inset:(double)arg4 reoriginToZero:(BOOL)arg5;

@end
