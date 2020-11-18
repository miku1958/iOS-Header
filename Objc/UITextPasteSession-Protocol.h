//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSAttributedString, UITextRange, _UIPositionedAttributedString;
@protocol UITextPasteAnimating, UITextPasteSessionDelegate;

@protocol UITextPasteSession <NSObject>

@property (weak, nonatomic) id<UITextPasteSessionDelegate> delegate;
@property (readonly, nonatomic) NSAttributedString *pasteResult;
@property (readonly, nonatomic, getter=isPastingBlocked) BOOL pastingBlocked;
@property (readonly, nonatomic) UITextRange *range;

- (void)pasteWithAnimator:(id<UITextPasteAnimating>)arg1;
- (_UIPositionedAttributedString *)positionedPasteResult;
@end
