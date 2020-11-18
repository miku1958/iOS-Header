//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioNode;

@interface AVAudioConnectionPoint : NSObject
{
    AVAudioNode *_node;
    unsigned long long _bus;
    void *_reserved;
}

@property (readonly, nonatomic) unsigned long long bus; // @synthesize bus=_bus;
@property (readonly, weak, nonatomic) AVAudioNode *node; // @synthesize node=_node;

+ (id)connectionPointWithNode:(id)arg1 bus:(unsigned long long)arg2;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithNode:(id)arg1 bus:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

