//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface ASVBadgeDescription : NSObject
{
    double _shadowSize;
    unsigned long long _badgeSizeClass;
    UIImage *_badgeImage;
    struct CGSize _badgeSize;
    struct CGPoint _badgeOffset;
}

@property (readonly) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property (readonly) struct CGPoint badgeOffset; // @synthesize badgeOffset=_badgeOffset;
@property (readonly) struct CGSize badgeSize; // @synthesize badgeSize=_badgeSize;
@property (readonly) unsigned long long badgeSizeClass; // @synthesize badgeSizeClass=_badgeSizeClass;
@property (readonly) double shadowSize; // @synthesize shadowSize=_shadowSize;

+ (id)descriptionForSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (id)initWithSizeClass:(unsigned long long)arg1;

@end
