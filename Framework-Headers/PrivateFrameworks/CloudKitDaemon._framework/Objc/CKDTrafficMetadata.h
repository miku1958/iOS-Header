//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface CKDTrafficMetadata : NSObject <NSSecureCoding>
{
    NSDate *_timestamp;
    NSURL *_url;
    NSString *_method;
    long long _status;
    NSDictionary *_headers;
}

@property (strong, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property (strong, nonatomic) NSString *method; // @synthesize method=_method;
@property (nonatomic) long long status; // @synthesize status=_status;
@property (strong, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

