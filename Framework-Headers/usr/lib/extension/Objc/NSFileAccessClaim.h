//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <extension/NSSecureCoding-Protocol.h>

@class NSError, NSFileAccessProcessManager, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSFileAccessClaim : NSObject <NSSecureCoding>
{
    NSXPCConnection *_client;
    NSString *_claimID;
    NSString *_purposeIDOrNil;
    BOOL _cameFromSuperarbiter;
    unsigned long long _blockageCount;
    BOOL _didWait;
    BOOL _isRevoked;
    NSMutableArray *_claimerBlockageReasons;
    NSError *_claimerError;
    NSMutableOrderedSet *_pendingClaims;
    NSMutableSet *_blockingClaims;
    NSMutableSet *_blockingReactorIDs;
    NSMutableArray *_providerCancellationProcedures;
    NSMutableDictionary *_reacquisitionProceduresByPresenterID;
    NSMutableArray *_revocationProcedures;
    NSMutableArray *_devaluationProcedures;
    NSMutableArray *_finishingProcedures;
    NSFileAccessProcessManager *_processManager;
    NSObject<OS_dispatch_semaphore> *_claimerWaiter;
    BOOL _hasInvokedClaimer;
    id _claimerOrNil;
    CDUnknownBlockType _serverClaimerOrNil;
    NSMutableArray *_sandboxTokens;
    NSObject<OS_dispatch_queue> *_arbiterQueue;
}

@property (readonly) NSObject<OS_dispatch_semaphore> *claimerWaiter; // @synthesize claimerWaiter=_claimerWaiter;

+ (BOOL)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4;
+ (BOOL)canWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4;
+ (BOOL)supportsSecureCoding;
- (void)_setupWithClaimID:(id)arg1 purposeID:(id)arg2;
- (BOOL)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (void)acceptClaimFromClient:(id)arg1 arbiterQueue:(id)arg2 grantHandler:(CDUnknownBlockType)arg3;
- (void)addPendingClaim:(id)arg1;
- (id)allURLs;
- (void)block;
- (void)blockClaimerForReason:(id)arg1;
- (BOOL)cameFromSuperarbiter;
- (BOOL)canAccessLocations:(id)arg1 forReading:(BOOL)arg2 error:(id *)arg3;
- (void)cancelled;
- (BOOL)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long *)arg2 andIfSoThenReevaluateSelf:(CDUnknownBlockType)arg3;
- (id)claimID;
- (id)claimerError;
- (BOOL)claimerInvokingIsBlockedByReactorWithID:(id)arg1;
- (id)client;
- (int)clientProcessIdentifier;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)devalueOldClaim:(id)arg1;
- (void)devalueSelf;
- (BOOL)didWait;
- (void)disavowed;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluateNewClaim:(id)arg1;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (void)finished;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (void)granted;
- (id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)invokeClaimer;
- (BOOL)isBlockedByClaimWithPurposeID:(id)arg1;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)isGranted;
- (BOOL)isRevoked;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(BOOL)arg2 relinquishUsingProcedureGetter:(CDUnknownBlockType)arg3;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideIfNecessaryWithOptions:(unsigned long long)arg2 thenContinue:(CDUnknownBlockType)arg3;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 readingOptions:(unsigned long long)arg3 thenContinue:(CDUnknownBlockType)arg4;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 writingOptions:(unsigned long long)arg3 thenContinue:(CDUnknownBlockType)arg4;
- (void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(CDUnknownBlockType)arg2;
- (id)pendingClaims;
- (void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (id)purposeID;
- (id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2;
- (void)removePendingClaims:(id)arg1;
- (void)revoked;
- (void)scheduleBlockedClaim:(id)arg1;
- (void)setCameFromSuperarbiter;
- (void)setClaimerError:(id)arg1;
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (BOOL)shouldCancelInsteadOfWaiting;
- (BOOL)shouldReadingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2;
- (void)startObservingClientState;
- (void)unblock;
- (void)unblockClaimerForReason:(id)arg1;
- (void)whenDevaluedPerformProcedure:(CDUnknownBlockType)arg1;
- (void)whenFinishedPerformProcedure:(CDUnknownBlockType)arg1;
- (void)whenRevokedPerformProcedure:(CDUnknownBlockType)arg1;

@end

