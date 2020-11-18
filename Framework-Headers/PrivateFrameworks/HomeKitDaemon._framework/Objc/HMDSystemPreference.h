//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDPreference.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class NSString;
@protocol NSObject;

@interface HMDSystemPreference : HMDPreference <HMFObject>
{
    NSString *_domain;
    id<NSObject> _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *domain; // @synthesize domain=_domain;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) Class superclass;
@property (copy) id<NSObject> value; // @synthesize value=_value;

- (void).cxx_destruct;
- (BOOL)boolValue;
- (id)dataValue;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 domain:(id)arg3 defaultValue:(id)arg4;
- (id)numberValue;
- (id)stringValue;

@end

