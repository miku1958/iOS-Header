//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKPassView, PKPaymentPass, PKPaymentSetupMoreInfoItem, PKTableHeaderView, UIImageView;

@interface PKPaymentSetupMoreInfoView : UIView
{
    PKPassView *_passView;
    PKPaymentSetupMoreInfoItem *_moreInfoItem;
    PKPaymentPass *_pass;
    long long _context;
    UIImageView *_customImageView;
    PKTableHeaderView *_headerView;
}

@property (readonly, nonatomic) long long context; // @synthesize context=_context;
@property (readonly, nonatomic) UIImageView *customImageView; // @synthesize customImageView=_customImageView;
@property (readonly, nonatomic) PKTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property (readonly, nonatomic) PKPaymentSetupMoreInfoItem *moreInfoItem; // @synthesize moreInfoItem=_moreInfoItem;
@property (readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;

- (void).cxx_destruct;
- (id)initWithMoreInfoItem:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3;
- (void)layoutSubviews;

@end

