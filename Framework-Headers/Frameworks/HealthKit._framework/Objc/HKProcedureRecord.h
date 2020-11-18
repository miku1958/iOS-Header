//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKMedicalCoding, HKMedicalDate, HKProcedureRecordType, NSArray;

@interface HKProcedureRecord : HKMedicalRecord <NSSecureCoding, NSCopying>
{
    BOOL _notPerformed;
    NSArray *_bodySitesCodings;
    NSArray *_categoryCodings;
    NSArray *_complicationsCodings;
    HKMedicalDate *_executionEndDate;
    HKMedicalDate *_executionStartDate;
    NSArray *_followUpsCodings;
    NSArray *_outcomeCodings;
    NSArray *_performers;
    NSArray *_procedureCodings;
    NSArray *_reasonCodings;
    NSArray *_reasonsNotPerformedCodings;
    HKMedicalCoding *_statusCoding;
}

@property (readonly, copy, nonatomic) NSArray *bodySitesCodings; // @synthesize bodySitesCodings=_bodySitesCodings;
@property (readonly, copy, nonatomic) NSArray *categoryCodings; // @synthesize categoryCodings=_categoryCodings;
@property (readonly, copy, nonatomic) NSArray *complicationsCodings; // @synthesize complicationsCodings=_complicationsCodings;
@property (readonly, copy, nonatomic) HKMedicalDate *executionEndDate; // @synthesize executionEndDate=_executionEndDate;
@property (readonly, copy, nonatomic) HKMedicalDate *executionStartDate; // @synthesize executionStartDate=_executionStartDate;
@property (readonly, copy, nonatomic) NSArray *followUpsCodings; // @synthesize followUpsCodings=_followUpsCodings;
@property (readonly, nonatomic) BOOL notPerformed; // @synthesize notPerformed=_notPerformed;
@property (readonly, copy, nonatomic) NSArray *outcomeCodings; // @synthesize outcomeCodings=_outcomeCodings;
@property (readonly, copy, nonatomic) NSArray *performers; // @synthesize performers=_performers;
@property (readonly, copy, nonatomic) NSArray *procedureCodings; // @synthesize procedureCodings=_procedureCodings;
@property (readonly, nonatomic) HKProcedureRecordType *procedureRecordType;
@property (readonly, copy, nonatomic) NSArray *reasonCodings; // @synthesize reasonCodings=_reasonCodings;
@property (readonly, copy, nonatomic) NSArray *reasonsNotPerformedCodings; // @synthesize reasonsNotPerformedCodings=_reasonsNotPerformedCodings;
@property (readonly, copy, nonatomic) HKMedicalCoding *statusCoding; // @synthesize statusCoding=_statusCoding;

+ (BOOL)_isConcreteObjectClass;
+ (id)bodySitesCodingsPreferredSystems;
+ (id)categoryCodingsPreferredSystems;
+ (id)complicationsCodingsPreferredSystems;
+ (id)defaultDisplayString;
+ (id)followUpsCodingsPreferredSystems;
+ (id)outcomeCodingsPreferredSystems;
+ (id)procedureCodingsPreferredSystems;
+ (id)procedureRecordWithNote:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 procedureCodings:(id)arg8 performers:(id)arg9 executionStartDate:(id)arg10 executionEndDate:(id)arg11 notPerformed:(BOOL)arg12 statusCoding:(id)arg13 categoryCodings:(id)arg14 reasonCodings:(id)arg15 reasonsNotPerformedCodings:(id)arg16 outcomeCodings:(id)arg17 complicationsCodings:(id)arg18 followUpsCodings:(id)arg19 bodySitesCodings:(id)arg20;
+ (id)reasonCodingsPreferredSystems;
+ (id)reasonsNotPerformedCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (BOOL)supportsEquivalence;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (void)_setBodySitesCodings:(id)arg1;
- (void)_setCategoryCodings:(id)arg1;
- (void)_setComplicationsCodings:(id)arg1;
- (void)_setExecutionEndDate:(id)arg1;
- (void)_setExecutionStartDate:(id)arg1;
- (void)_setFollowUpsCodings:(id)arg1;
- (void)_setNotPerformed:(BOOL)arg1;
- (void)_setOutcomeCodings:(id)arg1;
- (void)_setPerformers:(id)arg1;
- (void)_setProcedureCodings:(id)arg1;
- (void)_setReasonCodings:(id)arg1;
- (void)_setReasonsNotPerformedCodings:(id)arg1;
- (void)_setStatusCoding:(id)arg1;
- (id)_validateConfiguration;
- (id)bodySitesCodingsTasks;
- (id)categoryCodingsTasks;
- (id)complicationsCodingsTasks;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)followUpsCodingsTasks;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)outcomeCodingsTasks;
- (id)procedureCodingsTasks;
- (id)reasonCodingsTasks;
- (id)reasonsNotPerformedCodingsTasks;
- (id)statusCodingTasks;

@end

