//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKDayOccurrenceStringGenerator : NSObject
{
}

+ (id)_attributedLocationWithState:(id)arg1;
+ (id)_attributedStatusWithState:(id)arg1;
+ (id)_attributedTimeWithState:(id)arg1;
+ (id)_attributedTitleWithState:(id)arg1;
+ (id)_defaultAttributesForState:(id)arg1;
+ (double)_defaultMinimumLineHeightForState:(id)arg1;
+ (double)_minimumPrimaryFontLineHeightUsingSmallText:(BOOL)arg1 sizeClass:(long long)arg2;
+ (double)attributedStringMinimumLineHeightUsingSmallText:(BOOL)arg1 sizeClass:(long long)arg2;
+ (double)minNaturalTextHeightForEvent:(id)arg1 usingSmallText:(BOOL)arg2 sizeClass:(long long)arg3;
+ (double)minimumNaturalHeightForPrimaryTextUsingSmallText:(BOOL)arg1 sizeClass:(long long)arg2;
- (id)generateContentStringWithState:(id)arg1;
- (id)generateTravelTimeStringWithState:(id)arg1;

@end

