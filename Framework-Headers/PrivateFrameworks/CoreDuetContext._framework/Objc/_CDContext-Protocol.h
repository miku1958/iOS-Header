//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, NSObject, _CDContextualChangeRegistration, _CDContextualKeyPath, _CDContextualPredicate;
@protocol NSCopying><NSSecureCoding;

@protocol _CDContext
- (void)deregisterCallback:(_CDContextualChangeRegistration *)arg1;
- (BOOL)hasKnowledgeOfContextualKeyPath:(_CDContextualKeyPath *)arg1;
- (NSDate *)lastModifiedDateForContextualKeyPath:(_CDContextualKeyPath *)arg1;
- (NSObject<NSCopying><NSSecureCoding> *)objectForContextualKeyPath:(_CDContextualKeyPath *)arg1;
- (NSObject<NSCopying><NSSecureCoding> *)objectForKeyedSubscript:(_CDContextualKeyPath *)arg1;
- (void)registerCallback:(_CDContextualChangeRegistration *)arg1;

@optional
- (BOOL)evaluatePredicate:(_CDContextualPredicate *)arg1;
@end

