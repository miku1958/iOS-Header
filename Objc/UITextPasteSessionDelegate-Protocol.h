//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol UITextPasteSession;

@protocol UITextPasteSessionDelegate <NSObject>

@optional
- (void)textPasteSessionDidEndPasting:(id<UITextPasteSession>)arg1;
- (void)textPasteSessionDidRevealPasteResult:(id<UITextPasteSession>)arg1;
- (void)textPasteSessionWillBeginPasting:(id<UITextPasteSession>)arg1;
- (void)textPasteSessionWillHidePasteResult:(id<UITextPasteSession>)arg1;
@end

