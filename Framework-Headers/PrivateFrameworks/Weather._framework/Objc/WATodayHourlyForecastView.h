//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, UIImage, UIImageView, UILabel, UIVisualEffectView;

@interface WATodayHourlyForecastView : UIView
{
    UIVisualEffectView *_temperatureLabelVisualEffectView;
    UIVisualEffectView *_timeLabelVisualEffectView;
    UILabel *_temperatureLabel;
    UILabel *_timeLabel;
    UIImageView *_conditionsImageView;
    NSArray *_constraints;
}

@property (strong, nonatomic) UIImage *conditionsImage;
@property (strong, nonatomic) UIImageView *conditionsImageView; // @synthesize conditionsImageView=_conditionsImageView;
@property (strong, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property (copy, nonatomic) NSAttributedString *temperature;
@property (strong, nonatomic) UILabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
@property (strong, nonatomic) UIVisualEffectView *temperatureLabelVisualEffectView; // @synthesize temperatureLabelVisualEffectView=_temperatureLabelVisualEffectView;
@property (copy, nonatomic) NSAttributedString *time;
@property (strong, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property (strong, nonatomic) UIVisualEffectView *timeLabelVisualEffectView; // @synthesize timeLabelVisualEffectView=_timeLabelVisualEffectView;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)applyVibrancyToTimeWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

