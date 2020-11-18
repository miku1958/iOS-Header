//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSServiceConnectionListenerDelegate-Protocol.h>
#import <SpringBoard/SBSWidgetMetricsServiceServerInterface-Protocol.h>

@class BSServiceConnectionListener, FBServiceClientAuthenticator, NSMutableArray, NSString;
@protocol OS_dispatch_queue, SBSWidgetMetricsProviding;

@interface SBWidgetMetricsServer : NSObject <BSServiceConnectionListenerDelegate, SBSWidgetMetricsServiceServerInterface>
{
    id<SBSWidgetMetricsProviding> _metricsProvider;
    NSMutableArray *_connections;
    FBServiceClientAuthenticator *_authenticator;
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) FBServiceClientAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property (readonly, copy, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
@property (readonly, weak, nonatomic) id<SBSWidgetMetricsProviding> metricsProvider; // @synthesize metricsProvider=_metricsProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithMetricsProvider:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)previewMetricsSpecificationForBundleIdentifier:(id)arg1;
- (id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3;
- (id)systemMetricsForWidget:(id)arg1;

@end
