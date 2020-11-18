//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SUViewControllerFactory;

@interface UIViewController (SUAdditions)

@property (readonly, nonatomic) BOOL shouldInvalidateForMemoryPurge;
@property (readonly, nonatomic, getter=isSkLoaded) BOOL skLoaded;
@property (readonly, nonatomic, getter=isSkLoading) BOOL skLoading;
@property (readonly, nonatomic) SUViewControllerFactory *viewControllerFactory;

- (id)_sectionForViewController:(id)arg1;
- (id)copyArchivableContext;
- (id)copyArchivableJetsamContext;
- (void)dismissAnimated:(BOOL)arg1;
- (void)iTunesStoreUI_dismissAction:(id)arg1;
- (BOOL)isDescendantOfViewController:(id)arg1;
- (BOOL)isInMoreList;
- (BOOL)isRootViewController;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)keyboardDidShowWithInfo:(id)arg1;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)parentViewControllerHierarchyDidChange;
- (void)resetRestoredContext;
- (void)restoreArchivableContext:(id)arg1;
- (id)section;
- (void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3;
@end
