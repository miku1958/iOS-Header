//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, SSVPlaybackLeaseResponse;

@interface SSVPlaybackLeaseCallback : NSObject
{
    CDUnknownBlockType _block;
    SSVPlaybackLeaseResponse *_response;
    NSError *_error;
}

@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) SSVPlaybackLeaseResponse *response; // @synthesize response=_response;

- (void).cxx_destruct;

@end

