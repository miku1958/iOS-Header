//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/NSCopying-Protocol.h>

@class AVAssetTrackGroupInternal, NSArray;

@interface AVAssetTrackGroup : NSObject <NSCopying>
{
    AVAssetTrackGroupInternal *_assetTrackGroup;
}

@property (readonly, nonatomic) NSArray *trackIDs;

- (id)_assetComparisonToken;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAsset:(id)arg1 trackIDs:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

