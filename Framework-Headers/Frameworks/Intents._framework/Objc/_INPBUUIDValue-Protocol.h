//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBValueMetadata;

@protocol _INPBUUIDValue <NSObject>

@property (readonly, nonatomic) BOOL hasUuidString;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (copy, nonatomic) NSString *uuidString;
@property (strong, nonatomic) _INPBValueMetadata *valueMetadata;

@end
