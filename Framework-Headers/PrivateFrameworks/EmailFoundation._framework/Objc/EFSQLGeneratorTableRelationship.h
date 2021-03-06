//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/NSCopying-Protocol.h>

@class EFSQLColumnSchema, EFSQLTableSchema;

@interface EFSQLGeneratorTableRelationship : NSObject <NSCopying>
{
    EFSQLTableSchema *_table;
    EFSQLColumnSchema *_sourceColumn;
    EFSQLTableSchema *_targetTable;
    unsigned long long _relationship;
}

@property (readonly, nonatomic) unsigned long long relationship; // @synthesize relationship=_relationship;
@property (readonly, nonatomic) EFSQLColumnSchema *sourceColumn; // @synthesize sourceColumn=_sourceColumn;
@property (readonly, nonatomic) EFSQLTableSchema *table; // @synthesize table=_table;
@property (readonly, nonatomic) EFSQLTableSchema *targetTable; // @synthesize targetTable=_targetTable;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithPropertyMapper:(id)arg1 previousTable:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTableRelationship:(id)arg1;

@end

