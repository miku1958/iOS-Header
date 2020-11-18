//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface IMTranscodeController : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;
- (BOOL)_connect;
- (void)_disconnected;
- (void)_transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 retries:(int)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)_transcodeFileTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 retries:(unsigned long long)arg4 fallBack:(BOOL)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)init;
- (void)transcodeFallbackFileTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)transcodeLocalTransferPayloadData:(id)arg1 balloonBundleID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
