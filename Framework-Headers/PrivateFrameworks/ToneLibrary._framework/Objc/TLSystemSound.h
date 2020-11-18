//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface TLSystemSound : NSObject
{
    unsigned int _soundID;
    BOOL _shouldDisposeOfSoundID;
    NSURL *_soundFileURL;
}

@property (readonly, nonatomic) NSURL *soundFileURL; // @synthesize soundFileURL=_soundFileURL;
@property (readonly, nonatomic) unsigned int soundID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithSoundFileURL:(id)arg1 soundID:(unsigned int)arg2;

@end

