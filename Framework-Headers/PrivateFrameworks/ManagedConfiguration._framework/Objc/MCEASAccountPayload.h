//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCEmailAccountPayloadBase.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase
{
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_emailAddress;
    NSNumber *_mailNumberOfPastDaysToSync;
    NSData *_embeddedCertificate;
    NSString *_embeddedCertificateName;
    NSString *_embeddedCertificatePassword;
    NSString *_certificateUUID;
    NSString *_accountPersistentUUID;
    NSData *_certificatePersistentID;
    BOOL _syncDefaultFoldersOnly;
    NSNumber *_useSSL;
    NSDictionary *_communicationServiceRules;
    NSNumber *_syncDefaultFoldersOnlyNum;
}

@property (readonly, strong, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property (copy, nonatomic) NSString *accountPersistentUUID; // @synthesize accountPersistentUUID=_accountPersistentUUID;
@property (strong, nonatomic) NSData *certificatePersistentID; // @synthesize certificatePersistentID=_certificatePersistentID;
@property (readonly, strong, nonatomic) NSString *certificateUUID; // @synthesize certificateUUID=_certificateUUID;
@property (readonly, nonatomic) NSDictionary *communicationServiceRules; // @synthesize communicationServiceRules=_communicationServiceRules;
@property (copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property (readonly, strong, nonatomic) NSData *embeddedCertificate; // @synthesize embeddedCertificate=_embeddedCertificate;
@property (readonly, strong, nonatomic) NSString *embeddedCertificateName; // @synthesize embeddedCertificateName=_embeddedCertificateName;
@property (copy, nonatomic) NSString *embeddedCertificatePassword; // @synthesize embeddedCertificatePassword=_embeddedCertificatePassword;
@property (readonly, nonatomic) BOOL hasCertificate;
@property (readonly, strong, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property (readonly, strong, nonatomic) NSNumber *mailNumberOfPastDaysToSync; // @synthesize mailNumberOfPastDaysToSync=_mailNumberOfPastDaysToSync;
@property (copy, nonatomic) NSString *password; // @synthesize password=_password;
@property (nonatomic) BOOL syncDefaultFoldersOnly; // @synthesize syncDefaultFoldersOnly=_syncDefaultFoldersOnly;
@property (readonly, nonatomic) NSNumber *syncDefaultFoldersOnlyNum; // @synthesize syncDefaultFoldersOnlyNum=_syncDefaultFoldersOnlyNum;
@property (strong, nonatomic) NSNumber *useSSL; // @synthesize useSSL=_useSSL;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
- (BOOL)containsSensitiveUserInformation;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)restrictions;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;

@end

