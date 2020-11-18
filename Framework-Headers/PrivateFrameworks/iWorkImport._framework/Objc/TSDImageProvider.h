//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSPData, TSUFlushingManager;

__attribute__((visibility("hidden")))
@interface TSDImageProvider : NSObject
{
    int mLoadState;
    TSPData *mImageData;
    _Atomic int mRetainCount;
    _Atomic int mOwnerCount;
    TSUFlushingManager *mFlushingManager;
    _Atomic int mInterest;
}

@property (readonly, nonatomic) struct CGSize dpiAdjustedNaturalSize;
@property (readonly, nonatomic) unsigned long long i_flushableMemoryEstimate;
@property (readonly, nonatomic) BOOL i_hasFlushableContent;
@property (nonatomic) int i_loadState; // @synthesize i_loadState=mLoadState;
@property (readonly, strong, nonatomic) TSPData *imageData;
@property (readonly, nonatomic) unsigned long long imageGamut;
@property (readonly, nonatomic) BOOL isError;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) struct CGSize naturalSize;

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)addInterest;
- (void)addOwner;
- (void)dealloc;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)flush;
- (void)i_commonInit;
- (id)initWithImageData:(id)arg1;
- (int)interest;
- (void)ownerAccess;
- (oneway void)release;
- (void)removeInterest;
- (void)removeOwner;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setFlushingManager:(id)arg1;

@end

