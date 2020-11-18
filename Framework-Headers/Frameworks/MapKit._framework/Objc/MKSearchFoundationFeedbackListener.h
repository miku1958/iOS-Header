//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/SFFeedbackListener-Protocol.h>

@class NSArray, NSString;

@interface MKSearchFoundationFeedbackListener : NSObject <SFFeedbackListener>
{
    unsigned long long _clientType;
    NSArray *_sections;
}

@property (nonatomic) unsigned long long clientType; // @synthesize clientType=_clientType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didEngageResult:(id)arg1;
- (void)didRankSections:(id)arg1;
- (id)initWithClientType:(unsigned long long)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;

@end

