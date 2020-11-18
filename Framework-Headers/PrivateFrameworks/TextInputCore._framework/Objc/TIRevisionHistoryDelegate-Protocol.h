//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSString;

@protocol TIRevisionHistoryDelegate <NSObject>
- (struct TITokenID)addWord:(NSString *)arg1 context:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 surfaceFormPtr:(id *)arg4;
- (void)decrementLanguageModelCount:(NSString *)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID *)arg3 contextLength:(unsigned long long)arg4;
- (struct TITokenID)findTokenIDForWord:(NSString *)arg1 context:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned int)arg4;
- (struct TITokenID)findTokenIDForWord:(NSString *)arg1 context:(const struct TITokenID *)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned int)arg4 surfaceFormPtr:(id *)arg5 hasCaseInsensitiveStaticVariant:(BOOL *)arg6;
- (void)incrementLanguageModelCount:(NSString *)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID *)arg3 contextLength:(unsigned long long)arg4 saveToDifferentialPrivacy:(int)arg5;
- (void)incrementUsageTrackingKey:(NSString *)arg1;
- (void)incrementUsageTrackingKeyForAutocorrectionStatistic:(NSString *)arg1 autocorrectionTypes:(unsigned int)arg2;
- (void)registerNegativeEvidence:(NSString *)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID *)arg3 contextLength:(unsigned long long)arg4 intendedTokenID:(struct TITokenID *)arg5 hint:(int)arg6;
@end

