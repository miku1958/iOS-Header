//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExtensionKit/NSCopying-Protocol.h>
#import <ExtensionKit/NSSecureCoding-Protocol.h>
#import <ExtensionKit/NSXPCListenerDelegate-Protocol.h>
#import <ExtensionKit/_NSExtensionAuxHostingBase-Protocol.h>
#import <ExtensionKit/_NSExtensionContextInternalImplementation-Protocol.h>

@class NSArray, NSExtensionContext, NSString, NSUUID, NSXPCConnection, NSXPCListener;
@protocol EXExtensionContextHosting, EXExtensionContextVending, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface EXExtensionContextImplementation : NSObject <NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase, _NSExtensionContextInternalImplementation>
{
    BOOL __dummyExtension;
    CDUnknownBlockType __requestCleanUpBlock;
    NSExtensionContext *_extensionContext;
    id<EXExtensionContextHosting> __extensionHostProxy;
    NSObject<OS_os_transaction> *__transaction;
    id __principalObject;
    id __processAssertion;
    id<EXExtensionContextVending> __extensionVendorProxy;
    NSXPCListener *__auxiliaryListener;
    NSUUID *__UUID;
    NSArray *_inputItems;
    NSXPCConnection *__auxiliaryConnection;
    CDStruct_4c969caf __extensionHostAuditToken;
}

@property (copy, nonatomic) NSUUID *_UUID; // @synthesize _UUID=__UUID;
@property (strong, nonatomic, setter=_setAuxiliaryConnection:) NSXPCConnection *_auxiliaryConnection; // @synthesize _auxiliaryConnection=__auxiliaryConnection;
@property (strong, setter=_setAuxiliaryListener:) NSXPCListener *_auxiliaryListener; // @synthesize _auxiliaryListener=__auxiliaryListener;
@property (getter=_isDummyExtension, setter=_setDummyExtension:) BOOL _dummyExtension; // @synthesize _dummyExtension=__dummyExtension;
@property (setter=_setExtensionHostAuditToken:) CDStruct_4c969caf _extensionHostAuditToken; // @synthesize _extensionHostAuditToken=__extensionHostAuditToken;
@property (strong, setter=_setExtensionHostProxy:) id<EXExtensionContextHosting> _extensionHostProxy; // @synthesize _extensionHostProxy=__extensionHostProxy;
@property (strong, setter=_setExtensionVendorProxy:) id<EXExtensionContextVending> _extensionVendorProxy; // @synthesize _extensionVendorProxy=__extensionVendorProxy;
@property (setter=_setPrincipalObject:) id _principalObject; // @synthesize _principalObject=__principalObject;
@property (strong, setter=_setProcessAssertion:) id _processAssertion; // @synthesize _processAssertion=__processAssertion;
@property (copy, setter=_setRequestCleanUpBlock:) CDUnknownBlockType _requestCleanUpBlock; // @synthesize _requestCleanUpBlock=__requestCleanUpBlock;
@property (strong, getter=_transaction, setter=_setTransaction:) NSObject<OS_os_transaction> *_transaction; // @synthesize _transaction=__transaction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic, setter=_setInputItems:) NSArray *inputItems; // @synthesize inputItems=_inputItems;
@property (readonly) Class superclass;

+ (id)_defaultExtensionContextProtocol;
+ (id)_defaultExtensionContextVendorProtocol;
+ (id)_derivedExtensionAuxiliaryHostProtocolWithContextClass:(Class)arg1;
+ (id)_extensionContextForIdentifier:(id)arg1;
+ (id)_extensionContextHostProtocolAllowedClassesForItems;
+ (id)_extensionContextHostProtocolWithAllowedErrorClasses:(id)arg1;
+ (id)_extensionContextVendorProtocolWithAllowedErrorClasses:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)___nsx_pingHost:(CDUnknownBlockType)arg1;
- (void)_completeRequestReturningItemsSecondHalf:(CDUnknownBlockType)arg1;
- (void)_initializeAuxillaryConnectionWithListenerEndpoint:(id)arg1;
- (BOOL)_isHost;
- (void)_loadItemForPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_loadPreviewImageForPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_willPerformHostCallback:(CDUnknownBlockType)arg1;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 extensionContext:(id)arg4;
- (void)invalidate;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
