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
    TSPObjectContext *mObjectContext;
    struct CGSize mDesiredAlternateSizeIfConvertedToPNG;
}

@property (nonatomic) struct CGSize desiredAlternateSizeIfConvertedToPNG; // @synthesize desiredAlternateSizeIfConvertedToPNG=mDesiredAlternateSizeIfConvertedToPNG;
@property (nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=mDesiredSize;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=mDisplayName;
@property (strong, nonatomic) TSDImageProvider *imageProvider; // @synthesize imageProvider=mImageProvider;
@property (strong, nonatomic) TSPObjectContext *objectContext; // @synthesize objectContext=mObjectContext;

- (void).cxx_destruct;
- (id)init;
- (id)initWithImageProvider:(id)arg1 desiredSize:(struct CGSize)arg2;
- (id)performResampleOperationWithResampleOptions:(unsigned long long)arg1 bitmapContextOptions:(unsigned long long)arg2;

@end

