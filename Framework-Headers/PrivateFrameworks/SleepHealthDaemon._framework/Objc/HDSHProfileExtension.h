//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepHealthDaemon/HDFeatureAvailabilityExtensionProvider-Protocol.h>
#import <SleepHealthDaemon/HDProfileExtension-Protocol.h>

@class HDProfile, HDSHAccessibilityAssertionManager, HDSHFeatureAvailabilityManager, NSString;

@interface HDSHProfileExtension : NSObject <HDProfileExtension, HDFeatureAvailabilityExtensionProvider>
{
    CDUnknownBlockType _sleepStoreProvider;
    HDSHFeatureAvailabilityManager *_coachingAvailabilityManager;
    HDSHFeatureAvailabilityManager *_trackingAvailabilityManager;
    HDSHFeatureAvailabilityManager *_windDownShortcutsAvailabilityManager;
    HDSHAccessibilityAssertionManager *_accessibilityAssertionManager;
    HDProfile *_profile;
}

@property (readonly, nonatomic) HDSHAccessibilityAssertionManager *accessibilityAssertionManager; // @synthesize accessibilityAssertionManager=_accessibilityAssertionManager;
@property (readonly, nonatomic) HDSHFeatureAvailabilityManager *coachingAvailabilityManager; // @synthesize coachingAvailabilityManager=_coachingAvailabilityManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSHFeatureAvailabilityManager *trackingAvailabilityManager; // @synthesize trackingAvailabilityManager=_trackingAvailabilityManager;
@property (readonly, nonatomic) HDSHFeatureAvailabilityManager *windDownShortcutsAvailabilityManager; // @synthesize windDownShortcutsAvailabilityManager=_windDownShortcutsAvailabilityManager;

- (void).cxx_destruct;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1 client:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 sleepStoreProvider:(CDUnknownBlockType)arg2;

@end

