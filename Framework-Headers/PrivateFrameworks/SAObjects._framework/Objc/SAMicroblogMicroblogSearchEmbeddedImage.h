//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAMicroblogMicroblogSearchResultPost.h>

@class NSNumber, NSURL;

@interface SAMicroblogMicroblogSearchEmbeddedImage : SAMicroblogMicroblogSearchResultPost
{
}

@property (copy, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSNumber *width;

+ (id)microblogSearchEmbeddedImage;
+ (id)microblogSearchEmbeddedImageWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

