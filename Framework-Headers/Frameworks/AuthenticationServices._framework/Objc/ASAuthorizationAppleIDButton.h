//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAFilter;

@interface ASAuthorizationAppleIDButton : UIControl
{
    long long _type;
    long long _style;
    CAFilter *_highlightFilter;
    double _cornerRadius;
}

@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;

+ (id)buttonWithType:(long long)arg1 style:(long long)arg2;
+ (double)defaultCornerRadius;
+ (Class)layerClass;
- (void).cxx_destruct;
- (long long)_ak_buttonStyle;
- (long long)_ak_buttonType;
- (void)_createHighlightFilterIfNecessary;
- (void)_drawRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)_performAnimationToSetHighlighted:(BOOL)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)drawRect:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAuthorizationButtonType:(long long)arg1 authorizationButtonStyle:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;

@end
