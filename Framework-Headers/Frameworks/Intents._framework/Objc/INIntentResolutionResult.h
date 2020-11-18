//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INIntentResolutionResultDataProviding-Protocol.h>
#import <Intents/INIntentResolutionResultExport-Protocol.h>

@class INIntent, NSArray, NSString;

@interface INIntentResolutionResult : NSObject <INIntentResolutionResultExport, INIntentResolutionResultDataProviding>
{
    long long _resolutionResultCode;
    NSArray *_disambiguationItems;
    NSArray *_alternatives;
    id _resolvedValue;
    id _itemToConfirm;
    unsigned long long _unsupportedReason;
    unsigned long long _confirmationReason;
    INIntent *_intentToExecute;
}

@property (strong, nonatomic) NSArray *alternatives; // @synthesize alternatives=_alternatives;
@property (nonatomic) unsigned long long confirmationReason; // @synthesize confirmationReason=_confirmationReason;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *disambiguationItems; // @synthesize disambiguationItems=_disambiguationItems;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) INIntent *intentToExecute; // @synthesize intentToExecute=_intentToExecute;
@property (strong, nonatomic) id itemToConfirm; // @synthesize itemToConfirm=_itemToConfirm;
@property (nonatomic) long long resolutionResultCode; // @synthesize resolutionResultCode=_resolutionResultCode;
@property (strong, nonatomic) id resolvedValue; // @synthesize resolvedValue=_resolvedValue;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long unsupportedReason; // @synthesize unsupportedReason=_unsupportedReason;

+ (id)_dataForResolutionMethodUnimplemented;
+ (id)_resolutionResultWithData:(id)arg1 slotDescription:(id)arg2;
+ (id)confirmationRequiredWithItemToConfirm:(id)arg1 forReason:(long long)arg2;
+ (id)needsValue;
+ (id)notRequired;
+ (id)requiresExecutionOfIntent:(id)arg1;
+ (id)resolutionResultConfirmationRequiredWithItemToConfirm:(id)arg1;
+ (id)resolutionResultDisambiguationWithItemsToDisambiguate:(id)arg1;
+ (id)resolutionResultNeedsValue;
+ (id)resolutionResultNotRequired;
+ (id)resolutionResultSuccessWithResolvedValue:(id)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 alternativeItems:(id)arg2;
+ (id)unsupported;
+ (id)unsupportedWithReason:(long long)arg1;
- (void).cxx_destruct;
- (id)_JSONDictionaryRepresentationForIntent:(id)arg1 parameterName:(id)arg2;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;
- (id)_dataForIntentSlotDescription:(id)arg1;
- (id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2;
- (id)_initWithResolutionResult:(id)arg1;
- (id)_initWithResultCode:(long long)arg1;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_objectForIntentSlotValue:(id)arg1 slotDescription:(id)arg2;
- (id)_stringForResultCode:(long long)arg1;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id *)arg3;
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
