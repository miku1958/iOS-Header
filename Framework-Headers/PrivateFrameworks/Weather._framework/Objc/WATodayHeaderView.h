//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel, UIVisualEffectView;

@interface WATodayHeaderView : UIView
{
    NSString *_conditionsLine1;
    NSString *_conditionsLine2;
    UIImage *_conditionsImage;
    NSString *_temperature;
    NSString *_temperatureHigh;
    NSString *_temperatureLow;
    NSString *_locationName;
    UIVisualEffectView *_weatherInformationVisualEffectView;
    UILabel *_locationLabel;
    UILabel *_conditionsLabel1;
    UILabel *_conditionsLabel2;
    UIImageView *_conditionsImageView;
    UILabel *_temperatureLabel;
    UILabel *_temperatureHighLowLabel;
    double _pageFontSize;
    double _pageDegreeFontSize;
    double _pageBaselineOffset;
}

@property (copy, nonatomic) UIImage *conditionsImage; // @synthesize conditionsImage=_conditionsImage;
@property (strong, nonatomic) UIImageView *conditionsImageView; // @synthesize conditionsImageView=_conditionsImageView;
@property (strong, nonatomic) UILabel *conditionsLabel1; // @synthesize conditionsLabel1=_conditionsLabel1;
@property (strong, nonatomic) UILabel *conditionsLabel2; // @synthesize conditionsLabel2=_conditionsLabel2;
@property (copy, nonatomic) NSString *conditionsLine1; // @synthesize conditionsLine1=_conditionsLine1;
@property (copy, nonatomic) NSString *conditionsLine2; // @synthesize conditionsLine2=_conditionsLine2;
@property (strong, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property (copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property (nonatomic) double pageBaselineOffset; // @synthesize pageBaselineOffset=_pageBaselineOffset;
@property (nonatomic) double pageDegreeFontSize; // @synthesize pageDegreeFontSize=_pageDegreeFontSize;
@property (nonatomic) double pageFontSize; // @synthesize pageFontSize=_pageFontSize;
@property (copy, nonatomic) NSString *temperature; // @synthesize temperature=_temperature;
@property (copy, nonatomic) NSString *temperatureHigh; // @synthesize temperatureHigh=_temperatureHigh;
@property (strong, nonatomic) UILabel *temperatureHighLowLabel; // @synthesize temperatureHighLowLabel=_temperatureHighLowLabel;
@property (strong, nonatomic) UILabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
@property (copy, nonatomic) NSString *temperatureLow; // @synthesize temperatureLow=_temperatureLow;
@property (strong, nonatomic) UIVisualEffectView *weatherInformationVisualEffectView; // @synthesize weatherInformationVisualEffectView=_weatherInformationVisualEffectView;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateContent;
- (id)init;

@end

