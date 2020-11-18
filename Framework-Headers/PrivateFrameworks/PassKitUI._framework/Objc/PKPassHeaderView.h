//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKPass, PKPassView, PKPeerPaymentAccount, PKRemoteDataAccessor, PKTransitPassProperties, UIColor, UIImageView, UILabel;
@protocol PKPassHeaderViewDelegate, PKPassLibraryDataProvider;

@interface PKPassHeaderView : UIView
{
    PKRemoteDataAccessor *_remoteDataAccessor;
    UIView *_passMaskView;
    UIImageView *_maskShadow;
    UILabel *_title;
    UILabel *_type;
    UILabel *_modificationDate;
    UILabel *_valueTitle;
    UILabel *_value;
    BOOL _largeStyle;
    BOOL _showModificationDate;
    BOOL _valueLabelsShouldStack;
    PKPass *_pass;
    PKPassView *_passView;
    PKTransitPassProperties *_transitProperties;
    PKPeerPaymentAccount *_peerPaymentAccount;
    unsigned long long _suppressedContent;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
    id<PKPassHeaderViewDelegate> _delegate;
    id<PKPassLibraryDataProvider> _passLibraryOverride;
}

@property (weak, nonatomic) id<PKPassHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isLargeStyle) BOOL largeStyle; // @synthesize largeStyle=_largeStyle;
@property (readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property (strong, nonatomic) id<PKPassLibraryDataProvider> passLibraryOverride; // @synthesize passLibraryOverride=_passLibraryOverride;
@property (readonly, nonatomic) PKPassView *passView; // @synthesize passView=_passView;
@property (strong, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // @synthesize peerPaymentAccount=_peerPaymentAccount;
@property (strong, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property (strong, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property (nonatomic) BOOL showModificationDate; // @synthesize showModificationDate=_showModificationDate;
@property (nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property (strong, nonatomic) PKTransitPassProperties *transitProperties; // @synthesize transitProperties=_transitProperties;
@property (nonatomic) BOOL valueLabelsShouldStack; // @synthesize valueLabelsShouldStack=_valueLabelsShouldStack;

- (void).cxx_destruct;
- (void)_passLibraryDidChange:(id)arg1;
- (id)_primaryTextColor;
- (id)_secondaryTextColor;
- (void)_updateContent;
- (void)_updateTextContent;
- (void)dealloc;
- (id)initWithPass:(id)arg1;
- (void)layoutSubviews;
- (CDStruct_bc00259c)passSizeInfoForHeight:(double)arg1;
- (struct CGSize)passViewSizeForHeight:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)titleAndValueLabelCouldOverlapAtHeaderViewSize:(struct CGSize)arg1;
- (void)updateModifiedDate;
- (void)updateShadow:(double)arg1;

@end

