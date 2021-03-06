//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TILanguageLikelihoodModeling-Protocol.h>

@class NSString;

@interface _TILanguageLikelihoodModel : NSObject <TILanguageLikelihoodModeling>
{
    void *_languageLikelihoodModelRef;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) void *languageLikelihoodModelRef; // @synthesize languageLikelihoodModelRef=_languageLikelihoodModelRef;
@property (readonly) Class superclass;

+ (void)setSharedLanguageLikelihoodModel:(id)arg1;
+ (id)sharedLanguageLikelihoodModel;
+ (id)singletonInstance;
- (void)addEvidence:(id)arg1 timestamp:(double)arg2 adaptationType:(int)arg3 forRecipient:(id)arg4 app:(id)arg5 language:(id)arg6;
- (unsigned long long)emojiUsageCountForApp:(id)arg1 lastEmojiCountUpdateTime:(double *)arg2;
- (id)init;
- (double)lastOfflineAdaptationTimeForApp:(id)arg1;
- (void)priorProbabilityForLanguages:(id)arg1 recipient:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)rankedLanguagesForRecipient:(id)arg1;

@end

