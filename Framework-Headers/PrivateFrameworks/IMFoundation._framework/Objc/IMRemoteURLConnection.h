//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMURLSession, NSString, NSURLRequest;
@protocol OS_xpc_object;

@interface IMRemoteURLConnection : NSObject
{
    BOOL _requireIDSHost;
    BOOL _forceCellularIfPossible;
    BOOL _shouldUsePipelining;
    BOOL _disableKeepAlive;
    BOOL _shouldReturnTimingData;
    BOOL _cancelled;
    BOOL _loading;
    int _concurrentConnections;
    int _keepAliveWifi;
    int _keepAliveCell;
    int _retries;
    NSString *_bundleIdentifierForDataUsage;
    NSURLRequest *_request;
    CDUnknownBlockType _block;
    NSObject<OS_xpc_object> *_connection;
    IMURLSession *_URLSession;
}

@property (strong, nonatomic) IMURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property (copy) CDUnknownBlockType block; // @synthesize block=_block;
@property (strong) NSString *bundleIdentifierForDataUsage; // @synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage;
@property (nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property int concurrentConnections; // @synthesize concurrentConnections=_concurrentConnections;
@property (strong, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property BOOL disableKeepAlive; // @synthesize disableKeepAlive=_disableKeepAlive;
@property BOOL forceCellularIfPossible; // @synthesize forceCellularIfPossible=_forceCellularIfPossible;
@property int keepAliveCell; // @synthesize keepAliveCell=_keepAliveCell;
@property int keepAliveWifi; // @synthesize keepAliveWifi=_keepAliveWifi;
@property (nonatomic) BOOL loading; // @synthesize loading=_loading;
@property (strong) NSURLRequest *request; // @synthesize request=_request;
@property BOOL requireIDSHost; // @synthesize requireIDSHost=_requireIDSHost;
@property (nonatomic) int retries; // @synthesize retries=_retries;
@property BOOL shouldReturnTimingData; // @synthesize shouldReturnTimingData=_shouldReturnTimingData;
@property BOOL shouldUsePipelining; // @synthesize shouldUsePipelining=_shouldUsePipelining;

- (void).cxx_destruct;
- (void)_direct_cancel;
- (void)_direct_load;
- (BOOL)_xpc_connect;
- (BOOL)_xpc_disconnect;
- (void)_xpc_disconnected;
- (void)_xpc_load;
- (void)cancel;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithURLRequest:(id)arg1 completionBlockWithTimingData:(CDUnknownBlockType)arg2;
- (void)load;

@end
