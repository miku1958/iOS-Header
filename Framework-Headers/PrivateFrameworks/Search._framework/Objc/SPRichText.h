//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SPProxyObject.h>

#import <Search/PRSRichText-Protocol.h>

@class NSArray, NSString;

@interface SPRichText : SPProxyObject <PRSRichText>
{
}

@property (strong, nonatomic) NSString *content_advisory; // @dynamic content_advisory;
@property (strong, nonatomic) NSArray *formatted_text; // @dynamic formatted_text;
@property (strong, nonatomic) NSString *formatted_text_delimiter; // @dynamic formatted_text_delimiter;
@property (strong, nonatomic) NSArray *more_glyphs; // @dynamic more_glyphs;
@property (nonatomic) double star_rating; // @dynamic star_rating;
@property (nonatomic) long long text_maxlines; // @dynamic text_maxlines;

@end
