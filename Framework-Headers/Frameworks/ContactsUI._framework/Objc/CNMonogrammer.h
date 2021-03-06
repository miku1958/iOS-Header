//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor, UIFont, UIImage;

@interface CNMonogrammer : NSObject
{
    UIImage *_silhouetteMonogram;
    UIImage *_questionMarkMonogram;
    UIImage *_knockoutMaskMonogram;
    double _innerBorderWidth;
    NSString *_silhouetteImageName;
    long long _monogrammerStyle;
    CNMonogrammer *_subMonogrammer;
    UIColor *_tintColor;
    double _scale;
    BOOL _textKnockout;
    UIFont *_font;
    double _diameter;
    UIColor *_backgroundColor;
    UIColor *_textColor;
}

@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic) double diameter; // @synthesize diameter=_diameter;
@property (strong, nonatomic) UIFont *font; // @synthesize font=_font;
@property (readonly, nonatomic) NSArray *keysToFetch;
@property (readonly, nonatomic) UIImage *knockoutMaskMonogram;
@property (readonly, nonatomic) UIImage *questionMarkMonogram;
@property (readonly, nonatomic) UIImage *silhouetteMonogram;
@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property (nonatomic) BOOL textKnockout; // @synthesize textKnockout=_textKnockout;

+ (id)_initialsForContact:(id)arg1;
+ (id)descriptorForRequiredKeysIncludingImage:(BOOL)arg1;
+ (long long)monogramTypeForContact:(id)arg1;
+ (id)requiredKeyDescriptor;
- (void).cxx_destruct;
- (void)_clearMonogramCache;
- (id)_copyMonogramWithImageData:(id)arg1;
- (id)_copyMonogramWithInitials:(id)arg1;
- (id)_copyMonogramWithKnockoutMask;
- (id)_copyMonogramWithSilhouette;
- (id)_initialsForFirstName:(id)arg1 lastName:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithStyle:(long long)arg1 diameter:(double)arg2;
- (double)innerBorderWidth;
- (id)monogramForContact:(id)arg1;
- (id)monogramForContact:(id)arg1 isContactImage:(BOOL *)arg2;
- (id)monogramForContacts:(id)arg1;
- (id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (void)monogramsAsFlatImages;
- (void)monogramsForStark;
- (void)monogramsWithTint:(id)arg1;
- (id)silhouetteImageName;

@end

