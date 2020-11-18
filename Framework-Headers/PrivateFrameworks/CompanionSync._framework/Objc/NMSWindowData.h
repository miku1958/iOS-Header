//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, _SYSharedServiceDB;
@protocol OS_dispatch_queue;

@interface NMSWindowData : NSObject
{
    NSString *_path;
    struct __CFString *_loggingFacility;
    NSObject<OS_dispatch_queue> *_syncQ;
    struct sqlite3 *_db;
    _SYSharedServiceDB *_sharedDB;
    struct sqlite3_stmt *_addMessageInFlight;
    struct sqlite3_stmt *_getMessageLength;
    struct sqlite3_stmt *_removeMessageInFlight;
    struct sqlite3_stmt *_getNextExpireDate;
    struct sqlite3_stmt *_getExpiredMessageIDs;
    struct sqlite3_stmt *_getBytesInFlight;
    struct sqlite3_stmt *_getCountInFlight;
    struct sqlite3_stmt *_pushPendingMessage;
    struct sqlite3_stmt *_getPendingMessage;
    struct sqlite3_stmt *_popPendingMessage;
    struct sqlite3_stmt *_countPendingMessages;
}

@property (readonly, nonatomic) unsigned long long countOfAllMessagesInFlight;
@property (readonly, nonatomic) unsigned long long countOfPendingMessages;
@property (readonly, nonatomic) NSDate *dateOfNextMessageExpiry;
@property (readonly, nonatomic) NSArray *expiredMessageIDs;
@property (readonly, nonatomic) unsigned long long lengthOfAllMessagesInFlight;

- (void).cxx_destruct;
- (void)_ensureSchema;
- (int)_getSchemaVersion;
- (BOOL)_openDBForceRecreate:(BOOL)arg1;
- (void)_prepareStatements;
- (BOOL)_syncTransaction:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
- (void)_withDB:(CDUnknownBlockType)arg1;
- (void)addMessageWithID:(id)arg1 ofLength:(unsigned long long)arg2 timeoutTime:(double)arg3;
- (struct sqlite3 *)dbRef;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1 logFacility:(struct __CFString *)arg2;
- (id)initWithSharedDBForServiceName:(id)arg1;
- (id)popPendingMessage;
- (void)pushPendingMessageData:(id)arg1 timeToLive:(double)arg2;
- (void)removeAllMessages;
- (unsigned long long)removeAndReturnLengthOfMessageWithID:(id)arg1;
- (unsigned long long)removeAndReturnLengthOfMessagesWithIDs:(id)arg1;

@end
