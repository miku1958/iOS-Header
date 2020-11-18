//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSCalendar, NSDateComponents, NSLayoutConstraint, NSNumber, NSString, UIFont, UIImage, UIImageView, UILabel, UIStackView;

@interface HKMedicalIDPersonSummaryCell : UITableViewCell
{
    UIImageView *_pictureView;
    UILabel *_nameLabel;
    UILabel *_birthdateLabel;
    UILabel *_organDonationLabel;
    UIStackView *_mainContainerView;
    UIStackView *_labelContainerView;
    UIFont *_nameLabelFont;
    NSLayoutConstraint *_pictureWidthAnchor;
    NSCalendar *_gregorianCalendar;
    BOOL _resetFormatters;
    UIImage *_picture;
    NSString *_name;
    NSDateComponents *_gregorianBirthday;
    NSNumber *_organDonationStatus;
}

@property (strong, nonatomic) NSDateComponents *gregorianBirthday; // @synthesize gregorianBirthday=_gregorianBirthday;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSNumber *organDonationStatus; // @synthesize organDonationStatus=_organDonationStatus;
@property (strong, nonatomic) UIImage *picture; // @synthesize picture=_picture;

- (void).cxx_destruct;
- (id)_cachedCalendar;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)localeDidChange:(id)arg1;
- (id)notOrganDonorString;
- (id)organDonorStringWithTemplate:(id)arg1;
- (void)timeZoneDidChange:(id)arg1;
- (void)updateSubviewsFromData;

@end
