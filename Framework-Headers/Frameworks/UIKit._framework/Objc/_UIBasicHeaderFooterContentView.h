//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UIContentView-Protocol.h>

@class NSString, UILabel, _UIBasicHeaderFooterContentViewConfiguration;

@interface _UIBasicHeaderFooterContentView : UIView <_UIContentView>
{
    _UIBasicHeaderFooterContentViewConfiguration *_animatingFromConfiguration;
    _UIBasicHeaderFooterContentViewConfiguration *_animatingToConfiguration;
    double _preferredMaxLayoutWidth;
    _UIBasicHeaderFooterContentViewConfiguration *_configuration;
    UILabel *_textLabel;
}

@property (copy, nonatomic) _UIBasicHeaderFooterContentViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;

- (void).cxx_destruct;
- (id)_encodableSubviews;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets)arg1;
- (double)_multilineContextWidth;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (double)_preferredMaxLayoutWidth;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (void)_setMultilineContextWidth:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
