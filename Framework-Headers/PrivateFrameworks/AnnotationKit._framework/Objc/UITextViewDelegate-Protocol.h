//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/NSObject-Protocol.h>
#import <AnnotationKit/UIScrollViewDelegate-Protocol.h>

@class NSString, NSTextAttachment, NSURL, UITextView;

@protocol UITextViewDelegate <NSObject, UIScrollViewDelegate>

@optional
- (BOOL)textView:(UITextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (BOOL)textView:(UITextView *)arg1 shouldInteractWithTextAttachment:(NSTextAttachment *)arg2 inRange:(struct _NSRange)arg3;
- (BOOL)textView:(UITextView *)arg1 shouldInteractWithTextAttachment:(NSTextAttachment *)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (BOOL)textView:(UITextView *)arg1 shouldInteractWithURL:(NSURL *)arg2 inRange:(struct _NSRange)arg3;
- (BOOL)textView:(UITextView *)arg1 shouldInteractWithURL:(NSURL *)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)textViewDidBeginEditing:(UITextView *)arg1;
- (void)textViewDidChange:(UITextView *)arg1;
- (void)textViewDidChangeSelection:(UITextView *)arg1;
- (void)textViewDidEndEditing:(UITextView *)arg1;
- (BOOL)textViewShouldBeginEditing:(UITextView *)arg1;
- (BOOL)textViewShouldEndEditing:(UITextView *)arg1;
@end

