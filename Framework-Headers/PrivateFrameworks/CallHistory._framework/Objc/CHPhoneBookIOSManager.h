//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallHistory/CHPhoneBookManagerProtocol-Protocol.h>

@class NSString;

@interface CHPhoneBookIOSManager : NSObject <CHPhoneBookManagerProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)get;
- (id)fetchABRecord:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(BOOL)arg3;
- (id)getLocalizedCallerIdLabelForRecord:(void *)arg1 withMultiValueId:(id)arg2 withCallerIdIsEmail:(BOOL)arg3;
- (id)getPersonsNameForRecord:(void *)arg1;
- (id)getRecordId:(id)arg1 andISOCountryCode:(id)arg2 isEmail:(BOOL)arg3;
- (BOOL)isABContactASuggestion;

@end
