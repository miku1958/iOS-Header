//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AVAudioDeviceTestSequence, NSString;

@protocol AVAudioDeviceTestServiceProtocol
- (void)cancel;
- (void)passExtensionToken:(NSString *)arg1;
- (void)startWithSequence:(AVAudioDeviceTestSequence *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end
