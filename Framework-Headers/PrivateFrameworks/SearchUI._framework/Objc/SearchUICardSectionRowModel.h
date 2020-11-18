//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIRowModel.h>

@interface SearchUICardSectionRowModel : SearchUIRowModel
{
    BOOL _isInline;
    Class _customCardSectionViewClass;
}

@property (readonly) Class customCardSectionViewClass; // @synthesize customCardSectionViewClass=_customCardSectionViewClass;
@property (nonatomic) BOOL isInline; // @synthesize isInline=_isInline;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (BOOL)anyInlineCardSectionsHaveNextCards;
- (BOOL)anyInlineCardSectionsHavePunchouts;
- (Class)cardSectionViewClass;
- (Class)cellViewClass;
- (id)description;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)dragURL;
- (id)fallbackCardSectionForCompactResult;
- (BOOL)fillsBackgroundWithContent;
- (BOOL)hasLeadingImage;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 isInline:(BOOL)arg3 queryId:(unsigned long long)arg4;
- (BOOL)isDraggable;
- (BOOL)isQuerySuggestion;
- (BOOL)isTappable;
- (id)nextCard;
- (BOOL)prefersNoSeparatorAbove;
- (id)punchouts;
- (id)reuseIdentifier;
- (int)separatorStyle;
- (BOOL)supportsCustomUserReportRequestAfforance;

@end
