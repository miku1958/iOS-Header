//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryHasPurchasesRequest;

__attribute__((visibility("hidden")))
@interface MPModelLibraryHasPurchasesRequestOperation : MPAsyncOperation
{
    MPModelLibraryHasPurchasesRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) MPModelLibraryHasPurchasesRequest *request; // @synthesize request=_request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;

- (void).cxx_destruct;
- (void)execute;

@end
