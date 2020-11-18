//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>
#import <Foundation/NSXPCListenerDelegate-Protocol.h>
#import <Foundation/_NSExtensionAuxHostingBase-Protocol.h>

@class NSArray, NSString, NSUUID, NSXPCConnection, NSXPCListener;
@protocol OS_os_transaction, _NSExtensionContextHosting, _NSExtensionContextVending;

@interface NSExtensionContext : NSObject <NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase>
{
    BOOL __dummyExtension;
    NSArray *_inputItems;
    NSUUID *__UUID;
    CDUnknownBlockType __requestCleanUpBlock;
    id<_NSExtensionContextHosting> __extensionHostProxy;
    id<_NSExtensionContextVending> __extensionVendorProxy;
    NSXPCConnection *__auxiliaryConnection;
    NSXPCListener *__auxiliaryListener;
    id __processAssertion;
    id __principalObject;
    NSObject<OS_os_transaction> *__transaction;
    CDStruct_4c969caf __extensionHostAuditToken;
}

@property (copy, nonatomic) NSUUID *_UUID; // @synthesize _UUID=__UUID;
@property (strong, nonatomic, setter=_setAuxiliaryConnection:) NSXPCConnection *_auxiliaryConnection; // @synthesize _auxiliaryConnection=__auxiliaryConnection;
@property (strong, nonatomic, setter=_setAuxiliaryListener:) NSXPCListener *_auxiliaryListener; // @synthesize _auxiliaryListener=__auxiliaryListener;
@property (nonatomic, getter=_isDummyExtension, setter=_setDummyExtension:) BOOL _dummyExtension; // @synthesize _dummyExtension=__dummyExtension;
@property (setter=_setExtensionHostAuditToken:) CDStruct_4c969caf _extensionHostAuditToken; // @synthesize _extensionHostAuditToken=__extensionHostAuditToken;
@property (strong, setter=_setExtensionHostProxy:) id<_NSExtensionContextHosting> _extensionHostProxy; // @synthesize _extensionHostProxy=__extensionHostProxy;
@property (strong, nonatomic, setter=_setExtensionVendorProxy:) id<_NSExtensionContextVending> _extensionVendorProxy; // @synthesize _extensionVendorProxy=__extensionVendorProxy;
@property (nonatomic, setter=_setPrincipalObject:) id _principalObject; // @synthesize _principalObject=__principalObject;
@property (strong, setter=_setProcessAssertion:) id _processAssertion; // @synthesize _processAssertion=__processAssertion;
@property (copy, nonatomic, setter=_setRequestCleanUpBlock:) CDUnknownBlockType _requestCleanUpBlock; // @synthesize _requestCleanUpBlock=__requestCleanUpBlock;
@property (strong, getter=_transaction, setter=_setTransaction:) NSObject<OS_os_transaction> *_transaction; // @synthesize _transaction=__transaction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic, setter=_setInputItems:) NSArray *inputItems; // @synthesize inputItems=_inputItems;
@property (readonly) Class superclass;

+ (id)_allowedErrorClasses;
+ (id)_defaultExtensionContextProtocol;
+ (id)_defaultExtensionContextVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionContextForIdentifier:(id)arg1;
+ (id)_extensionContextHostProtocolAllowedClassesForItems;
+ (id)_extensionContextHostProtocolWithAllowedErrorClasses:(id)arg1;
+ (id)_extensionContextVendorProtocolWithAllowedErrorClasses:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void)___nsx_pingHost:(CDUnknownBlockType)arg1;
- (void)_completeRequestReturningItemsSecondHalf:(CDUnknownBlockType)arg1;
- (id)_derivedExtensionAuxiliaryHostProtocol;
- (BOOL)_isHost;
- (void)_loadItemForPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_loadPreviewImageForPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_willPerformHostCallback:(CDUnknownBlockType)arg1;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)didConnectToVendor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputItems:(id)arg1;
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)invalidate;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

