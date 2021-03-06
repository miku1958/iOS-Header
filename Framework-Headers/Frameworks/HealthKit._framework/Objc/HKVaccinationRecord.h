//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/HKConceptIndexable-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKConcept, HKMedicalCoding, HKMedicalDate, HKVaccinationRecordType, NSArray, NSLocale, NSString, NSUUID;

@interface HKVaccinationRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>
{
    NSArray *_vaccinationCodings;
    HKMedicalDate *_expirationDate;
    NSString *_doseNumber;
    NSString *_doseQuantity;
    NSString *_performer;
    NSArray *_bodySiteCodings;
    NSString *_reaction;
    BOOL _notGiven;
    HKMedicalDate *_administrationDate;
    HKMedicalCoding *_statusCoding;
    BOOL _patientReported;
    NSArray *_routeCodings;
    NSArray *_reasonsCodings;
    NSArray *_reasonsNotGivenCodings;
    HKConcept *_vaccination;
    HKConcept *_bodySite;
    HKConcept *_status;
    HKConcept *_route;
    NSArray *_reasons;
    NSArray *_reasonsNotGiven;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) HKMedicalDate *administrationDate;
@property (readonly, copy) HKConcept *bodySite;
@property (readonly, copy) NSArray *bodySiteCodings;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *doseNumber;
@property (readonly, copy) NSString *doseQuantity;
@property (readonly, copy) HKMedicalDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly) BOOL notGiven;
@property (readonly) BOOL patientReported;
@property (readonly, copy) NSString *performer;
@property (readonly, copy) NSString *reaction;
@property (readonly, copy) NSArray *reasons;
@property (readonly, copy) NSArray *reasonsCodings;
@property (readonly, copy) NSArray *reasonsNotGiven;
@property (readonly, copy) NSArray *reasonsNotGivenCodings;
@property (readonly, copy) HKConcept *route;
@property (readonly, copy) NSArray *routeCodings;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (readonly, copy) HKConcept *vaccination;
@property (readonly, copy) NSArray *vaccinationCodings;
@property (readonly, copy) HKVaccinationRecordType *vaccinationRecordType;

+ (BOOL)_isConcreteObjectClass;
+ (id)_newVaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 vaccinationCodings:(id)arg13 expirationDate:(id)arg14 doseNumber:(id)arg15 doseQuantity:(id)arg16 performer:(id)arg17 bodySiteCodings:(id)arg18 reaction:(id)arg19 notGiven:(BOOL)arg20 administrationDate:(id)arg21 statusCoding:(id)arg22 patientReported:(BOOL)arg23 routeCodings:(id)arg24 reasonsCodings:(id)arg25 reasonsNotGivenCodings:(id)arg26 config:(CDUnknownBlockType)arg27;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (id)indexableConceptKeyPaths;
+ (BOOL)supportsEquivalence;
+ (BOOL)supportsSecureCoding;
+ (id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 vaccinationCodings:(id)arg12 expirationDate:(id)arg13 doseNumber:(id)arg14 doseQuantity:(id)arg15 performer:(id)arg16 bodySiteCodings:(id)arg17 reaction:(id)arg18 notGiven:(BOOL)arg19 administrationDate:(id)arg20 statusCoding:(id)arg21 patientReported:(BOOL)arg22 routeCodings:(id)arg23 reasonsCodings:(id)arg24 reasonsNotGivenCodings:(id)arg25;
+ (id)vaccinationRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 vaccinationCodings:(id)arg13 expirationDate:(id)arg14 doseNumber:(id)arg15 doseQuantity:(id)arg16 performer:(id)arg17 bodySiteCodings:(id)arg18 reaction:(id)arg19 notGiven:(BOOL)arg20 administrationDate:(id)arg21 statusCoding:(id)arg22 patientReported:(BOOL)arg23 routeCodings:(id)arg24 reasonsCodings:(id)arg25 reasonsNotGivenCodings:(id)arg26;
- (void).cxx_destruct;
- (void)_setAdministrationDate:(id)arg1;
- (void)_setBodySite:(id)arg1;
- (void)_setBodySiteCodings:(id)arg1;
- (void)_setDoseNumber:(id)arg1;
- (void)_setDoseQuantity:(id)arg1;
- (void)_setExpirationDate:(id)arg1;
- (void)_setNotGiven:(BOOL)arg1;
- (void)_setPatientReported:(BOOL)arg1;
- (void)_setPerformer:(id)arg1;
- (void)_setReaction:(id)arg1;
- (void)_setReasons:(id)arg1;
- (void)_setReasonsCodings:(id)arg1;
- (void)_setReasonsNotGiven:(id)arg1;
- (void)_setReasonsNotGivenCodings:(id)arg1;
- (void)_setRoute:(id)arg1;
- (void)_setRouteCodings:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setVaccination:(id)arg1;
- (void)_setVaccinationCodings:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;
- (BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)bodySiteCodingsCollection;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)reasonsCodingsCollections;
- (id)reasonsNotGivenCodingsCollections;
- (id)routeCodingsCollection;
- (id)statusCodingCollection;
- (id)vaccinationCodingsCollection;

@end

