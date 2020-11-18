//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PubSub/NSObject-Protocol.h>

@class NSArray, NSSet, NSString, PSEvent;

@protocol PSBrokerTransport <NSObject>

@property (readonly) NSString *identifier;

- (void)addSubscriptions:(NSArray *)arg1 forTopicWithName:(NSString *)arg2;
- (void)publishEvent:(PSEvent *)arg1 forTopicWithName:(NSString *)arg2 toRemoteDevices:(NSSet *)arg3;
- (void)removeSubscriptions:(NSArray *)arg1 forTopicWithName:(NSString *)arg2;
@end
