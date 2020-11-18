//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BLTLightsAndSirensReplyInfoCache : NSObject
{
    NSMutableDictionary *_localReplyInfo;
    NSDate *_timeToCheck;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) NSMutableDictionary *localReplyInfo; // @synthesize localReplyInfo=_localReplyInfo;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSDate *timeToCheck; // @synthesize timeToCheck=_timeToCheck;

+ (id)sharedReplyCache;
- (void).cxx_destruct;
- (void)_addReplyInfo:(id)arg1 forSectionID:(id)arg2 bulletinID:(id)arg3;
- (void)_checkCache;
- (id)_firstReplyInfoWithNoDidPlayStateWithSectionID:(id)arg1 bulletinID:(id)arg2;
- (id)_firstReplyInfoWithNoReplyWithSectionID:(id)arg1 bulletinID:(id)arg2;
- (BOOL)_isTimeToCheck;
- (id)_keyForSectionID:(id)arg1 bulletinID:(id)arg2;
- (void)_setNextTimeToCheck;
- (void)cacheDidPlayLightsAndSirens:(unsigned long long)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3;
- (void)cacheReply:(CDUnknownBlockType)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3 publicationDate:(id)arg4;
- (id)init;
- (void)purgeReplyInfo:(id)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3;
- (id)retrieveReplyInfoWithSectionID:(id)arg1 bulletinID:(id)arg2;

@end

