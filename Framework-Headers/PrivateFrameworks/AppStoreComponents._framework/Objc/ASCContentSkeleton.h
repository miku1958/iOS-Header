//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSCopying-Protocol.h>

@interface ASCContentSkeleton : NSObject <NSCopying>
{
    long long _type;
    double _rawValue;
}

@property (readonly, nonatomic) double rawValue; // @synthesize rawValue=_rawValue;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)absoluteSkeleton:(double)arg1;
+ (id)fractionalSkeleton:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 rawValue:(double)arg2;
- (BOOL)isEqual:(id)arg1;
- (double)widthThatFits:(struct CGSize)arg1;

@end

