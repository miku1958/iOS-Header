//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBColor, BBImage, NSString;

@interface BBAppearance : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_title;
    BBColor *_titleColor;
    BBImage *_image;
    BBColor *_color;
    long long _style;
    NSString *_viewClassName;
}

@property (copy, nonatomic) BBColor *color; // @synthesize color=_color;
@property (copy, nonatomic) BBImage *image; // @synthesize image=_image;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) BBColor *titleColor; // @synthesize titleColor=_titleColor;
@property (copy, nonatomic) NSString *viewClassName; // @synthesize viewClassName=_viewClassName;

+ (id)appearanceWithTitle:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;

@end
