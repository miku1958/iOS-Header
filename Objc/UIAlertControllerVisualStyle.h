//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIAlertControllerDescriptor, UIInterfaceActionVisualStyle, UITraitCollection;

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyle : NSObject
{
    UIAlertControllerDescriptor *_descriptor;
    long long _forcedInterfaceIdiom;
    UIInterfaceActionVisualStyle *_interfaceActionVisualStyle;
    UITraitCollection *_traitCollection;
}

@property (strong, nonatomic) UIAlertControllerDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property (nonatomic) long long forcedInterfaceIdiom; // @synthesize forcedInterfaceIdiom=_forcedInterfaceIdiom;
@property (readonly, nonatomic) UIInterfaceActionVisualStyle *interfaceActionVisualStyle; // @synthesize interfaceActionVisualStyle=_interfaceActionVisualStyle;
@property (strong, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;

+ (long long)interfaceActionPresentationStyle;
+ (void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5;
- (void).cxx_destruct;
- (id)_detailMessageFont;
- (id)_keyCommandInputForCancelAction;
- (double)_marginAboveDetailMessageFirstBaseline;
- (void)_reloadInterfaceActionVisualStyle;
- (double)_scaledMarginAboveDetailMessageFirstBaseline;
- (double)_scaledMarginAboveMessageLabelFirstBaseline;
- (double)_scaledMarginAboveTitleLabelFirstBaselineInAlertControllerView:(id)arg1;
- (double)_scaledMarginBelowLastLabelLastBaseline;
- (double)_scaledMarginBelowMessageLabelLastBaseline;
- (double)_scaledMarginBelowTitleLabelLastBaseline;
- (double)_scaledMessageSafeBaselineHeightInAlertControllerView:(id)arg1;
- (double)_scaledSafeBaselineHeightForLabelFont:(id)arg1 inAlertControllerView:(id)arg2;
- (double)_scaledTitleLabelSafeBaselineHeightInAlertControllerView:(id)arg1;
- (BOOL)_shouldReverseActions;
- (double)_spacingBetweenDismissButtonAndContent;
- (struct UIEdgeInsets)actionImageMarginForAction;
- (struct UIEdgeInsets)actionSequenceEdgeInsets;
- (double)actionWidthForMinimumActionWidth:(double)arg1;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (struct CGSize)collectionViewOutsetSize;
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;
- (double)contentHorizontalMargin;
- (struct UIEdgeInsets)contentInsets;
- (double)contentVerticalMargin;
- (id)defaultActionFont;
- (id)dimmingViewForAlertController:(id)arg1;
- (BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (id)init;
- (id)interactionProgressForTransitionOfType:(long long)arg1 forAlertController:(id)arg2;
- (Class)interfaceActionVisualStyleClassForManagingConcreteVisualStyle;
- (BOOL)isEqual:(id)arg1;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (double)maximumHeightForDisplayOnScreen:(id)arg1;
- (long long)maximumNumberOfLinesInMessageLabel;
- (long long)maximumNumberOfLinesInTitleLabel;
- (double)maximumWidth;
- (double)maximumWidthForTitleAndMessageContentView;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (struct CGSize)minimumActionContentSize;
- (double)minimumWidth;
- (long long)permittedActionLayoutDirection;
- (BOOL)placementAvoidsKeyboard;
- (id)preferredActionFont;
- (id)preferredActionForActions:(id)arg1 suggestedPreferredAction:(id)arg2;
- (id)regularActionFont;
- (BOOL)shouldOccludeDuringPresentation;
- (BOOL)shouldPreserveRespondersAcrossWindows;
- (id)textFieldContainingViewWithTextField:(id)arg1;
- (struct UIEdgeInsets)textFieldContentInset;
- (double)textFieldHorizontalMargin;
- (id)tintColorForAlertController:(id)arg1;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2;
- (BOOL)transitionOfType:(long long)arg1 shouldBeInteractiveForAlertController:(id)arg2;

@end

