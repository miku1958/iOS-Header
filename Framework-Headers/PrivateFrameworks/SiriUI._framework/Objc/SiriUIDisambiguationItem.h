//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImageView;

@interface SiriUIDisambiguationItem : NSObject
{
    BOOL _showsFavoriteStar;
    NSString *_title;
    NSString *_subtitle;
    NSString *_headingText;
    NSString *_extraDisambiguationText;
    NSString *_extraDisambiguationSubText;
    UIImageView *_imageView;
    struct _NSRange _titleBoldedRange;
}

@property (copy, nonatomic) NSString *extraDisambiguationSubText; // @synthesize extraDisambiguationSubText=_extraDisambiguationSubText;
@property (copy, nonatomic) NSString *extraDisambiguationText; // @synthesize extraDisambiguationText=_extraDisambiguationText;
@property (copy, nonatomic) NSString *headingText; // @synthesize headingText=_headingText;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) BOOL showsFavoriteStar; // @synthesize showsFavoriteStar=_showsFavoriteStar;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) struct _NSRange titleBoldedRange; // @synthesize titleBoldedRange=_titleBoldedRange;

+ (id)disambiguationItem;
- (void).cxx_destruct;

@end

