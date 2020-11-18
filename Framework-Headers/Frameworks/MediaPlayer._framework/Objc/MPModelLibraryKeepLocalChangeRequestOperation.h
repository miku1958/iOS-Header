//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryKeepLocalChangeRequest, NSOperationQueue;

@interface MPModelLibraryKeepLocalChangeRequestOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;
    CDUnknownBlockType _responseHandler;
    MPModelLibraryKeepLocalChangeRequest *_request;
}

@property (copy, nonatomic) MPModelLibraryKeepLocalChangeRequest *request; // @synthesize request=_request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;

- (void).cxx_destruct;
- (void)_handleKeepLocalUpdateStatus:(long long)arg1 forLibraryIdentifier:(long long)arg2 mediaType:(long long)arg3 completedWithError:(id)arg4;
- (void)_handlePersistentID:(long long)arg1 modelClass:(Class)arg2 keepLocal:(long long)arg3 mediaLibrary:(id)arg4;
- (void)execute;

@end

