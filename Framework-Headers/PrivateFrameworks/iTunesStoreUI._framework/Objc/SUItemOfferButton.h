//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface SUItemOfferButton : UIButton
{
    long long _animationHorizontalAlignment;
    NSString *_buttonStyle;
    NSString *_confirmationTitle;
    BOOL _isShowingConfirmation;
    NSString *_offerTitle;
    BOOL _shouldShowConfirmation;
}

@property (nonatomic) long long animationHorizontalAlignment; // @synthesize animationHorizontalAlignment=_animationHorizontalAlignment;
@property (copy, nonatomic) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property (copy, nonatomic) NSString *itemOfferButtonStyle; // @synthesize itemOfferButtonStyle=_buttonStyle;
@property (copy, nonatomic) NSString *offerTitle; // @synthesize offerTitle=_offerTitle;
@property (nonatomic) BOOL shouldShowConfirmation; // @synthesize shouldShowConfirmation=_shouldShowConfirmation;
@property (nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation; // @synthesize showingConfirmation=_isShowingConfirmation;

+ (double)defaultAnimationDuration;
+ (id)itemOfferButtonStyleForItem:(id)arg1 offer:(id)arg2;
- (void)_applyConfiguration:(CDStruct_f9159201)arg1;
- (CDStruct_f9159201)_configurationForStyle:(id)arg1;
- (void)_reloadButton;
- (BOOL)configureForItem:(id)arg1 offer:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setShowingConfirmation:(BOOL)arg1 duration:(double)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

