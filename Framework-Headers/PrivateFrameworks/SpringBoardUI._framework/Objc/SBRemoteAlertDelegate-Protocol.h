//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class NSError;
@protocol SBRemoteAlert;

@protocol SBRemoteAlertDelegate <NSObject>
- (void)remoteAlert:(id<SBRemoteAlert>)arg1 didTerminateWithError:(NSError *)arg2;
- (void)remoteAlertDidActivate:(id<SBRemoteAlert>)arg1;
- (void)remoteAlertDidDeactivate:(id<SBRemoteAlert>)arg1;
- (void)remoteAlertDidRequestDismissal:(id<SBRemoteAlert>)arg1;
- (void)remoteAlertDidRequestInvalidation:(id<SBRemoteAlert>)arg1;
@end
