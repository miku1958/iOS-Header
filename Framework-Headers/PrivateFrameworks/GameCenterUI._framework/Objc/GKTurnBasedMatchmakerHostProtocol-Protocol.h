//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKExtensionHostProtocol-Protocol.h>

@class GKTurnBasedMatchInternal, NSError;

@protocol GKTurnBasedMatchmakerHostProtocol <GKExtensionHostProtocol>

@optional
- (void)finishWithError:(NSError *)arg1;
- (void)finishWithMatch:(GKTurnBasedMatchInternal *)arg1;
- (void)playerQuitMatch:(GKTurnBasedMatchInternal *)arg1;
@end

