//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@interface HKQueryAnchor : NSObject <NSSecureCoding, NSCopying>
{
    long long _rowid;
}

@property (nonatomic, getter=_rowid, setter=_setRowid:) long long rowid; // @synthesize rowid=_rowid;

+ (id)_anchorWithRowid:(long long)arg1;
+ (id)anchorFromValue:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
