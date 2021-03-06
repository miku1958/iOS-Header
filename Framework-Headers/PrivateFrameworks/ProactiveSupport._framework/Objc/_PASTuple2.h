//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/NSCopying-Protocol.h>

@interface _PASTuple2 : NSObject <NSCopying>
{
    NSObject *_first;
    NSObject *_second;
}

@property (readonly, nonatomic) NSObject *first; // @synthesize first=_first;
@property (readonly, nonatomic) NSObject *second; // @synthesize second=_second;

+ (id)tupleWithFirst:(id)arg1 second:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTuple2:(id)arg1;

@end

