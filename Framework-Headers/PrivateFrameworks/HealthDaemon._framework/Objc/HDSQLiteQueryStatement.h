//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLiteStatement.h>

@class HDSQLiteQueryDescriptor, NSArray;

@interface HDSQLiteQueryStatement : HDSQLiteStatement
{
    HDSQLiteQueryDescriptor *_descriptor;
    NSArray *_properties;
    NSArray *_columns;
}

- (void).cxx_destruct;
- (id)anyEntityWithPredicate:(id)arg1;
- (void)enumerateEntitiesWithPredicate:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithDescriptor:(id)arg1 properties:(id)arg2 database:(id)arg3;

@end

