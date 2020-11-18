//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@interface VNPersonsModelWriteOptions : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _readOnly;
    unsigned long long _version;
}

@property (nonatomic) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
