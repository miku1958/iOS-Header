//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBIntentMetadata;

@protocol _INPBPlayMessageSoundIntent <NSObject>

@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasMessageIdentifier;
@property (nonatomic) BOOL hasSoundType;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (nonatomic) int soundType;

- (int)StringAsSoundType:(NSString *)arg1;
- (NSString *)soundTypeAsString:(int)arg1;
@end
