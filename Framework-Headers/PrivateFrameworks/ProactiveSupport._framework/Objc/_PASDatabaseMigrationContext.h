//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, _PASSqliteDatabase;
@protocol _PASDatabaseMigrationProtocol;

@interface _PASDatabaseMigrationContext : NSObject
{
    NSObject<_PASDatabaseMigrationProtocol> *object;
    _PASSqliteDatabase *db;
    unsigned int version;
    NSDictionary *migrations;
}

- (void).cxx_destruct;
- (id)description;

@end

