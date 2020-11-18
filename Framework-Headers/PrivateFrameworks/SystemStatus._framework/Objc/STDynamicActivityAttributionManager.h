//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemStatus/STDynamicActivityAttributionServerHandle-Protocol.h>

@class NSMutableDictionary, NSString, STDynamicActivityAttributionListener;
@protocol OS_dispatch_queue;

@interface STDynamicActivityAttributionManager : NSObject <STDynamicActivityAttributionServerHandle>
{
    STDynamicActivityAttributionListener *_dynamicAttributionListener;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_clientAttributionMap;
}

@property (strong, nonatomic) NSMutableDictionary *clientAttributionMap; // @synthesize clientAttributionMap=_clientAttributionMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) STDynamicActivityAttributionListener *dynamicAttributionListener; // @synthesize dynamicAttributionListener=_dynamicAttributionListener;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_internalQueue_setAttributionKey:(id)arg1 andApplication:(id)arg2 forClient:(id)arg3;
- (id)currentAttributedAppForClient:(id)arg1;
- (id)currentAttributionKeyForClient:(id)arg1;
- (id)init;
- (void)setLocalizableAttributionKey:(id)arg1 andApplication:(id)arg2 forClient:(id)arg3;

@end
