//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (PLNavigationControllerInterface)

@property (readonly, nonatomic) BOOL pl_isInPopover;

- (BOOL)pl_visitControllerHierarchyWithBlock:(CDUnknownBlockType)arg1;
- (void)revertStatusBarStyle:(long long)arg1 currentStatusBarStyle:(long long)arg2 animated:(BOOL)arg3;
- (long long)setStatusBarStyleForFullScreenViewAnimated:(BOOL)arg1 useTelephonyUI:(BOOL)arg2 canHideStatusBar:(BOOL)arg3 newStatusBarStyle:(long long *)arg4 navigationBarDidUpdate:(BOOL *)arg5;
- (int)uiipc_filterForMediaTypes:(id)arg1;
- (id)uiipc_imagePickerController;
- (id)uiipc_imagePickerOptions;
- (BOOL)uiipc_useTelephonyUI;
@end
