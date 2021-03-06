//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray, NSError;

@interface ASDExternalManifestResponse : ASDRequestResponse
{
    NSArray *_results;
}

@property (copy) NSError *error; // @dynamic error;
@property (readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property BOOL success; // @dynamic success;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1;

@end

