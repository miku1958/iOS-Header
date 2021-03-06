//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSURL;

@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding>
{
    NSURL *_passURL;
    NSDictionary *_remoteAssetsByTaskIdentifier;
    NSDictionary *_remoteAssetsByRecordName;
}

@property (strong, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property (strong, nonatomic) NSDictionary *remoteAssetsByRecordName; // @synthesize remoteAssetsByRecordName=_remoteAssetsByRecordName;
@property (strong, nonatomic) NSDictionary *remoteAssetsByTaskIdentifier; // @synthesize remoteAssetsByTaskIdentifier=_remoteAssetsByTaskIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasOutstandingRemoteAssetTasks;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeRemoteCloudStoreAssetForRecordName:(id)arg1;
- (void)removeRemoteURLAssetForTaskIdentifier:(id)arg1;
- (void)setRemoteCloudStoreAsset:(id)arg1 forRecordName:(id)arg2;
- (void)setRemoteURLAsset:(id)arg1 forTaskIdentifier:(id)arg2;

@end

