//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailingDaemon/QLCacheIndexDatabaseGenericEnumerator.h>

@class QLCacheVersionedFileIdentifier;

@interface QLCacheIndexDatabaseFileInfoEnumerator : QLCacheIndexDatabaseGenericEnumerator
{
    BOOL _extraInfo;
    BOOL _ubiquitous;
    QLCacheVersionedFileIdentifier *_fileIdentifier;
}

- (void).cxx_destruct;
- (id)initWithSqliteDatabase:(id)arg1 toEnumerateUbiquitousFiles:(BOOL)arg2 extraInfo:(BOOL)arg3;
- (BOOL)nextFileWithCacheId:(unsigned long long *)arg1 versionedFileIdentifier:(id *)arg2 thumbnailCount:(unsigned int *)arg3 minSize:(float *)arg4 maxSize:(float *)arg5 totalDataLength:(unsigned long long *)arg6;

@end
