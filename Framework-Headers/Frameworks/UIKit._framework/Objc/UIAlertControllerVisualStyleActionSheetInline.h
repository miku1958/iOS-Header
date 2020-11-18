//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertControllerVisualStyleActionSheet.h>

@class UIView, UIVisualEffectView, _UIPreviewPresentationEffectView;

__attribute__((visibility("hidden")))
@interface UIAlertControllerVisualStyleActionSheetInline : UIAlertControllerVisualStyleActionSheet
{
    BOOL _actionsReversed;
    UIView *_headerView;
    UIVisualEffectView *_revealEffectView;
    _UIPreviewPresentationEffectView *_sourceViewSnapshot;
}

@property (nonatomic) BOOL actionsReversed; // @synthesize actionsReversed=_actionsReversed;
@property (strong, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property (strong, nonatomic) UIVisualEffectView *revealEffectView; // @synthesize revealEffectView=_revealEffectView;
@property (strong, nonatomic) _UIPreviewPresentationEffectView *sourceViewSnapshot; // @synthesize sourceViewSnapshot=_sourceViewSnapshot;

+ (long long)interfaceActionPresentationStyle;
+ (void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5;
- (void).cxx_destruct;
- (double)_actionDescriptiveTextFontSize;
- (BOOL)_shouldReverseActions;
- (struct CGRect)_sourceRectForAlertController:(id)arg1 inContainerView:(id)arg2;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(BOOL)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)animateRevealOfAlertControllerView:(id)arg1 alertController:(id)arg2 inContainerView:(id)arg3 duration:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)dimmingViewForAlertController:(id)arg1;
- (BOOL)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (id)interactionProgressForTransitionOfType:(long long)arg1 forAlertController:(id)arg2;
- (double)minimumWidth;
- (long long)permittedActionLayoutDirection;
- (BOOL)placementAvoidsKeyboard;
- (BOOL)shouldOccludeDuringPresentation;
- (BOOL)shouldPreserveRespondersAcrossWindows;
- (id)tintColorForAlertController:(id)arg1;
- (double)transitionDurationForPresentation:(BOOL)arg1 ofAlertController:(id)arg2;
- (BOOL)transitionOfType:(long long)arg1 shouldBeInteractiveForAlertController:(id)arg2;

@end
