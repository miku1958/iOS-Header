//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSDictionary;

@interface _TtC15MediaFoundation23PlaybackStackController : _TtCs12_SwiftObject
{
    MISSING_TYPE *queueController;
    MISSING_TYPE *queueAssetLoader;
    MISSING_TYPE *playerController;
    MISSING_TYPE *reporter;
    MISSING_TYPE *internalController;
    MISSING_TYPE *errorController;
    MISSING_TYPE *backgroundTaskController;
    MISSING_TYPE *currentQueueRestorationItem;
    MISSING_TYPE *currentSetQueueIdentifier;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)reset;
- (BOOL)setAudioSessionActive:(BOOL)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (void)updateAudioSessionWithConfiguration:(id)arg1;

@end
