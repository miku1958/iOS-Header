//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIPBUninterpretedOption_NamePart : TRIPBMessage
{
}

@property (nonatomic) BOOL hasIsExtension; // @dynamic hasIsExtension;
@property (nonatomic) BOOL hasNamePart; // @dynamic hasNamePart;
@property (nonatomic) BOOL isExtension; // @dynamic isExtension;
@property (copy, nonatomic) NSString *namePart; // @dynamic namePart;

+ (id)descriptor;

@end

