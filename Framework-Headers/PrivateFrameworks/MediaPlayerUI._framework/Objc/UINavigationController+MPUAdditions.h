//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface UINavigationController (MPUAdditions)
- (void)MPU_popToRootViewControllerAnimated:(BOOL)arg1;
- (void)MPU_popToViewController:(id)arg1 animated:(BOOL)arg2 popRequestSentCompletion:(CDUnknownBlockType)arg3;
- (void)MPU_popToViewControllerBeforeViewController:(id)arg1 animated:(BOOL)arg2;
- (void)MPU_pushViewController:(id)arg1 animated:(BOOL)arg2;
@end

