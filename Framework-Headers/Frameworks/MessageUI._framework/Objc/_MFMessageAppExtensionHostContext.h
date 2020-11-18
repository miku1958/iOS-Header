//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <MessageUI/_MFMessageComposeHostProtocol-Protocol.h>

@class NSString;
@protocol _MFMessageComposeHostProtocol;

@interface _MFMessageAppExtensionHostContext : NSExtensionContext <_MFMessageComposeHostProtocol>
{
    id<_MFMessageComposeHostProtocol> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) id<_MFMessageComposeHostProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)_stageAppItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_stageMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
