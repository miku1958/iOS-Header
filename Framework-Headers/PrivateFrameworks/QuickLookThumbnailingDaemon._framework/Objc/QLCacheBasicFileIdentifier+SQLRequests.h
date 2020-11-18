//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLCacheBasicFileIdentifier.h>

@interface QLCacheBasicFileIdentifier (SQLRequests)
+ (unsigned long long)cacheIdFromRowId:(unsigned long long)arg1;
+ (id)queryStringToFindCacheIds;
+ (BOOL)removeFromDatabase:(id)arg1 fileWithCacheId:(unsigned long long)arg2;
+ (unsigned long long)rowIdFromCacheId:(unsigned long long)arg1;
+ (id)tableName;
+ (id)whereClauseToFindCacheId;
- (void)bindInFindCacheIdStatement:(struct sqlite3_stmt *)arg1 database:(id)arg2 startingAtIndex:(unsigned int)arg3 gettingNextIndex:(unsigned int *)arg4;
- (struct sqlite3_stmt *)statementToFindCacheIdInDatabase:(id)arg1;
@end
