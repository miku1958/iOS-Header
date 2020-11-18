//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

#import <Intents/INSpeakableStringResolutionResultExport-Protocol.h>

@class NSString;

@interface INSpeakableStringResolutionResult : INIntentResolutionResult <INSpeakableStringResolutionResultExport>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)confirmationRequiredWithStringToConfirm:(id)arg1;
+ (id)disambiguationWithStringsToDisambiguate:(id)arg1;
+ (id)successWithResolvedString:(id)arg1;
+ (id)unsupportedWithReason:(unsigned long long)arg1 alternativeStrings:(id)arg2;

@end

