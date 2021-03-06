//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSData, NSMutableArray, NSString;

@interface QueryRequest : GPBMessage
{
}

@property (copy, nonatomic) NSData *accountId; // @dynamic accountId;
@property (nonatomic) int application; // @dynamic application;
@property (strong, nonatomic) NSMutableArray *devicesArray; // @dynamic devicesArray;
@property (readonly, nonatomic) unsigned long long devicesArray_Count; // @dynamic devicesArray_Count;
@property (copy, nonatomic) NSString *uri; // @dynamic uri;
@property (copy, nonatomic) NSData *uriVrfOutput; // @dynamic uriVrfOutput;
@property (nonatomic) int version; // @dynamic version;

+ (id)descriptor;

@end

