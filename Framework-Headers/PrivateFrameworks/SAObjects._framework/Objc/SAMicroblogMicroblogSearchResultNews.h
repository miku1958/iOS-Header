//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAMicroblogMicroblogSearchResultPost.h>

@class NSString, NSURL;

@interface SAMicroblogMicroblogSearchResultNews : SAMicroblogMicroblogSearchResultPost
{
}

@property (copy, nonatomic) NSURL *articleURL;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *title;

+ (id)microblogSearchResultNews;
+ (id)microblogSearchResultNewsWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
