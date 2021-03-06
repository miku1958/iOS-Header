//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CAShapeLayer, NSString, UIImageView, UIView;
@protocol WFVariableConfigurationCellSizingDelegate;

@interface WFVariableConfigurationCell : UITableViewCell
{
    BOOL _showsSeparator;
    BOOL _roundsCorners;
    NSString *_titleText;
    NSString *_valueText;
    unsigned long long _roundedCorners;
    unsigned long long _accessory;
    id<WFVariableConfigurationCellSizingDelegate> _sizingDelegate;
    UIImageView *_disclosureImageView;
    CAShapeLayer *_maskLayer;
    UIView *_separatorView;
}

@property (nonatomic) unsigned long long accessory; // @synthesize accessory=_accessory;
@property (readonly, nonatomic) UIImageView *disclosureImageView; // @synthesize disclosureImageView=_disclosureImageView;
@property (readonly, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property (nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property (nonatomic) BOOL roundsCorners; // @synthesize roundsCorners=_roundsCorners;
@property (readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property (nonatomic) BOOL showsSeparator; // @synthesize showsSeparator=_showsSeparator;
@property (weak, nonatomic) id<WFVariableConfigurationCellSizingDelegate> sizingDelegate; // @synthesize sizingDelegate=_sizingDelegate;
@property (copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property (copy, nonatomic) NSString *valueText; // @synthesize valueText=_valueText;

+ (long long)cellStyle;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateMask;

@end

