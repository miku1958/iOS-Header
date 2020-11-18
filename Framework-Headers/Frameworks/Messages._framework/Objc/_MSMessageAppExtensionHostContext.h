//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <Messages/_MSMessageComposeHostImplProtocol-Protocol.h>

@class NSString;
@protocol _MSMessageComposeHostProtocol;

@interface _MSMessageAppExtensionHostContext : NSExtensionContext <_MSMessageComposeHostImplProtocol>
{
    id<_MSMessageComposeHostProtocol> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_MSMessageComposeHostProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionContextHostProtocolAllowedClassesForItems;
- (void).cxx_destruct;
- (void)_contentDidLoad;
- (void)_dismiss;
- (void)_dismissAndPresentPhotosApp;
- (void)_openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_requestPresentationStyle:(unsigned long long)arg1;
- (void)_requestResize;
- (void)_stageAppItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stageMediaItem:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stageRichLink:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_updateSnapshotForNextLaunch:(id)arg1;

@end

