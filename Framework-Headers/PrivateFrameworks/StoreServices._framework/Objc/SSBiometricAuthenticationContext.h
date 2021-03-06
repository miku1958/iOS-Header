//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSData, NSLock, NSNumber, NSString, NSURL, SSConsolidatedDialog, SSPaymentSheet;

@interface SSBiometricAuthenticationContext : NSObject <SSXPCCoding, NSCopying>
{
    NSLock *_lock;
    BOOL _touchIDDelayEnabled;
    BOOL _didAuthenticate;
    BOOL _didBuyParamsChange;
    BOOL _didFallbackToPassword;
    BOOL _isExtendedAction;
    BOOL _isIdentityMapInvalid;
    BOOL _isPayment;
    BOOL _shouldContinueTouchIDSession;
    BOOL _shouldSendFallbackHeader;
    SSPaymentSheet *_paymentSheet;
    NSNumber *_accountIdentifier;
    NSString *_accountName;
    long long _biometricAuthorizationAttempts;
    NSString *_challenge;
    SSConsolidatedDialog *_consolidatedDialog;
    NSString *_dialogId;
    NSString *_fpanID;
    NSString *_passwordEquivalentToken;
    NSData *_paymentTokenData;
    NSURL *_redirectURL;
    NSString *_signature;
    NSString *_userAgent;
    NSString *_xAppleAMDHeader;
    NSString *_xAppleAMDMHeader;
}

@property (copy) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (copy) NSString *accountName; // @synthesize accountName=_accountName;
@property long long biometricAuthorizationAttempts; // @synthesize biometricAuthorizationAttempts=_biometricAuthorizationAttempts;
@property (copy) NSString *challenge; // @synthesize challenge=_challenge;
@property (strong) SSConsolidatedDialog *consolidatedDialog; // @synthesize consolidatedDialog=_consolidatedDialog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *dialogId; // @synthesize dialogId=_dialogId;
@property BOOL didAuthenticate; // @synthesize didAuthenticate=_didAuthenticate;
@property BOOL didBuyParamsChange; // @synthesize didBuyParamsChange=_didBuyParamsChange;
@property BOOL didFallbackToPassword; // @synthesize didFallbackToPassword=_didFallbackToPassword;
@property (copy) NSString *fpanID; // @synthesize fpanID=_fpanID;
@property (readonly) unsigned long long hash;
@property BOOL isExtendedAction; // @synthesize isExtendedAction=_isExtendedAction;
@property BOOL isIdentityMapInvalid; // @synthesize isIdentityMapInvalid=_isIdentityMapInvalid;
@property BOOL isPayment; // @synthesize isPayment=_isPayment;
@property (copy) NSString *passwordEquivalentToken; // @synthesize passwordEquivalentToken=_passwordEquivalentToken;
@property (strong) SSPaymentSheet *paymentSheet; // @synthesize paymentSheet=_paymentSheet;
@property (copy) NSData *paymentTokenData; // @synthesize paymentTokenData=_paymentTokenData;
@property (copy) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property BOOL shouldContinueTouchIDSession; // @synthesize shouldContinueTouchIDSession=_shouldContinueTouchIDSession;
@property BOOL shouldSendFallbackHeader; // @synthesize shouldSendFallbackHeader=_shouldSendFallbackHeader;
@property (copy) NSString *signature; // @synthesize signature=_signature;
@property (readonly) Class superclass;
@property BOOL touchIDDelayEnabled; // @synthesize touchIDDelayEnabled=_touchIDDelayEnabled;
@property (copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property (copy) NSString *xAppleAMDHeader; // @synthesize xAppleAMDHeader=_xAppleAMDHeader;
@property (copy) NSString *xAppleAMDMHeader; // @synthesize xAppleAMDMHeader=_xAppleAMDMHeader;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyXPCEncoding;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;

@end

