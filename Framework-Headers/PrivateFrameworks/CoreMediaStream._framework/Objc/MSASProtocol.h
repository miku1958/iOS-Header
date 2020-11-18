//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSURLConnectionDelegate-Protocol.h>

@class MSASPConnectionGate, NSString, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MSASProtocol : NSObject <NSURLConnectionDelegate>
{
    BOOL _isShuttingDown;
    MSASPConnectionGate *_gate;
    NSObject<OS_dispatch_queue> *_pendingConnectionsQueue;
    NSObject<OS_dispatch_group> *_pendingConnectionsGroup;
    NSString *_personID;
    NSURL *_baseURL;
    NSString *_serverSideConfigVersion;
    NSString *_headerVersion;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
}

@property (strong, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) MSASPConnectionGate *gate; // @synthesize gate=_gate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *headerVersion; // @synthesize headerVersion=_headerVersion;
@property (nonatomic) BOOL isShuttingDown; // @synthesize isShuttingDown=_isShuttingDown;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *pendingConnectionsGroup; // @synthesize pendingConnectionsGroup=_pendingConnectionsGroup;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *pendingConnectionsQueue; // @synthesize pendingConnectionsQueue=_pendingConnectionsQueue;
@property (readonly, strong, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property (strong, nonatomic) NSString *serverSideConfigVersion; // @synthesize serverSideConfigVersion=_serverSideConfigVersion;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (id)HTTPErrorWithStatusCode:(long long)arg1;
- (id)_addCommentURLWithBaseURL:(id)arg1;
- (id)_albumStateURL;
- (id)_albumSummaryURLWithBaseURL:(id)arg1;
- (id)_couldNotReauthorizeError;
- (id)_createAlbumURL;
- (id)_deleteAssetsURLWithBaseURL:(id)arg1;
- (id)_deleteCommentURLWithBaseURL:(id)arg1;
- (id)_deleteURLWithBaseURL:(id)arg1;
- (id)_enableMultipleContributorsURLWithBaseURL:(id)arg1;
- (id)_enablePublicAccessURLWithBaseURL:(id)arg1;
- (id)_getAlbumURL;
- (id)_getAssetsURLWithBaseURL:(id)arg1;
- (id)_getChangesURL;
- (id)_getCommentsURLWithBaseURL:(id)arg1;
- (id)_getTokensURLWithBaseURL:(id)arg1;
- (id)_getUploadTokensURLWithBaseURL:(id)arg1;
- (id)_getVideoURLWithBaseURL:(id)arg1;
- (id)_putAssetsURLWithBaseURL:(id)arg1;
- (id)_serverSideConfigURL;
- (id)_setAlbumStateURL;
- (id)_setAssetStateURL;
- (id)_setCommentPositionURL;
- (id)_shareURL;
- (id)_sharingInfoURLWithBaseURL:(id)arg1;
- (id)_subscribeURL;
- (id)_unshareURL;
- (id)_unsubscribeURL;
- (id)_updateAlbumURLWithBaseURL:(id)arg1;
- (id)_uploadCompleteURLWithBaseURL:(id)arg1;
- (void)acceptInvitationWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addComment:(id)arg1 toAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)addSharingRelationships:(id)arg1 toAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)albumSummaryAlbum:(id)arg1 albumURLString:(id)arg2 resetSync:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)createAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)deleteAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)deleteAssetCollections:(id)arg1 inAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)deleteComment:(id)arg1 fromAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)errorFromStandardProcessingOnResponse:(id)arg1 responseObject:(id)arg2 checkServerSideConfigVersion:(BOOL)arg3 error:(id)arg4 body:(id)arg5;
- (void)getAlbumSyncedStateForAlbum:(id)arg1 assetCollectionStateBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getAlbumURLForAlbumWithGUID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getAssetCollections:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getChangesRootCtag:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getCommentChanges:(id)arg1 inAlbumWithGUID:(id)arg2 albumURLString:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getServerSideConfigCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getSharingInfoForAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getTokensForAssets:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getUploadTokens:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)getVideoURL:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)initWithPersonID:(id)arg1;
- (void)putAssetCollections:(id)arg1 intoAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeSharingRelationships:(id)arg1 fromAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)responseDict:(id)arg1 containsLimitErrorCode:(id)arg2 outMaxAllowed:(id *)arg3;
- (void)sendURLRequest:(id)arg1 bodyObj:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sendURLRequest:(id)arg1 method:(id)arg2 bodyObj:(id)arg3 checkServerSideConfigVersion:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)sendUploadCompleteSuccessfulAssetCollections:(id)arg1 failedAssetCollections:(id)arg2 album:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setAlbumSyncedState:(id)arg1 forAlbum:(id)arg2 albumStateCtag:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setAssetCollectionSyncedState:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 assetCollectionStateCtag:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setPublicAccessEnabled:(BOOL)arg1 forAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (id)shutDownError;
- (void)stopCompletionBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)stopHandlerBlock;
- (id)stoppingError;
- (void)subscribeToAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)unsubscribeFromAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

