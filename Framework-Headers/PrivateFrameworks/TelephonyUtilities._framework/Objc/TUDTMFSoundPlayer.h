//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TUDTMFSoundPlayer : NSObject
{
    CDUnknownBlockType _playSystemSoundHandler;
}

@property (copy, nonatomic) CDUnknownBlockType playSystemSoundHandler; // @synthesize playSystemSoundHandler=_playSystemSoundHandler;

- (void).cxx_destruct;
- (BOOL)attemptToPlayKey:(unsigned char)arg1;
- (void)attemptToPlaySoundType:(long long)arg1;
- (id)init;

@end
