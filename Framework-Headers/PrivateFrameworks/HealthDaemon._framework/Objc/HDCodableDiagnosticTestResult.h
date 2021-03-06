//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableInspectableValueCollection, HDCodableMedicalCoding, HDCodableMedicalCodingList, HDCodableMedicalRecord, HDCodableReferenceRangeList, HDCodableStringList, NSData, NSString;

@interface HDCodableDiagnosticTestResult : PBCodable <HDDecoding, NSCopying>
{
    HDCodableMedicalCodingList *_bodySiteCodings;
    NSString *_category;
    NSString *_comments;
    HDCodableMedicalCodingList *_diagnosticTestCodings;
    NSData *_effectiveEndDate;
    NSData *_effectiveStartDate;
    HDCodableMedicalCodingList *_interpretationCodings;
    NSData *_issueDate;
    HDCodableMedicalRecord *_medicalRecord;
    HDCodableMedicalCodingList *_methodCodings;
    HDCodableStringList *_performers;
    HDCodableReferenceRangeList *_referenceRanges;
    HDCodableMedicalCoding *_statusCoding;
    HDCodableInspectableValueCollection *_value;
}

@property (strong, nonatomic) HDCodableMedicalCodingList *bodySiteCodings; // @synthesize bodySiteCodings=_bodySiteCodings;
@property (strong, nonatomic) NSString *category; // @synthesize category=_category;
@property (strong, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HDCodableMedicalCodingList *diagnosticTestCodings; // @synthesize diagnosticTestCodings=_diagnosticTestCodings;
@property (strong, nonatomic) NSData *effectiveEndDate; // @synthesize effectiveEndDate=_effectiveEndDate;
@property (strong, nonatomic) NSData *effectiveStartDate; // @synthesize effectiveStartDate=_effectiveStartDate;
@property (readonly, nonatomic) BOOL hasBodySiteCodings;
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasComments;
@property (readonly, nonatomic) BOOL hasDiagnosticTestCodings;
@property (readonly, nonatomic) BOOL hasEffectiveEndDate;
@property (readonly, nonatomic) BOOL hasEffectiveStartDate;
@property (readonly, nonatomic) BOOL hasInterpretationCodings;
@property (readonly, nonatomic) BOOL hasIssueDate;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (readonly, nonatomic) BOOL hasMethodCodings;
@property (readonly, nonatomic) BOOL hasPerformers;
@property (readonly, nonatomic) BOOL hasReferenceRanges;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HDCodableMedicalCodingList *interpretationCodings; // @synthesize interpretationCodings=_interpretationCodings;
@property (strong, nonatomic) NSData *issueDate; // @synthesize issueDate=_issueDate;
@property (strong, nonatomic) HDCodableMedicalRecord *medicalRecord; // @synthesize medicalRecord=_medicalRecord;
@property (strong, nonatomic) HDCodableMedicalCodingList *methodCodings; // @synthesize methodCodings=_methodCodings;
@property (strong, nonatomic) HDCodableStringList *performers; // @synthesize performers=_performers;
@property (strong, nonatomic) HDCodableReferenceRangeList *referenceRanges; // @synthesize referenceRanges=_referenceRanges;
@property (strong, nonatomic) HDCodableMedicalCoding *statusCoding; // @synthesize statusCoding=_statusCoding;
@property (readonly) Class superclass;
@property (strong, nonatomic) HDCodableInspectableValueCollection *value; // @synthesize value=_value;

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

