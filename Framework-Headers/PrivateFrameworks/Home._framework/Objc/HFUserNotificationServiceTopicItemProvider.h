//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSSet;

@interface HFUserNotificationServiceTopicItemProvider : HFItemProvider
{
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSSet *_topicItems;
}

@property (copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (copy, nonatomic) NSSet *topicItems; // @synthesize topicItems=_topicItems;

- (void).cxx_destruct;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end

