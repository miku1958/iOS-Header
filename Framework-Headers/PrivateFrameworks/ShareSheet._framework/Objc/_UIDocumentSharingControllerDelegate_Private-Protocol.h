//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShareSheet/NSObject-Protocol.h>

@class UIDocumentSharingController;

@protocol _UIDocumentSharingControllerDelegate_Private <NSObject>

@optional
- (void)_documentSharingControllerDidDismiss:(UIDocumentSharingController *)arg1;
- (void)_documentSharingControllerDidModifyShare:(UIDocumentSharingController *)arg1;
- (void)_documentSharingControllerDidStopSharing:(UIDocumentSharingController *)arg1;
- (void)_documentSharingControllerPerformAuxiliaryAction:(UIDocumentSharingController *)arg1 completion:(void (^)(void))arg2;
@end
