//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/NSObject-Protocol.h>

@class IDSActivityUpdate, NSString;

@protocol IDSXPCActivityMonitorClient <NSObject>
- (void)handleIncomingUpdate:(IDSActivityUpdate *)arg1 onActivity:(NSString *)arg2 completion:(void (^)(void))arg3;
@end

