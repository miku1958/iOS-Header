//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/RWIProtocolPageDomainHandler-Protocol.h>

@class IKJSInspectorController, NSString, RWIProtocolPageFrameResourceTree;

@interface IKJSInspectorPageAgent : NSObject <RWIProtocolPageDomainHandler>
{
    RWIProtocolPageFrameResourceTree *_resourceTree;
    IKJSInspectorController *_controller;
    NSString *_currentFrameIdentifier;
}

@property (readonly, weak, nonatomic) IKJSInspectorController *controller; // @synthesize controller=_controller;
@property (strong, nonatomic) NSString *currentFrameIdentifier; // @synthesize currentFrameIdentifier=_currentFrameIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) RWIProtocolPageFrameResourceTree *resourceTree; // @synthesize resourceTree=_resourceTree;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dispatchEventWithBlock:(CDUnknownBlockType)arg1;
- (void)disableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)documentDidChange;
- (void)enableWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (void)getResourceContentWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 frameId:(id)arg3 url:(id)arg4;
- (void)getResourceTreeWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2;
- (id)initWithInspectorController:(id)arg1;
- (void)reloadWithErrorCallback:(CDUnknownBlockType)arg1 successCallback:(CDUnknownBlockType)arg2 ignoreCache:(BOOL *)arg3 revalidateAllResources:(BOOL *)arg4;

@end

