//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@protocol _INPBSetMessageAttributeIntent <NSObject>

@property (nonatomic) int attribute;
@property (nonatomic) BOOL hasAttribute;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (copy, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) unsigned long long identifiersCount;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata;

- (int)StringAsAttribute:(NSString *)arg1;
- (void)addIdentifier:(NSString *)arg1;
- (NSString *)attributeAsString:(int)arg1;
- (void)clearIdentifiers;
- (NSString *)identifierAtIndex:(unsigned long long)arg1;
@end
