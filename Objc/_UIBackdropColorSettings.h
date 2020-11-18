//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor, _UIBackdropViewSettings;

@interface _UIBackdropColorSettings : NSObject
{
    BOOL _hasObservedValues;
    double _averageHue;
    double _averageSaturation;
    double _averageBrightness;
    double _contrast;
    _UIBackdropViewSettings *_parentSettings;
    double _previousAverageHue;
    double _previousAverageSaturation;
    double _previousAverageBrightness;
    double _previousContrast;
}

@property (nonatomic) double averageBrightness; // @synthesize averageBrightness=_averageBrightness;
@property (nonatomic) double averageHue; // @synthesize averageHue=_averageHue;
@property (nonatomic) double averageSaturation; // @synthesize averageSaturation=_averageSaturation;
@property (readonly, nonatomic) UIColor *color; // @dynamic color;
@property (nonatomic) double contrast; // @synthesize contrast=_contrast;
@property (nonatomic) BOOL hasObservedValues; // @synthesize hasObservedValues=_hasObservedValues;
@property (nonatomic) _UIBackdropViewSettings *parentSettings; // @synthesize parentSettings=_parentSettings;
@property (nonatomic) double previousAverageBrightness; // @synthesize previousAverageBrightness=_previousAverageBrightness;
@property (nonatomic) double previousAverageHue; // @synthesize previousAverageHue=_previousAverageHue;
@property (nonatomic) double previousAverageSaturation; // @synthesize previousAverageSaturation=_previousAverageSaturation;
@property (nonatomic) double previousContrast; // @synthesize previousContrast=_previousContrast;

- (BOOL)applyCABackdropLayerStatistics:(id)arg1;
- (void)setDefaultValues;
- (void)setValuesFromModel:(id)arg1;

@end
