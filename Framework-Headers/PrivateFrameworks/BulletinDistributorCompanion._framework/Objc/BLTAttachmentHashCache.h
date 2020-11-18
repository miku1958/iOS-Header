//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BLTAttachmentHashCache : NSObject
{
    NSMutableDictionary *_cacheBySectionID;
}

- (void).cxx_destruct;
- (id)_hashAttachment:(id)arg1 forSectionID:(id)arg2 matchID:(id)arg3;
- (void)cacheAttachment:(id)arg1 forSectionID:(id)arg2 matchID:(id)arg3;
- (BOOL)hasAttachmentForSectionID:(id)arg1 matchID:(id)arg2;
- (id)init;
- (BOOL)isAttachmentCached:(id)arg1 forSectionID:(id)arg2 matchID:(id)arg3;
- (void)removeAttachmentForSectionID:(id)arg1 matchID:(id)arg2;

@end

