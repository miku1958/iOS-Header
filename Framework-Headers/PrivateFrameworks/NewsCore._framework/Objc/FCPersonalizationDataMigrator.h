//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCKeyValueStoreMigrating-Protocol.h>

@class NSString;

@interface FCPersonalizationDataMigrator : NSObject <FCKeyValueStoreMigrating>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)keyValueStore:(id)arg1 canMigrateFromVersion:(unsigned long long)arg2;
- (id)keyValueStore:(id)arg1 migrateObject:(id)arg2 forKey:(id)arg3 fromVersion:(unsigned long long)arg4;

@end

