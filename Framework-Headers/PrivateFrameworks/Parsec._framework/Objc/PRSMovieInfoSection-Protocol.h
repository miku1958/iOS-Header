//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Parsec/PRSSection-Protocol.h>

@class NSArray, NSString, PRSImage;
@protocol PRSActionButton;

@protocol PRSMovieInfoSection <PRSSection>

@property (strong, nonatomic) id<PRSActionButton> action_button;
@property (strong, nonatomic) NSArray *buy_button_sections;
@property (strong, nonatomic) PRSImage *image;
@property (strong, nonatomic) PRSImage *rt_glyph;
@property (strong, nonatomic) NSString *rt_text;
@property (strong, nonatomic) NSArray *sections;

@end

