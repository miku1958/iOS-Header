//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

#import <ActivityAchievements/HDNanoSyncEntity-Protocol.h>
#import <ActivityAchievements/HDSyncEntity-Protocol.h>

@class NSString;

@interface ACHTemplateEntity : HDHealthEntity <HDSyncEntity, HDNanoSyncEntity>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_insertTemplate:(id)arg1 provenance:(long long)arg2 database:(id)arg3 error:(id *)arg4;
+ (BOOL)_insertTemplates:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id *)arg5;
+ (BOOL)_removeTemplates:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_templatesWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)allTemplatesWithProfile:(id)arg1 error:(id *)arg2;
+ (id)codableTemplateForTemplateInDatabase:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)columnsDefinition;
+ (id)createTableSQL;
+ (id)databaseTable;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (BOOL)generateSyncObjectsForSession:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
+ (BOOL)insertTemplates:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id *)arg5;
+ (long long)nextSyncAnchorWithSession:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (BOOL)removeTemplates:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (void)setSyncedTemplatesObserver:(id)arg1;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (BOOL)supportsSyncStore:(id)arg1;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;
+ (id)syncedTemplatesObserver;

@end

