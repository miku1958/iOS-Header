//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVContentKeyResponseInternal;

@interface AVContentKeyResponse : NSObject
{
    AVContentKeyResponseInternal *_keyResponse;
}

+ (id)contentKeyResponseWithClearKeyData:(id)arg1 initializationVector:(id)arg2;
+ (id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1;
- (void)dealloc;
- (id)initWithKeySystem:(id)arg1;
- (id)keySystem;

@end

