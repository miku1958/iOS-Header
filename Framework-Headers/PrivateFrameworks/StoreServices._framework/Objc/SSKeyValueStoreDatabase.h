//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSSQLiteDatabase;

@interface SSKeyValueStoreDatabase : NSObject
{
    SSSQLiteDatabase *_database;
}

- (void)_dispatchBlockAsync:(CDUnknownBlockType)arg1;
- (id)_initReadOnly:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)initReadOnly;
- (void)modifyAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (void)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (void)readAsyncUsingSessionBlock:(CDUnknownBlockType)arg1;
- (void)readUsingSessionBlock:(CDUnknownBlockType)arg1;

@end

