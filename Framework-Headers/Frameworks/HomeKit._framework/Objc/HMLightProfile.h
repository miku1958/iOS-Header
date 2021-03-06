//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMAccessoryProfile.h>

#import <HomeKit/HMFLogging-Protocol.h>

@class HMLightProfileSettings, NSString, _HMLightProfile;
@protocol HMLightProfileDelegate;

@interface HMLightProfile : HMAccessoryProfile <HMFLogging>
{
    id<HMLightProfileDelegate> _delegate;
    NSString *_logIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMLightProfileDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) _HMLightProfile *lightProfile;
@property (readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property (readonly) HMLightProfileSettings *settings;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithLightProfile:(id)arg1;
- (void)setNaturalLightingEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setNaturalLightingEnabled:(BOOL)arg1 shouldRetryOnFailure:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSettings:(id)arg1 withReason:(id)arg2;

@end

