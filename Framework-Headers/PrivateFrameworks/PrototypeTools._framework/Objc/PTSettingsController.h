//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class UIBarButtonItem;

@interface PTSettingsController : UINavigationController
{
    UIBarButtonItem *_dismissButton;
}

@property (strong, nonatomic) UIBarButtonItem *dismissButton; // @synthesize dismissButton=_dismissButton;

- (void).cxx_destruct;
- (id)_defaultDismissButton;
- (void)_dismiss;
- (id)initWithRootModuleController:(id)arg1;
- (id)initWithRootSettings:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;

@end
