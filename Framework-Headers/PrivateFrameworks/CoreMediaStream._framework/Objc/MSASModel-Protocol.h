//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/NSObject-Protocol.h>

@class MSASAlbum, MSASAssetCollection, MSASComment, MSASInvitation, MSASModelEnumerator, MSASSharingRelationship, NSArray, NSDate, NSDictionary, NSError, NSNumber, NSString;
@protocol MSASModelObserver, NSCoding;

@protocol MSASModel <NSObject>

@property (nonatomic) int maxGroupedCallbackEventBatchCount;
@property (nonatomic) double maxGroupedCallbackEventIdleInterval;
@property (nonatomic) double maxGroupedCallbackEventStaleness;
@property (readonly, strong, nonatomic) NSString *personID;

- (void)acceptInvitationWithGUID:(NSString *)arg1;
- (void)acceptInvitationWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)acceptInvitationWithToken:(NSString *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)acceptInvitationWithToken:(NSString *)arg1 info:(NSDictionary *)arg2 completionBlock:(void (^)(NSDictionary *, NSError *))arg3;
- (MSASModelEnumerator *)accessControlGUIDsForAlbumWithGUID:(NSString *)arg1;
- (MSASSharingRelationship *)accessControlWithGUID:(NSString *)arg1;
- (MSASModelEnumerator *)accessControlsForAlbumWithGUID:(NSString *)arg1;
- (void)addAccessControlEntries:(NSArray *)arg1 toAlbumWithGUID:(NSString *)arg2;
- (void)addAccessControlEntries:(NSArray *)arg1 toAlbumWithGUID:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)addAlbum:(MSASAlbum *)arg1;
- (void)addAlbum:(MSASAlbum *)arg1 info:(NSDictionary *)arg2;
- (void)addAssetCollections:(NSArray *)arg1 toAlbumWithGUID:(NSString *)arg2;
- (void)addAssetCollections:(NSArray *)arg1 toAlbumWithGUID:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)addComments:(NSArray *)arg1 toAssetCollectionWithGUID:(NSString *)arg2;
- (void)addComments:(NSArray *)arg1 toAssetCollectionWithGUID:(NSString *)arg2 info:(NSDictionary *)arg3;
- (void)addObserver:(id<MSASModelObserver>)arg1;
- (MSASModelEnumerator *)albumGUIDs;
- (MSASAlbum *)albumWithGUID:(NSString *)arg1;
- (MSASModelEnumerator *)albums;
- (MSASModelEnumerator *)assetCollectionGUIDsInAlbumWithGUID:(NSString *)arg1;
- (MSASAssetCollection *)assetCollectionWithGUID:(NSString *)arg1;
- (MSASModelEnumerator *)assetCollectionsInAlbumWithGUID:(NSString *)arg1;
- (void)cancel;
- (MSASComment *)captionForAssetCollectionWithGUID:(NSString *)arg1;
- (MSASComment *)commentWithGUID:(NSString *)arg1;
- (MSASModelEnumerator *)commentsForAssetCollectionWithGUID:(NSString *)arg1;
- (void)deleteAlbumWithGUID:(NSString *)arg1;
- (void)deleteAlbumWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)deleteAssetCollectionWithGUID:(NSString *)arg1;
- (void)deleteAssetCollectionWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)deleteAssetCollectionsWithGUIDs:(NSArray *)arg1;
- (void)deleteCommentWithGUID:(NSString *)arg1;
- (void)deleteCommentWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (NSString *)earliestUnviewedAssetCollectionGUIDInAlbumWithGUID:(NSString *)arg1;
- (BOOL)errorIsCancellation:(NSError *)arg1;
- (NSString *)focusAssetCollectionGUID;
- (void)forgetEverything;
- (void)forgetEverythingInfo:(NSDictionary *)arg1;
- (void)forgetEverythingInfo:(NSDictionary *)arg1 completionBlock:(void (^)(void))arg2;
- (BOOL)hasCommandsInGroupedCommandQueue;
- (BOOL)hasEnqueuedActivities;
- (MSASInvitation *)invitationForAlbumWithGUID:(NSString *)arg1;
- (MSASModelEnumerator *)invitationGUIDs;
- (MSASInvitation *)invitationWithGUID:(NSString *)arg1;
- (MSASModelEnumerator *)invitations;
- (BOOL)isAlbumWithGUIDMarkedAsUnviewed:(NSString *)arg1;
- (BOOL)isAssetCollectionWithGUIDMarkedAsUnviewed:(NSString *)arg1;
- (NSNumber *)isPublicAccessEnabledForAlbumWithGUID:(NSString *)arg1;
- (NSDate *)lastViewedCommentDateForAssetCollectionWithGUID:(NSString *)arg1;
- (void)markAlbumGUIDAsViewed:(NSString *)arg1;
- (void)markAlbumGUIDAsViewed:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)markAlbumGUIDAsViewed:(NSString *)arg1 moveLastViewedAssetCollectionMarker:(BOOL)arg2 info:(NSDictionary *)arg3;
- (void)markAsSpamAlbumWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)markAsSpamInvitationWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)markAsSpamInvitationWithToken:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)markCommentsForAssetCollectionWithGUID:(NSString *)arg1 asViewedWithLastViewedDate:(NSDate *)arg2;
- (void)markCommentsForAssetCollectionWithGUID:(NSString *)arg1 asViewedWithLastViewedDate:(NSDate *)arg2 info:(NSDictionary *)arg3;
- (void)modifyAlbumMetadata:(MSASAlbum *)arg1;
- (void)modifyAlbumMetadata:(MSASAlbum *)arg1 info:(NSDictionary *)arg2;
- (void)refreshAccessControlListForAlbumWithGUID:(NSString *)arg1;
- (void)refreshAccessControlListForAlbumWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)refreshCommentsForAssetCollectionWithGUID:(NSString *)arg1 resetSync:(BOOL)arg2;
- (void)refreshCommentsForAssetCollectionWithGUID:(NSString *)arg1 resetSync:(BOOL)arg2 info:(NSDictionary *)arg3;
- (void)refreshContentOfAlbumWithGUID:(NSString *)arg1 resetSync:(BOOL)arg2;
- (void)refreshContentOfAlbumWithGUID:(NSString *)arg1 resetSync:(BOOL)arg2 info:(NSDictionary *)arg3;
- (void)refreshResetSync:(BOOL)arg1;
- (void)refreshResetSync:(BOOL)arg1 info:(NSDictionary *)arg2;
- (void)rejectInvitationWithGUID:(NSString *)arg1;
- (void)rejectInvitationWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)removeAccessControlEntryWithGUID:(NSString *)arg1;
- (void)removeAccessControlEntryWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)removeObserver:(id<MSASModelObserver>)arg1;
- (void)retrieveAssets:(NSArray *)arg1 inAlbumWithGUID:(NSString *)arg2;
- (void)retrieveAssetsFromAssetCollectionsWithGUIDs:(NSArray *)arg1 assetTypeFlags:(int)arg2;
- (NSDate *)serverCommunicationBackoffDate;
- (NSDictionary *)serverSideConfiguration;
- (void)setFocusAlbumGUID:(NSString *)arg1;
- (void)setFocusAssetCollectionGUID:(NSString *)arg1;
- (void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbumWithGUID:(NSString *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbumWithGUID:(NSString *)arg2 info:(NSDictionary *)arg3 completionBlock:(void (^)(NSDictionary *, NSError *))arg4;
- (void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(NSString *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)setPublicAccessEnabled:(BOOL)arg1 forAlbumWithGUID:(NSString *)arg2 info:(NSDictionary *)arg3 completionBlock:(void (^)(NSDictionary *, NSError *))arg4;
- (void)setUserInfo:(id<NSCoding>)arg1 forAccessControlWithGUID:(NSString *)arg2;
- (void)setUserInfo:(id<NSCoding>)arg1 forAlbumWithGUID:(NSString *)arg2;
- (void)setUserInfo:(id<NSCoding>)arg1 forAssetCollectionWithGUID:(NSString *)arg2;
- (void)setUserInfo:(id<NSCoding>)arg1 forCommentWithGUID:(NSString *)arg2;
- (void)setUserInfo:(id<NSCoding>)arg1 forInvitationWithGUID:(NSString *)arg2;
- (void)shutDown;
- (void)shutDownForDestruction:(BOOL)arg1 completionBlock:(void (^)(void))arg2;
- (void)start;
- (void)subscribeToAlbumWithGUID:(NSString *)arg1;
- (void)subscribeToAlbumWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)unsubscribeFromAlbumWithGUID:(NSString *)arg1;
- (void)unsubscribeFromAlbumWithGUID:(NSString *)arg1 info:(NSDictionary *)arg2;
- (int)unviewedAlbumCount;
- (int)unviewedAssetCollectionCountForAlbumWithGUID:(NSString *)arg1;
- (id)userInfoForAccessControlWithGUID:(NSString *)arg1;
- (id)userInfoForAlbumWithGUID:(NSString *)arg1;
- (id)userInfoForAssetCollectionWithGUID:(NSString *)arg1;
- (id)userInfoForCommentWithGUID:(NSString *)arg1;
- (id)userInfoForInvitationWithGUID:(NSString *)arg1;
- (void)videoURLForAssetCollectionWithGUID:(NSString *)arg1 completionBlock:(void (^)(NSError *, NSURL *, NSDate *))arg2;
- (void)videoURLsForAssetCollectionWithGUID:(NSString *)arg1 forMediaAssetType:(unsigned long long)arg2 completionBlock:(void (^)(NSError *, NSArray *, NSDate *))arg3;
@end

