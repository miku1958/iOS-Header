//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFAnalyticsEvent, NSArray, NSString, NSUUID;

@protocol AFAnalyticsService <NSObject>
- (oneway void)beginEventsGrouping;
- (oneway void)endEventsGrouping;
- (oneway void)logInstrumentationOfType:(NSString *)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(NSUUID *)arg3;
- (oneway void)stageEvents:(NSArray *)arg1 completion:(void (^)(void))arg2;

@optional
- (oneway void)stageEvent:(AFAnalyticsEvent *)arg1;
- (oneway void)stageEvents:(NSArray *)arg1;
@end
