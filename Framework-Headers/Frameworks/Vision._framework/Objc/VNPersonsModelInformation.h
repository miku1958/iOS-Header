//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class NSDate;

@interface VNPersonsModelInformation : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _version;
    NSDate *_lastModificationDate;
}

@property (readonly, copy, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property (readonly, nonatomic) unsigned long long version; // @synthesize version=_version;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(unsigned long long)arg1 lastModificationDate:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

