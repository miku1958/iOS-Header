//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskRequest.h>

@class NSNumber, NSString, NSURL;

@interface DMFAppRequest : CATTaskRequest
{
    NSString *_bundleIdentifier;
    NSNumber *_storeItemIdentifier;
    NSURL *_manifestURL;
}

@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSURL *manifestURL; // @synthesize manifestURL=_manifestURL;
@property (copy, nonatomic) NSNumber *storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

