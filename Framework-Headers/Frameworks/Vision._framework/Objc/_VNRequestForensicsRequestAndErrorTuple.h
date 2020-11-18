//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, VNRequest;

__attribute__((visibility("hidden")))
@interface _VNRequestForensicsRequestAndErrorTuple : NSObject
{
    VNRequest *_request;
    NSError *_error;
}

@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) VNRequest *request; // @synthesize request=_request;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRequest:(id)arg1 error:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

