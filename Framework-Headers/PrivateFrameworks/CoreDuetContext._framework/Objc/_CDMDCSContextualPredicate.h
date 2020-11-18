//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuetContext/_CDContextualPredicate.h>

#import <CoreDuetContext/_CDDictionaryEncoding-Protocol.h>

@class NSDictionary, NSString;

@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding>
{
    NSString *_identifier;
    NSDictionary *_parameters;
}

@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;

+ (id)_predicateForChangeAtKeyPath:(id)arg1 identifier:(id)arg2;
+ (id)_predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 identifier:(id)arg3;
+ (id)_predicateForKeyPath:(id)arg1 withPredicate:(id)arg2 identifier:(id)arg3;
+ (id)andPredicateWithSubpredicates:(id)arg1 identifier:(id)arg2;
+ (id)contextualPredicateForKeyPaths:(id)arg1 withPredicate:(id)arg2 identifier:(id)arg3;
+ (id)notPredicateWithSubpredicate:(id)arg1 identifier:(id)arg2;
+ (id)orPredicateWithSubpredicates:(id)arg1 identifier:(id)arg2;
+ (id)predicateForBacklightOnStatus;
+ (id)predicateForFirstPartyWorkoutMatchingTypes:(id)arg1 states:(id)arg2;
+ (id)predicateForForegroundApp;
+ (id)predicateForIsConnectedToAudioBluetoothDevice;
+ (id)predicateForIsConnectedToCar;
+ (id)predicateForNetworkQualityBad;
+ (id)predicateForNetworkQualityFair;
+ (id)predicateForNextAlarm;
+ (id)predicateForPhotosAppBecameForeground;
+ (id)predicateForUserIsArrivingAtHome;
+ (id)predicateForUserIsLeavingHome;
+ (id)predicateWithIdentifier:(id)arg1;
+ (id)predicates;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2;
- (id)initWithPlistDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)plistDictionary;

@end
