//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSPayloadInspector : NSObject
{
}

+ (void)enforceSecurityError:(long long)arg1 messageGuid:(id)arg2;
+ (void)inspectPayload:(id)arg1 messageGuid:(id)arg2;
+ (long long)validateData:(id)arg1 messageGuid:(id)arg2;
+ (long long)validateString:(id)arg1 messageGuid:(id)arg2;

@end
