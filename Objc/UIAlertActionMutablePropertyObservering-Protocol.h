//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UIAlertAction, UIColor;

@protocol UIAlertActionMutablePropertyObservering <NSObject>
- (void)_action:(UIAlertAction *)arg1 changedToBePreferred:(BOOL)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToChecked:(BOOL)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToEnabled:(BOOL)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToTitle:(NSString *)arg2;
- (void)_action:(UIAlertAction *)arg1 changedToTitleTextAlignment:(long long)arg2;
- (void)_action:(UIAlertAction *)arg1 updatedImageTintColor:(UIColor *)arg2;
- (void)_action:(UIAlertAction *)arg1 updatedTitleTextColor:(UIColor *)arg2;
@end

