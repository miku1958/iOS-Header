//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIMultilingualPreferenceProviding-Protocol.h>

@class NSArray, NSString, TIInputMode;

@interface _TIMultilingualPreferences : NSObject <TIMultilingualPreferenceProviding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TIInputMode *preferredSecondaryInputMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *userEnabledInputModes;
@property (readonly, nonatomic) NSArray *userPreferredLanguages;

+ (id)inputModesForIdentifiers:(id)arg1;

@end

