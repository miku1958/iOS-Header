//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBDataString;

@protocol _INPBCustomObject <NSObject>

@property (copy, nonatomic) NSArray *alternatives;
@property (readonly, nonatomic) unsigned long long alternativesCount;
@property (copy, nonatomic) NSString *displayString;
@property (readonly, nonatomic) BOOL hasDisplayString;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasPronunciationHint;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *pronunciationHint;

+ (Class)alternativeType;
- (void)addAlternative:(_INPBDataString *)arg1;
- (_INPBDataString *)alternativeAtIndex:(unsigned long long)arg1;
- (void)clearAlternatives;
@end
