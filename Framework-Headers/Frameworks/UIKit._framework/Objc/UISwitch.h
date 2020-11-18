//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/UISwitchControl-Protocol.h>
#import <UIKit/UISwitchVisualElementProvider-Protocol.h>

@class NSString, UIColor, UIImage, UISwitchVisualElement, _UIFeedbackImpactBehavior;

@interface UISwitch : UIControl <UISwitchControl, UISwitchVisualElementProvider, NSCoding>
{
    BOOL _on;
    BOOL _alwaysShowOnOffLabel;
    UIColor *_onTintColor;
    UIColor *_tintColor;
    UIColor *_thumbTintColor;
    UIImage *_onImage;
    UIImage *_offImage;
    UISwitchVisualElement *_visualElement;
}

@property (nonatomic, getter=_alwaysShowOnOffLabel, setter=_setAlwaysShowsOnOffLabel:) BOOL alwaysShowOnOffLabel; // @synthesize alwaysShowOnOffLabel=_alwaysShowOnOffLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic, getter=_impactFeedbackBehavior, setter=_setImpactFeedbackBehavior:) _UIFeedbackImpactBehavior *impactFeedbackBehavior;
@property (strong, nonatomic) UIImage *offImage; // @synthesize offImage=_offImage;
@property (nonatomic, getter=isOn) BOOL on; // @synthesize on=_on;
@property (strong, nonatomic) UIImage *onImage; // @synthesize onImage=_onImage;
@property (strong, nonatomic) UIColor *onTintColor; // @synthesize onTintColor=_onTintColor;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property (strong, nonatomic) UISwitchVisualElement *visualElement; // @synthesize visualElement=_visualElement;

+ (void)setVisualElementProvider:(id)arg1;
+ (id)visualElementForTraitCollection:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_encodeFrameWithCoder:(id)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_refreshVisualElement;
- (void)_refreshVisualElementForTraitCollection:(id)arg1;
- (void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(BOOL)arg2;
- (BOOL)_shouldAlterCodedFrame;
- (BOOL)_shouldShowOnOffLabels;
- (void)_showingOnOffLabelChanged;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2 notifyingVisualElement:(BOOL)arg3;
- (void)setSemanticContentAttribute:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)visualElement:(id)arg1 transitionedToOn:(BOOL)arg2;
- (void)visualElementHadTouchUpInside:(id)arg1;

@end
