//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/SUICFlamesViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, SUICFlamesView, UIColor, UILabel;

@interface HUWaveformView : UIView <SUICFlamesViewDelegate>
{
    UIColor *_waveformColor;
    NSMutableArray *_audioPowerLevels;
    UILabel *_timeLabel;
    double _minTimeLabelWidth;
    UIColor *_backgroundColor;
    NSMutableArray *_waveformSlices;
    SUICFlamesView *_flamesView;
}

@property (strong, nonatomic) NSMutableArray *audioPowerLevels; // @synthesize audioPowerLevels=_audioPowerLevels;
@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) SUICFlamesView *flamesView; // @synthesize flamesView=_flamesView;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minTimeLabelWidth; // @synthesize minTimeLabelWidth=_minTimeLabelWidth;
@property (readonly, nonatomic) NSArray *powerLevels;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property (strong, nonatomic) UIColor *waveformColor; // @synthesize waveformColor=_waveformColor;
@property (strong, nonatomic) NSMutableArray *waveformSlices; // @synthesize waveformSlices=_waveformSlices;

- (void).cxx_destruct;
- (void)appendPowerLevel:(double)arg1;
- (float)audioLevelForFlamesView:(id)arg1;
- (void)clearPowerLevels;
- (id)initWithFrame:(struct CGRect)arg1 waveformColor:(id)arg2 backgroundColor:(id)arg3;
- (void)layoutSubviews;

@end

