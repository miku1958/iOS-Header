//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;

@interface MapsSuggestionsRelevanceScorer : NSObject
{
    NSMutableArray *_scorers;
    NSDate *_scorersUpdatedAt;
}

- (void).cxx_destruct;
- (void)addScorer:(id)arg1;
- (id)confidenceForContacts:(id)arg1 addresses:(id)arg2;
- (id)confidenceForMapItems:(id)arg1;
- (id)init;
- (void)preLoadAllScorers;

@end
