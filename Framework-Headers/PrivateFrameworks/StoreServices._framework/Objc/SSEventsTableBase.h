//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSSQLiteDatabase;

@interface SSEventsTableBase : NSObject
{
    SSSQLiteDatabase *_database;
}

+ (id)databasePath;
- (void).cxx_destruct;
- (BOOL)_setupDatabase;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;

@end

