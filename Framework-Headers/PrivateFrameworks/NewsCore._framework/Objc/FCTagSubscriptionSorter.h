//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FCTagRanking;

@interface FCTagSubscriptionSorter : NSObject
{
    id<FCTagRanking> _tagRanker;
}

@property (readonly, nonatomic) id<FCTagRanking> tagRanker; // @synthesize tagRanker=_tagRanker;

- (void).cxx_destruct;
- (id)initWithTagRanker:(id)arg1;
- (id)sortTagSubscriptions:(id)arg1;

@end

