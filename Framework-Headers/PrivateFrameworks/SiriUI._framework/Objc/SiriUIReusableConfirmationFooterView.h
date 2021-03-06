//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIReusableFooterView.h>

@class SAUIConfirmationOptions, SiriUIContentButton, SiriUIKeyline, SiriUISnippetViewController, UIButton;

@interface SiriUIReusableConfirmationFooterView : SiriUIReusableFooterView
{
    SiriUIKeyline *_verticalKeyline;
    SiriUIContentButton *_cancelButton;
    SiriUIContentButton *_confirmButton;
    SiriUISnippetViewController *_snippetViewController;
    SAUIConfirmationOptions *_confirmationOptions;
}

@property (readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property (readonly, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property (strong, nonatomic) SAUIConfirmationOptions *confirmationOptions; // @synthesize confirmationOptions=_confirmationOptions;

+ (double)defaultHeight;
- (void).cxx_destruct;
- (struct UIEdgeInsets)edgeInsets;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSnippetViewController:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)snippetViewController;

@end

