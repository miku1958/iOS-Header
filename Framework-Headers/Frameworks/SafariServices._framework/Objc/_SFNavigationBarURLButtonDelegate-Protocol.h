//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSString, UIGestureRecognizer, _SFNavigationBarURLButton;

@protocol _SFNavigationBarURLButtonDelegate <NSObject>
- (BOOL)navigationBarURLButton:(_SFNavigationBarURLButton *)arg1 shouldAllowLongPressAtPoint:(struct CGPoint)arg2;
- (BOOL)navigationBarURLButton:(_SFNavigationBarURLButton *)arg1 shouldShowMenuForGestureWithRecognizer:(UIGestureRecognizer *)arg2;
- (void)navigationBarURLButtonDidReceiveCopyCommand:(_SFNavigationBarURLButton *)arg1;
- (void)navigationBarURLButtonDidReceivePasteCommand:(_SFNavigationBarURLButton *)arg1;
- (BOOL)navigationBarURLButtonShouldCopy:(_SFNavigationBarURLButton *)arg1;
- (BOOL)navigationBarURLButtonShouldPaste:(_SFNavigationBarURLButton *)arg1;
- (NSString *)textForNavigationBarURLButton:(_SFNavigationBarURLButton *)arg1;
@end
