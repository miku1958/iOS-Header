//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASTTemplateRating.h>

@class SAUIDecoratedText, SAUILocalImageResource;

@interface SASTTemplatePercentageRating : SASTTemplateRating
{
}

@property (strong, nonatomic) SAUILocalImageResource *localImageResource;
@property (strong, nonatomic) SAUIDecoratedText *value;

+ (id)templatePercentageRating;
+ (id)templatePercentageRatingWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
