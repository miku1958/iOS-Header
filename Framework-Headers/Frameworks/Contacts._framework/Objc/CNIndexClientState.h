//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class CNChangeHistoryAnchor;

__attribute__((visibility("hidden")))
@interface CNIndexClientState : NSObject <NSSecureCoding>
{
    BOOL _isFullSyncDone;
    long long _indexVersion;
    CNChangeHistoryAnchor *_fullSyncSnapshotAnchor;
    long long _fullSyncOffset;
}

@property (nonatomic) long long fullSyncOffset; // @synthesize fullSyncOffset=_fullSyncOffset;
@property (strong, nonatomic) CNChangeHistoryAnchor *fullSyncSnapshotAnchor; // @synthesize fullSyncSnapshotAnchor=_fullSyncSnapshotAnchor;
@property (nonatomic) long long indexVersion; // @synthesize indexVersion=_indexVersion;
@property (nonatomic) BOOL isFullSyncDone; // @synthesize isFullSyncDone=_isFullSyncDone;

+ (id)clientStateWithData:(id)arg1 logger:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

