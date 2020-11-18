//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol TILanguageLikelihoodModeling <NSObject>
- (void)addEvidence:(NSString *)arg1 timestamp:(double)arg2 adaptationType:(int)arg3 forRecipient:(NSString *)arg4 app:(NSString *)arg5 language:(NSString *)arg6;
- (unsigned long long)emojiUsageCountForApp:(NSString *)arg1 lastEmojiCountUpdateTime:(double *)arg2;
- (double)lastOfflineAdaptationTimeForApp:(NSString *)arg1;
- (void)priorProbabilityForLanguages:(NSArray *)arg1 recipient:(NSString *)arg2 handler:(void (^)(NSString *, float, BOOL *))arg3;
- (NSArray *)rankedLanguagesForRecipient:(NSString *)arg1;
@end

