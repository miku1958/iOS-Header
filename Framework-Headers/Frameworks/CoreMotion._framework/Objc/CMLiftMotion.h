//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CMLiftMotion : NSObject <NSSecureCoding, NSCopying>
{
    double fDate;
    unsigned long long fLiftTransition;
}

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long liftTransition;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(double)arg1 liftTransition:(unsigned long long)arg2;

@end
