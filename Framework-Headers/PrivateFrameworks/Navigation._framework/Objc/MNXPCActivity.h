//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface MNXPCActivity : NSObject
{
    CDUnknownBlockType _codeBlock;
    BOOL _repeat;
    BOOL _shouldWakeDevice;
    BOOL _useCoreDuetPowerBudgeting;
    BOOL _runOnBattery;
    NSString *_identifier;
    double _tolerance;
    unsigned long long _qualityOfService;
    unsigned long long _networkRequirements;
    NSDate *_scheduledDate;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) unsigned long long networkRequirements; // @synthesize networkRequirements=_networkRequirements;
@property (readonly, nonatomic) unsigned long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (readonly, nonatomic) BOOL repeat; // @synthesize repeat=_repeat;
@property (readonly, nonatomic) BOOL runOnBattery; // @synthesize runOnBattery=_runOnBattery;
@property (readonly, nonatomic) NSDate *scheduledDate; // @synthesize scheduledDate=_scheduledDate;
@property (readonly, nonatomic) BOOL shouldWakeDevice; // @synthesize shouldWakeDevice=_shouldWakeDevice;
@property (readonly, nonatomic) double tolerance; // @synthesize tolerance=_tolerance;
@property (readonly, nonatomic) BOOL useCoreDuetPowerBudgeting; // @synthesize useCoreDuetPowerBudgeting=_useCoreDuetPowerBudgeting;

+ (void)checkInActivity:(id)arg1 codeBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (BOOL)_needsNetworkRequirement:(unsigned long long)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)arg1 repeat:(BOOL)arg2 shouldWakeDevice:(BOOL)arg3 useCoreDuetPowerBudgeting:(BOOL)arg4 runOnBattery:(BOOL)arg5 tolerance:(double)arg6 qualityOfService:(unsigned long long)arg7 networkRequirements:(unsigned long long)arg8;
- (void)invalidate;
- (double)remainingTime;
- (void)scheduleForDate:(id)arg1 codeBlock:(CDUnknownBlockType)arg2;

@end

