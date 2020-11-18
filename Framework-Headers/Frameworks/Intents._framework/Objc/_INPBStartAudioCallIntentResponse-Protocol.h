//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBCallMetrics;

@protocol _INPBStartAudioCallIntentResponse <NSObject>

@property (nonatomic) int audioRoute;
@property (nonatomic) BOOL hasAudioRoute;
@property (readonly, nonatomic) BOOL hasMetrics;
@property (readonly, nonatomic) BOOL hasStatus;
@property (strong, nonatomic) _INPBCallMetrics *metrics;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSArray *targetContacts;
@property (readonly, nonatomic) unsigned long long targetContactsCount;

- (int)StringAsAudioRoute:(NSString *)arg1;
- (void)addTargetContacts:(NSString *)arg1;
- (NSString *)audioRouteAsString:(int)arg1;
- (void)clearTargetContacts;
- (NSString *)targetContactsAtIndex:(unsigned long long)arg1;
@end

