//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CUBonjourBrowser : NSObject
{
    BOOL _activateCalled;
    BOOL _activated;
    struct BonjourBrowser *_bonjourBrowser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_deviceMap;
    struct LogCategory *_ucat;
    BOOL _browseFlagsChanged;
    unsigned int _changeFlags;
    unsigned int _controlFlags;
    unsigned long long _browseFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_domain;
    NSString *_interfaceName;
    NSString *_label;
    NSString *_serviceType;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (nonatomic) unsigned long long browseFlags; // @synthesize browseFlags=_browseFlags;
@property (nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
@property (nonatomic) unsigned int controlFlags; // @synthesize controlFlags=_controlFlags;
@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property (readonly, copy) NSArray *devices;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property (copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;

- (void).cxx_destruct;
- (void)_activateSafeInvokeBlock:(CDUnknownBlockType)arg1;
- (void)_bonjourHandleAddOrUpdateDevice:(id)arg1;
- (void)_bonjourHandleEventType:(unsigned int)arg1 info:(id)arg2;
- (void)_bonjourHandleRemoveDevice:(id)arg1;
- (int)_bonjourStart;
- (void)_interrupted;
- (void)_invalidated;
- (void)_lostAllDevices;
- (void)_update;
- (void)_updateLocked;
- (void)activate;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)init;
- (void)invalidate;
- (void)update;

@end

