//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class RTDaemonClient;

@protocol RTClientListenerProtocol <NSObject>
- (void)handleDisconnectionForDaemonClient:(RTDaemonClient *)arg1;
- (RTDaemonClient *)handleRestorationForDaemonClient:(RTDaemonClient *)arg1;
- (void)saveDaemonClient:(RTDaemonClient *)arg1;
@end

