//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetUserActivityProperties : PHAssetPropertySet
{
    long long _syncedPlayCount;
    long long _syncedShareCount;
    long long _syncedViewCount;
    long long _pendingPlayCount;
    long long _pendingShareCount;
    long long _pendingViewCount;
}

@property (nonatomic) long long pendingPlayCount; // @synthesize pendingPlayCount=_pendingPlayCount;
@property (nonatomic) long long pendingShareCount; // @synthesize pendingShareCount=_pendingShareCount;
@property (nonatomic) long long pendingViewCount; // @synthesize pendingViewCount=_pendingViewCount;
@property (readonly, nonatomic) long long playCount;
@property (readonly, nonatomic) long long shareCount;
@property (nonatomic) long long syncedPlayCount; // @synthesize syncedPlayCount=_syncedPlayCount;
@property (nonatomic) long long syncedShareCount; // @synthesize syncedShareCount=_syncedShareCount;
@property (nonatomic) long long syncedViewCount; // @synthesize syncedViewCount=_syncedViewCount;
@property (readonly, nonatomic) long long viewCount;

+ (id)propertiesToFetch;
+ (id)propertySetName;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

@end
