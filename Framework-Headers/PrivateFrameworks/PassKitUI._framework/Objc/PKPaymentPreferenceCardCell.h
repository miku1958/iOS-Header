//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentPreferenceCell.h>

@class NSString, PKPassSnapshotter, PKPaymentPass, UIColor, UIImageView, UILabel, UIStackView;

@interface PKPaymentPreferenceCardCell : PKPaymentPreferenceCell
{
    BOOL _isRightToLeft;
    UILabel *_displayLabel;
    UIImageView *_cardArtView;
    UIStackView *_stackView;
    BOOL _showBillingAddress;
    BOOL _dimCardArt;
    PKPaymentPass *_pass;
    PKPassSnapshotter *_passSnapshotter;
    UIColor *_mainLabelColor;
    UIColor *_subTextLabelColor;
    UIColor *_disabledMainLabelColor;
    UIColor *_disabledSubTextLabelColor;
    UILabel *_censoredPANLabel;
    NSString *_availabilityString;
}

@property (copy, nonatomic) NSString *availabilityString; // @synthesize availabilityString=_availabilityString;
@property (readonly, nonatomic) UILabel *censoredPANLabel; // @synthesize censoredPANLabel=_censoredPANLabel;
@property (nonatomic) BOOL dimCardArt; // @synthesize dimCardArt=_dimCardArt;
@property (strong, nonatomic) UIColor *disabledMainLabelColor; // @synthesize disabledMainLabelColor=_disabledMainLabelColor;
@property (strong, nonatomic) UIColor *disabledSubTextLabelColor; // @synthesize disabledSubTextLabelColor=_disabledSubTextLabelColor;
@property (strong, nonatomic) UIColor *mainLabelColor; // @synthesize mainLabelColor=_mainLabelColor;
@property (strong, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (strong, nonatomic) PKPassSnapshotter *passSnapshotter; // @synthesize passSnapshotter=_passSnapshotter;
@property (nonatomic) BOOL showBillingAddress; // @synthesize showBillingAddress=_showBillingAddress;
@property (strong, nonatomic) UIColor *subTextLabelColor; // @synthesize subTextLabelColor=_subTextLabelColor;

+ (double)textOffset;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_updateCellContent;
- (void)_updateLabelTextColors;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)pk_applyAppearance:(id)arg1;
- (void)prepareForReuse;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setHasError:(BOOL)arg1;

@end

