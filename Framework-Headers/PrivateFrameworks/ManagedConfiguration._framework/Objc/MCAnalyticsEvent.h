//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MCAnalyticsEvent : NSObject
{
    NSString *_eventKey;
    CDUnknownBlockType _eventPayloadBuilder;
}

- (void).cxx_destruct;
- (id)initWithEventKey:(id)arg1 eventPayloadBuilder:(CDUnknownBlockType)arg2;
- (void)sendEvent;
- (void)sendEventLazy;

@end

