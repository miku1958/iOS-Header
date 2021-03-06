//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGExtractionModel.h>

@class NSDictionary, NSRegularExpression, _PASNotificationToken;

@interface SGReminderExtractionModel : SGExtractionModel
{
    _PASNotificationToken *_assetUpdateToken;
    NSDictionary *_enrichments;
    NSDictionary *_inputTokenMapping;
    NSDictionary *_outputConfig;
    NSDictionary *_reminderOverrides;
    NSRegularExpression *_whitelistRegex;
}

+ (id)enrichTaggedCharacterRangesWithModelOutput:(id)arg1 usingInputCharacterRanges:(id)arg2;
+ (id)inputFromTaggedCharacterRanges:(id)arg1 usingTokenMapping:(id)arg2 forModel:(id)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (struct _NSRange)_whitelistedVerbRangeInContent:(id)arg1;
- (void)dealloc;
- (id)enrichments;
- (BOOL)hasWhitelistedVerbInContent:(id)arg1;
- (id)inputTokenMapping;
- (id)loadModel;
- (id)modelDescription;
- (id)modelInferences:(id)arg1;
- (id)outputConfig;
- (id)reminderOverrides;
- (void)setReminderOverridesForTesting:(id)arg1;
- (void)updateAll;
- (id)whitelistedRangesInContent:(id)arg1;
- (id)whitelistedVerbInContent:(id)arg1;

@end

