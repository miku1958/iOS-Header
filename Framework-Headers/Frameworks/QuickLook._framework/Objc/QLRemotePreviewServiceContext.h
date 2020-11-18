//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <QuickLook/QLRemotePreviewHost-Protocol.h>

@class NSString, UIViewController;
@protocol QLPreviewingController;

@interface QLRemotePreviewServiceContext : NSExtensionContext <QLRemotePreviewHost>
{
    UIViewController<QLPreviewingController> *_previewViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)getPrinterProxyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadPreviewFromPreviewItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)previewDidAppear:(BOOL)arg1;
- (void)previewDidDisappear:(BOOL)arg1;
- (void)previewWillAppear:(BOOL)arg1;
- (void)previewWillDisappear:(BOOL)arg1;
- (void)previewWillFinishAppearing;
- (id)protocolHost;

@end

