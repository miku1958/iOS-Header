//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMSymptom, NSError;
@protocol HFCharacteristicOperationContextProviding;

@interface HFCharacteristicValueDisplayError : NSObject
{
    unsigned long long _category;
    id<HFCharacteristicOperationContextProviding> _contextProvider;
    NSError *_underlyingError;
    HMSymptom *_underlyingSymptom;
}

@property (nonatomic) unsigned long long category; // @synthesize category=_category;
@property (strong, nonatomic) id<HFCharacteristicOperationContextProviding> contextProvider; // @synthesize contextProvider=_contextProvider;
@property (readonly, nonatomic, getter=isPersistentError) BOOL persistentError;
@property (copy, nonatomic) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property (strong, nonatomic) HMSymptom *underlyingSymptom; // @synthesize underlyingSymptom=_underlyingSymptom;

+ (id)errorWithUnderlyingError:(id)arg1 readTraits:(id)arg2 contextProvider:(id)arg3;
+ (id)errorWithUnderlyingSymptom:(id)arg1 isFixingCurrently:(BOOL)arg2 contextProvider:(id)arg3;
+ (id)mostEgregiousError:(id)arg1;
- (void).cxx_destruct;

@end
