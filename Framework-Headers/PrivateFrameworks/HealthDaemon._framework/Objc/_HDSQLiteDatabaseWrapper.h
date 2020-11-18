//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSQLiteDatabase;

@interface _HDSQLiteDatabaseWrapper : NSObject
{
    HDSQLiteDatabase *_database;
    unsigned long long _generation;
    unsigned long long _threadID;
    long long _type;
}

@property (readonly, nonatomic) HDSQLiteDatabase *database; // @synthesize database=_database;
@property (readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property (readonly, nonatomic) unsigned long long threadID; // @synthesize threadID=_threadID;
@property (nonatomic) long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)captureThreadInfo;
- (id)initWithDatabase:(id)arg1 generation:(unsigned long long)arg2;
- (id)typeString;

@end
