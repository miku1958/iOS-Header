//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface TIMobileAssetSyncState : NSObject
{
    BOOL _loadedState;
    long long _status;
    NSDate *_date;
    NSString *_buildVersion;
    long long _attemptCount;
}

@property (nonatomic) long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property (copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property (copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (nonatomic) long long status; // @synthesize status=_status;

+ (id)buildVersionString;
- (void)dealloc;
- (void)didSyncToRemoteMetadataWithError:(id)arg1;
- (id)initWithDate:(id)arg1 buildVersion:(id)arg2 status:(long long)arg3 attemptCount:(long long)arg4;
- (void)loadStateIfNecessary;
- (void)saveState;
- (BOOL)shouldSyncToRemoteMetadata;
- (void)updateState;

@end
