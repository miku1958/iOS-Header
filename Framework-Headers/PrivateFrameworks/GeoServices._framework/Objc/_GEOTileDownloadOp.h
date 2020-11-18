//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/NSURLSessionDataDelegate-Protocol.h>

@class GEOSimpleTileRequester, NSData, NSMutableData, NSOperationQueue, NSString, NSURL, NSURLSession, NSURLSessionTask;

__attribute__((visibility("hidden")))
@interface _GEOTileDownloadOp : NSObject <NSURLSessionDataDelegate>
{
    NSURL *_url;
    BOOL _requireWiFi;
    NSMutableData *_data;
    NSString *_cachedEtag;
    NSData *_cachedData;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    NSString *_responseEtag;
    unsigned int _priority;
    struct _GEOTileKey _key;
    BOOL _finished;
    NSString *_editionHeader;
    unsigned int _tileEdition;
    NSString *_userAgent;
    NSData *_auditToken;
    BOOL _useCookies;
    _GEOTileDownloadOp *_baseTile;
    _GEOTileDownloadOp *_localizationTile;
    unsigned long long _contentLength;
    GEOSimpleTileRequester *_delegate;
    NSOperationQueue *_delegateQueue;
    BOOL _gotData;
    int _attempts;
    double _startTime;
    double _timeout;
    int _checksumMethod;
    long long _eTagType;
}

@property (strong, nonatomic) NSData *auditToken; // @synthesize auditToken=_auditToken;
@property (strong, nonatomic) _GEOTileDownloadOp *baseTile; // @synthesize baseTile=_baseTile;
@property (strong, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
@property (strong, nonatomic) NSString *cachedEtag; // @synthesize cachedEtag=_cachedEtag;
@property (readonly, nonatomic) unsigned long long contentLength; // @synthesize contentLength=_contentLength;
@property (strong, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GEOSimpleTileRequester *delegate;
@property (strong, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long eTagType; // @synthesize eTagType=_eTagType;
@property (strong, nonatomic) NSString *editionHeader; // @synthesize editionHeader=_editionHeader;
@property (readonly, nonatomic) BOOL finished; // @synthesize finished=_finished;
@property (readonly) unsigned long long hash;
@property struct _GEOTileKey key; // @synthesize key=_key;
@property (strong, nonatomic) _GEOTileDownloadOp *localizationTile; // @synthesize localizationTile=_localizationTile;
@property (nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property (nonatomic) BOOL requireWiFi; // @synthesize requireWiFi=_requireWiFi;
@property (strong, nonatomic) NSString *responseEtag; // @synthesize responseEtag=_responseEtag;
@property (strong, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property (readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property unsigned int tileEdition; // @synthesize tileEdition=_tileEdition;
@property (nonatomic) double timeout; // @synthesize timeout=_timeout;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;
@property (nonatomic) BOOL useCookies; // @synthesize useCookies=_useCookies;
@property (strong, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)cancel;
- (void)dealloc;
- (double)elapsed;
- (void)start;

@end

