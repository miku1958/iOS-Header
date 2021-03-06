//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ManagedConfiguration/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface MCDeviceUploadSubmissionResponse : NSObject <NSSecureCoding>
{
    NSString *_requestId;
    NSString *_requestStatus;
    NSString *_errorMessage;
    NSArray *_devices;
}

@property (readonly, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property (readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property (readonly, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property (readonly, nonatomic) NSString *requestStatus; // @synthesize requestStatus=_requestStatus;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_devicesFromDeviceArray:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

