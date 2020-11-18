//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>
#import <coreroutine/NSSecureCoding-Protocol.h>

@class NSDate;

@interface RTMotionActivity : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _type;
    unsigned long long _confidence;
    NSDate *_startDate;
}

@property (readonly, nonatomic) unsigned long long confidence; // @synthesize confidence=_confidence;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 confidence:(unsigned long long)arg2 startDate:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

