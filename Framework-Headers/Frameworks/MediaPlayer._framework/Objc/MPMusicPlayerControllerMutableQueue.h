//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMusicPlayerControllerQueue.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MPMusicPlayerControllerMutableQueue : MPMusicPlayerControllerQueue
{
    NSMutableDictionary *_insertions;
    NSMutableArray *_queueDescriptorsToPrepend;
    NSMutableArray *_itemsToRemove;
}

@property (readonly, nonatomic) BOOL hasModifications;
@property (readonly, copy, nonatomic) NSArray *queueDescriptorsToPrepend;
@property (readonly, copy, nonatomic) NSDictionary *queueInsertions;
@property (readonly, copy, nonatomic) NSArray *removals;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)insertQueueDescriptor:(id)arg1 afterItem:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)removeItem:(id)arg1;

@end

