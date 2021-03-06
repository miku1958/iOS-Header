//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODefaultsDBDict, GEOSQLiteDB, _GEOConfigDBOperationQueue, geo_isolater;

__attribute__((visibility("hidden")))
@interface _GEOConfigDB : NSObject
{
    GEODefaultsDBDict *_cache;
    geo_isolater *_isolator;
    _Atomic long long _lastId;
    GEOSQLiteDB *_db;
    _GEOConfigDBOperationQueue *_operationQueue;
    CDUnknownFunctionPointerType _clearFunction;
    CDUnknownFunctionPointerType _setFunction;
    CDUnknownFunctionPointerType _addFunction;
}

@property (readonly, nonatomic) CDUnknownFunctionPointerType addFunction; // @synthesize addFunction=_addFunction;
@property (readonly, nonatomic) CDUnknownFunctionPointerType clearFunction; // @synthesize clearFunction=_clearFunction;
@property (readonly, nonatomic) GEOSQLiteDB *db; // @synthesize db=_db;
@property (readonly, nonatomic) _GEOConfigDBOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (readonly, nonatomic) CDUnknownFunctionPointerType setFunction; // @synthesize setFunction=_setFunction;

- (void).cxx_destruct;
- (id)init:(id)arg1 cache:(id)arg2 operationQueue:(id)arg3 clearFunction:(CDUnknownFunctionPointerType)arg4 setFunction:(CDUnknownFunctionPointerType)arg5 addFunction:(CDUnknownFunctionPointerType)arg6 tableName:(id)arg7;
- (long long)nextId;
- (void)withCache:(CDUnknownBlockType)arg1;

@end

