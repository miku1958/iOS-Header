//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@protocol _INPBSetDefrosterSettingsInCarIntent <NSObject>

@property (strong, nonatomic) _INPBDataString *carName;
@property (nonatomic) int defroster;
@property (nonatomic) BOOL enable;
@property (readonly, nonatomic) BOOL hasCarName;
@property (nonatomic) BOOL hasDefroster;
@property (nonatomic) BOOL hasEnable;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata;

- (int)StringAsDefroster:(NSString *)arg1;
- (NSString *)defrosterAsString:(int)arg1;
@end

