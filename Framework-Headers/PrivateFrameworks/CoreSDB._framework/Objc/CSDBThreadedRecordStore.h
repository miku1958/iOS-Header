//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, _CSDBThreadObject;
@protocol OS_dispatch_queue;

@interface CSDBThreadedRecordStore : NSObject
{
    struct CSDBRecordStore *_recordStore;
    NSObject<OS_dispatch_queue> *_recordStoreQueue;
    NSString *_identifier;
    _CSDBThreadObject *_thread;
    BOOL _wantsRegister;
}

- (void)_teardownDatabaseOnQueue;
- (void)dealloc;
- (id)initWithIdentifier:(struct __CFString *)arg1;
- (BOOL)ownsCurrentThreadOtherwiseAssert:(BOOL)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(BOOL)arg2;
- (void)registerClass:(const CDStruct_2cac97d9 *)arg1;
- (void)setupDatabaseWithAllowLocalMigration:(BOOL)arg1 pathBlock:(CDUnknownBlockType)arg2 setupStoreHandler:(CDUnknownFunctionPointerType)arg3 connectionInitializer:(CDUnknownFunctionPointerType)arg4 versionChecker:(CDUnknownFunctionPointerType)arg5 migrationHandler:(CDUnknownFunctionPointerType)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned int)arg8 registerBlock:(CDUnknownBlockType)arg9;
- (void)teardownDatabase;

@end
