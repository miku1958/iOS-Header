//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/UITextInput-Protocol.h>

@class UITextRange;

@protocol _UITextInputRevealSupport <UITextInput>
- (struct _NSRange)_nsrangeForTextRange:(UITextRange *)arg1;
- (struct _NSRange)_selectedNSRange;
- (UITextRange *)_textRangeFromNSRange:(struct _NSRange)arg1;
@end

