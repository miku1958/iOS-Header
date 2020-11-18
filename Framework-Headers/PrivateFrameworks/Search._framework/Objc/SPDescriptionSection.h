//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SPSection.h>

#import <Search/PRSDescriptionSection-Protocol.h>

@class NSString, NSURL, PRSImage;

@interface SPDescriptionSection : SPSection <PRSDescriptionSection>
{
}

@property (strong, nonatomic) NSURL *attribution_url;
@property (nonatomic) BOOL card_padding_bottom;
@property (nonatomic) BOOL card_padding_top;
@property (nonatomic) BOOL description_expand; // @dynamic description_expand;
@property (strong, nonatomic) NSString *description_expand_text; // @dynamic description_expand_text;
@property (nonatomic) long long description_maxlines; // @dynamic description_maxlines;
@property (nonatomic) long long description_size; // @dynamic description_size;
@property (nonatomic) long long description_weight; // @dynamic description_weight;
@property (nonatomic) BOOL hide_divider;
@property (strong, nonatomic) PRSImage *image; // @dynamic image;
@property (strong, nonatomic) NSString *image_align; // @dynamic image_align;
@property (strong, nonatomic) NSString *resultDescription; // @dynamic resultDescription;
@property (strong, nonatomic) NSString *title; // @dynamic title;
@property (nonatomic) BOOL title_nowrap; // @dynamic title_nowrap;
@property (nonatomic) long long title_weight; // @dynamic title_weight;
@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) NSURL *url;

@end
