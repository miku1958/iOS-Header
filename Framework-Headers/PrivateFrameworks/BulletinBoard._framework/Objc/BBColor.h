//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BulletinBoard/BBUniquableObject-Protocol.h>
#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class NSString;

@interface BBColor : NSObject <BBUniquableObject, NSSecureCoding, NSCopying>
{
    double _red;
    double _green;
    double _blue;
    double _alpha;
}

@property (readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (readonly, nonatomic) double blue; // @synthesize blue=_blue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double green; // @synthesize green=_green;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double red; // @synthesize red=_red;
@property (readonly) Class superclass;

+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (BOOL)supportsSecureCoding;
- (id)_initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)uniqueIdentifier;

@end
