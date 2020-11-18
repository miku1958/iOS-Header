//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryRequest, NSOperationQueue;

@interface MPModelLibraryRequestOperation : MPAsyncOperation
{
    MPModelLibraryRequest *_request;
    CDUnknownBlockType _responseHandler;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_serialAccessQueue;
}

@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (copy, nonatomic) MPModelLibraryRequest *request; // @synthesize request=_request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property (strong, nonatomic) NSOperationQueue *serialAccessQueue; // @synthesize serialAccessQueue=_serialAccessQueue;

- (void).cxx_destruct;
- (void)_sanityCheckRequest;
- (void)execute;

@end

