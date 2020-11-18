//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPeerPaymentContactResolverDelegate-Protocol.h>

@class NSString, PKPaymentPass, PKPaymentTransaction, PKPeerPaymentContactResolver, PKStackedTextItemGroup, PKStackedTextItemGroupView, PKTransitPassProperties, UIImageView;

@interface PKFooterTransactionView : UIView <PKPeerPaymentContactResolverDelegate>
{
    PKStackedTextItemGroup *_displayItem;
    PKStackedTextItemGroupView *_headerView;
    UIView *_separatorView;
    PKStackedTextItemGroupView *_contentView;
    UIImageView *_imageView;
    BOOL _animated;
    unsigned long long _deferUpdateCounter;
    BOOL _needsContentUpdate;
    PKPaymentPass *_pass;
    PKPaymentTransaction *_transaction;
    PKTransitPassProperties *_transitProperties;
    PKPeerPaymentContactResolver *_peerPaymentContactResolver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (readonly, nonatomic) PKPeerPaymentContactResolver *peerPaymentContactResolver; // @synthesize peerPaymentContactResolver=_peerPaymentContactResolver;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
@property (readonly, nonatomic) PKTransitPassProperties *transitProperties; // @synthesize transitProperties=_transitProperties;

- (void).cxx_destruct;
- (BOOL)_deemphasizeAmount;
- (id)_image;
- (id)_locationText;
- (id)_merchantText;
- (id)_peerPaymentCounterpart;
- (id)_relativeDateText;
- (id)_statusText;
- (BOOL)_strikethroughAmount;
- (void)_updateContentAnimated:(BOOL)arg1;
- (void)beginUpdates;
- (void)contactsDidChangeForContactResolver:(id)arg1;
- (void)endUpdates:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1 peerPaymentContactResolver:(id)arg2;
- (void)layoutIfNeededAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setPass:(id)arg1 animated:(BOOL)arg2;
- (void)setTransaction:(id)arg1 animated:(BOOL)arg2;
- (void)setTransitProperties:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

