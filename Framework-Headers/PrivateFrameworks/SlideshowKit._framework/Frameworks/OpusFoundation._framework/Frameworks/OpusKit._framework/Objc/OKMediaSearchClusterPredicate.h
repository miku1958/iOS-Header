//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKMediaClusterPredicate.h>

@class NSString;

@interface OKMediaSearchClusterPredicate : OKMediaClusterPredicate
{
    NSString *_searchString;
    unsigned long long _type;
    unsigned long long _options;
}

- (void)dealloc;
- (float)efficiencyForItems:(id)arg1;
- (id)evaluateItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)initWithString:(id)arg1 type:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)title;

@end
