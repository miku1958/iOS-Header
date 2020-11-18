//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKitUI/JSExport-Protocol.h>

@class JSValue, NSArray, NSNumber;

@protocol WLKUIOnboardingInterface <JSExport>

@property (readonly, nonatomic) NSArray *eligibleBids;
@property (readonly, nonatomic) BOOL isShowing;
@property (readonly, nonatomic, getter=isOptedIn) BOOL optedIn;
@property (readonly, nonatomic, getter=isOptedInCached) NSNumber *optedInCached;

- (void)dismiss;
- (void)fetchEligibleBids:(JSValue *)arg1;
- (void)fetchOptedIn:(JSValue *)arg1;
- (void)setOptedIn:(BOOL)arg1:(JSValue *)arg2;
- (void)show:(JSValue *)arg1;
- (void)showForBids:(NSArray *)arg1:(JSValue *)arg2:(JSValue *)arg3;
@end
