//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDPrivacyPolicy : NSObject
{
    BOOL canPersistOnStorage;
    double temporalPrecision;
}

@property (readonly, nonatomic) BOOL canPersistOnStorage; // @synthesize canPersistOnStorage;
@property (readonly, nonatomic) double temporalPrecision; // @synthesize temporalPrecision;

+ (id)sharedPrivacyPolicy;
- (id)description;
- (id)init;
- (id)initWithTemporalPrecision:(double)arg1 canPersistOnStorage:(BOOL)arg2;

@end

