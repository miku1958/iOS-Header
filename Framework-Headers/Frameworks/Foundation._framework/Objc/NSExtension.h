//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/_NSExtensionContextHosting-Protocol.h>

@class BKSProcessAssertion, NSArray, NSBundle, NSDictionary, NSMutableDictionary, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue, PKPlugIn;

@interface NSExtension : NSObject <_NSExtensionContextHosting>
{
    BOOL _observingHostAppStateChanges;
    NSString *_identifier;
    NSString *_version;
    NSDictionary *_attributes;
    NSDictionary *_infoDictionary;
    NSString *_extensionPointIdentifier;
    CDUnknownBlockType _requestCompletionBlock;
    CDUnknownBlockType _requestCancellationBlock;
    CDUnknownBlockType _requestInterruptionBlock;
    id __stashedPlugInConnection;
    id<PKPlugIn> __plugIn;
    NSBundle *__extensionBundle;
    CDUnknownBlockType __requestPostCompletionBlock;
    CDUnknownBlockType __requestPostCompletionBlockWithItems;
    NSMutableDictionary *__extensionExpirationIdentifiers;
    NSMutableDictionary *__extensionServiceConnections;
    NSMutableDictionary *__extensionContexts;
    NSSet *__allowedErrorClasses;
    BKSProcessAssertion *__extensionProcessAssertion;
    long long __assertionRefCount;
    NSUUID *_connectionUUID;
    NSObject<OS_dispatch_queue> *__safePluginQueue;
}

@property (copy, nonatomic, setter=_setAllowedErrorClasses:) NSSet *_allowedErrorClasses; // @synthesize _allowedErrorClasses=__allowedErrorClasses;
@property (nonatomic, setter=_setAssertionRefCount:) long long _assertionRefCount; // @synthesize _assertionRefCount=__assertionRefCount;
@property (strong, nonatomic, setter=_setExtensionBundle:) NSBundle *_extensionBundle; // @synthesize _extensionBundle=__extensionBundle;
@property (strong, nonatomic, setter=_setExtensionContexts:) NSMutableDictionary *_extensionContexts; // @synthesize _extensionContexts=__extensionContexts;
@property (strong, nonatomic, setter=_setExtensionExpirationsIdentifiers:) NSMutableDictionary *_extensionExpirationIdentifiers; // @synthesize _extensionExpirationIdentifiers=__extensionExpirationIdentifiers;
@property (strong, nonatomic, setter=_setExtensionProcessAssertion:) BKSProcessAssertion *_extensionProcessAssertion; // @synthesize _extensionProcessAssertion=__extensionProcessAssertion;
@property (strong, nonatomic, setter=_setExtensionServiceConnections:) NSMutableDictionary *_extensionServiceConnections; // @synthesize _extensionServiceConnections=__extensionServiceConnections;
@property (copy, nonatomic, getter=_extensionState, setter=_setExtensionState:) NSDictionary *_extensionState; // @dynamic _extensionState;
@property (readonly, nonatomic, getter=_isMarkedNew) BOOL _markedNew;
@property (strong, nonatomic, setter=_setPlugIn:) id<PKPlugIn> _plugIn; // @synthesize _plugIn=__plugIn;
@property (copy, nonatomic) CDUnknownBlockType _requestPostCompletionBlock; // @synthesize _requestPostCompletionBlock=__requestPostCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType _requestPostCompletionBlockWithItems; // @synthesize _requestPostCompletionBlockWithItems=__requestPostCompletionBlockWithItems;
@property (nonatomic) NSObject<OS_dispatch_queue> *_safePluginQueue; // @synthesize _safePluginQueue=__safePluginQueue;
@property (strong) id _stashedPlugInConnection; // @synthesize _stashedPlugInConnection=__stashedPlugInConnection;
@property (copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property (copy, nonatomic) NSUUID *connectionUUID; // @synthesize connectionUUID=_connectionUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *extensionPointIdentifier; // @synthesize extensionPointIdentifier=_extensionPointIdentifier;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *icons; // @dynamic icons;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property (nonatomic, getter=_isObservingHostAppStateChanges, setter=_setObservingHostAppStateChanges:) BOOL observingHostAppStateChanges; // @synthesize observingHostAppStateChanges=_observingHostAppStateChanges;
@property (readonly, nonatomic) BOOL optedIn;
@property (copy, nonatomic) CDUnknownBlockType requestCancellationBlock; // @synthesize requestCancellationBlock=_requestCancellationBlock;
@property (copy, nonatomic) CDUnknownBlockType requestCompletionBlock; // @synthesize requestCompletionBlock=_requestCompletionBlock;
@property (copy, nonatomic) CDUnknownBlockType requestInterruptionBlock; // @synthesize requestInterruptionBlock=_requestInterruptionBlock;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *version; // @synthesize version=_version;

+ (BOOL)_shouldLogExtensionDiscovery;
+ (id)beginMatchingExtensionsWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)endMatchingExtensions:(id)arg1;
+ (BOOL)evaluateActivationRule:(id)arg1 withExtensionItemsRepresentation:(id)arg2;
+ (id)extensionWithIdentifier:(id)arg1 error:(id *)arg2;
+ (id)extensionWithIdentifier:(id)arg1 excludingDisabledExtensions:(BOOL)arg2 error:(id *)arg3;
+ (void)extensionsWithMatchingAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)extensionsWithMatchingAttributes:(id)arg1 error:(id *)arg2;
+ (void)initialize;
+ (void)initializeFiltering;
+ (id)predicateForActivationRule:(id)arg1;
- (id)_bareExtensionServiceConnection;
- (void)_cancelRequestWithError:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_completeRequestReturningItems:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_didCreateExtensionContext:(id)arg1;
- (void)_didShowExtensionManagementInterface;
- (void)_didShowNewExtensionIndicator;
- (id)_extensionContextForUUID:(id)arg1;
- (void)_hostDidBecomeActiveNote:(id)arg1;
- (void)_hostDidEnterBackgroundNote:(id)arg1;
- (void)_hostWillEnterForegroundNote:(id)arg1;
- (void)_hostWillResignActiveNote:(id)arg1;
- (id)_initWithPKPlugin:(id)arg1;
- (BOOL)_isPhotoServiceAccessGranted;
- (BOOL)_isSystemExtension;
- (id)_itemProviderForPayload:(id)arg1 extensionContext:(id)arg2;
- (void)_kill:(int)arg1;
- (void)_loadItemForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_loadPreviewImageForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)_plugInProcessIdentifier;
- (void)_reallyBeginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_resetExtensionState;
- (void)_safelyBeginUsing:(CDUnknownBlockType)arg1;
- (void)_safelyEndUsing:(CDUnknownBlockType)arg1;
- (void)_safelyEndUsingWithProcessAssertion:(id)arg1 continuation:(CDUnknownBlockType)arg2;
- (BOOL)_wantsProcessPerRequest;
- (BOOL)attemptOptIn:(id *)arg1;
- (BOOL)attemptOptOut:(id *)arg1;
- (void)beginExtensionRequestWithInputItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginExtensionRequestWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelExtensionRequestWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (int)pidForRequestIdentifier:(id)arg1;

@end
