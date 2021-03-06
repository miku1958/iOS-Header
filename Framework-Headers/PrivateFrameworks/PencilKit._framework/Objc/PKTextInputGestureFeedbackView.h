//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, PKTextInputFeedbackController;

@interface PKTextInputGestureFeedbackView : UIView
{
    BOOL __needsRefresh;
    PKTextInputFeedbackController *_dataSourceController;
    NSArray *__highlightViews;
    UIView *__reserveSpaceView;
    struct CGRect __reserveSpaceCaretRect;
}

@property (strong, nonatomic) NSArray *_highlightViews; // @synthesize _highlightViews=__highlightViews;
@property (nonatomic) BOOL _needsRefresh; // @synthesize _needsRefresh=__needsRefresh;
@property (nonatomic) struct CGRect _reserveSpaceCaretRect; // @synthesize _reserveSpaceCaretRect=__reserveSpaceCaretRect;
@property (strong, nonatomic) UIView *_reserveSpaceView; // @synthesize _reserveSpaceView=__reserveSpaceView;
@property (weak, nonatomic) PKTextInputFeedbackController *dataSourceController; // @synthesize dataSourceController=_dataSourceController;

- (void).cxx_destruct;
- (void)_ensureHighlightViewsCount:(long long)arg1;
- (id)_highlightTextRectsToDisplayForElementContent:(id)arg1 range:(struct _NSRange)arg2 feedbackType:(long long)arg3;
- (void)_prepareForReserveSpaceAnimations;
- (struct UIEdgeInsets)_rectInsetsToApplyForFeedbackType:(long long)arg1;
- (struct CGRect)_selectionClipRectForElement:(id)arg1;
- (void)_updateHighlightViewsLookForFeedbackType:(long long)arg1 element:(id)arg2;
- (void)beginShowingReserveSpaceIntro;
- (void)cancelShowingReserveSpaceIntro;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)reserveSpaceRects;
- (void)setNeedsRefreshFeedbackViews;

@end

