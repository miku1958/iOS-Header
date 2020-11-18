//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NFLHeadlineCollectionViewLayoutAttributes.h>

@class NSString;

@interface NFLHeadlineImageOnSideAccessibilityCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes
{
    NSString *_titleFontName;
    double _titleFontSize;
    double _titleLineHeight;
    struct _NSRange _titleNextToImageRange;
}

@property (nonatomic) struct CGRect titleBellowImageFrame;
@property (nonatomic) struct CGRect titleNextToImageFrame;
@property (nonatomic) struct _NSRange titleNextToImageRange; // @synthesize titleNextToImageRange=_titleNextToImageRange;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)excerptFontName;
- (double)excerptFontSize;
- (double)excerptLineHeight;
- (BOOL)isEqual:(id)arg1;
- (void)populateWithProtobuf:(id)arg1;
- (id)protobufRepresentation;
- (void)setExcerptFontName:(id)arg1;
- (void)setExcerptFontSize:(double)arg1;
- (void)setExcerptLineHeight:(double)arg1;

@end

