//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassFrontFaceImageSet : PKPassImageSet
{
    PKImage *_faceImage;
    PKImage *_faceShadowImage;
    struct CGRect _logoRect;
    struct CGRect _thumbnailRect;
    struct CGRect _stripRect;
}

@property (strong, nonatomic) PKImage *faceImage; // @synthesize faceImage=_faceImage;
@property (strong, nonatomic) PKImage *faceShadowImage; // @synthesize faceShadowImage=_faceShadowImage;
@property (nonatomic) struct CGRect logoRect; // @synthesize logoRect=_logoRect;
@property (nonatomic) struct CGRect stripRect; // @synthesize stripRect=_stripRect;
@property (nonatomic) struct CGRect thumbnailRect; // @synthesize thumbnailRect=_thumbnailRect;

+ (id)archiveName;
+ (unsigned int)currentVersion;
+ (long long)imageSetType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)preheatImages;

@end

