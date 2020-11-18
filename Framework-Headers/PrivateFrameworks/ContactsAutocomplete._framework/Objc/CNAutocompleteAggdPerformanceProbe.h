//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompletePerformanceProbe-Protocol.h>

@class CNAutocompleteAggdProbe, NSMutableDictionary, NSString;

@interface CNAutocompleteAggdPerformanceProbe : NSObject <CNAutocompletePerformanceProbe>
{
    CNAutocompleteAggdProbe *_aggdProbe;
    NSMutableDictionary *_pendingAddData;
}

@property (strong, nonatomic) CNAutocompleteAggdProbe *aggdProbe; // @synthesize aggdProbe=_aggdProbe;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableDictionary *pendingAddData; // @synthesize pendingAddData=_pendingAddData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAggdProbe:(id)arg1;
- (void)recordLatency:(double)arg1 forResultCount:(unsigned long long)arg2 forSource:(id)arg3;
- (void)recordNumberOfCalendarServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfContactResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfDirectoryServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfPredictionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfRecentResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfResultsReturned:(unsigned long long)arg1 inTimeInterval:(double)arg2 forBatch:(unsigned long long)arg3 includesServers:(BOOL)arg4;
- (void)recordNumberOfSuggestionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)recordNumberOfSupplementalResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
- (void)sendData;

@end

