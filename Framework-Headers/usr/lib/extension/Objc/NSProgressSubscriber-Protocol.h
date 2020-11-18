//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <extension/NSObject-Protocol.h>

@class NSProgressValues, NSString;
@protocol NSProgressPublisher;

@protocol NSProgressSubscriber <NSObject>
- (oneway void)addPublisher:(id<NSProgressPublisher>)arg1 forID:(NSString *)arg2 withValues:(NSProgressValues *)arg3 isOld:(BOOL)arg4;
- (oneway void)observePublisherForID:(NSString *)arg1 value:(id)arg2 forKey:(NSString *)arg3 inUserInfo:(BOOL)arg4;
- (oneway void)removePublisherForID:(NSString *)arg1;
@end

