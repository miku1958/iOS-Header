//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _HDDataFaker;

@interface HDDemoManager : NSObject
{
    _HDDataFaker *_faker;
}

- (void).cxx_destruct;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 objectHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)isProvidingData;
- (void)startFakingDataForActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(CDUnknownBlockType)arg3;
- (void)stopFakingData;

@end

