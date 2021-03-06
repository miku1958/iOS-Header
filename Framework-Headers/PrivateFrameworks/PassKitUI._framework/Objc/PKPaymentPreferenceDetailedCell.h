//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentPreferenceCell.h>

@class PKPaymentPreferenceDetailedCellTextField;

@interface PKPaymentPreferenceDetailedCell : PKPaymentPreferenceCell
{
    PKPaymentPreferenceDetailedCellTextField *_textField;
    BOOL _isLeftToRight;
    double _minimumCellHeight;
    BOOL _inlineEditingEnabled;
    double _leadingOffset;
}

@property (nonatomic) BOOL inlineEditingEnabled; // @synthesize inlineEditingEnabled=_inlineEditingEnabled;
@property (nonatomic) double leadingOffset; // @synthesize leadingOffset=_leadingOffset;
@property (nonatomic) double minimumCellHeight; // @synthesize minimumCellHeight=_minimumCellHeight;
@property (readonly, nonatomic) PKPaymentPreferenceDetailedCellTextField *textField; // @synthesize textField=_textField;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)prepareForReuse;
- (void)showTextField:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

