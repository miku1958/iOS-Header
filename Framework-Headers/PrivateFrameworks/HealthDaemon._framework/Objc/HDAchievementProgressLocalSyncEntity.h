//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDKeyValueSyncEntity.h>

@interface HDAchievementProgressLocalSyncEntity : HDKeyValueSyncEntity
{
}

+ (long long)_outgoingCategoryForNanoSyncProtocolVersion:(int)arg1;
+ (long long)category;
+ (int)nanoSyncObjectType;
+ (long long)outgoingCategoryWithSyncStore:(id)arg1;
+ (int)outgoingNanoSyncObjectTypeForNanoSyncProtocolVersion:(int)arg1;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityDependencies;
+ (long long)syncEntityType;

@end

