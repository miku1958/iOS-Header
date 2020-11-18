//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUPlayButtonTileViewController;

@protocol PUPlayButtonTileViewControllerDelegate <NSObject>

@optional
- (double)playButtonTileViewController:(PUPlayButtonTileViewController *)arg1 delayForButtonAnimation:(BOOL)arg2;
- (void)playButtonTileViewControllerDidTapButton:(PUPlayButtonTileViewController *)arg1;
- (BOOL)playButtonTileViewControllerShouldShowPauseButton:(PUPlayButtonTileViewController *)arg1;
@end
