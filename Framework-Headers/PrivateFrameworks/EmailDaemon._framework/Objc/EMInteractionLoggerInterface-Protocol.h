//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class EMMessageObjectID, NSDate, NSDictionary, NSString;

@protocol EMInteractionLoggerInterface <NSObject>
- (void)logEvent:(NSString *)arg1 date:(NSDate *)arg2 data:(NSDictionary *)arg3;
- (void)logEvent:(NSString *)arg1 date:(NSDate *)arg2 messageID:(EMMessageObjectID *)arg3 data:(NSDictionary *)arg4;
@end
