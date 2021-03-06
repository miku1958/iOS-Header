//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMTransferServices/IMTransferServicesController.h>

@interface IMTransferServicesController (IMTransferServicesController_PreviewGeneration)
- (BOOL)failTransfersOnPreviewGenerationFailure;
- (void)generatePreviewForTransfer:(id)arg1 attachmentPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)receiveFileTransfer:(id)arg1 transferGUID:(id)arg2 topic:(id)arg3 path:(id)arg4 requestURLString:(id)arg5 ownerID:(id)arg6 signature:(id)arg7 decryptionKey:(id)arg8 fileSize:(unsigned long long)arg9 generatePreview:(BOOL)arg10 progressBlock:(CDUnknownBlockType)arg11 completionBlock:(CDUnknownBlockType)arg12;
- (id)transferServicesController;
@end

