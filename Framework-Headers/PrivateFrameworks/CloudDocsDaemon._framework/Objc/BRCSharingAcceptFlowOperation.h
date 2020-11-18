//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCForegroundClient-Protocol.h>
#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCAcceptShareOperation, BRCAccountSession, BRCAppLibrary, BRCItemID, BRCPrivateAppLibrary, BRCXPCClient, CKRecordID, CKShare, CKShareMetadata, NSArray, NSObject, NSString, NSURL;
@protocol BRCUserNotifier, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCSharingAcceptFlowOperation : _BRCOperation <BRCForegroundClient, BRCOperationSubclass>
{
    id<BRCUserNotifier> _userNotification;
    BRCAccountSession *_session;
    NSArray *_acceptationFlow;
    unsigned long long _stepIndex;
    NSURL *_shareURL;
    CKRecordID *_shareID;
    CKShareMetadata *_shareMetadata;
    CKShare *_share;
    BRCItemID *_sharedItemID;
    NSString *_unsaltedBookmarkData;
    BRCAppLibrary *_localAppLibrary;
    BRCPrivateAppLibrary *_aliasAppLibrary;
    NSURL *_shareDocumentURL;
    NSURL *_aliasURL;
    NSString *_documentName;
    NSString *_shareDocumentFileProviderString;
    BRCXPCClient *_xpcClient;
    BRCAcceptShareOperation *_acceptShareOpBlockingSyncDown;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;

+ (void)_openAppStoreForShareURL:(id)arg1;
+ (void)_openShareURLInWebBrowser:(id)arg1 withReason:(id)arg2;
+ (void)_openiCloudSettings;
+ (id)_runningShareIDs;
+ (Class)userNotificationClass;
- (void).cxx_destruct;
- (void)_acceptShareURL;
- (void)_captureOpenInfoFromDocument:(id)arg1;
- (void)_checkIfShouldWaitUntilDownloadCompletion;
- (id)_createAcceptShareOperation;
- (void)_createAliasInAppLibrary:(id)arg1 target:(id)arg2;
- (void)_createSideFaultOnDisk;
- (void)_endAcceptationFlow;
- (void)_fetchShareMetadata;
- (void)_isAccountRestricted;
- (void)_isAppInstalled;
- (void)_isDocumentSharingSupported;
- (BOOL)_isOwner;
- (BOOL)_isOwnerOrShareAlreadyAccepted;
- (void)_isURLWellFormed;
- (void)_isUserSignedInToiCloudDrive;
- (BOOL)_isiWorkShare;
- (void)_jumpToSelector:(SEL)arg1;
- (void)_jumpToSelectorInQueue:(SEL)arg1;
- (void)_openSharedDownloadedDocumentIfStillNeeded;
- (void)_openSharedSideFaultFile;
- (BOOL)_openiWorkAppPreemptively;
- (void)_parseShareMetadata;
- (void)_performNextStep;
- (void)_performNextStepInQueue;
- (void)_prepareToDownloadSharedDocument;
- (void)_showGenericErrorAndFinish:(id)arg1;
- (void)_showSharingJoinDialog;
- (id)_stepNameAtIndex:(unsigned long long)arg1 withPrefix:(id)arg2;
- (void)_waitForFaultToBeOnDiskOnOwner;
- (void)_waitForFaultToBeOnDiskOnRecipient;
- (void)_waitForSharedItemToSyncDownOnOwner;
- (void)_waitForSharedItemToSyncDownOnRecipient;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShareMetadata:(id)arg1 client:(id)arg2 session:(id)arg3;
- (id)initWithShareURL:(id)arg1 client:(id)arg2 session:(id)arg3;
- (id)localClientZone;
- (void)main;
- (void)moveDialogToFront;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)subclassableDescriptionWithContext:(id)arg1;

@end

