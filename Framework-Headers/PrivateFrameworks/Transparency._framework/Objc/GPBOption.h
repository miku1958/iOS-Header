//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class GPBAny, NSString;

__attribute__((visibility("hidden")))
@interface GPBOption : GPBMessage
{
}

@property (nonatomic) BOOL hasValue; // @dynamic hasValue;
@property (copy, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) GPBAny *value; // @dynamic value;

+ (id)descriptor;

@end

