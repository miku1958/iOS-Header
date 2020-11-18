//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface _UINavigationBarModernPromptView : UIView
{
    UILabel *_promptLabel;
    UIFont *_font;
    NSString *_prompt;
    UIColor *_textColor;
}

@property (copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property (readonly, nonatomic) double promptHeight;
@property (copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;

- (void).cxx_destruct;
- (void)_updatePromptLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

