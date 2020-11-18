//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IPPerson : NSObject
{
    NSString *_fullName;
    NSString *_handle;
    NSString *_ABUUID;
    NSString *_handleType;
}

@property (strong) NSString *ABUUID; // @synthesize ABUUID=_ABUUID;
@property (readonly, copy) NSString *displayableName;
@property (readonly) NSString *email; // @dynamic email;
@property (readonly) NSString *fullName; // @synthesize fullName=_fullName;
@property (readonly) NSString *handle; // @synthesize handle=_handle;
@property (readonly) NSString *handleType; // @synthesize handleType=_handleType;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEmail:(id)arg1 fullName:(id)arg2;
- (id)initWithHandle:(id)arg1 handleType:(id)arg2 fullName:(id)arg3;
- (id)initWithString:(id)arg1;

@end

