//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface MSASModelEnumerator : NSEnumerator
{
    struct sqlite3 *_db;
    struct sqlite3_stmt *_stmt;
    CDUnknownBlockType _stepBlock;
}

@property (nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property (copy, nonatomic) CDUnknownBlockType stepBlock; // @synthesize stepBlock=_stepBlock;
@property (nonatomic) struct sqlite3_stmt *stmt; // @synthesize stmt=_stmt;

+ (id)enumeratorWithDatabase:(struct sqlite3 *)arg1 query:(id)arg2 stepBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithDatabase:(struct sqlite3 *)arg1 query:(id)arg2 stepBlock:(CDUnknownBlockType)arg3;
- (id)nextObject;

@end

