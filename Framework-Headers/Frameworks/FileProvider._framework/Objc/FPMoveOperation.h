//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

#import <FileProvider/FPDaemonActionOperationClient-Protocol.h>

@class FPItem, FPMoveInfo, FPProgressManager, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSURL;
@protocol NSXPCProxyCreating><FPDaemonActionOperation;

@interface FPMoveOperation : FPActionOperation <FPDaemonActionOperationClient>
{
    FPMoveInfo *_info;
    NSArray *__sourceURLs;
    NSArray *__sourceItems;
    NSURL *__destinationURL;
    FPItem *__destinationFolder;
    unsigned long long __lastUsedDatePolicy;
    NSDictionary *__targetFilenamesByURL;
    NSDictionary *__targetFilenamesByItem;
    FPProgressManager *_progressManager;
    BOOL _isScheduledFromThisClient;
    id<NSXPCProxyCreating><FPDaemonActionOperation> _remoteMoveOperation;
    NSMutableSet *_createdOrFailedRoots;
    NSMutableDictionary *_createdItemsByRoot;
    NSMutableDictionary *_placeholderIDsByRoot;
    NSMutableDictionary *_URLByResolvedFPItem;
    NSDictionary *_errorsByItem;
    NSDictionary *_transferResults;
    NSMutableDictionary *_progressByRoot;
    BOOL _shouldBounceOnCollision;
    NSDictionary *_transferLocations;
    NSMutableDictionary *_filenamesByURL;
    CDUnknownBlockType __t_patchActionOperationInfo;
    CDUnknownBlockType __t_remoteOperationWasScheduled;
    CDUnknownBlockType __t_rootCompleted;
}

@property (copy, nonatomic) CDUnknownBlockType _t_patchActionOperationInfo; // @synthesize _t_patchActionOperationInfo=__t_patchActionOperationInfo;
@property (copy, nonatomic) CDUnknownBlockType _t_remoteOperationWasScheduled; // @synthesize _t_remoteOperationWasScheduled=__t_remoteOperationWasScheduled;
@property (copy, nonatomic) CDUnknownBlockType _t_rootCompleted; // @synthesize _t_rootCompleted=__t_rootCompleted;
@property (readonly, nonatomic) BOOL byCopy;
@property (readonly, nonatomic) NSDictionary *errorsByItem; // @synthesize errorsByItem=_errorsByItem;
@property (readonly, nonatomic) NSMutableDictionary *filenamesByURL; // @synthesize filenamesByURL=_filenamesByURL;
@property (nonatomic) unsigned long long lastUsageUpdatePolicy; // @synthesize lastUsageUpdatePolicy=__lastUsedDatePolicy;
@property (copy, nonatomic) NSDictionary *progressByRoot; // @synthesize progressByRoot=_progressByRoot;
@property (nonatomic) BOOL shouldBounceOnCollision; // @synthesize shouldBounceOnCollision=_shouldBounceOnCollision;
@property (copy, nonatomic) NSDictionary *targetFilenamesByItem; // @synthesize targetFilenamesByItem=__targetFilenamesByItem;
@property (copy, nonatomic) NSDictionary *targetFilenamesByURL; // @synthesize targetFilenamesByURL=__targetFilenamesByURL;
@property (readonly, nonatomic) NSDictionary *transferLocations; // @synthesize transferLocations=_transferLocations;
@property (readonly, nonatomic) NSDictionary *transferResults; // @synthesize transferResults=_transferResults;

- (void).cxx_destruct;
- (void)_completedWithResult:(id)arg1 error:(id)arg2;
- (void)_completedWithResultsByRoot:(id)arg1 errorsByRoot:(id)arg2 error:(id)arg3;
- (BOOL)_preflightCheckNotMovingIntoSelfWithError:(id *)arg1;
- (BOOL)_preflightCheckProviderCanMoveWithErrors:(id *)arg1;
- (void)_preflightForceBounceIfCopyingOntoSelf;
- (void)_presendNotifications;
- (void)_recomputeMoveInfoIfNecessary;
- (void)_recoverFromCollisionError:(id)arg1 withPolicy:(unsigned long long)arg2;
- (void)_resolveURLsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_runWithRemoteOperation:(id)arg1;
- (void)_scheduleAgainAfterErrorRecovery;
- (void)_t_unblockReader;
- (void)actionMain;
- (void)cancel;
- (void)checkNonEmptyPackage;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (unsigned long long)defaultLastUsedDatePolicy;
- (id)fp_prettyDescription;
- (id)initWithItems:(id)arg1 destinationFolder:(id)arg2;
- (id)initWithItems:(id)arg1 destinationURL:(id)arg2;
- (id)initWithRemoteOperation:(id)arg1 info:(id)arg2;
- (id)initWithSourceItems:(id)arg1 orSourceURLs:(id)arg2 destinationFolder:(id)arg3 orDestinationURL:(id)arg4 action:(id)arg5;
- (id)initWithSourceURLs:(id)arg1 destinationFolder:(id)arg2;
- (id)initWithSourceURLsAndNames:(id)arg1 destinationFolder:(id)arg2;
- (id)initWithURLs:(id)arg1 destinationFolder:(id)arg2;
- (id)operationDescription;
- (void)presendNotifications;
- (void)remoteOperationCompletedRoot:(id)arg1 resultingItem:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remoteOperationCreatedRoot:(id)arg1 resultingItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remoteOperationFinishedSendingPastUpdates;
- (void)remoteOperationProgressesAreReady;
- (void)subclassPreflightWithCompletion:(CDUnknownBlockType)arg1;

@end

