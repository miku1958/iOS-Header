//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKInlineNotificationView.h>

@class NSString, UIButton, UIView;

__attribute__((visibility("hidden")))
@interface CKTextInlineNotificationView : CKInlineNotificationView
{
    UIView *_contentView;
    UIButton *_textButton;
    UIView *_greyOutView;
}

@property (strong, nonatomic) UIView *greyOutView; // @synthesize greyOutView=_greyOutView;
@property (nonatomic) BOOL greyedOut; // @dynamic greyedOut;
@property (strong, nonatomic) NSString *text; // @dynamic text;
@property (strong, nonatomic) UIButton *textButton; // @synthesize textButton=_textButton;

- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_handleTouchDown:(id)arg1;
- (void)_handleTouchUpInside:(id)arg1;
- (void)_handleTouchUpOutside:(id)arg1;
- (id)contentView;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
