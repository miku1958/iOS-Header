//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTTreatment, NSDictionary;

@interface MTTreatmentContext : NSObject
{
    MTTreatment *_treatment;
    NSDictionary *_metrics;
}

@property (strong, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property (strong, nonatomic) MTTreatment *treatment; // @synthesize treatment=_treatment;

- (void).cxx_destruct;
- (id)initWithTreatment:(id)arg1 metrics:(id)arg2;

@end

