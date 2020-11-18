//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class CKSQLiteStatement;

@interface CKSQLiteStatementEnumerator : NSEnumerator
{
    BOOL _closed;
    CKSQLiteStatement *_statement;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (nonatomic) BOOL closed; // @synthesize closed=_closed;
@property (strong, nonatomic) CKSQLiteStatement *statement; // @synthesize statement=_statement;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithStatement:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)nextObject;

@end
