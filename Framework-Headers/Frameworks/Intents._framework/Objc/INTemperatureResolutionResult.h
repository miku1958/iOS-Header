//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

#import <Intents/INTemperatureResolutionResultExport-Protocol.h>

@class NSString;

@interface INTemperatureResolutionResult : INIntentResolutionResult <INTemperatureResolutionResultExport>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)confirmationRequiredWithTemperatureToConfirm:(id)arg1;
+ (id)disambiguationWithTemperaturesToDisambiguate:(id)arg1;
+ (id)needsMoreDetailsForTemperature:(id)arg1;
+ (id)successWithResolvedTemperature:(id)arg1;

@end

