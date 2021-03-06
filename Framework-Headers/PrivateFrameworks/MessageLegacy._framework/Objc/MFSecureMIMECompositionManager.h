//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFError, MailAccount, NSLock, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol MFSecureMIMECompositionManagerDelegate, OS_dispatch_queue;

@interface MFSecureMIMECompositionManager : NSObject
{
    id<MFSecureMIMECompositionManagerDelegate> _delegate;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    MailAccount *_sendingAccount;
    NSString *_sendingAddress;
    struct __SecIdentity *_signingIdentity;
    MFError *_signingIdentityError;
    struct __SecIdentity *_encryptionIdentity;
    MFError *_encryptionIdentityError;
    NSMutableSet *_recipients;
    NSMutableDictionary *_errorsByRecipient;
    NSMutableDictionary *_certificatesByRecipient;
    int _signingPolicy;
    int _encryptionPolicy;
    int _signingStatus;
    int _encryptionStatus;
    unsigned long long _encryptionStatusSemaphore;
    unsigned long long _signingStatusSemaphore;
    BOOL _invalidated;
}

@property id<MFSecureMIMECompositionManagerDelegate> delegate;
@property (readonly) int encryptionPolicy;
@property (readonly) int encryptionStatus;
@property (readonly) NSSet *recipients;
@property (readonly) MailAccount *sendingAccount;
@property (copy) NSString *sendingAddress;
@property (readonly) int signingPolicy;
@property (readonly) int signingStatus;

+ (id)copyEncryptionCertificatesForAccount:(id)arg1 recipientAddress:(id)arg2 error:(id *)arg3;
+ (struct __SecIdentity *)copyEncryptionIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id *)arg3;
+ (struct __SecIdentity *)copySigningIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id *)arg3;
+ (BOOL)isRevokedCertificate:(struct __SecCertificate *)arg1 sendingAddress:(id)arg2;
- (void)_determineEncryptionStatusWithNewRecipients:(id)arg1;
- (void)_determineEncryptionStatusWithSendingAddress:(id)arg1;
- (void)_determineIdentitiesWithSendingAddress:(id)arg1 forSigning:(BOOL)arg2 encryption:(BOOL)arg3;
- (void)_determineRevocationStatusWithIdentity:(struct __SecIdentity *)arg1 sendingAddress:(id)arg2;
- (void)_determineSigningStatusWithSendingAddress:(id)arg1;
- (void)_notifyDelegateEncryptionStatusDidChange:(int)arg1 certsByRecipient:(id)arg2 errorsByRecipient:(id)arg3 identity:(struct __SecIdentity *)arg4 error:(id)arg5;
- (void)_notifyDelegateSigningStatusDidChange:(int)arg1 identity:(struct __SecIdentity *)arg2 error:(id)arg3;
- (void)_nts_copyEncryptionIdentity:(struct __SecIdentity **)arg1 error:(id *)arg2 certificatesByRecipient:(id *)arg3 errorsByRecipient:(id *)arg4;
- (void)_nts_copySigningIdentity:(struct __SecIdentity **)arg1 error:(id *)arg2;
- (void)_nts_setEncryptionIdentity:(struct __SecIdentity *)arg1 error:(id)arg2;
- (void)_nts_setSigningIdentity:(struct __SecIdentity *)arg1 error:(id)arg2;
- (BOOL)_shouldAllowSend_nts;
- (BOOL)_shouldEncrypt_nts;
- (BOOL)_shouldSign_nts;
- (BOOL)_updateEncryptionStatus_nts;
- (BOOL)_updateSigningStatus_nts;
- (void)addRecipients:(id)arg1;
- (id)compositionSpecification;
- (void)dealloc;
- (id)init;
- (id)initWithSendingAccount:(id)arg1 signingPolicy:(int)arg2 encryptionPolicy:(int)arg3;
- (id)initWithSigningPolicy:(int)arg1 encryptionPolicy:(int)arg2;
- (void)invalidate;
- (void)removeRecipients:(id)arg1;
- (BOOL)shouldAllowSend;

@end

