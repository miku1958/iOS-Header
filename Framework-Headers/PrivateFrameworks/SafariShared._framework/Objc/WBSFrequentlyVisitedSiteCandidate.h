//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSHistoryItem;

@interface WBSFrequentlyVisitedSiteCandidate : NSObject
{
    float _score;
    WBSHistoryItem *_historyItem;
}

@property (readonly, nonatomic) WBSHistoryItem *historyItem; // @synthesize historyItem=_historyItem;
@property (readonly, nonatomic) float score; // @synthesize score=_score;

- (void).cxx_destruct;
- (id)initWithHistoryItem:(id)arg1 score:(float)arg2;

@end

