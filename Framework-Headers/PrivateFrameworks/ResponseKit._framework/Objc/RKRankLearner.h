//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RKRankLearner : NSObject
{
}

- (void)flushRankingData:(id)arg1;
- (id)getDBManager:(id)arg1;
- (id)getDBManager:(id)arg1 withCustomPath:(id)arg2;
- (id)getRankedResponses:(id)arg1 forRecipientID:(id)arg2 withLanguageID:(id)arg3;
- (id)init;
- (BOOL)insertRankingInfo:(id)arg1 forLanguageID:(id)arg2;
- (id)rankResponses:(id)arg1;
- (id)updateFeaturesForResponse:(id)arg1 selectCounts:(id)arg2 inputMethodCounts:(id)arg3 sourceCounts:(id)arg4 currentTime:(id)arg5 languageCode:(id)arg6;

@end
