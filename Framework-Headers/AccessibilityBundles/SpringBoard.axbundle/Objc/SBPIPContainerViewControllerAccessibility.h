//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__SBPIPContainerViewControllerAccessibility_super.h"

@interface SBPIPContainerViewControllerAccessibility : __SBPIPContainerViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_announcementStringForQuadrant:(int)arg1;
- (BOOL)_axExpandPIPWindow;
- (BOOL)_axShrinkPIPWindow;
- (BOOL)_axStashPIPWindow;
- (void)_axTagSBInteractionPassThroughView;
- (void)_postAnnouncement:(id)arg1;
- (int)_quadrantForContentView;
- (BOOL)accessibilityActivate;
- (id)accessibilityCustomActions;
- (void)interactionControllerDidEndAllInteractions:(id)arg1;
- (void)loadView;
- (void)setNeedsLayoutForInteractionController:(id)arg1 traits:(unsigned long long)arg2 withReason:(unsigned long long)arg3 behavior:(int)arg4 completion:(CDUnknownBlockType)arg5;

@end

