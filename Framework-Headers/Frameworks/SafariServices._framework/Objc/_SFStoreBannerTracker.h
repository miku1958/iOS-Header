//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _SFStoreBannerTracker : NSObject
{
    NSMutableDictionary *_blockedProducts;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedTracker;
- (void).cxx_destruct;
- (void)blockProductBanner:(id)arg1;
- (void)clear;
- (id)filePath;
- (id)init;
- (void)isProductBannerBlocked:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)load;
- (void)save;

@end
