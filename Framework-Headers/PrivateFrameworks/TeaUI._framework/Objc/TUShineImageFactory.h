//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface TUShineImageFactory : NSObject
{
    MISSING_TYPE *lruCache;
    MISSING_TYPE *lock;
    MISSING_TYPE *inflightRequests;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)shineImageForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)syncShineImageForRequest:(id)arg1;

@end

