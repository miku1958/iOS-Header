//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AMSRatingSystem : NSObject
{
    NSString *_kind;
    NSString *_label;
    NSArray *_contentRatings;
    NSString *_ratingSystemID;
}

@property (readonly, nonatomic) NSArray *contentRatings; // @synthesize contentRatings=_contentRatings;
@property (readonly, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property (readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly, nonatomic) NSString *ratingSystemID; // @synthesize ratingSystemID=_ratingSystemID;

+ (id)ratingSystemWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
