//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <JITAppKit/UITextFieldDelegate-Protocol.h>

@class MCLTextField, NSString;

@protocol MCLTextFieldDelegate <UITextFieldDelegate>

@optional
- (struct CGRect)textField:(MCLTextField *)arg1 borderRect:(struct CGRect)arg2 bounds:(struct CGRect)arg3;
- (BOOL)textField:(MCLTextField *)arg1 canPerformAction:(NSString *)arg2 withSender:(id)arg3 defaultValue:(BOOL)arg4;
- (struct CGRect)textField:(MCLTextField *)arg1 clearButtonRect:(struct CGRect)arg2 bounds:(struct CGRect)arg3;
- (struct CGRect)textField:(MCLTextField *)arg1 editingRect:(struct CGRect)arg2 bounds:(struct CGRect)arg3;
- (struct CGRect)textField:(MCLTextField *)arg1 leftViewRect:(struct CGRect)arg2 bounds:(struct CGRect)arg3;
- (struct CGRect)textField:(MCLTextField *)arg1 placeholderRect:(struct CGRect)arg2 bounds:(struct CGRect)arg3;
- (struct CGRect)textField:(MCLTextField *)arg1 rightViewRect:(struct CGRect)arg2 bounds:(struct CGRect)arg3;
- (struct CGRect)textField:(MCLTextField *)arg1 textRect:(struct CGRect)arg2 bounds:(struct CGRect)arg3;
@end

