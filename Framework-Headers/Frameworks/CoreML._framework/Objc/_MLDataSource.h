//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/ETDataProvider-Protocol.h>

@class NSDictionary, NSString;

@interface _MLDataSource : NSObject <ETDataProvider>
{
    NSDictionary *_dataTensorDictionary;
}

@property (strong, nonatomic) NSDictionary *dataTensorDictionary; // @synthesize dataTensorDictionary=_dataTensorDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithMLFeatureProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id *)arg4;
- (unsigned long long)numberOfDataPoints;

@end
