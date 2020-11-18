//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMailMessageLibrary, NSString;

@interface MFSqliteMessageIDStore : NSObject
{
    NSString *_url;
    int _mailboxRowid;
    MFMailMessageLibrary *_library;
}

- (void)_loadMailboxRowidIfNecessary:(struct sqlite3 *)arg1;
- (void)dealloc;
- (void)deleteAllUIDs;
- (void)deleteUIDsNotInArray:(id)arg1;
- (unsigned long long)flagsForUID:(id)arg1;
- (id)initWithLibrary:(id)arg1 URLString:(id)arg2;
- (id)knownMessageIDsFromSet:(id)arg1;
- (id)messageIDsAddedBeforeDate:(double)arg1;
- (unsigned int)numberOfMessageIDs;

@end

