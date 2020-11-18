//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MFComposeTextStyle : NSObject
{
    NSString *_imageName;
    NSString *_accessibilityIdenitifier;
    SEL _editSelector;
    long long _styleType;
}

@property (readonly, copy, nonatomic) NSString *accessibilityIdenitifier; // @synthesize accessibilityIdenitifier=_accessibilityIdenitifier;
@property (readonly, nonatomic) SEL editSelector; // @synthesize editSelector=_editSelector;
@property (readonly, copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property (readonly, nonatomic) long long styleType; // @synthesize styleType=_styleType;

+ (id)accessibilityIdenitifierForTextStyleType:(long long)arg1;
+ (id)composeTextStyleForTextStyleType:(long long)arg1;
+ (SEL)editSelectorForTextStyleType:(long long)arg1;
+ (id)imageNameForTextStyleType:(long long)arg1;
+ (BOOL)isTextListStyleOrdered:(id)arg1;
- (void).cxx_destruct;
- (id)initWithTextStyleType:(long long)arg1;

@end
