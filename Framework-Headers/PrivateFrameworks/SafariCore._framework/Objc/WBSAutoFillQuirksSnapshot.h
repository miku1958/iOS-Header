//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariCore/WBSRemotePlistSnapshot-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface WBSAutoFillQuirksSnapshot : NSObject <WBSRemotePlistSnapshot>
{
    NSDictionary *_autoFillQuirks;
    NSArray *_domainsWithAssociatedCredentials;
    NSDictionary *_passwordRequirementsByDomain;
    NSArray *_domainsIneligibleForPasswordAuditing;
    NSArray *_domainsToConsiderIdentical;
    NSDictionary *_changePasswordURLsByDomain;
    NSSet *_domainsIneligibleForAutomaticLogin;
    NSSet *_domainsIneligibleForStreamlinedLogin;
}

@property (readonly, copy, nonatomic) NSDictionary *changePasswordURLsByDomain; // @synthesize changePasswordURLsByDomain=_changePasswordURLsByDomain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *domainsIneligibleForAutomaticLogin; // @synthesize domainsIneligibleForAutomaticLogin=_domainsIneligibleForAutomaticLogin;
@property (readonly, copy, nonatomic) NSArray *domainsIneligibleForPasswordAuditing; // @synthesize domainsIneligibleForPasswordAuditing=_domainsIneligibleForPasswordAuditing;
@property (readonly, copy, nonatomic) NSSet *domainsIneligibleForStreamlinedLogin; // @synthesize domainsIneligibleForStreamlinedLogin=_domainsIneligibleForStreamlinedLogin;
@property (readonly, copy, nonatomic) NSArray *domainsToConsiderIdentical; // @synthesize domainsToConsiderIdentical=_domainsToConsiderIdentical;
@property (readonly, copy, nonatomic) NSArray *domainsWithAssociatedCredentials; // @synthesize domainsWithAssociatedCredentials=_domainsWithAssociatedCredentials;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSDictionary *passwordRequirementsByDomain; // @synthesize passwordRequirementsByDomain=_passwordRequirementsByDomain;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_changePasswordURLStringsByDomainFromAutoFillQuirks:(id)arg1 error:(id *)arg2;
- (id)_domainsIneligibleForAutomaticLoginFromAutoFillQuirks:(id)arg1 error:(id *)arg2;
- (id)_domainsIneligibleForPasswordAuditingFromAutoFillQuirks:(id)arg1 error:(id *)arg2;
- (id)_domainsIneligibleForStreamlinedLoginFromAutoFillQuirks:(id)arg1 error:(id *)arg2;
- (id)_domainsToConsiderIdenticalFromAutoFillQuirls:(id)arg1 error:(id *)arg2;
- (id)_domainsWithAssociatedCredentialsFromAutoFillQuirks:(id)arg1 error:(id *)arg2;
- (id)_passwordRequirementsByDomainFromAutoFillQuirks:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithPlistData:(id)arg1 error:(id *)arg2;
- (id)plistDataWithFormat:(unsigned long long)arg1;

@end
