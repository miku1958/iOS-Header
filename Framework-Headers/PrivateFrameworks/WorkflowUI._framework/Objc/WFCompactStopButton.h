//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSProgress, WFWorkflowProgressView;

@interface WFCompactStopButton : UIButton
{
    NSProgress *_progress;
    WFWorkflowProgressView *_progressView;
}

@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) WFWorkflowProgressView *progressView; // @synthesize progressView=_progressView;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleTouchUpInside;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)popCompletedCheckmark;
- (void)setHighlighted:(BOOL)arg1;
- (void)transitionToCompleted:(BOOL)arg1 animated:(BOOL)arg2;

@end
