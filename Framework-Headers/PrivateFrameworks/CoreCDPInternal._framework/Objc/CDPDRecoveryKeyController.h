//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDRecoveryKeyValidatorInternalDelegate-Protocol.h>

@class CDPContext, CDPDPCSController, CDPDSecureBackupController, NSString;
@protocol CDPAuthProviderInternal, CDPDAuthProviderInternal, CDPDCircleProxy, CDPDOctagonTrustProxy, CDPDSecureBackupProxy, CDPStateUIProviderInternal;

@interface CDPDRecoveryKeyController : NSObject <CDPDRecoveryKeyValidatorInternalDelegate>
{
    CDPContext *_context;
    CDPDPCSController *_pcsController;
    CDPDSecureBackupController *_secureBackupController;
    id<CDPStateUIProviderInternal> _uiProvider;
    id<CDPDCircleProxy> _circleProxy;
    id<CDPDSecureBackupProxy> _sbProxy;
    id<CDPDOctagonTrustProxy> _otProxy;
    id<CDPAuthProviderInternal> _recoveryAuthProvider;
    id<CDPDAuthProviderInternal> _internalAuthProvider;
}

@property (strong, nonatomic) id<CDPDCircleProxy> circleProxy; // @synthesize circleProxy=_circleProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<CDPDAuthProviderInternal> internalAuthProvider; // @synthesize internalAuthProvider=_internalAuthProvider;
@property (strong, nonatomic) id<CDPDOctagonTrustProxy> otProxy; // @synthesize otProxy=_otProxy;
@property (strong, nonatomic) id<CDPAuthProviderInternal> recoveryAuthProvider; // @synthesize recoveryAuthProvider=_recoveryAuthProvider;
@property (strong, nonatomic) id<CDPDSecureBackupProxy> sbProxy; // @synthesize sbProxy=_sbProxy;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<CDPStateUIProviderInternal> uiProvider; // @synthesize uiProvider=_uiProvider;

- (void).cxx_destruct;
- (void)dealloc;
- (void)deleteRecoveryKey:(CDUnknownBlockType)arg1;
- (void)enableBackupWithRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateNewRecoveryKey:(CDUnknownBlockType)arg1;
- (void)generateRandomRecoveryKey:(CDUnknownBlockType)arg1;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id *)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 circleProxy:(id)arg4 secureBackupProxy:(id)arg5 octagonTrustProxy:(id)arg6 pcsProxy:(id)arg7;
- (void)recoverAndSynchronizeStateWithServer:(CDUnknownBlockType)arg1;
- (void)recoverDataUsingMasterKeyWithCompletion:(CDUnknownBlockType)arg1;
- (void)recoverState:(CDUnknownBlockType)arg1;

@end
