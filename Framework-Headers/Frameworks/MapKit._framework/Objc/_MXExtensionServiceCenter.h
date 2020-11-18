//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, _MXExtensionProvider;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MXExtensionServiceCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_servicelock;
    NSObject<OS_dispatch_queue> *_extlock;
    NSMutableDictionary *_handlers;
    NSMutableDictionary *_backupHandlers;
    NSDictionary *_extensions;
    NSDictionary *_mapsExtensions;
    NSDictionary *_containingAppProxies;
    _MXExtensionProvider *_extensionProvider;
}

@property (copy, nonatomic) NSDictionary *containingAppProxies;
@property (readonly, weak, nonatomic) _MXExtensionProvider *extensionProvider; // @synthesize extensionProvider=_extensionProvider;
@property (copy, nonatomic) NSDictionary *extensions;
@property (copy, nonatomic) NSDictionary *mapsExtensions;

- (void).cxx_destruct;
- (void)_addExtension:(id)arg1;
- (void)_beginExtensionServiceWithExtension:(id)arg1 inputItems:(id)arg2 beginCompletion:(CDUnknownBlockType)arg3 serviceCompletion:(CDUnknownBlockType)arg4;
- (void)_beginExtensionServiceWithExtension:(id)arg1 inputItems:(id)arg2 remoteViewControllerInstantiationCompletion:(CDUnknownBlockType)arg3 serviceCompletion:(CDUnknownBlockType)arg4;
- (void)_clearExtensions;
- (id)_extensionWithIdentifier:(id)arg1;
- (void)_invokeHandlerWithRequestIdentifier:(id)arg1 returnItems:(id)arg2 error:(id)arg3;
- (void)_registerRequestIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_siblingExtensionsWithContainingAppIdentifer:(id)arg1;
- (id)allExtensions;
- (id)initWithExtensionProvider:(id)arg1;
- (void)receivedExtensions:(id)arg1 error:(id)arg2;

@end
