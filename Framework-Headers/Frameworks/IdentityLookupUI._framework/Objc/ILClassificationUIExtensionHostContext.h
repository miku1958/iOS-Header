//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <IdentityLookupUI/ILClassificationUIExtensionHostProtocol-Protocol.h>

@class NSObject, NSString;
@protocol ILClassificationUIExtensionHostContextDelegate, OS_dispatch_queue;

@interface ILClassificationUIExtensionHostContext : NSExtensionContext <ILClassificationUIExtensionHostProtocol>
{
    id<ILClassificationUIExtensionHostContextDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ILClassificationUIExtensionHostContextDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)classificationResponseForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForClassificationRequest:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (oneway void)setReadyForClassificationResponse:(BOOL)arg1;

@end

