//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata;

@protocol _INPBEndWorkoutIntent <NSObject>

@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasWorkoutName;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (strong, nonatomic) _INPBDataString *workoutName;

@end

