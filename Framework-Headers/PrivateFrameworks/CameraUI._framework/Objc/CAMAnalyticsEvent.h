//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CAMAnalyticsEvent : NSObject
{
    NSString *_uuid;
    NSMutableDictionary *__eventMap;
}

@property (readonly, nonatomic) NSMutableDictionary *_eventMap; // @synthesize _eventMap=__eventMap;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEvent:(id)arg1;
- (void)publish;

@end

