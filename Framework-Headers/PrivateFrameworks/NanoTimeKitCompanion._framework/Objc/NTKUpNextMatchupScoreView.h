//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>

@class CLKFont, NSArray, NSDate, NSString, NTKColoringLabel, UIImageView, UILayoutGuide;
@protocol CLKMonochromeFilterProvider;

@interface NTKUpNextMatchupScoreView : UIView <CLKMonochromeComplicationView>
{
    UIImageView *_homeLogoImageView;
    NTKColoringLabel *_homeNameLabel;
    NTKColoringLabel *_homeDescriptionLabel;
    UIImageView *_awayLogoIamgeView;
    NTKColoringLabel *_awayNameLabel;
    NTKColoringLabel *_awayDescriptionLabel;
    NTKColoringLabel *_statusLabel;
    NTKColoringLabel *_timeLabel;
    NSDate *_timeForLabel;
    CLKFont *_boldMatchupFont;
    CLKFont *_regularMatchupFont;
    CLKFont *_statusFont;
    UILayoutGuide *_logoLayoutGuide;
    UILayoutGuide *_descriptionLayoutGuide;
    NSArray *_withLogoLayoutConstraints;
    NSArray *_withoutDateLayoutConstraints;
    BOOL _paused;
    id<CLKMonochromeFilterProvider> _filterProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (readonly) Class superclass;

+ (id)_timeStringForFetchDate:(id)arg1;
- (void).cxx_destruct;
- (void)configureWithMatchup:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)updateTimeLabel;

@end
