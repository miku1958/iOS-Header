//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>
#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSData, NSString, UIImage;

@interface CRKImage : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _horizontallyFlipped;
    UIImage *_underlyingImage;
}

@property (readonly, copy, nonatomic) NSData *PNGRepresentation;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (nonatomic, getter=isHorizontallyFlipped) BOOL horizontallyFlipped; // @synthesize horizontallyFlipped=_horizontallyFlipped;
@property (readonly, nonatomic) CRKImage *localizedImage;
@property (readonly, nonatomic) struct CGSize size;
@property (strong, nonatomic) UIImage *underlyingImage; // @synthesize underlyingImage=_underlyingImage;

+ (id)imageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithUnderlyingImage:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)templateImageNamed:(id)arg1;
+ (id)templateImageNamed:(id)arg1 inBundle:(id)arg2;
- (void).cxx_destruct;
- (id)JPEGRepresentationWithCompressionFactor:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)flippedUnderlyingImage;
- (unsigned long long)hash;
- (id)imageByAspectFittingToBox:(struct CGSize)arg1;
- (id)imageByEnlargingCanvasToSize:(struct CGSize)arg1;
- (id)imageByResizingToSize:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnderlyingImage:(id)arg1;
- (id)initWithUnderlyingImage:(id)arg1 horizontallyFlipped:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToImage:(id)arg1;
- (BOOL)isLargerThanSize:(struct CGSize)arg1;
- (BOOL)layoutIsLeftToRight;

@end

