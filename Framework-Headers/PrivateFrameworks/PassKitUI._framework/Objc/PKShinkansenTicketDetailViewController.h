//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKTransitTicketDetailViewController.h>

#import <PassKitUI/PKTransitTicketDetailDataSource-Protocol.h>

@class NSMutableArray, NSString, PKFelicaPassProperties;

@interface PKShinkansenTicketDetailViewController : PKTransitTicketDetailViewController <PKTransitTicketDetailDataSource>
{
    NSMutableArray *_train1Titles;
    NSMutableArray *_train2Titles;
    NSMutableArray *_train1Values;
    NSMutableArray *_train2Values;
    PKFelicaPassProperties *_properties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PKFelicaPassProperties *properties; // @synthesize properties=_properties;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_prepareLabelsAndValues;
- (id)_transitTicketTitleForDetail:(unsigned long long)arg1;
- (id)_transitTicketValueForDetail:(unsigned long long)arg1 forSecondaryTrain:(BOOL)arg2;
- (id)initWithFelicaProperty:(id)arg1;
- (unsigned long long)numberOfLegs;
- (id)titleForLeg:(unsigned long long)arg1;
- (long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)arg1;
- (id)transitTicketDetailTitleForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
- (id)transitTicketDetailValueForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;

@end
