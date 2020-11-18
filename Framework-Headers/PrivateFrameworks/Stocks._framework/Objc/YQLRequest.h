//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Stocks/NSURLSessionDataDelegate-Protocol.h>
#import <Stocks/NSURLSessionDownloadDelegate-Protocol.h>

@class NSMutableData, NSString, NSURLRequest, NSURLSession, NSURLSessionTask;

@interface YQLRequest : NSObject <NSURLSessionDataDelegate, NSURLSessionDownloadDelegate>
{
    NSURLSession *_defaultSession;
    NSURLSessionTask *_dataTask;
    NSURLRequest *_request;
    NSMutableData *_rawData;
    CDUnknownBlockType _finishEventsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType finishEventsHandler; // @synthesize finishEventsHandler=_finishEventsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)appendDebugString:(id)arg1;
+ (void)saveDebugString;
+ (void)setShouldGenerateOfflineData:(BOOL)arg1;
+ (BOOL)shouldGenerateOfflineData;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (id)YQLCountryCode;
- (id)YQLLanguageCode;
- (void)_createDefaultSession;
- (id)_yahooDoppelganger_taskForRequest:(id)arg1 delegate:(id)arg2;
- (id)aggregateDictionaryDomain;
- (id)arrayWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2 wrapResultIfDictionary:(BOOL)arg3;
- (void)cancel;
- (id)dictionaryWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2;
- (void)didParseData;
- (void)failToParseWithData:(id)arg1;
- (void)failToParseWithDataSeriesDictionary:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)init;
- (BOOL)isLoading;
- (void)loadRequest:(id)arg1;
- (id)objectOfClass:(Class)arg1 withDictionaryKeyPath:(id)arg2 inJSONObject:(id)arg3;
- (id)objectWithDictionaryKeyPath:(id)arg1 inJSONObject:(id)arg2;
- (void)parseData:(id)arg1;
- (id)taskForRequest:(id)arg1 delegate:(id)arg2;

@end

