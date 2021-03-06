//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSDownload, SSDownloadAsset, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSDownloadSession : NSObject
{
    SSXPCConnection *_controlConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _sessionID;
    long long _assetID;
    long long _downloadID;
}

@property (readonly) SSDownload *download;
@property (readonly) SSDownloadAsset *downloadAsset;

- (id)_copySessionPropertyWithKey:(const char *)arg1;
- (id)_initSSDownloadSession;
- (id)_initWithMessage:(id)arg1 controlConnection:(id)arg2;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

