//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface BSUIAnimationFactorySettings : PTSettings
{
    BOOL _slowAnimations;
    double _slowDownFactor;
}

@property (nonatomic) BOOL slowAnimations; // @synthesize slowAnimations=_slowAnimations;
@property (nonatomic) double slowDownFactor; // @synthesize slowDownFactor=_slowDownFactor;

+ (id)settingsControllerModule;
- (double)effectiveSlowDownFactor;
- (void)setDefaultValues;

@end

