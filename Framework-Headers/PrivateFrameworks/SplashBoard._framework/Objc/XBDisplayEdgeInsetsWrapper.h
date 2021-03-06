//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSXPCCoding-Protocol.h>
#import <SplashBoard/NSCopying-Protocol.h>
#import <SplashBoard/NSSecureCoding-Protocol.h>

@class NSString;

@interface XBDisplayEdgeInsetsWrapper : NSObject <NSCopying, BSXPCCoding, NSSecureCoding>
{
    double _topInset;
    double _leftInset;
    double _bottomInset;
    double _rightInset;
}

@property (readonly, nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double leftInset; // @synthesize leftInset=_leftInset;
@property (readonly, nonatomic) double rightInset; // @synthesize rightInset=_rightInset;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double topInset; // @synthesize topInset=_topInset;

+ (id)makeWithEdgeInsets:(struct UIEdgeInsets)arg1;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct UIEdgeInsets)edgeInsets;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (BOOL)hasZeroInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

