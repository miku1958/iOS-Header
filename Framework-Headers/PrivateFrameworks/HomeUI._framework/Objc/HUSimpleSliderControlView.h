//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUControlView-Protocol.h>

@class NSString, UISlider;
@protocol HUControlViewDelegate;

@interface HUSimpleSliderControlView : UIView <HUControlView>
{
    NSString *_identifier;
    id<HUControlViewDelegate> _delegate;
    UISlider *_slider;
}

@property (nonatomic) BOOL canBeHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) float maxValue;
@property (nonatomic) float minValue;
@property (readonly, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property (readonly) Class superclass;
@property (strong, nonatomic) id value;

+ (Class)valueClass;
- (void).cxx_destruct;
- (void)_sliderTouchDown:(id)arg1;
- (void)_sliderTouchUp:(id)arg1;
- (void)_sliderValueChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

