//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UILabel;

@interface HKElectrocardiogramBulletedTextView : UIView
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    NSMutableArray *_bodyFirstBaselineConstraints;
}

@property (strong, nonatomic) NSMutableArray *bodyFirstBaselineConstraints; // @synthesize bodyFirstBaselineConstraints=_bodyFirstBaselineConstraints;
@property (strong, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property (readonly, nonatomic) NSString *detailText;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSString *titleText;

- (void).cxx_destruct;
- (void)_setUpUI;
- (void)_setupConstraints;
- (void)_updateLeadingDetailAttributedTextSize;
- (id)init;
- (void)setDetailTextWithBullets:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end

