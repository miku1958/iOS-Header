//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKit/AKCredentialRequest.h>

@class ACAccount, NSArray, NSDictionary, NSString;

@interface AKAuthorizationRequest : AKCredentialRequest
{
    BOOL _isSilentAppTransfer;
    BOOL _isEligibleForUpgradeFromPassword;
    NSString *_altDSID;
    ACAccount *_authkitAccount;
    NSArray *_requestedScopes;
    NSDictionary *_appProvidedData;
    NSString *_state;
    NSString *_nonce;
    NSString *_clientID;
    NSString *_teamID;
    long long _existingStatus;
}

@property (nonatomic) BOOL _isSilentAppTransfer; // @synthesize _isSilentAppTransfer;
@property (copy, nonatomic) NSDictionary *appProvidedData; // @synthesize appProvidedData=_appProvidedData;
@property (strong, nonatomic) ACAccount *authkitAccount; // @synthesize authkitAccount=_authkitAccount;
@property (copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property (nonatomic) long long existingStatus; // @synthesize existingStatus=_existingStatus;
@property (readonly, nonatomic) ACAccount *internalAuthKitAccount;
@property (nonatomic) BOOL isEligibleForUpgradeFromPassword; // @synthesize isEligibleForUpgradeFromPassword=_isEligibleForUpgradeFromPassword;
@property (copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property (copy, nonatomic) NSArray *requestedScopes; // @synthesize requestedScopes=_requestedScopes;
@property (copy, nonatomic) NSString *state; // @synthesize state=_state;
@property (copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_sanitizedCopy;
- (id)altDSID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAltDSID:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

