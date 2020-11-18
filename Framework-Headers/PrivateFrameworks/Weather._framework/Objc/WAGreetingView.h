//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor, UIImageView, UILabel, WATodayAutoupdatingLocationModel;

@interface WAGreetingView : UIView
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
@property (nonatomic) BOOL isViewCreated; // @synthesize isViewCreated=_isViewCreated;
@property (strong, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property (strong, nonatomic) UILabel *natualLanguageDescriptionLabel; // @synthesize natualLanguageDescriptionLabel=_natualLanguageDescriptionLabel;
@property (strong, nonatomic) UILabel *temperatureLabel; // @synthesize temperatureLabel=_temperatureLabel;
@property (strong, nonatomic) WATodayAutoupdatingLocationModel *todayModel; // @synthesize todayModel=_todayModel;

- (void).cxx_destruct;
- (id)_conditionsImage;
- (id)_temperature;
- (void)createViews;
- (void)dealloc;
- (id)init;
- (id)initWithColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupConstraints;
- (void)startService;
- (void)updateConstraints;
- (void)updateLabelColors;
- (void)updateView;

@end

