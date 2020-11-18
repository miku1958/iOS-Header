//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NSArray, NSLayoutConstraint, UIImageView, UILabel;

@interface NTKWeatherWindRichComplicationCircularView : NTKRichComplicationCircularBaseView
{
    NSArray *_tickLayers;
    UIImageView *_directionImageView;
    UILabel *_dueNorthLabel;
    UILabel *_noDataLabel;
    UILabel *_windspeedLabel;
    UILabel *_windDirectionLabel;
    NSLayoutConstraint *_windspeedCenterYConstraint;
    NSLayoutConstraint *_windspeedFirstBaselineConstraint;
    NSLayoutConstraint *_windDirectionTopConstraint;
}

@property (strong, nonatomic) UIImageView *directionImageView; // @synthesize directionImageView=_directionImageView;
@property (strong, nonatomic) UILabel *dueNorthLabel; // @synthesize dueNorthLabel=_dueNorthLabel;
@property (strong, nonatomic) UILabel *noDataLabel; // @synthesize noDataLabel=_noDataLabel;
@property (strong, nonatomic) NSArray *tickLayers; // @synthesize tickLayers=_tickLayers;
@property (strong, nonatomic) UILabel *windDirectionLabel; // @synthesize windDirectionLabel=_windDirectionLabel;
@property (strong, nonatomic) NSLayoutConstraint *windDirectionTopConstraint; // @synthesize windDirectionTopConstraint=_windDirectionTopConstraint;
@property (strong, nonatomic) NSLayoutConstraint *windspeedCenterYConstraint; // @synthesize windspeedCenterYConstraint=_windspeedCenterYConstraint;
@property (strong, nonatomic) NSLayoutConstraint *windspeedFirstBaselineConstraint; // @synthesize windspeedFirstBaselineConstraint=_windspeedFirstBaselineConstraint;
@property (strong, nonatomic) UILabel *windspeedLabel; // @synthesize windspeedLabel=_windspeedLabel;

- (void).cxx_destruct;
- (void)_addConstraints;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)init;
- (void)layoutSubviews;

@end

