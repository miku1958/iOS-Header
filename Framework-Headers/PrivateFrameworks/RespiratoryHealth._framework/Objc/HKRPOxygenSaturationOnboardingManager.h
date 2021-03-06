//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HKRPOxygenSaturationOnboardingManagerDataSource;

@interface HKRPOxygenSaturationOnboardingManager : NSObject
{
    id<HKRPOxygenSaturationOnboardingManagerDataSource> _dataSource;
}

@property (readonly, nonatomic) BOOL ageIsAppropriate;
@property (readonly, nonatomic) BOOL bloodOxygenFeatureEnabled;
@property (readonly, nonatomic) id<HKRPOxygenSaturationOnboardingManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, nonatomic) BOOL onboardingComplete;
@property (readonly, nonatomic) BOOL onboardingDuringPairingShouldAppear;
@property (readonly, nonatomic) BOOL onboardingShouldAppear;
@property (readonly, nonatomic) BOOL pairedDeviceIsAppropriate;
@property (readonly, nonatomic) BOOL settingsShouldAppear;
@property (readonly, nonatomic) BOOL shouldAdvertise;

- (void).cxx_destruct;
- (BOOL)_currentDeviceHasCapability;
- (BOOL)_isAlternateDevice;
- (void)cacheCompletedOnboardingStateIfNeeded;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (void)onboardWithCompletion:(CDUnknownBlockType)arg1;

@end

