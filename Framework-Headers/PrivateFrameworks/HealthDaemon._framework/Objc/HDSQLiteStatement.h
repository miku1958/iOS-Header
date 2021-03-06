//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSQLiteDatabase, NSString;

@interface HDSQLiteStatement : NSObject
{
    HDSQLiteDatabase *_database;
    NSString *_sql;
}

@property (readonly, nonatomic) HDSQLiteDatabase *database; // @synthesize database=_database;

- (void).cxx_destruct;
- (id)description;
- (BOOL)enumerateStatementWithError:(id *)arg1 bindingHandler:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;
- (void)finish;
- (id)initWithSQL:(id)arg1 database:(id)arg2;
- (BOOL)performStatementWithError:(id *)arg1 bindingHandler:(CDUnknownBlockType)arg2;

@end

