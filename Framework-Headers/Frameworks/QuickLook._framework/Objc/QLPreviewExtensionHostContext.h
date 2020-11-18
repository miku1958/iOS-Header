//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <QuickLook/QLRemotePreviewService-Protocol.h>

@class NSString, QLRemoteItemViewController;

__attribute__((visibility("hidden")))
@interface QLPreviewExtensionHostContext : NSExtensionContext <QLRemotePreviewService>
{
    QLRemoteItemViewController *_remoteItemViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) QLRemoteItemViewController *remoteItemViewController; // @synthesize remoteItemViewController=_remoteItemViewController;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)getPrinterProxyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateService;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)previewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)previewControllerDidUpdateTitle:(id)arg1;
- (void)previewControllerWantsFullScreen:(BOOL)arg1;
- (void)previewDidAppear:(BOOL)arg1;
- (void)previewDidDisappear:(BOOL)arg1;
- (void)previewWillAppear:(BOOL)arg1;
- (void)previewWillDisappear:(BOOL)arg1;
- (id)protocolService;
- (id)protocolServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)setAppearance:(id)arg1 animated:(BOOL)arg2;
- (void)setHostViewControllerProxy:(id)arg1;

@end
