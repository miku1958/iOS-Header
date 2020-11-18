//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVPlayerItemAccessLogInternal, NSArray;

@interface AVPlayerItemAccessLog : NSObject <NSCopying>
{
    AVPlayerItemAccessLogInternal *_playerItemAccessLog;
}

@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;

- (id)_accessLogArray;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)extendedLogData;
- (void)finalize;
- (id)init;
- (id)initWithLogArray:(id)arg1;

@end

