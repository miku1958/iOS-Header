//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class TRIPBExtensionRangeOptions;

@interface TRIPBDescriptorProto_ExtensionRange : TRIPBMessage
{
}

@property (nonatomic) int end; // @dynamic end;
@property (nonatomic) BOOL hasEnd; // @dynamic hasEnd;
@property (nonatomic) BOOL hasOptions; // @dynamic hasOptions;
@property (nonatomic) BOOL hasStart; // @dynamic hasStart;
@property (strong, nonatomic) TRIPBExtensionRangeOptions *options; // @dynamic options;
@property (nonatomic) int start; // @dynamic start;

+ (id)descriptor;

@end
