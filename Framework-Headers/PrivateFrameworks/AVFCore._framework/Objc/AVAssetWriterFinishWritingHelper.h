//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVAssetWriterHelper.h>

@class NSArray, NSOperation;

__attribute__((visibility("hidden")))
@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper
{
    NSArray *_finishWritingOperations;
    NSOperation *_transitionToTerminalStatusOperation;
}

@property (readonly, nonatomic) NSOperation *transitionToTerminalStatusOperation; // @synthesize transitionToTerminalStatusOperation=_transitionToTerminalStatusOperation;

- (void)_finishWritingOperationsDidFinish;
- (void)cancelWriting;
- (void)dealloc;
- (id)initWithConfigurationState:(id)arg1 finishWritingOperations:(id)arg2;
- (long long)status;

@end

