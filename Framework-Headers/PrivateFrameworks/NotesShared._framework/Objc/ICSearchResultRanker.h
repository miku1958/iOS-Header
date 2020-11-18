//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICSearchResultRanker : NSObject
{
}

+ (BOOL)bitAtPosition:(long long)arg1 isTrueInValue:(unsigned long long)arg2;
+ (CDUnknownBlockType)bodyOfNoteOrAttachmentMatchingRule;
+ (id)initializeScoreArrayOfLength:(unsigned long long)arg1 setAllZeros:(BOOL)arg2;
+ (CDUnknownBlockType)participantNameOrEmailMatchingRule;
+ (id)rankingRules;
+ (id)rankingScoresForSearchableItems:(id)arg1 withRankingQueryBitDictionary:(id)arg2;
+ (id)relevanceBitFieldForSearchableItems:(id)arg1;
+ (CDUnknownBlockType)titleOfNoteOrAttachmentMatchingRule;

@end
