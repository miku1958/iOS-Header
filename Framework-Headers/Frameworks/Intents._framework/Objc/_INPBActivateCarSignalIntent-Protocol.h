//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@protocol _INPBActivateCarSignalIntent <NSObject>

@property (strong, nonatomic) _INPBDataString *carName;
@property (readonly, nonatomic) BOOL hasCarName;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) int *signals;
@property (readonly, nonatomic) unsigned long long signalsCount;

- (int)StringAsSignals:(NSString *)arg1;
- (void)addSignals:(int)arg1;
- (void)clearSignals;
- (void)setSignals:(int *)arg1 count:(unsigned long long)arg2;
- (NSString *)signalsAsString:(int)arg1;
- (int)signalsAtIndex:(unsigned long long)arg1;
@end

