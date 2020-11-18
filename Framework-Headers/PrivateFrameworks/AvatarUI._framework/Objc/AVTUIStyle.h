//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface AVTUIStyle : NSObject
{
    UIColor *_backgroundColor;
    UIColor *_textColor;
}

@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;

+ (id)darkStyle;
+ (id)lightStyle;
- (void).cxx_destruct;

@end
