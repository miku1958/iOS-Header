//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AVAssetCustomURLRequest : NSObject
{
    unsigned long long _requestID;
    struct __CFDictionary *_customURLRequest;
    struct __CFDictionary *_customURLResponse;
}

@property (readonly, nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;

+ (id)requestWithRequest:(struct __CFDictionary *)arg1 id:(unsigned long long)arg2;
- (struct __CFDictionary *)customURLRequest;
- (struct __CFDictionary *)customURLResponse;
- (void)dealloc;
- (id)init;
- (id)initWithRequest:(struct __CFDictionary *)arg1 id:(unsigned long long)arg2;
- (void)setCustomURLRequest:(struct __CFDictionary *)arg1;
- (void)setCustomURLResponse:(struct __CFDictionary *)arg1;

@end

