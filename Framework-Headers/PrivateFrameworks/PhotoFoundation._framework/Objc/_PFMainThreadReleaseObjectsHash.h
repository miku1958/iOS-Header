//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFWeakContainer.h>

@interface _PFMainThreadReleaseObjectsHash : PFWeakContainer
{
    id _objects[7];
    Class _objectsClasses[7];
    unsigned long long _releaseCounts[7];
    unsigned long long _objectCount;
    unsigned long long _lowIndex;
    unsigned long long _highIndex;
}

+ (void)addDeferredReleaseObject:(id)arg1;
- (void)addDeferredReleaseObject:(id)arg1;
- (BOOL)isFull;
- (void)processMainThreadReleases;
- (void)weakReferenceBecameNil;

@end

