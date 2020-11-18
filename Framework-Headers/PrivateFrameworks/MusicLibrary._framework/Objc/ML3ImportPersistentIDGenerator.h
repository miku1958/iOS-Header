//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3PersistentIDGenerator.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator
{
    NSMutableDictionary *_pregeneratedIdMappings;
}

- (void).cxx_destruct;
- (void)addIdMapping:(id)arg1 forProperty:(unsigned int)arg2;
- (id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2;
- (long long)nextPersistentIDForImportItem:(shared_ptr_de333b55)arg1;
- (void)removePersistentIDFromIdMapping:(long long)arg1;

@end

