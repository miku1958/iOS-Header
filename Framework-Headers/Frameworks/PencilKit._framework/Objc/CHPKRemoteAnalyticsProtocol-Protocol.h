//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol CHPKRemoteAnalyticsProtocol <NSObject>
- (oneway void)didEndInputSessionUsingScribbleWithInputMode:(NSString *)arg1;
- (oneway void)didEndInputSessionWithInputMode:(NSString *)arg1;
- (oneway void)didEndPKCanvasSession:(NSDictionary *)arg1 withInputMode:(NSString *)arg2;
- (oneway void)test_dispatchDailyEvent;
@end

