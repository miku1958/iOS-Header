//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PagesQuicklook/TSKAccessControllerDelegate-Protocol.h>

@class NSURL, SFUCryptoKey, TSKCommandExecutor, TSKDocumentRoot, TSKSharingState, TSUDocumentSerializationToken;
@protocol NSFilePresenter, TSKCollaborationCommandReceiver, TSKCollaborationSessionContext, TSKDocumentInfo, TSULogContext;

@protocol TSKDocumentRootDelegate <TSKAccessControllerDelegate>

@property (readonly, nonatomic) id<NSFilePresenter> cloudFilePresenter;
@property (readonly, nonatomic) id<TSKCollaborationSessionContext> collaborationSessionContext;
@property (readonly, strong) SFUCryptoKey *encryptionKey;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) id<TSULogContext> logContext;
@property (readonly, nonatomic) struct __CFRunLoop *primaryRunLoopForAccessControllerInitialization;
@property (readonly, nonatomic) BOOL shouldInitiallySuspendCollaborationSessionForOfflineCatchUp;
@property (readonly, nonatomic) id<TSKDocumentInfo> tskDocumentInfo;


@optional
- (id<TSKCollaborationCommandReceiver>)commandReceiverWithExecutor:(TSKCommandExecutor *)arg1;
- (void)documentRootDidRollbackBlockedCommands:(TSKDocumentRoot *)arg1;
- (unsigned long long)documentType;
- (TSKSharingState *)sharingState;
- (void)sharingStateRefreshed:(TSKSharingState *)arg1 isUserInitiated:(BOOL)arg2 parentDocumentSerializationToken:(TSUDocumentSerializationToken *)arg3 completionBlock:(void (^)(void))arg4;
@end

