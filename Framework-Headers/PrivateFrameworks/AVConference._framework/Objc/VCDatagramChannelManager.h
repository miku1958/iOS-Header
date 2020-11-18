//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCDatagramChannelManager : NSObject
{
    struct _opaque_pthread_mutex_t _stateLock;
    unsigned int _nextToken;
    CDUnknownBlockType _readHandler;
    NSMutableDictionary *_datagramChannels;
    NSMutableDictionary *_destinations;
}

@property (copy) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;

+ (id)sharedInstance;
- (id)addDatagramChannelWithDescriptor:(int)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)datagramChannelWithIDSDestination:(id)arg1;
- (id)datagramChannelWithToken:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (void)removeDatagramChannel:(id)arg1;
- (BOOL)setupDatagramChannel:(id)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;

@end

