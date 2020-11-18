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
    NSArray *_procedureCodings;
    NSArray *_performers;
    HKMedicalDate *_executionStartDate;
    HKMedicalDate *_executionEndDate;
    BOOL _notPerformed;
    HKMedicalCoding *_statusCoding;
    NSArray *_categoryCodings;
    NSArray *_reasonCodings;
    NSArray *_reasonsNotPerformedCodings;
    NSArray *_outcomeCodings;
    NSArray *_complicationsCodings;
    NSArray *_followUpsCodings;
    NSArray *_bodySitesCodings;
}

@property (readonly, copy) NSArray *bodySitesCodings;
@property (readonly, copy) NSArray *categoryCodings;
@property (readonly, copy) NSArray *complicationsCodings;
@property (readonly, copy) HKMedicalDate *executionEndDate;
@property (readonly, copy) HKMedicalDate *executionStartDate;
@property (readonly, copy) NSArray *followUpsCodings;
@property (readonly) BOOL notPerformed;
@property (readonly, copy) NSArray *outcomeCodings;
@property (readonly, copy) NSArray *performers;
@property (readonly, copy) NSArray *procedureCodings;
@property (readonly, copy) HKProcedureRecordType *procedureRecordType;
@property (readonly, copy) NSArray *reasonCodings;
@property (readonly, copy) NSArray *reasonsNotPerformedCodings;
@property (readonly, copy) HKMedicalCoding *statusCoding;

+ (BOOL)_isConcreteObjectClass;
+ (id)bodySitesCodingsPreferredSystems;
+ (id)categoryCodingsPreferredSystems;
+ (id)complicationsCodingsPreferredSystems;
+ (id)defaultDisplayString;
+ (id)followUpsCodingsPreferredSystems;
+ (id)outcomeCodingsPreferredSystems;
+ (id)procedureCodingsPreferredSystems;
+ (id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 procedureCodings:(id)arg9 performers:(id)arg10 executionStartDate:(id)arg11 executionEndDate:(id)arg12 notPerformed:(BOOL)arg13 statusCoding:(id)arg14 categoryCodings:(id)arg15 reasonCodings:(id)arg16 reasonsNotPerformedCodings:(id)arg17 outcomeCodings:(id)arg18 complicationsCodings:(id)arg19 followUpsCodings:(id)arg20 bodySitesCodings:(id)arg21;
+ (id)procedureRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 procedureCodings:(id)arg10 performers:(id)arg11 executionStartDate:(id)arg12 executionEndDate:(id)arg13 notPerformed:(BOOL)arg14 statusCoding:(id)arg15 categoryCodings:(id)arg16 reasonCodings:(id)arg17 reasonsNotPerformedCodings:(id)arg18 outcomeCodings:(id)arg19 complicationsCodings:(id)arg20 followUpsCodings:(id)arg21 bodySitesCodings:(id)arg22;
+ (id)reasonCodingsPreferredSystems;
+ (id)reasonsNotPerformedCodingsPreferredSystems;
+ (id)statusCodingPreferredSystems;
+ (BOOL)supportsEquivalence;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
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

