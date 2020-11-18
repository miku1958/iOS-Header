//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError, NSOperationQueue, VUIMPMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntitiesFetchOperation : VUIAsynchronousOperation
{
    NSArray *_requests;
    NSArray *_responses;
    NSError *_error;
    NSOperationQueue *_privateQueue;
    VUIMPMediaLibrary *_mediaLibrary;
}

@property (copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) VUIMPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property (strong, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property (copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property (copy, nonatomic) NSArray *responses; // @synthesize responses=_responses;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;
- (id)initWithMediaLibrary:(id)arg1 requests:(id)arg2;

@end

