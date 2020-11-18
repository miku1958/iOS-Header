//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PRLikenessCacheContext : NSObject
{
    BOOL _circular;
    BOOL _forceDecode;
    unsigned long long _cacheSize;
    double _scale;
}

@property (nonatomic) unsigned long long cacheSize; // @synthesize cacheSize=_cacheSize;
@property (nonatomic) BOOL circular; // @synthesize circular=_circular;
@property (nonatomic) BOOL forceDecode; // @synthesize forceDecode=_forceDecode;
@property (nonatomic) double scale; // @synthesize scale=_scale;

+ (id)contextWithCacheSize:(unsigned long long)arg1;
- (id)init;

@end

