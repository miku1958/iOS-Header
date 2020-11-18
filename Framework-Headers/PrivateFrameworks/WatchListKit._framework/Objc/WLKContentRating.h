//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WLKContentRating : NSObject
{
    unsigned long long _contentRatingSystem;
    NSString *_displayName;
    unsigned long long _ratingValue;
}

@property (readonly, nonatomic) unsigned long long contentRatingSystem; // @synthesize contentRatingSystem=_contentRatingSystem;
@property (readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) unsigned long long ratingValue; // @synthesize ratingValue=_ratingValue;

+ (Class)_classForContentRatingSystem:(unsigned long long)arg1;
+ (unsigned long long)_ratingSystemForString:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
