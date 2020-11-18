//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HUPosterFrameViewCache : NSObject
{
    NSMutableArray *_posterFrameViewQueue;
}

@property (strong, nonatomic) NSMutableArray *posterFrameViewQueue; // @synthesize posterFrameViewQueue=_posterFrameViewQueue;

+ (id)dequeuePosterFrameViewForWidth:(double)arg1;
+ (void)enqueuePosterFrameView:(id)arg1;
+ (void)purgeCache;
+ (id)sharedCache;
- (void).cxx_destruct;
- (id)init;

@end
