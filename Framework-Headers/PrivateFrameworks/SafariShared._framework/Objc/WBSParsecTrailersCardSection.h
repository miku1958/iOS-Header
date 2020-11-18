//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecCardSection.h>

@class NSArray, NSString;

@interface WBSParsecTrailersCardSection : WBSParsecCardSection
{
    NSString *_title;
    NSArray *_trailers;
}

@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) NSArray *trailers; // @synthesize trailers=_trailers;

+ (id)_specializedCardSectionSchema;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;

@end
