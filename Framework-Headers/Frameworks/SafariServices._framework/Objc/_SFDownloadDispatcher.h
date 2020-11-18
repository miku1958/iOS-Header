//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_WKDownloadDelegate-Protocol.h>

@class NSMapTable, NSString;

@interface _SFDownloadDispatcher : NSObject <_WKDownloadDelegate>
{
    NSMapTable *_activeDownloadMap;
    NSMapTable *_pendingDownloadMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedDownloadDispatcher;
- (void).cxx_destruct;
- (void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_download:(id)arg1 didFailWithError:(id)arg2;
- (void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_downloadDidCancel:(id)arg1;
- (void)_downloadDidFinish:(id)arg1;
- (void)_downloadDidStart:(id)arg1;
- (void)_downloadProcessDidCrash:(id)arg1;
- (id)init;
- (id)startDownloadFromWebView:(id)arg1 request:(id)arg2 type:(long long)arg3 uti:(id)arg4 userInitiatedAction:(id)arg5;

@end

