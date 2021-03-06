//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, TransparencyNetworkRequest;

@interface TransparencyResponse : NSObject
{
    NSData *_data;
    NSDictionary *_metadata;
    TransparencyNetworkRequest *_request;
}

@property (strong) NSData *data; // @synthesize data=_data;
@property (strong) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (strong) TransparencyNetworkRequest *request; // @synthesize request=_request;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 responseData:(id)arg2 metadata:(id)arg3;
- (id)serverHint;

@end

