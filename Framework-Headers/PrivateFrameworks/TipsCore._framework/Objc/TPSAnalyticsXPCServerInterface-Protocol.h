//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/NSObject-Protocol.h>

@class NSArray, TPSAnalyticsEvent;

@protocol TPSAnalyticsXPCServerInterface <NSObject>
- (oneway void)logAnalyticsEvent:(TPSAnalyticsEvent *)arg1;
- (oneway void)logAnalyticsEvents:(NSArray *)arg1;
@end
