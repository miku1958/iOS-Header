//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSXPCListenerEndpoint;

@protocol TKProtocolSlotRegistry
- (void)addSlotWithEndpoint:(NSXPCListenerEndpoint *)arg1 name:(NSString *)arg2 type:(NSString *)arg3 reply:(void (^)(NSString *))arg4;
@end

