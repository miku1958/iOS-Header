//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class NAFuture, NSSet;

@protocol HFLightProfileAggregatedValueSource <NSObject>

@property (readonly, nonatomic) NSSet *lightProfiles;

- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 completion:(void (^)(UIColor *))arg2;
- (BOOL)isNaturalLightingEnabled;
- (BOOL)isNaturalLightingSupported;
- (NAFuture *)writeNaturalLightEnabledState:(BOOL)arg1;
@end
