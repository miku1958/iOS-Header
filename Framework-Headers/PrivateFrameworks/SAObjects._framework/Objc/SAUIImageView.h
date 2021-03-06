//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSArray, NSNumber, NSString, SAUIImageResource;

@interface SAUIImageView : SAAceView
{
}

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *descriptionText;
@property (strong, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSNumber *tintColor;

+ (id)imageView;
+ (id)imageViewWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

