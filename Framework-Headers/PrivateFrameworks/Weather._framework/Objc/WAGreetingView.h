//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Weather/WATodayModelObserver-Protocol.h>

@class NSMutableArray, NSString, UIColor, UIImageView, UILabel, WATodayAutoupdatingLocationModel;

@interface WAGreetingView : UIView <WATodayModelObserver>
{
    BOOL _isViewCreated;
    WATodayAutoupdatingLocationModel *_todayModel;
    UILabel *_natualLanguageDescriptionLabel;
    UIImageView *_conditionImageView;
    UILabel *_temperatureLabel;
    NSMutableArray *_constraints;
    UIColor *_labelColor;
}

@property (strong, nonatomic) UIImageView *conditionImageView; // @synthesize conditionImageView=_conditionImageView;
@property (strong, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isViewCreated; // @synthesize isViewCreated=_isViewCreated;
@property (strong, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property (strong, nonatomic) UILabel *natualLanguageDescriptionLabel; // @synthesize natualLanguageDescriptionLabel=_natualLanguageDescriptionLabel;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
@property (strong, nonatomic) WATodayAutoupdatingLocationModel *todayModel; // @synthesize todayModel=_todayModel;

- (void).cxx_destruct;
- (id)_conditionsImage;
- (void)_setupWeatherModel;
- (void)_teardownWeatherModel;
- (id)_temperature;
- (void)createViews;
- (void)dealloc;
- (id)init;
- (id)initWithColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupConstraints;
- (void)startService;
- (void)todayModel:(id)arg1 forecastWasUpdated:(id)arg2;
- (void)todayModelWantsUpdate:(id)arg1;
- (void)updateConstraints;
- (void)updateLabelColors;
- (void)updateView;

@end

