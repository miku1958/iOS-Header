//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FRPersonalizationUtilities : NSObject
{
}

+ (double)decayedDiversificationPenaltyWithInitialValue:(double)arg1 finalValue:(double)arg2 halfLife:(double)arg3 baselineAggregate:(id)arg4;
+ (id)diversifyArticles:(id)arg1 withLimit:(unsigned long long)arg2 similarityStartExpectation:(double)arg3 similarityEndExpectation:(double)arg4 publisherDiversificationSlope:(double)arg5 publisherDiversificationYIntercept:(double)arg6;
+ (id)diversifyArticles:(id)arg1 withPreselectedArticles:(id)arg2 limit:(unsigned long long)arg3 similarityStartExpectation:(double)arg4 similarityEndExpectation:(double)arg5 publisherDiversificationSlope:(double)arg6 publisherDiversificationYIntercept:(double)arg7;
+ (id)limitArticles:(id)arg1 byHourlyFlowRate:(double)arg2 articleFilterPerPublisher:(double)arg3 timeInterval:(double)arg4;
+ (id)sortArticles:(id)arg1 withArticleToGlobalScoreMap:(id)arg2 readonlyPersonalizationAggregateStore:(id)arg3 personalizationWhitelist:(id)arg4 configurableValues:(id)arg5 subscribedTagIDs:(id)arg6 mutedTagIDs:(id)arg7 autofavoritedTagIDs:(id)arg8;
+ (id)sortArticles:(id)arg1 withArticleToGlobalScoreMap:(id)arg2 readonlyPersonalizationAggregateStore:(id)arg3 personalizationWhitelist:(id)arg4 configurableValues:(id)arg5 subscribedTagIDs:(id)arg6 mutedTagIDs:(id)arg7 autofavoritedTagIDs:(id)arg8 sortOptions:(long long)arg9 configurationSet:(long long)arg10;

@end

