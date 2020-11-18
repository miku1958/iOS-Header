//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INIntentResolutionResultDataProviding-Protocol.h>
#import <Intents/INIntentResolutionResultExport-Protocol.h>

@class NSArray, NSString;

@interface INIntentResolutionResult : NSObject <INIntentResolutionResultExport, INIntentResolutionResultDataProviding>
{
    long long _resolutionResultCode;
    NSArray *_disambiguationItems;
    NSArray *_alternatives;
    NSString *_conflictingParameterKeyPath;
    NSArray *_incompleteParameterKeyPaths;
    NSArray *_neededParameterKeyPaths;
    id _resolvedValue;
    id _incompleteValue;
    id _itemToConfirm;
    unsigned long long _unsupportedReason;
}

@property (strong, nonatomic) NSArray *alternatives; // @synthesize alternatives=_alternatives;
@property (strong, nonatomic) NSString *conflictingParameterKeyPath; // @synthesize conflictingParameterKeyPath=_conflictingParameterKeyPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *disambiguationItems; // @synthesize disambiguationItems=_disambiguationItems;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *incompleteParameterKeyPaths; // @synthesize incompleteParameterKeyPaths=_incompleteParameterKeyPaths;
@property (strong, nonatomic) id incompleteValue; // @synthesize incompleteValue=_incompleteValue;
@property (strong, nonatomic) id itemToConfirm; // @synthesize itemToConfirm=_itemToConfirm;
@property (strong, nonatomic) NSArray *neededParameterKeyPaths; // @synthesize neededParameterKeyPaths=_neededParameterKeyPaths;
@property (nonatomic) long long resolutionResultCode; // @synthesize resolutionResultCode=_resolutionResultCode;
@property (strong, nonatomic) id resolvedValue; // @synthesize resolvedValue=_resolvedValue;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long unsupportedReason; // @synthesize unsupportedReason=_unsupportedReason;

+ (id)_dataForResolutionMethodUnimplemented;
+ (id)needsValue;
+ (id)notRequired;
+ (id)resolutionResultConfirmationRequiredWithItemToConfirm:(id)arg1;
+ (id)resolutionResultDisambiguationWithItemsToDisambiguate:(id)arg1;
+ (id)resolutionResultNeedsValue;
+ (id)resolutionResultNeedsValueForParameters:(id)arg1;
+ (id)resolutionResultNotRequired;
+ (id)resolutionResultSuccessWithResolvedValue:(id)arg1;
+ (id)resolutionResultUnsupportedDueToConflictWithParameter:(id)arg1 alternateItems:(id)arg2;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 alternativeItems:(id)arg2;
+ (id)unsupported;
+ (id)unsupportedWithReason:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;
- (id)_dataForIntentSlotDescription:(id)arg1;
- (id)_initWithResolutionResult:(id)arg1;
- (id)_initWithResultCode:(long long)arg1;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_stringForResultCode:(long long)arg1;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2;

@end

