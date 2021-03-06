//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HDSQLiteDatabaseColumnSchema : NSObject
{
    BOOL _isAutoincrement;
    BOOL _isPrimaryKey;
    BOOL _isNullable;
    NSString *_name;
    NSString *_type;
    NSString *_defaultValue;
    NSString *_foreignKeyTargetTable;
    NSString *_foreignKeyTargetColumn;
    long long _deletionAction;
}

@property (copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property (nonatomic) long long deletionAction; // @synthesize deletionAction=_deletionAction;
@property (copy, nonatomic) NSString *foreignKeyTargetColumn; // @synthesize foreignKeyTargetColumn=_foreignKeyTargetColumn;
@property (copy, nonatomic) NSString *foreignKeyTargetTable; // @synthesize foreignKeyTargetTable=_foreignKeyTargetTable;
@property (nonatomic) BOOL isAutoincrement; // @synthesize isAutoincrement=_isAutoincrement;
@property (nonatomic) BOOL isNullable; // @synthesize isNullable=_isNullable;
@property (nonatomic) BOOL isPrimaryKey; // @synthesize isPrimaryKey=_isPrimaryKey;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

