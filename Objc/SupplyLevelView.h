//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SupplyLevelView : UIView
{
    int supplyLevel;
    NSArray *colors;
}

@property (strong, nonatomic) NSArray *colors; // @synthesize colors;
@property (nonatomic) int supplyLevel; // @synthesize supplyLevel;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;

@end

