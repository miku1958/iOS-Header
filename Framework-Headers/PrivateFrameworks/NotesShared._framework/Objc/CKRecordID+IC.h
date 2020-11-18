//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKRecordID.h>

#import <NotesShared/ICHasDatabaseScope-Protocol.h>

@class NSString;

@interface CKRecordID (IC) <ICHasDatabaseScope>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)databaseScope;
- (BOOL)ic_isOwnedByCurrentUser;
- (id)ic_loggingDescription;
- (id)ic_loggingDescriptionIncludingBrackets:(BOOL)arg1;
@end

