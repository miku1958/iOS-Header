//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PARTopicScore : NSObject
{
    unsigned long long _topic;
    double _score;
}

@property (nonatomic) double score; // @synthesize score=_score;
@property (nonatomic) unsigned long long topic; // @synthesize topic=_topic;

+ (id)responseFromJSON:(id)arg1;
+ (id)topicScoreForTopic:(unsigned long long)arg1 score:(double)arg2;
- (id)initWithTopicScore:(unsigned long long)arg1 score:(double)arg2;

@end
