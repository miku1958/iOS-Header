//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUITemplateBaseItem.h>

#import <SAObjects/SAUITemplateMonogrammable-Protocol.h>

@class NSArray, NSString, SAUIImageResource;

@interface SAUITemplateImageView : SAUITemplateBaseItem <SAUITemplateMonogrammable>
{
}

@property (nonatomic) float alpha;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SAUIImageResource *image;
@property (nonatomic) double imagePointHeight;
@property (nonatomic) double imagePointWidth;
@property (copy, nonatomic) NSArray *monogramName;
@property (copy, nonatomic) NSString *style;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *themeImages;

+ (id)imageView;
+ (id)imageViewWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

