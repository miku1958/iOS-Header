//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

@class LPButtonStyle, NSString, UIButton;

__attribute__((visibility("hidden")))
@interface LPCaptionBarButtonView : LPComponentView
{
    NSString *_caption;
    LPButtonStyle *_style;
    UIButton *_button;
}

- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)init;
- (id)initWithCaption:(id)arg1 style:(id)arg2;
- (void)layoutComponentView;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

