//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class PXVideoProcessingOperationSpec;
@protocol PXVideoProcessingOperationResult;

@interface PXVideoProcessingOperation : NSOperation
{
    PXVideoProcessingOperationSpec *_spec;
    id<PXVideoProcessingOperationResult> _result;
    CDUnknownBlockType _progressHandler;
}

@property (copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property (readonly, nonatomic) id<PXVideoProcessingOperationResult> result; // @synthesize result=_result;
@property (readonly, nonatomic) PXVideoProcessingOperationSpec *spec; // @synthesize spec=_spec;

+ (id)new;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSpec:(id)arg1;
- (void)main;
- (id)performProcessing;

@end
