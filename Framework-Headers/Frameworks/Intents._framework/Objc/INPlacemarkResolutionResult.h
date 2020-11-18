//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

#import <Intents/INPlacemarkResolutionResultExport-Protocol.h>

@class NSString;

@interface INPlacemarkResolutionResult : INIntentResolutionResult <INPlacemarkResolutionResultExport>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)confirmationRequiredWithPlacemarkToConfirm:(id)arg1;
+ (id)disambiguationWithPlacemarksToDisambiguate:(id)arg1;
+ (id)successWithResolvedPlacemark:(id)arg1;
+ (id)unsupportedWithReason:(unsigned long long)arg1 alternativePlacemarks:(id)arg2;

@end

