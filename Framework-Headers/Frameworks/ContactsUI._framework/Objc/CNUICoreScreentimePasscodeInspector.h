//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreScreentimePasscodeCheck-Protocol.h>

@class NSString;

@interface CNUICoreScreentimePasscodeInspector : NSObject <CNUICoreScreentimePasscodeCheck>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)screentimePasscodeStatus;
- (unsigned long long)screentimePasscodeStatusOfDelegateWithInfo:(id)arg1;

@end

