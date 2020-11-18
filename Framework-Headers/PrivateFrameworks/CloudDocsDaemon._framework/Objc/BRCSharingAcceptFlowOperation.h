//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCForegroundClient-Protocol.h>
#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>
#import <CloudDocsDaemon/LSOpenResourceOperationDelegate-Protocol.h>

@class BRCAccountSession, BRCAppLibrary, BRCClientZone, BRCItemID, BRCXPCClient, CKRecordID, CKShare, CKShareMetadata, NSArray, NSObject, NSString, NSURL;
@protocol BRCUserNotifier, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCSharingAcceptFlowOperation : _BRCOperation <LSOpenResourceOperationDelegate, BRCForegroundClient, BRCOperationSubclass>
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
    BRCClientZone *_clientZone;
    BRCAppLibrary *_appLibrary;
    BOOL _needsZoneAndAppLibraryActivation;
    NSURL *_shareDocumentURL;
    NSString *_documentName;
    BRCXPCClient *_xpcClient;
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
- (void)_activateSharedZoneIfNeeded;
- (void)_captureOpenInfoFromDocument:(id)arg1;
- (void)_checkIfShouldWaitUntilDownloadCompletion;
- (void)_createSideFaultOnDisk;
- (void)_endAcceptationFlow;
- (void)_isAccountRestricted;
- (void)_isAppInstalled;
- (BOOL)_isFolderShare;
- (void)_isFolderSharingSupported;
- (BOOL)_isOwner;
- (BOOL)_isOwnerOrShareAlreadyAccepted;
- (void)_isURLWellFormed;
- (void)_isUserSignedInToiCloudDrive;
- (BOOL)_isiWorkShare;
- (void)_jumpToSelector:(SEL)arg1;
- (void)_jumpToSelectorInQueue:(SEL)arg1;
- (void)_locateSharedItemOnDisk;
- (void)_openDocumentInDocumentsAppIfInstalled:(id)arg1;
- (void)_openSharedItemIfStillNeeded;
- (void)_openSharedSideFaultFile;
- (void)_openiWorkAppPreemptively;
- (void)_parseShareMetadata;
- (void)_performNextStep;
- (void)_performNextStepInQueue;
- (void)_prepareToDownloadSharedDocument;
- (void)_showGenericErrorAndFinish:(id)arg1;
- (void)_showSharingJoinDialog;
- (id)_stepNameAtIndex:(unsigned long long)arg1 withPrefix:(id)arg2;
- (void)_waitForSharedItemToBeOnDiskOnOwner;
- (void)_waitForSharedItemToBeOnDiskOnRecipient;
- (void)_waitForSharedItemToSyncDownOnOwner;
- (void)_waitForSharedItemToSyncDownOnRecipient;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShareMetadata:(id)arg1 client:(id)arg2 session:(id)arg3;
- (void)main;
- (void)moveDialogToFront;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperationDidComplete:(id)arg1;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)subclassableDescriptionWithContext:(id)arg1;

@end

