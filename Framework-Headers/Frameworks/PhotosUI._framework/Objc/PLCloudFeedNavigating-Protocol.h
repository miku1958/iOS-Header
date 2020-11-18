//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PLCloudSharedAlbum, PLCloudSharedComment, PLManagedAsset;

@protocol PLCloudFeedNavigating <NSObject>
- (BOOL)cloudFeedAssetIsAvailableForNavigation:(PLManagedAsset *)arg1;
- (BOOL)cloudFeedCommentIsAvailableForNavigation:(PLCloudSharedComment *)arg1;
- (BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(PLCloudSharedAlbum *)arg1;
@end
