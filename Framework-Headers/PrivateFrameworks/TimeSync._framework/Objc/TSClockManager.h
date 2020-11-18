//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TSClockManager : NSObject
{
    unsigned int _connection;
    NSMutableArray *_clockPersonalities;
    unsigned long long _machAbsoluteNanosecondClockIdentifier;
}

@property (readonly, nonatomic) unsigned long long machAbsoluteNanosecondClockIdentifier; // @synthesize machAbsoluteNanosecondClockIdentifier=_machAbsoluteNanosecondClockIdentifier;

+ (id)clockManager;
+ (id)defaultClockPersonalities;
+ (id)diagnosticDescriptionForClockService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (void)loadClockManagerNub;
+ (id)sharedClockManager;
+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)arg1;
- (void)addClockPersonality:(id)arg1;
- (BOOL)addMappingFromClockID:(unsigned long long)arg1 toCoreAudioClockDomain:(unsigned int *)arg2 error:(id *)arg3;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)arg1 domainInterval:(unsigned long long)arg2 usingFilterShift:(unsigned char)arg3 isAdaptive:(BOOL)arg4 error:(id *)arg5;
- (BOOL)addgPTPServicesWithError:(id *)arg1;
- (id)availableClockIdentifiers;
- (id)clockWithClockIdentifier:(unsigned long long)arg1;
- (void)dealloc;
- (BOOL)getMachAbsoluteClockID:(unsigned long long *)arg1 error:(id *)arg2;
- (id)init;
- (BOOL)nextAvailableDynamicClockID:(unsigned long long *)arg1 error:(id *)arg2;
- (BOOL)releaseDynamicClockID:(unsigned long long)arg1 error:(id *)arg2;
- (void)removeClockPersonality:(id)arg1;
- (BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)removegPTPServicesWithError:(id *)arg1;

@end
