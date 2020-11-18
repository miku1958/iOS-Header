//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKDiagnosticTestResultType, HKInspectableValueCollection, HKMedicalCoding, HKMedicalDate, NSArray, NSString;

@interface HKDiagnosticTestResult : HKMedicalRecord <NSSecureCoding, NSCopying>
{
    NSArray *_bodySiteCodings;
    NSString *_category;
    NSString *_comments;
    NSArray *_diagnosticTestCodings;
    HKMedicalDate *_effectiveEndDate;
    HKMedicalDate *_effectiveStartDate;
    NSArray *_interpretationCodings;
    HKMedicalDate *_issueDate;
    NSArray *_methodCodings;
    NSArray *_performers;
    NSArray *_referenceRanges;
    HKMedicalCoding *_statusCoding;
    HKInspectableValueCollection *_value;
}

@property (readonly, copy, nonatomic) NSArray *bodySiteCodings; // @synthesize bodySiteCodings=_bodySiteCodings;
@property (readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property (readonly, copy, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property (readonly, copy, nonatomic) NSArray *diagnosticTestCodings; // @synthesize diagnosticTestCodings=_diagnosticTestCodings;
@property (readonly, nonatomic) HKDiagnosticTestResultType *diagnosticTestResultType;
@property (readonly, copy, nonatomic) HKMedicalDate *effectiveEndDate; // @synthesize effectiveEndDate=_effectiveEndDate;
@property (readonly, copy, nonatomic) HKMedicalDate *effectiveStartDate; // @synthesize effectiveStartDate=_effectiveStartDate;
@property (readonly, copy, nonatomic) NSArray *interpretationCodings; // @synthesize interpretationCodings=_interpretationCodings;
@property (readonly, copy, nonatomic) HKMedicalDate *issueDate; // @synthesize issueDate=_issueDate;
@property (readonly, copy, nonatomic) NSArray *methodCodings; // @synthesize methodCodings=_methodCodings;
@property (readonly, copy, nonatomic) NSArray *performers; // @synthesize performers=_performers;
@property (readonly, copy, nonatomic) NSArray *referenceRanges; // @synthesize referenceRanges=_referenceRanges;
@property (readonly, copy, nonatomic) HKMedicalCoding *statusCoding; // @synthesize statusCoding=_statusCoding;
@property (readonly, copy, nonatomic) HKInspectableValueCollection *value; // @synthesize value=_value;

+ (BOOL)_isConcreteObjectClass;
+ (id)bodySiteCodingsPreferredSystems;
+ (id)defaultDisplayString;
+ (id)diagnosticTestCodingsPreferredSystems;
+ (id)diagnosticTestResultWithNote:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 diagnosticTestCodings:(id)arg8 value:(id)arg9 referenceRanges:(id)arg10 effectiveStartDate:(id)arg11 category:(id)arg12 issueDate:(id)arg13 effectiveEndDate:(id)arg14 statusCoding:(id)arg15 interpretationCodings:(id)arg16 comments:(id)arg17 bodySiteCodings:(id)arg18 methodCodings:(id)arg19 performers:(id)arg20;
+ (id)interpretationCodingsPreferredSystems;
+ (id)methodCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (BOOL)supportsEquivalence;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (void)_setBodySiteCodings:(id)arg1;
- (void)_setCategory:(id)arg1;
- (void)_setComments:(id)arg1;
- (void)_setDiagnosticTestCodings:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setInterpretationCodings:(id)arg1;
- (void)_setIssueDate:(id)arg1;
- (void)_setMethodCodings:(id)arg1;
- (void)_setPerformers:(id)arg1;
- (void)_setReferenceRanges:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (void)_setValue:(id)arg1;
- (id)_validateConfiguration;
- (id)bodySiteCodingsTasks;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)diagnosticTestCodingsTasks;
- (void)encodeWithCoder:(id)arg1;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interpretationCodingsTasks;
- (BOOL)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)methodCodingsTasks;
- (id)statusCodingTasks;

@end
