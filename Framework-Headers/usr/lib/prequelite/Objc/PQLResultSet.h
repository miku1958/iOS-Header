//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <prequelite/PQLEnumeration-Protocol.h>

@class NSError, NSSet, PQLConnection, PQLStatement;

@interface PQLResultSet : NSObject <PQLEnumeration>
{
    PQLStatement *_stmt;
    Class _objectsClass;
    SEL _objectsClassInitializer;
    BOOL _hasValuable;
    CDUnknownBlockType _objectsConstructor;
    id _lastEnumeratedObject;
    BOOL _inTransaction;
    NSSet *_defaultUnarchivingAllowedClasses;
    NSError *_error;
    unsigned long long _rowNumber;
    unsigned long long _columns;
    PQLConnection *_db;
}

@property (readonly, nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property (readonly, nonatomic) PQLConnection *db; // @synthesize db=_db;
@property (strong, nonatomic) NSSet *defaultUnarchivingAllowedClasses; // @synthesize defaultUnarchivingAllowedClasses=_defaultUnarchivingAllowedClasses;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) unsigned long long rowNumber; // @synthesize rowNumber=_rowNumber;
@property (readonly, nonatomic) struct sqlite3_stmt *stmt;

- (void).cxx_destruct;
- (const char *)UTF8StringAtIndex:(int)arg1;
- (BOOL)_next:(BOOL)arg1;
- (id)archivedObjectOfClass:(Class)arg1 atIndex:(int)arg2;
- (id)archivedObjectOfClasses:(id)arg1 atIndex:(int)arg2;
- (BOOL)boolAtIndex:(int)arg1;
- (BOOL)charAtIndex:(int)arg1;
- (void)close;
- (id)columnNameAtIndex:(int)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)dataAtIndex:(int)arg1;
- (id)dataAtIndex:(int)arg1 noCopy:(BOOL)arg2;
- (id)dateAtIndex:(int)arg1;
- (void)dealloc;
- (id)description;
- (double)doubleAtIndex:(int)arg1;
- (id)enumerateObjects:(CDUnknownBlockType)arg1;
- (id)enumerateObjectsOfClass:(Class)arg1;
- (id)enumerateObjectsOfClass:(Class)arg1 initializer:(SEL)arg2;
- (float)floatAtIndex:(int)arg1;
- (id)initWithStatement:(id)arg1 usingDatabase:(id)arg2;
- (int)intAtIndex:(int)arg1;
- (long long)integerAtIndex:(int)arg1;
- (BOOL)isNullAtIndex:(int)arg1;
- (long long)longAtIndex:(int)arg1;
- (long long)longLongAtIndex:(int)arg1;
- (BOOL)next;
- (id)nextObject;
- (id)numberAtIndex:(int)arg1;
- (id)object:(CDUnknownBlockType)arg1;
- (id)objectAtIndex:(int)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectOfClass:(Class)arg1;
- (id)objectOfClass:(Class)arg1 atIndex:(int)arg2;
- (id)objectOfClass:(Class)arg1 initializer:(SEL)arg2;
- (id)onlyObject:(CDUnknownBlockType)arg1;
- (id)onlyObjectOfClass:(Class)arg1;
- (id)onlyObjectOfClass:(Class)arg1 initializer:(SEL)arg2;
- (id)plistAtIndex:(int)arg1;
- (short)shortAtIndex:(int)arg1;
- (id)stringAtIndex:(int)arg1;
- (id)unarchivedObjectOfClass:(Class)arg1 atIndex:(int)arg2;
- (id)unarchivedObjectOfClasses:(id)arg1 atIndex:(int)arg2;
- (unsigned char)unsignedCharAtIndex:(int)arg1;
- (unsigned int)unsignedIntAtIndex:(int)arg1;
- (unsigned long long)unsignedIntegerAtIndex:(int)arg1;
- (unsigned long long)unsignedLongAtIndex:(int)arg1;
- (unsigned long long)unsignedLongLongAtIndex:(int)arg1;
- (unsigned short)unsignedShortAtIndex:(int)arg1;
- (id)uuidAtIndex:(int)arg1;

@end
