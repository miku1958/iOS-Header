//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDAppSubscriptionDataCodeAnchorEntity : HDHealthEntity
{
}

+ (BOOL)_getAnchorsWithArray:(id)arg1 predicate:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)_predicateForDataCode:(long long)arg1;
+ (id)anchorForDataCode:(long long)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (BOOL)setAnchor:(id)arg1 forDataCode:(long long)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)tableAliases;

@end

