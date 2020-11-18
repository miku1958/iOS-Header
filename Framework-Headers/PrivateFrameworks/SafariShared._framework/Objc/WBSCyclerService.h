//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSXPCListenerDelegate-Protocol.h>
#import <SafariShared/WBSCyclerServiceProtocol-Protocol.h>

@class NSString, NSXPCListener, WBSCyclerTestRunner, WBSCyclerTestTargetProxyController;
@protocol WBSCyclerTestSuite;

@interface WBSCyclerService : NSObject <NSXPCListenerDelegate, WBSCyclerServiceProtocol>
{
    NSXPCListener *_xpcListener;
    WBSCyclerTestTargetProxyController *_testTargetProxyController;
    Class _testSuiteClass;
    id<WBSCyclerTestSuite> _testSuite;
    WBSCyclerTestRunner *_testRunner;
    NSString *_identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_postFinishNotificationWithError:(id)arg1;
- (void)_setSeed:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_setTestSuiteName:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_startCyclingFromBeginning:(BOOL)arg1;
- (void)fetchStatusWithReply:(CDUnknownBlockType)arg1;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)sendRequestToTestSuite:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setTestTargetEndpoint:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forConfigurationKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)startCyclingFromBeginning:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)stopCyclingWithReply:(CDUnknownBlockType)arg1;

@end

