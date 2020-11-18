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
    long long _weightingScheme;
}

@property (nonatomic) BOOL disableSelectionOverlayView; // @synthesize disableSelectionOverlayView=_disableSelectionOverlayView;
@property (nonatomic) BOOL enableAutomaticTransitionToSelectMode; // @synthesize enableAutomaticTransitionToSelectMode=_enableAutomaticTransitionToSelectMode;
@property (nonatomic) long long weightingScheme; // @synthesize weightingScheme=_weightingScheme;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (id)parentSettings;
- (void)setDefaultValues;

@end
