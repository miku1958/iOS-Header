//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSData;

@interface CRKFetchUserImageResultObject : CATTaskResultObject
{
    NSData *_userImageData;
}

@property (copy, nonatomic) NSData *userImageData; // @synthesize userImageData=_userImageData;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

