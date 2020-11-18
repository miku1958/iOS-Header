//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface _CDComplications : NSObject
{
    NSObject<OS_dispatch_queue> *complicationQueue;
    int deviceChangeToken;
    NSUserDefaults *pushLimits;
    NSMutableDictionary *meterTokens;
    NSDictionary *_activeComplications;
}

@property (copy) NSDictionary *activeComplications; // @synthesize activeComplications=_activeComplications;

+ (id)initializeForAdmissionChecking:(BOOL)arg1;
+ (id)sharedComplication;
- (void).cxx_destruct;
- (id)CDAttributeForComplication:(id)arg1 error:(id *)arg2;
- (BOOL)admissionCheckOnComplication:(id)arg1 forRemote:(BOOL)arg2 error:(id *)arg3;
- (id)initForComplications;
- (BOOL)isBundleActiveComplication:(id)arg1;
- (void)meteringStartedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)meteringStoppedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)meteringUpdateOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;
- (void)readOutActiveComplications;
- (int)remainingPushesOnComplication:(id)arg1 andReduceBy:(id)arg2;
- (int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)arg1;
- (BOOL)watchIsCharging;

@end

