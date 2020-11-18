//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HelpKit/HLPAnalyticsEvent.h>

@class NSString;

@interface HLPAnalyticsEventContentViewed : HLPAnalyticsEvent
{
    NSString *_externalURLString;
    NSString *_fromTopicID;
    NSString *_topicID;
    NSString *_source;
    NSString *_viewMode;
    unsigned long long _viewNum;
}

@property (strong, nonatomic) NSString *externalURLString; // @synthesize externalURLString=_externalURLString;
@property (strong, nonatomic) NSString *fromTopicID; // @synthesize fromTopicID=_fromTopicID;
@property (strong, nonatomic) NSString *source; // @synthesize source=_source;
@property (strong, nonatomic) NSString *topicID; // @synthesize topicID=_topicID;
@property (strong, nonatomic) NSString *viewMode; // @synthesize viewMode=_viewMode;
@property (nonatomic) unsigned long long viewNum; // @synthesize viewNum=_viewNum;

+ (id)eventWithTopicID:(id)arg1 source:(id)arg2 interfaceStyle:(long long)arg3;
- (void).cxx_destruct;
- (id)_initWithTopicID:(id)arg1 source:(id)arg2 interfaceStyle:(long long)arg3;
- (id)caRepresentation;
- (id)eventName;
- (void)log;

@end
