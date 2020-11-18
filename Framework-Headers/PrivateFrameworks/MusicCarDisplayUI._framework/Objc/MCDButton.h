//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer, NSString;

@interface MCDButton : UIButton
{
    CALayer *_focusColorLayer;
    BOOL _showBezelInTouch;
    NSString *_labelTemplateString;
}

@property (copy, nonatomic) NSString *labelTemplateString; // @synthesize labelTemplateString=_labelTemplateString;
@property (nonatomic, getter=isSelected) BOOL selected; // @dynamic selected;
@property (nonatomic) BOOL showBezelInTouch; // @synthesize showBezelInTouch=_showBezelInTouch;

+ (id)buttonWithType:(long long)arg1;
- (void).cxx_destruct;
- (id)_buttonBackGroundColorTouch;
- (void)_updateButtonStyle;
- (BOOL)canBecomeFocused;
- (id)colorForKnobContentSelected;
- (id)colorForKnobFocusLayer;
- (id)colorForKnobFocusLayerSelected;
- (id)colorForKnobFocused;
- (id)colorForTouchContentSelected;
- (id)colorForTouchFocusLayer;
- (id)colorForTouchFocusLayerSelected;
- (void)focusedViewDidChange;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;

@end

