//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MFOfflineCacheReplayContext : NSObject
{
    NSString *_selectedMailboxID;
    NSMutableDictionary *_translatedIDsByTemporaryID;
    NSMutableDictionary *_failureSnapshotsByTemporaryID;
}

@property (readonly, nonatomic) NSMutableDictionary *failureSnapshotsByTemporaryID; // @synthesize failureSnapshotsByTemporaryID=_failureSnapshotsByTemporaryID;
@property (copy, nonatomic) NSString *selectedMailboxID; // @synthesize selectedMailboxID=_selectedMailboxID;
@property (readonly, nonatomic) NSMutableDictionary *translatedIDsByTemporaryID; // @synthesize translatedIDsByTemporaryID=_translatedIDsByTemporaryID;

- (void)dealloc;
- (id)init;

@end

