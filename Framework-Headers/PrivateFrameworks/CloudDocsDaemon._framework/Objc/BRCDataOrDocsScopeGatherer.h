//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCItemGlobalID, BRCNotificationPipe, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCDataOrDocsScopeGatherer : NSObject
{
    BRCNotificationPipe *_pipe;
    CDUnknownBlockType _gatherReply;
    NSMutableArray *_gatheringAppLibraries;
    unsigned long long _gatheringRankCur;
    unsigned long long _gatheringRankMax;
    NSString *_gatheringNamePrefix;
    BRCAccountSession *_session;
    BRCItemGlobalID *_gatheredChildrenItemGlobalID;
}

@property (strong, nonatomic) BRCItemGlobalID *gatheredChildrenItemGlobalID; // @synthesize gatheredChildrenItemGlobalID=_gatheredChildrenItemGlobalID;

- (void).cxx_destruct;
- (CDUnknownBlockType)_popGatherReply;
- (void)done;
- (void)gatherWithBatchSize:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNotificationPipe:(id)arg1 appLibraries:(id)arg2 startingRank:(unsigned long long)arg3 maxRank:(unsigned long long)arg4 gatherReply:(CDUnknownBlockType)arg5;
- (void)invalidate;

@end

