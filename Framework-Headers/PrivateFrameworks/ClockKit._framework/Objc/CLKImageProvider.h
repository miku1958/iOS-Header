//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>
#import <ClockKit/NSSecureCoding-Protocol.h>

@class NSString, UIColor, UIImage;

@interface CLKImageProvider : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _finalized;
    BOOL _foregroundAccentImageTinted;
    UIImage *_onePieceImage;
    UIColor *_tintColor;
    UIImage *_twoPieceImageBackground;
    UIImage *_twoPieceImageForeground;
    NSString *_accessibilityLabel;
    CDUnknownBlockType _imageViewCreationHandler;
    UIImage *_foregroundAccentImage;
    UIColor *_foregroundAccentImageColor;
    struct CGSize _maxSize;
}

@property (strong, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property (strong, nonatomic) UIImage *foregroundAccentImage; // @synthesize foregroundAccentImage=_foregroundAccentImage;
@property (strong, nonatomic) UIColor *foregroundAccentImageColor; // @synthesize foregroundAccentImageColor=_foregroundAccentImageColor;
@property (nonatomic, getter=isForegroundAccentImageTinted) BOOL foregroundAccentImageTinted; // @synthesize foregroundAccentImageTinted=_foregroundAccentImageTinted;
@property (copy, nonatomic) CDUnknownBlockType imageViewCreationHandler; // @synthesize imageViewCreationHandler=_imageViewCreationHandler;
@property (readonly, nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property (strong, nonatomic) UIImage *onePieceImage; // @synthesize onePieceImage=_onePieceImage;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property (strong, nonatomic) UIImage *twoPieceImageBackground; // @synthesize twoPieceImageBackground=_twoPieceImageBackground;
@property (strong, nonatomic) UIImage *twoPieceImageForeground; // @synthesize twoPieceImageForeground=_twoPieceImageForeground;

+ (id)imageProviderWithImageViewCreationHandler:(CDUnknownBlockType)arg1;
+ (id)imageProviderWithOnePieceImage:(id)arg1;
+ (id)imageProviderWithOnePieceImage:(id)arg1 twoPieceImageBackground:(id)arg2 twoPieceImageForeground:(id)arg3;
+ (id)new;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (void)_resizeImagesIfNecessaryAndMaskToCircle:(BOOL)arg1;
- (void)_resizeImagesIfNecessaryWithCornerRadius:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeWithMaxSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (void)finalizeWithMaxSize:(struct CGSize)arg1 maskToCircle:(BOOL)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initPrivate;
- (id)initWithCoder:(id)arg1;
- (id)initWithForegroundAccentImage:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (id)initWithOnePieceImage:(id)arg1;
- (id)initWithOnePieceImage:(id)arg1 twoPieceImageBackground:(id)arg2 twoPieceImageForeground:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)validate;

@end

