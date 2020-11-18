//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISlider.h>

@class CALayer, CAShapeLayer, UIImageView, UISelectionFeedbackGenerator, _UIEdgeFeedbackGenerator;
@protocol AVTColorSliderDelegate;

@interface AVTColorSlider : UISlider
{
    BOOL _shouldTriggerFeedback;
    id<AVTColorSliderDelegate> _delegate;
    CALayer *_trackLayer;
    CAShapeLayer *_thumbClippingLayer;
    CALayer *_thumbContentLayer;
    CAShapeLayer *_thumbBorderLayer;
    UIImageView *_thumbView;
    _UIEdgeFeedbackGenerator *_edgeFeedbackGenerator;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    long long _layoutDirection;
}

@property (weak, nonatomic) id<AVTColorSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator; // @synthesize edgeFeedbackGenerator=_edgeFeedbackGenerator;
@property (nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property (strong, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // @synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator;
@property (nonatomic) BOOL shouldTriggerFeedback; // @synthesize shouldTriggerFeedback=_shouldTriggerFeedback;
@property (strong, nonatomic) CAShapeLayer *thumbBorderLayer; // @synthesize thumbBorderLayer=_thumbBorderLayer;
@property (strong, nonatomic) CAShapeLayer *thumbClippingLayer; // @synthesize thumbClippingLayer=_thumbClippingLayer;
@property (strong, nonatomic) CALayer *thumbContentLayer; // @synthesize thumbContentLayer=_thumbContentLayer;
@property (readonly, nonatomic) CALayer *thumbLayer;
@property (strong, nonatomic) UIImageView *thumbView; // @synthesize thumbView=_thumbView;
@property (strong, nonatomic) CALayer *trackLayer; // @synthesize trackLayer=_trackLayer;

- (void).cxx_destruct;
- (id)createThumbView;
- (id)currentMaximumTrackImage;
- (id)currentMinimumTrackImage;
- (id)initWithUserInterfaceLayoutDirection:(long long)arg1;
- (void)layoutSubviews;
- (void)relayoutSublayers;
- (void)removeTrackLayer:(id)arg1 animated:(BOOL)arg2;
- (void)setTrackLayer:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (void)valueDidChange:(id)arg1 forEvent:(id)arg2;

@end

