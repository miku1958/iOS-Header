//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <IdentityLookup/ILMessageFilterExtensionHostProtocol-Protocol.h>

@class NSString;

@interface ILMessageFilterExtensionHostContext : NSExtensionContext <ILMessageFilterExtensionHostProtocol>
{
    CDUnknownBlockType _deferQueryRequestToNetwork;
    CDUnknownBlockType _deferReportRequestToNetwork;
}

@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType deferQueryRequestToNetwork; // @synthesize deferQueryRequestToNetwork=_deferQueryRequestToNetwork;
@property (copy, nonatomic) CDUnknownBlockType deferReportRequestToNetwork; // @synthesize deferReportRequestToNetwork=_deferReportRequestToNetwork;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (oneway void)deferQueryRequestToNetworkWithReply:(CDUnknownBlockType)arg1;
- (oneway void)deferReportRequestToNetworkWithReply:(CDUnknownBlockType)arg1;
- (void)finish;
- (void)handleQueryRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleReportRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;

@end
