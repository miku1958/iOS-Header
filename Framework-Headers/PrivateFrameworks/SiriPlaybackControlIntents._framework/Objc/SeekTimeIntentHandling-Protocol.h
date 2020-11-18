//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriPlaybackControlIntents/NSObject-Protocol.h>

@class SeekTimeIntent;

@protocol SeekTimeIntentHandling <NSObject>
- (void)handleSeekTime:(SeekTimeIntent *)arg1 completion:(void (^)(SeekTimeIntentResponse *))arg2;
- (void)resolveDevicesForSeekTime:(SeekTimeIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)resolvePlayheadPositionForSeekTime:(SeekTimeIntent *)arg1 withCompletion:(void (^)(SeekTimePlayheadPositionResolutionResult *))arg2;

@optional
- (void)confirmSeekTime:(SeekTimeIntent *)arg1 completion:(void (^)(SeekTimeIntentResponse *))arg2;
@end
