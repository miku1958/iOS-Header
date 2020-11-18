//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableURLRequest, NSURL, TMLJSONObject;
@protocol TKNetworkTask;

__attribute__((visibility("hidden")))
@interface TKCloudKitFetch : NSObject
{
    id<TKNetworkTask> _queryTask;
    id<TKNetworkTask> _downloadTask;
    BOOL _active;
    BOOL _cancelled;
    NSMutableURLRequest *_urlRequest;
    NSError *_error;
    TMLJSONObject *_response;
    NSURL *_downloadURL;
}

@property (readonly, nonatomic) BOOL active; // @synthesize active=_active;
@property (readonly, nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (strong, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) TMLJSONObject *response; // @synthesize response=_response;
@property (strong, nonatomic) NSMutableURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (void)downloadAssetFromCloudKit;
- (void)handleDownloadResponse:(id)arg1 error:(id)arg2;
- (void)handleResponse:(id)arg1 data:(id)arg2 responseError:(id)arg3;
- (id)init;
- (void)send;
- (void)setResponse:(id)arg1;
- (void)tmlDispose;

@end
