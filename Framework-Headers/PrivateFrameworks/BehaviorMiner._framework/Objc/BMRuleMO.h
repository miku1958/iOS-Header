//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet;

@interface BMRuleMO : NSManagedObject
{
}

@property (nonatomic) long long absoluteAntecedentSupport; // @dynamic absoluteAntecedentSupport;
@property (nonatomic) long long absoluteConsequentSupport; // @dynamic absoluteConsequentSupport;
@property (nonatomic) long long absoluteSupport; // @dynamic absoluteSupport;
@property (strong, nonatomic) NSSet *antecedent; // @dynamic antecedent;
@property (nonatomic) double confidence; // @dynamic confidence;
@property (strong, nonatomic) NSSet *consequent; // @dynamic consequent;
@property (nonatomic) double support; // @dynamic support;
@property (nonatomic) long long uniqueDaysLastWeek; // @dynamic uniqueDaysLastWeek;
@property (nonatomic) long long uniqueDaysTotal; // @dynamic uniqueDaysTotal;

+ (id)fetchRequest;

@end

