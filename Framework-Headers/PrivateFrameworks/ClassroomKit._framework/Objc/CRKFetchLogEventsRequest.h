//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSDate, NSString;

@interface CRKFetchLogEventsRequest : CATTaskRequest
{
    NSDate *_cursorDate;
    NSString *_sessionToken;
}

@property (copy, nonatomic) NSDate *cursorDate; // @synthesize cursorDate=_cursorDate;
@property (copy, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
