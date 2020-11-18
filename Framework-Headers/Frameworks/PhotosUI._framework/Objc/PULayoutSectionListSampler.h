//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PULayoutSectionSampler.h>

__attribute__((visibility("hidden")))
@interface PULayoutSectionListSampler : PULayoutSectionSampler
{
    long long _numberOfVisibleItems;
    long long _numberOfRealItems;
    long long *_visibleItemIndexes;
    long long _lastSeenSampledIndex;
    long long _lastSeenUnsampledIndex;
    long long _lastSeenTopUnsampledIndex;
}

- (void)dealloc;
- (void)dumpInternalMemory;
- (void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (long long)indexForUnsampledIndex:(long long)arg1 isMainItem:(BOOL *)arg2;
- (id)initWithNumberOfVisibleItems:(long long)arg1 numberOfRealItems:(long long)arg2;
- (long long)unsampledIndexForIndex:(long long)arg1;
- (long long *)visibleItemIndexes;

@end
