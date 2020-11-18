//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BRCSyncOperationThrottleParams : NSObject
{
    double minWait;
    double maxWait;
    double ratioOnSuccess;
    double ratioOnFailure;
    double ratioOnQuotaErrorClear;
    double inactivityKickbackDelay;
    double inactivityKickbackRatio;
}

@property (nonatomic) double inactivityKickbackDelay; // @synthesize inactivityKickbackDelay;
@property (nonatomic) double inactivityKickbackRatio; // @synthesize inactivityKickbackRatio;
@property (nonatomic) double maxWait; // @synthesize maxWait;
@property (nonatomic) double minWait; // @synthesize minWait;
@property (nonatomic) double ratioOnFailure; // @synthesize ratioOnFailure;
@property (nonatomic) double ratioOnQuotaErrorClear; // @synthesize ratioOnQuotaErrorClear;
@property (nonatomic) double ratioOnSuccess; // @synthesize ratioOnSuccess;

- (BOOL)check;
- (double)doubleForKey:(id)arg1 inParams:(id)arg2 defaults:(id)arg3;
- (id)initWithParams:(id)arg1 defaults:(id)arg2;
- (void)setupWithParams:(id)arg1 defaults:(id)arg2;

@end
