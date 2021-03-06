//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/NSCopying-Protocol.h>

@class AVPlayerItemErrorLogInternal, NSArray;

@interface AVPlayerItemErrorLog : NSObject <NSCopying>
{
    AVPlayerItemErrorLogInternal *_playerItemErrorLog;
}

@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;

- (id)_common_init;
- (id)_errorLogArray;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)extendedLogData;
- (id)init;
- (id)initWithLogArray:(id)arg1;

@end

