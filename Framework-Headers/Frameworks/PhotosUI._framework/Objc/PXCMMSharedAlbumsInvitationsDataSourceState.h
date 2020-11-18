//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSDictionary, PHFetchResult;

@interface PXCMMSharedAlbumsInvitationsDataSourceState : NSObject <NSCopying>
{
    PHFetchResult *_sharedAlbums;
    NSDictionary *_invitationsBySharedAlbumObjectID;
}

@property (readonly, nonatomic) NSDictionary *invitationsBySharedAlbumObjectID; // @synthesize invitationsBySharedAlbumObjectID=_invitationsBySharedAlbumObjectID;
@property (readonly, nonatomic) PHFetchResult *sharedAlbums; // @synthesize sharedAlbums=_sharedAlbums;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSharedAlbums:(id)arg1 invitationsBySharedAlbumObjectID:(id)arg2;
- (id)stateUpdatedWithChange:(id)arg1 changeDetails:(id *)arg2;

@end

