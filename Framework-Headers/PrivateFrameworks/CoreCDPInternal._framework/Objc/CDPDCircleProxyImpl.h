//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDCircleProxy-Protocol.h>

@class CDPContext, NSString;

@interface CDPDCircleProxyImpl : NSObject <CDPDCircleProxy>
{
    CDPContext *_cdpContext;
}

@property (strong, nonatomic) CDPContext *cdpContext; // @synthesize cdpContext=_cdpContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)canAuthenticate;
+ (BOOL)registerCredentialsFromContext:(id)arg1;
+ (BOOL)registerCredentialsFromContext:(id)arg1 force:(BOOL)arg2;
+ (BOOL)tryRegisteringCredentialsFromContext:(id)arg1;
- (void).cxx_destruct;
- (int)_authenticatedCircleStatus:(id *)arg1;
- (int)_circleStatus:(id *)arg1;
- (BOOL)_performSOSCBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)_viewMemberForView:(struct __CFString *)arg1 error:(id *)arg2;
- (BOOL)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id *)arg2;
- (int)circleStatus:(id *)arg1;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id *)arg2;
- (id)generateVerifierWithRcoveryKey:(id)arg1 error:(id *)arg2;
- (BOOL)hasNonViewAwarePeers;
- (id)initWithContext:(id)arg1;
- (BOOL)isLastBackupMakingPeer:(id *)arg1;
- (unsigned long long)peerCount;
- (id)peerDeviceNamesByPeerID;
- (id)peerId;
- (BOOL)removeNonViewAwarePeers:(id *)arg1;
- (BOOL)removeThisDeviceFromCircle:(id *)arg1;
- (BOOL)requestToJoinCircle:(id *)arg1;
- (BOOL)requestToJoinCircleAfterRestore:(id *)arg1;
- (BOOL)requestToResetCircle:(id *)arg1;
- (BOOL)requestToResetCloudKitData:(id *)arg1;
- (BOOL)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2;
- (BOOL)synchronizeCircleViews;
- (BOOL)viewMemberForAutofillPasswords:(id *)arg1;
- (BOOL)viewMemberForPCSMaster:(id *)arg1;

@end
