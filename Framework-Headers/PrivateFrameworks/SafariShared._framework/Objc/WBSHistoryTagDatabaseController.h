//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSSQLiteDatabase;

@interface WBSHistoryTagDatabaseController : NSObject
{
    WBSSQLiteDatabase *_database;
}

- (void).cxx_destruct;
- (BOOL)assignHistoryItemWithID:(long long)arg1 toTopicTagsWithIDs:(id)arg2 error:(id *)arg3;
- (BOOL)clearAllTagsWithError:(id *)arg1;
- (BOOL)clearTagsFromStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;
- (id)createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 error:(id *)arg5;
- (id)initWithDatabase:(id)arg1;
- (BOOL)renameTagWithID:(long long)arg1 toTitle:(id)arg2 error:(id *)arg3;

@end
