//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface BKSystemProtectedConfiguration : NSObject
{
    NSNumber *_biometryEnabled;
    NSNumber *_unlockEnabled;
    NSNumber *_identificationEnabled;
    NSNumber *_loginEnabled;
    NSNumber *_unlockTokenMaxLifetime;
}

@property (strong, nonatomic) NSNumber *biometryEnabled; // @synthesize biometryEnabled=_biometryEnabled;
@property (strong, nonatomic) NSNumber *identificationEnabled; // @synthesize identificationEnabled=_identificationEnabled;
@property (strong, nonatomic) NSNumber *loginEnabled; // @synthesize loginEnabled=_loginEnabled;
@property (strong, nonatomic) NSNumber *unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
@property (strong, nonatomic) NSNumber *unlockTokenMaxLifetime; // @synthesize unlockTokenMaxLifetime=_unlockTokenMaxLifetime;

- (void).cxx_destruct;
- (id)description;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;

@end
