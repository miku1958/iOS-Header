//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommunicationsSetupUI/CNMeCardSharingNameProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKSettingsMeCardSharingNameProvider : NSObject <CNMeCardSharingNameProvider>
{
    NSString *_givenName;
    NSString *_middleName;
    NSString *_familyName;
    NSString *_nickname;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property (strong, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property (strong, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property (readonly) Class superclass;

+ (id)nameProviderForNickname:(id)arg1;
- (void).cxx_destruct;

@end

