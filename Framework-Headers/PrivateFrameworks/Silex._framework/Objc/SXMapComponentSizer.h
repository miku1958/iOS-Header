//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentSizer.h>

@interface SXMapComponentSizer : SXComponentSizer
{
}

+ (BOOL)isCenterSetOnRegion:(CDStruct_2b0c6e0b)arg1;
+ (BOOL)isSpanSetOnRegion:(CDStruct_2b0c6e0b)arg1;
+ (CDStruct_02837cd9)mapRectForRegion:(CDStruct_2b0c6e0b)arg1;
+ (CDStruct_2b0c6e0b)regionForCoordinates:(id)arg1;
+ (CDStruct_2b0c6e0b)regionFromRegion:(CDStruct_2b0c6e0b)arg1 coordinates:(id)arg2;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;

@end

