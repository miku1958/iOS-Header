//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface NTKComplicationSampleData : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_familyToTemplate;
    NSMutableSet *_supportedFamilies;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_clientID;
    NSString *_applicationID;
}

@property (copy) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property (copy) NSString *clientID; // @synthesize clientID=_clientID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupportedFamilies:(id)arg1;
- (id)loadedFamilies;
- (void)setTemplate:(id)arg1 forFamily:(long long)arg2;
- (id)supportedFamilies;
- (id)templateForFamily:(long long)arg1;

@end

