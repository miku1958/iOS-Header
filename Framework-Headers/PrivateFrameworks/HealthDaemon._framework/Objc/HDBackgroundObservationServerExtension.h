//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension, NSString, NSUUID, _HKBackgroundObservationExtensionHostContext, _HKBackgroundObservationExtensionRemoteContext;
@protocol OS_dispatch_queue;

@interface HDBackgroundObservationServerExtension : NSObject
{
    NSExtension *_extension;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSUUID *_sessionUUID;
    _HKBackgroundObservationExtensionHostContext *_extensionHostContext;
    _HKBackgroundObservationExtensionRemoteContext *_extensionContext;
    BOOL _unitTest_notifiedExtensionDueToTimeout;
    NSString *_extensionIdentifier;
    NSString *_appIdentifier;
}

@property (readonly, copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property (readonly, copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property (nonatomic) BOOL unitTest_notifiedExtensionDueToTimeout; // @synthesize unitTest_notifiedExtensionDueToTimeout=_unitTest_notifiedExtensionDueToTimeout;

- (void).cxx_destruct;
- (id)_initWithExtension:(id)arg1;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (void)disconnect;
- (id)init;
- (void)notifyExtensionOfUpcomingTimeout;
- (void)notifyExtensionOfUpdateForSampleType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)unitTest_extensionContext;
- (id)unitTest_extensionHostContext;
- (id)unitTest_queue;
- (id)unitTest_sessionUUID;

@end

