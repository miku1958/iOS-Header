//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUSTitleCardSection.h>

@class NSString, SAUIImageResource;

@interface SAUSRichTitleCardSection : SAUSTitleCardSection
{
}

@property (nonatomic) BOOL centered;
@property (copy, nonatomic) NSString *contentRatingText;
@property (copy, nonatomic) NSString *subtitle;
@property (strong, nonatomic) SAUIImageResource *titleImage;

+ (id)richTitleCardSection;
+ (id)richTitleCardSectionWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

