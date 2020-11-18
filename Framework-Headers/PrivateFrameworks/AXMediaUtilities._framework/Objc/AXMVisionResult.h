//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AXMLanguage, AXMVisionFeature, CIImage, NSArray, NSNumber, NSString;

@interface AXMVisionResult : NSObject <NSSecureCoding>
{
    CIImage *_image;
    NSArray *_features;
    NSNumber *_appliedImageOrientation;
    NSString *_detectedFeatureDescription;
    NSString *_detectedTextDescription;
}

@property (strong, nonatomic) NSNumber *appliedImageOrientation; // @synthesize appliedImageOrientation=_appliedImageOrientation;
@property (readonly, nonatomic) AXMVisionFeature *assetMetadataFeature;
@property (readonly, nonatomic) AXMVisionFeature *colorInfoFeature;
@property (strong, nonatomic) NSString *detectedFeatureDescription; // @synthesize detectedFeatureDescription=_detectedFeatureDescription;
@property (strong, nonatomic) NSString *detectedTextDescription; // @synthesize detectedTextDescription=_detectedTextDescription;
@property (readonly, nonatomic) AXMLanguage *detectedTextLanguage;
@property (strong, nonatomic) NSArray *features; // @synthesize features=_features;
@property (strong, nonatomic) CIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) NSString *localizedDetectedTextHint;

+ (id)resultWithFeatures:(id)arg1 orientation:(id)arg2;
+ (id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedStringFormatterForExpression:(id)arg1;
- (id)sortedFeatures;
- (id)speakableDescription;
- (BOOL)speakableDescriptionContainsDiscoveredText;

@end
