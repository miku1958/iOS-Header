//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUWiFiScanner : NSObject
{
    BOOL _activateCalled;
    struct NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _scanning;
    NSObject<OS_dispatch_source> *_scanTimer;
    BOOL _suspended;
    struct LogCategory *_ucat;
    unsigned int _changeFlags;
    unsigned int _scanFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    NSString *_ssid;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
@property (copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) unsigned int scanFlags; // @synthesize scanFlags=_scanFlags;
@property (copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_invalidated;
- (void)_scanWiFiFinished:(id)arg1 status:(int)arg2;
- (void)_scanWiFiProcessResult:(id)arg1;
- (void)_scanWiFiStart;
- (void)activate;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)resume;
- (void)suspend;

@end

