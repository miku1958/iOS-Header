//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUNANServiceInfo, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CUNANPublisher : NSObject
{
    CDUnknownBlockType _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct NSMutableDictionary *_sessions;
    CUNANServiceInfo *_serviceInfo;
    struct LogCategory *_ucat;
    BOOL _dataPathEnabled;
    int _port;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    NSString *_name;
    NSString *_serviceType;
    NSDictionary *_textInfo;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _dataSessionStartedHandler;
    CDUnknownBlockType _dataSessionEndedHandler;
}

@property (nonatomic) BOOL dataPathEnabled; // @synthesize dataPathEnabled=_dataPathEnabled;
@property (copy, nonatomic) CDUnknownBlockType dataSessionEndedHandler; // @synthesize dataSessionEndedHandler=_dataSessionEndedHandler;
@property (copy, nonatomic) CDUnknownBlockType dataSessionStartedHandler; // @synthesize dataSessionStartedHandler=_dataSessionStartedHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) int port; // @synthesize port=_port;
@property (copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property (copy, nonatomic) NSDictionary *textInfo; // @synthesize textInfo=_textInfo;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)invalidate;

@end
