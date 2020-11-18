//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURLRequest;
@protocol OS_xpc_object;

@interface IDSRemoteURLConnection : NSObject
{
    NSURLRequest *_request;
    NSString *_bundleIdentifierForDataUsage;
    CDUnknownBlockType _block;
    NSObject<OS_xpc_object> *_connection;
    BOOL _cancelled;
    BOOL _loading;
    BOOL _forceCellularIfPossible;
    BOOL _alwaysForceCellular;
    int _retries;
    BOOL _requireIDSHost;
    BOOL _shouldUsePipelining;
    int _concurrentConnections;
    BOOL _disableKeepAlive;
    int _keepAliveWifi;
    int _keepAliveCell;
}

@property BOOL alwaysForceCellular; // @synthesize alwaysForceCellular=_alwaysForceCellular;
@property (copy) CDUnknownBlockType block; // @synthesize block=_block;
@property (strong) NSString *bundleIdentifierForDataUsage; // @synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage;
@property int concurrentConnections; // @synthesize concurrentConnections=_concurrentConnections;
@property BOOL disableKeepAlive; // @synthesize disableKeepAlive=_disableKeepAlive;
@property BOOL forceCellularIfPossible; // @synthesize forceCellularIfPossible=_forceCellularIfPossible;
@property int keepAliveCell; // @synthesize keepAliveCell=_keepAliveCell;
@property int keepAliveWifi; // @synthesize keepAliveWifi=_keepAliveWifi;
@property (strong) NSURLRequest *request; // @synthesize request=_request;
@property BOOL requireIDSHost; // @synthesize requireIDSHost=_requireIDSHost;
@property BOOL shouldUsePipelining; // @synthesize shouldUsePipelining=_shouldUsePipelining;

- (BOOL)_connect;
- (BOOL)_disconnect;
- (void)_disconnected;
- (void)cancel;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)load;

@end

