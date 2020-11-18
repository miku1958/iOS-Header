//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface TIMobileAssetTimerImpl : NSObject
{
    CDUnknownBlockType _expirationHandler;
    NSTimer *_assetTimer;
}

+ (id)nextFireDateForDate:(id)arg1;
- (void)assetTimerFired;
- (void)dealloc;
- (id)initWithExpirationHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)updateAssetTimer;

@end
