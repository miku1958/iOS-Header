//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentCamera/NSObject-Protocol.h>

@class ICDocCamDocumentInfoCollection, ICDocCamImageCache, ICDocCamViewController, NSData;
@protocol DCDataCryptorDelegate, DCScanDataDelegate;

@protocol ICDocCamViewControllerDelegate <NSObject>
- (BOOL)documentCameraController:(ICDocCamViewController *)arg1 canAddImages:(unsigned long long)arg2;
- (id<DCDataCryptorDelegate>)documentCameraControllerCreateDataCryptorIfNecessary;
- (void)documentCameraControllerDidCancel:(ICDocCamViewController *)arg1;
- (id<DCScanDataDelegate>)scanDataDelegateWithIdentifier:(id)arg1;

@optional
- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithDocInfoCollection:(ICDocCamDocumentInfoCollection *)arg2 imageCache:(ICDocCamImageCache *)arg3 warnUser:(BOOL)arg4;
- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithDocInfoCollection:(ICDocCamDocumentInfoCollection *)arg2 imageCache:(ICDocCamImageCache *)arg3 warnUser:(BOOL)arg4 closeViewController:(BOOL)arg5;
- (void)documentCameraController:(ICDocCamViewController *)arg1 didFinishWithImage:(NSData *)arg2;
- (void)documentCameraControllerDidRetake:(ICDocCamViewController *)arg1 pageCount:(unsigned long long)arg2;
- (ICDocCamImageCache *)documentCameraControllerImageCache;
@end
