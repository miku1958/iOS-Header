//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface CTSubscriberAuthDataHolder : NSObject <NSSecureCoding>
{
    NSDictionary *_dict;
}

@property (strong, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
