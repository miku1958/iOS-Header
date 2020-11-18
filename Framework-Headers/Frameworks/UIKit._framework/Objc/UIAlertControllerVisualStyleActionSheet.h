//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIAlertControllerVisualStyle.h>

@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle
{
}

+ (long long)interfaceActionPresentationStyle;
+ (void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5;
- (double)_spacingBetweenDismissButtonAndContent;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (struct UIEdgeInsets)contentInsetsForContainerView:(id)arg1;
- (BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (double)maximumWidth;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (long long)permittedActionLayoutDirection;
- (BOOL)placementAvoidsKeyboard;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2;
- (id)vibrancyEffectForTitleAndMessageLabel;

@end
