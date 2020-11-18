//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIFont, UILabel;

@interface RUILinkLabel : UIView
{
    UIButton *_linkButton;
    long long _textAlignment;
    BOOL _enabled;
    CDUnknownBlockType _action;
    UILabel *_textLabel;
}

@property (copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (readonly, nonatomic) UIButton *linkButton;
@property (nonatomic) long long numberOfLines;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;

- (void).cxx_destruct;
- (void)_linkPressed;
- (void)_resize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
