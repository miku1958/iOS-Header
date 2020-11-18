//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@class NSMutableArray;

@interface MFMessageURLProtocol : NSURLProtocol
{
    BOOL _stopped;
    NSMutableArray *_attachments;
}

+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)initialize;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
- (void)_downloadedData:(id)arg1 forURL:(id)arg2 mimeType:(id)arg3;
- (void)dealloc;
- (void)startLoading;
- (void)stopLoading;

@end

