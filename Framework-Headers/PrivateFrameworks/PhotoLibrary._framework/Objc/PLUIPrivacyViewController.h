//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class _UIAccessDeniedView;

@interface PLUIPrivacyViewController : UIViewController
{
    BOOL _showingAccessDeniedView;
    _UIAccessDeniedView *_accessDeniedView;
}

- (void)_cancelButtonClicked:(id)arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)_showCancelButton;
- (void)_updateAccessDeniedView;
- (void)dealloc;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;

@end
