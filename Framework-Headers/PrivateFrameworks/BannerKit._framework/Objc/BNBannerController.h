//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BannerKit/BNConsideringDelegate-Protocol.h>
#import <BannerKit/BNPosting-Protocol.h>
#import <BannerKit/BNPostingPrivate-Protocol.h>
#import <BannerKit/BNSuspendable-Protocol.h>

@class BSTimer, NSMapTable, NSString;
@protocol BNConsidering, BNPending, BNPresenting;

@interface BNBannerController : NSObject <BNPostingPrivate, BNConsideringDelegate, BNPosting, BNSuspendable>
{
    NSMapTable *_presentablesInducingSuspensionToSuspendedRequesterIDs;
    id<BNConsidering> _authority;
    id<BNPending> _pender;
    id<BNPresenting> _presenter;
    BSTimer *_autoDequeueTimer;
}

@property (readonly, nonatomic) id<BNConsidering> authority; // @synthesize authority=_authority;
@property (strong, nonatomic, getter=_autoDequeueTimer, setter=_setAutoDequeueTimer:) BSTimer *autoDequeueTimer; // @synthesize autoDequeueTimer=_autoDequeueTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<BNPending> pender; // @synthesize pender=_pender;
@property (readonly, nonatomic) id<BNPresenting> presenter; // @synthesize presenter=_presenter;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (id)_activeSuspensionReasons;
- (void)_cancelAutoDequeueTimer;
- (BOOL)_isSuspended;
- (id)_penderQueue;
- (BOOL)_presentNextPendingPresentableIfPossible;
- (BOOL)_presentNextPendingPresentableIfPossible:(out id *)arg1;
- (BOOL)_presentPresentableWithContext:(id)arg1;
- (void)_resumeForResponsiblePresentableIfNecessary:(id)arg1;
- (void)_resumeForResponsiblePresentableIfNecessaryWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2;
- (BOOL)_revokePresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2 reason:(id)arg3 options:(unsigned long long)arg4 animated:(id)arg5 userInfo:(id)arg6 error:(out id *)arg7;
- (BOOL)_shouldPresentPresentable:(id)arg1 withPresentedPresentables:(id)arg2 responsiblePresentable:(out id *)arg3;
- (void)_startAutoDequeueTimerIfNecessary;
- (void)_suspendPenderForRequesterIdentifier:(id)arg1 withResponsiblePresentable:(id)arg2;
- (id)_suspensionReasonForEnqueuedPresentable:(id)arg1;
- (void)bannerAuthority:(id)arg1 mayChangeDecisionForResponsiblePresentable:(id)arg2;
- (id)initWithAuthority:(id)arg1 pender:(id)arg2 presenter:(id)arg3;
- (BOOL)postPresentable:(id)arg1 withOptions:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id *)arg4;
- (BOOL)revokeAllPresentablesWithRequesterIdentifier:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 error:(out id *)arg5;
- (BOOL)revokePresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2 reason:(id)arg3 options:(unsigned long long)arg4 animated:(BOOL)arg5 userInfo:(id)arg6 error:(out id *)arg7;
- (BOOL)revokePresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2 reason:(id)arg3 options:(unsigned long long)arg4 userInfo:(id)arg5 error:(out id *)arg6;
- (BOOL)setSuspended:(BOOL)arg1 forReason:(id)arg2 revokingCurrent:(BOOL)arg3 error:(out id *)arg4;

@end
