//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

__attribute__((visibility("hidden")))
@interface _UIPointerTextBehaviorSettings : PTSettings
{
    double _regionCaptureMultiplier;
    double _textLineRegionPadding;
}

@property (nonatomic) double regionCaptureMultiplier; // @synthesize regionCaptureMultiplier=_regionCaptureMultiplier;
@property (nonatomic) double textLineRegionPadding; // @synthesize textLineRegionPadding=_textLineRegionPadding;

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

