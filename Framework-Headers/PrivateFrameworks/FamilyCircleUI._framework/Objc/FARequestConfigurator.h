//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AAGrandSlamSigner, ACAccount, ACAccountStore, AIDAServiceOwnersManager;

@interface FARequestConfigurator : NSObject
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    ACAccount *_grandSlamAccount;
    AAGrandSlamSigner *_grandSlamSigner;
    AAGrandSlamSigner *_familyGrandSlamSigner;
    AIDAServiceOwnersManager *_serviceOwnersManager;
    BOOL _attachSetupHeader;
}

@property (nonatomic) BOOL attachSetupHeader; // @synthesize attachSetupHeader=_attachSetupHeader;

+ (unsigned char)_isUsingV2Flows;
- (void).cxx_destruct;
- (id)_account;
- (id)_accountStore;
- (void)_addAccountForServiceType:(id)arg1 toPayload:(id)arg2 forKey:(id)arg3;
- (id)_familyGrandSlamSigner;
- (id)_familyTokenForGrandSlamAccount:(id)arg1 andTokenID:(id)arg2;
- (id)_fresnoPayloadWithAdditionalHeaders:(id)arg1;
- (id)_grandSlamAccount;
- (id)_grandSlamSigner;
- (id)_serviceOwnersManager;
- (id)_urlForEventType:(id)arg1;
- (void)addFresnoHeadersToRequest:(id)arg1;
- (void)addFresnoPayloadToRequest:(id)arg1 additionalHeaders:(id)arg2;
- (void)addPayload:(id)arg1 toRequest:(id)arg2;
- (id)initWithAccount:(id)arg1;
- (void)renewCredentialsWithCompletion:(CDUnknownBlockType)arg1;
- (id)requestForEventType:(id)arg1;

@end

