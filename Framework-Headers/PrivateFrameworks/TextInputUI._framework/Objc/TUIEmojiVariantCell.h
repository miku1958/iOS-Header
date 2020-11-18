//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class EMFEmojiToken, UILabel;

@interface TUIEmojiVariantCell : UIView
{
    BOOL _highlighted;
    UILabel *_labelView;
    UIView *_backgroundView;
    EMFEmojiToken *_emojiToken;
}

@property (readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, nonatomic) EMFEmojiToken *emojiToken; // @synthesize emojiToken=_emojiToken;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (readonly, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 token:(id)arg2;
- (void)layoutSubviews;

@end
