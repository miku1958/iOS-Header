//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface VSStoreRequest : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_methodName;
    NSString *_bagKey;
    NSDictionary *_parameters;
}

@property (copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
@property (copy, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property (copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

