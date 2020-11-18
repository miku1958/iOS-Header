//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSData, NSString, _INPBValueMetadata;

@protocol _INPBURLValue <NSObject>

@property (copy, nonatomic) NSString *absoluteString;
@property (readonly, nonatomic) BOOL hasAbsoluteString;
@property (readonly, nonatomic) BOOL hasScope;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (copy, nonatomic) NSData *scope;
@property (strong, nonatomic) _INPBValueMetadata *valueMetadata;

@end
