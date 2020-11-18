//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/IMEventListenerResponse-Protocol.h>

@class NSDictionary, NSError, NSString;

@interface IMEventListenerResponse : NSObject <IMEventListenerResponse>
{
    BOOL _success;
    NSDictionary *_userInfo;
    NSError *_error;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=didSucceed) BOOL success; // @synthesize success=_success;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)arg1 userInfo:(id)arg2 error:(id)arg3;

@end

