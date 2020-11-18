//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;
@protocol _WKAutomationSessionDelegate;

@interface _WKAutomationSession : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebAutomationSession> _session;
    struct WeakObjCPtr<id<_WKAutomationSessionDelegate>> _delegate;
}

@property (readonly) struct Object *_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_WKAutomationSessionDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

