//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLVirtualResource.h>

@class NSNumber;

@interface PLAdjustmentVirtualResource : PLVirtualResource
{
    struct os_unfair_lock_s _lock;
    NSNumber *_cachedDataLength;
}

@property (copy, nonatomic) NSNumber *cachedDataLength; // @synthesize cachedDataLength=_cachedDataLength;
@property (nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;

- (void).cxx_destruct;
- (id)adjustmentDictionary;
- (long long)dataLength;
- (long long)estimatedDataLength;
- (id)initWithAdjustmentFilePath:(id)arg1 forAsset:(id)arg2;

@end

