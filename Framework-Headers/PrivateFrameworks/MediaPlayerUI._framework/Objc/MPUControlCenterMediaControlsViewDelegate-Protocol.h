//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayerUI/NSObject-Protocol.h>

@class MPUControlCenterMediaControlsView, MPUMediaRemoteControlsView;

@protocol MPUControlCenterMediaControlsViewDelegate <NSObject>

@optional
- (void)mediaControlsView:(MPUControlCenterMediaControlsView *)arg1 willTransitionToCompactView:(BOOL)arg2;
- (void)mediaControlsViewPrimaryActionTriggered:(MPUMediaRemoteControlsView *)arg1;
@end
