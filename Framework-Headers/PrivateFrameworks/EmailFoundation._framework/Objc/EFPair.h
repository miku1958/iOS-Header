//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/NSCopying-Protocol.h>

@protocol NSObject;

@interface EFPair : NSObject <NSCopying>
{
    id<NSObject> _first;
    id<NSObject> _second;
}

@property (readonly, nonatomic) id<NSObject> first; // @synthesize first=_first;
@property (readonly, nonatomic) id<NSObject> second; // @synthesize second=_second;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPair:(id)arg1;

@end
