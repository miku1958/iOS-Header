//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGDHarvestQueueItem.h>

@class NSString, SGDHarvestQueueInMemory;

@interface SGDHarvestQueueItemInMemory : SGDHarvestQueueItem
{
    BOOL _highPriority;
    SGDHarvestQueueInMemory *_parentQueue;
    BOOL _inProgress;
    BOOL _beingDeleted;
    NSString *_sourceKey;
    NSString *_messageId;
}

@property BOOL beingDeleted; // @synthesize beingDeleted=_beingDeleted;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property (readonly, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property (readonly, nonatomic) NSString *sourceKey; // @synthesize sourceKey=_sourceKey;

- (void).cxx_destruct;
- (id)description;
- (void)finish;
- (BOOL)highPriority;
- (id)initWithItemId:(long long)arg1 item:(id)arg2 fails:(int)arg3 sourceKey:(id)arg4 messageId:(id)arg5 highPriority:(BOOL)arg6 customPriorityCriteria:(unsigned char)arg7 parentQueue:(id)arg8;
- (void)markAsFailed;

@end

