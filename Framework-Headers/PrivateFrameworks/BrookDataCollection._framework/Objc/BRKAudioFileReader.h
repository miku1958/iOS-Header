//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BRKAudioFileReader : NSObject
{
    struct OpaqueExtAudioFile *_audioFile;
    NSString *_path;
}

@property (readonly, nonatomic) NSString *path; // @synthesize path=_path;

- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;
- (BOOL)readData:(short *)arg1 count:(long long *)arg2;

@end

