//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveSupport/_PASSqliteCollectionsCursor.h>

@interface _PASSqliteRowIdCursor : _PASSqliteCollectionsCursor
{
}

+ (BOOL)hasRowId;
+ (const char *)sqliteCreateTableStatement;
- (BOOL)currentIndexEof;
- (unsigned long long)currentIndexedRowId;
- (unsigned long long)outputRowId;

@end

