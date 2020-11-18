//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAMPanoramaArrowView, CAMPanoramaLevelView, CAMPanoramaPaintingStatus, CAMPanoramaPreviewView, UILabel;
@protocol CAMPanoramaViewDelegate;

@interface CAMPanoramaView : UIView
{
    BOOL _painting;
    BOOL __currentlyShowingMoveInstructions;
    BOOL __currentlyMovingTooFast;
    long long _direction;
    id<CAMPanoramaViewDelegate> _delegate;
    CAMPanoramaPreviewView *_previewView;
    double _currentOrientedAcceleration;
    UIView *__stripBackgroundView;
    UIView *__stripContainerView;
    UIView *__maskingView;
    CAMPanoramaArrowView *__arrowView;
    CAMPanoramaLevelView *__levelView;
    UILabel *__instructionLabel;
    CAMPanoramaPaintingStatus *__currentPaintingStatus;
    double __initialPaintingAcceleration;
    double __currentPaintingAcceleration;
    double *__previousSpeeds;
    double __currentAverageSpeed;
    unsigned long long __arrowUpdateFrame;
    struct CGPoint __initialArrowCenter;
    struct CGRect __lastLayoutBounds;
}

@property (nonatomic, setter=_setArrowUpdateFrame:) unsigned long long _arrowUpdateFrame; // @synthesize _arrowUpdateFrame=__arrowUpdateFrame;
@property (readonly, nonatomic) CAMPanoramaArrowView *_arrowView; // @synthesize _arrowView=__arrowView;
@property (nonatomic, setter=_setCurrentAverageSpeed:) double _currentAverageSpeed; // @synthesize _currentAverageSpeed=__currentAverageSpeed;
@property (nonatomic, setter=_setCurrentPaintingAcceleration:) double _currentPaintingAcceleration; // @synthesize _currentPaintingAcceleration=__currentPaintingAcceleration;
@property (strong, nonatomic, setter=_setCurrentPaintingStatus:) CAMPanoramaPaintingStatus *_currentPaintingStatus; // @synthesize _currentPaintingStatus=__currentPaintingStatus;
@property (nonatomic, getter=_isCurrentlyMovingTooFast, setter=_setCurrentlyMovingTooFast:) BOOL _currentlyMovingTooFast; // @synthesize _currentlyMovingTooFast=__currentlyMovingTooFast;
@property (nonatomic, getter=_isCurrentlyShowingMoveInstructions, setter=_setCurrentlyShowingMoveInstructions:) BOOL _currentlyShowingMoveInstructions; // @synthesize _currentlyShowingMoveInstructions=__currentlyShowingMoveInstructions;
@property (nonatomic, setter=_setInitialArrowCenter:) struct CGPoint _initialArrowCenter; // @synthesize _initialArrowCenter=__initialArrowCenter;
@property (nonatomic, setter=_setInitialPaintingAcceleration:) double _initialPaintingAcceleration; // @synthesize _initialPaintingAcceleration=__initialPaintingAcceleration;
@property (readonly, nonatomic) UILabel *_instructionLabel; // @synthesize _instructionLabel=__instructionLabel;
@property (nonatomic, setter=_setLastLayoutBounds:) struct CGRect _lastLayoutBounds; // @synthesize _lastLayoutBounds=__lastLayoutBounds;
@property (readonly, nonatomic) CAMPanoramaLevelView *_levelView; // @synthesize _levelView=__levelView;
@property (readonly, nonatomic) UIView *_maskingView; // @synthesize _maskingView=__maskingView;
@property (readonly, nonatomic) double *_previousSpeeds; // @synthesize _previousSpeeds=__previousSpeeds;
@property (readonly, nonatomic) UIView *_stripBackgroundView; // @synthesize _stripBackgroundView=__stripBackgroundView;
@property (readonly, nonatomic) UIView *_stripContainerView; // @synthesize _stripContainerView=__stripContainerView;
@property (nonatomic) double currentOrientedAcceleration; // @synthesize currentOrientedAcceleration=_currentOrientedAcceleration;
@property (weak, nonatomic) id<CAMPanoramaViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long direction; // @synthesize direction=_direction;
@property (nonatomic, getter=isPainting) BOOL painting; // @synthesize painting=_painting;
@property (readonly, nonatomic) CAMPanoramaPreviewView *previewView; // @synthesize previewView=_previewView;

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_cancelDelayedMoveInstructions;
- (void)_hideArrowInstructionsAfterDelay;
- (void)_hideInstructionLabel;
- (void)_hideSpeedInstructionsAfterDelay;
- (void)_resetPaintingUIAnimated:(BOOL)arg1;
- (void)_setCurrentOrientedAcceleration:(double)arg1;
- (void)_setPainting:(BOOL)arg1;
- (void)_showArrowInstructions;
- (void)_showMoveDownInstructions;
- (void)_showMoveDownInstructionsAfterDelay;
- (void)_showMoveUpInstructions;
- (void)_showMoveUpInstructionsAfterDelay;
- (void)_showSpeedInstructions;
- (void)_updateInstructionLabelText:(id)arg1;
- (void)dealloc;
- (void)finishedProcessingPanorama;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithPanoramaPreviewView:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setDirection:(long long)arg1 animated:(BOOL)arg2;
- (void)startPainting;
- (void)startProcessingPanorama;
- (void)stopPainting;
- (void)updateOrientedAcceleration:(double)arg1;
- (void)updatePaintingWithStatus:(id)arg1;
- (void)updateToContentSize:(id)arg1;

@end
