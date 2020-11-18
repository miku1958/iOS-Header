//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSString;

@interface PPConnectionsCriteria : NSObject <NSSecureCoding>
{
    unsigned char _locationField;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (nonatomic) unsigned char locationField; // @synthesize locationField=_locationField;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationField:(unsigned char)arg1 bundleIdentifier:(id)arg2;

@end
