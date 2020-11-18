//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDEntityEncoder.h>

@class HDDataProvenanceCache, HDMetadataValueStatement;

@interface _HDDataEntityEncoder : HDEntityEncoder
{
    HDMetadataValueStatement *_metadataValueStatement;
    HDDataProvenanceCache *_dataProvenanceCache;
    CDUnknownBlockType _metadataKeyFilter;
    BOOL _includeAutomaticTimeZones;
}

- (void).cxx_destruct;
- (id)_copyBaseMetadataForRow:(struct HDSQLiteRow *)arg1;
- (BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3 error:(id *)arg4;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (void)finish;
- (id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 database:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(CDUnknownBlockType)arg6;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (id)orderedProperties;

@end
