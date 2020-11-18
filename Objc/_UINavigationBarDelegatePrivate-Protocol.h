//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationBarDelegate-Protocol.h>

@class UINavigationBar, UINavigationItem, UISearchController;
@protocol UIViewControllerTransitionCoordinator;

@protocol _UINavigationBarDelegatePrivate <UINavigationBarDelegate>

@optional
- (double)_customNavigationTransitionDuration;
- (BOOL)_hasInterruptibleNavigationTransition;
- (struct CGRect)_incomingNavigationBarFrame;
- (BOOL)_isInteractiveCustomNavigationTransition;
- (struct NSDirectionalEdgeInsets)_layoutMarginsforNavigationBar:(UINavigationBar *)arg1;
- (void)_navigationBarChangedSize:(UINavigationBar *)arg1;
- (void)_navigationBarDidChangeStyle:(UINavigationBar *)arg1;
- (void)_navigationBarDidEndAnimation:(UINavigationBar *)arg1;
- (BOOL)_navigationBarShouldUpdateProgress;
- (void)_navigationBarWillBeginCoordinatedTransitionAnimations:(UINavigationBar *)arg1;
- (void)_navigationItemDidUpdateSearchController:(UINavigationItem *)arg1 oldSearchController:(UISearchController *)arg2;
- (BOOL)_shouldCrossFadeNavigationBar;
- (id<UIViewControllerTransitionCoordinator>)_transitionCoordinator;
- (void)_updatePaletteConstraints;
- (void)_updatePalettesWithBlock:(void (^)(_UINavigationControllerPalette *))arg1;
- (BOOL)_willPerformCustomNavigationTransitionForPop;
- (BOOL)_willPerformCustomNavigationTransitionForPush;
- (BOOL)enableBackButtonDuringTransition;
- (BOOL)isNavigationBarHidden;
- (void)navigationBarDidChangeOpacity:(UINavigationBar *)arg1;
- (void)navigationBarDidResizeForPrompt:(UINavigationBar *)arg1;
@end

