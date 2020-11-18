//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@class CLKFont, NSArray, NSLayoutConstraint, NTKColoringLabel, NTKUpNextImageView, UILayoutGuide;

@interface NTKUpNextThumbnailCell : NTKUpNextBaseCell
{
    UILayoutGuide *_labelLayoutGuide;
    UILayoutGuide *_imageLayoutGuide;
    NTKUpNextImageView *_imageView;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_descriptionLine1Label;
    NTKColoringLabel *_descriptionLine2Label;
    NTKColoringLabel *_descriptionLine3Label;
    CLKFont *_standardFont;
    CLKFont *_italicFont;
    CLKFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSArray *_withDescription3Constraints;
    NSArray *_withoutDescription3Constraints;
    NSLayoutConstraint *_imageLayoutGuideWidthConstraint;
    NSLayoutConstraint *_imageLayoutGuideHeightConstraint;
    BOOL _showingHeader;
    BOOL _showingThirdLine;
    BOOL _showingSmallThumbnail;
}

+ (struct CGSize)suggestedBodyImageSizeForDevice:(id)arg1;
- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)updateConstraints;

@end

