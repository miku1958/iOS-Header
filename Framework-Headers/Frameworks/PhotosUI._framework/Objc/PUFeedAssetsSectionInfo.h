//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUFeedSectionInfo.h>

__attribute__((visibility("hidden")))
@interface PUFeedAssetsSectionInfo : PUFeedSectionInfo
{
}

- (BOOL)areAllAssetsLiked;
- (id)assetForItemAtIndex:(long long)arg1;
- (id)assets;
- (unsigned long long)assetsCount;
- (id)batchIDForItemAtIndex:(long long)arg1;
- (id)captionForItemAtIndex:(long long)arg1;
- (id)cloudFeedAssetsEntry;
- (BOOL)containsAsset:(id)arg1;
- (void)getPhotoCount:(out unsigned long long *)arg1 videoCount:(out unsigned long long *)arg2;
- (BOOL)hasPlayableAssetForItemAtIndex:(long long)arg1;
- (long long)indexOfItemWithAsset:(id)arg1;
- (long long)sectionType;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;

@end

