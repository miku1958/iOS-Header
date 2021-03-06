//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMHomeManagerConfiguration.h>

@class HMFLocationAuthorization, NSOperationQueue;
@protocol HMFLocking;

@interface HMMutableHomeManagerConfiguration : HMHomeManagerConfiguration
{
    id<HMFLocking> _lock;
}

@property (getter=isAdaptive) BOOL adaptive;
@property unsigned long long cachePolicy;
@property (strong) NSOperationQueue *delegateQueue;
@property (getter=isDiscretionary) BOOL discretionary;
@property (strong) HMFLocationAuthorization *locationAuthorization;
@property unsigned long long options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)shouldConnect;

@end

