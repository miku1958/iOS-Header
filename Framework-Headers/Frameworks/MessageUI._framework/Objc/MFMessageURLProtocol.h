//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@class MFMessageTextAttachment, MFMonitoredInvocation, NSMutableArray, NSThread, NSURL;

@interface MFMessageURLProtocol : NSURLProtocol
{
    NSURL *_url;
    MFMessageTextAttachment *_attachment;
    MFMonitoredInvocation *_invocation;
    NSThread *_loader;
    BOOL _stopped;
    NSMutableArray *_attachments;
}

+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)initialize;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
- (void)_downloadAttachment;
- (void)_downloadedData:(id)arg1 mimeType:(id)arg2;
- (void)dealloc;
- (void)startLoading;
- (void)stopLoading;

@end
