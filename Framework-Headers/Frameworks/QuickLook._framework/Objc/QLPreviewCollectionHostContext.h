//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <QuickLook/QLPreviewCollectionServiceProtocol-Protocol.h>

@interface QLPreviewCollectionHostContext : NSExtensionContext <QLPreviewCollectionServiceProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (id)_protocolService;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (void)getNetworkObserverWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(BOOL)arg1;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)invalidatePreviewCollection;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)keyCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setAllowInteractiveTransitions:(BOOL)arg1;
- (void)setAppearance:(id)arg1 animated:(BOOL)arg2;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)setLoadingString:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)tearDownTransition:(BOOL)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1;
- (void)toolbarButtonsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

