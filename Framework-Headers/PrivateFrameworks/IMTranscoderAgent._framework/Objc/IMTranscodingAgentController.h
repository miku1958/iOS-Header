//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface IMTranscodingAgentController : NSObject
{
    NSArray *_transcoders;
    NSArray *_fallbackTranscoders;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (id)_findTranscoderForUTI:(id)arg1;
- (void)_registerTranscoders;
- (void)dealloc;
- (void)generateSnapshotForMessageGUID:(id)arg1 payloadURL:(id)arg2 balloonBundleID:(id)arg3 isFromMe:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)init;
- (BOOL)shouldProcessFileTransfer:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 target:(long long)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 fallback:(BOOL)arg8 representations:(long long)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)transcodeFileTransferData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 fallBack:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

