//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDate, NSLayoutConstraint, NSString, UIFont, UIImage, UIImageView, UILabel;

@interface HKMedicalIDPersonSummaryCell : UITableViewCell
{
    UIImageView *_pictureView;
    UILabel *_nameLabel;
    UILabel *_birthdateLabel;
    UIFont *_nameLabelFont;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageGapConstraint;
    BOOL _resetFormatters;
    UIImage *_picture;
    NSString *_name;
    NSDate *_birthdate;
}

@property (strong, nonatomic) NSDate *birthdate; // @synthesize birthdate=_birthdate;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) UIImage *picture; // @synthesize picture=_picture;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_createConstraints;
- (double)_scaledValueForSmallWidth:(double)arg1 bigWidth:(double)arg2;
- (double)calculatedHeight;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)localeDidChange:(id)arg1;
- (void)updateSubviewsFromData;

@end
