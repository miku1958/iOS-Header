//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <IdentityLookupUI/ILClassificationUIExtensionVendorProtocol-Protocol.h>

@class NSString;

@interface ILClassificationUIExtensionContext : NSExtensionContext <ILClassificationUIExtensionVendorProtocol>
{
    BOOL _readyForClassificationResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isReadyForClassificationResponse) BOOL readyForClassificationResponse; // @synthesize readyForClassificationResponse=_readyForClassificationResponse;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (oneway void)classificationResponseForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)prepareForClassificationRequest:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)viewController;

@end

