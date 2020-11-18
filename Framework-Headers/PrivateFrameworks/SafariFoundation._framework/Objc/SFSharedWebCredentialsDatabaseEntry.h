//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SFSharedWebCredentialsDatabaseEntry : NSObject
{
    BOOL _approved;
    NSString *_domain;
    long long _service;
}

@property (readonly, nonatomic, getter=isApproved) BOOL approved; // @synthesize approved=_approved;
@property (readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property (readonly, nonatomic) long long service; // @synthesize service=_service;

- (void).cxx_destruct;
- (id)_initWithDomain:(id)arg1 service:(long long)arg2 isApproved:(BOOL)arg3;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
