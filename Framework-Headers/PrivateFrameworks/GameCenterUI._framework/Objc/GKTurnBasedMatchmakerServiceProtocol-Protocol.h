//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKRemoteViewControllerDelegate-Protocol.h>

@class GKMatchRequestInternal;

@protocol GKTurnBasedMatchmakerServiceProtocol <GKRemoteViewControllerDelegate>
- (void)refreshMatches;
- (void)setMatchRequestInternal:(GKMatchRequestInternal *)arg1;
- (void)setShowExistingMatches:(BOOL)arg1;
- (void)setShowPlay:(BOOL)arg1;
- (void)setShowQuit:(BOOL)arg1;
@end

