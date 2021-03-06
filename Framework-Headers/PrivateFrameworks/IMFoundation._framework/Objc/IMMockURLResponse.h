//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMFoundation/NSSecureCoding-Protocol.h>

@class NSData, NSHTTPURLResponse, NSString;

@interface IMMockURLResponse : NSObject <NSSecureCoding>
{
    NSHTTPURLResponse *_response;
    NSData *_data;
    NSString *_requestBodyKeyPath;
    NSString *_mockID;
}

@property (strong) NSData *data; // @synthesize data=_data;
@property (copy) NSString *mockID; // @synthesize mockID=_mockID;
@property (copy) NSString *requestBodyKeyPath; // @synthesize requestBodyKeyPath=_requestBodyKeyPath;
@property (strong) NSHTTPURLResponse *response; // @synthesize response=_response;

+ (id)objectFromPlist:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

