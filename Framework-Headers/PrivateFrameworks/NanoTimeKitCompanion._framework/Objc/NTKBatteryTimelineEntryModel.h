//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@interface NTKBatteryTimelineEntryModel : NTKTimelineEntryModel
{
    float _level;
    long long _state;
}

@property (nonatomic) float level; // @synthesize level=_level;
@property (nonatomic) long long state; // @synthesize state=_state;

- (id)_levelTintColor;
- (id)_newCircularTemplateMedium:(BOOL)arg1;
- (id)_newExtraLargeTemplate;
- (id)_newModularSmallTemplate;
- (id)_newUtilitarianLargeTemplate;
- (id)_newUtilitarianSmallFlatTemplate;
- (id)_newUtilitarianSmallTemplate;
- (id)_ringTextProvider;
- (id)templateForComplicationFamily:(long long)arg1;

@end
