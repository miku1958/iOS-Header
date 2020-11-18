//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSError, NSString, NSURL, NSURLAuthenticationChallenge, NSURLResponse, _WKDownload;

@protocol _WKDownloadDelegate <NSObject>

@optional
- (NSString *)_download:(_WKDownload *)arg1 decideDestinationWithSuggestedFilename:(NSString *)arg2 allowOverwrite:(BOOL *)arg3;
- (void)_download:(_WKDownload *)arg1 decideDestinationWithSuggestedFilename:(NSString *)arg2 completionHandler:(void (^)(BOOL, NSString *))arg3;
- (void)_download:(_WKDownload *)arg1 didCreateDestination:(NSString *)arg2;
- (void)_download:(_WKDownload *)arg1 didFailWithError:(NSError *)arg2;
- (void)_download:(_WKDownload *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)_download:(_WKDownload *)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(_WKDownload *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)_download:(_WKDownload *)arg1 didReceiveServerRedirectToURL:(NSURL *)arg2;
- (BOOL)_download:(_WKDownload *)arg1 shouldDecodeSourceDataOfMIMEType:(NSString *)arg2;
- (void)_downloadDidCancel:(_WKDownload *)arg1;
- (void)_downloadDidFinish:(_WKDownload *)arg1;
- (void)_downloadDidStart:(_WKDownload *)arg1;
- (void)_downloadProcessDidCrash:(_WKDownload *)arg1;
@end

