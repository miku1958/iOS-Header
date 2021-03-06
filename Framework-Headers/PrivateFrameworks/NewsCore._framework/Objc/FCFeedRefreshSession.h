//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCFeedEdition, NSArray, NSDate, NSDictionary, NSSet, NSString;
@protocol FCFeedRefreshSessionForYouConfig;

@interface FCFeedRefreshSession : NSObject
{
    BOOL _reachedEnd;
    BOOL _isOffline;
    BOOL _isNewEdition;
    NSString *_identifier;
    NSDate *_refreshDate;
    NSDate *_modificationDate;
    NSDictionary *_cursorsByGroupEmitterID;
    NSArray *_pendingGroups;
    NSSet *_activeGroupEmitterIDs;
    FCFeedEdition *_lastCompletedEdition;
    id<FCFeedRefreshSessionForYouConfig> _forYouConfig;
}

@property (readonly, copy, nonatomic) NSSet *activeGroupEmitterIDs; // @synthesize activeGroupEmitterIDs=_activeGroupEmitterIDs;
@property (readonly, copy, nonatomic) NSDictionary *cursorsByGroupEmitterID; // @synthesize cursorsByGroupEmitterID=_cursorsByGroupEmitterID;
@property (readonly, copy, nonatomic) id<FCFeedRefreshSessionForYouConfig> forYouConfig; // @synthesize forYouConfig=_forYouConfig;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL isNewEdition; // @synthesize isNewEdition=_isNewEdition;
@property (readonly, nonatomic) BOOL isOffline; // @synthesize isOffline=_isOffline;
@property (readonly, nonatomic) FCFeedEdition *lastCompletedEdition; // @synthesize lastCompletedEdition=_lastCompletedEdition;
@property (readonly, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property (readonly, copy, nonatomic) NSArray *pendingGroups; // @synthesize pendingGroups=_pendingGroups;
@property (readonly, nonatomic) BOOL reachedEnd; // @synthesize reachedEnd=_reachedEnd;
@property (readonly, nonatomic) NSDate *refreshDate; // @synthesize refreshDate=_refreshDate;

+ (id)currentEditionWithRefreshDate:(id)arg1 lastCompletedEdition:(id)arg2 fromPaginator:(id)arg3;
- (void).cxx_destruct;
- (id)copyByRemovingPendingGroupIdenticalTo:(id)arg1;
- (id)copyByRemovingPendingGroupsAtIndexes:(id)arg1;
- (id)copyWithAdditionalPendingGroups:(id)arg1 cursors:(id)arg2;
- (id)copyWithAllGroupEmittersExhausted;
- (id)copyWithExhaustedGroupEmitterID:(id)arg1 cursors:(id)arg2;
- (id)copyWithModificationDate:(id)arg1 lastCompletedEdition:(id)arg2 cursorsByGroupEmitterID:(id)arg3 pendingGroups:(id)arg4 activeGroupEmitterIDs:(id)arg5 reachedEnd:(BOOL)arg6 isOffline:(BOOL)arg7;
- (id)currentEditionFromPaginator:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 refreshDate:(id)arg2 modificationDate:(id)arg3 lastCompletedEdition:(id)arg4 cursorsByGroupEmitterID:(id)arg5 pendingGroups:(id)arg6 activeGroupEmitterIDs:(id)arg7 reachedEnd:(BOOL)arg8 isOffline:(BOOL)arg9 forYouConfig:(id)arg10;
- (id)initWithRefreshDate:(id)arg1 activeGroupEmitterIDs:(id)arg2 isOffline:(BOOL)arg3 forYouConfig:(id)arg4;
- (BOOL)isEqual:(id)arg1;

@end

