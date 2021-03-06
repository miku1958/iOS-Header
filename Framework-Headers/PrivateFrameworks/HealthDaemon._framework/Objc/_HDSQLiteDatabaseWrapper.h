//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSQLiteDatabase, NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _HDSQLiteDatabaseWrapper : NSObject
{
    HDSQLiteDatabase *_database;
    NSObject<OS_dispatch_group> *_flushGroup;
    unsigned long long _generation;
    unsigned long long _threadID;
    unsigned long long _options;
}

@property (readonly, nonatomic) HDSQLiteDatabase *database; // @synthesize database=_database;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *flushGroup; // @synthesize flushGroup=_flushGroup;
@property (readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly, nonatomic) unsigned long long threadID; // @synthesize threadID=_threadID;
@property (readonly, copy, nonatomic) NSString *typeString;

- (void).cxx_destruct;
- (void)captureThreadInfo;
- (id)initWithDatabase:(id)arg1 flushGroup:(id)arg2 generation:(unsigned long long)arg3;

@end

