//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFActivity, NSData, NSDictionary, NSMutableDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface HMFHTTPRequestInternal : HMFObject
{
    NSMutableDictionary *_headerFields;
    NSURL *_URL;
    NSString *_method;
    NSData *_body;
    HMFActivity *_activity;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
@property (strong, nonatomic) NSData *body; // @synthesize body=_body;
@property (strong, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property (copy, nonatomic) NSString *method; // @synthesize method=_method;

- (void).cxx_destruct;
- (id)init;
- (id)responseWithStatusCode:(long long)arg1;
- (void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2;

@end
