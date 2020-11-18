//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

#import <Intents/INCurrencyAmountResolutionResultExport-Protocol.h>

@class NSString;

@interface INCurrencyAmountResolutionResult : INIntentResolutionResult <INCurrencyAmountResolutionResultExport>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)confirmationRequiredWithCurrencyAmountToConfirm:(id)arg1;
+ (id)disambiguationWithCurrencyAmountsToDisambiguate:(id)arg1;
+ (id)needsMoreDetailsForCurrencyAmount:(id)arg1;
+ (id)successWithResolvedCurrencyAmount:(id)arg1;

@end
