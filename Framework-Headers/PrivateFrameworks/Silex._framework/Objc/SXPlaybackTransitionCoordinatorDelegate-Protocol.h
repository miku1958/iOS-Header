//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXPlaybackCoordinator, SXPlaybackTransitionCoordinator;

@protocol SXPlaybackTransitionCoordinatorDelegate <NSObject>
- (void)playbackTransitionCoordinator:(SXPlaybackTransitionCoordinator *)arg1 addObserversToPlaybackCoordinator:(SXPlaybackCoordinator *)arg2;
- (void)playbackTransitionCoordinator:(SXPlaybackTransitionCoordinator *)arg1 removeObserversFromPlaybackCoordinator:(SXPlaybackCoordinator *)arg2;
@end

