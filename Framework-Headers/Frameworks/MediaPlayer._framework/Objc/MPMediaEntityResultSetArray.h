//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaArray.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPMediaLibrary, MPMediaQueryCriteria, MPMediaQuerySectionInfo, NSMutableArray, NSObject;
@protocol MPMediaLibraryResultSet, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying>
{
    id<MPMediaLibraryResultSet> _resultSet;
    Class _entityClass;
    MPMediaLibrary *_library;
    MPMediaQuerySectionInfo *_sectionInfo;
    NSMutableArray *_entities;
    NSObject<OS_dispatch_queue> *_entitiesQueue;
    MPMediaQueryCriteria *_queryCriteria;
    long long _revision;
}

@property (readonly, nonatomic) id<MPMediaLibraryResultSet> resultSet; // @synthesize resultSet=_resultSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(long long)arg3 library:(id)arg4;
- (BOOL)isQueryResultSetInvalidated;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)sectionInfo;

@end

