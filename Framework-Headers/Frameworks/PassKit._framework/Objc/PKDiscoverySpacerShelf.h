//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKDiscoveryShelf.h>

@interface PKDiscoverySpacerShelf : PKDiscoveryShelf
{
    long long _spacerType;
}

@property (readonly, nonatomic) long long spacerType; // @synthesize spacerType=_spacerType;

+ (BOOL)supportsSecureCoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
