//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>

@interface HDStandHourCompatibilityNanoSyncEntity : NSObject <HDNanoSyncEntity>
{
}

+ (id)convertCategorySample:(id)arg1;
+ (long long)finalAnchorForNanoSyncRestoreWithStore:(id)arg1 nowDate:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (int)nanoSyncObjectType;
+ (id)objectsForNanoSyncRestoreWithStore:(id)arg1 nowDate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 lastSyncAnchor:(long long *)arg4 healthDaemon:(id)arg5 error:(id *)arg6;
+ (id)sampleTypesByAgeInDaysForNanoSyncRestore;

@end

