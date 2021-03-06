//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBFilePropertyValue;

@protocol _INPBFileProperty <NSObject>

@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasQualifier;
@property (readonly, nonatomic) BOOL hasValue;
@property (nonatomic) int name;
@property (nonatomic) int qualifier;
@property (strong, nonatomic) _INPBFilePropertyValue *value;

- (int)StringAsName:(NSString *)arg1;
- (int)StringAsQualifier:(NSString *)arg1;
- (NSString *)nameAsString:(int)arg1;
- (NSString *)qualifierAsString:(int)arg1;
@end

