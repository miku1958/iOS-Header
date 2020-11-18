//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXHearingSupport/NSObject-Protocol.h>

@class AXHARemoteController, AXHARemoteMessage, NSError;

@protocol AXHARemoteControllerDelegate <NSObject>
- (void)controller:(AXHARemoteController *)arg1 didCloseConnectionWithError:(NSError *)arg2;
- (void)controller:(AXHARemoteController *)arg1 didFinishSendingData:(AXHARemoteMessage *)arg2;
- (void)controller:(AXHARemoteController *)arg1 didReceiveData:(AXHARemoteMessage *)arg2;
- (void)controllerDidFinishConnecting:(AXHARemoteController *)arg1;
@end

