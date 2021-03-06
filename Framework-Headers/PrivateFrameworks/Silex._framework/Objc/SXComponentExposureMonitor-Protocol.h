//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXComponentView;

@protocol SXComponentExposureMonitor <NSObject>
- (void)conditionsChanged;
- (void)onExposureOf:(SXComponentView *)arg1 then:(void (^)(long long, double))arg2;
- (void)onExposureOf:(SXComponentView *)arg1 then:(void (^)(long long, double))arg2 when:(BOOL (^)(void))arg3;
- (void)onExposureOf:(SXComponentView *)arg1 traits:(unsigned long long)arg2 then:(void (^)(long long, double))arg3;
- (void)onExposureOf:(SXComponentView *)arg1 traits:(unsigned long long)arg2 then:(void (^)(long long, double))arg3 when:(BOOL (^)(void))arg4;
- (void)stopTrackingExposureOfComponentView:(SXComponentView *)arg1;
@end

