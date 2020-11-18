//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTableFooterView.h>

@class UIButton;

@interface PKPaymentSetupCardDetailsFooterView : PKTableFooterView
{
    long long _context;
    UIButton *_manualEntryButton;
    UIButton *_setupLaterButton;
}

@property (nonatomic) long long context; // @synthesize context=_context;
@property (strong, nonatomic) UIButton *manualEntryButton; // @synthesize manualEntryButton=_manualEntryButton;
@property (strong, nonatomic) UIButton *setupLaterButton; // @synthesize setupLaterButton=_setupLaterButton;

- (void).cxx_destruct;
- (struct CGSize)_sizeForButton:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 context:(long long)arg2;
- (BOOL)isBuddyiPad;
- (void)layoutSubviews;
- (void)setButtonsEnabled:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

