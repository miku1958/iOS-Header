//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>
#import <ClockKit/NSSecureCoding-Protocol.h>

@class NSString, UIColor, UIImage;

@interface CLKFullColorImageProvider : NSObject <NSSecureCoding, NSCopying>
{
    UIColor *_tintColor;
    BOOL _applyScalingAndCircularMasking;
    BOOL _finalized;
    UIImage *_image;
    NSString *_accessibilityLabel;
}

@property (strong, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

+ (id)providerWithFullColorImage:(id)arg1;
+ (id)providerWithFullColorImage:(id)arg1 applyScalingAndCircularMasking:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (void)_resizeImagesIfNecessaryWithMaxSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeWithMaxSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)validate;

@end

