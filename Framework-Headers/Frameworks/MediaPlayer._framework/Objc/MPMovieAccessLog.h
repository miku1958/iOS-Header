//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class AVPlayerItemAccessLog, NSArray, NSData;

@interface MPMovieAccessLog : NSObject <NSCopying>
{
    AVPlayerItemAccessLog *_accessLog;
}

@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSData *extendedLogData;
@property (readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;

- (void).cxx_destruct;
- (id)_initWithAVItemAccessLog:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

