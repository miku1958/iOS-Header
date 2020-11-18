//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCFeedGroupEmittingContext, FCFeedGroupEmittingOperation, NSString;
@protocol FCFeedGroupOutlining, NSCoding;

@protocol FCFeedGroupEmitting <NSObject>

@property (readonly, nonatomic) BOOL emitsSingletonGroups;
@property (readonly, copy, nonatomic) NSString *groupEmitterIdentifier;
@property (readonly, nonatomic) BOOL isRequiredByFollowingEmitters;
@property (readonly, nonatomic) BOOL requiresForYouCatchUpOperation;

- (FCFeedGroupEmittingOperation *)operationToEmitGroupInContext:(FCFeedGroupEmittingContext *)arg1 withCursor:(id<NSCoding>)arg2 toCursor:(id<NSCoding>)arg3;
- (BOOL)wantsToEmitGroupInContext:(FCFeedGroupEmittingContext *)arg1 withCursor:(id<NSCoding>)arg2 toCursor:(id<NSCoding>)arg3;

@optional
- (BOOL)canMergeGroupsUnconditionally;
- (BOOL)canMergeHeadlinesFromGroup:(id<FCFeedGroupOutlining>)arg1 intoGroup:(id<FCFeedGroupOutlining>)arg2;
- (BOOL)supportsPagination;
@end

