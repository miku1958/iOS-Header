//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKFileTransfer-Protocol.h>

@class IMMessage, NSDictionary, NSError, NSString, NSURL;

@interface CKDBFileTransfer : NSObject <CKFileTransfer>
{
    BOOL _isSticker;
    BOOL _hideAttachment;
    BOOL _isDirectory;
    NSString *_guid;
    NSURL *_fileURL;
    NSDictionary *_transcoderUserInfo;
    NSDictionary *_stickerUserInfo;
    NSString *_filename;
    long long _transferState;
    NSDictionary *_attributionInfo;
}

@property (strong, nonatomic) IMMessage *IMMessage; // @dynamic IMMessage;
@property (copy, nonatomic) NSDictionary *attributionInfo; // @synthesize attributionInfo=_attributionInfo;
@property (readonly, nonatomic) unsigned long long currentBytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDownloadable) BOOL downloadable;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isFileDataReady) BOOL fileDataReady;
@property (readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (readonly, nonatomic, getter=isFileURLFinalized) BOOL fileURLFinalized;
@property (copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property (readonly, copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hideAttachment; // @synthesize hideAttachment=_hideAttachment;
@property (readonly, nonatomic) BOOL isDirectory; // @synthesize isDirectory=_isDirectory;
@property (readonly, nonatomic) BOOL isSticker; // @synthesize isSticker=_isSticker;
@property (readonly, nonatomic, getter=isRestoring) BOOL restoring;
@property (readonly, copy, nonatomic) NSDictionary *stickerUserInfo; // @synthesize stickerUserInfo=_stickerUserInfo;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long totalBytes;
@property (readonly, copy, nonatomic) NSDictionary *transcoderUserInfo; // @synthesize transcoderUserInfo=_transcoderUserInfo;
@property (nonatomic) long long transferState; // @synthesize transferState=_transferState;

- (void).cxx_destruct;
- (void)fetchHighQualityFile:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(BOOL)arg4;
- (id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2;
- (void)mediaObjectAdded;
- (void)mediaObjectRemoved;

@end
