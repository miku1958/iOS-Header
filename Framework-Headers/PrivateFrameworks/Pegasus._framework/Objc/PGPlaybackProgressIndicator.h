//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, _PGPlaybackProgressIndicatorMaskView;

@interface PGPlaybackProgressIndicator : UIView
{
    double _playbackProgress;
    NSArray *_loadedTimeRanges;
    UIView *_containerView;
    _PGPlaybackProgressIndicatorMaskView *_loadedTimeRangesMaskView;
    _PGPlaybackProgressIndicatorMaskView *_playbackProgressMaskView;
}

@property (strong, nonatomic) NSArray *loadedTimeRanges;
@property (nonatomic) double playbackProgress;

- (void).cxx_destruct;
- (void)_updateLoadedTimeRangesMaskViewMaskRanges;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;

@end
