//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKMedicalRecord.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKDiagnosticTestReportType, HKMedicalCoding, HKMedicalDate, NSArray, NSString;

@interface HKDiagnosticTestReport : HKMedicalRecord <NSSecureCoding, NSCopying>
{
    NSArray *_diagnosticTestCodings;
    NSString *_panelName;
    NSArray *_results;
    HKMedicalDate *_effectiveStartDate;
    HKMedicalCoding *_status;
    HKMedicalDate *_effectiveEndDate;
    HKMedicalDate *_issueDate;
}

@property (readonly, copy) NSArray *diagnosticTestCodings;
@property (readonly, copy) HKDiagnosticTestReportType *diagnosticTestReportType;
@property (readonly, copy) HKMedicalDate *effectiveEndDate;
@property (readonly, copy) HKMedicalDate *effectiveStartDate;
@property (readonly, copy) HKMedicalDate *issueDate;
@property (readonly, copy) NSString *panelName;
@property (readonly, copy) NSArray *results;
@property (readonly, copy) HKMedicalCoding *status;

+ (BOOL)_isConcreteObjectClass;
+ (id)defaultDisplayString;
+ (id)diagnosticTestCodingsPreferredSystems;
+ (id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 diagnosticTestCodings:(id)arg9 panelName:(id)arg10 results:(id)arg11 effectiveStartDate:(id)arg12 status:(id)arg13 effectiveEndDate:(id)arg14 issueDate:(id)arg15;
+ (id)diagnosticTestReportWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 extractionVersion:(long long)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 diagnosticTestCodings:(id)arg10 panelName:(id)arg11 results:(id)arg12 effectiveStartDate:(id)arg13 status:(id)arg14 effectiveEndDate:(id)arg15 issueDate:(id)arg16;
+ (id)statusPreferredSystems;
+ (BOOL)supportsEquivalence;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_setDiagnosticTestCodings:(id)arg1;
- (void)_setEffectiveEndDate:(id)arg1;
- (void)_setEffectiveStartDate:(id)arg1;
- (void)_setIssueDate:(id)arg1;
- (void)_setPanelName:(id)arg1;
- (void)_setResults:(id)arg1;
- (void)_setStatus:(id)arg1;
- (id)_validateConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)diagnosticTestCodingsTasks;
- (void)encodeWithCoder:(id)arg1;
- (id)indexKeywords;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (id)medicalRecordCodings;
- (id)medicalRecordPreferredSystems;
- (id)statusTasks;

@end

