//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXStocksGlue : NSObject
{
}

+ (void)accessibilityInitializeBundle;
+ (id)formattedStringForString:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3;
+ (id)sharedStocksController;
- (id)selectedStock;
- (double)timeQuoteLastUpdated;

@end

