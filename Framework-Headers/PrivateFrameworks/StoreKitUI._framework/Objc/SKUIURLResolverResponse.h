//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSHTTPURLResponse;

@interface SKUIURLResolverResponse : NSObject
{
    NSData *_data;
    NSHTTPURLResponse *_response;
}

@property (readonly, nonatomic) NSHTTPURLResponse *URLResponse; // @synthesize URLResponse=_response;
@property (readonly, nonatomic) NSData *data; // @synthesize data=_data;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 URLResponse:(id)arg2;

@end

