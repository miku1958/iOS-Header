//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFTitleCardSection.h>

@class NSArray;

@interface SFNowPlayingCardSection : SFTitleCardSection
{
    NSArray *_movies;
}

@property (copy, nonatomic) NSArray *movies; // @synthesize movies=_movies;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
