//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__NTKFaceLibraryViewControllerAccessibility_super.h"

@interface NTKFaceLibraryViewControllerAccessibility : __NTKFaceLibraryViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityCustomActionsForPageAtIndex:(unsigned long long)arg1 forPageScrollViewController:(id)arg2;
- (id)_accessibilityHintForPageAtIndex:(unsigned long long)arg1 forPageScrollViewController:(id)arg2;
- (id)_accessibilityLabelForPageAtIndex:(unsigned long long)arg1 forPageScrollViewController:(id)arg2;
- (BOOL)_accessibilityShouldSwipeBetweenPagesForPageScrollViewController:(id)arg1;
- (id)_accessibilityValueForPageAtIndex:(unsigned long long)arg1 forPageScrollViewController:(id)arg2;
- (void)_activateAddFaceWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_axAddPageViewControllerIsActive;
- (BOOL)_axCanUseOverlayButton:(id)arg1;
- (BOOL)_axDeactivateAddFace;
- (BOOL)_axStartEditing;
- (void)_scrollToAndSetupFaceAtIndex:(unsigned long long)arg1 updateLibraryFaceCollection:(BOOL)arg2;
- (void)endInteractiveLibraryPresentation;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
