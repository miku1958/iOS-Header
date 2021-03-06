//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INQueryHealthSampleIntentExport-Protocol.h>

@class HKUnit, NSArray, NSString;

@interface INQueryHealthSampleIntent : INIntent <INQueryHealthSampleIntentExport>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long expectedResultType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long objectType;
@property (readonly, nonatomic) long long questionType;
@property (readonly, copy, nonatomic) NSArray *recordDates;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *thresholdValues;
@property (readonly, copy, nonatomic) HKUnit *unit;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithObjectType:(long long)arg1 recordDates:(id)arg2 unit:(id)arg3 questionType:(long long)arg4 thresholdValues:(id)arg5 expectedResultType:(long long)arg6;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setExpectedResultType:(long long)arg1;
- (void)setObjectType:(long long)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setQuestionType:(long long)arg1;
- (void)setRecordDates:(id)arg1;
- (void)setThresholdValues:(id)arg1;
- (void)setUnit:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end

