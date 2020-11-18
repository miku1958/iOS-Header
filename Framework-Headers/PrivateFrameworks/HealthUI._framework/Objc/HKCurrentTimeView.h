//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HKCurrentTimeChevronButton, NSString, UIButton;
@protocol HKCurrentTimeViewDelegate;

@interface HKCurrentTimeView : UIView
{
    UIButton *_currentTimeButton;
    HKCurrentTimeChevronButton *_previousTimeIndexButton;
    HKCurrentTimeChevronButton *_nextTimeIndexButton;
    BOOL _disableControls;
    BOOL _currentTimeButtonEnabled;
    NSString *_currentTimeString;
    id<HKCurrentTimeViewDelegate> _delegate;
}

@property (nonatomic) BOOL currentTimeButtonEnabled; // @synthesize currentTimeButtonEnabled=_currentTimeButtonEnabled;
@property (copy, nonatomic) NSString *currentTimeString; // @synthesize currentTimeString=_currentTimeString;
@property (weak, nonatomic) id<HKCurrentTimeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL disableControls; // @synthesize disableControls=_disableControls;
@property (nonatomic) BOOL nextTimeButtonEnabled;
@property (nonatomic) BOOL previousTimeButtonEnabled;

- (void).cxx_destruct;
- (double)_backgroundAlpha:(BOOL)arg1;
- (id)_backgroundColor:(BOOL)arg1;
- (id)_colorIfForeground:(BOOL)arg1 enabled:(BOOL)arg2;
- (double)_currentTimeButtonBaselineToBottom;
- (double)_currentTimeButtonBaselineToTop;
- (id)_currentTimeButtonFont;
- (double)_foregroundAlpha:(BOOL)arg1;
- (id)_foregroundColor:(BOOL)arg1;
- (void)_handleContentSizeCategoryDidChange;
- (id)_tintColor:(BOOL)arg1;
- (void)currentTimeButtonTapped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithWideHorizontalMargin:(BOOL)arg1;
- (void)nextTimeIndexButtonTapped:(id)arg1;
- (void)previousTimeIndexButtonTapped:(id)arg1;
- (void)setupViewWithWideHorizontalMargin:(BOOL)arg1;

@end

