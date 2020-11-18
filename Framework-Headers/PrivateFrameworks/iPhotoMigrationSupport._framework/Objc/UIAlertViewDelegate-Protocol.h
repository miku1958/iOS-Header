//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iPhotoMigrationSupport/NSObject-Protocol.h>

@class UIAlertView;

@protocol UIAlertViewDelegate <NSObject>

@optional
- (void)alertView:(UIAlertView *)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(UIAlertView *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(UIAlertView *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(UIAlertView *)arg1;
- (BOOL)alertViewShouldEnableFirstOtherButton:(UIAlertView *)arg1;
- (void)didPresentAlertView:(UIAlertView *)arg1;
- (void)willPresentAlertView:(UIAlertView *)arg1;
@end

