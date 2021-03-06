//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class NSString, UITextField;

@protocol UITextFieldDelegate <NSObject>

@optional
- (BOOL)textField:(UITextField *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)textFieldDidBeginEditing:(UITextField *)arg1;
- (void)textFieldDidChangeSelection:(UITextField *)arg1;
- (void)textFieldDidEndEditing:(UITextField *)arg1;
- (void)textFieldDidEndEditing:(UITextField *)arg1 reason:(long long)arg2;
- (BOOL)textFieldShouldBeginEditing:(UITextField *)arg1;
- (BOOL)textFieldShouldClear:(UITextField *)arg1;
- (BOOL)textFieldShouldEndEditing:(UITextField *)arg1;
- (BOOL)textFieldShouldReturn:(UITextField *)arg1;
@end

