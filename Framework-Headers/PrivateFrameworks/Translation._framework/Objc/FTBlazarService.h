//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Osprey/OspreyChannel.h>

__attribute__((visibility("hidden")))
@interface FTBlazarService : OspreyChannel
{
}

- (id)performBatchTranslationWithDelegate:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)performMultiUserWithDelegate:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)performMultilingualWithDelegate:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)performSpeechTranslationWithDelegate:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performTextToSpeechRouter:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)performTextToSpeechRouterStreamingWithDelegate:(id)arg1 requestBuilder:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
