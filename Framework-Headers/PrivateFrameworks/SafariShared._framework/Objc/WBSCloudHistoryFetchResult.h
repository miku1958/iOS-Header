//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface WBSCloudHistoryFetchResult : NSObject
{
    NSMutableArray *_mutableCloudHistoryVisits;
    NSMutableArray *_mutableHistoryTombstones;
    NSMutableDictionary *_mutableClientVersions;
    NSData *_serverChangeTokenData;
}

@property (readonly, nonatomic) NSDictionary *clientVersions;
@property (readonly, nonatomic) NSArray *cloudHistoryVisits;
@property (readonly, nonatomic) NSArray *historyTombstones;
@property (readonly, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;

- (void).cxx_destruct;
- (void)_addCloudHistoryVisit:(id)arg1;
- (void)_addHistoryTombstone:(id)arg1;
- (void)_setServerChangeTokenData:(id)arg1;
- (void)_updateClientVersion:(unsigned long long)arg1 seenAt:(id)arg2;
- (id)description;
- (id)init;

@end
