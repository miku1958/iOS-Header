//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTObject.h>

@class NSDictionary;
@protocol MTEventDataProviderDelegate;

@interface MTEventDataProvider : MTObject
{
    id<MTEventDataProviderDelegate> _delegate;
    NSDictionary *_knownFieldMethods;
}

@property (weak, nonatomic) id<MTEventDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSDictionary *knownFieldMethods; // @synthesize knownFieldMethods=_knownFieldMethods;

- (void).cxx_destruct;
- (SEL)knownFieldAccessorForFieldName:(id)arg1;
- (id)knownFieldMethodsForKnownFields:(id)arg1;
- (id)knownFields;
- (id)processMetricsData:(id)arg1 performanceData:(id)arg2;

@end
