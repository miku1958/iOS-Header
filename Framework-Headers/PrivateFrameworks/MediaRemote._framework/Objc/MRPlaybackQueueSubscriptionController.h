//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSSecureCoding-Protocol.h>

@class MRPlayerPath, MSVMutableBidirectionalDictionary, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MRPlaybackQueueSubscriptionController : NSObject <NSSecureCoding>
{
    NSMutableArray *_requestFilters;
    NSMutableSet *_requests;
    MSVMutableBidirectionalDictionary *_offsets;
    NSObject<OS_dispatch_queue> *_queue;
    MRPlayerPath *_playerPath;
}

@property (readonly, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addRequest:(id)arg1;
- (void)augmentCommandOptions:(id)arg1 forCommand:(unsigned int)arg2;
- (id)contentItemIdentifierForOffset:(long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateFilteredContentItemsBySubscriptionsForContentItems:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)filteredContentItemsBySubscriptionsForContentItems:(id)arg1;
- (BOOL)hasRequest:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlayerPath:(id)arg1;
- (void)invalidate;
- (id)offsetForIdentifier:(id)arg1;
- (void)removeRequest:(id)arg1;
- (id)requestForSubscribedContentItemIdentifier:(id)arg1;
- (void)restoreStateFromController:(id)arg1;
- (void)subscribeToPlaybackQueue:(id)arg1 forRequest:(id)arg2;

@end
