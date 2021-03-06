//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedGroupInsertionDescriptor-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class FCFeedGroupEmittingContext, FCFeedGroupEmittingCursor, FCFeedGroupEmittingOperation, NSSet, NSString;
@protocol FCCoreConfiguration, FCFeedGroupOutlining;

@protocol FCFeedGroupEmitting <FCFeedGroupInsertionDescriptor, NSObject>

@property (readonly, nonatomic) BOOL emitsSingleRefreshSessionGroups;
@property (readonly, nonatomic) BOOL emitsSingletonGroups;
@property (readonly, copy, nonatomic) NSSet *emittableGroupTypes;
@property (readonly, nonatomic) BOOL isRequiredByFollowingEmitters;
@property (readonly, nonatomic) long long requiredForYouContentTypes;
@property (readonly, nonatomic) BOOL requiresHeavyweightContent;
@property (readonly, nonatomic) BOOL shouldEmitContentInFavoritesOnlyMode;

+ (NSString *)groupEmitterIdentifier;
- (FCFeedGroupEmittingOperation *)operationToEmitGroupWithContext:(FCFeedGroupEmittingContext *)arg1 fromCursor:(FCFeedGroupEmittingCursor *)arg2 toCursor:(FCFeedGroupEmittingCursor *)arg3;
- (BOOL)wantsToEmitGroupInContext:(FCFeedGroupEmittingContext *)arg1 fromCursor:(FCFeedGroupEmittingCursor *)arg2 toCursor:(FCFeedGroupEmittingCursor *)arg3;

@optional
+ (BOOL)canMergeGroupsUnconditionally;
- (NSString *)backingChannelTagIDWithConfiguration:(id<FCCoreConfiguration>)arg1;
- (BOOL)canDeferEmittingGroupInContext:(FCFeedGroupEmittingContext *)arg1;
- (BOOL)canMergeHeadlinesFromGroup:(id<FCFeedGroupOutlining>)arg1 intoGroup:(id<FCFeedGroupOutlining>)arg2;
- (BOOL)supportsPagination;
@end

