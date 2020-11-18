//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

@interface WBSGeneratedTouchIcon : NSObject
{
    BOOL _generatedFromIcon;
    BOOL _generatedFromFallbackIcon;
    UIImage *_touchIcon;
    UIColor *_backgroundColor;
}

@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic, getter=isGeneratedFromFallbackIcon) BOOL generatedFromFallbackIcon; // @synthesize generatedFromFallbackIcon=_generatedFromFallbackIcon;
@property (nonatomic, getter=isGeneratedFromIcon) BOOL generatedFromIcon; // @synthesize generatedFromIcon=_generatedFromIcon;
@property (strong, nonatomic) UIImage *touchIcon; // @synthesize touchIcon=_touchIcon;

+ (id)generatedTouchIconWithIcon:(id)arg1 backgroundColor:(id)arg2 generatedFromIcon:(BOOL)arg3;
- (void).cxx_destruct;

@end

