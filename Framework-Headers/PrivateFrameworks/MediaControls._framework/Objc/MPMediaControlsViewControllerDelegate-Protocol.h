//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaControls/NSObject-Protocol.h>

@class MPAVRoute, MPMediaControlsViewController;

@protocol MPMediaControlsViewControllerDelegate <NSObject>

@optional
- (void)mediaControlsViewController:(MPMediaControlsViewController *)arg1 didSelectRoute:(MPAVRoute *)arg2;
- (void)mediaControlsViewControllerDidReceiveInteraction:(MPMediaControlsViewController *)arg1;
@end

