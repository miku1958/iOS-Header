//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLSingleComponentLayout;

@interface NFLSixSixThreeThreeSubBatchLayout : NFLSubBatchLayout
{
    BOOL _wideCellsOnLeft;
    NFLSingleComponentLayout *_topSixComponent;
    NFLSingleComponentLayout *_bottomSixComponent;
    NFLSingleComponentLayout *_rightThreeComponent;
    NFLSingleComponentLayout *_leftThreeComponent;
}

@property (strong, nonatomic) NFLSingleComponentLayout *bottomSixComponent; // @synthesize bottomSixComponent=_bottomSixComponent;
@property (strong, nonatomic) NFLSingleComponentLayout *leftThreeComponent; // @synthesize leftThreeComponent=_leftThreeComponent;
@property (strong, nonatomic) NFLSingleComponentLayout *rightThreeComponent; // @synthesize rightThreeComponent=_rightThreeComponent;
@property (strong, nonatomic) NFLSingleComponentLayout *topSixComponent; // @synthesize topSixComponent=_topSixComponent;
@property (nonatomic) BOOL wideCellsOnLeft; // @synthesize wideCellsOnLeft=_wideCellsOnLeft;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (double)rank;
- (unsigned long long)rowSpan;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;

@end

