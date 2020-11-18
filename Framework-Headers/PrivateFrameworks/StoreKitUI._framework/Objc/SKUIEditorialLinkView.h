//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, SKUIEditorialLinkLayout, UIColor;
@protocol SKUIEditorialLinkViewDelegate;

@interface SKUIEditorialLinkView : UIView
{
    NSMutableArray *_buttons;
    id<SKUIEditorialLinkViewDelegate> _delegate;
    UIColor *_highlightedTextColor;
    long long _horizontalAlignment;
    SKUIEditorialLinkLayout *_layout;
    UIColor *_textColor;
}

@property (weak, nonatomic) id<SKUIEditorialLinkViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property (strong, nonatomic) SKUIEditorialLinkLayout *linkLayout; // @synthesize linkLayout=_layout;

- (void).cxx_destruct;
- (void)_linkButtonAction:(id)arg1;
- (id)_newButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;

@end

