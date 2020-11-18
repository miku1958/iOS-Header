//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLCellGenerator, NFLFeedSettings;

@interface NFLCellGeneratorManager : NSObject
{
    NFLCellGenerator *_noImageCellGenerator;
    NFLCellGenerator *_imageOnSideCellGenerator;
    NFLCellGenerator *_imageOnSideAccessibilityCellGenerator;
    NFLCellGenerator *_imageOnTopCellGenerator;
    NFLCellGenerator *_premiumCellGenerator;
    NFLCellGenerator *_trendingCellGenerator;
    NFLCellGenerator *_spotlightImageOnTopCellGenerator;
    NFLCellGenerator *_spotlightImageOnSideCellGenerator;
    NFLCellGenerator *_gapCellGenerator;
    NFLFeedSettings *_feedSettings;
}

@property (weak, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property (strong, nonatomic) NFLCellGenerator *gapCellGenerator; // @synthesize gapCellGenerator=_gapCellGenerator;
@property (strong, nonatomic) NFLCellGenerator *imageOnSideAccessibilityCellGenerator; // @synthesize imageOnSideAccessibilityCellGenerator=_imageOnSideAccessibilityCellGenerator;
@property (strong, nonatomic) NFLCellGenerator *imageOnSideCellGenerator; // @synthesize imageOnSideCellGenerator=_imageOnSideCellGenerator;
@property (strong, nonatomic) NFLCellGenerator *imageOnTopCellGenerator; // @synthesize imageOnTopCellGenerator=_imageOnTopCellGenerator;
@property (strong, nonatomic) NFLCellGenerator *noImageCellGenerator; // @synthesize noImageCellGenerator=_noImageCellGenerator;
@property (strong, nonatomic) NFLCellGenerator *premiumCellGenerator; // @synthesize premiumCellGenerator=_premiumCellGenerator;
@property (strong, nonatomic) NFLCellGenerator *spotlightImageOnSideCellGenerator; // @synthesize spotlightImageOnSideCellGenerator=_spotlightImageOnSideCellGenerator;
@property (strong, nonatomic) NFLCellGenerator *spotlightImageOnTopCellGenerator; // @synthesize spotlightImageOnTopCellGenerator=_spotlightImageOnTopCellGenerator;
@property (strong, nonatomic) NFLCellGenerator *trendingCellGenerator; // @synthesize trendingCellGenerator=_trendingCellGenerator;

+ (id)cellGeneratorWithFeedSettings:(id)arg1;
- (void).cxx_destruct;
- (id)cellGeneratorForCellType:(long long)arg1;
- (id)cellGeneratorsForCellType:(long long)arg1;

@end

