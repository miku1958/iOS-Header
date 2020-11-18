//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARTechniqueDelegate-Protocol.h>

@class NSArray, NSString;
@protocol ARTechniqueDelegate;

@interface ARTechnique : NSObject <ARTechniqueDelegate>
{
    id<ARTechniqueDelegate> _delegate;
    NSArray *_techniques;
    unsigned long long _powerUsage;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ARTechniqueDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long powerUsage; // @synthesize powerUsage=_powerUsage;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *techniques; // @synthesize techniques=_techniques;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithTechniques:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (void)technique:(id)arg1 didFailWithError:(id)arg2;
- (void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4;

@end

