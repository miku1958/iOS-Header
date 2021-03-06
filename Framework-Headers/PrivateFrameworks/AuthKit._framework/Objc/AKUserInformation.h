//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface AKUserInformation : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_givenName;
    NSString *_familyName;
    NSString *_forwardingEmail;
    NSString *_previouslySelectedEmail;
    NSString *_primaryEmailAddress;
    NSString *_accountName;
    NSArray *_accountAliases;
    NSArray *_reachableEmails;
    NSString *_authorizedApplicationsListVersion;
    NSString *_masterKeyID;
    NSNumber *_vettedPrimaryEmail;
    NSNumber *_phoneAsAppleID;
    NSNumber *_isUnderage;
    NSString *_ageOfMajority;
    NSNumber *_isLegacyStudent;
    NSNumber *_hasUsedAuthorization;
    NSNumber *_previouslyWantedPrivateEmail;
    unsigned long long _appleIDSecurityLevel;
    unsigned long long _authMode;
    unsigned long long _repairState;
    NSDictionary *_additionalInfo;
    NSString *_selectedEmail;
}

@property (copy, nonatomic) NSArray *accountAliases; // @synthesize accountAliases=_accountAliases;
@property (copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property (copy, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property (copy, nonatomic) NSString *ageOfMajority; // @synthesize ageOfMajority=_ageOfMajority;
@property (nonatomic) unsigned long long appleIDSecurityLevel; // @synthesize appleIDSecurityLevel=_appleIDSecurityLevel;
@property (nonatomic) unsigned long long authMode; // @synthesize authMode=_authMode;
@property (copy, nonatomic) NSString *authorizedApplicationsListVersion; // @synthesize authorizedApplicationsListVersion=_authorizedApplicationsListVersion;
@property (copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property (copy, nonatomic) NSString *forwardingEmail; // @synthesize forwardingEmail=_forwardingEmail;
@property (copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property (copy, nonatomic) NSNumber *hasUsedAuthorization; // @synthesize hasUsedAuthorization=_hasUsedAuthorization;
@property (copy, nonatomic) NSNumber *isLegacyStudent; // @synthesize isLegacyStudent=_isLegacyStudent;
@property (copy, nonatomic) NSNumber *isUnderage; // @synthesize isUnderage=_isUnderage;
@property (copy, nonatomic) NSString *masterKeyID; // @synthesize masterKeyID=_masterKeyID;
@property (copy, nonatomic) NSNumber *phoneAsAppleID; // @synthesize phoneAsAppleID=_phoneAsAppleID;
@property (copy, nonatomic) NSString *previouslySelectedEmail; // @synthesize previouslySelectedEmail=_previouslySelectedEmail;
@property (copy, nonatomic) NSNumber *previouslyWantedPrivateEmail; // @synthesize previouslyWantedPrivateEmail=_previouslyWantedPrivateEmail;
@property (copy, nonatomic) NSString *primaryEmailAddress; // @synthesize primaryEmailAddress=_primaryEmailAddress;
@property (copy, nonatomic) NSArray *reachableEmails; // @synthesize reachableEmails=_reachableEmails;
@property (nonatomic) unsigned long long repairState; // @synthesize repairState=_repairState;
@property (copy, nonatomic) NSString *selectedEmail; // @synthesize selectedEmail=_selectedEmail;
@property (copy, nonatomic) NSNumber *vettedPrimaryEmail; // @synthesize vettedPrimaryEmail=_vettedPrimaryEmail;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseBody:(id)arg1;

@end

