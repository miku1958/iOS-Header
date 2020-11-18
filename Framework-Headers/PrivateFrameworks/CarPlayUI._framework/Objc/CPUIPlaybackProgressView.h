//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CPUIPlaybackProgressView : UIView
{
    BOOL _highlighted;
    BOOL _shouldResizeCurrentProgress;
    double _playbackProgress;
    UIView *_overallProgressView;
    UIView *_currentProgressView;
}

@property (strong, nonatomic) UIView *currentProgressView; // @synthesize currentProgressView=_currentProgressView;
@property (nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (strong, nonatomic) UIView *overallProgressView; // @synthesize overallProgressView=_overallProgressView;
@property (nonatomic) double playbackProgress; // @synthesize playbackProgress=_playbackProgress;
@property (nonatomic) BOOL shouldResizeCurrentProgress; // @synthesize shouldResizeCurrentProgress=_shouldResizeCurrentProgress;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setProgressViewHighlighted:(BOOL)arg1;

@end
