//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSPData, TSUFlushingManager;

@interface TSDImageProvider : NSObject
{
    int mLoadState;
    TSPData *mImageData;
    int mRetainCount;
    int mOwnerCount;
    TSUFlushingManager *mFlushingManager;
    int mInterest;
    int mInterestLock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)addInterest;
- (void)addOwner;
- (void)dealloc;
- (struct CGSize)dpiAdjustedNaturalSize;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)flush;
- (void)flushIfInterestLessThan:(int)arg1;
- (BOOL)hasFlushableContent;
- (void)i_commonInit;
- (id)imageData;
- (id)initWithImageData:(id)arg1;
- (int)interest;
- (BOOL)isError;
- (BOOL)isValid;
- (struct CGSize)naturalSize;
- (void)ownerAccess;
- (oneway void)release;
- (void)removeInterest;
- (void)removeOwner;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setFlushingManager:(id)arg1;

@end
