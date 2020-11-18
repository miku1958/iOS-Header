//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionKey : NSObject <NSCopying>
{
    unsigned char _transportType;
    unsigned char _encodingType;
    int _payload;
}

@property (readonly, nonatomic) unsigned char encodingType; // @synthesize encodingType=_encodingType;
@property (readonly, nonatomic) int payload; // @synthesize payload=_payload;
@property (readonly, nonatomic) unsigned char transportType; // @synthesize transportType=_transportType;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3;
- (BOOL)isEqual:(id)arg1;

@end
