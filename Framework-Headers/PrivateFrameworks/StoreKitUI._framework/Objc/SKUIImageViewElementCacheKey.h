//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface SKUIImageViewElementCacheKey : NSObject
{
    long long _imageTreatment;
    struct CGSize _size;
    NSURL *_url;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 size:(struct CGSize)arg2 imageTreatment:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

