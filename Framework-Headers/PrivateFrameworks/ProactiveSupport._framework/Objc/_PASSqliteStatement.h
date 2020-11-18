//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/NSCopying-Protocol.h>
#import <ProactiveSupport/NSDiscardableContent-Protocol.h>

@class _PASSqliteDatabase;

@interface _PASSqliteStatement : NSObject <NSDiscardableContent, NSCopying>
{
    _PASSqliteDatabase *_owner;
    BOOL _isFinalized;
    unsigned int _useCount;
    struct sqlite3_stmt *_stmt;
}

@property (readonly, nonatomic) struct sqlite3_stmt *stmt; // @synthesize stmt=_stmt;

- (void).cxx_destruct;
- (void)_finalizeWithLogWarning:(id)arg1;
- (BOOL)beginContentAccess;
- (int)bindNamedParam:(const char *)arg1 toDouble:(double)arg2;
- (int)bindNamedParam:(const char *)arg1 toInt64:(long long)arg2;
- (int)bindNamedParam:(const char *)arg1 toInteger:(long long)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSData:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSString:(id)arg2;
- (int)bindNamedParamToNull:(const char *)arg1;
- (int)bindParam:(int)arg1 toDouble:(double)arg2;
- (int)bindParam:(int)arg1 toInt64:(long long)arg2;
- (int)bindParam:(int)arg1 toInteger:(long long)arg2;
- (int)bindParam:(int)arg1 toNSData:(id)arg2;
- (int)bindParam:(int)arg1 toNSString:(id)arg2;
- (int)bindParamToNull:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (double)getDoubleForColumn:(int)arg1;
- (long long)getInt64ForColumn:(int)arg1;
- (long long)getIntegerForColumn:(int)arg1;
- (id)getNSDataForColumn:(int)arg1;
- (id)getNSStringForColumn:(int)arg1;
- (id)init;
- (id)initWithStatementPointer:(struct sqlite3_stmt *)arg1 owner:(id)arg2;
- (BOOL)isContentDiscarded;

@end

