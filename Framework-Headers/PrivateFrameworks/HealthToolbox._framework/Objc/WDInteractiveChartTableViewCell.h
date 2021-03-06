//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewTableViewCell.h>

#import <HealthToolbox/WDDisplayTypeDetailViewControllerChartCellType-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDInteractiveChartTableViewCell : HKViewTableViewCell <WDDisplayTypeDetailViewControllerChartCellType>
{
    unsigned long long _displayMode;
    unsigned long long _marginMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long marginMode; // @synthesize marginMode=_marginMode;
@property (readonly) Class superclass;

+ (id)defaultReuseIdentifier;
- (void)setPrimaryValueSource:(id)arg1 secondaryValueSource:(id)arg2 chartSource:(id)arg3;
- (void)setTimeScope:(long long)arg1;

@end

