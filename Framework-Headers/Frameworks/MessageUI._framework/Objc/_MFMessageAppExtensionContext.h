//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <MessageUI/MFMessageContextDelegate-Protocol.h>
#import <MessageUI/_MFMessageComposeExtensionProtocol-Protocol.h>

@class NSString, _MFMessageContext;

@interface _MFMessageAppExtensionContext : NSExtensionContext <MFMessageContextDelegate, _MFMessageComposeExtensionProtocol>
{
    _MFMessageContext *_messageContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _MFMessageContext *messageContext; // @synthesize messageContext=_messageContext;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)_cancelComposingMessage;
- (void)_startComposingMessageWithInput:(id)arg1;
- (id)remoteProxy;
- (void)stageAppItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stageMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)viewController;

@end

