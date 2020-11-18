//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKRenderLoopDelegate-Protocol.h>
#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSDecimalNumber, NSDictionary, NSString, PKBillPaymentCircularView, PKBillPaymentRingGradientState, PKBillPaymentSuggestedAmount, PKBillPaymentSuggestedAmountList, PKCurvedTextLabel, PKEnterCurrencyAmountView, PKRenderLoop, PKRingGradientView, UIColor, UILabel, UILongPressGestureRecognizer, UIPanGestureRecognizer, UISelectionFeedbackGenerator, UITapGestureRecognizer;
@protocol PKBillPaymentRingViewDataSource, PKBillPaymentRingViewDelegate;

@interface PKBillPaymentRingView : UIView <UIGestureRecognizerDelegate, PKRenderLoopDelegate>
{
    PKBillPaymentSuggestedAmountList *_suggestedAmountList;
    NSArray *_suggestedAmountViews;
    double _amountRoundingUnit;
    double _minimumPaymentAmount;
    double _maximumPaymentAmount;
    NSDictionary *_suggestedAmoutImages;
    NSArray *_suggestedAmountAngles;
    NSDictionary *_suggestedAmountsForAngle;
    NSDictionary *_standardRingStates;
    NSDictionary *_colorStops;
    NSDecimalNumber *_displayAmount;
    NSDecimalNumber *_overrideDisplayAmount;
    NSDecimalNumber *_effectiveDisplayAmount;
    BOOL _selectedSuggestedAmountIsTarget;
    PKBillPaymentSuggestedAmount *_selectedSuggestedAmount;
    PKBillPaymentSuggestedAmount *_highlightedSuggestedAmount;
    NSDecimalNumber *_pinnedAmount;
    double _pinnedAmountAngle;
    unsigned long long _pinnedAmountAngleIndex;
    PKRenderLoop *_renderLoop;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_pressRecognizer;
    UIPanGestureRecognizer *_dragRecognizer;
    double _lastDrawTime;
    CDStruct_5c14e0b2 _spring;
    CDStruct_f94998c4 _angleState;
    CDStruct_5c14e0b2 _responseSpring;
    CDStruct_f94998c4 _responseState;
    double _responseSpringElapsedDuration;
    CDStruct_5c14e0b2 _scaleSpring;
    CDStruct_f94998c4 _scaleState;
    BOOL _dragging;
    BOOL _pressed;
    long long _dragCapture;
    BOOL _ignoreTouches;
    BOOL _dotsVisible;
    double _interestLabelAlpha;
    BOOL _needsInitialDisplay;
    NSDecimalNumber *_initialDisplayAmount;
    double _overrideGradientStartAngle;
    PKBillPaymentRingGradientState *_overrideGradientState;
    PKRingGradientView *_ringView;
    PKBillPaymentCircularView *_handleView;
    PKEnterCurrencyAmountView *_enterCurrencyAmountView;
    UILabel *_interestLabel;
    PKCurvedTextLabel *_topCurvedTextLabel;
    PKCurvedTextLabel *_bottomCurvedTextLabel;
    BOOL _userSelectedAngleChange;
    BOOL _enabled;
    BOOL _isSmall;
    id<PKBillPaymentRingViewDelegate> _delegate;
    id<PKBillPaymentRingViewDataSource> _dataSource;
}

@property (readonly, copy, nonatomic) NSDecimalNumber *amount;
@property (readonly, copy, nonatomic) UIColor *currentEndColor;
@property (readonly, copy, nonatomic) UIColor *currentStartColor;
@property (weak, nonatomic) id<PKBillPaymentRingViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKBillPaymentRingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isSmall; // @synthesize isSmall=_isSmall;
@property (readonly, nonatomic) double ringWidth;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double targetAngle;

- (void).cxx_destruct;
- (double)_amountLabelMaximumFontSize;
- (double)_angleForAmount:(id)arg1;
- (double)_angleForAngleIndex:(unsigned long long)arg1;
- (double)_angleForPosition:(struct CGPoint)arg1;
- (double)_angleForRecognizer:(id)arg1;
- (id)_blendFromGradientState:(id)arg1 toState:(id)arg2 withProgress:(double)arg3;
- (id)_blendFromLinearColor:(id)arg1 toLinearColor:(id)arg2 withProgress:(double)arg3;
- (struct CGPoint)_center;
- (struct CGPoint)_centerPointAtAngle:(double)arg1;
- (void)_createStandardColors;
- (void)_createSuggestedAmountAngles;
- (void)_createSuggestedAmountRingColorStops;
- (void)_createSuggestedAmountsImageDictionary;
- (void)_dragEnded:(id)arg1;
- (void)_dragMoved:(id)arg1;
- (void)_dragMovedToAngle:(double)arg1 normalizedRadius:(double)arg2;
- (void)_dragRecognizerChanged:(id)arg1;
- (void)_dragStarted:(id)arg1;
- (id)_gradientStateForSuggestedAmount:(id)arg1;
- (BOOL)_isAmount:(id)arg1 withinRoundingUnitOfAmount:(id)arg2;
- (double)_offsetAngle:(double)arg1;
- (double)_offsetCurrentAngle;
- (void)_pauseRenderLoop;
- (BOOL)_preferredPausedState;
- (void)_pressRecognized:(id)arg1;
- (double)_ringWidth;
- (id)_roundedAmountForAngle:(double)arg1;
- (unsigned long long)_segmentEndAngleIndexForAngle:(double)arg1;
- (BOOL)_setDisplayAmount:(id)arg1;
- (void)_setDotsVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setHighlightedSuggestedAmount:(id)arg1;
- (void)_setResponse:(double)arg1;
- (void)_setSelectedSuggestedAmount:(id)arg1;
- (id)_suggestedAmountForAngleIndex:(unsigned long long)arg1;
- (id)_suggestedAmountImageForSuggestedAmount:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (id)_targetGradientStateForAngle:(double)arg1;
- (unsigned long long)_unnormalizedAngleIndexForAngle:(double)arg1;
- (void)_updateCurvedText;
- (BOOL)_updateEffectiveDisplayAmount;
- (void)_updateForEnabledState;
- (void)_updateHandleImage;
- (void)_updateInterestText;
- (void)_updatePausedState;
- (void)_updateScaleTarget;
- (void)completeInitialDisplayAnimated:(BOOL)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)didUpdateAngleSpringPosition;
- (void)didUpdateAngleSpringTarget;
- (void)didUpdateScaleSpringPosition;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSuggestedAmountList:(id)arg1 delegate:(id)arg2 dataSource:(id)arg3;
- (void)layoutSubviews;
- (void)prepareForInitialDisplayWithAmount:(id)arg1;
- (void)renderLoop:(id)arg1 drawAtTime:(double)arg2;
- (void)setAmount:(id)arg1 animated:(BOOL)arg2;
- (void)setAngle:(double)arg1 animated:(BOOL)arg2 forExplicitAmount:(id)arg3 userInitiated:(BOOL)arg4;
- (void)setHandleScale:(double)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
