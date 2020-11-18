//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

#import <LinkPresentation/LPContentInsettable-Protocol.h>
#import <LinkPresentation/LPTextStyleable-Protocol.h>

@class LPImageView, LPTextViewStyle, UILabel;

__attribute__((visibility("hidden")))
@interface LPTextView : LPComponentView <LPTextStyleable, LPContentInsettable>
{
    UILabel *_textView;
    struct UIEdgeInsets _contentInset;
    LPImageView *_glyphView;
    LPTextViewStyle *_style;
}

@property (readonly, strong, nonatomic) LPTextViewStyle *style;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (id)_createTextViewWithText:(id)arg1 style:(id)arg2;
- (struct UIEdgeInsets)_effectiveContentInset;
- (double)ascender;
- (double)descender;
- (double)firstLineLeading;
- (id)init;
- (id)initWithText:(id)arg1 style:(id)arg2;
- (void)layoutComponentView;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

