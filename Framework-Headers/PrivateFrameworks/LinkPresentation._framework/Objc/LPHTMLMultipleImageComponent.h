//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPHTMLComponent.h>

@class LPImageViewStyle, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface LPHTMLMultipleImageComponent : LPHTMLComponent
{
    LPImageViewStyle *_style;
    NSString *_themePath;
    NSArray *_images;
}

+ (id)additionalGlobalOutOfLineStyleDeclarations;
+ (id)additionalRulesForStyle:(id)arg1;
+ (id)baseRules;
+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)ruleDictionaryForStyleWithDarkInterface:(id)arg1;
+ (id)styleSet;
- (void).cxx_destruct;
- (void)_computeRowAndColumnSpecificationsForImages:(id)arg1;
- (void)buildComponents;
- (id)initWithImages:(id)arg1 style:(id)arg2 themePath:(id)arg3 generator:(id)arg4 constrainHeight:(BOOL)arg5;

@end
