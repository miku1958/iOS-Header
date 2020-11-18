//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, NSString, PLPhotoLibrary;

@interface PLNotificationsTestDaemonJob : PLDaemonJob
{
    long long _notificationType;
    NSString *_albumUUID;
    NSArray *_addedAssetUUIDs;
    PLPhotoLibrary *_photoLibrary;
}

@property (strong, nonatomic) NSArray *addedAssetUUIDs; // @synthesize addedAssetUUIDs=_addedAssetUUIDs;
@property (strong, nonatomic) NSString *albumUUID; // @synthesize albumUUID=_albumUUID;
@property long long notificationType; // @synthesize notificationType=_notificationType;
@property (strong, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;

+ (void)notifyAssets:(id)arg1 wereAddedToAlbum:(id)arg2;
+ (void)notifyCommentWasReceivedForAssets:(id)arg1;
+ (void)notifyInvitationWasReceivedForAlbum:(id)arg1;
+ (void)notifyLikeWasReceivedForAssets:(id)arg1;
- (long long)daemonOperation;
- (void)dealloc;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)run;
- (void)runDaemonSide;

@end

