//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosEditUI/NSCopying-Protocol.h>

@interface PUVideoEditMakerOptions : NSObject <NSCopying>
{
    BOOL _shouldApplyTrim;
    BOOL _shouldApplySlomo;
    BOOL _shouldApplyTrimInPlace;
}

@property (nonatomic) BOOL shouldApplySlomo; // @synthesize shouldApplySlomo=_shouldApplySlomo;
@property (nonatomic) BOOL shouldApplyTrim; // @synthesize shouldApplyTrim=_shouldApplyTrim;
@property (nonatomic) BOOL shouldApplyTrimInPlace; // @synthesize shouldApplyTrimInPlace=_shouldApplyTrimInPlace;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
