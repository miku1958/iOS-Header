//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUFeedCell.h>

#import <PhotosUI/UITextViewDelegate-Protocol.h>

@class NSString, UIButton, UITextView, UIView;

__attribute__((visibility("hidden")))
@interface PUFeedInvitationCell : PUFeedCell <UITextViewDelegate>
{
    NSString *_title;
    NSString *_inviterDisplayName;
    NSString *_inviteeDisplayName;
    BOOL _offerToReportAsJunk;
    UITextView *__textView;
    UIButton *__acceptButon;
    UIButton *__declineButton;
    UIView *__bottomSeparatorView;
}

@property (strong, nonatomic, setter=_setAcceptButton:) UIButton *_acceptButon; // @synthesize _acceptButon=__acceptButon;
@property (strong, nonatomic, setter=_setBottomSeparatorView:) UIView *_bottomSeparatorView; // @synthesize _bottomSeparatorView=__bottomSeparatorView;
@property (strong, nonatomic, setter=_setDeclineButton:) UIButton *_declineButton; // @synthesize _declineButton=__declineButton;
@property (strong, nonatomic, setter=_setTextView:) UITextView *_textView; // @synthesize _textView=__textView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_delegate;
- (void)_replyButtonAction:(id)arg1;
- (void)_reportJunkButtonAction:(id)arg1;
- (void)_updateTextView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1 inviterDisplayName:(id)arg2 inviteeDisplayName:(id)arg3 offerToReportAsJunk:(BOOL)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;

@end
