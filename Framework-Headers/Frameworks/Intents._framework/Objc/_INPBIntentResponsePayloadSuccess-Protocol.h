//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSData, NSString;

@protocol _INPBIntentResponsePayloadSuccess <NSObject>

@property (readonly, nonatomic) BOOL hasResponseMessageData;
@property (readonly, nonatomic) BOOL hasResponseTypeName;
@property (nonatomic) BOOL hasShouldOpenContainingApplication;
@property (copy, nonatomic) NSData *responseMessageData;
@property (copy, nonatomic) NSString *responseTypeName;
@property (nonatomic) BOOL shouldOpenContainingApplication;

@end
