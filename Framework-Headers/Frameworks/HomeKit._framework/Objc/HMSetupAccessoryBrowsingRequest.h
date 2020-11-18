//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HMSetupAccessoryBrowsingRequest : NSObject <NSSecureCoding>
{
    NSArray *_filterCategories;
}

@property (readonly, copy, nonatomic) NSArray *filterCategories; // @synthesize filterCategories=_filterCategories;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilterCategories:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
