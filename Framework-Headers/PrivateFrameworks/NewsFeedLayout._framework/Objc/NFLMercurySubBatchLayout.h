//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout;

@interface NFLMercurySubBatchLayout : NFLSubBatchLayout
{
    int _layoutType;
    NFLSingleComponentLayout *_largeSixComponent;
    NFLSingleComponentLayout *_leftThreeComponent;
    NFLSingleComponentLayout *_rightThreeComponent;
    NFLSingleComponentLayout *_bottomSixComponent;
}

@property (strong, nonatomic) NFLSingleComponentLayout *bottomSixComponent; // @synthesize bottomSixComponent=_bottomSixComponent;
@property (strong, nonatomic) NFLSingleComponentLayout *largeSixComponent; // @synthesize largeSixComponent=_largeSixComponent;
@property (nonatomic) int layoutType; // @synthesize layoutType=_layoutType;
@property (strong, nonatomic) NFLSingleComponentLayout *leftThreeComponent; // @synthesize leftThreeComponent=_leftThreeComponent;
@property (strong, nonatomic) NFLSingleComponentLayout *rightThreeComponent; // @synthesize rightThreeComponent=_rightThreeComponent;

- (void).cxx_destruct;
- (id)initWithFeedSettings:(id)arg1 layoutType:(int)arg2;
- (BOOL)isValid;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (double)rank;
- (unsigned long long)rowSpan;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;

@end

