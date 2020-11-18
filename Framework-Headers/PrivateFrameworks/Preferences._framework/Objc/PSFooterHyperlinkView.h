//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Preferences/PSHeaderFooterView-Protocol.h>
#import <Preferences/UITextViewDelegate-Protocol.h>

@class NSString, NSURL, UIImageView, UITextView;

@interface PSFooterHyperlinkView : UIView <PSHeaderFooterView, UITextViewDelegate>
{
    UITextView *_textView;
    NSString *_text;
    NSURL *_URL;
    struct _NSRange _linkRange;
    id _target;
    SEL _action;
    UIImageView *_iconView;
}

@property (strong) NSURL *URL;
@property SEL action; // @synthesize action=_action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) UIImageView *iconView; // @synthesize iconView=_iconView;
@property struct _NSRange linkRange;
@property (readonly) Class superclass;
@property (weak) id target; // @synthesize target=_target;
@property (strong) NSString *text;

- (void).cxx_destruct;
- (void)_linkify;
- (id)initWithSpecifier:(id)arg1;
- (BOOL)isValidLinkRange;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct UIEdgeInsets)textInsets;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;

@end

