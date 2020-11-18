//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class HKValueRange;

@interface HKUIDateLabel : UILabel
{
    long long _formatTemplate;
    BOOL _useUppercase;
    HKValueRange *_dateRange;
}

@property (readonly, nonatomic) HKValueRange *dateRange; // @synthesize dateRange=_dateRange;
@property (readonly, nonatomic) long long formatTemplate; // @synthesize formatTemplate=_formatTemplate;
@property (nonatomic) BOOL useUppercase; // @synthesize useUppercase=_useUppercase;

- (void).cxx_destruct;
- (id)_formattedText;
- (id)_formattedTextFromDate:(id)arg1;
- (BOOL)_setDateRange:(id)arg1;
- (BOOL)_setFormatTemplate:(long long)arg1;
- (id)init;
- (void)setDate:(id)arg1 formatTemplate:(long long)arg2;
- (void)setDateRange:(id)arg1 formatTemplate:(long long)arg2;

@end

