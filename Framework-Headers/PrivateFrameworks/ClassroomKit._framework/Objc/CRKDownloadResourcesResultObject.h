//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class NSArray;

@interface CRKDownloadResourcesResultObject : CATTaskResultObject
{
    NSArray *_resourceFileURLs;
}

@property (strong, nonatomic) NSArray *resourceFileURLs; // @synthesize resourceFileURLs=_resourceFileURLs;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
