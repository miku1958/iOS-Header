//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUFeatureOnboardingFlow-Protocol.h>

@class HMHome, NAFuture, NSArray, NSString, UIViewController;
@protocol HUConfigurationViewController;

@interface HUHomeTheaterOnboardingFlow : NSObject <HUFeatureOnboardingFlow>
{
    BOOL _shouldAbortThisOnboardingFlowGroup;
    BOOL _shouldAbortAllOnboarding;
    HMHome *_home;
    NAFuture *_onboardingFuture;
    UIViewController<HUConfigurationViewController> *_initialViewController;
    NSArray *_appleTVs;
}

@property (strong, nonatomic) NSArray *appleTVs; // @synthesize appleTVs=_appleTVs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMHome *home; // @synthesize home=_home;
@property (strong, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController; // @synthesize initialViewController=_initialViewController;
@property (strong, nonatomic) NAFuture *onboardingFuture; // @synthesize onboardingFuture=_onboardingFuture;
@property (nonatomic) BOOL shouldAbortAllOnboarding; // @synthesize shouldAbortAllOnboarding=_shouldAbortAllOnboarding;
@property (nonatomic) BOOL shouldAbortThisOnboardingFlowGroup; // @synthesize shouldAbortThisOnboardingFlowGroup=_shouldAbortThisOnboardingFlowGroup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;
- (id)processUserInput:(id)arg1;
- (id)viewControllerForAccessory:(id)arg1;

@end

