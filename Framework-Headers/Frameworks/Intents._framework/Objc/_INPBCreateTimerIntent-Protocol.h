//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata;

@protocol _INPBCreateTimerIntent <NSObject>

@property (nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasLabel;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (strong, nonatomic) _INPBDataString *label;

@end

