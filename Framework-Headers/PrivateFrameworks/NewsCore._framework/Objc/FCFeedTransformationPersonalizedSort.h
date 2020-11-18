//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class NSMapTable, NSString;
@protocol FCFeedPersonalizing;

@interface FCFeedTransformationPersonalizedSort : NSObject <FCFeedTransforming>
{
    id<FCFeedPersonalizing> _feedPersonalizer;
    NSMapTable *_feedItemScores;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMapTable *feedItemScores; // @synthesize feedItemScores=_feedItemScores;
@property (strong, nonatomic) id<FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)transformationWithPersonalizer:(id)arg1;
+ (id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;
- (id)transformHeadlines:(id)arg1;

@end
