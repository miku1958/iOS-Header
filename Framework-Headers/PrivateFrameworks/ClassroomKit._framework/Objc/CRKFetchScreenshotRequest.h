//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATTaskRequest.h>

@interface CRKFetchScreenshotRequest : CATTaskRequest
{
    unsigned long long _maxWidth;
    unsigned long long _maxHeight;
}

@property (nonatomic) unsigned long long maxHeight; // @synthesize maxHeight=_maxHeight;
@property (nonatomic) unsigned long long maxWidth; // @synthesize maxWidth=_maxWidth;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

