//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightUI/SearchUICardSection-Protocol.h>

@class NSArray, NSString, UIImage;
@protocol SearchUIActionButtonItem;

@protocol SearchUIMovieCardSection <SearchUICardSection>

@property (readonly, nonatomic) id<SearchUIActionButtonItem> actionButton;
@property (readonly, copy, nonatomic) NSArray *buyButtonSections;
@property (readonly, nonatomic) UIImage *coverImage;
@property (readonly, copy, nonatomic) NSArray *detailSections;
@property (readonly, nonatomic) UIImage *rottenTomatoesGlyph;
@property (readonly, copy, nonatomic) NSString *rottenTomatoesText;


@optional
@end
