//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class ADPrerollButton, ADProgressView, UIStatusBar;
@protocol ADPrerollTopBarDelegate;

@interface ADPrerollTopBar : UIView
{
    id<ADPrerollTopBarDelegate> _delegate;
    BOOL _isFullscreen;
    BOOL _layoutForExpandedSize;
    UIStatusBar *_statusBar;
    ADPrerollButton *_doneButton;
    ADProgressView *_progressView;
}

@property (weak, nonatomic) id<ADPrerollTopBarDelegate> delegate;
@property (strong, nonatomic) ADPrerollButton *doneButton; // @synthesize doneButton=_doneButton;
@property (nonatomic) BOOL isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property (nonatomic) BOOL layoutForExpandedSize; // @synthesize layoutForExpandedSize=_layoutForExpandedSize;
@property (strong, nonatomic) ADProgressView *progressView; // @synthesize progressView=_progressView;
@property (strong, nonatomic) UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;

- (void)_doneButtonTapped:(id)arg1;
- (void)_scaleToFillButtonTapped:(id)arg1;
- (void)_scaleToFitButtonTapped:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)requiredHeight;
- (void)setElapsedTime:(double)arg1 totalTime:(double)arg2;

@end
