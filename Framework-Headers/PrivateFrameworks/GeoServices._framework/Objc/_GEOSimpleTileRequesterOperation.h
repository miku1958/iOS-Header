//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSessionTaskDelegate-Protocol.h>

@class GEOClientMetrics, GEODataRequest, GEODataSession, GEODataSessionTask, NSData, NSString, NSURL;
@protocol GEOSimpleTileRequesterOperationDelegate, OS_dispatch_queue, OS_os_activity;

__attribute__((visibility("hidden")))
@interface _GEOSimpleTileRequesterOperation : NSObject <GEODataSessionTaskDelegate>
{
    GEODataRequest *_request;
    NSData *_data;
    GEODataSessionTask *_task;
    NSString *_responseEtag;
    struct _GEOTileKey _key;
    NSString *_editionHeader;
    _GEOSimpleTileRequesterOperation *_baseTile;
    _GEOSimpleTileRequesterOperation *_localizationTile;
    id<GEOSimpleTileRequesterOperationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_activity> *_activity;
    NSObject<OS_os_activity> *_parentTileActivity;
    double _timeout;
    double _startTime;
    GEOClientMetrics *_clientMetrics;
    int _attempts;
    int _checksumMethod;
    unsigned int _tileEdition;
    BOOL _finished;
    BOOL _existingCachedDataCurrent;
    _Atomic unsigned int _priority;
    GEODataSession *_dataSession;
    unsigned long long _signpostID;
}

@property (readonly, nonatomic) NSURL *URL;
@property (strong, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property (strong, nonatomic) _GEOSimpleTileRequesterOperation *baseTile; // @synthesize baseTile=_baseTile;
@property (strong, nonatomic) GEOClientMetrics *clientMetrics; // @synthesize clientMetrics=_clientMetrics;
@property (readonly, nonatomic) unsigned long long contentLength;
@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (strong, nonatomic) GEODataSession *dataSession; // @synthesize dataSession=_dataSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<GEOSimpleTileRequesterOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *editionHeader; // @synthesize editionHeader=_editionHeader;
@property (readonly, nonatomic, getter=isExistingCachedDataCurrent) BOOL existingCachedDataCurrent; // @synthesize existingCachedDataCurrent=_existingCachedDataCurrent;
@property (readonly, nonatomic) BOOL finished; // @synthesize finished=_finished;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int httpResponseStatusCode;
@property struct _GEOTileKey key; // @synthesize key=_key;
@property (strong, nonatomic) _GEOSimpleTileRequesterOperation *localizationTile; // @synthesize localizationTile=_localizationTile;
@property (strong, nonatomic) NSObject<OS_os_activity> *parentTileActivity; // @synthesize parentTileActivity=_parentTileActivity;
@property unsigned int priority;
@property (readonly, nonatomic) GEODataRequest *request; // @synthesize request=_request;
@property (strong, nonatomic) NSString *responseEtag; // @synthesize responseEtag=_responseEtag;
@property (readonly, nonatomic) BOOL responseIsCacheable;
@property (readonly, nonatomic) long long responseSource;
@property (nonatomic) unsigned long long signpostID; // @synthesize signpostID=_signpostID;
@property (readonly) Class superclass;
@property (strong, nonatomic) GEODataSessionTask *task; // @synthesize task=_task;
@property unsigned int tileEdition; // @synthesize tileEdition=_tileEdition;
@property (nonatomic) double timeout; // @synthesize timeout=_timeout;

- (void).cxx_destruct;
- (void)_reportNetworkError:(id)arg1;
- (void)cancel;
- (void)clearAllRelatedOperations;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;
- (double)elapsed;
- (id)init;
- (id)initWithRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (void)start;
- (double)startTime;
- (void)taskFailed:(id)arg1 withError:(id)arg2;
- (BOOL)validateTileIntegrityForTask:(id)arg1;

@end

