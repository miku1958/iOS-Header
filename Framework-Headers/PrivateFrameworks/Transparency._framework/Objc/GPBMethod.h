//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GPBMethod : GPBMessage
{
}

@property (copy, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property (readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property (nonatomic) BOOL requestStreaming; // @dynamic requestStreaming;
@property (copy, nonatomic) NSString *requestTypeURL; // @dynamic requestTypeURL;
@property (nonatomic) BOOL responseStreaming; // @dynamic responseStreaming;
@property (copy, nonatomic) NSString *responseTypeURL; // @dynamic responseTypeURL;
@property (nonatomic) int syntax; // @dynamic syntax;

+ (id)descriptor;

@end

