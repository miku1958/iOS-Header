//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFNavigationBarURLButton;

@protocol _SFNavigationBarURLButtonDelegate <NSObject>
- (void)navigationBarURLButtonDidReceiveCopyCommand:(_SFNavigationBarURLButton *)arg1;
- (void)navigationBarURLButtonDidReceivePasteCommand:(_SFNavigationBarURLButton *)arg1;
- (BOOL)navigationBarURLButtonShouldCopy:(_SFNavigationBarURLButton *)arg1;
- (BOOL)navigationBarURLButtonShouldPaste:(_SFNavigationBarURLButton *)arg1;
@end

