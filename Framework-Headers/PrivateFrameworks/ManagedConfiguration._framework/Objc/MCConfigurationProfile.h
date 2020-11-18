//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCProfile.h>

@class MCProfileServiceProfile, NSArray;

@interface MCConfigurationProfile : MCProfile
{
    NSArray *_payloads;
    NSArray *_managedPayloads;
    BOOL _isCloudProfile;
    BOOL _isCloudLocked;
    BOOL _isMDMProfile;
    MCProfileServiceProfile *_OTAProfile;
}

@property (strong, nonatomic) MCProfileServiceProfile *OTAProfile; // @synthesize OTAProfile=_OTAProfile;
@property (nonatomic) BOOL isCloudLocked; // @synthesize isCloudLocked=_isCloudLocked;
@property (nonatomic) BOOL isCloudProfile; // @synthesize isCloudProfile=_isCloudProfile;
@property (nonatomic) BOOL isMDMProfile; // @synthesize isMDMProfile=_isMDMProfile;

- (void).cxx_destruct;
- (void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3;
- (id)_localizedPayloadSummaryByType:(id)arg1;
- (void)_sortPayloads;
- (id)_sortPayloads:(id)arg1;
- (id)_subjectSummaryFromCertificate:(struct __SecCertificate *)arg1;
- (struct __SecCertificate *)copyCertificateFromPayloadWithUUID:(id)arg1;
- (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1;
- (id)description;
- (id)earliestCertificateExpiryDate;
- (id)initWithDictionary:(id)arg1 allowEmptyPayload:(BOOL)arg2 outError:(id *)arg3;
- (id)installationWarningsIncludeUnsignedProfileWarning:(BOOL)arg1;
- (BOOL)isManagedByProfileService;
- (id)localizedManagedPayloadSummaryByType;
- (id)localizedPayloadSummaryByType;
- (id)managedPayloads;
- (id)payloadWithUUID:(id)arg1;
- (id)payloads;
- (id)stubDictionary;
- (id)subjectSummaryFromCertificatePayloadWithUUID:(id)arg1;
- (id)subjectSummaryFromCertificateWithPersistentID:(id)arg1;

@end
