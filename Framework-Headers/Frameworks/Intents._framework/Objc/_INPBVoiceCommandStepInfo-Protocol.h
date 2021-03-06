//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBVoiceCommandStepInfo <NSObject>

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) int category;
@property (readonly, nonatomic) BOOL hasApplicationIdentifier;
@property (nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *name;

- (int)StringAsCategory:(NSString *)arg1;
- (NSString *)categoryAsString:(int)arg1;
@end

