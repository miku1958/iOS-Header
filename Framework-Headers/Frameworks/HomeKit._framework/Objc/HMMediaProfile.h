//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMAccessoryProfile.h>

#import <HomeKit/HMAccessorySettingsContainer-Protocol.h>
#import <HomeKit/HMMediaObject-Protocol.h>
#import <HomeKit/_HMMediaProfileDelegate-Protocol.h>

@class HMAccessorySettings, HMHome, HMMediaSession, NSString;
@protocol HMMediaProfileDelegate;

@interface HMMediaProfile : HMAccessoryProfile <_HMMediaProfileDelegate, HMMediaObject, HMAccessorySettingsContainer>
{
    NSString *_routeUID;
    unsigned long long _capability;
    id<HMMediaProfileDelegate> _delegate;
}

@property (readonly, nonatomic) unsigned long long capability; // @synthesize capability=_capability;
@property (readonly, weak) HMHome *containerHome;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMMediaProfileDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HMMediaSession *mediaSession;
@property (readonly, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
@property (readonly) HMAccessorySettings *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)init;
- (id)initWithMediaProfile:(id)arg1;
- (void)mediaProfile:(id)arg1 didUpdateMediaSession:(id)arg2;
- (void)refreshStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setCapability:(unsigned long long)arg1;

@end
