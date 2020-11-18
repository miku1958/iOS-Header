//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentPreferenceCell.h>

@class NSString, UIButton;

@interface PKPaymentPreferenceButtonCell : PKPaymentPreferenceCell
{
    UIButton *_button;
    CDUnknownBlockType _handler;
    NSString *_buttonTitle;
}

@property (copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;

- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)pk_childrenForAppearance;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
