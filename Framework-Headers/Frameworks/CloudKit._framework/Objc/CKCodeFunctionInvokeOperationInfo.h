//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSData, NSString;

@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo
{
    NSString *_serviceName;
    NSString *_functionName;
    NSData *_serializedParameters;
}

@property (copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property (copy, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property (copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
