//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMSourceStream-Protocol.h>
#import <BiomeStreams/BMStream-Protocol.h>

@class BMStoreConfig, BMStoreSource, BMStoreValidator, BMStreamsAccessClient, NSString;

@interface BMStoreStream : NSObject <BMSourceStream, BMStream>
{
    NSString *_streamIdentifier;
    BMStoreConfig *_storeConfig;
    BMStoreSource *_source;
    BMStoreValidator *_validator;
    BOOL _isPublic;
    BMStreamsAccessClient *_accessClient;
}

@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)_publisher;
- (id)init;
- (id)initWithPublicStream:(long long)arg1 storeConfig:(id)arg2;
- (id)initWithStreamIdentifier:(id)arg1 storeConfig:(id)arg2;
- (id)initWithStreamIdentifier:(id)arg1 storeConfig:(id)arg2 isPublic:(BOOL)arg3;
- (void)pruneWithPredicateBlock:(CDUnknownBlockType)arg1;
- (id)publisher;
- (id)publisherFromStartTime:(double)arg1;
- (id)source;
- (id)validator;

@end

