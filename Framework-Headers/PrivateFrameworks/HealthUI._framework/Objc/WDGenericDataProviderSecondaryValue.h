//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDataProviderValue-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface WDGenericDataProviderSecondaryValue : NSObject <HKDataProviderValue>
{
    NSNumber *_average;
    NSDate *_date;
    NSString *_formatString;
}

@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributedStringWithDisplayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 dateCache:(id)arg5;
- (id)contextualDescriptionWithDateCache:(id)arg1;
- (id)initWithAverage:(id)arg1;

@end

