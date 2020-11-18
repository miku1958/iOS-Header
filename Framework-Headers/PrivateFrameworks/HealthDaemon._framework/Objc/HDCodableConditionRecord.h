//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableInspectableValue, HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalCodingListList, HDCodableMedicalRecord, NSData, NSString;

@interface HDCodableConditionRecord : PBCodable <HDDecoding, NSCopying>
{
    HDCodableInspectableValue *_abatement;
    NSString *_asserter;
    HDCodableMedicalCodingListList *_bodySitesCodingCollections;
    HDCodableMedicalCodingListList *_categoriesCodingCollections;
    HDCodableMedicalCoding *_clinicalStatusCoding;
    HDCodableMedicalCodingList *_conditionCodingCollection;
    HDCodableMedicalRecord *_medicalRecord;
    HDCodableInspectableValue *_onset;
    NSData *_recordedDate;
    HDCodableMedicalCodingList *_severityCodingCollection;
    HDCodableMedicalCoding *_verificationStatusCoding;
}

@property (strong, nonatomic) HDCodableInspectableValue *abatement; // @synthesize abatement=_abatement;
@property (strong, nonatomic) NSString *asserter; // @synthesize asserter=_asserter;
@property (strong, nonatomic) HDCodableMedicalCodingListList *bodySitesCodingCollections; // @synthesize bodySitesCodingCollections=_bodySitesCodingCollections;
@property (strong, nonatomic) HDCodableMedicalCodingListList *categoriesCodingCollections; // @synthesize categoriesCodingCollections=_categoriesCodingCollections;
@property (strong, nonatomic) HDCodableMedicalCoding *clinicalStatusCoding; // @synthesize clinicalStatusCoding=_clinicalStatusCoding;
@property (strong, nonatomic) HDCodableMedicalCodingList *conditionCodingCollection; // @synthesize conditionCodingCollection=_conditionCodingCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAbatement;
@property (readonly, nonatomic) BOOL hasAsserter;
@property (readonly, nonatomic) BOOL hasBodySitesCodingCollections;
@property (readonly, nonatomic) BOOL hasCategoriesCodingCollections;
@property (readonly, nonatomic) BOOL hasClinicalStatusCoding;
@property (readonly, nonatomic) BOOL hasConditionCodingCollection;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (readonly, nonatomic) BOOL hasOnset;
@property (readonly, nonatomic) BOOL hasRecordedDate;
@property (readonly, nonatomic) BOOL hasSeverityCodingCollection;
@property (readonly, nonatomic) BOOL hasVerificationStatusCoding;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HDCodableMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
@property (strong, nonatomic) HDCodableInspectableValue *onset; // @synthesize onset=_onset;
@property (strong, nonatomic) NSData *recordedDate; // @synthesize recordedDate=_recordedDate;
@property (strong, nonatomic) HDCodableMedicalCodingList *severityCodingCollection; // @synthesize severityCodingCollection=_severityCodingCollection;
@property (readonly) Class superclass;
@property (strong, nonatomic) HDCodableMedicalCoding *verificationStatusCoding; // @synthesize verificationStatusCoding=_verificationStatusCoding;

- (void).cxx_destruct;
- (BOOL)applyToObject:(id)arg1;
- (BOOL)applyToObject:(id)arg1 error:(out id *)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
