//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSString;

@protocol PKTransitTicketDetailDataSource <NSObject>
- (unsigned long long)numberOfLegs;
- (NSString *)titleForLeg:(unsigned long long)arg1;
- (long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)arg1;
- (NSString *)transitTicketDetailTitleForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
- (NSString *)transitTicketDetailValueForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
@end

