//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HMAccessorySettings, HMMediaSession;
@protocol HMMediaObjectDelegate;

@protocol HMMediaObject <NSObject>

@property (weak) id<HMMediaObjectDelegate> delegate;
@property (readonly, copy) HMMediaSession *mediaSession;
@property (readonly) HMAccessorySettings *settings;

@end

