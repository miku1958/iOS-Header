//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDMRAVEndpoint, NSError, NSString;

@interface HMDMROutputDeviceStatus : NSObject
{
    HMDMRAVEndpoint *_outputEndpoint;
    NSString *_outputUID;
    NSError *_error;
}

@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) HMDMRAVEndpoint *outputEndpoint; // @synthesize outputEndpoint=_outputEndpoint;
@property (readonly, nonatomic) NSString *outputUID; // @synthesize outputUID=_outputUID;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithOutputEndpoint:(id)arg1;
- (id)initWithOutputEndpoint:(id)arg1 error:(id)arg2;
- (id)initWithOutputUID:(id)arg1;
- (id)initWithOutputUID:(id)arg1 error:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

