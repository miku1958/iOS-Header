//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PQLStatement : NSObject
{
    struct sqlite3_stmt *_stmt;
    PQLStatement *_next;
    NSMutableArray *_aliveBinds;
    CDUnknownBlockType _profilingHook;
    union {
        unsigned char inlined[8];
        unsigned char *ptr;
    } _specUnion;
    BOOL _inUse;
    BOOL _isTraced;
    short _specLength;
}

@property (readonly, nonatomic) BOOL isTraced;

- (void).cxx_destruct;
- (BOOL)_prepare:(const char *)arg1 withDB:(id)arg2;
- (void)bindArguments:(struct __va_list_tag [1])arg1 db:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2 db:(id)arg3 cache:(struct cache_s *)arg4;
- (id)initWithStatement:(id)arg1 forDB:(id)arg2;
- (void)invalidate;
- (void)keepBindAlive:(id)arg1;
- (id)translate:(id)arg1 hasInjections:(BOOL *)arg2 arguments:(struct __va_list_tag [1])arg3;
- (void)unbindForDB:(id)arg1 returnedRows:(unsigned long long)arg2;

@end

