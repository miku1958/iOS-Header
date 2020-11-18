//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class UIView, UIViewController;

@protocol SXViewControllerPresenting <NSObject>

@property (readonly, nonatomic) UIViewController *controller;

- (void)popOrDismissViewControllerAnimated:(BOOL)arg1;
- (void)presentViewController:(UIViewController *)arg1 animated:(BOOL)arg2;
- (void)presentViewController:(UIViewController *)arg1 animated:(BOOL)arg2 sourceView:(UIView *)arg3 sourceRect:(struct CGRect)arg4;
@end
