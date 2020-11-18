//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertControllerVisualStyle.h>

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle
{
}

+ (long long)interfaceActionPresentationStyle;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (struct UIEdgeInsets)contentInsets;
- (id)defaultActionBackgroundColorWhenSeparate;
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
- (void)positionAlertControllerView:(id)arg1 ofAlertController:(id)arg2 inAvailableSpaceView:(id)arg3;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2;

@end

