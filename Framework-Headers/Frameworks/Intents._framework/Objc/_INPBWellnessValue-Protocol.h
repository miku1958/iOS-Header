//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDouble, _INPBInteger, _INPBValueMetadata;

@protocol _INPBWellnessValue <NSObject>

@property (readonly, nonatomic) BOOL hasOrdinalValue;
@property (readonly, nonatomic) BOOL hasPbDoubleValue;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (strong, nonatomic) _INPBInteger *ordinalValue;
@property (strong, nonatomic) _INPBDouble *pbDoubleValue;
@property (strong, nonatomic) _INPBValueMetadata *valueMetadata;

@end

