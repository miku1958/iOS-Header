//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IntentsCore/INCExtensionProxy-Protocol.h>

@class INCExtensionConnection, NSExtension;
@protocol INExtensionContextVending;

@interface INCExtensionProxy : NSObject <INCExtensionProxy>
{
    BOOL _shouldCache;
    INCExtensionConnection *_connection;
    NSExtension *_extension;
    id<INExtensionContextVending> _vendorRemote;
    CDUnknownBlockType _imageCachingHandler;
    CDUnknownBlockType _imageProcessingHandler;
    CDUnknownBlockType _responseHandler;
    CDUnknownBlockType _backgroundAppHandler;
}

@property (readonly, nonatomic) INCExtensionConnection *_connection; // @synthesize _connection;
@property (readonly, nonatomic) NSExtension *_extension; // @synthesize _extension;
@property (readonly, nonatomic, getter=_isExtensionBeingDebugged) BOOL _extensionBeingDebugged;
@property (readonly, nonatomic) id<INExtensionContextVending> _vendorRemote; // @synthesize _vendorRemote;
@property (copy, nonatomic) CDUnknownBlockType backgroundAppHandler; // @synthesize backgroundAppHandler=_backgroundAppHandler;
@property (copy, nonatomic) CDUnknownBlockType imageCachingHandler; // @synthesize imageCachingHandler=_imageCachingHandler;
@property (copy, nonatomic) CDUnknownBlockType imageProcessingHandler; // @synthesize imageProcessingHandler=_imageProcessingHandler;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property (nonatomic) BOOL shouldCache; // @synthesize shouldCache=_shouldCache;

+ (void)initialize;
- (void).cxx_destruct;
- (id)_initWithConnection:(id)arg1 extension:(id)arg2 vendorRemote:(id)arg3;
- (BOOL)_isIntentRestrictedWhileProtectedDataUnavailableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_processIntent:(id)arg1 intentResponse:(id)arg2 withCacheItems:(id)arg3;
- (void)confirmIntentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleIntentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

