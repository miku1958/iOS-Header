//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioPlayer, NSString;

__attribute__((visibility("hidden")))
@interface CUAudioRequest : NSObject
{
    AVAudioPlayer *_audioPlayer;
    CDUnknownBlockType _completion;
    NSString *_label;
}

@property (strong, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;

- (void).cxx_destruct;

@end

