//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/NSCopying-Protocol.h>

@class UIFont;

@interface HUNavigationButtonLayoutOptions : NSObject <NSCopying>
{
    UIFont *_font;
    double _minTextButtonWidth;
}

@property (strong, nonatomic) UIFont *font; // @synthesize font=_font;
@property (nonatomic) double minTextButtonWidth; // @synthesize minTextButtonWidth=_minTextButtonWidth;

+ (id)defaultOptionsForViewSizeSubclass:(long long)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
