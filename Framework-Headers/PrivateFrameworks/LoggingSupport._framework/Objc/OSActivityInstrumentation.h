//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol OSActivityInstrumentationDelegate, OS_xpc_object;

@interface OSActivityInstrumentation : NSObject
{
    NSObject<OS_xpc_object> *_stream;
    NSObject<OS_xpc_object> *_daemon_conn;
    BOOL _receivedHeader;
    NSObject<OS_xpc_object> *_pidList;
    unsigned long long _state;
    unsigned long long _mode;
    long long _timeWindow;
    unsigned long long _eventFilter;
    unsigned long long _options;
    NSMutableData *_capturedData;
    id<OSActivityInstrumentationDelegate> _delegate;
}

@property (readonly, nonatomic) NSMutableData *capturedData; // @synthesize capturedData=_capturedData;
@property (weak, nonatomic) id<OSActivityInstrumentationDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) unsigned long long eventFilter; // @synthesize eventFilter=_eventFilter;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;

+ (BOOL)blessProcess:(int)arg1 processID:(unsigned long long)arg2;
+ (void)evaluateBuffer:(id)arg1 usingPredicate:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (BOOL)addProcess:(int)arg1 withProcessID:(unsigned long long)arg2;
- (id)createMessage;
- (void)endCapture;
- (id)init;
- (id)initDeferredMode;
- (id)initImmediateMode:(long long)arg1;
- (id)initWindowedMode:(long long)arg1;
- (void)startCapture;

@end
