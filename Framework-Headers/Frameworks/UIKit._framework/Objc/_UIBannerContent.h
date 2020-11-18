//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString, UIColor, UIImage;

@interface _UIBannerContent : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_body;
    NSString *_imageName;
    UIImage *_image;
    UIColor *_backgroundColor;
    UIColor *_contentColor;
}

@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (strong, nonatomic) NSString *body; // @synthesize body=_body;
@property (strong, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)bannerContentWithTitle:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

