//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/NSCopying-Protocol.h>

@class AVPlayerItemErrorLogEventInternal, NSDate, NSString;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying>
{
    AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;
}

@property (readonly, nonatomic) NSString *URI;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *errorComment;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) long long errorStatusCode;
@property (readonly, nonatomic) NSString *playbackSessionID;
@property (readonly, nonatomic) NSString *serverAddress;

- (id)_common_init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

