//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <QuickLook/QLRemotePreviewHost-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLPreviewExtensionServiceContext_iOS : NSExtensionContext <QLRemotePreviewHost>
{
    BOOL _isObservingPreviewController;
    id _contents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)_startObservingPreviewControllerAttributeChanges;
- (void)_stopObservingPreviewControllerAttributeChanges;
- (void)dealloc;
- (void)getPrinterProxyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateService;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)previewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)previewControllerDidUpdateTitle:(id)arg1;
- (void)previewControllerWantsFullScreen:(BOOL)arg1;
- (void)previewDidAppear:(BOOL)arg1;
- (void)previewDidDisappear:(BOOL)arg1;
- (id)previewViewController;
- (void)previewWillAppear:(BOOL)arg1;
- (void)previewWillDisappear:(BOOL)arg1;
- (id)protocolHost;
- (void)setAppearance:(id)arg1 animated:(BOOL)arg2;
- (void)setHostViewControllerProxy:(id)arg1;

@end

