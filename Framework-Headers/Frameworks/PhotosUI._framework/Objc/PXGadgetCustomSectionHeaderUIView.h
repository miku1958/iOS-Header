//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetSectionHeaderUIView.h>

@class UIButton, UIImageView, UILabel;

@interface PXGadgetCustomSectionHeaderUIView : PXGadgetSectionHeaderUIView
{
    UILabel *_appleInternalLabel;
    UIButton *_infoButton;
    UIImageView *_iconImageView;
    UILabel *_iconTitleLabel;
}

@property (strong, nonatomic) UILabel *appleInternalLabel; // @synthesize appleInternalLabel=_appleInternalLabel;
@property (strong, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property (strong, nonatomic) UILabel *iconTitleLabel; // @synthesize iconTitleLabel=_iconTitleLabel;
@property (strong, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;

+ (id)_appleInternalLabelText;
+ (double)_preferredHeightOfAppleInternalTextWithWidth:(double)arg1;
+ (double)preferredHeightForText:(id)arg1 buttonType:(unsigned long long)arg2 fittingWidth:(double)arg3 style:(unsigned long long)arg4 dividerHidden:(BOOL)arg5;
- (void).cxx_destruct;
- (void)_infoButtonSelected;
- (void)configureTitleLabel:(id)arg1;
- (void)layoutSubviews;

@end

