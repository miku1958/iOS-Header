//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class TRIFactorLevels;

@interface TRICompatibilityVersion : TRIPBMessage
{
}

@property (strong, nonatomic) TRIFactorLevels *control; // @dynamic control;
@property (strong, nonatomic) TRIFactorLevels *defaultFactorLevels; // @dynamic defaultFactorLevels;
@property (nonatomic) BOOL hasControl; // @dynamic hasControl;
@property (nonatomic) BOOL hasDefaultFactorLevels; // @dynamic hasDefaultFactorLevels;
@property (nonatomic) BOOL hasId_p; // @dynamic hasId_p;
@property (nonatomic) unsigned int id_p; // @dynamic id_p;

+ (id)descriptor;

@end
