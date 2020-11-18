//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKAction.h>

@class NSString, SKSoundSource;

__attribute__((visibility("hidden")))
@interface SKPlaySound : SKAction
{
    NSString *_filePath;
    NSString *_fileName;
    struct SKCPlaySound *_mycaction;
    struct CGPoint _position;
    SKSoundSource *_soundSource;
}

+ (id)_audioURLWithName:(id)arg1 bundle:(id)arg2;
+ (id)playSoundFileNamed:(id)arg1 atPosition:(struct CGPoint)arg2 waitForCompletion:(BOOL)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end

