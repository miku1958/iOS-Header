//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HMLightProfile, NAFuture;

@protocol HFLightProfileValueSource <NSObject>
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)arg1 lightProfile:(HMLightProfile *)arg2 completion:(void (^)(UIColor *))arg3;
- (BOOL)isNaturalLightingEnabledForProfile:(HMLightProfile *)arg1;
- (BOOL)isNaturalLightingSupportedForProfile:(HMLightProfile *)arg1;
- (NAFuture *)writeNaturalLightEnabledState:(BOOL)arg1 forProfile:(HMLightProfile *)arg2;
@end
