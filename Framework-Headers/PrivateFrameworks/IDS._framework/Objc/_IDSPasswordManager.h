//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/_IDSPasswordManager-Protocol.h>

@class NSString;

@interface _IDSPasswordManager : NSObject <_IDSPasswordManager>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)setPassword:(id)arg1 forUsername:(id)arg2 onService:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
