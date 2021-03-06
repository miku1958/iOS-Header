//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ManagedConfiguration/NSSecureCoding-Protocol.h>

@class NSString;

@interface MCDeviceUploadRequestType : NSObject <NSSecureCoding>
{
    NSString *_code;
    NSString *_name;
}

@property (readonly, nonatomic) NSString *code; // @synthesize code=_code;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCode:(id)arg1 name:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

