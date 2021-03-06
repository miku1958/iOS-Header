//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class VUIButtonLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIUpsellOfferTransactionViewLayout : TVViewLayout
{
    VUITextLayout *_disclaimerTextLayout;
    VUIButtonLayout *_buttonLayout;
}

@property (readonly, nonatomic) VUIButtonLayout *buttonLayout; // @synthesize buttonLayout=_buttonLayout;
@property (readonly, nonatomic) VUITextLayout *disclaimerTextLayout; // @synthesize disclaimerTextLayout=_disclaimerTextLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
- (void).cxx_destruct;
- (void)_configureLayout;
- (double)buttonHeight;
- (double)buttonSpacing;
- (double)disclaimerBottomMargin;
- (id)init;
- (struct UIEdgeInsets)safeAreaInsetsPad;
- (struct UIEdgeInsets)safeAreaInsetsPhone;

@end

