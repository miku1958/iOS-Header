//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSNumber;

@interface SBUsageDefaults : BSAbstractDefaultDomain
{
}

@property (strong, nonatomic) NSNumber *batteryUsageTime; // @dynamic batteryUsageTime;
@property (nonatomic) BOOL hasChargedPartially; // @dynamic hasChargedPartially;
@property (strong, nonatomic) NSNumber *standbyTime; // @dynamic standbyTime;

- (void)_bindAndRegisterDefaults;
- (void)clearUsageDefaults;

@end

