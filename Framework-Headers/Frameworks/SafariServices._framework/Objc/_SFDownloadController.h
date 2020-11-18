//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/_WKDownloadDelegate-Protocol.h>

@class NSString, NSURL, _WKDownload;
@protocol _SFDownloadControllerDelegate;

@interface _SFDownloadController : NSObject <_WKDownloadDelegate>
{
    long long _downloadingFileType;
    _WKDownload *_fileDownload;
    unsigned long long _downloadBackgroundTaskIdentifier;
    NSString *_fileDownloadPath;
    long long _downloadBytesExpected;
    unsigned long long _downloadBytesLoaded;
    NSURL *_fileDownloadSourceURL;
    id<_SFDownloadControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_SFDownloadControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long downloadingFileType; // @synthesize downloadingFileType=_downloadingFileType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginDownloadBackgroundTask:(id)arg1;
- (void)_clearFileDownloadState;
- (id)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 allowOverwrite:(BOOL *)arg3;
- (void)_download:(id)arg1 didFailWithError:(id)arg2;
- (void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_downloadDidFinish:(id)arg1;
- (void)_downloadDidStart:(id)arg1;
- (void)_endDownloadBackgroundTask;

@end
