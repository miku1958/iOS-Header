//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TSDImageProvider, TSPObjectContext;

@interface TSDImageResamplingOperation : NSObject
{
    TSDImageProvider *mImageProvider;
    struct CGSize mDesiredSize;
    NSString *mDisplayName;
    struct CGPath *mMaskingPath;
    TSPObjectContext *mObjectContext;
}

@property (nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=mDesiredSize;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=mDisplayName;
@property (strong, nonatomic) TSDImageProvider *imageProvider; // @synthesize imageProvider=mImageProvider;
@property (nonatomic) struct CGPath *maskingPath; // @synthesize maskingPath=mMaskingPath;
@property (strong, nonatomic) TSPObjectContext *objectContext; // @synthesize objectContext=mObjectContext;

- (void)dealloc;
- (id)init;
- (id)initWithImageProvider:(id)arg1 desiredSize:(struct CGSize)arg2;
- (id)performResampleOperationWithResampleOptions:(unsigned long long)arg1 bitmapContextOptions:(unsigned long long)arg2;

@end
