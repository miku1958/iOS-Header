//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ECEmailAddressParser : NSObject
{
}

+ (BOOL)_validateString:(id)arg1 withFunction:(CDUnknownFunctionPointerType)arg2;
+ (BOOL)parseEmailAddressString:(id)arg1 displayName:(id *)arg2 localPart:(id *)arg3 domain:(id *)arg4 groupList:(id *)arg5;
+ (BOOL)parseString:(id)arg1 emailAddressList:(id *)arg2;
+ (BOOL)validateDisplayName:(id)arg1;
+ (BOOL)validateDomain:(id)arg1;
+ (BOOL)validateLocalPart:(id)arg1;

@end

