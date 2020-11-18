//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionRowModel.h>

@class NSString, SFImage, SFPunchout, SFWatchListCardSection, SearchUIWatchListCardsManager;
@protocol SearchUIWatchListCardRowModelDelegate;

@interface SearchUIWatchListCardRowModel : SearchUICardSectionRowModel
{
    BOOL _hasLoaded;
    BOOL _hasError;
    id<SearchUIWatchListCardRowModelDelegate> _delegate;
    NSString *_text;
    SFImage *_image;
    long long _buttonState;
    SFPunchout *_punchout;
    SearchUIWatchListCardsManager *_manager;
}

@property (nonatomic) long long buttonState; // @synthesize buttonState=_buttonState;
@property (strong, nonatomic) SFWatchListCardSection *cardSection; // @dynamic cardSection;
@property (weak) id<SearchUIWatchListCardRowModelDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL hasError; // @synthesize hasError=_hasError;
@property (nonatomic) BOOL hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property (strong, nonatomic) SFImage *image; // @synthesize image=_image;
@property (strong, nonatomic) SearchUIWatchListCardsManager *manager; // @synthesize manager=_manager;
@property (strong, nonatomic) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property (strong, nonatomic) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (id)initWithResult:(id)arg1 cardSection:(id)arg2 asyncRowManager:(id)arg3 queryId:(unsigned long long)arg4;
- (BOOL)isDraggable;
- (BOOL)isTappable;
- (id)punchouts;
- (int)separatorStyle;
- (void)toggleAddToUpNextWithFeedbackDelegate:(id)arg1;
- (void)updateWithText:(id)arg1 buttonState:(long long)arg2;
- (void)updateWithText:(id)arg1 buttonState:(long long)arg2 image:(id)arg3 punchout:(id)arg4;

@end
