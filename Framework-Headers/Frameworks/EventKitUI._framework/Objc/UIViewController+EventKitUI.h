//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIWindow;

@interface UIViewController (EventKitUI)

@property (readonly, nonatomic) UIWindow *EKUI_window;
@property (readonly, nonatomic) BOOL isPresentedInsidePopover;

+ (id)eventDetailViewControllerWithEvent:(id)arg1 delegate:(id)arg2 context:(id)arg3;
+ (id)eventDetailViewControllerWithEvent:(id)arg1 delegate:(id)arg2 context:(id)arg3 allowInlinePreview:(BOOL)arg4 previewInline:(BOOL)arg5 minimalMode:(BOOL)arg6;
@end

