//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXVideoSkipLockObserving <NSObject>

@property (readonly, nonatomic) double countdown;
@property (copy, nonatomic, setter=onCountDown:) CDUnknownBlockType countdownBlock;
@property (readonly, nonatomic) BOOL locked;
@property (copy, nonatomic, setter=onUnlock:) CDUnknownBlockType unlockBlock;

@end

