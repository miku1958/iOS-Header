//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMPerson, NSString;

@interface IMSPIHandle : NSObject
{
    NSString *_address;
    NSString *_countryCode;
    BOOL _isMe;
    IMPerson *_imPerson;
    BOOL _haveFetchedIMPerson;
}

@property (readonly) NSString *address; // @synthesize address=_address;
@property (readonly) NSString *businessName;
@property (readonly) NSString *cnContactID;
@property (readonly) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (readonly) NSString *displayName;
@property (readonly) BOOL isBusiness;
@property (readonly) BOOL isMe; // @synthesize isMe=_isMe;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1 countryCode:(id)arg2 isMe:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)person;

@end

