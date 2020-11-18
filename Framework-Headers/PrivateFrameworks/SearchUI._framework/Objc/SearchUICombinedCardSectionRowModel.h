//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIRowModel.h>

@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel
{
    NSArray *_cardSectionRowModels;
}

@property (strong, nonatomic) NSArray *cardSectionRowModels; // @synthesize cardSectionRowModels=_cardSectionRowModels;

- (void).cxx_destruct;
- (Class)cellViewClass;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)dragURL;
- (id)firstRowModel;
- (id)initWithResult:(id)arg1 cardSectionRowModels:(id)arg2;
- (BOOL)isDraggable;
- (BOOL)isTappable;
- (id)nextCard;
- (id)punchouts;
- (int)separatorStyle;

@end
