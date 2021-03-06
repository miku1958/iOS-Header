//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUtils/NSObject-Protocol.h>

@class HMAccessorySettings, HMMediaSession;
@protocol HMMediaObject;

@protocol HMMediaObjectDelegate <NSObject>

@optional
- (void)mediaObject:(id<HMMediaObject>)arg1 didUpdateMediaSession:(HMMediaSession *)arg2;
- (void)mediaObject:(id<HMMediaObject>)arg1 didUpdateSettings:(HMAccessorySettings *)arg2;
@end

