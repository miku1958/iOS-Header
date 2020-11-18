//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSPlugInKitProxy, NSExtension, NSMutableDictionary;

@interface UNSNotificationServiceExtensionWrapper : NSObject
{
    NSExtension *_extension;
    double _serviceTime;
    double _pingTime;
    NSMutableDictionary *_extensionFinishedHandlers;
}

@property (readonly, copy, nonatomic) LSPlugInKitProxy *proxy; // @dynamic proxy;

+ (void)extensionWrapperForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (CDUnknownBlockType)_finishedHandlerForRequestIdentifier:(id)arg1;
- (void)_setFinishedHandler:(CDUnknownBlockType)arg1 forRequestIdentifier:(id)arg2;
- (void)_setupExtension;
- (void)didReceiveNotificationRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 watchdogHandler:(CDUnknownBlockType)arg3;
- (id)initWithExtension:(id)arg1 serviceTime:(double)arg2 graceTime:(double)arg3;

@end

