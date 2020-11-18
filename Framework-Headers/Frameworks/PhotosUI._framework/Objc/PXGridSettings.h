//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXGridSettings : PXSettings
{
    BOOL _disableSelectionOverlayView;
    BOOL _enableAutomaticTransitionToSelectMode;
    BOOL _simulateLongTitles;
    long long _weightingScheme;
    long long _simulatedNumberOfLocations;
}

@property (nonatomic) BOOL disableSelectionOverlayView; // @synthesize disableSelectionOverlayView=_disableSelectionOverlayView;
@property (nonatomic) BOOL enableAutomaticTransitionToSelectMode; // @synthesize enableAutomaticTransitionToSelectMode=_enableAutomaticTransitionToSelectMode;
@property (nonatomic) BOOL simulateLongTitles; // @synthesize simulateLongTitles=_simulateLongTitles;
@property (nonatomic) long long simulatedNumberOfLocations; // @synthesize simulatedNumberOfLocations=_simulatedNumberOfLocations;
@property (nonatomic) long long weightingScheme; // @synthesize weightingScheme=_weightingScheme;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (id)parentSettings;
- (void)setDefaultValues;

@end
