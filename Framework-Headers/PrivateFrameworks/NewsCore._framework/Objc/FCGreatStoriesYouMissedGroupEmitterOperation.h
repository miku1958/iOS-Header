//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCGreatStoriesYouMissedGroupEmitterOperation : FCFeedGroupEmittingOperation
{
    unsigned long long _restrictToBestSourceFeeds;
}

@property (nonatomic) unsigned long long restrictToBestSourceFeeds; // @synthesize restrictToBestSourceFeeds=_restrictToBestSourceFeeds;

- (id)_feedTransformation;
- (id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4;
- (void)performOperation;

@end

