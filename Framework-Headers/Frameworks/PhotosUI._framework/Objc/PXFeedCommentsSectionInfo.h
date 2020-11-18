//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeedSectionInfo.h>

@interface PXFeedCommentsSectionInfo : PXFeedSectionInfo
{
    BOOL __hasLikes;
}

@property (nonatomic, setter=_setHasLikes:) BOOL _hasLikes; // @synthesize _hasLikes=__hasLikes;

- (id)assetForItemAtIndex:(long long)arg1;
- (id)assets;
- (unsigned long long)assetsCount;
- (id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2;
- (id)cloudFeedCommentsEntry;
- (id)commentForItemAtIndex:(long long)arg1;
- (id)commentTextForItemAtIndex:(long long)arg1;
- (BOOL)containsAsset:(id)arg1;
- (void)getCommentCount:(out unsigned long long *)arg1 likeCount:(out unsigned long long *)arg2;
- (BOOL)hasMultipleAssetsForItemAtIndex:(long long)arg1;
- (long long)indexOfItemWithAsset:(id)arg1;
- (long long)indexOfItemWithComment:(id)arg1;
- (BOOL)isMine;
- (id)likesForItemAtIndex:(long long)arg1;
- (long long)sectionType;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;

@end

