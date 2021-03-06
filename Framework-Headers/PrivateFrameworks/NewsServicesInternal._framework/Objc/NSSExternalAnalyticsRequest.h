//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSSecureCoding-Protocol.h>

@class NSSExternalAnalyticsRequestMetadata, NSURL;

@interface NSSExternalAnalyticsRequest : NSObject <NSSecureCoding>
{
    NSURL *_URL;
    NSSExternalAnalyticsRequestMetadata *_metadata;
}

@property (readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, nonatomic) NSSExternalAnalyticsRequestMetadata *metadata; // @synthesize metadata=_metadata;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 metadata:(id)arg2;

@end

