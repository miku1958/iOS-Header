//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoWeatherComplicationsCompanion/CLKFullColorImageView-Protocol.h>

@class CLKDevice, NSString, UILabel;
@protocol CLKMonochromeFilterProvider;

__attribute__((visibility("hidden")))
@interface NWCWindObservationsBaseView : UIView <CLKFullColorImageView>
{
    id<CLKMonochromeFilterProvider> _filterProvider;
    CLKDevice *_device;
    UILabel *_windDirectionAbbreviationLabel;
    UILabel *_windSpeedLabel;
    UILabel *_windUnitLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *windDirectionAbbreviationLabel; // @synthesize windDirectionAbbreviationLabel=_windDirectionAbbreviationLabel;
@property (strong, nonatomic) UILabel *windSpeedLabel; // @synthesize windSpeedLabel=_windSpeedLabel;
@property (strong, nonatomic) UILabel *windUnitLabel; // @synthesize windUnitLabel=_windUnitLabel;

- (void).cxx_destruct;
- (void)_applyConstraintsWithLayoutConstants:(CDStruct_8727d297)arg1;
- (void)_processWindSpeed:(id)arg1 unit:(id)arg2 directionAbbreviation:(id)arg3;
- (void)configureWithImageProvider:(id)arg1 reason:(long long)arg2;
- (id)initFullColorImageViewWithDevice:(id)arg1;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (long long)supportedComplicationFamily;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end

