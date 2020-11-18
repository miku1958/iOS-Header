//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSSQLiteDatabase;

@interface SSKeyValueStoreSession : NSObject
{
    SSSQLiteDatabase *_database;
}

@property (readonly, nonatomic) SSSQLiteDatabase *database; // @synthesize database=_database;

- (id)copyAccountDictionaryForDomain:(id)arg1;
- (id)copyDataForDomain:(id)arg1 key:(id)arg2;
- (id)copyValueForDomain:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (id)existingEntityForDomain:(id)arg1 key:(id)arg2;
- (id)iTunesValueForKey:(id)arg1 usedDomain:(id *)arg2;
- (id)initWithDatabase:(id)arg1;

@end
