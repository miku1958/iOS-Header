//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUGridCellLayoutOptions.h>

@class NSString;

@interface HUDynamicAlignmentTitleValueCellLayoutOptions : HUGridCellLayoutOptions
{
    NSString *_longestPossibleValueText;
    NSString *_longestPossibleTitleText;
}

@property (strong, nonatomic) NSString *longestPossibleTitleText; // @synthesize longestPossibleTitleText=_longestPossibleTitleText;
@property (strong, nonatomic) NSString *longestPossibleValueText; // @synthesize longestPossibleValueText=_longestPossibleValueText;

- (void).cxx_destruct;
- (id)initWithCellSizeSubclass:(long long)arg1 longestPossibleValueText:(id)arg2 longestPossibleTitleText:(id)arg3;

@end

